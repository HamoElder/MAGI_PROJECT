package magiRF.top.RFBench.Transmitter

import magiRF.interfaces.misc.lvds.LVDS
import magiRF.modules.Filters.FIR.TransposeFIR
import magiRF.modules.Modem.Misc.dataDivDynamic
import magiRF.modules.Modem.Modulator.extensions.mPSKMod
import magiRF.packages.Coder.Convolutional.Encoder.ConvEncoder
import magiRF.packages.Scramble.Scrambler
import magiRF.top.RFBench.Config.{codedDataType, codedDataWidth, conv_encoder_config, crc32_config, crc_data_width, filter_cut_off_width, genModulatorConfig, genModulatorDivConfig, header_bpsk_mod_array, iqWidth, modIQDataType, mod_method_type, mod_method_width, oversampled_zeros, phyDataType, phyDataWidth, phy_payload_lower_boundary, phy_payload_upper_boundary, rf_payload_upper_boundary, scrambler_poly, scrambler_reg_width, sdf_i_array, sdf_size, size_width, srrcConfig, srrcTaps}
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
    val isEncoding = Reg(Bool()) init(False)
    when(io.raw_data.lastFire){
        isEncoding := False
    }.elsewhen(io.raw_data.valid){
        isEncoding := True
    }
    when(isEncoding){
        io.raw_data.ready := phy_tx_encoder.io.raw_data.ready
        phy_tx_encoder.io.raw_data.valid :=  io.raw_data.valid
        phy_tx_encoder.io.raw_data.fragment :=  io.raw_data.fragment
        phy_tx_encoder.io.raw_data.last := io.raw_data.last
    }.otherwise{
        io.raw_data.ready := False
        phy_tx_encoder.io.raw_data.valid := False
        phy_tx_encoder.io.raw_data.fragment := 0
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



case class PhyTxOverSampling() extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(modIQDataType)))
        val result_data = master(Stream(Fragment(modIQDataType)))
    }
    noIoPrefix()
    val cnt = Reg(UInt(log2Up(oversampled_zeros) bits)) init(0)
    val raw_last = Reg(Bool()) init(False)
    when(io.raw_data.fire){
        raw_last := io.raw_data.last
    }
    when(io.result_data.fire){
        cnt := (cnt === oversampled_zeros - 1) ? U(0) | cnt + 1
    }
    io.raw_data.ready := io.result_data.ready && (cnt === 0)
    io.result_data.valid := io.raw_data.valid || (cnt =/= 0)
    io.result_data.last := raw_last && (cnt === oversampled_zeros - 1)
    io.result_data.cha_i := (cnt === 0) ? io.raw_data.cha_i | 0
    io.result_data.cha_q := (cnt === 0) ? io.raw_data.cha_q | 0
}


case class PhyTxFilter() extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(modIQDataType)))
        val result_data = master(Stream(Fragment(modIQDataType)))
    }
    noIoPrefix()
    val last_padding = Reg(Bool()) init(False)
    when(io.raw_data.lastFire){
        last_padding := True
    }.elsewhen(io.result_data.lastFire){
        last_padding := False
    }
    val fir_filter_iq = TransposeFIR(io.raw_data.cha_i.getBitsWidth, srrcTaps, 2, reloadableCoff = false)

    io.raw_data.ready := (~last_padding) && io.result_data.ready
    fir_filter_iq.io.raw_data.valid := io.raw_data.valid || last_padding
    fir_filter_iq.io.raw_data.payload(0) := last_padding ? S(0) | io.raw_data.cha_i
    fir_filter_iq.io.raw_data.payload(1) := last_padding ? S(0) | io.raw_data.cha_q

    io.result_data.valid := fir_filter_iq.io.filtered_data.valid
    io.result_data.cha_i := fir_filter_iq.io.filtered_data.payload(0).floor(filter_cut_off_width bits)
    io.result_data.cha_q := fir_filter_iq.io.filtered_data.payload(1).floor(filter_cut_off_width bits)
    io.result_data.last := Delay(io.raw_data.last, (srrcConfig.symbolSpan - 1) * srrcConfig.samplesPerSymbol + 1,
        fir_filter_iq.io.raw_data.fire, False)
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



