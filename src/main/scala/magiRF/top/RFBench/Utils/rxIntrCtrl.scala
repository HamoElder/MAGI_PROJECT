package magiRF.top.RFBench.Utils

import magiRF.top.RFBench.Config._
import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.bus.AxiStream4.{AxiStream4, AxiStream4X}

case class rxIntrCtrl() extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(AxiStream4X(stream_config)))
        val result_data = master(AxiStream4(stream_config))
        val intr = out(Bool())
        val streamSize = out(rxFifoCntType)
        val intr_reset = in(Bool())
    }
    noIoPrefix()
    val intr_indicate = Reg(Bool()) init(False)
    val stream_size = Reg(rxFifoCntType)
    val rx_fifo = StreamFifo(
        AxiStream4X(stream_config),
        rxFifoDepth
    )
    when(io.raw_data.last && io.raw_data.fire){
        intr_indicate := True
        stream_size := rx_fifo.io.occupancy + 1
    }.elsewhen(io.intr_reset){
        intr_indicate := False
    }
    rx_fifo.io.push << io.raw_data.haltWhen(intr_indicate)
    io.result_data.stream << rx_fifo.io.pop
    io.intr := intr_indicate
    io.streamSize := stream_size

    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt): Area = new Area{
        busCtrl.read(io.intr, address = baseAddress + 0x00, bitOffset = 0,
            documentation = "Receiver Interrupt Enable. (1 bits).")
        busCtrl.read(io.streamSize, address = baseAddress + 0x04, bitOffset = 0,
            documentation = s"Receiver data size Indicator (${rxFifoCntType.getBitsWidth} bits).")
        busCtrl.driveAndRead(io.intr_reset, baseAddress + 0x08, bitOffset = 0,
            documentation = "Receiver Interrupt Reset (1 bits).") init(False)
    }
}

