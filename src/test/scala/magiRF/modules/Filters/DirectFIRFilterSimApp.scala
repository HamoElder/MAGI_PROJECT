package magiRF.modules.Filters

import magiRF.modules.Filters.FIR.DirectFIR
import spinal.core.sim._

object DirectFIRFilterSimApp extends App{


  SimConfig.withWave.doSim(new DirectFIR(12, 29, List(11, 31, 63, 104, 152, 198, 235, 255, 255, 235, 198, 152, 104, 63, 31, 11), chaNum = 1)){ dut =>
    dut.clockDomain.forkStimulus(5)
    dut.io.raw_data.valid #= false
    dut.io.raw_data.payload(0) #= 0
    //        dut.io.raw_data.payload(1) #= 0
    dut.clockDomain.waitSampling(10)
    var valid_bool = false
    for(idx <- 1 until 1024){
      //            valid_bool = !valid_bool
      dut.io.raw_data.valid #= true
      dut.io.raw_data.payload(0) #= (20 * scala.math.sin(idx*2*scala.math.Pi*3 / 1024) + 100 * scala.math.sin(idx*2*scala.math.Pi*120 / 1024)).toInt
      //            dut.io.raw_data.payload(1) #= idx
      dut.clockDomain.waitSampling(1)
    }
    dut.io.raw_data.valid #= false
    dut.clockDomain.waitSampling(100)
  }
}

