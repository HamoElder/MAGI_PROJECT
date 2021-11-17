package magiRF.packages.Coder.Convolutional.Decoder

import spinal.lib._
import spinal.core._

object ReorderLifoStates extends SpinalEnum{
    val PUSH0POP1, POP0PUSH1 = newElement()
}

case class ReorderLifo(config: ViterbiDecoderConfig) extends Component {
    val io = new Bundle{
        val inverted_order = slave(Flow(Fragment(config.invertDataType)))
        val decoded_data = master(Flow(Fragment(config.decodedDataType)))
    }
    noIoPrefix()
    val reorder_state = Reg(ReorderLifoStates()) init(ReorderLifoStates.PUSH0POP1)
    val inverted_order_fifo = StreamFifo(Fragment(config.invertDataType), 16)
    inverted_order_fifo.io.push << io.inverted_order.toStream

    val decoded_lifo_0 = SISOLifo(config.decodedDataType, config.lifoDepth)
    val decoded_lifo_1 = SISOLifo(config.decodedDataType, config.lifoDepth)
    val lifo_demux = LifoDemux(config.decodedDataType, 2)
    val lifo_push_sel: UInt = reorder_state.asBits.asUInt
    val fifo_pop_valve = Reg(Bool()) init(True)

    lifo_demux.io.select := lifo_push_sel
    decoded_lifo_0.io.push_method := (lifo_push_sel === 0)
    decoded_lifo_1.io.push_method := (lifo_push_sel === 1)

    lifo_demux.io.input.fragment := inverted_order_fifo.io.pop.fragment(0).as(config.decodedDataType)
    lifo_demux.io.input.last := inverted_order_fifo.io.pop.fragment(1)
    lifo_demux.io.input.valid := inverted_order_fifo.io.pop.valid && fifo_pop_valve
    inverted_order_fifo.io.pop.ready := lifo_demux.io.input.ready && fifo_pop_valve

    decoded_lifo_0.io.push <> lifo_demux.io.outputs(0)
    decoded_lifo_1.io.push <> lifo_demux.io.outputs(1)

    switch(reorder_state){
        is(ReorderLifoStates.PUSH0POP1){
            when(fifo_pop_valve === False){
                when(decoded_lifo_1.io.empty){
                    reorder_state := ReorderLifoStates.POP0PUSH1
                    fifo_pop_valve := True
                }
            }.elsewhen(inverted_order_fifo.io.pop.fire){
                when(inverted_order_fifo.io.pop.last){
                    fifo_pop_valve := False
                }
            }
        }
        is(ReorderLifoStates.POP0PUSH1){
            when(fifo_pop_valve === False){
                when(decoded_lifo_0.io.empty){
                    reorder_state := ReorderLifoStates.PUSH0POP1
                    fifo_pop_valve := True
                }
            }.elsewhen(inverted_order_fifo.io.pop.fire){
                when(inverted_order_fifo.io.pop.last){
                    fifo_pop_valve := False
                }
            }
        }
    }

    val lifo_mux = LifoMux(config.decodedDataType, 2)
    lifo_mux.io.select := ~lifo_push_sel
    lifo_mux.io.inputs(0) <> decoded_lifo_0.io.pop
    lifo_mux.io.inputs(1) <> decoded_lifo_1.io.pop
    io.decoded_data.valid := RegNext(lifo_mux.io.output.valid) init(False)
    io.decoded_data.last := RegNext(lifo_mux.io.output.last) init(False)
    io.decoded_data.fragment := RegNext(lifo_mux.io.output.fragment)
    lifo_mux.io.output.ready := True

}