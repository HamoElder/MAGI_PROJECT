package magiRF.modules.Modem

import magiRF.modules.Modem.Misc.modUnitConfig
import magiRF.modules.Modem.Modulator.extensions.mPSKMod
import spinal.core.sim._
import spinal.core._
import spinal.lib._

object mPSKModSimApp extends App{

    //    val mPSK_config = mPSKConfig(1, 16, 2, Math.PI)
    //    val mPSK_config = mPSKConfig(32, 16, 4, Math.PI * 5 / 4)

    val ini_angle: Double  =  Math.PI * 5 / 4
    val direction : Boolean  = false
    def generateTableI(m_val: Int, peak: Int): Array[BigInt] = {
        def grayEncode(n : Int): Int = n ^ (n >>> 1)
        //            def grayEncode(n: Long): Long = n ^ (n >>> 1)
        var codeTable = new Array[BigInt](m_val)
        var angle = ini_angle
        for(idx <- 0 until m_val){
            codeTable(grayEncode(idx)) = BigInt((peak * Math.cos(angle)).toInt)
            //            println(grayEncode(idx).toBinaryString, BigInt((peakValue * Math.cos(angle)).toInt), BigInt((peakValue * Math.sin(angle)).toInt))
            angle = if(direction) angle + 2 * Math.PI / m_val else angle - 2 * Math.PI / m_val
        }
        codeTable
    }
    def generateTableQ(m_val: Int, peak: Int): Array[BigInt] = {
        def grayEncode(n : Int): Int = n ^ (n >>> 1)
        //            def grayEncode(n: Long): Long = n ^ (n >>> 1)
        var codeTable = new Array[BigInt](m_val)
        var angle = ini_angle
        for(idx <- 0 until m_val){
            codeTable(grayEncode(idx)) = BigInt((peak * Math.sin(angle)).toInt)
            angle = if(direction) angle + 2 * Math.PI / m_val else angle - 2 * Math.PI / m_val
        }
        codeTable
    }
    val mPSK_config = modUnitConfig(8, 16, 4, generateTableI, generateTableQ)

    SimConfig.withWave.doSim(new mPSKMod(mPSK_config)){ dut =>
        dut.clockDomain.forkStimulus(5)
        //        SimTimeout(10*50000)
        dut.io.unit_data.valid #= false
        dut.clockDomain.waitSampling(1)
        dut.io.unit_data.valid #= true

        for(idx <- 0 until 255){
            dut.io.unit_data.payload #= idx % 4
            dut.clockDomain.waitSampling(1)
        }
        dut.io.unit_data.valid #= false
        dut.clockDomain.waitSampling(10000)
    }
}
