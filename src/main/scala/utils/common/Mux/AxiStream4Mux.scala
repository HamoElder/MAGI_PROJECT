package utils.common.Mux

import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.bus.AxiStream4.{AxiStream4, AxiStream4Config}

case class AxiStream4Mux(config: AxiStream4Config, portCount: Int) extends Component {
    val io = new Bundle{
        val select = in(UInt(log2Up(portCount) bits))
        val inputs = Vec(slave(AxiStream4(config)), portCount)
        val output = master(AxiStream4(config))
    }
    noIoPrefix()

    for ((input, index) <- io.inputs.zipWithIndex) {
        input.stream.ready := io.select === index && io.output.stream.ready
    }
    io.output.stream.valid := io.inputs(io.select).stream.valid
    io.output.stream.payload := io.inputs(io.select).stream.payload

    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt, bitOffset: Int = 0): Area = new Area {
        busCtrl.driveAndRead(io.select, address = baseAddress, bitOffset = bitOffset,
            documentation = s"AxiStream4Mux Port Select Register. (${log2Up(portCount)} bits)") init(0)
    }
}


object AxiStream4Mux{
    def apply(select: UInt, inputs: Seq[AxiStream4]): AxiStream4 = {
        val vec = Vec(inputs)
        AxiStream4Mux(select, vec)
    }

    def apply(select: UInt, inputs: Vec[AxiStream4]): AxiStream4 = {
        val c = new AxiStream4Mux(inputs(0).config, inputs.length)
        (c.io.inputs, inputs).zipped.foreach(_ << _)
        c.io.select := select
        c.io.output
    }
}