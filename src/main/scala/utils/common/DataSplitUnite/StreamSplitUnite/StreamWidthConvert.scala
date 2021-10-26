package utils.common.DataSplitUnite.StreamSplitUnite

import spinal.core._
import spinal.lib._

object StreamWidthConvert {
    def apply[T <: Data, U <: Data](StreamIn: Stream[T], StreamOut: Stream[U], useLittleEndian: Boolean = true): Unit ={
        val inDataWidth = StreamIn.payload.getBitsWidth
        val outDataWidth = StreamOut.payload.getBitsWidth
        if(inDataWidth >= outDataWidth){
            val s = StreamPayloadSplit(StreamIn.payload, StreamOut.payload, useLittleEndian)
            s.io.raw_data << StreamIn
            StreamOut << s.io.split_data
        }
        else{
            val s = StreamPayloadUnite(StreamIn.payload, StreamOut.payload, useLittleEndian)
            s.io.raw_data << StreamIn
            StreamOut << s.io.unite_data
        }
    }
}
