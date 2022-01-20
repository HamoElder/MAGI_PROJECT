package magiRF.packages.Equalizer

import magiRF.modules.DSP.CORDIC.CordicRotator
import spinal.core._
import spinal.lib._
import utils.common.Divider.{MixedDivider, SignedDivider, UnsignedDivider}


case class ZeroForcing(dataWidth: Int) extends Component{
    def dataType: SInt = SInt(dataWidth bits)
    val io = new Bundle{
        val raw_data = slave(Stream(dataType))
        val result_data = master(Flow(dataType))
        val ref_data = slave(Stream(dataType))
        val train_en = in(Bool())
    }
    noIoPrefix()
//    val cal_core = CordicRotator()
    when(io.train_en){

    }.otherwise{

    }
    when(io.raw_data.fire){

    }
}

object ZeroForcingBench {
    def main(args: Array[String]): Unit = {
        SpinalConfig(targetDirectory = "rtl/ZeroForcing").generateSystemVerilog(new UnsignedDivider(16, 16, true)).printPruned()
    }
}

object ZeroForcingSimApp extends App {
    import spinal.core.sim._

    SimConfig.withWave.allOptimisation
        .doSim(new MixedDivider(16, 16, false)) { dut =>
        dut.clockDomain.forkStimulus(5)
        dut.clockDomain.reset
        dut.io.flush #= true
        dut.io.cmd.signed #= true
        dut.clockDomain.waitSampling(1)
        dut.io.flush #= false
        dut.io.cmd.valid #= false
        dut.io.rsp.ready #= true
        dut.clockDomain.waitSampling(10)
        for(idx <- 0 until 100){
            dut.io.cmd.valid.randomize()
            dut.io.rsp.ready.randomize()
            dut.io.cmd.numerator #= idx * 10
            dut.io.cmd.denominator #= (0xffff - 50 + idx) & 0xffff
            dut.clockDomain.waitSampling(1)
        }
        dut.io.cmd.valid #= false
        dut.io.flush #= true
        dut.clockDomain.waitSampling(100)
    }
}
