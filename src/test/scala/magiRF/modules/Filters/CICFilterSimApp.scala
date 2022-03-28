package magiRF.modules.Filters

import magiRF.modules.Filters.CIC.CICFilter
import spinal.core.sim._

object CICFilterSimApp extends App{


  SimConfig.withWave.doSim(new CICFilter(16, 21, 17, 3,
    5, 3)){ dut =>
    dut.clockDomain.forkStimulus(5)

    dut.io.raw_data.valid #= false
    dut.io.raw_data.payload #= 0
    dut.clockDomain.waitSampling(1)
    dut.clockDomain.reset
    //        dut.io.raw_data.payload(1) #= 0
    dut.clockDomain.waitSampling(10)
    var valid_bool = false
    for(idx <- 1 until 1024){
      valid_bool = !valid_bool
      dut.io.raw_data.valid #= true
      dut.io.raw_data.payload #= (20 * scala.math.sin(idx*2*scala.math.Pi*3 / 1024) + 30 * scala.math.sin(idx*2*scala.math.Pi*150 / 1024)).toInt
      //            dut.io.raw_data.payload(1) #= idx
      dut.clockDomain.waitSampling(1)
    }
    dut.io.raw_data.valid #= false
    dut.clockDomain.waitSampling(10)
  }
}


