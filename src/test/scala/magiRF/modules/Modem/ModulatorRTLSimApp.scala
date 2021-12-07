package magiRF.modules.Modem

import magiRF.modules.Modem.Misc.modUnitConfig
import magiRF.modules.Modem.Modulator.extensions.{ModExtension, lookUpModConfig, mPSKModExtension, mQAMModExtension}
import magiRF.modules.Modem.Modulator.{ModulatorRTL, modRTLConfig}
import spinal.core.sim._
import utils.bus.AxiLite.sim.AxiLite4Driver
import spinal.core._
import spinal.lib._

object ModulatorRTLSimApp extends App{
    var mod_config = Seq[modUnitConfig]()
    var mod_method = Seq[ModExtension]()
    var lookup_mod_config = Seq[lookUpModConfig]()
    val unitDataWidth = 8
    val modDataWidth = 12
    def grayEncode(n : Int): Int = n ^ (n >>> 1)
    //        def grayEncode(n: Long): Long = n ^ (n >>> 1)
    def BPSKTable802_11_I(m_val: Int, peak: Int): Array[BigInt] = {

        val ini_angle: Double  =  Math.PI
        val direction : Boolean  = false
        var codeTable = new Array[BigInt](m_val)
        var angle = ini_angle
        for(idx <- 0 until m_val){
            codeTable(grayEncode(idx)) = BigInt((peak * Math.cos(angle)).round)
            angle = if(direction) angle + 2 * Math.PI / m_val else angle - 2 * Math.PI / m_val
        }
        codeTable
    }

    def BPSKTable802_11_Q(m_val: Int, peak: Int): Array[BigInt] = {
        val ini_angle: Double  =  Math.PI
        val direction : Boolean  = false
        var codeTable = new Array[BigInt](m_val)
        var angle = ini_angle
        for(idx <- 0 until m_val){
            codeTable(grayEncode(idx)) = 0
            angle = if(direction) angle + 2 * Math.PI / m_val else angle - 2 * Math.PI / m_val
        }
        codeTable
    }
    mod_config = mod_config :+ modUnitConfig(modDataWidth, 2 * modDataWidth, 2, BPSKTable802_11_I, BPSKTable802_11_Q)
    mod_method = mod_method :+ mPSKModExtension()
    def QPSKTable802_11_I(m_val: Int, peak: Int): Array[BigInt] = {
        val ini_angle: Double  =  Math.PI * 5 / 4
        val direction : Boolean  = false
        var codeTable = new Array[BigInt](m_val)
        var angle = ini_angle
        for(idx <- 0 until m_val){
            codeTable(grayEncode(idx)) = BigInt((peak * Math.cos(angle)).round)
            angle = if(direction) angle + 2 * Math.PI / m_val else angle - 2 * Math.PI / m_val
        }
        codeTable
    }
    def QPSKTable802_11_Q(m_val: Int, peak: Int): Array[BigInt] = {
        val ini_angle: Double  =  Math.PI * 5 / 4
        val direction : Boolean  = false
        var codeTable = new Array[BigInt](m_val)
        var angle = ini_angle
        for(idx <- 0 until m_val){
            codeTable(grayEncode(idx)) = BigInt((peak * Math.sin(angle)).round)
            angle = if(direction) angle + 2 * Math.PI / m_val else angle - 2 * Math.PI / m_val
        }
        codeTable
    }
    mod_config = mod_config :+ modUnitConfig(modDataWidth, 2 * modDataWidth, 4, QPSKTable802_11_I, QPSKTable802_11_Q)
    mod_method = mod_method :+ mPSKModExtension()
    def QAM16Table802_11(m_val:Int, peak:Int): Array[BigInt] = {
        val single_m_val = log2Up(m_val) >> 1
        val m_range = Math.pow(2, single_m_val).toInt
        val factor: Double = 0.9486832980505138 / 2
        val direction : Boolean  = true
        var codeTable = new Array[BigInt](m_range)
        var value = if(direction) -peak else peak
        for(idx <- 0 until m_range){
            codeTable(grayEncode(idx)) = (factor * value).round
            value = if(direction) value + (2 * peak) / (m_range - 1) else value - (2 * peak) / (m_range - 1)
        }
        codeTable
    }
    mod_config = mod_config :+ modUnitConfig(modDataWidth, modDataWidth, 16, QAM16Table802_11, QAM16Table802_11)
    mod_method = mod_method :+ mQAMModExtension()
    //        def QAM64Table802_11(m_val:Int, peak:Int): Array[BigInt] = {
    //            val single_m_val = log2Up(m_val) >> 1
    //            val m_range = Math.pow(2, single_m_val).toInt
    //            val factor: Double = 0.5400390625
    //            val direction : Boolean  = true
    //            var codeTable = new Array[BigInt](m_range)
    //            var value = if(direction) -peak else peak
    //            for(idx <- 0 until m_range){
    //                codeTable(grayEncode(idx)) = (factor * value).round
    //                value = if(direction) value + (2 * peak) / (m_range - 1) else value - (2 * peak) / (m_range - 1)
    //            }
    //            codeTable
    //        }
    //        val qam64_config = modUnitConfig(modDataWidth, modDataWidth, 64, QAM64Table802_11, QAM64Table802_11)
    lookup_mod_config = lookup_mod_config :+ lookUpModConfig(modDataWidth, 8)
    lookup_mod_config = lookup_mod_config :+ lookUpModConfig(modDataWidth, 4, 3)
    val modulator_rtl_config = modRTLConfig(unitDataWidth, modDataWidth, 32, mod_config, mod_method, lookup_mod_config)
    SimConfig.withWave.doSim(new ModulatorRTL(modulator_rtl_config)) { dut =>
        dut.clockDomain.forkStimulus(5)
        dut.io.data_flow.unit_data.valid #= false
        dut.io.select #= 1
        dut.io.w_en #= 0
        for(idx <- 0 until 2048){
            dut.io.w_addr #= idx
            dut.io.w_data #= (1024 * Math.sin(2*Math.PI * 10 * idx/2048) + 1024).toInt
            dut.clockDomain.waitSampling(1)
        }
        dut.io.w_en #= 2
        dut.clockDomain.waitSampling(1)
        dut.io.data_flow.unit_data.valid #= true
        for(idx <- 0 until 256){
            dut.io.data_flow.unit_data.payload #= idx
            dut.clockDomain.waitSampling(1)
        }
        dut.io.data_flow.unit_data.valid #= false
        dut.clockDomain.waitSampling(1000)
    }
}
