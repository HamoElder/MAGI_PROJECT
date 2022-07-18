package magiSOC.perips.Ethernet.AxiStream4Mac

import magiSOC.perips.Ethernet.PhyRx
import spinal.core._
import spinal.lib._
import utils.common.CRC.{Crc, CrcKind}

case class MacRxPreambleDetector(dataWidth: Int) extends Component{
    val io = new Bundle{
        val raw_data: Stream[Fragment[PhyRx]] = slave(Stream(Fragment(PhyRx(dataWidth))))
        val result_data: Stream[Fragment[PhyRx]] = master(Stream(Fragment(PhyRx(dataWidth))))
    }
    noIoPrefix()
    val startDelimiter = B"x55555555555555D5"
    val startDelimiterWidth: Int = startDelimiter.getBitsWidth
    val history: Vec[Stream[Fragment[PhyRx]]] = History(io.raw_data, 0 until startDelimiterWidth/dataWidth, when = io.raw_data.fire)
    val historyDataCat: Bits = B(Cat(history.map(_.data).reverse))
    val hit: Bool = history.map(_.valid).andR && historyDataCat === startDelimiter
    val inFrame: Bool = RegInit(False)

    io.result_data.valid := False
    io.result_data.payload  := io.raw_data.payload
    io.raw_data.ready := !inFrame || io.result_data.ready

    when(!inFrame){
        when(hit){
            inFrame := True
        }
    } otherwise {
        when(io.raw_data.valid) {
            io.raw_data.valid := True
            when(io.result_data.ready && io.raw_data.last){
                inFrame := False
            }
        }
    }
}


case class MacRxDescMacFilter(dataWidth: Int) extends Component{
    def macAddressWidth: Int = 48
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(PhyRx(dataWidth))))
        val result_data = master(Stream(Fragment(PhyRx(dataWidth))))
        val local_addr = in(Bits(macAddressWidth bits))
        val enable = in(Bool())
    }
    noIoPrefix()
    val history: Vec[Stream[Fragment[PhyRx]]] = History(io.raw_data, 0 until macAddressWidth / dataWidth,  when = io.raw_data.fire)
    val historyDataCat: Bits = B(Cat(history.map(_.data).reverse))
    val hit: Bool = history.map(_.valid).andR && historyDataCat === io.local_addr
    val inFrame: Bool = RegInit(False)

    io.result_data.valid := False
    io.result_data.payload := io.raw_data.payload
    io.raw_data.ready := !inFrame || io.result_data.ready
    when(!inFrame){
        when(hit){
            inFrame := True
        }
    } otherwise {
        when(io.raw_data.valid) {
            io.raw_data.valid := True
            when(io.result_data.ready && io.raw_data.last){
                inFrame := False
            }
        }
    }
}

case class MacRxChecker(dataWidth: Int) extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(PhyRx(dataWidth))))
        val result_data = master(Stream(Fragment(PhyRx(dataWidth))))
    }
    noIoPrefix()
    val crc = Crc(CrcKind.Crc32, dataWidth)
    crc.io.input.valid := io.raw_data.valid
    crc.io.input.payload := io.raw_data.data
    crc.io.flush := io.result_data.lastFire

    val data_fifo = StreamFifo(Fragment(PhyRx(dataWidth)), 1500)
    data_fifo.io.push << io.raw_data
    //    val crcHit = crc.io.resultNext === io.input.data

//    io.result_data.valid := io.input.valid
//    io.result_data.last := io.input.last
//    io.result_data.data := io.input.data
//    io.result_data.error := io.input.error | (io.input.last)
//    io.raw_data.ready := io.output.ready
}