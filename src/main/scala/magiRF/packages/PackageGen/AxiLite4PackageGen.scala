package magiRF.packages.PackageGen

import magiRF.interface.misc.BaseInterface.DataWithStrb
import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}

case class AxiLite4PackageGenConfig(
                                       rawDataWidth       : Int,
                                       pkgDataWidth       : Int,
                                       maxSlicesCnt       : Int,
                                       endianness         : Endianness = LITTLE
                                   ){
    def streamGenConfig: StreamPkgGenConfig = StreamPkgGenConfig(rawDataWidth, pkgDataWidth, maxSlicesCnt, endianness)
    def addressWidth = 8
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, rawDataWidth)
}

case class AxiLite4PackageGen(config: AxiLite4PackageGenConfig) extends Component{
    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))
        val raw_data = slave(Stream(DataWithStrb(config.streamGenConfig.rawDataType, useStrb = true)))
        val pkg_data = master(Stream(Fragment(config.streamGenConfig.pkgDataType)))

        val rf_clk = in(Bool())
        val rf_resetn = in(Bool())
    }
    noIoPrefix()
    AxiLite4SpecRenamer(io.axil4Ctrl)
    val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")

    val rfClockDomain: ClockDomain = ClockDomain(
        clock = io.rf_clk,
        reset = io.rf_resetn,
        config = ClockDomainConfig(
            clockEdge = RISING,
            resetKind = SYNC,
            resetActiveLevel = LOW
        )
    )
    val rfClockArea = new ClockingArea(rfClockDomain) {
        val stream_package_gen = StreamPkgGen(config.streamGenConfig)
        stream_package_gen.io.raw_data << io.raw_data
        io.pkg_data << stream_package_gen.io.pkg_data
    }
    val _ = rfClockArea.stream_package_gen.driveFrom(axil4busCtrl, 0x00, this.clockDomain, rfClockDomain)
    axil4busCtrl.printDataModel()
}


object AxiLite4StreamPkgGenBench {
    def main(args: Array[String]): Unit = {
        val axilite4_pkg_gen_config = AxiLite4PackageGenConfig(32, 8, 4096)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/AxiLiter4StreamPkgGen").generateSystemVerilog(new AxiLite4PackageGen(axilite4_pkg_gen_config)).printPruned()
    }
}