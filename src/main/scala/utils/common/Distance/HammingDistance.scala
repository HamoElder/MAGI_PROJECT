package utils.common.Distance

import spinal.core._
import spinal.lib._

class HammingDistance[T <: Data](dataType: T) extends Component {
    val dataWidth = log2Up(dataType.getBitsWidth) + 1
    val io = new Bundle{
        val in_a = in(cloneOf(dataType))
        val in_b = in(cloneOf(dataType))
        val distance = out(UInt(dataWidth bits))
    }
    noIoPrefix()
    val xorResult = io.in_a.asBits ^ io.in_b.asBits
    io.distance := calSum(xorResult, dataWidth)

    def calSum(data: Bits, n: Int): UInt = {
        if(n == 1){
            data(0).asUInt.resize(dataWidth)
        }
        else{
            (data(n - 1).asUInt + calSum(data, n - 1)).resize(dataWidth)
        }
    }
}

object HammingDistance{
    def apply[T <: Data](seq_a: T, seq_b: T):UInt = {
        val d = new HammingDistance(seq_a)
        d.io.in_a := seq_a
        d.io.in_b := seq_b
        d.io.distance
    }
}
