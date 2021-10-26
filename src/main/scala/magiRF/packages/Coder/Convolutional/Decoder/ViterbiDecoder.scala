package magiRF.packages.Coder.Convolutional.Decoder

import spinal.core._
import spinal.lib._

case class ViterbiDecoderConfig(
                                   decodedDataWidth: Int,
                                   constraintLength: Int,
                                   tracebackWinSize: Int,
                                   softWidth       : Int           = 1,
                                   genPoly         : List[Int]       = null,
                                   useCombLogic    :Boolean     = true
                               ) {
    require(softWidth > 0, "raw data width must larger than zero.")
    require(tracebackWinSize > 5 * constraintLength, "trace back slide windows size must larger than 5 times constrain length.")

    def rawDataWidth: Int = codeRate * softWidth
    def rawDataType: Bits = Fragment(Bits(rawDataWidth bits))

    def codeRate: Int = genPoly.size

    def regNum: Int = constraintLength - 1
    def statesNum: Int = Math.pow(2, regNum).toInt
    def statesWidth: Int = log2Up(statesNum)

    def minIndexDataType: UInt = UInt(statesWidth bits)
    def survivalPathDataType: UInt = UInt(statesNum bits)

    def trellisWidth: Int = statesWidth * 2 + rawDataWidth + 1
    def trellisDataType: Bits = Bits(trellisWidth bits)
    def trellisSize: Int = 2 * statesNum

    def nodeWeightWidth: Int = 16
    def nodeWeightType: UInt = UInt(nodeWeightWidth bits)

    def distWidth: Int = log2Up(rawDataWidth + 1)
    def distType: UInt = UInt(distWidth bits)

    def tracebackLength: Int = 3 * tracebackWinSize
    def tracebackSize: Int = log2Up(tracebackLength)
    def lifoDepth: Int = tracebackLength - tracebackWinSize
    def combLogicDelay: Int = if(useCombLogic) 0 else regNum
    require((lifoDepth % decodedDataWidth) == 0, "decoded data Full")
    def decodedDataType: Bits = Bits(decodedDataWidth bits)
}

case class ViterbiDecoder(config: ViterbiDecoderConfig) extends Component {
    val io = new Bundle {
        val raw_data = slave(Stream(config.rawDataType))
        val clc = in(Bool())
//        val decoded_data = master(Flow(config.decodedDataType))
    }
    noIoPrefix()
    val pmu_core = PathMetric(config)
    pmu_core.io.raw_data << io.raw_data.asFlow
    pmu_core.io.clc := io.clc
    io.raw_data.ready := True
    StreamFifo
    val tbu_core = Traceback(config)
    tbu_core.io.min_idx := pmu_core.io.min_idx
    tbu_core.io.s_path << pmu_core.io.s_path
    tbu_core.io.clc := io.clc

}

object ViterbiDecoderBench {
    def main(args: Array[String]): Unit = {
        val viterbi_decoder = ViterbiDecoderConfig(1, 3, 84, 3, List(7, 5))
//        val viterbi_decoder = ViterbiDecoderConfig(1, 7, 84, 3, List(91, 121))
        ViterbiGen.TrellisGen(viterbi_decoder)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/ViterbiDecoder").generateSystemVerilog(new ViterbiDecoder(viterbi_decoder)).printPruned()
    }
}

//Sim

object ViterbiDecoderSimApp extends App{
    import spinal.core.sim._
    import utils.bus.AxiLite.sim.AxiLite4Driver
    import spinal.lib.sim.{StreamDriver, StreamMonitor, StreamReadyRandomizer}
    import scala.util.Random

    import magiRF.top.OAM_BETA.OAM_CDMA
    val viterbi_decoder = ViterbiDecoderConfig(1, 3, 84, 1, List(7, 5))
    SimConfig.withWave.doSim(new ViterbiDecoder(viterbi_decoder)){ dut =>
        dut.clockDomain.forkStimulus(5)
        dut.io.raw_data.valid #= false
        dut.io.clc #= true
        dut.clockDomain.waitSampling(10)
        dut.io.clc #= false
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.valid #= true
        dut.io.raw_data.payload #= 3
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.payload #= 0
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.payload #= 3
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.payload #= 3
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.payload #= 1
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.payload #= 1
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.payload #= 3
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.valid #= false
        dut.clockDomain.waitSampling(100)
    }
}