package magiSOC.perips.Ethernet.AxiStream4Mac


import magiSOC.perips.Ethernet.PhyTx
import spinal.core._
import spinal.lib._
import utils.common.CRC.{Crc, CrcKind}

case class MacTxCrc(dataWidth: Int) extends Component {
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(PhyTx(dataWidth))))
        val result_data = master(Stream(Fragment(PhyTx(dataWidth))))
    }
    noIoPrefix()

    val emitCrc = RegInit(False) setWhen(io.raw_data.lastFire) clearWhen(io.result_data.lastFire)
    val counter = Reg(UInt(log2Up(32/dataWidth) bits)) init(0)
    val crc = Crc(CrcKind.Crc32, dataWidth)
    crc.io.input << io.raw_data.toFlowFire.translateWith(io.raw_data.data)
    crc.io.flush := io.result_data.lastFire

    io.result_data.last := False
    when(!emitCrc) {
        io.result_data.valid := io.raw_data.valid
        io.result_data.fragment := io.raw_data.fragment
        io.raw_data.ready := io.result_data.ready
    } otherwise {
        io.raw_data.ready := False
        io.result_data.valid := True
        io.result_data.data := crc.io.result.subdivideIn(dataWidth bits).read(counter)
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

case class MacTxHeader(dataWidth: Int) extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(PhyTx(dataWidth))))
        val result_data = master(Stream(Fragment(PhyTx(dataWidth))))
    }
    noIoPrefix()
    val header = B"x55555555555555D5"
    val headerWords: Int = header.getBitsWidth / dataWidth
    val header_cnt = Reg(UInt(log2Up(headerWords + 1) bits)) init(0)

    println(headerWords)

    when(header_cnt < headerWords){
        io.result_data.data :=  header.subdivideIn(dataWidth bits).reverse.read(header_cnt.resized)
        when(io.result_data.fire) {
            header_cnt := header_cnt + 1
        }
        io.result_data.valid := True
        io.result_data.last := False
        io.raw_data.ready := False
    }.otherwise{
        when(io.result_data.lastFire){
            header_cnt := 0
        }
        io.result_data.data := io.raw_data.data
        io.result_data.valid := io.raw_data.valid
        io.result_data.last := io.raw_data.last
        io.raw_data.ready := io.result_data.ready
    }
}


case class MacTxPadder(dataWidth : Int) extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(PhyTx(dataWidth))))
        val result_data = master(Stream(Fragment(PhyTx(dataWidth))))
    }
    noIoPrefix()
    val byteCount = 64-4
    val cycles = (byteCount*8 + dataWidth-1)/dataWidth
    val counter = Reg(UInt(log2Up(cycles) bits)) init(0)
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
        io.result_data.data := 0
        io.result_data.last := ok
    }
}

case class MacTxAligner(dataWidth: Int, fifoDepth: Int) extends Component{
    def cntLimit: Int = scala.math.ceil(fifoDepth / 64).toInt
    def cntDataType: UInt = UInt(log2Up(cntLimit) bits)
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(PhyTx(dataWidth))))
        val result_data = master(Stream(Fragment(PhyTx(dataWidth))))
    }
    noIoPrefix()
    require(fifoDepth >= 1500)
    val data_fifo = StreamFifo(Fragment(PhyTx(dataWidth)), fifoDepth)
    val cnt = Reg(cntDataType) init(0)
    data_fifo.io.push << io.raw_data
    when(io.raw_data.lastFire && io.result_data.lastFire){
        cnt := cnt
    }.elsewhen(io.raw_data.last){
        cnt := cnt + 1
    }.elsewhen(io.result_data.lastFire){
        cnt := cnt - 1
    }
    io.result_data << data_fifo.io.pop.haltWhen(cnt === 0)
}

case class MacTx(dataWidth: Int, fifoDepth: Int) extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(PhyTx(dataWidth))))
        val result_data = master(Stream(Fragment(PhyTx(dataWidth))))
    }
    noIoPrefix()
    val mac_tx_padder = MacTxPadder(dataWidth)
    mac_tx_padder.io.raw_data << io.raw_data
    val mac_crc_adder = MacTxCrc(dataWidth)
    mac_crc_adder.io.raw_data << mac_tx_padder.io.result_data
    val mac_preamble_adder = MacTxHeader(dataWidth)
    mac_preamble_adder.io.raw_data << mac_crc_adder.io.result_data
    val mac_aligned = MacTxAligner(dataWidth, fifoDepth)
    mac_aligned.io.raw_data << mac_preamble_adder.io.result_data

    io.result_data << mac_aligned.io.result_data
}