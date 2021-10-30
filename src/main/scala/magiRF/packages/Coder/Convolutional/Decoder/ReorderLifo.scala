package magiRF.packages.Coder.Convolutional.Decoder

import spinal.lib._
import spinal.core._

object ReorderLifoStates extends SpinalEnum{
    val PUSH, POP = newElement()
}

case class ReorderLifo(config: ViterbiDecoderConfig) extends Component {
    val io = new Bundle{
        val inverted_order = slave(Flow(Fragment(config.invertDataType)))
        val decoded_data = master(Flow(Fragment(config.decodedDataType)))
    }
    noIoPrefix()

    val inverted_order_fifo = StreamFifo(Fragment(config.invertDataType), config.lifoDepth)
    inverted_order_fifo.io.push << io.inverted_order.toStream

    val decoded_lifo = Reg(Bits(config.lifoDepth bits))
    val decoded_last_lifo = Reg(Bits(config.lifoDepth bits))

    val lifo_head_cursor = Reg(config.lifoCntType) init(0)

    val fifo_pop_ready = Reg(Bool()) init(False)
    val decoded_data_valid = Reg(Bool()) init(False)
    val data_last = Reg(Bool()) init(False)
    val decoded_data_last = Reg(Bool()) init(False)
    val decoded_data = Reg(config.decodedDataType)

    inverted_order_fifo.io.pop.ready := fifo_pop_ready

    val reorder_state = Reg(ReorderLifoStates()) init(ReorderLifoStates.PUSH)
    switch(reorder_state){
        is(ReorderLifoStates.PUSH){
            when(inverted_order_fifo.io.pop.fire){
                when(inverted_order_fifo.io.pop.last){
                    fifo_pop_ready := False
                    reorder_state := ReorderLifoStates.POP
                }.otherwise{
                    fifo_pop_ready := True
                    lifo_head_cursor := lifo_head_cursor + 1
                }
                decoded_lifo(lifo_head_cursor) := inverted_order_fifo.io.pop.fragment(0)
                decoded_last_lifo(lifo_head_cursor) := inverted_order_fifo.io.pop.fragment(1)
            }.otherwise{
                fifo_pop_ready := True
            }
            decoded_data_valid := False
            decoded_data_last := False
            data_last := False
        }
        is(ReorderLifoStates.POP){
            when(lifo_head_cursor === 0){
                reorder_state := ReorderLifoStates.PUSH
                decoded_data_last := data_last
            }.otherwise{
                lifo_head_cursor := lifo_head_cursor - 1
            }
            decoded_data_valid := True
            decoded_data := decoded_lifo(lifo_head_cursor).as(config.decodedDataType)
            data_last := (data_last === True) ? True | decoded_last_lifo(lifo_head_cursor)
        }
    }

    io.decoded_data.fragment := decoded_data
    io.decoded_data.valid := decoded_data_valid
    io.decoded_data.last := decoded_data_last

}
