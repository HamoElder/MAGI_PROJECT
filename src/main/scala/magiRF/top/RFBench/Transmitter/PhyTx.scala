package magiRF.top.RFBench.Transmitter

import magiRF.interface.misc.LVDS.LVDS
import magiRF.modules.Modem.Misc.dataDivDynamic
import magiRF.packages.Coder.Convolutional.Encoder.ConvEncoder
import magiRF.packages.Scramble.Scrambler
import magiRF.top.RFBench.Config.{codedDataType, codedDataWidth, conv_encoder_config, crc32_config, crc_data_width, genModulatorConfig, genModulatorDivConfig, iqWidth, method_width, modIQDataType, phyDataType, phyDataWidth, phy_payload_lower_boundary, phy_payload_upper_boundary, rf_payload_upper_boundary, scrambler_poly, scrambler_reg_width, size_width}
import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle
import utils.common.CRC.Crc

case class PhyTxInterface() extends Bundle {
    def interfaceWidth: Int = iqWidth / 2
    def interfaceDataType: Bits = Bits(interfaceWidth bits)
    val rx_if_frame = slave(LVDS(Bool()))
    val rx_if_data  = slave(LVDS(interfaceDataType))
    val rx_data_clk = slave(LVDS(Bool()))

    val tx_if_frame = master(LVDS(Bool()))
    val tx_fb_clk = master(LVDS(Bool()))
    val tx_if_data = master(LVDS(interfaceDataType))
}

case class PhyTxCrc()extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(phyDataType)))
        val result_data = master(Stream(Fragment(phyDataType)))
    }
    noIoPrefix()
    val emitCrc = RegInit(False) setWhen(io.raw_data.lastFire) clearWhen(io.result_data.lastFire)
    val counter = Reg(UInt(log2Up(32 / phyDataWidth) bits)) init(0)
    val crc = Crc(crc32_config, phyDataWidth)
    crc.io.input << io.raw_data.toFlowFire.translateWith(io.raw_data.fragment)
    crc.io.flush := io.result_data.lastFire

    io.result_data.last := False
    when(!emitCrc) {
        io.result_data.valid := io.raw_data.valid
        io.result_data.fragment := io.raw_data.fragment
        io.raw_data.ready := io.result_data.ready
    } otherwise {
        io.raw_data.ready := False
        io.result_data.valid := True
        io.result_data.fragment := crc.io.result.subdivideIn(phyDataWidth bits).read(counter)
        when(counter === counter.maxValue) {
            io.result_data.last := True
            when(io.result_data.ready) {
                emitCrc := False
            }
        }
        when(io.result_data.ready) {
            counter := counter + 1
        }
    }
}

case class PhyTxPadder() extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(phyDataType)))
        val result_data = master(Stream(Fragment(phyDataType)))
    }
    noIoPrefix()
    val byteCount:Int = phy_payload_lower_boundary.toInt
    val cycles: Int = (byteCount*8 + phyDataWidth - 1)/phyDataWidth
    val counter: UInt = Reg(UInt(log2Up(cycles) bits)) init(0)
    val ok = counter === cycles-1
    val fill = counter =/= 0 && io.raw_data.first

    when(!ok && io.result_data.fire){
        counter := counter + 1
    }
    when(io.result_data.lastFire){
        counter := 0
    }
    io.result_data << io.raw_data.haltWhen(fill)
    when(!ok){
        io.result_data.last := False
    }
    when(fill){
        io.result_data.valid := True
        io.result_data.fragment := 0
        io.result_data.last := ok
    }
}

case class PhyTxEncoder() extends Component {
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(phyDataType)))
        val result_data = master(Stream(Fragment(codedDataType)))
    }
    noIoPrefix()
    val phy_tx_encoder = ConvEncoder(conv_encoder_config)
    val emitEncoding = RegInit(False) setWhen(io.raw_data.lastFire) clearWhen(phy_tx_encoder.io.raw_data.lastFire)

    when(emitEncoding){
        io.raw_data.ready := False
        phy_tx_encoder.io.raw_data.valid := True
        phy_tx_encoder.io.raw_data.fragment := 0
        phy_tx_encoder.io.raw_data.last := True
    }.otherwise{
        io.raw_data.ready := phy_tx_encoder.io.raw_data.ready
        phy_tx_encoder.io.raw_data.valid :=  io.raw_data.valid
        phy_tx_encoder.io.raw_data.fragment :=  io.raw_data.fragment
        phy_tx_encoder.io.raw_data.last := False
    }
    phy_tx_encoder.io.tail_bits.valid := False
    phy_tx_encoder.io.tail_bits.payload := 0
    io.result_data << phy_tx_encoder.io.coded_data.toStream
}

