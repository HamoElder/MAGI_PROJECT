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

object AxiLite4ModulatorSimApp extends App{
    import spinal.core.sim._
    import utils.bus.AxiLite.sim.AxiLite4Driver

    val modulator_config = AxiLite4ModulatorConfig(24, 16)
    SimConfig.withWave.doSim(new AxiLite4Modulator(modulator_config)){ dut =>
        dut.clockDomain.forkStimulus(5)
        val aliteDrv = AxiLite4Driver(dut.io.axil4Ctrl, dut.clockDomain)
        dut.io.base_data.valid #= false
        aliteDrv.reset()
        aliteDrv.write(0x00, 0x0)
        aliteDrv.write(0x04, 0x2)
        aliteDrv.write(0x08, 0x22)
        aliteDrv.write(0x10, 0x4)
        aliteDrv.write(0x14, 0x1)
        for(idx <- 0 until 2048){
            aliteDrv.write(0x18, idx)
            aliteDrv.write(0x1c, (1024 * Math.sin(2*Math.PI * 10 * idx/2048) + 1024).toInt)
        }
        aliteDrv.write(0x14, 0x0)

        dut.clockDomain.waitSampling(10)
        // start up
        aliteDrv.write(0x00, 0x1)
        dut.io.base_data.valid #= true
        for(idx <- 0 until 4096){
            dut.io.base_data.payload #= idx
            dut.clockDomain.waitSampling(1)
        }
        dut.io.base_data.valid #= false
        dut.clockDomain.waitSampling(10000)
        aliteDrv.write(0x00, 0x0)
    }
}