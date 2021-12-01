package utils.common.DataSplitUnite.DataWidthConvert

import spinal.core._
import spinal.lib._

case class StreamFragmentWidthConvert[T <: Data, T2 <: Data](inputPayloadType: HardType[T], outputPayloadType : HardType[T2],
                                                             endianness: Endianness = LITTLE, padding : Boolean = false, fifoDepth: Int = 0)
    extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(inputPayloadType)))
        val adapted_data = master(Stream(Fragment(outputPayloadType)))
    }
    noIoPrefix()

    io.adapted_data << StreamFragmentWidthAdapter.make(io.raw_data.queue(fifoDepth), outputPayloadType, endianness, padding)

}

object StreamFragmentWidthConvertBench {
    def main(args: Array[String]): Unit = {
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/DataLastWidthConverter").generateSystemVerilog(new StreamFragmentWidthConvert(Bits(1 bits), Bits(8 bits), fifoDepth = 256)).printPruned()
    }
}
