package magiRF.modules.Modem

import magiRF.modules.Modem.Misc.modUnitConfig
import magiRF.modules.Modem.Modulator.extensions.mQAMMod
import spinal.core.sim._
import spinal.core._
import spinal.lib._

object mQAMModSimApp extends App{

    def generateTable(m_val:Int, peak:Int): Array[BigInt] = {
        def grayEncode(n : Int): Int = n ^ (n >>> 1)
        //        def grayEncode(n: Long): Long = n ^ (n >>> 1)
        val single_m_val = (m_val >> 1)
        val factor: Double = 0.9486832980505138 / 2
        val direction : Boolean  = true
        var codeTable = new Array[BigInt](single_m_val)
        var value = if(direction) -peak else peak
        for(idx <- 0 until single_m_val){
            codeTable(grayEncode(idx)) = (factor * value).toInt
            value = if(direction) value + (2 * peak) / (single_m_val - 1) else value - (2 * peak) / (single_m_val - 1)
        }
        codeTable
    }

    //        val mQAM_config = mQAMModConfig(24, 16, 64, 0.5400390625)
    val mQAM_config = modUnitConfig(16, 16, 16, generateTable, generateTable)

    SimConfig.withWave.doSim(new mQAMMod(mQAM_config)){ dut =>
        dut.clockDomain.forkStimulus(5)
        //        SimTimeout(10*50000)
        dut.io.unit_data.valid #= false
        dut.clockDomain.waitSampling(1)
        dut.io.unit_data.valid #= true

        for(idx <- 0 until 255){
            dut.io.unit_data.payload #= idx % 16
            dut.clockDomain.waitSampling(1)
        }
        dut.io.unit_data.payload #= 15
        dut.clockDomain.waitSampling(10)
        dut.io.unit_data.valid #= false
        dut.clockDomain.waitSampling(10000)
    }
}
