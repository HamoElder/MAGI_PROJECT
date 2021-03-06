package magiRF.modules.DSP.Correlator

import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle
import utils.common.ShiftReg.ShiftRegister

case class AutoCorrelatorConfig(
                                iqWidth        : Int,
                                delayT         : Int,
                                slideWinSize   : Int,
                                resultDataWidth: Int,
                                useValidClc    : Boolean = false
                                ){
    def correlatorConfig: CorrelatorConfig = CorrelatorConfig(iqWidth, slideWinSize, resultDataWidth, useValidClc)
    override def equals(that: Any): Boolean = this == that
}

case class AutoCorrelator(config: AutoCorrelatorConfig) extends Component {
    val io = new Bundle{
        val raw_data = slave(Flow(IQBundle(config.correlatorConfig.dataType)))
        val corr_result = master(Flow(IQBundle(config.correlatorConfig.resultDataType)))
    }
    noIoPrefix()

    val delay_shift_reg = if(config.useValidClc)
        ShiftRegister(io.raw_data, config.delayT, io.raw_data.valid, ~io.raw_data.valid, useInitZero = true)
    else
        ShiftRegister(io.raw_data, config.delayT, io.raw_data.valid, useInitZero = true)

    val corr_core = Correlator(config.correlatorConfig)
    corr_core.io.raw_data_0 << io.raw_data
    corr_core.io.raw_data_1 << delay_shift_reg

    io.corr_result << corr_core.io.corr_result
}

