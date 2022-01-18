package magiRF.packages.OAM.Spinor

import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle

case class ChaCompose(iqWidth: Int, modalNum: Int) extends Component {
    def modDataType: SInt = SInt(iqWidth bits)
    def scaleShift: Int = log2Up(modalNum)
    val io = new Bundle{
        val mod_sub_iqs = Vec(slave(Flow(IQBundle(modDataType))), modalNum)
        val mod_iq = master(Flow(IQBundle(modDataType)))
    }
    noIoPrefix()
    val sub_i_data_vec = Vec(modDataType, modalNum)
    val sub_q_data_vec = Vec(modDataType, modalNum)
    val sub_iqs_valid_vec = Vec(Bool(), modalNum)
    for(cha <- 0 until modalNum){
        sub_i_data_vec(cha) := (io.mod_sub_iqs(cha).cha_i >> scaleShift).resized
        sub_q_data_vec(cha) := (io.mod_sub_iqs(cha).cha_q >> scaleShift).resized
        sub_iqs_valid_vec(cha) := io.mod_sub_iqs(cha).valid
    }
    io.mod_iq.cha_i := sub_i_data_vec.reduceBalancedTree((op1, op2) => {op1 + op2},(s,l)=>{if(l%2==0) s else (s)})
    io.mod_iq.cha_q := sub_q_data_vec.reduceBalancedTree((op1, op2) => {op1 + op2},(s,l)=>{if(l%2==0) s else (s)})
    io.mod_iq.valid := sub_iqs_valid_vec.reduceBalancedTree(_ & _, (s,l)=>{if(l%2==0) s else (s)})
}
