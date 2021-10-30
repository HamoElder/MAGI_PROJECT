package magiRF.modules.Modem

import magiRF.modules.Modem.Modulator.{AxiLite4Modulator, AxiLite4ModulatorConfig}
import spinal.core.sim._
import utils.bus.AxiLite.sim.AxiLite4Driver
import spinal.core._
import spinal.lib._

object AxiLite4ModulatorSimApp extends App{

    val modulator_config = AxiLite4ModulatorConfig(24, 16)
    SimConfig.withWave.doSim(new AxiLite4Modulator(modulator_config)){ dut =>
        dut.clockDomain.forkStimulus(5)
        val aliteDrv = AxiLite4Driver(dut.io.axil4Ctrl, dut.clockDomain)
        dut.io.base_data.valid #= false
        aliteDrv.reset()
        aliteDrv.write(0x00, 0x0)
        aliteDrv.write(0x04, 0x2)
        aliteDrv.write(0x08, 0x22)
        aliteDrv.write(0x10, 0x4)
        aliteDrv.write(0x14, 0x1)
        for(idx <- 0 until 2048){
            aliteDrv.write(0x18, idx)
            aliteDrv.write(0x1c, (1024 * Math.sin(2*Math.PI * 10 * idx/2048) + 1024).toInt)
        }
        aliteDrv.write(0x14, 0x0)

        dut.clockDomain.waitSampling(10)
        // start up
        aliteDrv.write(0x00, 0x1)
        dut.io.base_data.valid #= true
        for(idx <- 0 until 4096){
            dut.io.base_data.payload #= idx
            dut.clockDomain.waitSampling(1)
        }
        dut.io.base_data.valid #= false
        dut.clockDomain.waitSampling(10000)
        aliteDrv.write(0x00, 0x0)
    }
}
