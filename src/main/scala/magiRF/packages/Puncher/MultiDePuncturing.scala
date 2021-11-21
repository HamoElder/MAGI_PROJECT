package magiRF.packages.Puncher

import spinal.lib._
import spinal.core._

//case class MultiDePuncturingConfig(
//                                      rawDataWidth: Int,
//                                      softWidth: Int = 1,
//                                      mask: Seq[Seq[Int]]
//                                  ){
//    require(softWidth > 0, "raw data width must larger than zero.")
//    def maskSize: Int = mask.length
//    def dePunchedDataWidth: Int = mask.map(_.max).max
//    println(dePunchedDataWidth)
//    def rawDataType: Bits = Bits(rawDataWidth bits)
//    def dePunchedDataType: Bits = Bits(dePunchedDataWidth bits)
//    def selDataType: UInt = UInt(log2Up(maskSize) bits)
//}
//
//case class MultiDePuncturing(config: MultiDePuncturingConfig) extends Component {
//    val io = new Bundle{
//        val dummy_bits = in(Bits(config.softWidth bits))
//        val raw_data = slave(Stream(Fragment(config.rawDataType)))
//        val de_punched_data = master(Stream(Fragment(config.dePunchedDataType)))
//        val sel = if(config.maskSize > 1) in(config.selDataType) else null
//    }
//    noIoPrefix()
//
//    if(config.maskSize > 1){
//        val raw_data_demux = StreamDemux(io.raw_data, io.sel, config.maskSize)
//        var de_punched_data_seq = Seq[Stream[Fragment[Bits]]]()
//        for(idx <- 0 until config.maskSize){
//            val puncture_core = DePuncturing(config.rawDataWidth, config.softWidth, config.mask(idx))
//            puncture_core.io.raw_data << raw_data_demux(idx)
//            puncture_core.io.dummy_bits := io.dummy_bits
//            de_punched_data_seq = de_punched_data_seq :+ puncture_core.io.de_punched_data.resized
//        }
//        io.de_punched_data << StreamMux(io.sel, de_punched_data_seq)
//    }
//    else{
//        val puncture_core = DePuncturing(config.rawDataWidth, config.softWidth, config.mask.head)
//        puncture_core.io.raw_data << io.raw_data
//        puncture_core.io.dummy_bits := io.dummy_bits
//        io.de_punched_data << puncture_core.io.de_punched_data.resized
//    }
//}
//
//object MultiDePuncturingBench {
//    def main(args: Array[String]): Unit = {
//        var mask_seq = Seq[Seq[Int]]()
//        mask_seq = mask_seq :+ Seq(0, 8, 1, 9, 2, 10, 3, 11, 4, 12, 5, 13, 6, 14, 7, 15)    // 1/2
//        mask_seq = mask_seq :+ Seq(0, 8, 1, -1, 2, 10, 3, -1, 4, 12, 5, -1, 6, 14, 7, -1)   // 2/3
//        val multi_de_puncturing_config = MultiDePuncturingConfig(16, 1, mask_seq)
//        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
//            targetDirectory = "rtl/DePuncturing").generateSystemVerilog(new MultiDePuncturing(multi_de_puncturing_config)).printPruned().printUnused()
//    }
//}
