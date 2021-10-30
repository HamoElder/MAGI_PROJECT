package magiRF.modules.Modem

import magiRF.modules.Modem.Mixer.{IQDemixer, IQDemixerConfig}
import spinal.core.sim._
import utils.bus.AxiLite.sim.AxiLite4Driver
import spinal.lib.sim.{StreamDriver, StreamMonitor, StreamReadyRandomizer}
import scala.util.Random
import spinal.core._
import spinal.lib._
//Sim

object IQDeMixerSimApp extends App{


    val iqDeMixerConfig = IQDemixerConfig(16, 16, 16, 1)
    SimConfig.withWave.doSim(new IQDemixer(iqDeMixerConfig)){ dut =>
        dut.clockDomain.forkStimulus(5)
        //        SimTimeout(10*50000)

        dut.io.if_iq(0).valid #= false
        dut.io.carries_iq.valid #= false

        dut.clockDomain.waitSampling(10)
        dut.io.carries_iq.valid #= true
        dut.io.if_iq(0).valid #= true

        for(idx <- 0 until 4096){
            dut.io.if_iq(0).payload #= (100 * Math.cos(2 * Math.PI * 5 * idx / 4096) * 127 * Math.cos(2 * Math.PI * 100 * idx / 4096)
                + 100 * Math.cos(2 * Math.PI * 5 * idx / 4096) * 127 * Math.sin(2 * Math.PI * 100 * idx / 4096)).toInt
            dut.io.carries_iq.cha_i #= (127 * Math.sin(2 * Math.PI * 100 * idx / 4096)).toInt
            dut.io.carries_iq.cha_q #= (127 * Math.cos(2 * Math.PI * 100 * idx / 4096)).toInt
            dut.clockDomain.waitSampling()
        }

        dut.io.if_iq(0).valid #= false
        dut.io.carries_iq.valid #= false
        dut.clockDomain.waitSampling(10000)
    }
}


