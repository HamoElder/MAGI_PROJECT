package magiSOC.perips.Timer

import spinal.core.sim._
import utils.bus.AxiLite.sim.AxiLite4Driver
import scala.util.Random


object AxiLite4TimerSimApp extends App{


    val axil4_timer_config = AxiLite4TimerConfig(useInputCapture = false, useOutputCompare = true)
    SimConfig.withWave.doSim(new AxiLite4Timer(axil4_timer_config)){ dut =>
        dut.clockDomain.forkStimulus(5)

        val aliteDrv = AxiLite4Driver(dut.io.axil4Ctrl, dut.clockDomain)
        aliteDrv.reset()

        aliteDrv.write(0x04, 300)
        aliteDrv.write(0x08, 0)
        aliteDrv.write(0x0c, 0)
        aliteDrv.write(0x10, 0)
        //        aliteDrv.write(0x00, 0x1f)
        aliteDrv.write(0x00, 0x1d)

        aliteDrv.write(0x1c, 3)
        aliteDrv.write(0x20, 12)
        aliteDrv.write(0x2c, 100)

        for(idx <- 0 until 500){
//            dut.io.ic_a.randomize()
//            dut.io.ic_b.randomize()
            dut.clockDomain.waitSampling(1)
        }

        aliteDrv.write(0x18, 1)
        aliteDrv.write(0x18, 0)
        dut.clockDomain.waitSampling(500)
    }
}