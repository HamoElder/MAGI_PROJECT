package magiRF.modules.Modem.Demodulator.extensions

import magiRF.modules.Modem.Demodulator.DemodulatorRTL
import spinal.core._
import spinal.lib._

abstract class DemodExtension {
    def getName: String
    def applyIt(demod_rtl_core: DemodulatorRTL, index: Int): Area
    var tag: Int = -1
    def needTag: Boolean = false
}
