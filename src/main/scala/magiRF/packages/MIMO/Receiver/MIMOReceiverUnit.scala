package magiRF.packages.MIMO.Receiver

import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle

case class MIMOReceiverUnit(iqWidth: Int, eleNum: Int) extends Component{
    def iqDataType: SInt = SInt(iqWidth bits)
    def transDataWidth: Int = iqWidth + iqWidth
    def transDataType: SInt = SInt(transDataWidth bits)

    val io = new Bundle{
        val shift_i = in(Vec(iqDataType, eleNum))
        val shift_q = in(Vec(iqDataType, eleNum))

        val mod_iq = slave(Flow(IQBundle(iqDataType)))
        val base_sub_iq = master(Flow(IQBundle(transDataType)))
    }
    noIoPrefix()

    val mod_iq_buf = RegNext(io.mod_iq.payload)
    val mod_valid_buf = RegNext(io.mod_iq.valid) init(False)
    val trans_i_vec = Vec(Reg(transDataType), eleNum)
    val trans_q_vec = Vec(Reg(transDataType), eleNum)
    val trans_valid = Reg(Bool()) init(False)

    when(mod_valid_buf){
        for(ele <- 0 until eleNum){
            trans_i_vec(ele) := (mod_iq_buf.cha_i * io.shift_i(ele)) - (mod_iq_buf.cha_q * io.shift_q(ele))
            trans_q_vec(ele) := (mod_iq_buf.cha_i * io.shift_q(ele)) + (mod_iq_buf.cha_q * io.shift_i(ele))
        }
        trans_valid := True
    }.otherwise{
        for(ele <- 0 until eleNum){
            trans_i_vec(ele) := 0
            trans_q_vec(ele) := 0
        }
        trans_valid := False
    }

    io.base_sub_iq.cha_i := trans_i_vec.reduceBalancedTree((op1, op2) => {((op1 + op2) >> 1).resize(transDataWidth)},(s,l)=>{RegNext(s)})
    io.base_sub_iq.cha_q := trans_q_vec.reduceBalancedTree((op1, op2) => {((op1 + op2) >> 1).resize(transDataWidth)},(s,l)=>{RegNext(s)})
    io.base_sub_iq.valid := Delay(trans_valid, log2Up(eleNum))

}
