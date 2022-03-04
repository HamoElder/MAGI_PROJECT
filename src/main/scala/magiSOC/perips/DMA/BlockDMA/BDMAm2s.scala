package magiSOC.perips.DMA.BlockDMA

import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi.{Axi4Ar, Axi4R}
import utils.bus.AxiStream4.{AxiStream4, AxiStream4X}

object BDMAm2sStates extends SpinalEnum{
    val IDLE, BURST, FINAL = newElement()
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
    val m2s_trans_bytes_fifo = StreamFifo(config.bytesCntDataType, config.axi4AxFifoDepth)
    val m2s_data_fifo = StreamFifo(AxiStream4X(config.axisConfig), 8)

    /**
     * FSM Status
     */
    val m2s_cch_state = Reg(BDMAcchStates()) init(BDMAcchStates.IDLE)
    val m2s_r_state = Reg(BDMAm2sStates()) init(BDMAm2sStates.IDLE)

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
    val m2s_bytes_shift = Reg(UInt(config.axi4Size bits)) init(0)

    switch(m2s_cch_state){
        is(BDMAcchStates.IDLE){
            when(io.m2s_cch.fire){
                cch_ready := False
                m2s_bytes_shift := io.m2s_cch.desc_start_addr(config.axi4LowAddrRange)
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
                m2s_bytes_shift := 0
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

    m2s_trans_bytes_fifo.io.push.valid := m2s_ar_valid
    m2s_trans_bytes_fifo.io.pop.ready := io.dma_ar.fire
    m2s_trans_bytes_fifo.io.push.payload := trans_bytes_cnt

    /**
     * OutStanding Support
     */
    val keep_strb_full = Bits((1 << config.axi4Size) bits).setAll()

    val len_pending_fifo = StreamFifo(config.axi4Config.lenType, config.axi4OutstandingDepth)
    val id_pending_fifo = if(config.axisConfig.useID) StreamFifo(config.axisConfig.idType, config.axi4OutstandingDepth) else null
    val trans_pending_fifo = StreamFifo(config.bytesCntDataType, config.axi4OutstandingDepth)

    val pending_valid = Reg(Bool()) init(False)
    val len_pending = Reg(config.axi4Config.lenType)
    val trans_pending = Reg(config.bytesCntDataType)
    val id_pending = if(config.axisConfig.useID)  Reg(config.axisConfig.idType) else null

    when(io.dma_ar.fire){
        len_pending := io.dma_ar.len
        pending_valid := True
        trans_pending := m2s_trans_bytes_fifo.io.pop.payload
        if(config.axisConfig.useID){
            id_pending := m2s_ar_fifo.io.pop.id
        }
    }.otherwise{
        pending_valid := False
    }

    len_pending_fifo.io.push.valid := pending_valid
    len_pending_fifo.io.push.payload := len_pending

    trans_pending_fifo.io.push.valid := pending_valid
    trans_pending_fifo.io.push.payload :=trans_pending


    if(config.axisConfig.useID){
        id_pending_fifo.io.push.valid := pending_valid
        id_pending_fifo.io.push.payload := id_pending
    }

    io.dma_ar << m2s_ar_fifo.io.pop.haltWhen(len_pending_fifo.io.occupancy >= config.outStandingLen)

    /**
     * Memory to Stream Read Channel Reg
     */
    val ar_finish = (~len_pending_fifo.io.pop.valid) && (m2s_cch_state === BDMAcchStates.HALT) && (~m2s_ar_fifo.io.pop.valid)
    val pending_fifo_pop_ready = Reg(Bool()) init(False)

    val m2s_r_valve = Reg(Bool()) init(False)

    val m2s_r_payload = Reg(config.axisConfig.dataType)
    val m2s_r_residual_payload = Reg(config.axisConfig.dataType)
    val m2s_r_req = Reg(Bool()) init(False)
    val m2s_r_first = Reg(Bool()) init(False)
    val m2s_r_len = Reg(config.axi4Config.lenType)
    val m2s_r_last_cycle = Reg(Bool()) init(False)

    val m2s_axis_payload = Reg(config.axisConfig.dataType)
    val m2s_axis_strb_keep = Reg(config.axisConfig.strbType)
    val m2s_axis_valid = Reg(Bool()) init(False)
    val m2s_axis_last = Reg(Bool()) init(False)
    val m2s_axis_low_bytes = Reg(UInt(config.axi4Size bits))
    val m2s_axis_id = if(config.axisConfig.useID) Reg(config.axisConfig.idType) else null
    val m2s_axis_trans_bytes = Reg(config.bytesCntDataType) init(0)


    switch(m2s_r_state){
        is(BDMAm2sStates.IDLE){
            when(len_pending_fifo.io.pop.fire){
                m2s_r_valve := True
                pending_fifo_pop_ready := False
                m2s_r_len := len_pending_fifo.io.pop.payload
                if(config.axisConfig.useID){
                    m2s_axis_id := id_pending_fifo.io.pop.payload
                }
                m2s_axis_trans_bytes := m2s_axis_trans_bytes + trans_pending_fifo.io.pop.payload
                m2s_r_state := BDMAm2sStates.BURST
            }.otherwise{
                m2s_r_valve := False
                pending_fifo_pop_ready := True
            }
            m2s_axis_valid := False
            m2s_axis_last := False
            m2s_r_req := False
            m2s_r_last_cycle := False
        }
        is(BDMAm2sStates.BURST){
            when(m2s_r_req){
                when(m2s_axis_trans_bytes < config.axisConfig.bytePerWord){
                    m2s_axis_trans_bytes := 0
                    m2s_axis_strb_keep := (keep_strb_full >> (config.axisConfig.bytePerWord - m2s_axis_trans_bytes(config.axi4LowAddrRange))).resized
                }.otherwise{
                    m2s_axis_trans_bytes := m2s_axis_trans_bytes - config.axisConfig.bytePerWord
                    m2s_axis_strb_keep := keep_strb_full
                }

                m2s_axis_valid := True
                m2s_axis_payload := m2s_r_payload
                when(m2s_r_last_cycle){
                    pending_fifo_pop_ready := ~ar_finish
                    m2s_r_state := ar_finish ? BDMAm2sStates.FINAL | BDMAm2sStates.IDLE
                    m2s_axis_last := ar_finish && (m2s_axis_trans_bytes <= config.axisConfig.bytePerWord)
                }
            }.otherwise{
                m2s_axis_valid := False
            }

            when(io.dma_r.fire){
                m2s_r_first := True
                m2s_r_len := m2s_r_len - 1
                m2s_r_residual_payload := io.dma_r.data
                when(~m2s_r_first&& (m2s_r_len === 0)){
                    m2s_r_payload := (io.dma_r.data >> (8 * m2s_bytes_shift)).resized
                }.otherwise{
                    m2s_r_payload := ((io.dma_r.data ## m2s_r_residual_payload) >> (8 * m2s_bytes_shift)).resized
                }

                when(m2s_r_len === 0){
                    m2s_r_last_cycle := True
                    m2s_r_valve := False
                    m2s_r_req := True
                }.otherwise{
                    m2s_r_req := m2s_r_first
                }
            }.otherwise{
                m2s_r_req := False
            }
        }

        is(BDMAm2sStates.FINAL){
            m2s_r_first := False
            when(m2s_axis_trans_bytes =/= 0){
                m2s_axis_trans_bytes := 0
                m2s_axis_strb_keep := (keep_strb_full >> (config.axisConfig.bytePerWord - m2s_axis_trans_bytes(config.axi4LowAddrRange))).resized
                m2s_axis_payload := ((m2s_axis_payload.getZero ## m2s_r_residual_payload) >> (8 * m2s_bytes_shift)).resized
                m2s_axis_last := True
                m2s_axis_valid := True
            }.otherwise{
                m2s_axis_valid := False
                m2s_axis_last := False
            }
            pending_fifo_pop_ready := True
            m2s_r_state := BDMAm2sStates.IDLE

        }
    }
    /**
     * R Channel Connections
     */
    io.dma_r.ready := (m2s_data_fifo.io.availability > 2) && m2s_r_valve

    len_pending_fifo.io.pop.ready := pending_fifo_pop_ready
    trans_pending_fifo.io.pop.ready := pending_fifo_pop_ready
    if(config.axisConfig.useID) id_pending_fifo.io.pop.ready := pending_fifo_pop_ready


    m2s_data_fifo.io.push.valid := m2s_axis_valid
    m2s_data_fifo.io.push.data := m2s_axis_payload

    m2s_data_fifo.io.push.setID(m2s_axis_id)
    m2s_data_fifo.io.push.setStrb(m2s_axis_strb_keep)
    m2s_data_fifo.io.push.setKeep(m2s_axis_strb_keep)
    m2s_data_fifo.io.push.setLast(m2s_axis_last)

    io.m2s_data.stream << m2s_data_fifo.io.pop

    when(m2s_cch_state === BDMAcchStates.IDLE){
        cycle_finished := False
    }.elsewhen(m2s_data_fifo.io.pop.last && m2s_data_fifo.io.pop.fire)(
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

