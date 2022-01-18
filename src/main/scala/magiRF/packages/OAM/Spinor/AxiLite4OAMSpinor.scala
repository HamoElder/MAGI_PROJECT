package magiRF.packages.OAM.Spinor

import spinal.lib._
import spinal.core._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.bus.IQBundle.IQBundle

case class AxiLite4OAMSpinorConfig(
                                  iqWidth: Int,
                                  eleNum: Int,
                                  modalNum: Int,
                                  cfgDataWidth: Int = 32,
                                  ){
    require(modalNum <= eleNum, "The num of Modal must equal or less than the num of Channels(Antenna elements).")
    def addressWidth = 8
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, cfgDataWidth)
    def iqDataType: SInt = SInt(iqWidth bits)
    def modDataWidth: Int = iqWidth + iqWidth
    def modDataType: SInt = SInt(modDataWidth bits)

}


case class AxiLite4OAMSpinor(config: AxiLite4OAMSpinorConfig) extends Component{
    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))

        val base_iqs = slave(Flow(Vec(IQBundle(config.iqDataType), config.modalNum)))
        val mod_iqs = master(Flow(Vec(IQBundle(config.modDataType), config.eleNum)))

        val rf_clk = in(Bool())
        val rf_resetn = in(Bool())
    }
    noIoPrefix()

    AxiLite4SpecRenamer(io.axil4Ctrl)

    val rfClockDomain = ClockDomain(
        clock = io.rf_clk,
        reset = io.rf_resetn,
        config = ClockDomainConfig(
            clockEdge = RISING,
            resetKind = SYNC,
            resetActiveLevel = LOW,
        )
    )

    val rfClockArea = new ClockingArea(rfClockDomain){
        val spin_core = OAMSpinor(config.iqWidth, config.eleNum, config.modalNum)
        spin_core.io.base_iqs << io.base_iqs
        io.mod_iqs << spin_core.io.mod_iqs
    }

    val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")
    val oam_spinor_bridge = rfClockArea.spin_core.driveFrom(axil4busCtrl, 0x00, this.clockDomain, rfClockDomain)
    axil4busCtrl.printDataModel()
}

object AxiLite4OAMSpinorBench{
    def main(args: Array[String]): Unit = {
        val spinor_config = AxiLite4OAMSpinorConfig(16, 8, 8)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/AxiLite4OAMSpinor").generateSystemVerilog(new AxiLite4OAMSpinor(spinor_config)).printPruned()
    }
}
