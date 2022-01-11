package magiRF.packages.CDMA.Spreador

import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.sim.AxiLite4Driver
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.bus.IQBundle.IQBundle

case class AxiLite4CDMASpreadConfig(
                             iqWidth         : Int,
                             codeWidth       : Int,
                             codeSize        : Int,
                             cfgDataWidth    : Int = 32,
                             useDynamic      : Boolean = true,
                             codeTable       : Seq[BigInt] = null
                             ){
    require(useDynamic || (codeTable != null), "Either set the useDynamic or codeTable must be valued.")
    def addressWidth = 8
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, cfgDataWidth)
    def modDataType: SInt = SInt(iqWidth bits)

}

case class AxiLite4CDMASpread(config: AxiLite4CDMASpreadConfig) extends Component {
    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))

        val base_iq = slave(Stream(Vec(IQBundle(config.modDataType), config.codeSize)))
//        val mod_iq = Vec(master(Flow(IQBundle(config.modDataType))), config.codeLength)
        val mod_iq = master(Flow(IQBundle(config.modDataType)))

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
        val cdma_spread = CDMASpreading(config.iqWidth, config.codeWidth, config.codeSize, config.useDynamic, config.codeTable)
        val cdma_code_sum = CodeCompose(config.iqWidth, config.codeSize)
        cdma_spread.io.base_iq << io.base_iq
        (cdma_code_sum.io.mod_sub_iqs, cdma_spread.io.mod_sub_iqs).zipped.foreach(_ << _)
        io.mod_iq << cdma_code_sum.io.mod_iq
    }

    val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")
    val cdma_spread_bridge = rfClockArea.cdma_spread.driveFrom(axil4busCtrl, 0x00, this.clockDomain, rfClockDomain)
    axil4busCtrl.printDataModel()
}

object AxiLite4CDMASpreadBench{
    def main(args: Array[String]): Unit = {
        val walsh_8_order = Seq[BigInt](0xff, 0xaa, 0xcc, 0x99, 0xf0, 0xa5, 0xc3, 0x96)
        val axiLite4_cdma_spread_config = AxiLite4CDMASpreadConfig(16, 8, 8, 32, true, walsh_8_order)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/AxiLite4CDMASpread").generateSystemVerilog(new AxiLite4CDMASpread(axiLite4_cdma_spread_config)).printPruned()
    }
}
