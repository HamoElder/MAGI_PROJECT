package magiRF.modules.DSP.PowerAdjustor

import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle
import utils.common.ShiftReg.ShiftRegister

case class PowerMeterConfig(
                               iqWidth     : Int,
                               slideWinSize: Int
                           ) {
    require(isPow2(slideWinSize) & slideWinSize >= 0, "The slide window size must be a power of 2 and equal or bigger than 0")
    def dataType: SInt = SInt(iqWidth bits)
    def resultDataType: SInt = SInt(2 * iqWidth bits)
    def shiftStep: Int = log2Up(slideWinSize)
    def shearSize: Int = iqWidth * 2 - iqWidth + shiftStep

}

/**
 * latency : 2 slot
 */
case class PowerMeter(config: PowerMeterConfig) extends Component {
    val io = new Bundle{
        val raw_data = slave(Flow(IQBundle(config.dataType)))
        val power_result = master(Flow(IQBundle(config.resultDataType)))
    }
    noIoPrefix()
    val power_val = Reg(IQBundle(config.resultDataType))
    val power_val_i = Reg(config.resultDataType) init(0)
    val power_val_q = Reg(config.resultDataType) init(0)

    power_val.cha_i := power_val_i
    power_val.cha_q := power_val_q

    val sq_i = io.raw_data.cha_i * io.raw_data.cha_i
    val sq_q = io.raw_data.cha_q * io.raw_data.cha_q
    val power_cal_i = RegNext(sq_i) >> config.shiftStep
    val power_cal_q = RegNext(sq_q) >> config.shiftStep

    val power_cal_valid = RegNext(io.raw_data.valid) init(False)
    val slide_win_i = ShiftRegister(power_cal_i, config.slideWinSize, power_cal_valid)
    val slide_win_q = ShiftRegister(power_cal_q, config.slideWinSize, power_cal_valid)

    val power_result_valid = Reg(Bool()) init(False)
    when(power_cal_valid){
        power_val_i := (power_val_i - slide_win_i) + power_cal_i
        power_val_q := (power_val_q - slide_win_q) + power_cal_q
        power_result_valid := True
    }.otherwise{
        power_result_valid := False
        power_val_i := 0
        power_val_q := 0
    }
    io.power_result.payload := power_val
    io.power_result.valid := power_result_valid

}

