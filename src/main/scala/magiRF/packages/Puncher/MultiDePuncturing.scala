package magiRF.packages.Puncher

import spinal.lib._
import spinal.core._

case class MultiDePuncturingConfig(
                                      softWidth: Int,
                                      codeRate: Int,
                                      mask: Seq[Seq[Int]]
                                  ){
    require(softWidth > 0, "raw data width must larger than zero.")
    def maskSize: Int = mask.length

    def dePunchedDataWidth: Int = softWidth * codeRate
    def dePunchedDataType: Bits = Bits(dePunchedDataWidth bits)

    def rawDataWidth: Int = mask.map(_.map(i => i.toBinaryString.count(_=='1')).sum).max
    def rawDataType: Bits = Bits(rawDataWidth bits)
    def selDataType: UInt = UInt(log2Up(maskSize) bits)
}

case class MultiDePuncturing(config: MultiDePuncturingConfig) extends Component {
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(config.rawDataType)))
        val de_punched_data = master(Stream(Fragment(DePunchedBundle(config.dePunchedDataWidth, config.codeRate))))
        val sel = if(config.maskSize > 1) in(config.selDataType) else null
    }
    noIoPrefix()

    if(config.maskSize > 1){
        val raw_data_demux = StreamDemux(io.raw_data, io.sel, config.maskSize)
        var de_punched_data_seq = Seq[Stream[Fragment[DePunchedBundle]]]()
        for(idx <- 0 until config.maskSize){
            val de_puncture_core = DePuncturing(config.mask(idx).map(i => i.toBinaryString.count(_=='1')).sum, config.softWidth, config.codeRate, config.mask(idx))
            de_puncture_core.io.raw_data << raw_data_demux(idx)
            de_puncture_core.io.raw_data.fragment removeAssignments()
            de_puncture_core.io.raw_data.fragment := raw_data_demux(idx).fragment.resized

            de_punched_data_seq = de_punched_data_seq :+ de_puncture_core.io.de_punched_data
        }
        io.de_punched_data << StreamMux(io.sel, de_punched_data_seq)
    }
    else{
        val puncture_core = DePuncturing(config.rawDataWidth, config.softWidth, config.codeRate, config.mask.head)
        puncture_core.io.raw_data << io.raw_data
        io.de_punched_data << puncture_core.io.de_punched_data.resized
    }
}

object MultiDePuncturingBench {
    def main(args: Array[String]): Unit = {
        var mask_seq = Seq[Seq[Int]]()
        mask_seq = mask_seq :+ Seq(3, 3, 3, 3, 3, 3, 3, 3)    // 1/2
        mask_seq = mask_seq :+ Seq(3, 1, 3, 1, 3, 1, 3, 1)    // 2/3
        val multi_de_puncturing_config = MultiDePuncturingConfig(1, 2, mask_seq)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/MultiDePuncturing").generateSystemVerilog(new MultiDePuncturing(multi_de_puncturing_config)).printPruned().printUnused()
    }
}
