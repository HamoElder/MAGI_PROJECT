package magiRF.modules.Filters

import spinal.core._
import spinal.lib._
import magiRF.modules.Filters.FIR.SystolicFIR


object SystolicFIRFilterSimApp extends App{
    import spinal.core.sim._

    SimConfig.withWave.doSim(new SystolicFIR(16, 32, List(0, 0, 0, 1, 1, 3, 5, 7, 10, 13, 16, 19, 21, 23, 23, 23, 21, 19, 16, 13, 10, 7, 5, 3, 1, 1, 0, 0, 0), chaNum = 4)){ dut =>
        dut.clockDomain.forkStimulus(5)
        dut.io.raw_data(0).valid #= false
        dut.io.raw_data(0).payload #= 0
        //        dut.io.raw_data.payload(1) #= 0
        dut.clockDomain.waitSampling(100)
        var valid_bool = false
        for(loop <- 0 until 100){
            for(idx <- 0 until 128){
                //            valid_bool = !valid_bool
                dut.io.raw_data(0).valid #= true
                dut.io.raw_data(0).payload #= (8192 * scala.math.sin(idx*2*scala.math.Pi*16 / 128)).toInt
                //            dut.io.raw_data.payload(1) #= idx
                dut.clockDomain.waitSampling(1)
            }
            for(idx <- 0 until 128){
                dut.io.raw_data(0).valid #= true
                dut.io.raw_data(0).payload #= 0
                dut.clockDomain.waitSampling(1)
            }
        }

        dut.io.raw_data(0).valid #= false
        dut.clockDomain.waitSampling(100)
    }
}
