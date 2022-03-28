package magiRF.interfaces.misc.jesd204b

import spinal.core._


case class JESD204bCore() extends Component {
    val io = new Bundle{
        val SYS_Reg = in Bool()
        val SYNC = in Bool()
        val settings = in Bits(32 bits)

        val reset_is_done = in Bool()
        val reset_out = out Bool()
        val coredy_out = out Bool()
        val sys_ref_req = out Bool()

        val lan_ctrl = out(K28_5())
    }
    noIoPrefix()



}
