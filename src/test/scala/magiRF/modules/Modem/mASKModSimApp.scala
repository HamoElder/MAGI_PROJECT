package magiRF.modules.Modem

import magiRF.modules.Modem.Misc.modUnitConfig
import magiRF.modules.Modem.Modulator.extensions.mASKMod
import spinal.core.sim._
import utils.bus.AxiLite.sim.AxiLite4Driver
import spinal.lib.sim.{StreamDriver, StreamMonitor, StreamReadyRandomizer}

import scala.util.Random
import spinal.core._
import spinal.lib._

object mASKModSimApp extends App{

    def generateTable(m_val: Int, peak: Int): Array[BigInt] = {
        var codeTable = new Array[BigInt](m_val)
        for(idx <- 0 until m_val){
            codeTable(idx) = peak * idx / (m_val - 1)
        }
        codeTable
    }
    val mASK_config = modUnitConfig(16, 16, 2, generateTable)
    SimConfig.withWave.doSim(new mASKMod(mASK_config)){ dut =>
        dut.clockDomain.forkStimulus(5)
        //        SimTimeout(10*50000)
        dut.io.unit_data.valid #= false
        dut.clockDomain.waitSampling(1)
        dut.io.unit_data.valid #= true
        //        dut.io.mod_i.ready #= true
        for(idx <- 0 until 255){
            dut.io.unit_data.payload #= idx % 2
            dut.io.unit_data.valid #= true
            //            dut.io.unit_data.valid.randomize()
            dut.clockDomain.waitSampling(1)
        }
        dut.io.unit_data.valid #= false
        dut.clockDomain.waitSampling(10000)
    }
}

