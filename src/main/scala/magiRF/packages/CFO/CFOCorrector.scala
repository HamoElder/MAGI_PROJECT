package magiRF.packages.CFO


import Misc.math.Complex
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
        val ref_data = slave(Flow(IQBundle(config.dataType)))
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
            dut.io.raw_data.valid #= false
            dut.io.raw_data.valid #= false
            dut.io.enable #= true
            dut.clockDomain.waitSampling(10)
            for(idx <- 0 until 1600){
                dut.io.raw_data.valid #= true
                val raw_data = stf(idx % 160) * 2048
                val fs = Complex(Math.cos(idx.toDouble/3200.0* 2.0* Math.PI), Math.sin(idx.toDouble/3200.0* 2.0* Math.PI))
                val neg_fs = Complex(Math.cos(-idx.toDouble/3200.0* 2.0* Math.PI), Math.sin(-idx.toDouble/3200.0* 2.0* Math.PI))
                val cfo_data = raw_data * fs
                dut.io.raw_data.cha_i #= cfo_data.re.toInt
                dut.io.raw_data.cha_q #= cfo_data.im.toInt
                dut.io.ref_data.cha_i #= raw_data.re.toInt
                dut.io.ref_data.cha_q #= raw_data.im.toInt
                dut.io.ref_data.valid #= true
                dut.clockDomain.waitSampling(1)
            }
            dut.io.raw_data.valid #= false
            dut.clockDomain.waitSampling(100)
        }
}