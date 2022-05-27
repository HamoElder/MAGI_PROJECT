package magiFSR.bundle

import spinal.core._
import spinal.lib._

case class Rgb(rWidth: Int, gWidth: Int, bWidth: Int) extends Bundle {
    val r = UInt(rWidth bits)
    val g = UInt(gWidth bits)
    val b = UInt(bWidth bits)
}
