package magiRF.modules.Filters

import magiRF.modules.Filters.CIC.CICIntegrator


object CICIntegratorSimApp extends App{
  import spinal.core.sim._

  SimConfig.withWave.doSim(new  CICIntegrator(12, 21, 3)){ dut =>
    dut.clockDomain.forkStimulus(5)

    dut.io.raw_data.valid #= false
    dut.io.raw_data.payload #= 0
    dut.clockDomain.waitSampling(1)
    dut.clockDomain.reset
    //        dut.io.raw_data.payload(1) #= 0
    dut.clockDomain.waitSampling(10)
    var valid_bool = false
    for(idx <- 1 until 128){
      valid_bool = !valid_bool
      dut.io.raw_data.valid #= true
      dut.io.raw_data.payload #= idx
      //            dut.io.raw_data.payload(1) #= idx
      dut.clockDomain.waitSampling(1)
    }
    dut.io.raw_data.valid #= false
    dut.clockDomain.waitSampling(10)
  }
}
