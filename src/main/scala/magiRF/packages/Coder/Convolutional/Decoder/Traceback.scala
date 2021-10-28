package magiRF.packages.Coder.Convolutional.Decoder

import spinal.core._
import spinal.lib._
import spinal.lib.fsm._

object TracebackStates extends SpinalEnum {
    val IDLE, TB, DECODE, HALT, TAIL_DECODE, FINISH = newElement()
}

case class Traceback(config: ViterbiDecoderConfig) extends Component {
    val io = new Bundle{
        val min_idx = in(config.statesType)
        val s_path = slave(Flow(Fragment(config.survivalPathDataType)))
        val tb_node = master(Flow(Fragment(UInt(1 bits))))

        val halt = out(Bool())
        val finished = out(Bool())
    }
    noIoPrefix()


    val states_shift_rom = Vec(config.statesType, config.trellisSize)
    val in_data_rom = Vec(UInt(1 bits), config.trellisSize)
    for(idx <- 0 until config.trellisSize){
        states_shift_rom(idx) := ViterbiGen.TrellisGen(config)._2(idx)
        in_data_rom(idx) := ViterbiGen.TrellisGen(config)._4(idx)
    }

    val survival_path_ram_0 = Mem(config.survivalPathDataType, config.TBMemSize)
    val survival_path_ram_1 = Mem(config.survivalPathDataType, config.TBMemSize)
    val ram_select = Reg(Bool()) init(False)
    val ram_addr_write = Reg(config.TBMemCntType) init(0)

    val pkg_tail = Reg(Bool()) init(False)
    val tb_finish = Reg(Bool())

    survival_path_ram_0.write(ram_addr_write, io.s_path.payload, enable = (ram_select === False) && io.s_path.valid)
    survival_path_ram_1.write(ram_addr_write, io.s_path.payload, enable = (ram_select === True) && io.s_path.valid)

    when(tb_finish){
        ram_addr_write := 0
        ram_select := False
        pkg_tail := False
    }.elsewhen(io.s_path.valid){
        when(ram_addr_write >= (config.TBMemSize - 1)){
            ram_addr_write := 0
            ram_select := !ram_select
        }.otherwise{
            ram_addr_write := ram_addr_write + 1
        }
        pkg_tail := io.s_path.last
    }

    /**
     * Trace Back
     */
    val decoded_ram_sel = Reg(Bool())
    val ram_addr_read = Reg(config.TBMemCntType) init(0)
    val pipe_halt = Reg(Bool())

    val ram_0_value = survival_path_ram_0.readSync(ram_addr_read)
    val ram_1_value = survival_path_ram_1.readSync(ram_addr_read)
//    val ram_0_value = survival_path_ram_0.readAsync(ram_addr_read)
//    val ram_1_value = survival_path_ram_1.readAsync(ram_addr_read)
    val min_cursor = Reg(config.statesType)
    val cursor = decoded_ram_sel ? ((min_cursor << 1) + ram_1_value(min_cursor).asUInt) | ((min_cursor << 1) + ram_0_value(min_cursor).asUInt)
    val min_cursor_next = states_shift_rom(cursor)
    val tail_repeat = Reg(Bool()) init(False)

    val tb_node_data_next = in_data_rom(cursor)
    val tb_node_data = Reg(UInt(1 bits))
    val tb_node_valid = Reg(Bool()) init(False)
    val tb_node_last = Reg(Bool()) init(False)

    val halt_cnt = Reg(config.delayCntType)
    val traceback_state = Reg(TracebackStates()) init(TracebackStates.FINISH)
    switch(traceback_state){
        is(TracebackStates.FINISH){
            tb_finish := True
            pipe_halt := True
            tb_node_valid := False
            tb_node_last := False
            tail_repeat := False
            decoded_ram_sel := True
            traceback_state := TracebackStates.IDLE
        }
        is(TracebackStates.IDLE){
            tb_finish := False
            pipe_halt := False
            tb_node_valid := False
            tb_node_last := False
            halt_cnt := 0
            when((ram_addr_write === config.tracebackWinSize && (decoded_ram_sel === ram_select)) || pkg_tail) {
                traceback_state := TracebackStates.HALT
                ram_addr_read := ram_addr_write - 1
            }
        }
        is(TracebackStates.HALT){
            pipe_halt := True
            halt_cnt := halt_cnt + 1
            when(pkg_tail){
                tail_repeat := (ram_addr_write < config.tracebackWinSize) && (decoded_ram_sel === ram_select)
            }
            when(halt_cnt === config.combLogicDelay){
                traceback_state := pkg_tail ? TracebackStates.TAIL_DECODE | TracebackStates.TB
                min_cursor := io.min_idx
                ram_addr_read := ram_addr_read - 1
                decoded_ram_sel := ram_select
            }
        }
        is(TracebackStates.TAIL_DECODE){
            when(ram_addr_read === ram_addr_read.maxValue){
                traceback_state := tail_repeat ? TracebackStates.TAIL_DECODE | TracebackStates.FINISH
                when(tail_repeat){
                    tail_repeat := False
                    decoded_ram_sel := ~decoded_ram_sel
                    tb_node_last := False
                }.otherwise{
                    tb_finish := True
                    tb_node_last := True
                }
            }
            ram_addr_read := ram_addr_read - 1
            min_cursor := min_cursor_next
            tb_node_data := tb_node_data_next
            tb_node_valid := True
        }
        is(TracebackStates.TB){
            pipe_halt := False
            when(ram_addr_read === ram_addr_read.maxValue){
                traceback_state := TracebackStates.DECODE
                decoded_ram_sel := ~decoded_ram_sel
            }
            ram_addr_read := ram_addr_read - 1
            min_cursor := min_cursor_next
        }
        is(TracebackStates.DECODE){
            when(ram_addr_read === ram_addr_read.maxValue){
                traceback_state := TracebackStates.IDLE
                tb_node_last := True
            }.otherwise{
                ram_addr_read := ram_addr_read - 1
            }

            min_cursor := min_cursor_next
            tb_node_data := tb_node_data_next
            tb_node_valid := True
        }
    }

    io.finished := tb_finish
    io.halt := pipe_halt

    io.tb_node.valid := tb_node_valid
    io.tb_node.fragment := tb_node_data
    io.tb_node.last := tb_node_last

}
