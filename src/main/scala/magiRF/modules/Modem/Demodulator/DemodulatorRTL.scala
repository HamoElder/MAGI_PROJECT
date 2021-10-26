package magiRF.modules.Modem.Demodulator


import magiRF.modules.Modem.Misc.{demodUnitConfig, modUnitInterface}
import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import sun.jvm.hotspot.oops.TypeArrayKlass
import utils.common.ClkCrossing.ClkCrossing
import utils.common.Mux.{FlowDeMux, FlowMux}

case class DemodulatorRTLConfig(
                                   unitDataWidth      : Int,
                                   modDataWidth       : Int
                               ){
    def unitDataType: UInt = UInt(unitDataWidth bits)
    def modDataType: SInt = SInt(modDataWidth bits)
    def grayEncode(n : Int): Int = n ^ (n >>> 1)
    def grayEncode(n: Long): Long = n ^ (n >>> 1)

    def B_Q_PSKTable802_11_I(m_val: Int, peak: Int): (Array[BigInt], Array[Int]) = {
        var code = new Array[Int](m_val)
        var codeTable = new Array[BigInt](m_val)
        codeTable(0) = 0
        code(0) = 0
        code(1) = 1
        (codeTable, code)
    }
    val bpsk_config = demodUnitConfig(unitDataWidth, modDataWidth, 2, B_Q_PSKTable802_11_I, null)
    val qpsk_config = demodUnitConfig(unitDataWidth, modDataWidth, 4, B_Q_PSKTable802_11_I, B_Q_PSKTable802_11_I)

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

    val qam16_config = demodUnitConfig(unitDataWidth, modDataWidth, 16, QAM_16_Table802_11_IQ, QAM_16_Table802_11_IQ)


    def QAM_64_Table802_11_IQ(m_val:Int, peak:Int): (Array[BigInt], Array[Int]) = {

        val single_m_val = log2Up(m_val) >> 1
        val m_range = Math.pow(2, single_m_val).toInt
        val factor: Double = 0.5400390625
        val direction : Boolean  = true
        var codeTable = new Array[BigInt](m_range)
        var code = new Array[Int](m_range)
        var value = if(direction) -peak else peak
        for(idx <- 0 until m_range){
            codeTable(idx) = (factor * value).round
            code(idx) = idx
            value = if(direction) value + (2 * peak) / (m_range - 1) else value - (2 * peak) / (m_range - 1)
        }
        for(idx <- 0 until m_range - 1){
            codeTable(idx) = (codeTable(idx) + codeTable(idx + 1)) >> 1
        }
        (codeTable, code)
    }

    val qam64_config = demodUnitConfig(unitDataWidth, modDataWidth, 64, QAM_64_Table802_11_IQ, QAM_64_Table802_11_IQ)
    val look_up_demod_config = LookUpDemodConfig(unitDataWidth, modDataWidth)

    val mod_rtl_config: Seq[demodUnitConfig] = List[demodUnitConfig](bpsk_config, qpsk_config, qam16_config, qam64_config)
    val select_num: Int = mod_rtl_config.length + 1
}

case class DemodulatorRTL(config: DemodulatorRTLConfig) extends Component{
    val io = new Bundle{
        val w_en = in Bool()
        val w_addr = in(UInt(log2Up(config.look_up_demod_config.codeTableSize) bits))
        val w_data = in(Bits(32 bits))
        val w_sel = in(Bits(2 bits))

        val iq_shift = in(UInt(log2Up(config.look_up_demod_config.iqDataWidth) bits))
        val select = in(UInt(log2Up(config.select_num) bits))
        val data_flow = master(modUnitInterface(config.unitDataType, config.modDataType))
    }

    noIoPrefix()

    val mod_data_iq_demux = FlowDeMux(io.data_flow.mod_iq, io.select, config.select_num)

    val bpsk_demod = IQDemod(config.bpsk_config)
    val qpsk_demod = IQDemod(config.qpsk_config)
    val qam16_demod = IQDemod(config.qam16_config)
    val qam64_demod = IQDemod(config.qam64_config)
    val lookup_demod = lookUpDemod(config.look_up_demod_config)

    bpsk_demod.io.mod_iq << mod_data_iq_demux(0)
    qpsk_demod.io.mod_iq << mod_data_iq_demux(1)
    qam16_demod.io.mod_iq << mod_data_iq_demux(2)
    qam64_demod.io.mod_iq << mod_data_iq_demux(3)
    lookup_demod.io.data_flow.mod_iq << mod_data_iq_demux(4)

    val unit_data_vec = Vec(bpsk_demod.io.unit_data, qpsk_demod.io.unit_data, qam16_demod.io.unit_data,
        qam64_demod.io.unit_data, lookup_demod.io.data_flow.unit_data)

    io.data_flow.unit_data := FlowMux(io.select, unit_data_vec)

    lookup_demod.io.w_en := io.w_en
    lookup_demod.io.w_addr := io.w_addr
    lookup_demod.io.w_data := io.w_data
    lookup_demod.io.w_sel := io.w_sel
    lookup_demod.io.iq_shift := io.iq_shift

    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt, coreClockDomain: ClockDomain, rfClockDomain: ClockDomain): Area = new Area{
        val w_en = cloneOf(io.w_en)
        val w_sel = cloneOf(io.w_sel)
        val iq_shift = cloneOf(io.iq_shift)
        val w_addr = cloneOf(io.w_addr)
        val w_data = cloneOf(io.w_data)
        val select = cloneOf(io.select)

        busCtrl.driveAndRead(w_en, address = baseAddress + 0x00, bitOffset = 0,
            documentation = "Look Up Demodulator Ram Write Enable.") init(False)
        busCtrl.driveAndRead(w_sel, address = baseAddress + 0x00, bitOffset = 1,
            documentation = "Look Up Demodulator Ram Write Channels Select.") init(0)
        busCtrl.driveAndRead(iq_shift, address = baseAddress + 0x04, bitOffset = 0,
            documentation = "Look Up Demodulator Ram IQ Shift.") init(0)
        busCtrl.drive(w_addr, address = baseAddress + 0x08, bitOffset = 0,
            documentation = "Look Up Demodulator Ram Write Address Set.") init(0)
        busCtrl.drive(w_data, address = baseAddress + 0x0C, bitOffset = 0,
            documentation = "Look Up Demodulator Ram Write Data Set.") init(0)
        busCtrl.drive(select, address = baseAddress + 0x10, bitOffset = 0,
            documentation = "Demodulator Ram Write Select Channels") init(0)

        io.w_en := ClkCrossing(coreClockDomain, rfClockDomain, w_en)
        io.w_sel := ClkCrossing(coreClockDomain, rfClockDomain, w_sel)
        io.iq_shift := ClkCrossing(coreClockDomain, rfClockDomain, iq_shift)
        io.w_addr := ClkCrossing(coreClockDomain, rfClockDomain, w_addr)
        io.w_data := ClkCrossing(coreClockDomain, rfClockDomain, w_data)
        io.select := ClkCrossing(coreClockDomain, rfClockDomain, select)
    }

}

object DemodulatorRTLBench{
    def main(args: Array[String]): Unit ={
        val demodulator_rtl_config = DemodulatorRTLConfig(9, 16)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl").generateSystemVerilog(new DemodulatorRTL(demodulator_rtl_config)).printPruned()
    }
}
