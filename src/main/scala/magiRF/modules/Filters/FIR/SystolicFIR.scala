package magiRF.modules.Filters.FIR

import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle
import utils.common.PrintXDC.PrintXDC
import utils.common.ShiftReg.ShiftRegister


case class SystolicCore(dataWidth: Int, adderDataWidth: Int, coffDataWidth: Int) extends Component{
    val io = new Bundle{
        val input_data = in(SInt(dataWidth bits))
        val coff_data = in(SInt(coffDataWidth bits))
        val adder_data = in(SInt(adderDataWidth bits))
        val valid = in(Bool())

        val next_input_data = out(SInt(dataWidth bits))
        val next_adder_data = out(SInt(adderDataWidth bits))

        val next_valid = out(Bool())
    }
    noIoPrefix()

    val next_input = ShiftRegister(io.input_data, depth = 2, enable = io.valid, useInitZero = true)
    val current_adder = io.adder_data
    val mult = RegNextWhen(io.coff_data* next_input, io.valid) init(0)
    val next_adder = RegNextWhen(mult + current_adder, io.valid) init(0)

    io.next_valid := RegNext(io.valid) init(False)
    io.next_input_data := next_input
    io.next_adder_data := next_adder.resized

}


case class SystolicFIR(dataWidth: Int, filteredDataWidth: Int, H: List[Int], chaNum: Int) extends Component{
    def coffDataWidth: Int = log2Up(H.map({scala.math.abs}).max + 1) + 1

    val io = new Bundle{
        val raw_data = slave(Flow(Vec(SInt(dataWidth bits), chaNum)))
        val filtered_data = master(Flow(Vec(SInt(filteredDataWidth bits), chaNum)))
    }
    noIoPrefix()
    val filtered_data_valid_vec: Vec[Bool] = Vec(Bool(), chaNum)
    for(idx <- 0 until chaNum){
        val fir_stage_out = firStage(io.raw_data.payload(idx).resized, H, S(0), io.raw_data.valid)
        io.filtered_data.payload(idx) := fir_stage_out._1
        filtered_data_valid_vec(idx) := fir_stage_out._2
    }
    io.filtered_data.valid := filtered_data_valid_vec(0)

    def firStage(input: SInt, H: List[Int], adder: SInt, valid: Bool): (SInt, Bool) = {
        if(H.nonEmpty) {
            val systolic_core = SystolicCore(filteredDataWidth, filteredDataWidth, coffDataWidth)
            systolic_core.io.input_data := input
            systolic_core.io.coff_data := H.head
            systolic_core.io.adder_data := adder
            systolic_core.io.valid := valid
            firStage(systolic_core.io.next_input_data, H.drop(1), systolic_core.io.next_adder_data, systolic_core.io.next_valid)
        }else{
            (adder, valid)
        }
    }
}


object SystolicFIRFilterBench{
    def main(args: Array[String]): Unit ={
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/SystolicFIR").generateSystemVerilog(new SystolicFIR(12, 29, List(6,0,-4,-3,5,6,-6,-13,7,44,64,44,7,-13,-6,6,5,-3,-4,0,6), chaNum = 1)).printUnused()
    }
}

object SystolicFIRFilterSimApp extends App{
    import spinal.core.sim._

    SimConfig.withWave.doSim(new SystolicFIR(12, 29, List(11, 31, 63, 104, 152, 198, 235, 255, 255, 235, 198, 152, 104, 63, 31, 11), chaNum = 1)){ dut =>
        dut.clockDomain.forkStimulus(5)
        dut.io.raw_data.valid #= false
        dut.io.raw_data.payload(0) #= 0
//        dut.io.raw_data.payload(1) #= 0
        dut.clockDomain.waitSampling(100)
        var valid_bool = false
        for(idx <- 1 until 1024){
//            valid_bool = !valid_bool
            dut.io.raw_data.valid #= true
            dut.io.raw_data.payload(0) #= (20 * scala.math.sin(idx*2*Math.PI*3 / 1024) + 20 * scala.math.sin(idx*2*Math.PI*200 / 1024)).toInt
//            dut.io.raw_data.payload(1) #= idx
            dut.clockDomain.waitSampling(1)
        }
        dut.io.raw_data.valid #= false
        dut.clockDomain.waitSampling(100)
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

