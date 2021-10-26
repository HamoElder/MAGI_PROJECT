package utils.common.ValOP

import spinal.core._
import spinal.lib._


case class MeanVal[T <: Data](dataType: T, vecSize: Int, useSign: Boolean, useCombLogic: Boolean) extends Component {
//    val dataSize = if((size & 1) == 1) (size + 1) >> 1 else size >> 1
    val dataWidth = dataType.getBitsWidth
    // TODO: Add limit.
    val io = new Bundle{
        val data = in(Vec(cloneOf(dataType), size = vecSize))
        val mean_val = out(cloneOf(dataType))
    }
    noIoPrefix()

    io.mean_val := meanCal(io.data, vecSize)

    def meanCal(data: Vec[T], size: Int): T ={
        val next_size = size >> 1
        val mean_buf = if(useCombLogic)Vec(cloneOf(dataType), next_size) else Vec(Reg(dataType), next_size)
        for(idx <- 0 until size by 2){
            if(useSign) {
                mean_buf(idx >> 1) := ((data(idx).asBits.asSInt + data(idx + 1).asBits.asSInt) >> U(1)).as(dataType)
            } else {
                mean_buf(idx >> 1) := ((data(idx).asBits.asUInt + data(idx + 1).asBits.asUInt) >> U(1)).as(dataType)
            }
        }
        if(next_size == 1){
            mean_buf(0)
        }else{
            meanCal(mean_buf, next_size)
        }
    }

}


object MeanVal{
    def apply[T <: Data](data: Vec[T], useSign: Boolean, useCombLogic: Boolean = false) : T = {
        val m = new MeanVal(data(0), data.size, useSign, useCombLogic)
        (m.io.data, data).zipped.foreach(_ := _)
        m.io.mean_val
    }
}