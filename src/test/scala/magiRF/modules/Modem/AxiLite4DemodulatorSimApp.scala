package magiRF.modules.Modem

import magiRF.modules.Modem.Demodulator.extensions.lookUpDemodConfig
import magiRF.modules.Modem.Demodulator.{AxiLite4Demodulator, AxiLite4DemodulatorConfig, DemodulatorRTL, DemodulatorRTLConfig}
import magiRF.modules.Modem.Misc.demodUnitConfig
import spinal.core.sim._
import utils.bus.AxiLite.sim.AxiLite4Driver
import spinal.core._
import spinal.lib._

object AxiLite4DemodulatorSimApp extends App{
    var demod_config = Seq[demodUnitConfig]()
    var lookup_demod_config = Seq[lookUpDemodConfig]()
    val baseDataWidth = 24
    val modDataWidth = 12

    def grayEncode(n : Int): Int = n ^ (n >>> 1)
    //        def grayEncode(n: Long): Long = n ^ (n >>> 1)

    def B_Q_PSKTable802_11_I(m_val: Int, peak: Int): (Array[BigInt], Array[Int]) = {
        var code = new Array[Int](m_val)
        var codeTable = new Array[BigInt](m_val)
        codeTable(0) = 0
        code(0) = 0
        code(1) = 1
        (codeTable, code)
    }
    demod_config = demod_config :+ demodUnitConfig(baseDataWidth, modDataWidth, 2, B_Q_PSKTable802_11_I, null)
    demod_config = demod_config :+ demodUnitConfig(baseDataWidth, modDataWidth, 4, B_Q_PSKTable802_11_I, B_Q_PSKTable802_11_I)

    def QAM_16_Table802_11_IQ(m_val: Int, peak: Int): (Array[BigInt], Array[Int]) = {

        val single_m_val = log2Up(m_val) >> 1
        val m_range = Math.pow(2, single_m_val).toInt
        val factor: Double = 0.9486832980505138 / 2
        val direction : Boolean  = true
        var codeTable = new Array[BigInt](m_range)
        var code = new Array[Int](m_range)
        var value = if(direction) -peak else peak
        for(idx <- 0 until m_range){
            codeTable(idx) = (factor * value).round
            code(idx) = grayEncode(idx)
            value = if(direction) value + (2 * peak) / (m_range - 1) else value - (2 * peak) / (m_range - 1)
        }
        for(idx <- 0 until m_range - 1){
            codeTable(idx) = (codeTable(idx) + codeTable(idx + 1)) >> 1
        }
        (codeTable, code)
    }

    demod_config = demod_config :+ demodUnitConfig(baseDataWidth, modDataWidth, 16, QAM_16_Table802_11_IQ, QAM_16_Table802_11_IQ)


    //        def QAM_64_Table802_11_IQ(m_val:Int, peak:Int): (Array[BigInt], Array[Int]) = {
    //
    //            val single_m_val = log2Up(m_val) >> 1
    //            val m_range = Math.pow(2, single_m_val).toInt
    //            val factor: Double = 0.5400390625
    //            val direction : Boolean  = true
    //            var codeTable = new Array[BigInt](m_range)
    //            var code = new Array[Int](m_range)
    //            var value = if(direction) -peak else peak
    //            for(idx <- 0 until m_range){
    //                codeTable(idx) = (factor * value).round
    //                code(idx) = idx
    //                value = if(direction) value + (2 * peak) / (m_range - 1) else value - (2 * peak) / (m_range - 1)
    //            }
    //            for(idx <- 0 until m_range - 1){
    //                codeTable(idx) = (codeTable(idx) + codeTable(idx + 1)) >> 1
    //            }
    //            (codeTable, code)
    //        }

    //        val qam64_config = demodUnitConfig(unitDataWidth, modDataWidth, 64, QAM_64_Table802_11_IQ, QAM_64_Table802_11_IQ)

//    lookup_demod_config = lookup_demod_config :+ lookUpDemodConfig(baseDataWidth, modDataWidth)

    val demodulator_config = AxiLite4DemodulatorConfig(baseDataWidth, modDataWidth, 32, demod_config, lookup_demod_config)
    println("haha")
    SimConfig.withWave.allOptimisation.doSim(new AxiLite4Demodulator(demodulator_config)) { dut =>
        dut.clockDomain.forkStimulus(5)
        dut.rfClockDomain.forkStimulus(4)

        val aliteDrv = AxiLite4Driver(dut.io.axil4Ctrl, dut.clockDomain)
        dut.io.mod_iq.valid #= false
        aliteDrv.reset()
        aliteDrv.write(0x20, 0x0)
        aliteDrv.write(0x00, 0x0)
        aliteDrv.write(0x0C, 0x2)
        aliteDrv.write(0x10, 0x1)

        aliteDrv.write(0x24, 0x6)
        aliteDrv.write(0x28, 24)
        aliteDrv.write(0x20, 0x1)

        dut.clockDomain.waitSampling(1)
        dut.io.mod_iq.valid #= true
        for(idx <- 0 until 300){
            dut.io.mod_iq.cha_i #= (idx - 150) * 10
            dut.io.mod_iq.cha_q #= -1
            dut.clockDomain.waitSampling(1)
        }
        for(idx <- 0 until 150){
            dut.io.mod_iq.cha_q #= (idx - 75) * 10
            dut.clockDomain.waitSampling(1)
        }
        dut.io.mod_iq.valid #= false
        dut.clockDomain.waitSampling(100)

    }
}

