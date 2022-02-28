package magiSOC.perips.DMA.BlockDMA

import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi.{Axi4Ar, Axi4R}
import utils.bus.AxiStream4.{AxiStream4, AxiStream4X}

object BDMAm2sStates extends SpinalEnum{
    val IDLE, BURST = newElement()
}

case class BDMAm2s(config: BDMAConfig) extends Component {
    val io = new Bundle{
        val dma_ar = master(Stream(Axi4Ar(config.axi4Config)))
        val dma_r = slave(Stream(Axi4R(config.axi4Config)))
        val m2s_data = master(AxiStream4(config.axisConfig))
        val m2s_state = out(BDMAm2sStates())
        val m2s_cch = slave(Stream(BDMAControlChannel(config)))
        val m2s_intr = out(Bool())
    }
    noIoPrefix()
    /**
     *  Data Stream Fifo
     */
    val m2s_ar_fifo = StreamFifo(Axi4Ar(config.axi4Config), config.axi4AxFifoDepth)
    val low_addr_fifo = StreamFifo(UInt(config.axi4Size bits), config.axi4AxFifoDepth)
    val low_bytes_fifo = StreamFifo(UInt(config.axi4Size bits), config.axi4AxFifoDepth)
    val m2s_data_fifo = StreamFifo(AxiStream4X(config.axisConfig), config.axis4FifoDepth)

    /**
     * FSM Status
     */
    val m2s_cch_state = Reg(BDMAcchStates()) init(BDMAcchStates.IDLE)
    val m2s_r_state = Reg(BDMAm2sStates()) init(BDMAm2sStates.IDLE)
    val m2s_axis_state = Reg(BDMAm2sStates()) init(BDMAm2sStates.IDLE)

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
     * Memory to Stream Ar Reg
     */
    val m2s_ar_len = Reg(config.axi4Config.lenType)

    val m2s_ar_valid = Reg(Bool()) init(False)
    val m2s_ar_halt_exec = Reg(Bool()) init(False)
    val aligned_address = (cch_address.asBits >> config.axi4Size).resizeLeft(config.axi4Config.addressWidth).asUInt
    val cycle_finished = Reg(Bool()) init(False)

    switch(m2s_cch_state){
        is(BDMAcchStates.IDLE){
            when(io.m2s_cch.fire){
                cch_ready := False
                cch_address := io.m2s_cch.desc_start_addr
                cch_total_bytes := io.m2s_cch.desc_total_bytes
                cch_burst_type := io.m2s_cch.desc_burst
                cch_id := io.m2s_cch.desc_id
                switch(io.m2s_cch.desc_burst){
                    is(0){
                        m2s_cch_state := BDMAcchStates.FIXED_REQ
                    }
                    default{
                        /**
                         * Not Support for Wrap Method.
                         */
                        m2s_cch_state := BDMAcchStates.INCR_REQ
                    }
                }
            }.otherwise{
                cch_ready := True
            }
        }
        is(BDMAcchStates.FIXED_REQ){
            when(cch_total_bytes === 0){
                m2s_cch_state := BDMAcchStates.HALT
            }.elsewhen(m2s_ar_fifo.io.push.fire){
                m2s_ar_halt_exec := False
                cch_total_bytes := (cch_total_bytes - trans_bytes_cnt).resized
            }.otherwise{
                m2s_ar_halt_exec := True
            }

            when(m2s_ar_fifo.io.push.fire){
                m2s_ar_valid := False
            }.elsewhen(m2s_ar_halt_exec){
                m2s_ar_valid := True
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
            m2s_ar_len := ((trans_bytes_cnt + (cch_address & config.axi4AddrOffsetMask) - 1) >> config.axi4Size).resized
        }
        is(BDMAcchStates.INCR_REQ){
            when(cch_total_bytes === 0){
                m2s_cch_state := BDMAcchStates.HALT
            }.elsewhen(m2s_ar_fifo.io.push.fire){
                m2s_ar_halt_exec := False
                cch_address := (cch_address + trans_bytes_cnt).resized
                cch_total_bytes := (cch_total_bytes - trans_bytes_cnt).resized
            }.otherwise{
                m2s_ar_halt_exec := True
            }

            when(m2s_ar_fifo.io.push.fire){
                m2s_ar_valid := False
            }.elsewhen(m2s_ar_halt_exec){
                m2s_ar_valid := True
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
            m2s_ar_len := ((trans_bytes_cnt + (cch_address & config.axi4AddrOffsetMask) - 1) >> config.axi4Size).resized
        }
        is(BDMAcchStates.HALT){
            when(io.m2s_cch.desc_reset && cycle_finished){
                m2s_cch_state := BDMAcchStates.IDLE
            }
        }
    }

    /**
     * Ar Channel Connections
     */
    io.m2s_cch.ready := cch_ready

    m2s_ar_fifo.io.push.valid := m2s_ar_valid
    m2s_ar_fifo.io.push.addr := aligned_address
    m2s_ar_fifo.io.push.id := cch_id
    m2s_ar_fifo.io.push.len := m2s_ar_len
    m2s_ar_fifo.io.push.size := config.axi4Size
    m2s_ar_fifo.io.push.burst := cch_burst_type

    low_addr_fifo.io.push.valid := m2s_ar_valid
    low_addr_fifo.io.push.payload := cch_address(config.axi4LowAddrRange)
    low_addr_fifo.io.pop.ready := io.dma_ar.fire
    low_bytes_fifo.io.push.valid := m2s_ar_valid
    low_bytes_fifo.io.push.payload := ~(trans_bytes_cnt(config.axi4LowAddrRange) + cch_address(config.axi4LowAddrRange)) + 1
    low_bytes_fifo.io.pop.ready := io.dma_ar.fire

    /**
     * OutStanding Support
     */
    val keep_strb_full = Bits((1 << config.axi4Size) bits).setAll()

    val bytes_shift_pending_fifo = StreamFifo(UInt(config.axi4Size bits), config.axi4OutstandingDepth)
    val len_pending_fifo = StreamFifo(config.axi4Config.lenType, config.axi4OutstandingDepth)
    val keep_strb_mask_pending_fifo = StreamFifo(config.axisConfig.strbType, config.axi4OutstandingDepth)
    val keep_strb_pending_fifo = StreamFifo(config.axisConfig.strbType, config.axi4OutstandingDepth)
    val id_pending_fifo = if(config.axisConfig.useID) StreamFifo(config.axisConfig.idType, config.axi4OutstandingDepth) else null

    val pending_valid = Reg(Bool()) init(False)
    val bytes_shift_pending = Reg(UInt(config.axi4Size bits))
    val len_pending = Reg(config.axi4Config.lenType)
    val keep_strb_mask_pending = Reg(config.axisConfig.strbType)
    val id_pending = if(config.axisConfig.useID)  Reg(config.axisConfig.idType) else null
    val keep_strb_pending = Reg(config.axisConfig.strbType)

    when(io.dma_ar.fire){
        len_pending := io.dma_ar.len
        pending_valid := True
        bytes_shift_pending := low_addr_fifo.io.pop.payload
        if(config.endianness == LITTLE){
            if(config.axisConfig.useStrb || config.axisConfig.useKeep){
                keep_strb_pending := (keep_strb_full << low_addr_fifo.io.pop.payload).resized
            }
            keep_strb_mask_pending := (keep_strb_full >> low_bytes_fifo.io.pop.payload).resized
        }else{
            if(config.axisConfig.useStrb || config.axisConfig.useKeep){
                keep_strb_pending := (keep_strb_full >> low_addr_fifo.io.pop.payload).resized
            }
            keep_strb_mask_pending := (keep_strb_full << low_bytes_fifo.io.pop.payload).resized
        }

        if(config.axisConfig.useID){
            id_pending := m2s_ar_fifo.io.pop.id
        }
    }.otherwise{
        pending_valid := False
    }

    len_pending_fifo.io.push.valid := pending_valid
    len_pending_fifo.io.push.payload := len_pending

    keep_strb_mask_pending_fifo.io.push.valid := pending_valid
    keep_strb_mask_pending_fifo.io.push.payload := keep_strb_mask_pending

    bytes_shift_pending_fifo.io.push.valid := pending_valid
    bytes_shift_pending_fifo.io.push.payload := bytes_shift_pending


    keep_strb_pending_fifo.io.push.valid := pending_valid
    keep_strb_pending_fifo.io.push.payload := keep_strb_pending

    if(config.axisConfig.useID){
        id_pending_fifo.io.push.valid := pending_valid
        id_pending_fifo.io.push.payload := id_pending
    }

    io.dma_ar << m2s_ar_fifo.io.pop.haltWhen(len_pending_fifo.io.occupancy >= config.outStandingLen)

    /**
     * Memory to Stream Read Channel Reg
     */
    val pending_fifo_pop_ready = Reg(Bool()) init(False)
    val m2s_r_valve = Reg(Bool()) init(False)
    val bytes_shift_fifo = StreamFifo(UInt(config.axi4Size bits), 8)
    val bytes_shift_reg = Reg(UInt(config.axi4Size bits))
    val bytes_shift_valid = Reg(Bool()) init(False)

    val m2s_r_len = Reg(config.axi4Config.lenType)
    val m2s_r_id = if(config.axisConfig.useID) Reg(config.axisConfig.idType) else null
    val m2s_r_strb_keep = Reg(config.axisConfig.strbType)
    val keep_strb_mask = Reg(Bits(config.axi4Config.bytePerWord bits))

    switch(m2s_r_state){
        is(BDMAm2sStates.IDLE){
            when(len_pending_fifo.io.pop.fire){
                m2s_r_valve := True
                pending_fifo_pop_ready := False
                m2s_r_len := len_pending_fifo.io.pop.payload
                keep_strb_mask := keep_strb_mask_pending_fifo.io.pop.payload
                if(config.axisConfig.useID){
                    m2s_r_id := id_pending_fifo.io.pop.payload
                }
                if(config.axisConfig.useStrb || config.axisConfig.useKeep){
                    m2s_r_strb_keep := keep_strb_pending_fifo.io.pop.payload
                }
                bytes_shift_reg := bytes_shift_pending_fifo.io.pop.payload
                bytes_shift_valid := True
                m2s_r_state := BDMAm2sStates.BURST
            }.otherwise{
                bytes_shift_valid := False
                m2s_r_valve := False
                pending_fifo_pop_ready := True
            }
        }
        is(BDMAm2sStates.BURST){
            when(io.dma_r.fire){
                m2s_r_len := m2s_r_len - 1
                if(config.axisConfig.useKeep || config.axisConfig.useStrb){
                    m2s_r_strb_keep := keep_strb_full
                }
                when(m2s_r_len === 0){
                    m2s_r_valve := False
                    pending_fifo_pop_ready := True
                    m2s_r_state := BDMAm2sStates.IDLE
                }
            }
            bytes_shift_valid := False
        }
    }
    /**
     * R Channel Connections
     */
    io.dma_r.ready := (m2s_data_fifo.io.availability >= 2) && m2s_r_valve

    len_pending_fifo.io.pop.ready := pending_fifo_pop_ready
    keep_strb_mask_pending_fifo.io.pop.ready := pending_fifo_pop_ready
    bytes_shift_pending_fifo.io.pop.ready := pending_fifo_pop_ready
    bytes_shift_fifo.io.push.valid := bytes_shift_valid
    bytes_shift_fifo.io.push.payload := bytes_shift_reg

    if(config.axisConfig.useID) id_pending_fifo.io.pop.ready := pending_fifo_pop_ready
    keep_strb_pending_fifo.io.pop.ready := pending_fifo_pop_ready

    m2s_data_fifo.io.push.valid := io.dma_r.valid && m2s_r_valve
    m2s_data_fifo.io.push.data := io.dma_r.data

    m2s_data_fifo.io.push.setID(m2s_r_id)
    m2s_data_fifo.io.push.setStrb((m2s_r_len === 0) ? (keep_strb_mask & m2s_r_strb_keep) | m2s_r_strb_keep)
    m2s_data_fifo.io.push.setKeep((m2s_r_len === 0) ? (keep_strb_mask & m2s_r_strb_keep) | m2s_r_strb_keep)
    m2s_data_fifo.io.push.setLast((m2s_r_len === 0) && (~len_pending_fifo.io.pop.valid) && (m2s_cch_state === BDMAcchStates.HALT))


    /**
     * Bubble Remove
     */
    val m2s_axis_data_fifo_pop_ready = Reg(Bool()) init(False)
    val m2s_axis_shift_fifo_pop_ready = Reg(Bool()) init(False)
    val m2s_axis_fifo = StreamFifo(AxiStream4X(config.axisConfig), 8)
    val m2s_bytes_shift = Reg(UInt(config.axi4Size bits))

    val m2s_axis_valid = Reg(Bool()) init(False)
    val m2s_axis_final = Reg(Bool()) init(False)
    val m2s_axis_last = Reg(Bool()) init(False)
    val m2s_axis_id = if(config.axisConfig.useID) Reg(config.axisConfig.idType) else null
    val m2s_axis_strb_keep = Reg(config.axisConfig.strbType)
    val m2s_axis_residual_strb_keep = Reg(config.axisConfig.strbType)
    val m2s_axis_data = Reg(config.axisConfig.dataType)
    val m2s_axis_residual_data = Reg(config.axisConfig.dataType)
    val m2s_axis_valid_next = Reg(Bool()) init(False)

    switch(m2s_axis_state){
        is(BDMAm2sStates.IDLE){
            when(bytes_shift_fifo.io.pop.fire){
                m2s_axis_shift_fifo_pop_ready := False
                m2s_bytes_shift := bytes_shift_fifo.io.pop.payload
                m2s_axis_data_fifo_pop_ready := True
                m2s_axis_state := BDMAm2sStates.BURST
            }.otherwise{
                m2s_axis_shift_fifo_pop_ready := True
                m2s_axis_data_fifo_pop_ready := False
            }
            m2s_axis_final := False
            m2s_axis_valid_next := False
            m2s_axis_valid := False
            m2s_axis_last := False
        }
        is(BDMAm2sStates.BURST){
            when(m2s_axis_final && io.m2s_data.stream.ready){
                m2s_axis_data := ((m2s_axis_residual_data.getZero ## m2s_axis_residual_data) >> (8 * m2s_bytes_shift)).resized
                m2s_axis_state := BDMAm2sStates.IDLE
                m2s_axis_strb_keep := ((config.axisConfig.strbType.getZero ## m2s_axis_residual_strb_keep) >> m2s_bytes_shift).resized

                m2s_axis_valid := True
                m2s_axis_last := True
                m2s_axis_shift_fifo_pop_ready := True
            }.elsewhen(m2s_data_fifo.io.pop.fire){
                m2s_axis_valid_next := True
                m2s_axis_valid := m2s_axis_valid_next

                m2s_axis_id := m2s_data_fifo.io.pop.id
                m2s_axis_residual_data := m2s_data_fifo.io.pop.data
                m2s_axis_data := ((m2s_data_fifo.io.pop.data ## m2s_axis_residual_data) >> (8 * m2s_bytes_shift)).resized
                if(config.axisConfig.useStrb || config.axisConfig.useKeep){
                    m2s_axis_residual_strb_keep := m2s_data_fifo.io.pop.keep_
                    m2s_axis_strb_keep := ((m2s_data_fifo.io.pop.keep_ ## m2s_axis_residual_strb_keep) >> m2s_bytes_shift).resized
                }
                when(m2s_data_fifo.io.pop.last){
                    when((m2s_data_fifo.io.pop.keep_ >> m2s_bytes_shift) === 0){
                        m2s_axis_state := BDMAm2sStates.IDLE
                        m2s_axis_valid := True
                        m2s_axis_last := True
                        m2s_axis_shift_fifo_pop_ready := True
                    }.otherwise{
                        m2s_axis_final := True
                    }
                    m2s_axis_data_fifo_pop_ready := False
                }.otherwise{
                    m2s_axis_data_fifo_pop_ready := True
                }
            }.otherwise{
                m2s_axis_valid := False
            }

        }
    }
    m2s_axis_fifo.io.push.valid := m2s_axis_valid
    m2s_axis_fifo.io.push.data := m2s_axis_data

    m2s_axis_fifo.io.push.setID(m2s_axis_id)
    m2s_axis_fifo.io.push.setStrb(m2s_axis_strb_keep)
    m2s_axis_fifo.io.push.setKeep(m2s_axis_strb_keep)
    m2s_axis_fifo.io.push.setLast(m2s_axis_last)

    io.m2s_data.stream << m2s_axis_fifo.io.pop
    m2s_data_fifo.io.pop.ready := m2s_axis_data_fifo_pop_ready
    bytes_shift_fifo.io.pop.ready := m2s_axis_shift_fifo_pop_ready

    when(m2s_cch_state === BDMAcchStates.IDLE){
        cycle_finished := False
    }.elsewhen(m2s_axis_fifo.io.pop.last && m2s_axis_fifo.io.pop.fire)(
        cycle_finished := True
    )
    io.m2s_intr := cycle_finished
    io.m2s_state := m2s_r_state
}


object BDMAm2sBench{
    def main(args: Array[String]): Unit = {
        val block_dma_config = BDMAConfig(axi4DataWidth = 32)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            defaultClockDomainFrequency = FixedFrequency(100 MHz), targetDirectory = "rtl/BlockDMA").
            generateSystemVerilog(new BDMAm2s(block_dma_config)).printPruned()
    }
}

