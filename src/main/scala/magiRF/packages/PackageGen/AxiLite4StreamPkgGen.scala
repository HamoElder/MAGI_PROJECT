package magiRF.packages.PackageGen

import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SpecRenamer}

case class AxiLite4StreamPkgGenConfig(
                                         rawDataWidth       : Int,
                                         pkgDataWidth       : Int,
                                         cfgDataWidth       : Int     = 32
                                     ){

}

case class AxiLite4StreamPkgGen() extends Component {

    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))
        val rf_clk = in(Bool())
        val rf_rst = in(Bool())
    }
    noIoPrefix()

}
