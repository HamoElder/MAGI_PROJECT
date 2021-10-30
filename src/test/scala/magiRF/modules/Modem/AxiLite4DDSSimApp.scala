package magiRF.modules.Modem

import magiRF.modules.Modem.DDS.{AxiLite4DDS, AxiLite4DDSConfig}
import spinal.core.sim._
import utils.bus.AxiLite.sim.AxiLite4Driver
import spinal.lib.sim.{StreamDriver, StreamMonitor, StreamReadyRandomizer}
import scala.util.Random
import spinal.core._
//Sim

object AxiLite4DDSSimApp extends App{

    val axi4ddsConfig = AxiLite4DDSConfig(24, 10, 2, 32, 1 Hz, usePhaseChannel = true, usePhaseIncProg = true, usePhaseOffsetProg = true)
    SimConfig.withWave.doSim(new AxiLite4DDS(axi4ddsConfig)){ dut =>
        dut.clockDomain.forkStimulus(10)
        dut.rfClockDomain.forkStimulus(3)
        //        SimTimeout(10*50000)

        val aliteDrv = AxiLite4Driver(dut.io.axil4Ctrl, dut.clockDomain)
        aliteDrv.reset()
        dut.clockDomain.waitSampling(10)
        //        aliteDrv.write(0x14, 0x4)
        //        dut.io.dataOut.ready #= true
        //        StreamReadyRandomizer(dut.io.dataOut, dut.clockDomain)
        aliteDrv.write(0x00, 0x2)
        aliteDrv.write(0x20, 0x2)
        aliteDrv.write(0x40, 0x2)
        aliteDrv.write(0x00, 0x3)
        dut.clockDomain.waitSampling(1000)
        aliteDrv.write(0x14, 0x4)
        aliteDrv.write(0x20, 0x0)
        //        aliteDrv.write(0x04, 1023)
        //        aliteDrv.write(0x0, 1)

        dut.clockDomain.waitSampling(10000)
    }
}
