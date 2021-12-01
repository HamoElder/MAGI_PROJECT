package utils.common.DataSplitUnite.DataWidthConvert

import spinal.core._
import spinal.lib._

case class StreamWidthConvert[T <: Data, T2 <: Data](inputPayloadType: HardType[T], outputPayloadType : HardType[T2],
                                                     endianness: Endianness = LITTLE, padding : Boolean = false) extends Component {
    val io = new Bundle{
        val raw_data = slave(Stream(inputPayloadType))
        val adapted_data = master(Stream(outputPayloadType))
    }
    noIoPrefix()

    io.adapted_data << StreamWidthAdapter.make(io.raw_data, outputPayloadType, endianness, padding)
}

object StreamWidthConvertBench{
    def main(args: Array[String]): Unit ={
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/DataWidthConverter").generateSystemVerilog(new StreamWidthConvert(Bits(1 bits), Bits(8 bits))).printPruned()
    }
}
