package utils.common.Sort

import spinal.lib._
import spinal.core._

case class BitonicMerge[T <: Data](dataType: HardType[T], dataSize: Int, useSigned: Boolean) extends Component {
    val dataWidth:Int = dataType.getBitsWidth
    def payloadDataType: Bits = Bits(dataWidth bits)
    def idxDataWidth: Int = log2Up(dataSize)
    def idxDataType: UInt = UInt(idxDataWidth bits)
    def stages: Int = log2Up(dataSize) - 1

    def resultDataType: IdxWithData = IdxWithData(payloadDataType, idxDataType, useSigned)
    val io = new Bundle{
        val raw_data = slave(Stream(dataType))
//        val result_data = master(Stream(resultDataType))
    }
    noIoPrefix()

    for(stage <- 0 until stages){
        val cnt: UInt = Reg(UInt(stages + 1 bits)) init(0)
        when(io.raw_data.fire){
            cnt := cnt + 1
        }
        for(idx <- 0 until stage + 1){
            println(stage, idx)
            println(stages, idx)
        }
    }
    io.raw_data.ready := True
}


object BitonicMergeBench{
    def main(args: Array[String]): Unit ={
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl").generateSystemVerilog(new BitonicMerge(Bits(16 bits), 16, true)).printPruned().printUnused()
    }
}
