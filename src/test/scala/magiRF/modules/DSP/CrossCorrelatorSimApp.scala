package magiRF.modules.DSP

import magiRF.modules.DSP.Correlator.{CrossCorrelator, CrossCorrelatorConfig}
import spinal.core.sim._
import magiRF.top.IEEE802_11.IEEE802_11

object CrossCorrelatorSimApp extends App{

  val cross_correlation_config = CrossCorrelatorConfig(16, IEEE802_11.ltf64.map(_*1000), 32)
  SimConfig.withWave.doSim(new CrossCorrelator(cross_correlation_config)){ dut =>
    dut.clockDomain.forkStimulus(5)
    dut.io.raw_data.valid #= false
    dut.clockDomain.waitSampling(10)
    for(idx <- 1 until 300){
      dut.io.raw_data.valid #= true

      dut.io.raw_data.cha_i #= idx % 500
      dut.io.raw_data.cha_q #= idx % 500

      dut.clockDomain.waitSampling(1)
    }
    for(idx <- IEEE802_11.ltf64.indices){
      dut.io.raw_data.valid #= true
      dut.io.raw_data.cha_i #= (IEEE802_11.ltf64(idx).re * 1000).toInt
      dut.io.raw_data.cha_q #= (IEEE802_11.ltf64(idx).im * 1000).toInt

      dut.clockDomain.waitSampling(1)
    }
    for(idx <- 1 until 300){
      dut.io.raw_data.valid #= true

      dut.io.raw_data.cha_i #= idx % 500
      dut.io.raw_data.cha_q #= idx % 500

      dut.clockDomain.waitSampling(1)
    }
    dut.clockDomain.waitSampling(1)
    dut.io.raw_data.valid #= false
    dut.clockDomain.waitSampling(100)
  }
}
