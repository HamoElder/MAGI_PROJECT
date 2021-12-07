package magiRF.modules.Modem

import magiRF.modules.Modem.Misc.modUnitConfig
import magiRF.modules.Modem.Modulator.extensions.mFSKMod
import spinal.core.sim._
import spinal.core._
import spinal.lib._

object mFSKModSimApp extends App{

    def generateTable(m_val: Int, peak: Int): Array[BigInt] = {
        var codeTable = new Array[BigInt](m_val)
        for(idx <- 0 until m_val){
            codeTable(idx) = Math.pow(2, idx).toInt
        }
        codeTable
    }
    val mFSK_config = modUnitConfig(11, 11, 4, generateTable)

    SimConfig.withWave.doSim(new mFSKMod(mFSK_config)){ dut =>
        dut.clockDomain.forkStimulus(5)
        //        SimTimeout(10*50000)
        dut.io.unit_data.valid #= false
        dut.clockDomain.waitSampling(1)
        dut.io.unit_data.valid #= true

        for(idx <- 0 until 4096){
            dut.io.unit_data.payload #= idx % 4
            dut.clockDomain.waitSampling(1)
        }
        dut.io.unit_data.valid #= false
        dut.clockDomain.waitSampling(10000)
    }

}

