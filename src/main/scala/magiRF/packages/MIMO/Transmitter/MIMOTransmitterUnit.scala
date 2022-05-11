package magiRF.packages.MIMO.Transmitter

import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle

case class MIMOTransmitterUnit(iqWidth: Int, eleNum: Int) extends Component {
    def iqDataType: SInt = SInt(iqWidth bits)
    def modDataWidth: Int = iqWidth + iqWidth
    def modDataType: SInt = SInt(modDataWidth bits)

    val io = new Bundle{
        val shift_i = in(Vec(iqDataType, eleNum))
        val shift_q = in(Vec(iqDataType, eleNum))

        val base_iq = slave(Flow(IQBundle(iqDataType)))
        val mod_sub_iqs = master(Flow(Vec(IQBundle(modDataType), eleNum)))

    }
    noIoPrefix()

    val base_iq_buf = RegNext(io.base_iq.payload)
    val base_valid_buf = RegNext(io.base_iq.valid) init(False)
    val mod_iqs_vec = Vec(Reg(IQBundle(modDataType)), eleNum)
    val mod_iqs_valid = Reg(Bool()) init(False)

    when(base_valid_buf){
        for(ele <- 0 until eleNum){
            mod_iqs_vec(ele).cha_i := (io.shift_i(ele) * base_iq_buf.cha_i) - (io.shift_q(ele) * base_iq_buf.cha_q)
            mod_iqs_vec(ele).cha_q := (io.shift_q(ele) * base_iq_buf.cha_i) + (io.shift_i(ele) * base_iq_buf.cha_q)
        }
        mod_iqs_valid := True
    }.otherwise{
        for(ele <- 0 until eleNum){
            mod_iqs_vec(ele).cha_i := 0
            mod_iqs_vec(ele).cha_q := 0
        }
        mod_iqs_valid := False
    }

    for(ele <- 0 until eleNum){
        io.mod_sub_iqs.payload(ele) := mod_iqs_vec(ele)
    }

    io.mod_sub_iqs.valid := mod_iqs_valid

}
