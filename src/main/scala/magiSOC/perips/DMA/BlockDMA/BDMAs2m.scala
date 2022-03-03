package magiSOC.perips.DMA.BlockDMA

import spinal.lib._
import spinal.core._
import spinal.lib.bus.amba4.axi.{Axi4Aw, Axi4B, Axi4W}
import utils.bus.AxiStream4.{AxiStream4, AxiStream4X}

object BDMAs2mStates extends SpinalEnum {
    val IDLE, REQ, BURST, DROP = newElement()
}


case class BDMAs2m(config: BDMAConfig) extends Component {
    val io = new Bundle {
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
    val s2m_trans_bytes_fifo = StreamFifo(config.bytesCntDataType, config.axi4AxFifoDepth)
    val s2m_w_fifo = StreamFifo(Axi4W(config.axi4Config), config.axi4WFifoDepth)
    /**
     * FSM Status
     */
    val s2m_cch_state = Reg(BDMAcchStates()) init (BDMAcchStates.IDLE)
    val s2m_w_state = Reg(BDMAs2mStates()) init (BDMAs2mStates.IDLE)

    /**
     * CCH Control Reg
     */
    val cch_ready = Reg(Bool()) init (False)
    val cch_total_bytes = Reg(config.bytesCntDataType)
    val cch_address = Reg(config.axi4Config.addressType)
    val cch_burst_type = Reg(Bits(2 bits))
    val cch_id = Reg(config.axi4Config.idType)
    val trans_bytes_cnt = Reg(config.bytesCntDataType)

    /**
     * Stream to Memory Aw Reg
     */
    val s2m_aw_len = Reg(config.axi4Config.lenType)

    val s2m_aw_valid = Reg(Bool()) init (False)
    val s2m_aw_halt_exec = Reg(Bool()) init (False)
    val aligned_address = (cch_address.asBits >> config.axi4Size).resizeLeft(config.axi4Config.addressWidth).asUInt
    val cycle_finished = Reg(Bool()) init (False)
    val s2m_bytes_shift = Reg(UInt(config.axi4Size bits)) init(0)
    val s2m_mask_shift = Reg(UInt(config.axi4Size bits)) init(0)

    switch(s2m_cch_state) {
        is(BDMAcchStates.IDLE) {
            when(io.s2m_cch.fire) {
                cch_ready := False
                s2m_bytes_shift := io.s2m_cch.desc_start_addr(config.axi4LowAddrRange)
                s2m_mask_shift := (io.s2m_cch.desc_start_addr(config.axi4LowAddrRange) + io.s2m_cch.desc_total_bytes(config.axi4LowAddrRange)).resized
                cch_address := io.s2m_cch.desc_start_addr
                cch_total_bytes := io.s2m_cch.desc_total_bytes
                cch_burst_type := io.s2m_cch.desc_burst
                cch_id := io.s2m_cch.desc_id
                switch(io.s2m_cch.desc_burst) {
                    is(0) {
                        s2m_cch_state := BDMAcchStates.FIXED_REQ
                    }
                    default {
                        /**
                         * Not Support for Wrap Method.
                         */
                        s2m_cch_state := BDMAcchStates.INCR_REQ
                    }
                }
            }.otherwise {
                cch_ready := True
            }
        }
        is(BDMAcchStates.FIXED_REQ) {
            when(cch_total_bytes === 0) {
                s2m_cch_state := BDMAcchStates.HALT
            }.elsewhen(s2m_aw_fifo.io.push.fire) {
                s2m_aw_halt_exec := False
                cch_total_bytes := (cch_total_bytes - trans_bytes_cnt).resized
            }.otherwise {
                s2m_aw_halt_exec := True
            }

            when(s2m_aw_fifo.io.push.fire) {
                s2m_aw_valid := False
            }.elsewhen(s2m_aw_halt_exec) {
                s2m_aw_valid := True
            }

            when((cch_total_bytes + (cch_address & config.axi4AddrOffsetMask)) <= config.axi4MaximumTotalDataTransactionSize
                || Bool(config.axi4MaximumTotalDataTransactionSize >= 4096)) {
                /**
                 * Packet smaller than max burst size
                 */
                trans_bytes_cnt := cch_total_bytes.resized
            }.otherwise {
                /**
                 * Packet larger than max burst size
                 */
                trans_bytes_cnt := (config.axi4MaximumTotalDataTransactionSize - (cch_address & config.axi4AddrOffsetMask)).resized
            }
            s2m_aw_len := ((trans_bytes_cnt + (cch_address & config.axi4AddrOffsetMask) - 1) >> config.axi4Size).resized
        }
        is(BDMAcchStates.INCR_REQ) {
            when(cch_total_bytes === 0) {
                s2m_cch_state := BDMAcchStates.HALT
            }.elsewhen(s2m_aw_fifo.io.push.fire) {
                s2m_aw_halt_exec := False
                cch_address := (cch_address + trans_bytes_cnt).resized
                cch_total_bytes := (cch_total_bytes - trans_bytes_cnt).resized
            }.otherwise {
                s2m_aw_halt_exec := True
            }

            when(s2m_aw_fifo.io.push.fire) {
                s2m_aw_valid := False
            }.elsewhen(s2m_aw_halt_exec) {
                s2m_aw_valid := True
            }

            when((cch_total_bytes + (cch_address & config.axi4AddrOffsetMask)) <= config.axi4MaximumTotalDataTransactionSize
                || Bool(config.axi4MaximumTotalDataTransactionSize >= 4096)) {
                /**
                 * Packet smaller than max burst size
                 */
                when((((cch_address & 0xfff) + (cch_total_bytes & 0xfff)) >> 12) =/= 0 || ((cch_total_bytes & 0xfff) >> 12) =/= 0) {
                    /**
                     * Cross 4K Boundary
                     */
                    trans_bytes_cnt := (0x1000 - (cch_address & 0xfff)).resized
                }.otherwise {
                    trans_bytes_cnt := cch_total_bytes.resized
                }
            }.otherwise {
                /**
                 * Packet larger than max burst size
                 */
                when(((cch_address & 0xfff) + config.axi4MaximumTotalDataTransactionSize) >> 12 =/= 0) {
                    /**
                     * Cross 4K Boundary
                     */
                    trans_bytes_cnt := (0x1000 - cch_address & 0xfff).resized
                }.otherwise {
                    trans_bytes_cnt := (config.axi4MaximumTotalDataTransactionSize - (cch_address & config.axi4AddrOffsetMask)).resized
                }
            }
            s2m_aw_len := ((trans_bytes_cnt + (cch_address & config.axi4AddrOffsetMask) - 1) >> config.axi4Size).resized
        }
        is(BDMAcchStates.HALT) {
            when(io.s2m_cch.desc_reset && cycle_finished) {
                s2m_cch_state := BDMAcchStates.IDLE
                s2m_bytes_shift := 0
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


    s2m_trans_bytes_fifo.io.push.valid := s2m_aw_valid
    s2m_trans_bytes_fifo.io.push.payload := trans_bytes_cnt
    s2m_trans_bytes_fifo.io.pop.ready := io.dma_aw.fire

    /**
     * OutStanding Support
     */

    val strb_full = Bits((1 << config.axi4Size) bits).setAll()
    val len_pending_fifo = StreamFifo(config.axi4Config.lenType, config.axi4OutstandingDepth)
    val trans_pending_fifo = StreamFifo(config.bytesCntDataType, config.axi4OutstandingDepth)
    val pending_valid = Reg(Bool()) init (False)

    val len_pending = Reg(config.axi4Config.lenType)
    val trans_pending = Reg(config.bytesCntDataType)

    when(io.dma_aw.fire) {
        trans_pending := s2m_trans_bytes_fifo.io.pop.payload
        len_pending := io.dma_aw.len
        pending_valid := True
    }.otherwise {
        pending_valid := False
    }

    trans_pending_fifo.io.push.valid := pending_valid
    trans_pending_fifo.io.push.payload := trans_pending

    len_pending_fifo.io.push.valid := pending_valid
    len_pending_fifo.io.push.payload := len_pending

    io.dma_aw << s2m_aw_fifo.io.pop.haltWhen(len_pending_fifo.io.occupancy >= config.outStandingLen)
    /**
     * Stream to Memory Write Channel Reg
     */
    val aw_finish = (s2m_cch_state === BDMAcchStates.HALT && ~len_pending_fifo.io.pop.valid && ~s2m_aw_fifo.io.pop.valid)

    val s2m_axis_valve = Reg(Bool()) init(False)
    val s2m_axis_data = Reg(config.axisConfig.dataType)
    val s2m_axis_residual_data = Reg(config.axisConfig.dataType)
    val s2m_axis_strb_keep = Reg(config.axisConfig.keepType) init(0)
    val s2m_axis_residual_strb_keep = Reg(config.axisConfig.keepType) init(0)
    val s2m_axis_trans_bytes = Reg(config.bytesCntDataType) init(0)
    val s2m_axis_req = Reg(Bool()) init(False)
    val s2m_axis_first = Reg(Bool()) init(False)
    val s2m_axis_last_cycle = Reg(Bool()) init(False)
    val s2m_axis_final_last = Reg(Bool()) init(False)
    val s2m_axis_leak = Reg(Bool()) init(False)

    val s2m_w_len = Reg(config.axi4Config.lenType)
    val s2m_w_last = Reg(Bool()) init(False)
    val s2m_w_data = Reg(config.axi4Config.dataType)
    val s2m_w_strb = Reg(Bits(config.axi4Config.bytePerWord bits)) init(0)
    val s2m_w_valid = Reg(Bool()) init (False)
    val s2m_w_final_mask = Reg(Bits(config.axi4Config.bytePerWord bits)) init(0)

    val pending_fifo_pop_ready = Reg(Bool()) init (False)

    switch(s2m_w_state) {
        is(BDMAs2mStates.IDLE){
            when(io.dma_aw.fire){
                s2m_w_state := BDMAs2mStates.REQ
                s2m_w_final_mask := (strb_full >> (config.axi4Config.bytePerWord - s2m_mask_shift)).resized
            }
            s2m_axis_residual_strb_keep := 0
            s2m_axis_strb_keep := 0
            s2m_axis_first := False
            s2m_axis_trans_bytes := 0
            s2m_axis_last_cycle := False
            s2m_axis_final_last := False
        }

        is(BDMAs2mStates.REQ) {
            when(len_pending_fifo.io.pop.fire) {
                s2m_w_len := len_pending_fifo.io.pop.payload
                s2m_axis_trans_bytes := s2m_axis_trans_bytes + trans_pending_fifo.io.pop.payload
                pending_fifo_pop_ready := False
                s2m_w_state := BDMAs2mStates.BURST
                s2m_axis_valve := ~s2m_axis_final_last
            }.otherwise {
                pending_fifo_pop_ready := True
                s2m_axis_valve := False
            }
            s2m_w_valid := False
            s2m_w_last := False
            s2m_axis_req := False
        }
        is(BDMAs2mStates.BURST) {
            /**
             * AXIS Channel Logic
             */
            when(io.s2m_data.stream.fire || s2m_axis_final_last) {
                s2m_axis_first := True
                s2m_axis_req := True
                when(s2m_axis_first === False){
                    s2m_axis_data := (io.s2m_data.stream.data << (8 * s2m_bytes_shift)).resized
                    if (config.axisConfig.useKeep) {
                        s2m_axis_strb_keep := (io.s2m_data.stream.keep_ << s2m_bytes_shift).resized
                    } else if (config.axisConfig.useStrb) {
                        s2m_axis_strb_keep := (io.s2m_data.stream.strb << s2m_bytes_shift).resized
                    } else {
                        s2m_axis_strb_keep := strb_full
                    }
                }.otherwise{
                    when(s2m_axis_final_last){
                        s2m_axis_data := ((io.s2m_data.stream.data.getZero ## s2m_axis_residual_data) << (8 * s2m_bytes_shift)) ((2 * config.axisConfig.dataWidth - 1) downto config.axisConfig.dataWidth)
                        if (config.axisConfig.useKeep) {
                            s2m_axis_strb_keep := ((io.s2m_data.stream.keep_.getZero ## s2m_axis_residual_strb_keep) << s2m_bytes_shift)((2 * config.axisConfig.strbType.getWidth - 1) downto config.axisConfig.strbType.getWidth)
                        } else if (config.axisConfig.useStrb) {
                            s2m_axis_strb_keep := ((io.s2m_data.stream.strb.getZero ## s2m_axis_residual_strb_keep) << s2m_bytes_shift)((2 * config.axisConfig.strbType.getWidth - 1) downto config.axisConfig.strbType.getWidth)
                        } else {
                            s2m_axis_strb_keep := strb_full.getZero
                        }
                    }.otherwise{
                        s2m_axis_data := ((io.s2m_data.stream.data ## s2m_axis_residual_data) << (8 * s2m_bytes_shift)) ((2 * config.axisConfig.dataWidth - 1) downto config.axisConfig.dataWidth)
                        if (config.axisConfig.useKeep) {
                            s2m_axis_strb_keep := ((io.s2m_data.stream.keep_ ## s2m_axis_residual_strb_keep) << s2m_bytes_shift)((2 * config.axisConfig.strbType.getWidth - 1) downto config.axisConfig.strbType.getWidth)
                        } else if (config.axisConfig.useStrb) {
                            s2m_axis_strb_keep := ((io.s2m_data.stream.strb ## s2m_axis_residual_strb_keep) << s2m_bytes_shift)((2 * config.axisConfig.strbType.getWidth - 1) downto config.axisConfig.strbType.getWidth)
                        } else {
                            s2m_axis_strb_keep := strb_full
                        }
                    }

                }
                when(s2m_axis_final_last){
                    s2m_axis_residual_data := 0
                    if (config.axisConfig.useKeep) {
                        s2m_axis_residual_strb_keep := 0
                    } else if (config.axisConfig.useStrb) {
                        s2m_axis_residual_strb_keep := 0
                    } else {
                        s2m_axis_residual_strb_keep := 0
                    }
                }.otherwise{
                    s2m_axis_residual_data := io.s2m_data.stream.data
                    if (config.axisConfig.useKeep) {
                        s2m_axis_residual_strb_keep := io.s2m_data.stream.keep_
                    } else if (config.axisConfig.useStrb) {
                        s2m_axis_residual_strb_keep := io.s2m_data.stream.strb
                    } else {
                        s2m_axis_residual_strb_keep := strb_full
                    }
                    s2m_axis_trans_bytes := s2m_axis_trans_bytes - config.axisConfig.bytePerWord
                }

                when(io.s2m_data.stream.last || s2m_axis_final_last){
                    s2m_axis_last_cycle := True
                    s2m_axis_final_last := True
                    s2m_axis_valve := False
                }.otherwise{
                    when(s2m_axis_trans_bytes <= config.axisConfig.bytePerWord) {
                        s2m_axis_valve := False
                        s2m_axis_last_cycle := aw_finish
                    }.otherwise {
                        s2m_axis_last_cycle := False
                    }
                }
            }.otherwise {
                s2m_axis_req := False
            }

            /**
             * W Channel Logic
             */
            when(s2m_axis_req || s2m_axis_last_cycle) {
                s2m_w_len := s2m_w_len - 1
                s2m_w_valid := True

                when(s2m_axis_last_cycle && s2m_w_len === 0 && aw_finish){
                    s2m_w_strb := s2m_axis_strb_keep & s2m_w_final_mask
                    s2m_w_data := s2m_axis_data
                }.otherwise{
                    s2m_w_strb := s2m_axis_strb_keep
                    s2m_w_data := s2m_axis_data
                }

                when(s2m_w_len === 0) {
                    s2m_w_last := True
                    s2m_w_state := aw_finish ? BDMAs2mStates.DROP | BDMAs2mStates.REQ
                    pending_fifo_pop_ready := ~aw_finish
                }.otherwise{
                    s2m_w_last := False
                }
            }.otherwise {
                s2m_w_valid := False
            }
        }

        is(BDMAs2mStates.DROP) {
            s2m_w_valid := False
            when(s2m_axis_final_last || (io.s2m_data.stream.last && io.s2m_data.stream.fire)){
                s2m_w_state := BDMAs2mStates.IDLE
                s2m_axis_leak := False
            }.otherwise{
                s2m_axis_leak := True
            }
        }


    }

    /**
     * Stream to W Channel Connections
     */
    trans_pending_fifo.io.pop.ready := pending_fifo_pop_ready
    len_pending_fifo.io.pop.ready := pending_fifo_pop_ready

    if (config.axis4LastEn) {
        io.s2m_data.stream.ready := (s2m_axis_valve && (s2m_w_fifo.io.availability > 2)) || s2m_axis_leak
    } else {
        io.s2m_data.stream.ready := s2m_axis_valve && (s2m_w_fifo.io.availability > 2)
    }

    io.dma_b.ready := True
    s2m_w_fifo.io.push.valid := s2m_w_valid
    s2m_w_fifo.io.push.last := s2m_w_last
    s2m_w_fifo.io.push.data := s2m_w_data
    s2m_w_fifo.io.push.strb := s2m_w_strb
    io.dma_w << s2m_w_fifo.io.pop

    when(s2m_cch_state === BDMAcchStates.IDLE) {
        cycle_finished := False
    }.elsewhen(s2m_w_state === BDMAs2mStates.DROP && aw_finish)(
        cycle_finished := True
    )
    io.s2m_intr := cycle_finished
    io.s2m_state := s2m_w_state
}


object BDMAs2mBench {
    def main(args: Array[String]): Unit = {
        val block_dma_config = BDMAConfig(axi4DataWidth = 32)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            defaultClockDomainFrequency = FixedFrequency(100 MHz), targetDirectory = "rtl/BlockDMA").
            generateSystemVerilog(new BDMAs2m(block_dma_config)).printPruned()
    }
}

