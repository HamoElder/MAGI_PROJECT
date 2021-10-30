package magiRF.packages.Scrambler

import magiRF.packages.Scramble.{Scrambler, ScramblerConfig}
import spinal.core.sim._

object ScramblerSimApp extends App{

    val scram_config = ScramblerConfig(8, 7, 72)
    SimConfig.withWave.doSim(new Scrambler(scram_config)) { dut =>
        dut.clockDomain.forkStimulus(5)
        dut.io.scram_data.ready #= false
        dut.io.init_state.payload #= 127
        dut.io.init_state.valid #= false
        dut.clockDomain.waitSampling(1)
        dut.io.init_state.valid #= true
        dut.clockDomain.waitSampling(1)
        dut.io.init_state.valid #= false
        dut.clockDomain.waitSampling(1)

        dut.io.scram_data.ready #= true
        for(idx <- 0 until 1024){
            dut.io.scram_data.ready.randomize()
            dut.clockDomain.waitSampling(1)
        }

        dut.clockDomain.waitSampling(1024)
    }
}

