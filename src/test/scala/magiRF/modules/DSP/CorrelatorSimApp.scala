package magiRF.modules.DSP

import magiRF.modules.DSP.Correlator.{Correlator, CorrelatorConfig}
import spinal.core.sim._

object CorrelatorSimApp extends App{

  val corrlator_config = CorrelatorConfig(16, 4, 32)
  SimConfig.withWave.doSim(new Correlator(corrlator_config)){ dut =>
    dut.clockDomain.forkStimulus(5)
    dut.io.raw_data_0.valid #= false
    dut.io.raw_data_1.valid #= false
    dut.clockDomain.waitSampling(10)
    for(idx <- 1 until 1200){
      dut.io.raw_data_0.valid #= true
      dut.io.raw_data_1.valid #= true

      dut.io.raw_data_0.cha_i #= idx
      dut.io.raw_data_0.cha_q #= idx

      dut.io.raw_data_1.cha_i #= idx
      dut.io.raw_data_1.cha_q #= idx
      dut.clockDomain.waitSampling(1)
    }
    dut.clockDomain.waitSampling(1)
    dut.io.raw_data_0.valid #= false
    dut.io.raw_data_1.valid #= false
    dut.clockDomain.waitSampling(1000)
  }
}