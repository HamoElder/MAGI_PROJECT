package magiRF.modules.DSP

import magiRF.modules.DSP.Correlator.{AutoCorrelator, AutoCorrelatorConfig}
import spinal.core._
import spinal.lib._

object AutoCorrelatorSimApp extends App{
    import spinal.core.sim._

    val auto_correlation_config = AutoCorrelatorConfig(16, 16, 32, 32)
    SimConfig.withWave.doSim(new AutoCorrelator(auto_correlation_config)){ dut =>
        dut.clockDomain.forkStimulus(5)
        dut.io.raw_data.valid #= false
        dut.clockDomain.waitSampling(10)
        for(idx <- 1 until 128){
            dut.io.raw_data.valid #= true

            dut.io.raw_data.cha_i #= idx
            dut.io.raw_data.cha_q #= idx

            dut.clockDomain.waitSampling(1)
        }
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.valid #= false
        dut.clockDomain.waitSampling(1000)
    }
}
