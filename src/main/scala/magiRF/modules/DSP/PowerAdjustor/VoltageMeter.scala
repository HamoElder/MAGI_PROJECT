package magiRF.modules.DSP.PowerAdjustor

import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle
import utils.common.ShiftReg.ShiftRegister

case class VoltageMeterConfig(
                             iqWidth      : Int,
                             slideWinSize : Int
                             ){
    require(isPow2(slideWinSize) & slideWinSize >= 0, "The slide window size must be a power of 2 and equal or bigger than 0")
    def dataType: SInt = SInt(iqWidth bits)
    def shiftStep: Int = log2Up(slideWinSize)
}


case class VoltageMeter(config: VoltageMeterConfig) extends Component {
    val io = new Bundle{
        val raw_data = slave(Flow(IQBundle(config.dataType)))
        val voltage_result = master(Flow(IQBundle(config.dataType)))
    }
    noIoPrefix()

    val voltage_val = Reg(IQBundle(config.dataType))
    val voltage_val_i = Reg(config.dataType) init(0)
    val voltage_val_q = Reg(config.dataType) init(0)

    voltage_val.cha_i := voltage_val_i
    voltage_val.cha_q := voltage_val_q

    val vo_i = io.raw_data.cha_i >> config.shiftStep
    val vo_q = io.raw_data.cha_q >> config.shiftStep

    val slide_win_i = ShiftRegister(vo_i, config.slideWinSize, io.raw_data.valid)
    val slide_win_q = ShiftRegister(vo_q, config.slideWinSize, io.raw_data.valid)

    val voltage_result_valid = Reg(Bool()) init(False)
    when(io.raw_data.valid) {
        voltage_val_i := (voltage_val_i - slide_win_i) + vo_i
        voltage_val_q := (voltage_val_q - slide_win_q) + vo_q
        voltage_result_valid := True
    }.otherwise{
        voltage_result_valid := False
    }

    io.voltage_result.valid := voltage_result_valid
    io.voltage_result.payload := voltage_val
}
