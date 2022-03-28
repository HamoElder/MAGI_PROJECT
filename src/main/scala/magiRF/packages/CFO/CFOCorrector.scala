package magiRF.packages.CFO

import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle

case class CFOCorrectorConfig(
                                  iqWidth               : Int,
                                  delayT                : Int,
                                  calcWinSize           : Int,
                                  iterations            : Int,
                                  dataResolutionWidth   : Int = 0
                              ){
    def dataType: SInt = SInt(iqWidth bits)
    def phiDataType: SFix = SFix(iqWidth - 1 exp, -dataResolutionWidth exp)

    def phaseRotatorConfig: PhaseRotatorConfig = PhaseRotatorConfig(iqWidth, iterations, dataResolutionWidth)
    def cfoEstimatorConfig: CFOEstimatorConfig = CFOEstimatorConfig(iqWidth, delayT, calcWinSize, iterations, dataResolutionWidth)

    override def equals(that: Any): Boolean = this == that
}

case class CFOCorrector(config: CFOCorrectorConfig) extends Component(){
    val io = new Bundle{
        val ref_data = slave(Flow(IQBundle(config.dataType)))
        val raw_data: Flow[IQBundle[SInt]] = slave(Flow(IQBundle(config.dataType)))
        val rotated_data: Flow[IQBundle[SInt]] = master(Flow(IQBundle(config.dataType)))
        val enable = in(Bool())
    }
    noIoPrefix()

    val phase_rotator = PhaseRotator(config.phaseRotatorConfig)
    phase_rotator.io.raw_data << io.raw_data
    io.rotated_data.valid := phase_rotator.io.rotated_data.valid
    io.rotated_data.cha_i := phase_rotator.io.rotated_data.cha_i
    io.rotated_data.cha_q := phase_rotator.io.rotated_data.cha_q

    val cfo_estimator = CFOEstimator(config.cfoEstimatorConfig)
    cfo_estimator.io.rotated_data << phase_rotator.io.rotated_data.takeWhen(io.enable)
    phase_rotator.io.delta_phi << cfo_estimator.io.delta_phi

}

object CFOCorrectorBench{
    def main(args: Array[String]): Unit = {
        val cfo_corrector_config = CFOCorrectorConfig(16, 16, 32, 16, 16)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/CFOCorrector").generateSystemVerilog(new CFOCorrector(cfo_corrector_config)).printPruned()
    }
}
