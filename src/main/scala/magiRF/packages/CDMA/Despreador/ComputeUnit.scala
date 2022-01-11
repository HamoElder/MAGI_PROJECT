package magiRF.packages.CDMA.Despreador

import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle
import utils.common.ShiftReg.ShiftRegister

case class ComputeUnit(iqWidth: Int, codeWidth: Int, useDynamic: Boolean = true) extends Component {
    def modDataType: SInt = SInt(iqWidth bits)
    def codeDataType: Bits = Bits(codeWidth bits)
    def cntDataType: UInt = UInt(log2Up(codeWidth) bits)

    val io = new Bundle{
        val code = in(codeDataType)
        val mod_iq = slave(Flow(IQBundle(modDataType)))
        val base_iq = master(Flow(IQBundle(modDataType)))
        val clc = in(Bool())

        val cnt_limit = if(useDynamic) in(cntDataType) else null
    }
    noIoPrefix()

    val base_i = Reg(modDataType) init(0)
    val base_q = Reg(modDataType) init(0)
    val cnt = Reg(cntDataType) init(0)

    val data_i = io.code((codeWidth - 1) - cnt) ? io.mod_iq.cha_i | - io.mod_iq.cha_i
    val data_q = io.code((codeWidth - 1) - cnt) ? io.mod_iq.cha_q | - io.mod_iq.cha_q

    val slide_win_i: SInt = ShiftRegister(data_i, codeWidth, io.mod_iq.fire, io.clc)
    val slide_win_q: SInt = ShiftRegister(data_q, codeWidth, io.mod_iq.fire, io.clc)

    val base_i_next: SInt = base_i + data_i - slide_win_i
    val base_q_next: SInt = base_q + data_q - slide_win_q

    when(io.clc){
        base_i := 0
        base_q := 0
        cnt := 0
    }.elsewhen(io.mod_iq.fire){
        base_i := base_i_next
        base_q := base_q_next
        if(useDynamic){
            cnt := (cnt === io.cnt_limit) ? U(0) | (cnt + 1)
        }else{
            cnt := cnt + 1
        }
    }

    io.base_iq.cha_i := RegNext(base_i_next)
    io.base_iq.cha_q := RegNext(base_q_next)
    if(useDynamic){
        io.base_iq.valid := RegNext((cnt === io.cnt_limit) && io.mod_iq.fire)
    }
    else {
        io.base_iq.valid := RegNext((cnt === cnt.maxValue) && io.mod_iq.fire)
    }


}
