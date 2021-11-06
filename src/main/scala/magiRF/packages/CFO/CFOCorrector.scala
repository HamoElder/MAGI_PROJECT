package magiRF.packages.CFO


import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle

case class CFOCorrectorConfig(
                                  iqWidth               : Int,
                                  delayT                : Int,
                                  slideWinSize          : Int,
                                  iterations            : Int,
                                  dataTypePeak          : ExpNumber = 10 exp,
                                  dataTypeResolution    : ExpNumber = -5 exp
                              ){
    def dataType: SInt = SInt(iqWidth bits)
    def phiDataType: SFix = SFix(dataTypePeak, dataTypeResolution)
    def linearRam(n : Int): Seq[Double] = for(i <- 0 until n) yield Math.pow(2.0, -i)
    def arctanRam(n : Int): Seq[Double] = linearRam(n).map(Math.atan)

    def phaseRotatorConfig: PhaseRotatorConfig = PhaseRotatorConfig(iqWidth, iterations, dataTypePeak, dataTypeResolution)
    def cfoEstimatorConfig: CFOEstimatorConfig = CFOEstimatorConfig(iqWidth, delayT, slideWinSize, iterations, dataTypePeak, dataTypeResolution)
}

case class CFOCorrector(config: CFOCorrectorConfig) extends Component(){
    val io = new Bundle{
        val raw_data: Flow[IQBundle[SInt]] = slave(Flow(IQBundle(config.dataType)))
        val rotated_data: Flow[IQBundle[SInt]] = master(Flow(IQBundle(config.dataType)))
        val enable = in(Bool())
    }
    noIoPrefix()

    val phase_rotator = PhaseRotator(config.phaseRotatorConfig)
    phase_rotator.io.raw_data << io.raw_data
    io.rotated_data << phase_rotator.io.rotated_data

    val cfo_estimator = CFOEstimator(config.cfoEstimatorConfig)
    cfo_estimator.io.rotated_data << phase_rotator.io.rotated_data.takeWhen(io.enable)
    phase_rotator.io.phiCorrect << cfo_estimator.io.delta_phi

}

object CFOCorrectorBench{
    def main(args: Array[String]): Unit = {
        val cfo_corrector_config = CFOCorrectorConfig(16, 16, 16, 16)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/CFOCorrector").generateSystemVerilog(new CFOCorrector(cfo_corrector_config)).printPruned()
    }
}


object CFOCorrectorSimApp extends App{
    import scala.util.Random
    import spinal.core.sim._
    import magiRF.top.IEEE802_11.IEEE802_11.{ltf, stf}
    val cfo_corrector_config = CFOCorrectorConfig(16, 16, 16, 16)
    SimConfig
        .withWave
        .allOptimisation
        .doSim(new CFOCorrector(cfo_corrector_config)){ dut =>
            dut.clockDomain.forkStimulus(5)
            dut.io.rotated_data.valid #= false
            dut.clockDomain.waitSampling(10)
            for(idx <- 0 until 1600){
                dut.io.rotated_data.valid #= true
                dut.io.rotated_data.cha_i #= (ltf(Random.nextInt().abs % ltf.length).re * 512).toInt
                dut.io.rotated_data.cha_q #= (ltf(Random.nextInt().abs % ltf.length).im * 512).toInt
                dut.clockDomain.waitSampling(1)
            }
            for(idx <- 0 until 1600){
                dut.io.rotated_data.valid #= true
                dut.io.rotated_data.cha_i #= (stf((idx) % 160).re * 512).toInt
                dut.io.rotated_data.cha_q #= (stf((idx) % 160).im * 512).toInt

                dut.clockDomain.waitSampling(1)
            }
            for(idx <- 0 until 1600){
                dut.io.rotated_data.valid #= true
                dut.io.rotated_data.cha_i #= (ltf(Random.nextInt().abs % ltf.length).re * 512).toInt
                dut.io.rotated_data.cha_q #= (ltf(Random.nextInt().abs % ltf.length).im * 512).toInt
                dut.clockDomain.waitSampling(1)
            }
            dut.io.rotated_data.valid #= false
            dut.clockDomain.waitSampling(100)
        }
}