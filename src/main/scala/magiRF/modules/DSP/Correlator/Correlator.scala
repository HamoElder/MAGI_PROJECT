package magiRF.modules.DSP.Correlator

import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle
import utils.common.ShiftReg.ShiftRegister

case class CorrelatorConfig(
                                   iqWidth               : Int,
                                   slideWinSize          : Int,
                                   intermediateDataWidth : Int,
                                   useValidClc           : Boolean = false
                               ){
    def dataType: SInt = SInt(iqWidth bits)
    def resultDataType: SInt = SInt(intermediateDataWidth bits)

    override def equals(that: Any): Boolean = this == that
}

case class Correlator(config: CorrelatorConfig) extends Component{
    val io = new Bundle{
        val raw_data_0 = slave(Flow(IQBundle(config.dataType)))
        val raw_data_1 = slave(Flow(IQBundle(config.dataType)))
        val corr_result = master(Flow(IQBundle(config.resultDataType)))
    }
    noIoPrefix()
    val corr_val_i = Reg(config.resultDataType) init(0)
    val corr_val_q = Reg(config.resultDataType) init(0)

    val k1 = io.raw_data_1.cha_i * (io.raw_data_0.cha_i + io.raw_data_0.cha_q)
    val k2 = io.raw_data_0.cha_i * (io.raw_data_1.cha_q + io.raw_data_1.cha_i)
    val k3 = io.raw_data_0.cha_q * (io.raw_data_1.cha_i - io.raw_data_1.cha_q)
    val mul_i = RegNext(k1 - k3) init(0)
    val mul_q = RegNext(k1 - k2) init(0)
    val mul_data_valid = RegNext(io.raw_data_0.valid && io.raw_data_1.valid) init(False)

    val slide_win_i = if(config.useValidClc) ShiftRegister(mul_i, config.slideWinSize, mul_data_valid, ~mul_data_valid, useInitZero = true)
    else ShiftRegister(mul_i, config.slideWinSize, mul_data_valid, useInitZero = true)
    val slide_win_q = if(config.useValidClc) ShiftRegister(mul_q, config.slideWinSize, mul_data_valid, ~mul_data_valid, useInitZero = true)
    else ShiftRegister(mul_q, config.slideWinSize, mul_data_valid, useInitZero = true)

    val corr_result_valid = Reg(Bool()) init(False)
    when(mul_data_valid){
        corr_result_valid := True
        corr_val_i := (corr_val_i - slide_win_i) + mul_i
        corr_val_q := (corr_val_q - slide_win_q) + mul_q
    }.otherwise{
        corr_result_valid := False
        if(config.useValidClc){
            corr_val_i := 0
            corr_val_q := 0
        }
    }
    io.corr_result.cha_i := corr_val_i
    io.corr_result.cha_q := corr_val_q
    io.corr_result.valid := corr_result_valid
}
