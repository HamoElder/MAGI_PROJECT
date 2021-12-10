package magiRF.modules.Modem.Demodulator.extensions

import magiRF.modules.Modem.Demodulator.DemodulatorRTL
import spinal.core._
import spinal.lib._

case class IQDemodExtension() extends DemodExtension {
    override def needTag: Boolean = false
    override def getName: String = "IQDemod_Modulator_Extension"

    override def applyIt(demod_rtl_core: DemodulatorRTL, index: Int): Area = new Area{
        val demod = IQDemod(demod_rtl_core.config.demodConfig(index))
        demod.io.mod_iq << demod_rtl_core.demod_data_iq_demux(index)
        demod_rtl_core.unit_data_seq = demod_rtl_core.unit_data_seq :+ demod.io.unit_data
    }

}
