package magiRF.packages.OAM.Unspinor

import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.bus.IQBundle.IQBundle

case class AxiLite4OAMUnspinorConfig(
                                    iqWidth: Int,
                                    eleNum: Int,
                                    modalNum: Int,
                                    cfgDataWidth: Int = 32
                                    ){
    def addressWidth = 8
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, cfgDataWidth)
    def iqDataType: SInt = SInt(iqWidth bits)
    def transDataWidth: Int = iqWidth + iqWidth
    def transDataType: SInt = SInt(transDataWidth bits)

    override def equals(that: Any): Boolean = that == this
}

class AxiLite4OAMUnspinor(config: AxiLite4OAMUnspinorConfig) extends Component {
    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))

        val mod_iq = slave(Stream(IQBundle(config.iqDataType)))
        val base_sub_iqs = master(Flow(Vec(IQBundle(config.transDataType), config.modalNum)))

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
            resetActiveLevel = LOW
        )
    )

    val rfClockArea = new ClockingArea(rfClockDomain){
        val unspin_core = OAMUnspinor(config.iqWidth, config.eleNum, config.modalNum)
        unspin_core.io.mod_iq << io.mod_iq
        io.base_sub_iqs << unspin_core.io.base_sub_iqs
    }

    val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")
    val oam_unspinor_bridge = rfClockArea.unspin_core.driveFrom(axil4busCtrl, 0x00, this.clockDomain, rfClockDomain)
    axil4busCtrl.printDataModel()
}

object AxiLite4OAMSpinorBench{
    def main(args: Array[String]): Unit = {
        val unspinor_config = AxiLite4OAMUnspinorConfig(16, 8, 8)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/AxiLite4OAMUnspinor").generateSystemVerilog(new AxiLite4OAMUnspinor(unspinor_config)).printPruned()
    }
}