case class PhyTxScrambler() extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(codedDataType)))
        val result_data = master(Stream(Fragment(codedDataType)))
    }
    noIoPrefix()
    val scrambler = Scrambler(codedDataWidth, scrambler_reg_width, scrambler_poly)
    object PhyTxScramblerStatus extends SpinalEnum {
        val IDLE, SCRAMBLING, FINAL = newElement()
    }
    val scrambler_status = Reg(PhyTxScramblerStatus()) init(PhyTxScramblerStatus.IDLE)

    io.result_data.valid := False
    io.result_data.fragment := scrambler.io.scram_data.payload ^ io.raw_data.fragment
    io.result_data.last := io.raw_data.last
    io.raw_data.ready := False
    scrambler.io.init_state.payload := 127

    switch(scrambler_status){
        is(PhyTxScramblerStatus.IDLE){
            when(io.raw_data.valid){
                scrambler.io.init_state.valid := False
                scrambler.io.scram_data.ready := True
                scrambler_status := PhyTxScramblerStatus.SCRAMBLING
            }.otherwise{
                scrambler.io.init_state.valid := True
                scrambler.io.scram_data.ready := False
            }
        }
        is(PhyTxScramblerStatus.SCRAMBLING){
            when(io.raw_data.lastFire){
                scrambler_status := PhyTxScramblerStatus.FINAL
            }
            io.raw_data.ready := io.result_data.ready
            scrambler.io.init_state.valid := False
            scrambler.io.scram_data.ready := io.raw_data.fire
            io.result_data.valid := scrambler.io.scram_data.valid && io.raw_data.valid
        }
        is(PhyTxScramblerStatus.FINAL){
            scrambler_status := PhyTxScramblerStatus.IDLE
            scrambler.io.init_state.valid := True
            scrambler.io.scram_data.ready := False
        }
    }

}

case class PhyModulator() extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(codedDataType)))
        val result_data = master(Stream(Fragment(codedDataType)))
        val select = in(UInt(log2Up(genModulatorConfig.selectNum) bits))
    }
    noIoPrefix()
    val mod_data_div = dataDivDynamic(genModulatorDivConfig)
    object PhyTxModulatorStatus extends SpinalEnum {
        val IDLE, HEADER, DATA = newElement()
    }
    val modulator_status = Reg(PhyTxModulatorStatus()) init(PhyTxModulatorStatus.IDLE)
    switch(modulator_status){
        is(PhyTxModulatorStatus.IDLE){

        }
        is(PhyTxModulatorStatus.HEADER){

        }
        is(PhyTxModulatorStatus.DATA){

        }
    }
    mod_data_div.io.cnt_limit := codedDataWidth


    mod_data_div.io.base_data << io.raw_data


}


case class PhyTxICFront() extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(modIQDataType)))
        val result_data = master(Stream(IQBundle(Bits(iqWidth bits))))
    }
    noIoPrefix()
    io.raw_data.ready := io.result_data.ready
    io.result_data.cha_i := io.raw_data.valid ? io.raw_data.cha_i.asBits | 0
    io.result_data.cha_q := io.raw_data.valid ? io.raw_data.cha_q.asBits | 0
    io.result_data.valid := io.raw_data.valid
}


case class PhyHeaderExtender() extends Component {
    def counterDataType: UInt = UInt(size_width*8 bits)
    def payloadSizelimit: BigInt = phy_payload_upper_boundary + crc_data_width + method_width + size_width + 3
    object PhyTxHeaderStatus extends SpinalEnum {
        val IDLE, HEADER, DATA = newElement()
    }
    val io = new Bundle{
        val mod_method = in(Bits(8 bits))
        val raw_data = slave(Stream(Fragment(codedDataType)))
        val result_data = master(Stream(Fragment(codedDataType)))
    }
    noIoPrefix()
    val counter = Reg(counterDataType) init(0)
    val dataFifo = StreamFifo(Fragment(codedDataType), payloadSizelimit.toInt)
    val emitHeader = RegInit(False) setWhen(io.raw_data.lastFire) clearWhen(io.result_data.lastFire)
    dataFifo.io.push << io.raw_data.haltWhen(emitHeader)
    when(io.result_data.lastFire){
        counter := 0
    }.elsewhen(io.raw_data.fire){
        counter := counter + 1
    }

    val header_status = Reg(PhyTxHeaderStatus()) init(PhyTxHeaderStatus.IDLE)
    io.result_data.last := False
    io.result_data.valid := False
    io.result_data.fragment := 0
    dataFifo.io.pop.ready := False
    switch(header_status){
        is(PhyTxHeaderStatus.IDLE){
            when(emitHeader){
                header_status := PhyTxHeaderStatus.HEADER
            }
        }
        is(PhyTxHeaderStatus.HEADER){
            io.result_data.valid := True
            io.result_data.fragment := io.mod_method ## (counter << 1).resize(size_width.toInt*8)
            when(io.result_data.ready){
                header_status := PhyTxHeaderStatus.DATA
            }
        }
        is(PhyTxHeaderStatus.DATA){
            dataFifo.io.pop.ready :=  io.result_data.ready
            io.result_data.valid := dataFifo.io.pop.valid
            io.result_data.fragment := dataFifo.io.pop.fragment
            io.result_data.last := dataFifo.io.pop.last
            when(io.result_data.lastFire){
                header_status := PhyTxHeaderStatus.IDLE
            }
        }
    }

}
