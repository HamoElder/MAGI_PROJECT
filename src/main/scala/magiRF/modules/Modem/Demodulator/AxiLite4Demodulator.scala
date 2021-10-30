package magiRF.modules.Modem.Demodulator

import magiRF.modules.Modem.Misc.{dataCombination, dataCombinationConfig}
import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.bus.IQBundle.IQBundle

case class AxiLite4DemodulatorConfig(
                                baseDataWidth      : Int,
                                modDataWidth       : Int,
                                cfgDataWidth       : Int     = 32,
                                iqWidth            : Int     = 8,
                                tWidth             : Int     = 4
                            ){
    def baseDataType: UInt = UInt(baseDataWidth bits)
    def modDataType: SInt = SInt(modDataWidth bits)

    def addressWidth = 8
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, cfgDataWidth)

    def demodulator_rtl_config: DemodulatorRTLConfig = DemodulatorRTLConfig(iqWidth + tWidth, modDataWidth)

    def data_comb_config: dataCombinationConfig = dataCombinationConfig(baseDataWidth)
    def delayType: UInt = UInt(tWidth bits)
}


case class AxiLite4Demodulator(config: AxiLite4DemodulatorConfig) extends Component {
    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))
        val mod_iq = slave(Flow(IQBundle(config.modDataType)))
        val base_data = master(Flow(config.baseDataType))

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
        val demodulator_config = AxiLite4DemodulatorConfig(24, 16)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/AxiLite4Demodulator").generateSystemVerilog(new AxiLite4Demodulator(demodulator_config)).printPruned()
    }
}
