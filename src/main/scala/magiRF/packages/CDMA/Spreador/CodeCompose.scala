package magiRF.packages.CDMA.Spreador

import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle

case class CodeCompose(iqWidth: Int, channelNum: Int) extends Component{
    require(isPow2(channelNum), "Channel Num must be a power of 2")
    def modDataType: SInt = SInt(iqWidth bits)
    def scaleShift: Int = log2Up(channelNum)
//    def scaleShift: Int = 0
    val io = new Bundle{
        val mod_sub_iqs = Vec(slave(Flow(IQBundle(modDataType))), channelNum)
        val mod_iq = master(Flow(IQBundle(modDataType)))
    }
    noIoPrefix()
    val sub_i_data_vec = Vec(modDataType, channelNum)
    val sub_q_data_vec = Vec(modDataType, channelNum)
    val sub_iqs_valid_vec = Vec(Bool(), channelNum)
    for(idx <- 0 until channelNum){
        sub_i_data_vec(idx) := (io.mod_sub_iqs(idx).cha_i >> scaleShift).resized
        sub_q_data_vec(idx) := (io.mod_sub_iqs(idx).cha_q >> scaleShift).resized
        sub_iqs_valid_vec(idx) := io.mod_sub_iqs(idx).valid
    }
    io.mod_iq.cha_i := sub_i_data_vec.reduceBalancedTree((op1, op2) => {op1 + op2},(s,l)=>{if(l%2==0) s else (s)})
    io.mod_iq.cha_q := sub_q_data_vec.reduceBalancedTree((op1, op2) => {op1 + op2},(s,l)=>{if(l%2==0) s else (s)})
    io.mod_iq.valid := sub_iqs_valid_vec.reduceBalancedTree(_ & _, (s,l)=>{if(l%2==0) s else (s)})
}
