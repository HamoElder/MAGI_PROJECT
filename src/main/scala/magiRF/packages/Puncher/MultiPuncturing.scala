package magiRF.packages.Puncher

import spinal.lib._
import spinal.core._
import utils.common.Mux.FlowMux

case class MultiPuncturingConfig(rawDataWidth: Int,
                                 codeRate: Int,
                                 mask: Seq[Seq[Int]]){
    def maskSize: Int = mask.length
    def rawDataType: Bits = Bits(rawDataWidth bits)
    def selDataType: UInt = UInt(log2Up(maskSize) bits)
    require(maskSize > 0, "The num of mask must larger than 0.")
    require((rawDataWidth % codeRate) == 0, "The data width must be an integral multiple of the code rate.")
}

case class MultiPuncturing(config: MultiPuncturingConfig) extends Component{

    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(config.rawDataType)))
        val punched_data = master(Flow(Fragment(config.rawDataType)))
        val sel = if(config.maskSize > 1) in(config.selDataType) else null
    }
    noIoPrefix()

    if(config.maskSize > 1){
        val raw_data_demux = StreamDemux(io.raw_data, io.sel, config.maskSize)
        var flow_seq = Seq[Flow[Fragment[Bits]]]()
        for(idx <- 0 until config.maskSize){
            val puncture_core = Puncturing(config.rawDataWidth, config.mask(idx))
            puncture_core.io.raw_data << raw_data_demux(idx)
            flow_seq = flow_seq :+ puncture_core.io.punched_data.resized
        }
        io.punched_data << FlowMux(io.sel, flow_seq)
    }
    else{
        val puncture_core = Puncturing(config.rawDataWidth, config.mask.head)
        puncture_core.io.raw_data << io.raw_data
        io.punched_data << puncture_core.io.punched_data.resized
    }

}

object MultiPuncturingBench {
    def main(args: Array[String]): Unit = {
        var mask_seq = Seq[Seq[Int]]()
        mask_seq = mask_seq :+ Seq(15, 7, 14, 6, 13, 5, 12, 4, 11, 3, 10, 2, 9, 1, 8, 0)   // 1/2
        mask_seq = mask_seq :+ Seq(15, 7, 14, 13, 5, 12, 11, 3, 10, 9, 1, 8)               // 2/3
        val multi_puncturing_config = MultiPuncturingConfig(16, 2, mask_seq)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/MultiPuncturing").generateSystemVerilog(new MultiPuncturing(multi_puncturing_config)).printPruned().printUnused()
    }
}