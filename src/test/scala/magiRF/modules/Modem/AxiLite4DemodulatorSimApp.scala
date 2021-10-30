package magiRF.modules.Modem

import magiRF.modules.Modem.Demodulator.{AxiLite4Demodulator, AxiLite4DemodulatorConfig}
import spinal.core.sim._
import utils.bus.AxiLite.sim.AxiLite4Driver
import spinal.core._
import spinal.lib._

object AxiLite4DemodulatorSimApp extends App{

    val demodulator_config = AxiLite4DemodulatorConfig(24, 16)
    SimConfig.withWave.doSim(new AxiLite4Demodulator(demodulator_config)) { dut =>
        dut.clockDomain.forkStimulus(5)
        val aliteDrv = AxiLite4Driver(dut.io.axil4Ctrl, dut.clockDomain)
        dut.io.mod_iq.valid #= false
        aliteDrv.reset()
        aliteDrv.write(0x20, 0x0)
        aliteDrv.write(0x00, 0x0)
        aliteDrv.write(0x04, 0x1)
        aliteDrv.write(0x10, 0x3)

        aliteDrv.write(0x24, 0x6)
        aliteDrv.write(0x28, 24)
        aliteDrv.write(0x20, 0x1)

        dut.clockDomain.waitSampling(1)
        dut.io.mod_iq.valid #= true
        for(idx <- 0 until 300){
            dut.io.mod_iq.cha_i #= (idx - 150) * 200
            dut.io.mod_iq.cha_q #= -1
            dut.clockDomain.waitSampling(1)
        }
        for(idx <- 0 until 150){
            dut.io.mod_iq.cha_q #= (idx - 75) * 200
            dut.clockDomain.waitSampling(1)
        }
        dut.io.base_data.valid #= false
        dut.clockDomain.waitSampling(1000)

    }
}

