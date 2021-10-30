package magiRF.modules.Modem

import magiRF.modules.Modem.Demodulator.IQDemod
import magiRF.modules.Modem.Misc.demodUnitConfig
import spinal.core.sim._
import spinal.core._
import spinal.lib._

object IQDemodSimApp extends App {


    def ASK_4_tableI(m_val: Int, peak: Int): (Array[BigInt], Array[Int]) = {
        var codeTable = new Array[BigInt](m_val)
        var codeI = new Array[Int](m_val)
        for(idx <- 0 until m_val){
            codeTable(idx) = peak * idx / (m_val - 1)
            codeI(idx) = idx
        }
        for(idx <- 0 until m_val - 1){
            codeTable(idx) = (codeTable(idx) + codeTable(idx + 1)) / 2
        }
        (codeTable, codeI)
    }

    def B_QPSK_tableI(m_val: Int, peak: Int): (Array[BigInt], Array[Int]) = {
        def grayEncode(n : Int): Int = n ^ (n >>> 1)
        //            def grayEncode(n: Long): Long = n ^ (n >>> 1)
        var code = new Array[Int](m_val)
        var codeTable = new Array[BigInt](m_val)
        codeTable(0) = 0
        code(0) = 0
        code(1) = 1
        (codeTable, code)
    }

    def B_QPSK_tableQ(m_val: Int, peak: Int): (Array[BigInt], Array[Int]) = {
        def grayEncode(n : Int): Int = n ^ (n >>> 1)
        //            def grayEncode(n: Long): Long = n ^ (n >>> 1)
        var codeTable = new Array[BigInt](m_val)
        var code = new Array[Int](m_val)
        codeTable(0) = 0
        code(0) = 0
        code(1) = 1
        (codeTable, code)
    }

    //    def QAM_16_tableI(m_val: Int, peak: Int): (Array[BigInt], Array[Int]) = {
    //        def grayEncode(n : Int): Int = n ^ (n >>> 1)
    //        var codeTable = new Array[BigInt](m_val)
    //        var code = new Array[Int](m_val)
    //        for(idx <- 0 until 4){
    //            code(idx) = grayEncode(idx)
    //            codeTable(idx) =
    //        }
    //
    //        (codeTable, code)
    //    }

    //    val iq_demod_config = demodUnitConfig(8, 16, 4, ASK_4_tableI, null)
    val iq_demod_config = demodUnitConfig(8, 16, 4, B_QPSK_tableI, B_QPSK_tableQ)

    SimConfig.withWave.doSim(new IQDemod(iq_demod_config)) { dut =>

        dut.clockDomain.forkStimulus(5)
        dut.io.mod_iq.cha_i #= 0
        dut.io.mod_iq.cha_q #= 0
        dut.io.mod_iq.valid #= false
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

        dut.io.mod_iq.valid  #= false
        dut.clockDomain.waitSampling(100)
    }
}
