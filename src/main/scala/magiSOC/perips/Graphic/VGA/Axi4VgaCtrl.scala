package magiSOC.perips.Graphic.VGA

import magiSOC.perips.Graphic.RgbConfig
import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}

case class Axi4VgaCtrlGenerics(addressWidth : Int,
                               dataWidth : Int,
                               burstLength : Int,
                               frameSizeMax : Int,
                               fifoSize : Int,
                               rgbConfig: RgbConfig,
                               timingsWidth: Int = 12,
                               pendingRequestMax : Int = 7, //Should be power of two minus one
                               vgaClock : ClockDomain = ClockDomain.current){
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, dataWidth)

}

class Axi4VgaCtrl(config: Axi4VgaCtrlGenerics) extends Component {
    val io = new Bundle{
        val axi4Ctrl = slave(AxiLite4(config.axiLite4Config))
        val vga = master(Vga(config.rgbConfig))
    }
    noIoPrefix()
    AxiLite4SpecRenamer(io.axi4Ctrl)
    val axil4busCtrl = new AxiLite4SlaveFactory(io.axi4Ctrl).setName("")

    val vga = new ClockingArea(config.vgaClock){
        val vga_ctrl = VgaCtrl(config.rgbConfig, config.timingsWidth)

    }
}
