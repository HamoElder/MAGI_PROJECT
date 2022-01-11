package magiRF.packages.CDMA.Despreador

import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.bus.IQBundle.IQBundle

case class AxiLite4CDMADespreadConfig(
                                     iqWidth         : Int,
                                     codeWidth       : Int,
                                     codeSize        : Int,
                                     cfgDataWidth    : Int = 32,
                                     useDynamic      : Boolean = true,
                                     codeTable       : Seq[BigInt] = null
                                     ){
    require(useDynamic || (codeTable != null), "Either set the useDynamic or CodeTable.")
    def modDataType: SInt = SInt(iqWidth bits)

    def addressWidth = 8
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, cfgDataWidth)
}

case class AxiLite4CDMADespread(config: AxiLite4CDMADespreadConfig) extends Component{
    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))
        val mod_iq = slave(Stream(IQBundle(config.modDataType)))
        val base_sub_iqs = Vec(master(Flow(IQBundle(config.modDataType))), config.codeSize)

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
        val cdma_despread = CDMADespreading(config.iqWidth, config.codeWidth, config.codeSize, config.useDynamic, config.codeTable)
        cdma_despread.io.mod_iq << io.mod_iq
        (io.base_sub_iqs, cdma_despread.io.base_sub_iqs).zipped.foreach(_ << _)
    }

    val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")
    val cdma_spread_bridge = rfClockArea.cdma_despread.driveFrom(axil4busCtrl, 0x00, this.clockDomain, rfClockDomain)
    axil4busCtrl.printDataModel()
}


object AxiLite4CDMADespreadBench{
    def main(args: Array[String]): Unit = {
        val walsh_8_order = Seq[BigInt](0xff, 0xaa, 0xcc, 0x99, 0xf0, 0xa5, 0xc3, 0x96)
        val axiLite4_cdma_despread_config = AxiLite4CDMADespreadConfig(16, 8, 8, 32, true, walsh_8_order)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/AxiLite4CDMADespread").generateSystemVerilog(new AxiLite4CDMADespread(axiLite4_cdma_despread_config)).printPruned()
    }
}