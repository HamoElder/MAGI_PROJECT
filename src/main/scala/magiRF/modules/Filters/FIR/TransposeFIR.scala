package magiRF.modules.Filters.FIR

import spinal.core._
import spinal.lib._

import scala.language.postfixOps


case class TransposeCore(dataWidth: Int, adderDataWidth: Int, coffDataWidth: Int) extends Component{
    val io = new Bundle{
        val input_data = in(SInt(dataWidth bits))
        val coff_data = in(SInt(coffDataWidth bits))
        val adder_data = in(SInt(adderDataWidth bits))
        val valid = in(Bool())

        val next_adder_data = out(SInt(adderDataWidth bits))
    }
    noIoPrefix()
    val previous_adder_data = Reg(SInt(adderDataWidth bits)) init(0)
    when(io.valid){
        previous_adder_data := io.adder_data
    }
    io.next_adder_data := (io.input_data * io.coff_data + previous_adder_data)
}

case class TransposeFIR(dataWidth: Int, H: List[Int], chaNum: Int, reloadableCoff: Boolean = false) extends Component{
    val coffDataSize: Int = log2Up(H.length + 1)
    val coffDataWidth: Int = log2Up(H.max + 1) + 1
    val filteredDataWidth: Int = dataWidth+coffDataWidth

    val io= new Bundle{
        val raw_data = slave(Flow(Vec(SInt(dataWidth bits), chaNum)))
        val filtered_data = master(Flow(Vec(SInt(filteredDataWidth bits), chaNum)))

        val w_en = if(reloadableCoff) in(Bool()) else null
        val w_addr = if(reloadableCoff) in(UInt(coffDataSize bits)) else null
        val w_data = if(reloadableCoff) in(SInt(coffDataWidth bits)) else null

    }
    noIoPrefix()

    val coff_mem = Vec(Reg(SInt(coffDataWidth bits)), H.length)

    if(reloadableCoff){
        when(io.w_en){
            coff_mem(io.w_addr) := io.w_data
        }
    } else{
        for(idx <- H.indices){
            coff_mem(idx) := H(idx)
        }
    }

    val filtered_data_valid_vec: Vec[Bool] = Vec(Bool(), chaNum)
    for(idx <- 0 until chaNum){
        val fir_stage_out = firStage(io.raw_data.payload(idx), coff_mem, S(0), io.raw_data.valid, cursor = 0)
        io.filtered_data.payload(idx) := fir_stage_out._1
        filtered_data_valid_vec(idx) := fir_stage_out._2
    }
    io.filtered_data.valid := filtered_data_valid_vec.reduce(_&_)

    def firStage(input: SInt, coff: Vec[SInt], adder: SInt, valid: Bool, cursor: Int): (SInt, Bool) = {

        if(cursor < coff.size) {
            val transpose_core = TransposeCore(dataWidth, filteredDataWidth, coffDataWidth)
            transpose_core.io.input_data := input
            transpose_core.io.coff_data := coff(cursor)
            transpose_core.io.adder_data := adder
            transpose_core.io.valid := valid
            firStage(transpose_core.io.input_data, coff, transpose_core.io.next_adder_data, transpose_core.io.valid, cursor + 1)
        }else{
            (adder, valid)
        }
    }
}


object TransposeFIRFilterBench{
    def main(args: Array[String]): Unit ={
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl").generateSystemVerilog(new TransposeFIR(16,
            List(6,0,-4,-3,5,6,-6,-13,7,44,64,44,7,-13,-6,6,5,-3,-4,0,6), chaNum = 1,reloadableCoff = false)).printPruned().printUnused()
    }
}


object TransposeFIRFilterSimApp extends App{
    import spinal.core.sim._

    SimConfig.withWave.doSim(new TransposeFIR(16, List(6,0,-4,-3,5,6,-6,-13,7,44,64,44,7,-13,-6,6,5,-3,-4,0,6), chaNum = 1,reloadableCoff = false)){ dut =>
        dut.clockDomain.forkStimulus(5)
        dut.io.raw_data.valid #= false
        dut.io.raw_data.payload(0) #= 0
        //        dut.io.raw_data.payload(1) #= 0
        dut.clockDomain.waitSampling(1)
        dut.clockDomain.reset
        dut.clockDomain.waitSampling(100)
        var valid_bool = false
        for(idx <- 0 until 1024){
            valid_bool = !valid_bool
            dut.io.raw_data.valid #= true
            dut.io.raw_data.payload(0) #= (1024 * Math.sin(idx*2*Math.PI * 800/ 512) + 1024 * Math.sin(idx*2*Math.PI/ 512)).toInt
            //            dut.io.raw_data.payload(1) #= idx
            dut.clockDomain.waitSampling(1)
        }
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.valid #= false
        dut.clockDomain.waitSampling(1000)
    }
}
