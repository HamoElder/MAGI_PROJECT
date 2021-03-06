package utils.common.Mux

import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory

class FlowMux[T <: Data](dataType: T, portCount:Int) extends Component  {
    val io = new Bundle{
        val inputs = Vec(slave Flow(dataType), portCount)
        val select = in UInt(log2Up(portCount) bits)
        val output = master Flow(dataType)
    }

    noIoPrefix()

    io.output.valid := io.inputs(io.select).valid
    io.output.payload := io.inputs(io.select).payload

    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt, bitOffset: Int = 0): Area = new Area {
        busCtrl.driveAndRead(io.select, address = baseAddress, bitOffset = bitOffset,
            documentation = s"FlowMux Port Select Register. (${log2Up(portCount)} bits)") init(0)
    }
}


object FlowMux{
    def apply[T <: Data](select: UInt, inputs: Vec[Flow[T]]) : Flow[T] = {
        val c = new FlowMux(inputs(0).payload, inputs.length)
        (c.io.inputs, inputs).zipped.foreach(_ << _)
        c.io.select := select
        c.io.output
    }

    def apply[T <: Data](select: UInt, inputs: Seq[Flow[T]]) : Flow[T] = {
        val vec = Vec(inputs)
        val c = new FlowMux(vec(0).payload, inputs.length)
        (c.io.inputs, inputs).zipped.foreach(_ << _)
        c.io.select := select
        c.io.output
    }
}