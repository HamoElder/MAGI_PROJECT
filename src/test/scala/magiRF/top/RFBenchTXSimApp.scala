package magiRF.top

import magiRF.top.RFBench.Config.rf_payload_upper_boundary
import magiRF.top.RFBench.Transmitter.TX
import spinal.lib._
import spinal.core._

object RFBenchTXSimApp extends App{

  import spinal.core.sim._
  import utils.bus.AxiLite.sim.AxiLite4Driver
  SimConfig
    .withWave
    .allOptimisation
    .doSim(new TX()){ dut =>
      dut.clockDomain.forkStimulus(5)
      dut.io.raw_data.valid #= false
      dut.io.raw_data.last #= false
      dut.io.rf_data.ready #= false
      dut.clockDomain.waitSampling(1)

      dut.io.div_enable #= false
      dut.clockDomain.waitSampling(1)
      dut.io.div_cnt_step #= 2
      dut.clockDomain.waitSampling(1)
      dut.io.div_cnt_limit #= 0
      dut.clockDomain.waitSampling(1)
      dut.io.div_enable #= true
      dut.clockDomain.waitSampling(1)
      dut.io.mod_method_select #= 1
      dut.clockDomain.waitSampling(1)
      //            aliteDrv.write(0x10, 0x0)
      //            aliteDrv.write(0x14, 4)
      //            aliteDrv.write(0x18, 16)
      //            aliteDrv.write(0x10, 0x1)
      //            aliteDrv.write(0x20, 0x2)

      for(idx <- 0 until 50){
        dut.io.raw_data.valid #= true
        dut.io.rf_data.ready #= true
        //                dut.io.raw_data.valid.randomize()
        //                dut.io.pkg_data.ready.randomize()
        dut.io.raw_data.fragment #= idx % 256
        //                dut.io.raw_data.payload.strb.randomize()
        dut.clockDomain.waitSampling(1)
      }
      dut.io.raw_data.last #= true
      dut.io.raw_data.valid #= true
      dut.io.raw_data.fragment #= 255
      dut.clockDomain.waitSampling(1)
      dut.io.raw_data.last #= false
      dut.io.raw_data.valid #= false
        for(idx <- 0 until 5000){
            dut.io.rf_data.ready.randomize()
            dut.clockDomain.waitSampling(1)
        }
    }
}




