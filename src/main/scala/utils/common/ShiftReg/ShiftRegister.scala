package utils.common.ShiftReg

import spinal.core._
import spinal.lib._


case class ShiftRegisterE[T <: Data](dataType: T, depth: Int) extends Component{
    val io = new Bundle{
        val input = in(cloneOf(dataType))
        val output = out(cloneOf(dataType))
        val enable = in(Bool())
    }
    noIoPrefix()
    val shift_reg: Vec[T] = Vec(Reg(dataType), depth)
    when(io.enable){
        shift_reg(0) := io.input
        for(idx <- 1 until depth){
            shift_reg(idx) := shift_reg(idx - 1)
        }
    }
    io.output := shift_reg(depth - 1)
}

case class ShiftRegisterNE[T <: Data](dataType: T, depth: Int) extends Component{
    val io = new Bundle{
        val input = in(cloneOf(dataType))
        val output = out(cloneOf(dataType))
    }
    noIoPrefix()
    val shift_reg: Vec[T] = Vec(Reg(dataType), depth)
    shift_reg(0) := io.input
    for(idx <- 1 until depth){
        shift_reg(idx) := shift_reg(idx - 1)
    }
    io.output := shift_reg(depth - 1)
}

object ShiftRegister{
    def apply[T <: Data](data_in: T, depth: Int, enable: Bool) : T={
        val r = ShiftRegisterE(data_in, depth)
        r.io.input := data_in
        r.io.enable := enable
        r.io.output
    }

    def apply[T <: Data](data_in: T, depth: Int) : T={
        val r = ShiftRegisterNE(data_in, depth)
        r.io.input := data_in
        r.io.output
    }
}

//object RegEnable {
//    /** Returns a register with the specified next, update enable gate, and no reset initialization.
//     *
//     * @example {{{
//     * val regWithEnable = RegEnable(nextVal, ena)
//     * }}}
//     */
//    def apply[T <: Data](next: T, enable: Bool): T = {
//        val r = Reg(cloneOf(next))
//        when (enable) { r := next }
//        r
//    }
//
//    /** Returns a register with the specified next, update enable gate, and reset initialization.
//     *
//     * @example {{{
//     * val regWithEnableAndReset = RegEnable(nextVal, 0.U, ena)
//     * }}}
//     */
//    def apply[T <: Data](next: T, init: T, enable: Bool): T = {
//        val r = RegInit(init)
//        when (enable) { r := next }
//        r
//    }
//}
//
//
//
//object ShiftRegister
//{
//
//    def apply[T <: Data](in: T, n: Int, en: Bool = True): T = {
//        // The order of tests reflects the expected use cases.
//        if (n != 0) {
//            RegEnable(apply(in, n-1, en), en)
//        } else {
//            in
//        }
//    }
//    def apply[T <: Data](in: T, n: Int, resetData: T, en: Bool): T = {
//        // The order of tests reflects the expected use cases.
//        if (n != 0) {
//            RegEnable(apply(in, n-1, resetData, en), resetData, en)
//        } else {
//            in
//        }
//    }
//}
//
