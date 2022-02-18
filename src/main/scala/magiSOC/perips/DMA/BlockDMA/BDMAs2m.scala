package magiSOC.perips.DMA.BlockDMA

import spinal.lib._
import spinal.core._
import spinal.lib.bus.amba4.axi.{Axi4Aw, Axi4B, Axi4W}
import utils.bus.AxiStream4.{AxiStream4, AxiStream4X}

object BDMAs2mStates extends SpinalEnum{
    val IDLE, PENDING, BURST, RESP, DROP = newElement()
}


case class BDMAs2m(config: BDMAConfig) extends Component{
    val io = new Bundle{
        val dma_aw = master(Stream(Axi4Aw(config.axi4Config)))
        val dma_w = master(Stream(Axi4W(config.axi4Config)))
        val dma_b = slave(Stream(Axi4B(config.axi4Config)))

        val s2m_data = slave(AxiStream4(config.axisConfig))
        val s2m_state = out(BDMAs2mStates())
        val s2m_cch = slave(Stream(BDMAControlChannel(config)))
        val s2m_intr = out(Bool())
    }
    noIoPrefix()

    /**
     * Data Stream Fifo
     */
    val s2m_aw_fifo = StreamFifo(Axi4Aw(config.axi4Config), config.axi4AxFifoDepth)
    val low_addr_fifo = StreamFifo(UInt(config.axi4Size bits), config.axi4AxFifoDepth)
    val low_bytes_fifo = StreamFifo(UInt(config.axi4Size bits), config.axi4AxFifoDepth)
    val s2m_data_fifo = StreamFifo(AxiStream4X(config.axisConfig), config.axi4MaxBurstLen)
    /**
     * FSM Status
     */
    val s2m_cch_state = Reg(BDMAcchStates()) init(BDMAcchStates.IDLE)
    val s2m_w_state = Reg(BDMAs2mStates()) init(BDMAs2mStates.IDLE)

    /**
     * Axi4 Channel Enable Valve
     */
    val s2m_aw_valve = Reg(Bool()) init(False)
    val s2m_data_valve = Reg(Bool()) init(False)

    /**
     * CCH Control Reg
     */
    val cch_ready = Reg(Bool()) init(False)
    val cch_total_bytes = Reg(config.bytesCntDataType)
    val cch_address = Reg(config.axi4Config.addressType)
    val cch_burst_type = Reg(Bits(2 bits))
    val cch_id = Reg(config.axi4Config.idType)
    val trans_bytes_cnt = Reg(config.bytesCntDataType)

    /**
     * Stream to Memory Aw Reg
     */
    val s2m_aw_len = Reg(config.axi4Config.lenType)

    val s2m_aw_valid = Reg(Bool()) init(False)
    val s2m_aw_halt_exec = Reg(Bool()) init(False)
    val aligned_address = (cch_address.asBits >> config.axi4Size).resizeLeft(config.axi4Config.addressWidth).asUInt
    val cycle_finished = Reg(Bool()) init(False)

    switch(s2m_cch_state){
        is(BDMAcchStates.IDLE){
            when(io.s2m_cch.fire){
                cch_ready := False
                cch_address := io.s2m_cch.desc_start_addr
                cch_total_bytes := io.s2m_cch.desc_total_bytes
                cch_burst_type := io.s2m_cch.desc_burst
                cch_id := io.s2m_cch.desc_id
                switch(io.s2m_cch.desc_burst){
                    is(0){
                        s2m_cch_state := BDMAcchStates.FIXED_REQ
                    }
                    default{
                        /**
                         * Not Support for Wrap Method.
                         */
                        s2m_cch_state := BDMAcchStates.INCR_REQ
                    }
                }
            }.otherwise{
                cch_ready := True
            }
        }
        is(BDMAcchStates.FIXED_REQ){
            when(cch_total_bytes === 0){
                s2m_cch_state := BDMAcchStates.HALT
            }.elsewhen(s2m_aw_fifo.io.push.fire){
                s2m_aw_halt_exec := False
                cch_total_bytes := (cch_total_bytes - trans_bytes_cnt).resized
            }.otherwise{
                s2m_aw_halt_exec := True
            }

            when(s2m_aw_fifo.io.push.fire){
                s2m_aw_valid := False
            }.elsewhen(s2m_aw_halt_exec){
                s2m_aw_valid := True
            }

            when((cch_total_bytes + (cch_address & config.axi4AddrOffsetMask)) <= config.axi4MaximumTotalDataTransactionSize
                || Bool(config.axi4MaximumTotalDataTransactionSize >= 4096)) {
                /**
                 *  Packet smaller than max burst size
                 */
                trans_bytes_cnt := cch_total_bytes.resized
            }.otherwise{
                /**
                 * Packet larger than max burst size
                 */
                trans_bytes_cnt := (config.axi4MaximumTotalDataTransactionSize - (cch_address & config.axi4AddrOffsetMask)).resized
            }
            s2m_aw_len := ((trans_bytes_cnt + (cch_address & config.axi4AddrOffsetMask) - 1) >> config.axi4Size).resized
        }
        is(BDMAcchStates.INCR_REQ){
            when(cch_total_bytes === 0){
                s2m_cch_state := BDMAcchStates.HALT
            }.elsewhen(s2m_aw_fifo.io.push.fire){
                s2m_aw_halt_exec := False
                cch_address := (cch_address + trans_bytes_cnt).resized
                cch_total_bytes := (cch_total_bytes - trans_bytes_cnt).resized
            }.otherwise{
                s2m_aw_halt_exec := True
            }

            when(s2m_aw_fifo.io.push.fire){
                s2m_aw_valid := False
            }.elsewhen(s2m_aw_halt_exec){
                s2m_aw_valid := True
            }

            when((cch_total_bytes + (cch_address & config.axi4AddrOffsetMask)) <= config.axi4MaximumTotalDataTransactionSize
                || Bool(config.axi4MaximumTotalDataTransactionSize >= 4096)) {
                /**
                 * Packet smaller than max burst size
                 */
                when((((cch_address & 0xfff) + (cch_total_bytes&0xfff)) >> 12) =/= 0 || ((cch_total_bytes&0xfff) >> 12) =/= 0){
                    /**
                     * Cross 4K Boundary
                     */
                    trans_bytes_cnt := (0x1000 - (cch_address & 0xfff)).resized
                }.otherwise{
                    trans_bytes_cnt := cch_total_bytes.resized
                }
            }.otherwise{
                /**
                 * Packet larger than max burst size
                 */
                when(((cch_address & 0xfff) + config.axi4MaximumTotalDataTransactionSize) >> 12 =/= 0){
                    /**
                     * Cross 4K Boundary
                     */
                    trans_bytes_cnt := (0x1000 - cch_address & 0xfff).resized
                }.otherwise{
                    trans_bytes_cnt := (config.axi4MaximumTotalDataTransactionSize - (cch_address & config.axi4AddrOffsetMask)).resized
                }
            }
            s2m_aw_len := ((trans_bytes_cnt + (cch_address & config.axi4AddrOffsetMask) - 1) >> config.axi4Size).resized
        }
        is(BDMAcchStates.HALT){
            when(io.s2m_cch.desc_reset && cycle_finished){
                s2m_cch_state := BDMAcchStates.IDLE
            }
        }
    }

    /**
     * Aw Channel Connections
     */
    io.s2m_cch.ready := cch_ready

    s2m_aw_fifo.io.push.valid := s2m_aw_valid
    s2m_aw_fifo.io.push.addr := aligned_address
    s2m_aw_fifo.io.push.id := cch_id
    s2m_aw_fifo.io.push.len := s2m_aw_len
    s2m_aw_fifo.io.push.size := config.axi4Size
    s2m_aw_fifo.io.push.burst := cch_burst_type

    io.dma_aw << s2m_aw_fifo.io.pop.haltWhen(~s2m_aw_valve)

    low_addr_fifo.io.push.valid := s2m_aw_valid
    low_addr_fifo.io.push.payload := cch_address(config.axi4LowAddrRange)
    low_addr_fifo.io.pop.ready := io.dma_aw.fire
    low_bytes_fifo.io.push.valid := s2m_aw_valid
    low_bytes_fifo.io.push.payload := ~(trans_bytes_cnt(config.axi4LowAddrRange) + cch_address(config.axi4LowAddrRange)) + 1
    low_bytes_fifo.io.pop.ready := io.dma_aw.fire

    /**
     * Stream to Memory Write Channel Reg
     */
    val s2m_w_data = Reg(config.axi4Config.dataType)
    val s2m_w_strb = Reg(Bits(config.axi4Config.bytePerWord bits))
    val s2m_w_valid = Reg(Bool()) init(False)
    val s2m_b_ready = Reg(Bool()) init(False)

    val w_residual_data = Reg(config.axi4Config.dataType)
    val w_residual_strb = Reg(Bits(config.axi4Config.bytePerWord bits)) init(0)

    val s2m_axis_last = if(config.axisConfig.useLast) Reg(Bool()) init(False) else null
    val s2m_axis_leak = if(config.axisConfig.useLast) Reg(Bool()) init(False) else null
    val s2m_aw_finish = (s2m_cch_state === BDMAcchStates.HALT && ~s2m_aw_fifo.io.pop.valid)
    val s2m_axis_len = Reg(config.axi4Config.lenType)
    val strb_mask = Reg(Bits(config.axi4Config.bytePerWord bits))
    val bytes_shift = Reg(UInt(config.axi4Size bits))
    val strb_full = Bits((1 << config.axi4Size) bits).setAll()

    switch(s2m_w_state){
        is(BDMAs2mStates.IDLE){
            when(io.dma_aw.fire){
                s2m_aw_valve := False
                bytes_shift := low_addr_fifo.io.pop.payload
                strb_mask := (strb_full << low_bytes_fifo.io.pop.payload).asBits.resized
                s2m_axis_len := io.dma_aw.len
                when(s2m_data_fifo.io.occupancy >= (s2m_axis_len + 1)){
                    s2m_w_state := BDMAs2mStates.BURST
                    s2m_data_valve := True
                }.otherwise{
                    s2m_w_state := BDMAs2mStates.PENDING
                    s2m_data_valve := False
                }
            }.otherwise{
                s2m_data_valve := False
                s2m_aw_valve := True
            }
            if(config.axisConfig.useLast){
                s2m_axis_last := False
            }

            s2m_w_valid := False
            s2m_b_ready := False
        }
        is(BDMAs2mStates.PENDING){
            when(s2m_data_fifo.io.occupancy >= (s2m_axis_len + 1)){
                s2m_w_state := BDMAs2mStates.BURST
                s2m_data_valve := True
            }
        }
        is(BDMAs2mStates.BURST){
            when(io.dma_w.fire){
                s2m_axis_len := s2m_axis_len - 1
                when(s2m_axis_len === 0){
                    s2m_data_valve := False
                    s2m_w_state := BDMAs2mStates.RESP
                    s2m_b_ready := True
                }
            }

            when(s2m_data_fifo.io.pop.fire){
                if(config.axisConfig.useKeep){
                    s2m_w_strb := ((w_residual_strb ## s2m_data_fifo.io.pop.keep_) >> bytes_shift).asBits.resized
                    w_residual_strb := s2m_data_fifo.io.pop.keep_
                }else if(config.axisConfig.useStrb){
                    s2m_w_strb := ((w_residual_strb ## s2m_data_fifo.io.pop.strb) >> bytes_shift).asBits.resized
                    w_residual_strb := s2m_data_fifo.io.pop.strb
                }else{
                    s2m_w_strb := strb_full
                }
                s2m_w_data := ((w_residual_data ## s2m_data_fifo.io.pop.data) >> bytes_shift).asBits.resized
                w_residual_data := s2m_data_fifo.io.pop.data
                if(config.axisConfig.useLast) {
                    s2m_axis_last := s2m_data_fifo.io.pop.last
                }
                s2m_w_valid := True
            }.elsewhen(io.dma_w.fire){
                s2m_w_valid := False
            }
        }
        is(BDMAs2mStates.RESP){
            when(io.dma_b.fire){
                s2m_b_ready := False
                s2m_aw_valve := True
                s2m_w_state := s2m_aw_finish ? BDMAs2mStates.DROP | BDMAs2mStates.IDLE
            }
        }
        is(BDMAs2mStates.DROP){
            if(config.axisConfig.useLast){
                when(s2m_axis_last || (s2m_data_fifo.io.pop.fire && s2m_data_fifo.io.pop.last)){
                    s2m_w_state := BDMAs2mStates.IDLE
                    s2m_axis_leak := False
                }.otherwise{
                    s2m_axis_leak := True
                }
                s2m_axis_last := False
            }else{
                s2m_w_state := BDMAs2mStates.IDLE
            }
            w_residual_strb := 0
            s2m_w_valid := False
        }
    }

    /**
     * Stream to W Channel Connections
     */
    s2m_data_fifo.io.push << io.s2m_data.stream
    s2m_data_fifo.io.pop.ready := (io.dma_w.ready && s2m_data_valve && (s2m_axis_len =/= 0)) || s2m_axis_leak
    io.dma_w.valid := s2m_w_valid
    io.dma_w.data := s2m_w_data
    io.dma_w.last := (s2m_axis_len === 0)
    io.dma_w.strb :=  (s2m_axis_len === 0) ? (strb_mask & s2m_w_strb) | s2m_w_strb

    io.dma_b.ready := s2m_b_ready

    /**
     * W channel Connections
     */

    when(s2m_cch_state === BDMAcchStates.IDLE){
        cycle_finished := False
    }.elsewhen(s2m_w_state === BDMAs2mStates.IDLE && s2m_aw_finish)(
        cycle_finished := True
    )
    io.s2m_intr := cycle_finished
    io.s2m_state := s2m_w_state
}


object BDMAs2mBench{
    def main(args: Array[String]): Unit = {
        val block_dma_config = BDMAConfig(axi4DataWidth = 32)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            defaultClockDomainFrequency = FixedFrequency(100 MHz), targetDirectory = "rtl/BlockDMA").
            generateSystemVerilog(new BDMAs2m(block_dma_config)).printPruned()
    }
}

