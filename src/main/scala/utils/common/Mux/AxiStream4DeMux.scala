package utils.common.Mux

import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.bus.AxiStream4.{AxiStream4, AxiStream4Config}

class AxiStream4DeMux(config: AxiStream4Config, portCount: Int) extends Component {
    val io = new Bundle{
        val input = slave(slave(AxiStream4(config)))
        val select = in(UInt(log2Up(portCount) bits))
        val outputs = Vec(master(AxiStream4(config)), portCount)
    }
    noIoPrefix()

    io.input.stream.ready := False
    for (i <- 0 until portCount) {
        io.outputs(i).stream.payload := io.input.stream.payload
        when(i =/= io.select) {
            io.outputs(i).stream.valid := False
        } otherwise {
            io.outputs(i).stream.valid := io.input.stream.valid
            io.input.stream.ready := io.outputs(i).stream.ready
        }
    }

    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt, bitOffset: Int = 0): Area = new Area {
        busCtrl.driveAndRead(io.select, address = baseAddress, bitOffset = bitOffset,
            documentation = s"AxiStream4DeMux Port Select Register. (${log2Up(portCount)} bits)") init(0)
    }
}

object AxiStream4DeMux{
    def apply(input: AxiStream4, select: UInt, portCount: Int): Vec[AxiStream4] ={
        val c = new AxiStream4DeMux(input.config, portCount)
        c.io.input << input
        c.io.select := select
        c.io.outputs
    }
}
