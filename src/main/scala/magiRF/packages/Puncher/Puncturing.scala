package magiRF.packages.Puncher

import spinal.lib._
import spinal.core._

case class Puncturing(rawDataWidth: Int, mask: Seq[Int]) extends Component {
    def rawDataType: Bits = Bits(rawDataWidth bits)
    def punchedDataWidth: Int = mask.length
    def punchedDataType: Bits = Bits(punchedDataWidth bits)
    require((mask.length <= rawDataWidth), "The size of mask must less or equal than the data width")

    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(rawDataType)))
        val punched_data = master(Flow(Fragment(punchedDataType)))
    }
    noIoPrefix()

    io.raw_data.ready := True
    val raw_data_fragment = RegNext(io.raw_data.fragment)
    val raw_data_valid = RegNext(io.raw_data.valid) init(False)
    val raw_data_last = RegNext(io.raw_data.last) init(False)

    io.punched_data.valid := raw_data_valid
    io.punched_data.last := raw_data_last
    io.punched_data.fragment := maskGen(raw_data_fragment, mask, 0)

    def maskGen(raw_data: Bits, mask: Seq[Int], cursor: Int): Bits ={
        if(cursor == (mask.length - 1)){
            raw_data(mask(cursor)).asBits
        }else{
            maskGen(raw_data, mask, cursor + 1) ## raw_data(mask(cursor))
        }
    }
}


object PuncturingBench {
    def main(args: Array[String]): Unit = {
        val mask_seq_1_2 = Seq(15, 7, 14, 6, 13, 5, 12, 4, 11, 3, 10, 2, 9, 1, 8, 0)   // 1/2
        val mask_seq_2_3 = Seq(15, 7, 14, 13, 5, 12, 11, 3, 10, 9, 1, 8)               // 2/3
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/Puncturing").generateSystemVerilog(new Puncturing(16, mask_seq_2_3))
            .printPruned().printUnused()
    }
}
