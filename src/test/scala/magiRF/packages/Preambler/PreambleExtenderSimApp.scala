package magiRF.packages.Preambler

import magiRF.packages.Preamble.{PreambleConfig, PreambleExtender}
import spinal.core.sim._
import utils.bus.AxiLite.sim.AxiLite4Driver
import spinal.lib.sim.{StreamDriver, StreamMonitor, StreamReadyRandomizer}
import scala.util.Random
import spinal.core._
import spinal.lib._
//Sim

object PreambleExtenderSimApp extends App{


    import magiRF.top.OAM_BETA.OAM_CDMA
    val preamble_config = PreambleConfig(16, OAM_CDMA.stf)
    SimConfig.withWave.doSim(new PreambleExtender(preamble_config)){ dut =>
        dut.clockDomain.forkStimulus(5)
        dut.io.raw_data.valid #= false
        dut.io.preamble_data.ready #= true
        dut.io.raw_data.last #= false
        dut.clockDomain.waitSampling(10)
        for(idx <- 0 until 200){
            dut.io.raw_data.valid #= true
            dut.io.preamble_data.ready.randomize()
            dut.io.raw_data.cha_i #= idx
            dut.io.raw_data.cha_q #= (idx + 1)
            dut.clockDomain.waitSampling(1)
        }
        dut.io.raw_data.last #= true
        dut.io.raw_data.cha_i #= 233
        dut.io.raw_data.cha_q #= (233 + 1)
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.valid #= false

        dut.clockDomain.waitSampling(1000)
    }
}
