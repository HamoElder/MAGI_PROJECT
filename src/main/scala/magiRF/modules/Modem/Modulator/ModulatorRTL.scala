package magiRF.modules.Modem.Modulator

import magiRF.modules.Modem.Misc.{modUnitConfig, modUnitInterface}
import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.common.ClkCrossing.ClkCrossing
import utils.common.Mux.{FlowDeMux, FlowMux}

case class modRTLConfig(
                          unitDataWidth     : Int,
                          modDataWidth      : Int,
                          iqWidth           : Int     = 8,
                          tWidth            : Int     = 3
                          ){
    def unitDataType: UInt = UInt(unitDataWidth bits)
    def modDataType: SInt = SInt(modDataWidth bits)
    def grayEncode(n : Int): Int = n ^ (n >>> 1)
    def grayEncode(n: Long): Long = n ^ (n >>> 1)
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
    val bpsk_config = modUnitConfig(modDataWidth, 2 * modDataWidth, 2, BPSKTable802_11_I, BPSKTable802_11_Q)

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
    val qpsk_config = modUnitConfig(modDataWidth, 2 * modDataWidth, 4, QPSKTable802_11_I, QPSKTable802_11_Q)

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
    val qam16_config = modUnitConfig(modDataWidth, modDataWidth, 16, QAM16Table802_11, QAM16Table802_11)

    def QAM64Table802_11(m_val:Int, peak:Int): Array[BigInt] = {
        val single_m_val = log2Up(m_val) >> 1
        val m_range = Math.pow(2, single_m_val).toInt
        val factor: Double = 0.5400390625
        val direction : Boolean  = true
        var codeTable = new Array[BigInt](m_range)
        var value = if(direction) -peak else peak
        for(idx <- 0 until m_range){
            codeTable(grayEncode(idx)) = (factor * value).round
            value = if(direction) value + (2 * peak) / (m_range - 1) else value - (2 * peak) / (m_range - 1)
        }
        codeTable
    }
    val qam64_config = modUnitConfig(modDataWidth, modDataWidth, 64, QAM64Table802_11, QAM64Table802_11)

    val lookUp_config = LookUpModConfig(modDataWidth, iqWidth, tWidth)

    val mod_rtl_config: Seq[modUnitConfig] = List[modUnitConfig](bpsk_config, qpsk_config, qam16_config, qam64_config)
    val select_num: Int = mod_rtl_config.length + 1

}


case class ModulatorRTL(config: modRTLConfig) extends Component {
    val io = new Bundle{
        val data_flow = slave(modUnitInterface(config.unitDataType, config.modDataType))

        val w_en = if(config.lookUp_config.codeTableIQ == null) in(Bool()) else null
        val w_addr = if(config.lookUp_config.codeTableIQ == null) in(config.lookUp_config.addrType) else null
        val w_data = if(config.lookUp_config.codeTableIQ == null) in(config.lookUp_config.memoryType) else null

        val select = in(UInt(log2Up(config.select_num) bits))
    }
    noIoPrefix()

    val unit_data_demux = FlowDeMux(io.data_flow.unit_data, io.select, config.select_num)

    val bpsk_mod = mPSKMod(config.bpsk_config)
    val qpsk_mod = mPSKMod(config.qpsk_config)
    val qam16_mod = mQAMMod(config.qam16_config)
    val qam64_mod = mQAMMod(config.qam64_config)
    val lookup_mod = LookUpMod(config.lookUp_config)

    bpsk_mod.io.unit_data << unit_data_demux(0).resized
    qpsk_mod.io.unit_data << unit_data_demux(1).resized
    qam16_mod.io.unit_data << unit_data_demux(2).resized
    qam64_mod.io.unit_data << unit_data_demux(3).resized
    lookup_mod.io.data_flow.unit_data << unit_data_demux(4).resized

    val mod_data_iq_vec = Vec(bpsk_mod.io.mod_iq, qpsk_mod.io.mod_iq, qam16_mod.io.mod_iq,
        qam64_mod.io.mod_iq, lookup_mod.io.data_flow.mod_iq)

    io.data_flow.mod_iq := FlowMux(io.select, mod_data_iq_vec)

    lookup_mod.io.w_en := io.w_en
    lookup_mod.io.w_addr := io.w_addr
    lookup_mod.io.w_data := io.w_data

    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt, coreClockDomain: ClockDomain, rfClockDomain: ClockDomain): Area = new Area {
        val select = cloneOf(io.select)
        val w_en = cloneOf(io.w_en)
        val w_addr = cloneOf(io.w_addr)
        val w_data = cloneOf(io.w_data)

        busCtrl.driveAndRead(select, address = baseAddress + 0x00, bitOffset = 0,
            documentation = "Modulator RTL select.") init(0)
        busCtrl.drive(w_en, address = baseAddress + 0x04, bitOffset = 0,
            documentation = "Look Up Modulator Ram Write Enable.") init(False)
        busCtrl.drive(w_addr, address = baseAddress + 0x08, bitOffset = 0,
            documentation = "Look Up Modulator Ram Write Address Set.") init(0)
        busCtrl.drive(w_data, address = baseAddress + 0x0c, bitOffset = 0,
            documentation = "Look Up Modulator Ram Write Data Set.") init(0)

        io.select := ClkCrossing(coreClockDomain, rfClockDomain, select)
        io.w_en := ClkCrossing(coreClockDomain, rfClockDomain, w_en)
        io.w_addr := ClkCrossing(coreClockDomain, rfClockDomain, w_addr)
        io.w_data := ClkCrossing(coreClockDomain, rfClockDomain, w_data)
    }
}

object ModulatorRTLBench{
    def main(args: Array[String]): Unit = {
        val modulator_rtl_config = modRTLConfig(32, 16)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/ModulatorRTL").generateSystemVerilog(new ModulatorRTL(modulator_rtl_config)).printPruned()
    }
}
