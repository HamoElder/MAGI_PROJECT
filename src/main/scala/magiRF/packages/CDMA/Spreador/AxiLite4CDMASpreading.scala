package magiRF.packages.CDMA.Spreador

import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.bus.IQBundle.IQBundle

case class AxiLite4CDMASpreadingConfig(
                             iqWidth: Int,
                             codeLength: Int,
                             cfgDataWidth : Int = 32,
                             useDynamic:Boolean = true,
                             codeTable: Seq[Bits] = null
                             ){
    require(useDynamic || (codeTable != null), "Either set the useDynamic or codeTable must be valued.")
    def addressWidth = 8
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, cfgDataWidth)
    def modDataType: SInt = SInt(iqWidth bits)
    def codeWidth: Int = codeLength

}

case class AxiLite4CDMASpreading(config: AxiLite4CDMASpreadingConfig) extends Component {
    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))

        val base_iq = slave(Flow(IQBundle(config.modDataType)))
        val mod_iq = Vec(master(Flow(IQBundle(config.modDataType))), config.codeLength)

        val rf_clk = in Bool()
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
        val cdma_spread = CDMASpreading(config.iqWidth, config.codeLength, config.useDynamic, config.codeTable)
        cdma_spread.io.base_iq << io.base_iq
        (io.mod_iq, cdma_spread.io.mod_iq).zipped.foreach(_ << _)
    }

    val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")
    val cdma_spread_bridge = rfClockArea.cdma_spread.driveFrom(axil4busCtrl, 0x00, this.clockDomain, rfClockDomain)
    axil4busCtrl.printDataModel()
}

object AxiLite4CDMASpreadingBench{
    def main(args: Array[String]): Unit = {
        val axiLite4_cdma_spreading_config = AxiLite4CDMASpreadingConfig(16, 8)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/CDMA").generateSystemVerilog(new AxiLite4CDMASpreading(axiLite4_cdma_spreading_config)).printPruned()
    }
}
