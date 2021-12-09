package magiRF.modules.Modem.Modulator

import magiRF.modules.Modem.Misc.{dataDivConfig, dataDivDynamic, modUnitConfig}
import magiRF.modules.Modem.Modulator.extensions.{ModExtension, lookUpModConfig, mPSKModExtension, mQAMModExtension}
import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.bus.IQBundle.IQBundle


case class AxiLite4ModulatorConfig(
                              baseDataWidth      : Int,
                              modDataWidth       : Int,
                              unitDataWidth      : Int,
                              cfgDataWidth       : Int     = 32,
                              modConfig          : Seq[modUnitConfig]   = null,
                              modMethod          : Seq[ModExtension]    = null,
                              lookUpConfig       : Seq[lookUpModConfig] = null
                          ){
    def baseDataType: UInt = UInt(baseDataWidth bits)
    def modDataType: SInt = SInt(modDataWidth bits)
    def addressWidth = 8
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, cfgDataWidth)

    def modulatorRTLConfig: modRTLConfig = modRTLConfig(unitDataWidth, modDataWidth, cfgDataWidth, modConfig, modMethod, lookUpConfig)
    def divConfig: dataDivConfig = dataDivConfig(baseDataWidth, 0)
}

case class AxiLite4Modulator(config: AxiLite4ModulatorConfig) extends Component {
    val io = new Bundle{
        val base_data = slave(Stream(config.baseDataType))
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))

        val mod_iq = master(Flow(IQBundle(config.modDataType)))

        val rf_clk = in Bool()
        val rf_resetn = in Bool()
    }
    noIoPrefix()
    AxiLite4SpecRenamer(io.axil4Ctrl)
    val rfClockDomain = ClockDomain(
        clock  = io.rf_clk,
        reset  = io.rf_resetn,
        config = ClockDomainConfig(
            clockEdge = RISING,
            resetKind = SYNC,
            resetActiveLevel = LOW
        )
    )
    val rfClockArea = new ClockingArea(rfClockDomain) {
        val mod_data_div = dataDivDynamic(config.divConfig)
        mod_data_div.io.base_data.payload := io.base_data.payload
        mod_data_div.io.base_data.valid := io.base_data.valid
        io.base_data.ready := mod_data_div.io.base_data.ready

        val mod_rtl = ModulatorRTL(config.modulatorRTLConfig)
        mod_rtl.io.data_flow.unit_data << mod_data_div.io.unit_data.resized
        io.mod_iq.payload := mod_rtl.io.data_flow.mod_iq.payload
        io.mod_iq.valid := mod_rtl.io.data_flow.mod_iq.valid
    }

    val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")
    val mod_data_bridge = rfClockArea.mod_data_div.driveFrom(axil4busCtrl, 0x00, this.clockDomain, rfClockDomain)
    val mod_rtl_bridge = rfClockArea.mod_rtl.driveFrom(axil4busCtrl, 0x10, this.clockDomain, rfClockDomain)
    axil4busCtrl.printDataModel()
}

object AxiLite4ModulatorBench{
    def main(args: Array[String]): Unit = {
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
//        lookup_mod_config = lookup_mod_config :+ lookUpModConfig(modDataWidth, 4, 3)
        val modulator_config = AxiLite4ModulatorConfig(16, modDataWidth, unitDataWidth, 32, mod_config, mod_method, lookup_mod_config)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/AxiLite4Modulator").generateSystemVerilog(new AxiLite4Modulator(modulator_config)).printPruned()
    }
}
