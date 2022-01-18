package magiRF.modules.Filters.IIR

import magiRF.modules.Filters.FIR.TransposeFIR
import spinal.core._
import spinal.lib._


case class IIR_I_Filter(dataWidth: Int, Hx: List[Int], Hy: List[Int], chaNum: Int) extends Component{
//    require(Hx.length == Hy.length, "The size of Coefficient must be matched.")
    val coffXDataWidth : Int = log2Up(Hx.max + 1) + 1
    val coffYDataWidth : Int = log2Up(Hy.max + 1) + 1
    val internalDataWidth: Int = coffXDataWidth + dataWidth
    val filteredDataWidth: Int = internalDataWidth + coffYDataWidth

    val io = new Bundle{
        val clc = in(Bool())
        val raw_data: Flow[Vec[SInt]] = slave(Flow(Vec(SInt(dataWidth bits), chaNum)))
        val filtered_data: Flow[Vec[SInt]] = master(Flow(Vec(SInt(filteredDataWidth bits), chaNum)))
    }
    noIoPrefix()

    val fir_x = TransposeFIR(dataWidth, Hx, chaNum, reloadableCoff = false)
    val fir_y = TransposeFIR(internalDataWidth, Hy, chaNum, reloadableCoff = false)

    fir_x.io.clc := io.clc
    fir_y.io.clc := io.clc
    fir_x.io.raw_data.valid := io.raw_data.valid
    fir_y.io.raw_data.valid := fir_x.io.filtered_data.valid
    for(cha <- 0 until chaNum){
        fir_x.io.raw_data.payload(cha) := io.raw_data.payload(cha)
        io.filtered_data.payload(cha) := fir_x.io.filtered_data.payload(cha) + fir_y.io.filtered_data.payload(cha)
        val filtered_data_next = RegNext(io.filtered_data.payload(cha).resize(internalDataWidth)) init(0)
        fir_y.io.raw_data.payload(cha) := filtered_data_next
        when(io.clc){
            filtered_data_next := 0
        }
    }

    io.filtered_data.valid := fir_x.io.filtered_data.valid
}

object IIR_I_FilterBench{
    def main(args: Array[String]): Unit ={
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/IIR_I_Filter").generateSystemVerilog(new IIR_I_Filter(16, List(3, 2, 2, 3), List(-2604, 2237, -647), chaNum = 2)).printUnused()
    }
}

object IIR_I_FilterSimApp extends App{
    import spinal.core.sim._

    SimConfig.withWave.doSim(new IIR_I_Filter(16, List(3, 2, 2, 3), List(-1, 0, 1), chaNum = 1)){ dut =>
        dut.clockDomain.forkStimulus(5)
        dut.io.raw_data.valid #= false
        dut.io.raw_data.payload(0) #= 0
        dut.io.clc #= true
        dut.clockDomain.waitSampling(1)
        dut.io.clc #= false
        //        dut.io.raw_data.payload(1) #= 0
        dut.clockDomain.waitSampling(10)
        var valid_bool = false
        for(idx <- 0 until 1024){
            valid_bool = !valid_bool
            dut.io.raw_data.valid #= true
            dut.io.raw_data.payload(0) #= (1024 * Math.sin(idx*2*Math.PI * 5000/ 512) + 1024 * Math.sin(idx*2*Math.PI/ 1024)).toInt
            //            dut.io.raw_data.payload(1) #= idx
            dut.clockDomain.waitSampling(1)
        }
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.valid #= false
        dut.clockDomain.waitSampling(1000)
    }
}