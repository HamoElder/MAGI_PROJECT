package magiRF.modules.Modem.Demodulator

import magiRF.modules.Modem.Demodulator.extensions.lookUpDemodConfig
import magiRF.modules.Modem.Misc.{dataCombination, dataCombinationConfig, demodUnitConfig}
import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.bus.IQBundle.IQBundle

case class AxiLite4DemodulatorConfig(
                                baseDataWidth      : Int,
                                modDataWidth       : Int,
                                cfgDataWidth       : Int                        = 32,
                                demodConfig        : Seq[demodUnitConfig]       = null,
                                lookUpDemodConfig  : Seq[lookUpDemodConfig]     = null
                            ){
    def baseDataType: UInt = UInt(baseDataWidth bits)
    def modDataType: SInt = SInt(modDataWidth bits)

    def addressWidth = 8
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, cfgDataWidth)

    def demodulator_rtl_config: DemodulatorRTLConfig = DemodulatorRTLConfig(baseDataWidth, modDataWidth, cfgDataWidth, demodConfig, lookUpDemodConfig)

    def data_comb_config: dataCombinationConfig = dataCombinationConfig(baseDataWidth)

}


case class AxiLite4Demodulator(config: AxiLite4DemodulatorConfig) extends Component {
    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))
        val mod_iq = slave(Flow(Fragment(IQBundle(config.modDataType))))
        val base_data = master(Flow(Fragment(config.baseDataType)))

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
        val demod_rtl = DemodulatorRTL(config.demodulator_rtl_config)
        demod_rtl.io.data_flow.mod_iq.payload := io.mod_iq.payload
        demod_rtl.io.data_flow.mod_iq.valid := io.mod_iq.valid

        val data_combination = dataCombination(config.data_comb_config)
        data_combination.io.unit_data << demod_rtl.io.data_flow.unit_data.resized
        io.base_data.payload := data_combination.io.base_data.payload
        io.base_data.valid := data_combination.io.base_data.valid
    }

    val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")
    val demod_rtl_bridge = rfClockArea.demod_rtl.driveFrom(axil4busCtrl, baseAddress = 0x00, this.clockDomain, rfClockDomain)
    val data_comb_bridge = rfClockArea.data_combination.driveFrom(axil4busCtrl, baseAddress = 0x20, this.clockDomain, rfClockDomain)
    axil4busCtrl.printDataModel()
}

object AxiLite4DemodulatorBench{
    def main(args: Array[String]): Unit ={
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

        lookup_demod_config = lookup_demod_config :+ lookUpDemodConfig(baseDataWidth, modDataWidth)

        val demodulator_config = AxiLite4DemodulatorConfig(baseDataWidth, modDataWidth, 32, demod_config, lookup_demod_config)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/AxiLite4Demodulator").generateSystemVerilog(new AxiLite4Demodulator(demodulator_config)).printPruned().printUnused()
    }
}
