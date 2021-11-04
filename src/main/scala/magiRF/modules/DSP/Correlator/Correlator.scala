package magiRF.modules.DSP.Correlator

import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle
import utils.common.ShiftReg.ShiftRegister

case class CorrelatorConfig(
                                   iqWidth       : Int,
                                   slideWinSize  : Int
                               ){
    def dataType: SInt = SInt(iqWidth bits)
    def intermediateDataWidth: Int = 2 * iqWidth
    def resultDataType: SInt = SInt(intermediateDataWidth bits)
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

    val slide_win_i = ShiftRegister(mul_i, config.slideWinSize, mul_data_valid)
    val slide_win_q = ShiftRegister(mul_q, config.slideWinSize, mul_data_valid)

    val corr_result_valid = Reg(Bool()) init(False)
    when(mul_data_valid){
        corr_result_valid := True
        corr_val_i := (corr_val_i - slide_win_i) + mul_i
        corr_val_q := (corr_val_q - slide_win_q) + mul_q
    }.otherwise{
        corr_result_valid := False
    }
    io.corr_result.cha_i := corr_val_i
    io.corr_result.cha_q := corr_val_q
    io.corr_result.valid := corr_result_valid
}


object CorrelatorSimApp extends App{
    import spinal.core.sim._

    val corrlator_config = CorrelatorConfig(16, 4)
    SimConfig.withWave.doSim(new Correlator(corrlator_config)){ dut =>
        dut.clockDomain.forkStimulus(5)
        dut.io.raw_data_0.valid #= false
        dut.io.raw_data_1.valid #= false
        dut.clockDomain.waitSampling(10)
        for(idx <- 1 until 32767){
            dut.io.raw_data_0.valid #= true
            dut.io.raw_data_1.valid #= true

            dut.io.raw_data_0.cha_i #= idx
            dut.io.raw_data_0.cha_q #= idx

            dut.io.raw_data_1.cha_i #= idx
            dut.io.raw_data_1.cha_q #= idx
            dut.clockDomain.waitSampling(1)
        }
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data_0.valid #= false
        dut.io.raw_data_1.valid #= false
        dut.clockDomain.waitSampling(1000)
    }
}