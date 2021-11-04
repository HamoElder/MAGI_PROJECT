package magiRF.modules.DSP

import magiRF.modules.DSP.PowerAdjustor.{PowerMeter, PowerMeterConfig}
import spinal.core.sim._
import utils.bus.AxiLite.sim.AxiLite4Driver
import spinal.lib.sim.{StreamDriver, StreamMonitor, StreamReadyRandomizer}
import scala.util.Random
import spinal.core._
import spinal.lib._

object PowerMeterSimApp extends App{

    val power_meter_config = PowerMeterConfig(16, 32)
    SimConfig.withWave.doSim(new PowerMeter(power_meter_config)){ dut =>
        dut.clockDomain.forkStimulus(5)
        dut.io.raw_data.valid #= false
        dut.clockDomain.waitSampling(10)
        for(idx <- 1 until 32767){
            dut.io.raw_data.valid #= true
            dut.io.raw_data.cha_i #= idx
            dut.io.raw_data.cha_q #= idx
            dut.clockDomain.waitSampling(1)
        }
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.valid #= false

        dut.clockDomain.waitSampling(1000)
    }
}
