package magiSOC.perips.Graphic.VGA

import magiSOC.perips.Graphic.{Rgb, RgbConfig}
import spinal.core._
import spinal.lib._

case class DisplayVgaCtrl(rgbConfig: RgbConfig, timingsWidth: Int = 12, fifoSize: Int = 64) extends Component {
    val io = new Bundle{
        val frameStart =  out(Bool())
        val pixels = slave(Stream(Rgb(rgbConfig)))
        val vga = master(Vga(rgbConfig))
    }
    noIoPrefix()
    val ctrl = new VgaCtrl(rgbConfig)
    ctrl.io.softReset := False
    ctrl.io.timings.setAs_h1920_v1080_r60
    ctrl.io.pixels << io.pixels
    io.frameStart := ctrl.io.frameStart
    io.vga <> ctrl.io.vga
}

object DisplayVgaCtrlBench {
    def main(args: Array[String]): Unit = {
        SpinalConfig(targetDirectory = "rtl/DisplayVgaCtrl").generateSystemVerilog(new DisplayVgaCtrl(RgbConfig(8, 8, 8), timingsWidth=16, fifoSize = 1024)).printPruned()
    }
}
