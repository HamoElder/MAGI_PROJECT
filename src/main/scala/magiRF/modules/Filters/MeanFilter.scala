package magiRF.modules.Filters

import spinal.core._
import spinal.lib._

case class MeanFilterConfig(
                           windowsSize: Int
                           ){
    assert(isPow2(windowsSize) & windowsSize >= 2, "The size of windows must be a power of 2 and equal or bigger than 2")
}

case class MeanFilter[T <: Data](dataType: HardType[T], config: MeanFilterConfig) extends Component {
    val io = master(filterBundle(dataType, dataType))
    noIoPrefix()

    val filter_sum = Reg(SInt((dataType.getBitsWidth + config.windowsSize) bits)) init(0)
    val filter_mean = Reg(SInt((dataType.getBitsWidth) bits)) init(0)
    val windowsBuffer = Vec(Reg(dataType), config.windowsSize)

    when(io.filter_clc){
        for(idx <- 0 until config.windowsSize){
            windowsBuffer(idx) := windowsBuffer(idx).getZero
        }
        filter_sum := 0
        filter_mean := 0
    }.elsewhen(io.filter_data_in.valid){
        windowsBuffer(0) := io.filter_data_in.payload
        for(idx <- 1 until config.windowsSize){
            windowsBuffer(idx) := windowsBuffer(idx - 1)
        }
        filter_sum := filter_sum + windowsBuffer(0).asBits.asSInt - windowsBuffer(config.windowsSize - 1).asBits.asSInt
        filter_mean := (filter_sum |>> (log2Up(config.windowsSize))).resized
    }

    io.filter_data_out.valid := RegNext(~io.filter_clc)
    io.filter_data_out.payload := filter_mean.as(dataType)

}

object meanFilterBench{
    def main(args: Array[String]): Unit ={
        val mean_filter_config = MeanFilterConfig(8)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl").generateSystemVerilog(new MeanFilter(UInt(16 bits), mean_filter_config)).printPruned().printUnused()
    }
}
