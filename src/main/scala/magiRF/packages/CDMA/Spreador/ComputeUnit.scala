package magiRF.packages.CDMA.Spreador

import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle

case class ComputeUnit(iqWidth: Int) extends Component {
    def modDataType: SInt = SInt(iqWidth bits)

    val io = new Bundle {
        val code = in(Bool())
        val base_iq = slave(Flow(IQBundle(modDataType)))
        val mod_iq = master(Flow(IQBundle(modDataType)))

    }
    noIoPrefix()

    val mod_i = Reg(modDataType) init (0)
    val mod_q = Reg(modDataType) init (0)
    val mod_valid = Reg(Bool()) init (False)

    when(io.base_iq.fire) {
        mod_i := io.code ? io.base_iq.cha_i | -io.base_iq.cha_i
        mod_q := io.code ? io.base_iq.cha_q | -io.base_iq.cha_q
        mod_valid := True
    }.otherwise {
        mod_valid := False
    }

    io.mod_iq.cha_i := mod_i
    io.mod_iq.cha_q := mod_q
    io.mod_iq.valid := mod_valid

}
