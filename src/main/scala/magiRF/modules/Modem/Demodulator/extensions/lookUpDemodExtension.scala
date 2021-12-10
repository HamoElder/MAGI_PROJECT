package magiRF.modules.Modem.Demodulator.extensions

import magiRF.modules.Modem.Demodulator.DemodulatorRTL
import spinal.core._
import spinal.lib._

case class lookUpDemodExtension() extends DemodExtension {
    override def needTag: Boolean = false
    override def getName: String = "lookUp_Demodulator_Extension"

    override def applyIt(demod_rtl_core: DemodulatorRTL, index: Int): Area = new Area{
        val demod = lookUpDemod(demod_rtl_core.config.lookUpDemodConfig(index))
        demod.io.data_flow.mod_iq << demod_rtl_core.demod_data_iq_demux(index + demod_rtl_core.config.demodNum)
        demod_rtl_core.unit_data_seq = demod_rtl_core.unit_data_seq :+ demod.io.data_flow.unit_data
        demod.io.iq_shift := demod_rtl_core.io.iq_shift.resized
        if(demod_rtl_core.config.editable){
            demod.io.w_en := demod_rtl_core.io.w_en === index
            demod.io.w_data := demod_rtl_core.io.w_data.resized
            demod.io.w_addr := demod_rtl_core.io.w_addr.resized
            demod.io.w_sel := demod_rtl_core.io.w_sel
        }
    }

}
