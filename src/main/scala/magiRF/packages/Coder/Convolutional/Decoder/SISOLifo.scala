package magiRF.packages.Coder.Convolutional.Decoder

import spinal.lib._
import spinal.core._

case class SISOLifo[T <: Data](dataType: T, depth: Int) extends Component{
    def lifoCntWidth: Int = log2Up(depth)
    def lifoCntType: UInt = UInt(lifoCntWidth bits)
    val io = new Bundle{
        val push = slave(Stream(Fragment(dataType)))
        val pop = master(Stream(Fragment(dataType)))

        val push_method = in(Bool())
        val empty = out(Bool())
        val full = out(Bool())
    }
    noIoPrefix()
    val lifo_data: Vec[T] = Vec(Reg(dataType), depth)
    val lifo_data_last: Vec[Bool] = Vec(Reg(Bool()), depth)
    val lifo_head_cursor: UInt = Reg(lifoCntType) init(0)

    val lifo_last: Bool = Reg(Bool())

    when(io.push_method){
        when(io.push.fire && !io.full){
            lifo_head_cursor := lifo_head_cursor + 1
            lifo_data(lifo_head_cursor) := io.push.fragment
            lifo_data_last(lifo_head_cursor) := io.push.last
        }
        lifo_last := False
    }.otherwise{
        when(io.pop.fire && !io.empty){
            lifo_head_cursor := lifo_head_cursor - 1
        }
        lifo_last := (lifo_last === True) ? True | lifo_data_last(lifo_head_cursor - 1)
    }

    io.push.ready := io.push_method && !io.full
    io.pop.valid := !(io.push_method || io.empty)
    io.pop.fragment := Mux(io.push_method, dataType.getZero, lifo_data(lifo_head_cursor - 1))
    io.pop.last := lifo_last && (lifo_head_cursor === 1)
    io.full := lifo_head_cursor === (depth - 1)
    io.empty := lifo_head_cursor === 0
}

case class LifoDemux[T <: Data](dataType: T, portCount: Int) extends Component{
    val io = new Bundle{
        val select = in UInt (log2Up(portCount) bit)
        val input = slave(Stream(Fragment(dataType)))
        val outputs = Vec(master(Stream(Fragment(dataType))), portCount)
    }
    noIoPrefix()

    io.input.ready := False
    for (i <- 0 until portCount) {
        io.outputs(i).payload := io.input.payload
        when(i =/= io.select) {
            io.outputs(i).valid := False
        } otherwise {
            io.outputs(i).valid := io.input.valid
            io.input.ready := io.outputs(i).ready
        }
    }
}

case class LifoMux[T <: Data](dataType: T, portCount: Int) extends Component {
    val io = new Bundle {
        val select = in UInt (log2Up(portCount) bit)
        val inputs = Vec(slave(Stream(Fragment(dataType))), portCount)
        val output = master(Stream(Fragment(dataType)))
    }
    for ((input, index) <- io.inputs.zipWithIndex) {
        input.ready := io.select === index && io.output.ready
    }
    io.output.valid := io.inputs(io.select).valid
    io.output.payload := io.inputs(io.select).payload
}