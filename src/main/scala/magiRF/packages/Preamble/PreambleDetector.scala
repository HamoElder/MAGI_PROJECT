package magiRF.packages.Preamble

import Misc.math.Complex
import magiRF.modules.DSP.Correlator.{AutoCorrelator, AutoCorrelatorConfig, CrossCorrelator, CrossCorrelatorConfig}
import magiRF.modules.DSP.PowerAdjustor.{PowerMeter, PowerMeterConfig, VoltageMeter, VoltageMeterConfig}
import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle


case class PreambleDetectorConfig(
                                     iqWidth            : Int,
                                     delayT             : Int,
                                     slideWinSize       : Int,
                                     refData            : Array[Complex] = null,
                                     usePowerMeter      : Boolean        = false
                                 ){
    def dataType: SInt = SInt(iqWidth bits)
    def gateThresholdWidth: Int = 2 * iqWidth
    def gateThresholdDataType: SInt = SInt(gateThresholdWidth bits)
    def corrResultDataType: SInt = gateThresholdDataType
    def useAutoCorr: Boolean = (refData == null)
    def autoCorrelatorConfig: AutoCorrelatorConfig = AutoCorrelatorConfig(iqWidth, delayT, slideWinSize, 2 * iqWidth)
    def crossCorrelatorConfig: CrossCorrelatorConfig = CrossCorrelatorConfig(iqWidth, refData, 2 * iqWidth)
    def powerMeterConfig: PowerMeterConfig = PowerMeterConfig(iqWidth, slideWinSize)
}


case class PreambleDetector(config: PreambleDetectorConfig) extends Component{
    val io = new Bundle{
        val gate_threshold = in(config.gateThresholdDataType)
        val pkg_detected = out(Bool())

        val raw_data = slave(Flow(IQBundle(config.dataType)))
        val raw_data_out = master(Flow(IQBundle(config.dataType)))
        val corr_result = if(config.useAutoCorr) master(Flow(IQBundle(config.corrResultDataType))) else null

    }
    noIoPrefix()

    val gate_pkg_det = Reg(Bool()) init(False)

    val prod_avg_mag = Reg(config.gateThresholdDataType) init(0)
    val power_pkg_det = if(config.usePowerMeter) Reg(Bool()) init(False) else null
    if(config.usePowerMeter){
        val power_meter = PowerMeter(config.powerMeterConfig)
        power_meter.io.raw_data << io.raw_data
        when(power_meter.io.power_result.valid){
            power_pkg_det := prod_avg_mag > ((power_meter.io.power_result.cha_i >> 1) + (power_meter.io.power_result.cha_i >> 2))
        }.otherwise{
            power_pkg_det := False
        }
    }

    if(config.useAutoCorr){
        val auto_corr_core = AutoCorrelator(config.autoCorrelatorConfig)
        auto_corr_core.io.raw_data << io.raw_data

        when(auto_corr_core.io.corr_result.valid){
            gate_pkg_det := (auto_corr_core.io.corr_result.cha_i + auto_corr_core.io.corr_result.cha_q) > io.gate_threshold
            prod_avg_mag := auto_corr_core.io.corr_result.cha_i
        }.otherwise{
            gate_pkg_det := False
        }
        io.raw_data_out << io.raw_data
        io.corr_result << auto_corr_core.io.corr_result
    }
    else{
        val cross_corr_core = CrossCorrelator(config.crossCorrelatorConfig)
        cross_corr_core.io.raw_data << io.raw_data

        when(cross_corr_core.io.corr_result.valid){
            gate_pkg_det := (cross_corr_core.io.corr_result.cha_i + cross_corr_core.io.corr_result.cha_q) > io.gate_threshold
        }.otherwise{
            gate_pkg_det := False
        }
        io.raw_data_out << io.raw_data
    }
    if(config.usePowerMeter){
        io.pkg_detected := (gate_pkg_det && power_pkg_det)
    }
    else{
        io.pkg_detected := gate_pkg_det
    }
}

object PreambleDetectorBench {
    def main(args: Array[String]): Unit = {
        val preamble_config = PreambleDetectorConfig(12, 16, 32)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/PreambleDetector/PreambleDetector_802_11_stf").generateSystemVerilog(new PreambleDetector(preamble_config)).printPruned()
    }
}

