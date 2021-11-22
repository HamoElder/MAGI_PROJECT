package magiRF.packages.Puncher
import spinal.core.sim._

object DePuncturingSimApp extends App{
    SimConfig.withWave.allOptimisation.doSim(new DePuncturing(16, 1, 2, Seq(3))) { dut =>

        dut.clockDomain.forkStimulus(5)
        dut.io.raw_data.valid #= false
        dut.io.raw_data.last #= false
        dut.io.de_punched_data.ready #= true
        dut.io.dummy_bits #= 1
        dut.clockDomain.waitSampling(10)
        dut.io.raw_data.valid #= true
        for(idx <- 0 until 126){
//            dut.io.raw_data.valid.randomize()
            dut.io.raw_data.fragment #= idx
            dut.clockDomain.waitSampling(1)
        }
        dut.io.raw_data.fragment #= 255
        dut.io.raw_data.last #= true
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.last #= false
        dut.io.raw_data.valid #= false
        dut.clockDomain.waitSampling(100)
    }

}
