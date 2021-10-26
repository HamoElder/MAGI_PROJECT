package utils.common.ValOP

import magiRF.modules.Filters.filterBundle
import spinal.core._
import spinal.lib._

case class MinVal[T <: Data](dataType: T, vecSize: Int, useSign: Boolean, useCombLogic: Boolean, useIndex: Boolean) extends Component {
    def dataWidth = dataType.getBitsWidth
    def idxWidth = log2Up(vecSize)
    def idxType = UInt(idxWidth bits)
    val io = new Bundle{
        val data = in(Vec(cloneOf(dataType), size = vecSize))
        val min_val = out(cloneOf(dataType))
        val min_idx = if(useIndex) out(idxType) else null
    }
    noIoPrefix()

    if(useIndex){
        val idxRom = Vec(idxType, vecSize)
        for(idx <- 0 until vecSize){
            idxRom(idx) := idx
        }
        val idx_val = minCal(io.data, idxRom, vecSize)
        io.min_idx := idx_val._1
        io.min_val := idx_val._2
    }else{
        io.min_val := minCal(io.data, vecSize)
    }

    def minCal(data: Vec[T], size: Int): T = {
        val next_size = size >> 1
        val min_buf = if(useCombLogic) Vec(cloneOf(dataType), next_size) else Vec(Reg(dataType), next_size)
        for(idx <- 0 until size by 2){
            if(useSign) {
                min_buf(idx >> 1) := (data(idx).asBits.asSInt <= data(idx + 1).asBits.asSInt) ? data(idx) | data(idx + 1)
            } else {
                min_buf(idx >> 1) := (data(idx).asBits.asUInt <= data(idx + 1).asBits.asUInt) ? data(idx) | data(idx + 1)
            }
        }
        if(next_size == 1){
            min_buf(0)
        }else{
            minCal(min_buf, next_size)
        }
    }

    def minCal(data: Vec[T], data_idx: Vec[UInt], size: Int): (UInt, T) = {
        val next_size = size >> 1
        val min_buf = if(useCombLogic) Vec(cloneOf(dataType), next_size) else Vec(Reg(dataType), next_size)
        val idx_buf = if(useCombLogic) Vec(idxType, next_size) else Vec(Reg(idxType), next_size)
        for(idx <- 0 until size by 2){
            if(useSign) {
                min_buf(idx >> 1) := (data(idx).asBits.asSInt <= data(idx + 1).asBits.asSInt) ? data(idx) | data(idx + 1)
                idx_buf(idx >> 1) := (data(idx).asBits.asSInt <= data(idx + 1).asBits.asSInt) ? data_idx(idx) | data_idx(idx + 1)
            } else {
                min_buf(idx >> 1) := (data(idx).asBits.asUInt <= data(idx + 1).asBits.asUInt) ? data(idx) | data(idx + 1)
                idx_buf(idx >> 1) := (data(idx).asBits.asUInt <= data(idx + 1).asBits.asUInt) ? data_idx(idx) | data_idx(idx + 1)
            }
        }
        if(next_size == 1){
            (idx_buf(0), min_buf(0))
        }else{
            minCal(min_buf, idx_buf, next_size)
        }
    }
}

object MinVal{

    def apply[T <: Data](data: Vec[T], useSign: Boolean, useIndex:Boolean, useCombLogic: Boolean = false) : (UInt, T) = {
        val m = new MinVal(data(0), data.size, useSign, useCombLogic, useIndex)
        (m.io.data, data).zipped.foreach(_ := _)
        (m.io.min_idx, m.io.min_val)
    }
}
