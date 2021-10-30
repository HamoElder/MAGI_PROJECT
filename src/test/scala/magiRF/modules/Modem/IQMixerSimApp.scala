package magiRF.modules.Modem

import magiRF.modules.Modem.Mixer.{IQMixer, IQMixerConfig}
import spinal.core.sim._
import utils.bus.AxiLite.sim.AxiLite4Driver
import spinal.lib.sim.{StreamDriver, StreamMonitor, StreamReadyRandomizer}
import scala.util.Random
import spinal.core._
import spinal.lib._

//Sim
object IQMixerSimApp extends App{


    val iqMixerConfig = IQMixerConfig(32, 16, 16, 1)
    SimConfig.withWave.doSim(new IQMixer(iqMixerConfig)){ dut =>
        dut.clockDomain.forkStimulus(5)
        //        SimTimeout(10*50000)

        dut.io.base_iq(0).valid #= false
        dut.io.carries_iq.valid #= false

        dut.clockDomain.waitSampling(10)
        dut.io.carries_iq.valid #= true
        dut.io.base_iq(0).valid #= true

        for(idx <- 0 until 4096){
            dut.io.base_iq(0).cha_i #= (10000 * Math.cos(2 * Math.PI * 5 * idx / 4096)).toInt
            dut.io.base_iq(0).cha_q #= (10000 * Math.cos(2 * Math.PI * 5 * idx / 4096)).toInt
            dut.io.carries_iq.cha_i #= (127 * Math.sin(2 * Math.PI * 100 * idx / 4096)).toInt
            dut.io.carries_iq.cha_q #= (127 * Math.cos(2 * Math.PI * 100 * idx / 4096)).toInt
            dut.clockDomain.waitSampling(1)
        }
        dut.io.carries_iq.valid #= false
        dut.clockDomain.waitSampling(10000)
    }
}


