package utils.common.Mux

import spinal.core._
import spinal.lib._

class FlowDeMux[T <: Data](dataType: T, portCount:Int) extends Component {
    val io = new Bundle{
        val input = slave(Flow(dataType))
        val select = in(UInt(log2Up(portCount) bits))
        val outputs = Vec(master Flow(dataType), portCount)
    }
    noIoPrefix()

    for(idx <- 0 until portCount){
        when(idx =/= io.select) {
            io.outputs(idx).valid := False
            io.outputs(idx).payload := dataType.getZero
        } otherwise {
            io.outputs(idx).valid := io.input.valid
            io.outputs(idx).payload := io.input.payload
        }
    }
}

object FlowDeMux{
    def apply[T <: Data](input: Flow[T], select : UInt, portCount: Int) : Vec[Flow[T]] = {
        val c = new FlowDeMux(input.payload, portCount)
        c.io.input << input
        c.io.select := select
        c.io.outputs
    }
}
