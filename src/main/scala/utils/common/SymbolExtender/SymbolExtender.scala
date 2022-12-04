package utils.common.SymbolExtender

import spinal.core._
import spinal.lib._

case class SymbolExtender(dataWidth: Int, SamplesPerSymbol: Int) extends Component {
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(Bits(dataWidth bits))))
        val result_data = master(Stream(Fragment(Bits(dataWidth bits))))
    }
    noIoPrefix()
    val cnt = Reg(UInt(log2Up(SamplesPerSymbol) bits)) init(0)
    val data_buf = Reg(Bits(dataWidth bits)) init(0)
    val raw_last = Reg(Bool()) init(False)
    when(io.raw_data.fire) {
        raw_last := io.raw_data.last
        data_buf := io.raw_data.fragment
    }
    when(io.result_data.fire) {
        cnt := (cnt === SamplesPerSymbol - 1) ? U(0) | cnt + 1
    }
    io.raw_data.ready := io.result_data.ready && (cnt === 0)
    io.result_data.valid := io.raw_data.valid || (cnt =/= 0)
    io.result_data.last := raw_last && (cnt === SamplesPerSymbol - 1)
    io.result_data.fragment := (cnt === 0) ? io.raw_data.fragment | data_buf
}


object SymbolExtenderBench{
    def main(args: Array[String]): Unit = {
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/SymbolExtender").generateSystemVerilog(new SymbolExtender(1, 4)).printPruned()
    }
}