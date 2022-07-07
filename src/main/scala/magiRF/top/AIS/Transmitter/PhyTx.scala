package magiRF.top.AIS.Transmitter


import magiRF.top.AIS.Config.{crc16_config, crc_data_width, phyDataType, phyDataWidth}
import spinal.core._
import spinal.lib._
import utils.common.CRC.Crc
import utils.common.DataSplitUnite.DataWidthConvert.StreamFragmentWidthConvert


case class PhyTxPreambleExtender() extends Component{
    object PhyTxPreambleStatus extends SpinalEnum {
        val IDLE, PREAMBLE, FLAG, DATA = newElement()
    }
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(phyDataType)))
        val result_data = master(Stream(Fragment(phyDataType)))
    }
    noIoPrefix()
    val cnt = Reg(UInt(2 bits)) init(0)
    val preamble_status = Reg(PhyTxPreambleStatus()) init(PhyTxPreambleStatus.IDLE)
    switch(preamble_status){
        is(PhyTxPreambleStatus.IDLE){
            when(io.raw_data.valid){
                preamble_status := PhyTxPreambleStatus.PREAMBLE
            }
            cnt := 0
            io.result_data.valid := False
            io.result_data.fragment := 0
            io.result_data.last := False
            io.raw_data.ready := False
        }
        is(PhyTxPreambleStatus.PREAMBLE){
            when(io.result_data.fire){
                cnt := cnt + 1
                when(cnt === 2){
                    preamble_status := PhyTxPreambleStatus.FLAG
                }
            }
            io.result_data.valid := True
            io.result_data.fragment := 0xaa
            io.result_data.last := False
            io.raw_data.ready := False
        }
        is(PhyTxPreambleStatus.FLAG){
            preamble_status := PhyTxPreambleStatus.DATA
            io.result_data.valid := True
            io.result_data.fragment := 0x7E
            io.result_data.last := False
            io.raw_data.ready := False
        }
        is(PhyTxPreambleStatus.DATA){
            when(io.raw_data.lastFire){
                preamble_status := PhyTxPreambleStatus.IDLE
            }
            io.result_data.valid := io.raw_data.valid
            io.result_data.fragment := io.raw_data.fragment
            io.result_data.last := io.raw_data.last
            io.raw_data.ready := io.result_data.ready
        }
    }

}


case class PhyTxCrc() extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(phyDataType)))
        val result_data = master(Stream(Fragment(phyDataType)))
    }
    noIoPrefix()
    val emitCrc = RegInit(False) setWhen(io.raw_data.lastFire) clearWhen(io.result_data.lastFire)
    val counter = Reg(UInt(log2Up((crc_data_width.toInt * 8) / phyDataWidth) bits)) init(0)
    val crc = Crc(crc16_config, phyDataWidth)
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
            when(io.result_data.fire) {
                emitCrc := False
            }
        }
        when(io.result_data.fire) {
            counter := counter + 1
        }
    }
}

case class PhyTxEndFlag() extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(phyDataType)))
        val result_data = master(Stream(Fragment(phyDataType)))
    }
    noIoPrefix()
    val last_flag = RegInit(False) setWhen(io.raw_data.lastFire) clearWhen(io.result_data.lastFire)
    when(!last_flag) {
        io.result_data.valid := io.raw_data.valid
        io.result_data.fragment := io.raw_data.fragment
        io.result_data.last := False
        io.raw_data.ready := io.result_data.ready
    } otherwise {
        io.raw_data.ready := False
        io.result_data.valid := True
        io.result_data.fragment := 0x7E
        io.result_data.last := True
    }
}

case class PhyTxBufferPadding() extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(phyDataType)))
        val result_data = master(Stream(Fragment(phyDataType)))
    }
    noIoPrefix()
    val last_padding = RegInit(False) setWhen(io.raw_data.lastFire) clearWhen(io.result_data.lastFire)
    val cnt = Reg(UInt(2 bits)) init(0)
    when(!last_padding) {
        cnt := 0
        io.result_data.valid := io.raw_data.valid
        io.result_data.fragment := io.raw_data.fragment
        io.result_data.last := False
        io.raw_data.ready := io.result_data.ready
    } otherwise {
        when(io.result_data.fire){
            cnt := cnt + 1
        }
        io.raw_data.ready := False
        io.result_data.valid := True
        io.result_data.fragment := 0
        when(cnt === 2){
            io.result_data.last := True
        }.otherwise{
            io.result_data.last := False
        }
    }
}

case class PhyTxNRZI() extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(phyDataType)))
        val result_data = master(Stream(Fragment(Bits(1 bits))))
    }
    noIoPrefix()
    val bit_cursor = Reg(Bool()) init(False)
    val bits_buffer = Reg(Bits(5 bits)) init(0)
    val bit_full_ones = bits_buffer === B"5'b11111"

    val bit_split = StreamFragmentWidthConvert(phyDataType, Bits(1 bits), fifoDepth = 16)
    bit_split.io.raw_data << io.raw_data
    bit_split.io.adapted_data.ready := io.result_data.ready && (~bit_full_ones)
//    when(bit_split.io.adapted_data.fire || bit_full_ones){
//        for(idx <- 1 until 5){
//            bits_buffer(idx) := bits_buffer(idx - 1)
//        }
//        bits_buffer(0) := bit_full_ones ? B(0) | bit_split.io.adapted_data.fragment
//    }

//    when(bit_split.io.adapted_data.fire){
//
//    }

}
