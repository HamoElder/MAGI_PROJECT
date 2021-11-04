package magiRF.packages.Coder.Convolutional.Decoder

import spinal.core._
import spinal.lib._

case class ViterbiDecoderConfig(
                                   constraintLength: Int,
                                   tracebackWinSize: Int,
                                   softWidth       : Int        = 1,
                                   genPoly         : List[Int]  = null,
                                   useCombLogic    :Boolean     = false
                               ) {
    require(softWidth > 0, "raw data width must larger than zero.")
    require(tracebackWinSize > 5 * constraintLength, "trace back slide windows size must larger than 5 times constrain length.")

    def rawDataWidth: Int = codeRate * softWidth
    def rawDataType: Bits = Fragment(Bits(rawDataWidth bits))

    def codeRate: Int = genPoly.size

    def regNum: Int = constraintLength - 1
    def statesNum: Int = Math.pow(2, regNum).toInt
    def statesWidth: Int = log2Up(statesNum)
    def statesType: UInt = UInt(statesWidth bits)

    def survivalPathDataType: UInt = UInt(statesNum bits)

    def trellisWidth: Int = statesWidth * 2 + rawDataWidth + 1
    def trellisDataType: Bits = Bits(trellisWidth bits)
    def trellisSize: Int = 2 * statesNum

    def nodeWeightWidth: Int = 8
    def nodeWeightType: UInt = UInt(nodeWeightWidth bits)

    def distWidth: Int = log2Up(rawDataWidth + 1)
    def distType: UInt = UInt(distWidth bits)

    def combLogicDelay: Int = if(useCombLogic) 0 else constraintLength
    def delayCntType: UInt = if(useCombLogic) UInt(1 bits ) else UInt(log2Up(combLogicDelay + 1) bits)
    def TBMemSize: Int = 2 * tracebackWinSize

    def TBMemCntWidth: Int = log2Up(TBMemSize)
    def TBMemCntType: UInt = UInt(TBMemCntWidth bits)

//    def lifoDepth: Int = TBMemSize + tracebackWinSize + 16
    def lifoDepth: Int = 512
    def lifoCntWidth: Int = log2Up(lifoDepth)
    def lifoCntType: UInt = UInt(lifoCntWidth bits)
    def invertDataType: Bits = Bits(2 bits)

    def decodedDataType: Bits = Bits(1 bits)
}

case class ViterbiDecoder(config: ViterbiDecoderConfig) extends Component {
    val io = new Bundle {
        val raw_data = slave(Stream(Fragment(config.rawDataType)))
        val decoded_data = master(Flow(Fragment(config.decodedDataType)))
    }
    noIoPrefix()
    val pmu_core = PathMetric(config)
    pmu_core.io.raw_data.fragment := io.raw_data.fragment
    pmu_core.io.raw_data.last := io.raw_data.last
    pmu_core.io.raw_data.valid := io.raw_data.fire

    val tbu_core = Traceback(config)
    tbu_core.io.min_idx := pmu_core.io.min_idx
    tbu_core.io.s_path << pmu_core.io.s_path
    io.raw_data.ready := (!tbu_core.io.halt) && pmu_core.io.raw_data.ready
    pmu_core.io.tbu_finished := tbu_core.io.finished

    val lifo_core = ReorderLifo(config)
    lifo_core.io.inverted_order << tbu_core.io.tb_node
    io.decoded_data << lifo_core.io.decoded_data
}

object ViterbiDecoderBench {
    def main(args: Array[String]): Unit = {
//        val viterbi_decoder = ViterbiDecoderConfig(1, 3, 84, 3, List(7, 5))
        val viterbi_decoder = ViterbiDecoderConfig(7, 84, 3, List(91, 121))
        ViterbiGen.TrellisGen(viterbi_decoder)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/ViterbiDecoder").generateSystemVerilog(new ViterbiDecoder(viterbi_decoder)).printPruned()
    }
}
