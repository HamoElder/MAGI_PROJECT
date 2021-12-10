package magiRF.modules.Modem.Demodulator


import magiRF.modules.Modem.Demodulator.extensions._
import magiRF.modules.Modem.Misc.{demodUnitConfig, modUnitInterface}
import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.bus.IQBundle.IQBundle
import utils.common.ClkCrossing.ClkCrossing
import utils.common.Mux.{FlowDeMux, FlowMux}

case class DemodulatorRTLConfig(
                                   unitDataWidth      : Int,
                                   modDataWidth       : Int,
                                   cfgDataWidth       : Int                        = 32,
                                   demodConfig        : Seq[demodUnitConfig]       = null,
                                   lookUpDemodConfig  : Seq[lookUpDemodConfig]     = null
                               ){
    private def hasDemod = (demodConfig != null) && demodConfig.nonEmpty
    private def hasLookUpDemod = (lookUpDemodConfig != null) && lookUpDemodConfig.nonEmpty
    require(hasDemod || hasLookUpDemod, "Demodulator RTL must have one mod method at least.")

    def unitDataType: UInt = UInt(unitDataWidth bits)
    def modDataType: SInt = SInt(modDataWidth bits)

    def editNum: Int = if(hasLookUpDemod) lookUpDemodConfig.length else 0
    def editable: Boolean = editNum != 0

    def demodNum: Int = if(hasDemod) demodConfig.length else 0
    def lookUpNum: Int = if(hasLookUpDemod) lookUpDemodConfig.length else 0
    def selectNum: Int = lookUpNum + demodNum

    def editSelectDataType: UInt = UInt(log2Up(editNum + 1) bits)

}

case class DemodulatorRTL(config: DemodulatorRTLConfig) extends Component{
    val io = new Bundle{
        val w_en = if(config.editable) in(config.editSelectDataType) else null
        val w_addr = if(config.editable) in(UInt(config.cfgDataWidth bits)) else null
        val w_data = if(config.editable) in(Bits(config.cfgDataWidth bits)) else null
        val w_sel = if(config.editable) in(Bits(2 bits)) else null

        val iq_shift = if(config.lookUpNum > 0) in(UInt(config.cfgDataWidth bits)) else null

        val select = in(UInt(log2Up(config.selectNum) bits))
        val data_flow = master(modUnitInterface(config.unitDataType, config.modDataType))
    }

    noIoPrefix()

    val demod_data_iq_demux: Vec[Flow[IQBundle[SInt]]] = FlowDeMux(io.data_flow.mod_iq, io.select, config.selectNum)
    var unit_data_seq: Seq[Flow[UInt]] = Seq[Flow[UInt]]()

    for(idx <- 0 until config.demodNum){
        val area = IQDemodExtension().applyIt(this, idx)
        area.setName(area.getName)
    }

    for(idx <- 0 until config.lookUpNum){
        val area = lookUpDemodExtension().applyIt(this, idx)
        area.setName(area.getName)
    }

    io.data_flow.unit_data := FlowMux(io.select, unit_data_seq)


    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt, coreClockDomain: ClockDomain, rfClockDomain: ClockDomain): Area = new Area{
        val select = cloneOf(io.select)
        if(config.editable){
            val w_en = cloneOf(io.w_en)
            val w_sel = cloneOf(io.w_sel)
            val w_addr = cloneOf(io.w_addr)
            val w_data = cloneOf(io.w_data)
            busCtrl.driveAndRead(w_en, address = baseAddress + 0x00, bitOffset = 0,
                documentation = "Look Up Demodulator Ram Write Enable.") init(config.editNum)
            busCtrl.driveAndRead(w_sel, address = baseAddress + 0x00, bitOffset = 1,
                documentation = "Look Up Demodulator Ram Write Channels Select.") init(0)
            busCtrl.drive(w_addr, address = baseAddress + 0x04, bitOffset = 0,
                documentation = "Look Up Demodulator Ram Write Address Set.") init(0)
            busCtrl.drive(w_data, address = baseAddress + 0x08, bitOffset = 0,
                documentation = "Look Up Demodulator Ram Write Data Set.") init(0)
            io.w_en := ClkCrossing(coreClockDomain, rfClockDomain, w_en)
            io.w_sel := ClkCrossing(coreClockDomain, rfClockDomain, w_sel)
            io.w_addr := ClkCrossing(coreClockDomain, rfClockDomain, w_addr)
            io.w_data := ClkCrossing(coreClockDomain, rfClockDomain, w_data)
        }
        if(config.lookUpNum > 0){
            val iq_shift = cloneOf(io.iq_shift)
            busCtrl.driveAndRead(iq_shift, address = baseAddress + 0x0C, bitOffset = 0,
                documentation = "Look Up Demodulator Ram IQ Shift.") init(0)
            io.iq_shift := ClkCrossing(coreClockDomain, rfClockDomain, iq_shift)
        }
        busCtrl.drive(select, address = baseAddress + 0x10, bitOffset = 0,
            documentation = "Demodulator Ram Write Select Channels") init(0)
        io.select := ClkCrossing(coreClockDomain, rfClockDomain, select)
    }

}

object DemodulatorRTLBench{
    def main(args: Array[String]): Unit ={
        var demod_config = Seq[demodUnitConfig]()
        var lookup_demod_config = Seq[lookUpDemodConfig]()
        val unitDataWidth = 12
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
        demod_config = demod_config :+ demodUnitConfig(unitDataWidth, modDataWidth, 2, B_Q_PSKTable802_11_I, null)
        demod_config = demod_config :+ demodUnitConfig(unitDataWidth, modDataWidth, 4, B_Q_PSKTable802_11_I, B_Q_PSKTable802_11_I)

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

        demod_config = demod_config :+ demodUnitConfig(unitDataWidth, modDataWidth, 16, QAM_16_Table802_11_IQ, QAM_16_Table802_11_IQ)


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

        lookup_demod_config = lookup_demod_config :+ lookUpDemodConfig(unitDataWidth, modDataWidth)

        val demodulator_rtl_config = DemodulatorRTLConfig(unitDataWidth, modDataWidth, 32, demod_config, lookup_demod_config)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/DemodulatorRTL").generateSystemVerilog(new DemodulatorRTL(demodulator_rtl_config)).printPruned()
    }
}
