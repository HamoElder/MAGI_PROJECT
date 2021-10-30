package magiRF.modules.Modem.Modulator

import magiRF.modules.Modem.Misc.{dataDivConfig, dataDivDynamic}
import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.bus.IQBundle.IQBundle


case class AxiLite4ModulatorConfig(
                              baseDataWidth      : Int,
                              modDataWidth       : Int,
                              cfgDataWidth       : Int     = 32,
                              iqWidth            : Int     = 8,
                              tWidth             : Int     = 0
                          ){
    def baseDataType: UInt = UInt(baseDataWidth bits)
    def modDataType: SInt = SInt(modDataWidth bits)
    def addressWidth = 8
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, cfgDataWidth)

    require((iqWidth + tWidth) % 2 == 0, "iqWidth add tWidth must be the times of 2.")
    def modulatorRTLConfig: modRTLConfig = modRTLConfig(iqWidth + tWidth, modDataWidth)
    def divConfig: dataDivConfig = dataDivConfig(baseDataWidth, 0)
    def delayType: UInt = UInt(tWidth bits)
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
        val modulator_config = AxiLite4ModulatorConfig(24, 16)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/AxiLite4Modulator").generateSystemVerilog(new AxiLite4Modulator(modulator_config)).printPruned()
    }
}
