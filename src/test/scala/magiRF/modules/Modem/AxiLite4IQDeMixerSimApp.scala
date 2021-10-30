package magiRF.modules.Modem

import magiRF.modules.Modem.Mixer.{AxiLite4IQDemixer, AxiLite4IQDemixerConfig}
import spinal.core.sim._
import utils.bus.AxiLite.sim.AxiLite4Driver
import spinal.lib.sim.{StreamDriver, StreamMonitor, StreamReadyRandomizer}
import scala.util.Random
import spinal.core._
import spinal.lib._

//Sim
object AxiLite4IQDeMixerSimApp extends App{


    val iqDeMixerConfig = AxiLite4IQDemixerConfig(32, 16, 16, 1)
    SimConfig.withWave.doSim(new AxiLite4IQDemixer(iqDeMixerConfig)){ dut =>
        dut.clockDomain.forkStimulus(5)
        dut.rfClockDomain.forkStimulus(3)
        //        SimTimeout(10*50000)
        val aliteDrv = AxiLite4Driver(dut.io.axil4Ctrl, dut.clockDomain)
        aliteDrv.reset()
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
        //		aliteDrv.write(0x04, 0x1)
        aliteDrv.write(0x00, 0x3)
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
