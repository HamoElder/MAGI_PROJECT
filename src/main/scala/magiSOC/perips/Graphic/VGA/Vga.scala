package magiSOC.perips.Graphic.VGA

import magiSOC.perips.Graphic.{Rgb, RgbConfig}
import spinal.core._
import spinal.lib._

case class Vga(rgbConfig: RgbConfig, withColorEn: Boolean = true) extends Bundle with IMasterSlave {
    val vSync = Bool()
    val hSync = Bool()

    val colorEn = if(withColorEn) Bool() else null
    val color = Rgb(rgbConfig)

    override def asMaster(): Unit = {
        out(vSync, hSync, color)
        if(withColorEn) out(colorEn)
    }

    def <<(m: Vga): Unit ={
        this.vSync := m.vSync
        this.hSync := m.hSync
        this.colorEn := m.colorEn

        def adjust(from: UInt, width: Int):UInt = width - widthOf(from) match{
            case 0 => from
            case v if v > 0 => from << v
            case v if v < 0 => from >> v
        }

        this.color.r := adjust(m.color.r, width = widthOf(this.color.r))
        this.color.g := adjust(m.color.g, width = widthOf(this.color.g))
        this.color.b := adjust(m.color.b, width = widthOf(this.color.b))
    }

    override type RefOwnerType = this.type
}
