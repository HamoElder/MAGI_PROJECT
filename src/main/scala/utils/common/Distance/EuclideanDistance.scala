package utils.common.Distance

import spinal.core._
import spinal.lib._

class EuclideanDistance[T <: Data](dataType: T) extends Component {
    def resultDataWidth = dataType.getBitsWidth * 2
    val io = new Bundle{
        val in_a = in(cloneOf(dataType))
        val in_b = in(cloneOf(dataType))
        val distance = out(SInt(resultDataWidth bits))
    }
    noIoPrefix()
    val seq_sub = (io.in_a.asBits.asSInt - io.in_b.asBits.asSInt)
    io.distance := (seq_sub * seq_sub)
}


object  EuclideanDistance{
    def apply[T <: Data](seq_a: T, seq_b: T): SInt ={
        val e = new EuclideanDistance(seq_a)
        e.io.in_a := seq_a
        e.io.in_b := seq_b
        e.io.distance
    }
}