package magiSOC.perips.Gpios

import spinal.core._
import spinal.core.sim._
import utils.bus.AxiLite.sim.AxiLite4Driver
import spinal.lib.sim.{StreamDriver, StreamMonitor, StreamReadyRandomizer}
import scala.util.Random
//Sim

object AxiLite4GpiosSimApp extends App{

    val spinalConfig = SpinalConfig(defaultClockDomainFrequency = FixedFrequency(100 MHz))

    val axil4_gpio_config = AxiLite4GpiosConfig(32, 16, 2, interrupt = Seq((0 until 16), Nil))
    SimConfig.withWave.allOptimisation.doSim(new AxiLite4Gpios(axil4_gpio_config)){ dut =>
        dut.clockDomain.forkStimulus(5)

        val aliteDrv = AxiLite4Driver(dut.io.axil4Ctrl, dut.clockDomain)
        aliteDrv.reset()
        dut.clockDomain.waitSampling(10)
        //        aliteDrv.write(0x14, 0x4)
        //        dut.io.dataOut.ready #= true
        //        StreamReadyRandomizer(dut.io.dataOut, dut.clockDomain)
        aliteDrv.write(0x00, 0xf)
        aliteDrv.write(0x04, 0xfa)
        dut.clockDomain.waitSampling(10)
        println(aliteDrv.read(0x08))
        dut.clockDomain.waitSampling(10)

        aliteDrv.write(0x04, 0x1)
        dut.clockDomain.waitSampling(5)
        println(aliteDrv.read(0x08))
        dut.clockDomain.waitSampling(10)

    }
}
