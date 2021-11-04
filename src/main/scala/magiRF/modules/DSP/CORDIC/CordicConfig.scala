package magiRF.modules.DSP.CORDIC

import spinal.core._
import spinal.lib._

import scala.math.sqrt

case class CordicConfig(
                           dataTypePeak          : ExpNumber = 8 exp,
                           dataTypeResolution    : ExpNumber = -2 exp,
                           iterations            : Int,
                           usePipeline           : Boolean = false,
                           useProgrammable       : Boolean = false
                 ) {
    def addressWidth = 8
    def dataType: SFix = SFix(dataTypePeak, dataTypeResolution)
    def iterWidth: Int = log2Up(iterations) + 1
    def iterCntType: UInt = UInt(iterWidth bits)
    def cordicRamGen(): Seq[SFix] = for(idx <- 0 until iterations) yield {
        val ram = SFix(dataTypePeak, dataTypeResolution)
        val linear = Math.pow(2, -idx)
        ram := Math.atan(linear)
//        ram := linear
//        ram := sqrt(1 + linear * linear)
        ram
    }
    /**
     * Get sequences of length n that go 1.0, 0.5, 0.25, ...
     */
//    def linear(n: Int) = for (i <- 0 until n) yield pow(2.0, -i)
    /**
     * Get gain for n-stage CORDIC
     */
//    def gain(n: Int) = linear(n).map(x => sqrt(1 + x * x)).reduce(_ * _)
    /**
     * Get sequences of length n that go atan(1), atan(0.5), atan(0.25), ...
     */
//    def arctan(n: Int) = linear(n).map(atan(_))
}
