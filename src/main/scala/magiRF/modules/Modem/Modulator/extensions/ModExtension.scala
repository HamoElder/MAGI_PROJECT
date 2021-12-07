package magiRF.modules.Modem.Modulator.extensions

import magiRF.modules.Modem.Misc.modUnitConfig
import magiRF.modules.Modem.Modulator.ModulatorRTL
import spinal.core._
import spinal.lib._


abstract class ModExtension {
    def getName: String
    def applyIt(mod_rtl_core: ModulatorRTL, index: Int) : Area
    var tag : Int = -1
    def needTag : Boolean = false
}
