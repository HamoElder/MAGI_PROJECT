package magiRF.modules.Modem.Modulator.extensions

import magiRF.modules.Modem.Modulator.ModulatorRTL
import spinal.lib._
import spinal.core._

case class lookUpModExtension() extends ModExtension {
    override def needTag: Boolean = false
    override def getName: String = "lookUp_Modulator_Extension"

    override def applyIt(mod_rtl_core: ModulatorRTL, index: Int): Area = new Area{
        val mod = lookUpMod(mod_rtl_core.config.lookUpConfig(index))
        mod.io.data_flow.unit_data << mod_rtl_core.unit_data_demux(index + mod_rtl_core.config.modNum).resized
        mod_rtl_core.mod_data_iq_seq = mod_rtl_core.mod_data_iq_seq :+ mod.io.data_flow.mod_iq
        if(mod_rtl_core.config.lookUpConfig(index).codeTableIQ == null){
            mod.io.w_en := mod_rtl_core.io.w_en === index
            mod.io.w_addr := mod_rtl_core.io.w_addr.asUInt.resized
            mod.io.w_data := mod_rtl_core.io.w_data.asSInt.resized
        }
        if(mod_rtl_core.config.lookUpConfig(index).useTPlay){
            mod.io.cnt_limit := mod_rtl_core.io.cnt_limit.asUInt.resized
        }
    }

}
