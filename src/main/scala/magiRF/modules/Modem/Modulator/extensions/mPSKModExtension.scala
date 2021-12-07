package magiRF.modules.Modem.Modulator.extensions

import magiRF.modules.Modem.Misc.modUnitConfig
import magiRF.modules.Modem.Modulator.ModulatorRTL
import spinal.lib._
import spinal.core._

case class mPSKModExtension() extends ModExtension{
    override def needTag: Boolean = false
    override def getName: String = "mPSK_Modulator_Extension"

    override def applyIt(mod_rtl_core: ModulatorRTL, index: Int): Area = new Area{
        val mod = mPSKMod(mod_rtl_core.config.modConfig(index))
        mod.io.unit_data << mod_rtl_core.unit_data_demux(index).resized
        mod_rtl_core.mod_data_iq_seq = mod_rtl_core.mod_data_iq_seq :+ mod.io.mod_iq
    }
}
