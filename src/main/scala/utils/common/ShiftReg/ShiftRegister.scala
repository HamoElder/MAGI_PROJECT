package utils.common.ShiftReg

import spinal.core._
import spinal.lib._


case class ShiftRegister[T <: Data](dataType: T, depth: Int, initZero: Boolean, useClear: Boolean) extends Component{
    val io = new Bundle{
        val input = in(cloneOf(dataType))
        val output = out(cloneOf(dataType))
        val enable = in(Bool())
        val clc = if(useClear) in(Bool()) else null
    }
    noIoPrefix()
    val shift_reg: Vec[T] = if(initZero) Vec(RegInit(dataType.getZero), depth) else Vec(Reg(dataType), depth)
    if(useClear){
        when(io.clc){
            for(idx <- 0 until depth){
                shift_reg(idx) := dataType.getZero
            }
        }.otherwise{
            when(io.enable){
                shift_reg(0) := io.input
                for(idx <- 1 until depth){
                    shift_reg(idx) := shift_reg(idx - 1)
                }
            }
        }
    }
    else{
        when(io.enable){
            shift_reg(0) := io.input
            for(idx <- 1 until depth){
                shift_reg(idx) := shift_reg(idx - 1)
            }
        }
    }

    io.output := shift_reg(depth - 1)
}

//case class ShiftRegisterNE[T <: Data](dataType: T, depth: Int) extends Component{
//    val io = new Bundle{
//        val input = in(cloneOf(dataType))
//        val output = out(cloneOf(dataType))
//    }
//    noIoPrefix()
//    val shift_reg: Vec[T] = Vec(Reg(dataType) init(dataType.getZero), depth)
//    shift_reg(0) := io.input
//    for(idx <- 1 until depth){
//        shift_reg(idx) := shift_reg(idx - 1)
//    }
//    io.output := shift_reg(depth - 1)
//}

object ShiftRegister {
    def apply[T <: Data](data_in: T, depth: Int, enable: Bool = null, clear: Bool = null, useInitZero: Boolean = false): T = {
        //        Delay(data_in, depth, enable)
        val r = ShiftRegister(data_in, depth, useInitZero, clear != null)
        r.io.input := data_in
        if(enable == null){
            r.io.enable := True
        }else{
            r.io.enable := enable
        }
        if(clear != null){
            r.io.clc := clear
        }
        r.io.output
    }
}