case class PhyPkgInformationGen() extends Component{
    def cntDataType: UInt = UInt(size_width* 8 bits)
    def payloadSizeLimit: BigInt = phy_payload_upper_boundary + 2
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(phyDataType)))
        val result_data = master(Stream(Fragment(phyDataType)))
        val pkg_size = master(Stream(cntDataType))
    }
    noIoPrefix()
    val pkg_size_cnt = Reg(cntDataType) init(0)
    val dataFifo = StreamFifo(Fragment(phyDataType), payloadSizeLimit.toInt)
    val pkg_size_fifo = StreamFifo(cntDataType, 16)
    dataFifo.io.push << io.raw_data.haltWhen(~pkg_size_fifo.io.push.ready)
    io.result_data << dataFifo.io.pop
    when(io.raw_data.lastFire){

    }.elsewhen(io.raw_data.fire){
        pkg_size_cnt := pkg_size_cnt + 1
    }
    val pkg_size_valid = Reg(Bool()) init(False)
    val pkg_size_payload = Reg(cntDataType) init(0)
    when(io.raw_data.lastFire){
        pkg_size_valid := True
        pkg_size_payload := pkg_size_cnt + 1
        pkg_size_cnt := 0
    }.elsewhen(io.raw_data.fire){
        pkg_size_cnt := pkg_size_cnt  + 1
        pkg_size_valid := False
    }.otherwise{
        pkg_size_valid := False
    }
    pkg_size_fifo.io.push.valid := pkg_size_valid
    pkg_size_fifo.io.push.payload := pkg_size_payload

    io.pkg_size << pkg_size_fifo.io.pop
}

case class PhyHeaderExtender() extends Component {
    def cntDataType: UInt = UInt(5 bits)
    def sizeDataType: UInt = UInt(size_width* 8 bits)
    object PhyTxHeaderStatus extends SpinalEnum {
        val IDLE, SDF, HEADER, DATA = newElement()
    }
    val io = new Bundle{
        val mod_method = in(mod_method_type)
        val pkg_size = slave(Stream(sizeDataType))
        val raw_data = slave(Stream(Fragment(modIQDataType)))
        val result_data = master(Stream(Fragment(modIQDataType)))
    }
    noIoPrefix()

    val header_status = Reg(PhyTxHeaderStatus) init(PhyTxHeaderStatus.IDLE)
    val header_mod_array = Mem(modIQDataType.cha_i.clone(), 2)
    for(idx <- 0 until 2){
        header_mod_array(idx) := header_bpsk_mod_array(idx)
    }
    val sdf_i_vec = Vec(cloneOf(modIQDataType.cha_i), sdf_size)
    for(idx <- 0 until sdf_size){
        sdf_i_vec(idx) := sdf_i_array(idx)
    }

    val counter = Reg(cntDataType) init(0)
    val pkg_size_ready = Reg(Bool()) init(False)
    val pkg_size_payload = Reg(sizeDataType)

    io.raw_data.ready := False
    io.result_data.valid := False
    io.result_data.last := False
    io.result_data.cha_i := 0
    io.result_data.cha_q := 0

    val method_size: Bits = io.mod_method ## pkg_size_payload
    switch(header_status){
        is(PhyTxHeaderStatus.IDLE){
            when(io.raw_data.valid && io.pkg_size.valid){
                header_status := PhyTxHeaderStatus.SDF
                pkg_size_ready := True
            }
        }
        is(PhyTxHeaderStatus.SDF){
            when(io.pkg_size.fire){
                pkg_size_payload := io.pkg_size.payload
                pkg_size_ready := False
            }
            when(io.result_data.fire){
                when(counter === sdf_size - 1){
                    header_status := PhyTxHeaderStatus.HEADER
                    counter := (size_width * 8 + mod_method_width) - 1
                }.otherwise{
                    counter := counter + 1
                }
            }
            io.result_data.cha_i := sdf_i_vec(counter.resized)
            io.result_data.valid := True
        }
        is(PhyTxHeaderStatus.HEADER){
            when(io.result_data.fire){
                when(counter === 0){
                    header_status := PhyTxHeaderStatus.DATA
                    counter := 0
                }.otherwise{
                    counter := counter - 1
                }
            }
            io.result_data.cha_i := header_mod_array(method_size(counter.resized).asUInt)
            io.result_data.valid := True
        }
        is(PhyTxHeaderStatus.DATA){
            when(io.result_data.lastFire){
                header_status := PhyTxHeaderStatus.IDLE
            }
            io.result_data.valid := io.raw_data.valid
            io.result_data.payload := io.raw_data.payload
            io.result_data.last := io.raw_data.last

            io.raw_data.ready := io.result_data.ready
        }
    }

    io.pkg_size.ready := pkg_size_ready
}
