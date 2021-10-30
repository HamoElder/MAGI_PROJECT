package magiRF.modules.Modem

import magiRF.modules.Modem.Modulator.{ModulatorRTL, modRTLConfig}
import spinal.core.sim._
import utils.bus.AxiLite.sim.AxiLite4Driver
import spinal.core._
import spinal.lib._

object ModulatorRTLSimApp extends App{

    val modulator_rtl_config = modRTLConfig(32, 16)
    SimConfig.withWave.doSim(new ModulatorRTL(modulator_rtl_config)) { dut =>
        dut.clockDomain.forkStimulus(5)
        dut.io.data_flow.unit_data.valid #= false
        dut.io.select #= 1
        dut.io.w_en #= true
        for(idx <- 0 until 2048){
            dut.io.w_addr #= idx
            dut.io.w_data #= (1024 * Math.sin(2*Math.PI * 10 * idx/2048) + 1024).toInt
            dut.clockDomain.waitSampling(1)
        }
        dut.io.w_en #= false
        dut.clockDomain.waitSampling(1)
        dut.io.data_flow.unit_data.valid #= true
        for(idx <- 0 until 2048){
            dut.io.data_flow.unit_data.payload #= idx
            dut.clockDomain.waitSampling(1)
        }
        dut.io.data_flow.unit_data.valid #= false
        dut.clockDomain.waitSampling(10000)
    }
}
