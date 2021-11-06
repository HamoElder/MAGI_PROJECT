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
                              slideWinSize          : Int,
                              iterations            : Int,
                              dataTypePeak          : ExpNumber = 10 exp,
                              dataTypeResolution    : ExpNumber = -5 exp
                              ){
    def dataType: SInt = SInt(iqWidth bits)
    def phiDataType: SFix = SFix(dataTypePeak, dataTypeResolution)
    def shearWidth: Int = iqWidth

    def linearRam(n: Int):Seq[Double] = for (i <- 0 until n) yield Math.pow(2.0, -i)
    def arctanRam(n: Int):Seq[Double] = linearRam(n).map(Math.atan)

//    def cntLimit: Int = delayT + iterations
//    def cntWidth: Int = log2Up(cntLimit + 1)
//    def cntDataType: UInt = UInt(cntWidth bits)
    def autoCorrelatorConfig: AutoCorrelatorConfig = AutoCorrelatorConfig(iqWidth, delayT, slideWinSize)
    def cordicConfig: CordicConfig = CordicConfig(dataTypePeak, dataTypeResolution, iterations = iterations, arctanRam, usePipeline = true)
}


case class CFOEstimator(config : CFOEstimatorConfig) extends Component {
    val io = new Bundle{
        val rotated_data = slave(Flow(IQBundle(config.dataType)))
        val delta_phi = master(Flow(config.dataType))
    }
    noIoPrefix()

    val scale: SFix = config.phiDataType
    scale := (1.0 /  config.slideWinSize)
    val auto_corr_core = AutoCorrelator(config.autoCorrelatorConfig)
    auto_corr_core.io.raw_data << io.rotated_data

    val cordic_core = CordicRotator(config.cordicConfig)
    cordic_core.io.rotate_mode := False
    cordic_core.io.x_u := 0

    cordic_core.io.raw_data.x.raw := auto_corr_core.io.corr_result.cha_i.round(config.shearWidth)
    cordic_core.io.raw_data.y.raw := -auto_corr_core.io.corr_result.cha_q.round(config.shearWidth)
    cordic_core.io.raw_data.z.raw := 0
    cordic_core.io.raw_data.valid := auto_corr_core.io.corr_result.valid
    cordic_core.io.result.ready := True
    io.delta_phi.valid := cordic_core.io.result.valid
    io.delta_phi.payload := (cordic_core.io.result.z * scale).raw.round(config.shearWidth)

}

object CFOEstimatorBench{
    def main(args: Array[String]):Unit={
        val cfo_estimator_config = CFOEstimatorConfig(16, 16, 16, 16)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/CFOEstimator").generateSystemVerilog(new CFOEstimator(cfo_estimator_config)).printPruned()
    }
}
