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
                                     plateauWinWidth    : Int,
                                     refData            : Array[Complex] = null,
                                     usePowerMeter      : Boolean        = false
                                 ){
    def dataType: SInt = SInt(iqWidth bits)
    def gateThresholdWidth: Int = 3 * iqWidth
    def gateThresholdDataType: UInt = UInt(gateThresholdWidth bits)
    def corrResultDataType: SInt = SInt(gateThresholdWidth bits)
    def plateauDataType: UInt = UInt(plateauWinWidth bits)
    def useAutoCorr: Boolean = (refData == null)
    def autoCorrelatorConfig: AutoCorrelatorConfig = AutoCorrelatorConfig(iqWidth, delayT, slideWinSize, gateThresholdWidth)
    def crossCorrelatorConfig: CrossCorrelatorConfig = CrossCorrelatorConfig(iqWidth, refData, gateThresholdWidth)
    def powerMeterConfig: PowerMeterConfig = PowerMeterConfig(iqWidth, slideWinSize)
}


case class PreambleDetector(config: PreambleDetectorConfig) extends Component{
    val io = new Bundle{
        val gate_threshold = if(config.usePowerMeter) null else in(config.gateThresholdDataType)
        val min_plateau = in(config.plateauDataType)
        val pkg_detected = out(Bool())

        val raw_data = slave(Flow(IQBundle(config.dataType)))
        val raw_data_out = master(Flow(IQBundle(config.dataType)))
        val corr_result = if(config.useAutoCorr) master(Flow(IQBundle(config.corrResultDataType))) else null

    }
    noIoPrefix()

    val gate_pkg_det = Reg(Bool()) init(False)

    val prod_avg_mag = Reg(config.gateThresholdDataType) init(0)

    val plateau_cnt = Reg(config.plateauDataType) init(0)

    if(config.usePowerMeter){
        val power_meter = PowerMeter(config.powerMeterConfig)
        power_meter.io.raw_data << io.raw_data
        val power_meter_result = RegNext(power_meter.io.power_result.cha_i.abs + power_meter.io.power_result.cha_q.abs) init(0)
        val power_meter_valid = RegNext(power_meter.io.power_result.valid) init(False)
        val power_indicator = (power_meter_result << 3) + (power_meter_result << 2)
        when(power_meter_valid){
            gate_pkg_det := prod_avg_mag > power_indicator
        }.otherwise{
            gate_pkg_det := False
        }
    }else{
        gate_pkg_det := prod_avg_mag > io.gate_threshold
    }

    when(gate_pkg_det){
        when(plateau_cnt < config.plateauDataType.maxValue){
            plateau_cnt := (plateau_cnt + 1)
        }
    }.otherwise{
        plateau_cnt := 0
    }

    if(config.useAutoCorr){
        val auto_corr_core = AutoCorrelator(config.autoCorrelatorConfig)
        auto_corr_core.io.raw_data << io.raw_data

        when(auto_corr_core.io.corr_result.valid){
            prod_avg_mag := (auto_corr_core.io.corr_result.cha_i.abs + auto_corr_core.io.corr_result.cha_q.abs)
        }.otherwise{
            prod_avg_mag := 0
        }
        io.raw_data_out << io.raw_data.stage()
        io.corr_result << auto_corr_core.io.corr_result
    }
    else{
        val cross_corr_core = CrossCorrelator(config.crossCorrelatorConfig)
        cross_corr_core.io.raw_data << io.raw_data

        when(cross_corr_core.io.corr_result.valid){
            prod_avg_mag := (cross_corr_core.io.corr_result.cha_i.abs + cross_corr_core.io.corr_result.cha_q.abs)
        }.otherwise{
            prod_avg_mag:= 0
        }
        io.raw_data_out << io.raw_data
    }
    io.pkg_detected := (plateau_cnt >= io.min_plateau) && gate_pkg_det
}

object PreambleDetectorBench {
    def main(args: Array[String]): Unit = {
        val preamble_config = PreambleDetectorConfig(12, 16, 32, 8)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/PreambleDetector/PreambleDetector_802_11_stf").generateSystemVerilog(new PreambleDetector(preamble_config)).printPruned()
    }
}

