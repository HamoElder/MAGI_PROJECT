package magiRF.packages.CFO

import magiRF.modules.DSP.CORDIC.{CordicConfig, CordicRotator}
import magiRF.modules.DSP.Correlator.{AutoCorrelator, AutoCorrelatorConfig}
import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle

import scala.util.Random

case class CFOEstimatorConfig(
                              iqWidth               : Int,
                              delayT                : Int,
                              calcWinSize           : Int,
                              iterations            : Int,
                              dataResolutionWidth   : Int = 0
                              ){
    def dataType: SInt = SInt(iqWidth bits)
    def phiDataType: SFix = SFix(iqWidth - 1 exp, -dataResolutionWidth exp)

    def linearRam(n: Int):Seq[Double] = for (i <- 0 until n) yield scala.math.pow(2.0, -i)
    def arctanRam(n: Int):Seq[Double] = linearRam(n).map(scala.math.atan)

    def autoCorrelatorConfig: AutoCorrelatorConfig = AutoCorrelatorConfig(iqWidth, delayT, calcWinSize, iqWidth + calcWinSize, useValidClc = true)
    def cordicConfig: CordicConfig = CordicConfig(iqWidth - 1 exp, -dataResolutionWidth exp, iterations = iterations, arctanRam, usePipeline = true)

    def cntLimit: Int = calcWinSize + 2 * iqWidth + 2
    def cntWidth: Int = log2Up(cntLimit + 1)
    def cntDataType: UInt = UInt(cntWidth bits)
    def scaleIspPow2: Boolean = isPow2(calcWinSize)
    def scaleShift: Int = log2Up(calcWinSize)
}


case class CFOEstimator(config : CFOEstimatorConfig) extends Component {
    val io = new Bundle{
        val rotated_data = slave(Flow(IQBundle(config.dataType)))
        val delta_phi = master(Flow(config.phiDataType))
    }
    noIoPrefix()

    val impulse_cnt = Reg(config.cntDataType) init(0)
    val auto_corr_core = AutoCorrelator(config.autoCorrelatorConfig)
    auto_corr_core.io.raw_data << io.rotated_data

    val cordic_core = CordicRotator(config.cordicConfig)
    cordic_core.io.rotate_mode := False
    cordic_core.io.x_u := 0

    cordic_core.io.raw_data.x.raw := auto_corr_core.io.corr_result.cha_i.round((config.autoCorrelatorConfig.resultDataWidth - config.phiDataType.getBitsWidth))
    cordic_core.io.raw_data.y.raw := auto_corr_core.io.corr_result.cha_q.round((config.autoCorrelatorConfig.resultDataWidth - config.phiDataType.getBitsWidth))
    cordic_core.io.raw_data.z.raw := 0
    cordic_core.io.raw_data.valid := auto_corr_core.io.corr_result.valid

    io.delta_phi.valid := cordic_core.io.result.valid && (impulse_cnt === (config.cntLimit - 1))
    if(config.scaleIspPow2){
        io.delta_phi.payload.raw := (cordic_core.io.result.z.raw |>> config.scaleShift).resized
    }else{
        val phi_scale: SFix = config.phiDataType
        phi_scale := 1.0 / config.calcWinSize
        val scale_val: SFix = cordic_core.io.result.z * phi_scale
        io.delta_phi.payload.raw := scale_val.raw.round(config.dataResolutionWidth).sat(config.iqWidth)
    }


    when(auto_corr_core.io.corr_result.valid){
        impulse_cnt := (impulse_cnt >= (config.cntLimit - 1))? U(0) | impulse_cnt + 1
    }.otherwise{
        impulse_cnt := 0
    }
}

object CFOEstimatorBench{
    def main(args: Array[String]):Unit={
        val cfo_estimator_config = CFOEstimatorConfig(16, 16, 16, 16, 32)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/CFOEstimator").generateSystemVerilog(new CFOEstimator(cfo_estimator_config)).printPruned()
    }
}
