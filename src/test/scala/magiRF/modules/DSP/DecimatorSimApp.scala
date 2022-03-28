package magiRF.modules.DSP

import magiRF.modules.DSP.Decimator.Decimator
import spinal.core._
import spinal.core.sim._

object DecimatorSimApp extends App{


  SimConfig.withWave.doSim(new Decimator(SInt(12 bits), 5)){ dut =>
    dut.clockDomain.forkStimulus(5)

    dut.io.in.valid #= false
    dut.io.in.payload #= 0xff
    dut.clockDomain.waitSampling(1)
    dut.clockDomain.reset
    dut.clockDomain.waitSampling(10)
    var valid_bool = false
    for(idx <- 1 until 128){
      valid_bool = !valid_bool
      dut.io.in.valid.randomize()
      dut.io.in.payload #= idx
      dut.clockDomain.waitSampling(1)
    }
    dut.io.in.valid #= false
    dut.clockDomain.waitSampling(10)
  }
}

