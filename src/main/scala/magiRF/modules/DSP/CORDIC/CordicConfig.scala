package magiRF.modules.DSP.CORDIC

import spinal.core._
import spinal.lib._

case class CordicConfig(
                           dataTypePeak: ExpNumber = 8 exp,
                           dataTypeResolution: ExpNumber = -2 exp,
                           iterations : Int,
                           usePipeline: Boolean = false
                 ) {
    def addressWidth = 8
    def dataType: SFix = SFix(dataTypePeak, dataTypeResolution)
    def iterWidth: Int = log2Up(iterations) + 1
    def iterCntType: UInt = UInt(iterWidth bits)
    def cordicRamGen(): Seq[SFix] = for(idx <- 0 until iterations) yield {
        val ram = SFix(dataTypePeak, dataTypeResolution)
//        ram := Math.atan(Math.pow(2, -idx ))
        ram := Math.pow(2, -idx)
        ram
    }

}
