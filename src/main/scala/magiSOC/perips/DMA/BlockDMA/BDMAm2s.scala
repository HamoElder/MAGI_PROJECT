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

    /**
     * Axi4 Channel Enable Valve
     */
    val m2s_ar_valve = Reg(Bool()) init(False)

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

    io.dma_ar << m2s_ar_fifo.io.pop.haltWhen(~m2s_ar_valve)

    low_addr_fifo.io.push.valid := m2s_ar_valid
    low_addr_fifo.io.push.payload := cch_address(config.axi4LowAddrRange)
    low_addr_fifo.io.pop.ready := io.dma_ar.fire
    low_bytes_fifo.io.push.valid := m2s_ar_valid
    low_bytes_fifo.io.push.payload := ~(trans_bytes_cnt(config.axi4LowAddrRange) + cch_address(config.axi4LowAddrRange)) + 1
    low_bytes_fifo.io.pop.ready := io.dma_ar.fire
    /**
     * Memory to Stream Read Channel Reg
     */
    val m2s_r_valve = Reg(Bool()) init(False)

    val m2s_axis_len = Reg(config.axi4Config.lenType)
    val m2s_axis_id = if(config.axisConfig.useID) Reg(config.axisConfig.idType) else null
    val m2s_axis_strb = if(config.axisConfig.useStrb) Reg(config.axisConfig.strbType) else null
    val m2s_axis_keep = if(config.axisConfig.useKeep)Reg(config.axisConfig.keepType) else null

    val keep_strb_mask = Reg(Bits(config.axi4Config.bytePerWord bits))
//    val axis_trans_bytes = Reg(config.bytesCntDataType)
    val keep_strb_full = Bits((1 << config.axi4Size) bits).setAll()
//    val error_probe = Reg(UInt(2 bits)) init(0)
    switch(m2s_r_state){
        is(BDMAm2sStates.IDLE){
            when(io.dma_ar.fire){
                m2s_ar_valve := False
                m2s_r_valve := True
                m2s_axis_len := m2s_ar_fifo.io.pop.len
                if(config.axisConfig.useKeep){
                    m2s_axis_keep := (keep_strb_full >> low_addr_fifo.io.pop.payload).asBits.resized
                }
                if(config.axisConfig.useStrb){
                    m2s_axis_strb := (keep_strb_full >> low_addr_fifo.io.pop.payload).asBits.resized
                }
                keep_strb_mask := (keep_strb_full << low_bytes_fifo.io.pop.payload).asBits.resized
                if(config.axisConfig.useID){
                    m2s_axis_id := m2s_ar_fifo.io.pop.id
                }
                m2s_r_state := BDMAm2sStates.BURST
            }.otherwise{
                m2s_ar_valve := True
                m2s_r_valve := False
            }
        }
        is(BDMAm2sStates.BURST){
            when(io.dma_r.fire){
                m2s_axis_len := m2s_axis_len - 1
                if(config.axisConfig.useKeep){
                    m2s_axis_keep := keep_strb_full
                }
                if(config.axisConfig.useStrb){
                    m2s_axis_strb := keep_strb_full
                }
                when(m2s_axis_len === 0){
                    m2s_r_valve := False
                    m2s_ar_valve := True

                    m2s_r_state := BDMAm2sStates.IDLE
                }

//                when((io.dma_r.isSLVERR()) && io.dma_r.fire){
//                    error_probe := 1
//                }.elsewhen((io.dma_r.isDECERR()) && io.dma_r.fire){
//                    error_probe := 2
//                }.otherwise{
//                    error_probe := 0
//                }
            }
        }
    }
    when(m2s_cch_state === BDMAcchStates.IDLE){
        cycle_finished := False
    }.elsewhen(m2s_data_fifo.io.pop.last && m2s_data_fifo.io.pop.fire)(
        cycle_finished := True
    )
    io.m2s_intr := cycle_finished
    /**
     * R Channel Connections
     */
    m2s_data_fifo.io.push.valid := io.dma_r.valid && m2s_r_valve
    m2s_data_fifo.io.push.data := io.dma_r.data
//    io.m2s_cch.desc_err := error_probe

    m2s_data_fifo.io.push.setID(m2s_axis_id)
    m2s_data_fifo.io.push.setStrb((m2s_axis_len === 0) ? (keep_strb_mask & m2s_axis_strb) | m2s_axis_strb)
    m2s_data_fifo.io.push.setKeep((m2s_axis_len === 0) ? (keep_strb_mask & m2s_axis_strb) | m2s_axis_strb)
    m2s_data_fifo.io.push.last := (m2s_axis_len === 0) && (m2s_ar_fifo.io.pop.valid === False) && (m2s_cch_state === BDMAcchStates.HALT)

    io.dma_r.ready := m2s_data_fifo.io.push.ready && m2s_r_valve

    io.m2s_data.stream << m2s_data_fifo.io.pop
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

