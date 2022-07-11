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
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            defaultClockDomainFrequency = FixedFrequency(148 MHz), targetDirectory = "rtl/DisplayVgaCtrl").
            generateSystemVerilog(new DisplayVgaCtrl(RgbConfig(8, 8, 8), timingsWidth=16, fifoSize = 1024)).printPruned()
    }
}

case class BlinkingVgaCtrl(rgbConfig: RgbConfig) extends Component{
    val io = new Bundle{
        val vga = master(Vga(rgbConfig))
    }
    noIoPrefix()
    val counter = Reg(UInt(rgbConfig.gWidth bits))
    val ctrl = new VgaCtrl(rgbConfig)
    ctrl.io.softReset := False
    ctrl.io.timings.setAs_h1920_v1080_r60
    ctrl.io.pixels.valid := True
    ctrl.io.pixels.r := 0
    ctrl.io.pixels.g := counter
    ctrl.io.pixels.b := 0
    ctrl.io.vga <> io.vga

    when(ctrl.io.frameStart){
        counter := counter + 1
    }
}

object BlinkingVgaCtrlBench {
    def main(args: Array[String]): Unit = {
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            defaultClockDomainFrequency = FixedFrequency(148 MHz), targetDirectory = "rtl/BlinkingVgaCtrl").
            generateSystemVerilog(new BlinkingVgaCtrl(RgbConfig(8, 8, 8))).printPruned()
    }
}