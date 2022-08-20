package magiRF.modules.Modem.Modulator

import magiRF.modules.Modem.Misc.{modUnitConfig, modUnitInterface}
import magiRF.modules.Modem.Modulator.extensions._
import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.bus.IQBundle.IQBundle
import utils.common.ClkCrossing.FFSynchronizer
import utils.common.Mux.{FlowDeMux, FlowMux}

case class modRTLConfig(
                          unitDataWidth     : Int,
                          modDataWidth      : Int,
                          cfgDataWidth      : Int                  = 32,
                          modConfig         : Seq[modUnitConfig]   = null,
                          modMethod         : Seq[ModExtension]    = null,
                          lookUpConfig      : Seq[lookUpModConfig] = null
                          ){
    private def hasMod = (modConfig != null && modMethod != null)
    private def hasLookup = (lookUpConfig != null) && lookUpConfig.nonEmpty
    require(hasMod || hasLookup, "Modulator RTL must have one mod method at least.")
    if(hasMod) require(modConfig.length == modMethod.length, "The size of config and method must be the same.")

    def unitDataType: Bits = Bits(unitDataWidth bits)
    def modDataType: SInt = SInt(modDataWidth bits)

    def editNum: Int = if(hasLookup) lookUpConfig.map(i => {if(i.codeTableIQ == null) 1 else 0}).sum else 0
    def editable: Boolean = editNum != 0
    def useTPlay: Boolean = if(hasLookup) lookUpConfig.map(i => {if(i.useTPlay) 1 else 0}).sum != 0 else false
    def lookUpNum: Int =  if(hasLookup) lookUpConfig.length else 0
    def modNum: Int = if(hasMod) modConfig.length else 0
    def selectNum: Int = lookUpNum + modNum
    def editSelectDataType: UInt = UInt(log2Up(editNum + 1) bits)
}


case class ModulatorRTL(config: modRTLConfig) extends Component {
    val io = new Bundle{
        val data_flow = slave(modUnitInterface(config.unitDataType, config.modDataType))

        val w_en = if(config.editable) in(config.editSelectDataType) else null
        val w_addr = if(config.editable) in(Bits(config.cfgDataWidth bits)) else null
        val w_data = if(config.editable) in(Bits(config.cfgDataWidth bits)) else null
        val cnt_limit = if(config.useTPlay) in(Bits(config.cfgDataWidth bits)) else null

        val select = in(UInt(log2Up(config.selectNum) bits))
    }
    noIoPrefix()

    val unit_data_demux = FlowDeMux(io.data_flow.unit_data, io.select, config.selectNum)

    var mod_data_iq_seq = Seq[Flow[Fragment[IQBundle[SInt]]]]()
    for(extension <- config.modMethod.zipWithIndex){
        val area = extension._1.applyIt(this, extension._2)
        area.setName(extension._1.getName)
    }

    for(idx <- 0 until config.lookUpNum){
        val area = lookUpModExtension().applyIt(this, idx)
        area.setName(area.getName)
    }

    io.data_flow.mod_iq := FlowMux(io.select, mod_data_iq_seq)

    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt, coreClockDomain: ClockDomain, rfClockDomain: ClockDomain): Area = new Area {
        val select = cloneOf(io.select)

        busCtrl.driveAndRead(select, address = baseAddress + 0x00, bitOffset = 0,
            documentation = "Modulator RTL select.") init(0)
        if(config.editable){
            val w_en = cloneOf(io.w_en)
            val w_addr = cloneOf(io.w_addr)
            val w_data = cloneOf(io.w_data)
            busCtrl.drive(w_en, address = baseAddress + 0x04, bitOffset = 0,
                documentation = "Look Up Modulator Ram Write Enable.") init(config.editNum)
            busCtrl.drive(w_addr, address = baseAddress + 0x08, bitOffset = 0,
                documentation = "Look Up Modulator Ram Write Address Set.") init(0)
            busCtrl.drive(w_data, address = baseAddress + 0x0C, bitOffset = 0,
                documentation = "Look Up Modulator Ram Write Data Set.") init(0)
            io.w_en := FFSynchronizer(coreClockDomain, rfClockDomain, w_en)
            io.w_addr := FFSynchronizer(coreClockDomain, rfClockDomain, w_addr)
            io.w_data := FFSynchronizer(coreClockDomain, rfClockDomain, w_data)
        }
        if(config.useTPlay){
            val cnt_limit = cloneOf(io.cnt_limit)
            busCtrl.drive(cnt_limit, address = baseAddress + 0x10, bitOffset = 0,
                documentation = "Look Up Modulator Play Mode T Limit.") init(0)
            io.cnt_limit := FFSynchronizer(coreClockDomain, rfClockDomain, cnt_limit)
        }
        io.select := FFSynchronizer(coreClockDomain, rfClockDomain, select)
    }
}

object ModulatorRTLBench{
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
        lookup_mod_config = lookup_mod_config :+ lookUpModConfig(modDataWidth, 4, 3)
        val modulator_rtl_config = modRTLConfig(unitDataWidth, modDataWidth, 32, mod_config, mod_method, lookup_mod_config)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/ModulatorRTL").generateSystemVerilog(new ModulatorRTL(modulator_rtl_config)).printPruned()
    }
}
