package magiRF.packages.Coder.Convolutional.Decoder

import spinal.core._
import spinal.lib._
import spinal.lib.fsm._
import utils.common.LIFO.StreamLifo

object TracebackStates extends SpinalEnum {
    val IDLE, TB0, TB1, DECODE, HALT = newElement()
}

case class Traceback(config: ViterbiDecoderConfig) extends Component {
    val io = new Bundle{
        val min_idx = in(config.minIndexDataType)
        val s_path = slave(Flow(config.survivalPathDataType))
        val clc = in(Bool())
    }
    noIoPrefix()

    val survival_path_ram_0 = Mem(config.survivalPathDataType, config.tracebackLength)
    val survival_path_ram_1 = Mem(config.survivalPathDataType, config.tracebackLength)

    val ram_addr_in = Reg(UInt(config.tracebackSize bits))
    val ram_sel = Reg(Bool())

    when(io.clc){
        ram_addr_in := 0
        ram_sel := False
    }.elsewhen(io.s_path.valid){
        when(ram_sel){
            survival_path_ram_0.write(ram_addr_in, io.s_path.payload)
        }.otherwise{
            survival_path_ram_1.write(ram_addr_in, io.s_path.payload)
        }
        when(ram_addr_in >= (config.tracebackSize - 1)){
            ram_addr_in := 0
            ram_sel := !ram_sel
        }.otherwise{
            ram_addr_in := ram_addr_in + 1
        }
    }

    // Trace Back
    val ram_addr_out = Reg(UInt(config.tracebackSize bits))
    // LIFO
    val decoded_lifo_0 = Reg(Bits(config.lifoDepth bits))
    val decoded_lifo_1 = Reg(Bits(config.lifoDepth bits))
    val lifo_cnt = Reg(UInt())
    val lifo_switch = Reg(Bool())

    val traceback_state = Reg(TracebackStates()) init(TracebackStates.IDLE)
    switch(traceback_state){
        is(TracebackStates.IDLE){
            when(ram_addr_in === config.tracebackWinSize && lifo_switch === ram_sel){
                traceback_state := TracebackStates.HALT
            }
            lifo_cnt := 0
            lifo_switch := True
        }
        is(TracebackStates.TB0){

        }
        is(TracebackStates.TB1){

        }
        is(TracebackStates.DECODE){

        }
        is(TracebackStates.HALT){

        }
    }

    // Decoded Out



}
