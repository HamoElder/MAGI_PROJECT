package utils.common.Sort

import spinal.lib._
import spinal.core._

case class BitonicMerge[T <: Data](dataType: HardType[T], dataSize: Int, useSigned: Boolean) extends Component {
    val dataWidth:Int = dataType.getBitsWidth
    def payloadDataType: Bits = Bits(dataWidth bits)
    def idxDataWidth: Int = log2Up(dataSize)
    def idxDataType: UInt = UInt(idxDataWidth bits)
    def stages: Int = log2Up(dataSize) - 1

    def resultDataType: IdxWithData = IdxWithData(payloadDataType, idxDataType, useSigned)
    val io = new Bundle{
        val raw_data = slave(Stream(dataType))
        val result_data = master(Stream(resultDataType))
    }
    noIoPrefix()



}

