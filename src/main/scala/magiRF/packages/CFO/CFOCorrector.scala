package magiRF.packages.CFO

import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle
import utils.common.ShiftReg.ShiftRegister

case class CFOCorrectorConfig(
                                  iqWidth               : Int,
                                  delayT                : Int,
                                  calcWinSize           : Int,
                                  iterations            : Int,
                                  meanSize              : Int,
                                  dataResolutionWidth   : Int = 0
                              ){
    require(isPow2(meanSize), "Mean Size must be the power of 2.")
    def dataType: SInt = SInt(iqWidth bits)
    def phiDataType: SFix = SFix(iqWidth - 1 exp, -dataResolutionWidth exp)

    def phaseRotatorConfig: PhaseRotatorConfig = PhaseRotatorConfig(iqWidth, iterations, dataResolutionWidth)
    def cfoEstimatorConfig: CFOEstimatorConfig = CFOEstimatorConfig(iqWidth, delayT, calcWinSize, iterations, dataResolutionWidth)

    def meanCntWidth: Int = log2Up(meanSize)
    def meanCntType: UInt = UInt(meanCntWidth bits)
    def scaleShift: Int = log2Up(meanSize)
    override def equals(that: Any): Boolean = this == that
}

case class CFOCorrector(config: CFOCorrectorConfig) extends Component(){
    val io = new Bundle{
        val raw_data: Flow[IQBundle[SInt]] = slave(Flow(IQBundle(config.dataType)))
        val rotated_data: Flow[IQBundle[SInt]] = master(Flow(IQBundle(config.dataType)))
        val enable = in(Bool())
        val phi_correct_valid = out(Bool())
    }
    noIoPrefix()

    val mean_cnt = Reg(config.meanCntType) init(0)
    val delta_phi_mean = Reg(config.phiDataType.raw) init(0)
    val delta_phi_valid = Reg(Bool()) init(False)
    val cfo_estimator = CFOEstimator(config.cfoEstimatorConfig)
    cfo_estimator.io.rotated_data << io.raw_data


    when(delta_phi_valid || (~io.enable)){
        mean_cnt := 0
        delta_phi_valid := False
        delta_phi_mean := 0
    }.elsewhen(cfo_estimator.io.delta_phi.valid){
        mean_cnt := mean_cnt + 1
        delta_phi_mean := delta_phi_mean + (cfo_estimator.io.delta_phi.payload.raw >> config.scaleShift).resized
        delta_phi_valid := (mean_cnt === config.meanSize - 1)
    }

    val phase_rotator = PhaseRotator(config.phaseRotatorConfig)
    phase_rotator.io.raw_data << io.raw_data
    phase_rotator.io.delta_phi.valid := delta_phi_valid
    phase_rotator.io.delta_phi.payload.raw := -delta_phi_mean
    io.rotated_data.valid := phase_rotator.io.rotated_data.valid
    io.rotated_data.cha_i := phase_rotator.io.rotated_data.cha_i
    io.rotated_data.cha_q := phase_rotator.io.rotated_data.cha_q
    io.phi_correct_valid := RegNext(delta_phi_valid) init(False)
}

object CFOCorrectorBench{
    def main(args: Array[String]): Unit = {
        val cfo_corrector_config = CFOCorrectorConfig(16, 16, 32, 16, 16)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/CFOCorrector").generateSystemVerilog(new CFOCorrector(cfo_corrector_config)).printPruned()
    }
}
