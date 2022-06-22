package magiSOC.perips.Graphic.VGA

import magiSOC.perips.Graphic.{Rgb, RgbConfig}
import spinal.lib._
import spinal.core._
import spinal.lib.bus.misc.BusSlaveFactory

case class HVArea(timingsHV: VgaTimingsHV, timingsWidth: Int, enable: Bool, reset: Bool) extends Area{
    val counter = Reg(UInt(timingsWidth bit)) init(0)

    val syncStart = counter === timingsHV.syncStart
    val syncEnd = counter === timingsHV.syncEnd
    val colorStart = counter === timingsHV.colorStart
    val colorEnd = counter === timingsHV.colorEnd
    val polarity = timingsHV.polarity

    when(enable){
        counter := syncEnd ? U(0) | counter + 1
    }

    val sync    = RegInit(False) setWhen(syncStart) clearWhen(syncEnd)
    val colorEn = RegInit(False) setWhen(colorStart) clearWhen(colorEnd)

    when(reset) {
        counter := 0
        sync := False
        colorEn := False
    }
}

case class VgaCtrl(rgbConfig: RgbConfig, timingsWidth: Int = 12, fifoSize: Int = 64) extends Component {
    val io = new Bundle {
        val softReset = in(Bool()) default(False)
        val timings   = in(VgaTimings(timingsWidth))

        val frameStart = out(Bool())
        val pixels     = slave(Stream(Rgb(rgbConfig)))
        val vga        = master(Vga(rgbConfig))
    }
    noIoPrefix()
    val softReset = Reg(Bool()) init(False)

    val pixel_fifo = StreamFifo(Rgb(rgbConfig), depth = fifoSize)
    pixel_fifo.io.push << io.pixels

    val h = HVArea(io.timings.h, timingsWidth, True, io.softReset)
    val v = HVArea(io.timings.v, timingsWidth, h.syncEnd, io.softReset)
    val colorEn = h.colorEn && v.colorEn
    pixel_fifo.io.pop.ready := colorEn

    io.frameStart := v.syncStart && h.syncStart

    io.vga.hSync := h.sync ^ h.polarity
    io.vga.vSync := v.sync ^ v.polarity
    io.vga.colorEn := colorEn
    io.vga.color := pixel_fifo.io.pop.payload

}


