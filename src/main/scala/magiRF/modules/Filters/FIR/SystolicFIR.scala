package magiRF.modules.Filters.FIR

import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle
import utils.common.PrintXDC.PrintXDC
import utils.common.ShiftReg.ShiftRegister


case class SystolicCore(dataWidth: Int, adderDataWidth: Int, coffDataWidth: Int, useEnable: Boolean = false) extends Component{
    val io = new Bundle{
        val input_data = in(SInt(dataWidth bits))
        val coff_data = in(SInt(coffDataWidth bits))
        val adder_data = in(SInt(adderDataWidth bits))

        val next_input_data = out(SInt(dataWidth bits))
        val next_adder_data = out(SInt(adderDataWidth bits))

        val enable = if(useEnable) in(Bool()) else null
    }
    noIoPrefix()
    if(useEnable){
        val next_input = ShiftRegister(io.input_data, depth = 2, enable = io.enable)
        val current_adder = io.adder_data
        val mult = RegNextWhen(io.coff_data* next_input, io.enable)
        val next_adder = RegNextWhen(mult + current_adder, io.enable)

        io.next_input_data :=
    }
    else{
        val next_input = ShiftRegister(io.input_data, depth = 2)
        val current_adder = io.adder_data
        val mult = RegNext(io.coff_data * next_input)
        val next_adder = RegNext(mult + current_adder)

        io.next_input_data := next_input
        io.next_adder_data := next_adder
    }

}

case class SystolicFIR(dataWidth: Int, H: List[Int], useSingleChannel: Boolean = false) extends Component{
    val io = new Bundle{
        val raw_data = slave(Flow(IQBundle(SInt(dataWidth bits))))
        val filtered_data = master(Flow(IQBundle(SInt(dataWidth+log2Up(H.max + 1)+1 bits))))
    }
    noIoPrefix()
    io.filtered_data.cha_i := firStage(io.raw_data.cha_i, H, S(0))
    io.filtered_data.cha_q := firStage(io.raw_data.cha_q, H, S(0))
    io.filtered_data.valid := io.raw_data.valid
//    def firStage(input: SInt, H: List[Int], adder: SInt, data_valid: Bool): SInt = {
//        val next_input = Delay(input, 2, when = data_valid)
//        val current_adder = adder
//        if(H.nonEmpty){
//            val mult = RegNextWhen(H.head*next_input, data_valid)
//            val next_adder = RegNextWhen(mult+current_adder, data_valid)
//            val next_H = H.drop(1)
//            firStage(next_input, next_H, next_adder, data_valid)
//        }
//        else{
//            adder
//        }
//    }
    def firStage(input: SInt, H: List[Int], adder: SInt): SInt = {
        val next_input = ShiftRegister(input, depth = 2)
        val current_adder = adder
        if(H.nonEmpty){
            val mult = RegNext(H.head*next_input)
            val next_adder = RegNext(mult + current_adder)
            val next_H = H.drop(1)
            firStage(next_input, next_H, next_adder)
        }else{
            adder
        }
    }
}


object SystolicFIRFilterBench{
    def main(args: Array[String]): Unit ={
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl").generateSystemVerilog(new SystolicFIR(16, (0 until 16).map(idx => 1024).toList)).printUnused()
    }
}

object SystolicFIRFilterSimApp extends App{
    import spinal.core.sim._

    SimConfig.withWave.doSim(new SystolicFIR(16, (0 until 16).map(idx => 127).toList)){ dut =>
        dut.clockDomain.forkStimulus(5)
        dut.io.raw_data.valid #= false
        dut.io.raw_data.cha_i #= 0
        dut.io.raw_data.cha_q #= 0
        dut.clockDomain.waitSampling(100)
        for(idx <- 1 until 500){
            dut.io.raw_data.valid #= true
            dut.io.raw_data.cha_i #= 17
            dut.io.raw_data.cha_q #= 17

            dut.clockDomain.waitSampling(1)
        }
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.valid #= false
        dut.clockDomain.waitSampling(1000)
    }
}

case class SystolicFIRUltraScala(dataWidth: Int, H: List[Int], useSingleChannel: Boolean, column : Int = 10000) extends Component {
    val io = new Bundle{
        val raw_data = slave(Flow(IQBundle(SInt(dataWidth bits))))
        val filtered_data = master(Flow(IQBundle(SInt(dataWidth bits))))

    }
    noIoPrefix()

    io.filtered_data.cha_i := combineStage(io.raw_data.cha_i, H, column)
    io.filtered_data.cha_q := combineStage(io.raw_data.cha_q, H, column)

    def firStage(input : SInt, H : List[Int], adder : SInt, nowStage : Int = 0, startX : Int = 0, startY : Int = 0): SInt = {
        val nextInput = Delay(input,2)
        nextInput.setName("input_"+nowStage,weak = true)
        val thisadder = adder
        thisadder.setName("adder_"+nowStage+"_X"+startX,weak = true)
        if(nowStage != 0) {
            PrintXDC(s"set_property LOC DSP48E2_X${startX}Y${startY+nowStage-1} [get_cells ${thisadder.getName()}_reg]\n")
        }
        if(H.nonEmpty) {
            val mult = RegNext(H.head*nextInput)
            mult.addAttribute("use_dsp","yes")
            val nextAdder = RegNext(mult+thisadder)
            val nextH = H.drop(1)
            firStage(nextInput,nextH,nextAdder,nowStage+1,startX,startY)
        }else {
            adder
        }
    }

    def combineStage(input : SInt, H : List[Int], column : Int): SInt = {
        val output = (0 until H.length/column).map{idx =>
            firStage(
                Delay(input,idx*2*column),
                (idx*column until idx*column+column).map(x => H(x)).toList,
                S(0),
                nowStage = 0,
                startX = idx,
                startY = 0
            )
        }
        output.reduceBalancedTree((a,b) => RegNext(a+b))
    }

}

