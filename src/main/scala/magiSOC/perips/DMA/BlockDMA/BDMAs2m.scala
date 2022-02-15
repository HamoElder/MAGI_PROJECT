package magiSOC.perips.DMA.BlockDMA

import spinal.lib._
import spinal.core._
import spinal.lib.bus.amba4.axi.{Axi4Aw, Axi4B, Axi4W}
import utils.bus.AxiStream4.{AxiStream4, AxiStream4X}

object BDMAs2mStates extends SpinalEnum{
    val IDLE, BURST, RESP = newElement()
}

object BDMAConvertStates extends SpinalEnum{
    val IDLE, CONVERT, DROP = newElement()
}


case class BDMAs2m(config: BDMAConfig) extends Component{
    val io = new Bundle{
        val dma_aw = master(Stream(Axi4Aw(config.axi4Config)))
        val dma_w = master(Stream(Axi4W(config.axi4Config)))
        val dma_b = slave(Stream(Axi4B(config.axi4Config)))

        val s2m_data = slave(AxiStream4(config.axisConfig))
        val s2m_reset = in(Bool())

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
    val s2m_data_fifo = StreamFifo(Axi4W(config.axi4Config), config.axis4FifoDepth)

    /**
     * FSM Status
     */
    val s2m_cch_state = Reg(BDMAcchStates()) init(BDMAcchStates.IDLE)
    val s2m_convert_state = Reg(BDMAConvertStates()) init(BDMAConvertStates.IDLE)
    val s2m_w_state = Reg(BDMAs2mStates()) init(BDMAs2mStates.IDLE)

    /**
     * Axi4 Channel Enable Valve
     */
    val s2m_aw_valve = Reg(Bool()) init(False)
    val s2m_w_valve = Reg(Bool()) init(False)

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
            when(io.s2m_reset && cycle_finished){
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
     * AxiStream4 Data Regroup
     */
    val fifo_push_w_data = Reg(config.axi4Config.dataType)
    val fifo_push_w_strb = Reg(Bits(config.axi4Config.bytePerWord bits))
    val fifo_push_w_last = Reg(Bool()) init(False)
    val fifo_push_w_valid = Reg(Bool()) init(False)
    val fifo_push_w_valve = Reg(Bool()) init(False)

    val w_residual_data = Reg(config.axi4Config.dataType)
    val w_residual_strb = Reg(Bits(config.axi4Config.bytePerWord bits))

    val s2m_axis_len = Reg(config.axi4Config.lenType)

    val strb_mask = Reg(Bits(config.axi4Config.bytePerWord bits))
    val bytes_shift = Reg(UInt(config.axi4Size bits))
    val strb_full = Bits((1 << config.axi4Size) bits).setAll()

    switch(s2m_convert_state){
        is(BDMAConvertStates.IDLE){
            when(io.dma_aw.fire){
                s2m_aw_valve := False
                fifo_push_w_valve := True
                bytes_shift := low_addr_fifo.io.pop.payload
                strb_mask := (strb_full << low_bytes_fifo.io.pop.payload).asBits.resized
                w_residual_strb := 0
                s2m_axis_len := io.dma_aw.len
                s2m_convert_state :=BDMAConvertStates.CONVERT
            }.otherwise{
                s2m_aw_valve := True
                fifo_push_w_valve := False
            }
            fifo_push_w_last := False
            fifo_push_w_valid := False
        }
        is(BDMAConvertStates.CONVERT){
            when(s2m_data_fifo.io.push.fire){

            }
            when(io.s2m_data.stream.fire){
                s2m_axis_len := s2m_axis_len - 1
                if(config.axisConfig.useKeep){
                    fifo_push_w_strb := ((w_residual_strb ## io.s2m_data.stream.keep_) >> bytes_shift).asBits.resized
                    w_residual_strb := io.s2m_data.stream.keep_
                }else if(config.axisConfig.useStrb){
                    fifo_push_w_strb := ((w_residual_strb ## io.s2m_data.stream.strb) >> bytes_shift).asBits.resized
                    w_residual_strb := io.s2m_data.stream.strb
                }else{
                    fifo_push_w_strb := strb_full
                }

                when(s2m_axis_len === 0){
                    fifo_push_w_last := True
                    if(config.axisConfig.useLast){
                        when(s2m_cch_state === BDMAcchStates.HALT && ~s2m_aw_fifo.io.pop.valid){
                            s2m_aw_valve := False
                            fifo_push_w_valve := True
                            s2m_convert_state := io.s2m_data.stream.last ? BDMAConvertStates.IDLE | BDMAConvertStates.DROP
                        }.otherwise{
                            s2m_aw_valve := True
                            fifo_push_w_valve := False
                            s2m_convert_state := BDMAConvertStates.IDLE
                        }
                    }else{
                        s2m_aw_valve := True
                        fifo_push_w_valve := False
                        s2m_convert_state := BDMAConvertStates.IDLE
                    }
                }

                fifo_push_w_valid := True

                fifo_push_w_data := ((w_residual_data ## io.s2m_data.stream.data) >> bytes_shift).asBits.resized
                w_residual_data := io.s2m_data.stream.data
            }.otherwise{
                fifo_push_w_valid := False
            }
        }
        is(BDMAConvertStates.DROP){
            when(io.s2m_data.stream.fire && io.s2m_data.stream.last){
                s2m_convert_state := BDMAConvertStates.IDLE
            }
            fifo_push_w_last := False
            fifo_push_w_valid := False
        }
    }

    /**
     * Stream to W Channel Connections
     */
    io.s2m_data.stream.ready := s2m_data_fifo.io.push.ready && fifo_push_w_valve
    s2m_data_fifo.io.push.valid := fifo_push_w_valid && fifo_push_w_valve
    s2m_data_fifo.io.push.data := fifo_push_w_data
    s2m_data_fifo.io.push.last := fifo_push_w_last
    s2m_data_fifo.io.push.strb := (s2m_axis_len === 0) ? (strb_mask & fifo_push_w_strb) | fifo_push_w_strb

    /**
     * Stream to Memory Write Channel Reg
     */
    val b_ready = Reg(Bool()) init(False)
    switch(s2m_w_state){
        is(BDMAs2mStates.IDLE){
            when(s2m_data_fifo.io.pop.valid){
                s2m_w_state := BDMAs2mStates.BURST
                s2m_w_valve := True
            }
            b_ready := False
        }
        is(BDMAs2mStates.BURST){
            when(io.dma_w.last && io.dma_w.fire){
                s2m_w_state := BDMAs2mStates.RESP
                s2m_w_valve := False
                b_ready := True
            }
        }
        is(BDMAs2mStates.RESP){
            when(io.dma_b.fire){
                b_ready := False
                s2m_w_state := BDMAs2mStates.IDLE
            }
        }
    }

    /**
     * W channel Connections
     */
    io.dma_w << s2m_data_fifo.io.pop.haltWhen(~s2m_w_valve)
    io.dma_b.ready := b_ready
    when(s2m_cch_state === BDMAcchStates.IDLE){
        cycle_finished := False
    }.elsewhen(s2m_w_state === BDMAs2mStates.IDLE && s2m_cch_state === BDMAcchStates.HALT && ~s2m_data_fifo.io.pop.valid && ~s2m_aw_fifo.io.pop.valid)(
        cycle_finished := True
    )
    io.s2m_intr := cycle_finished
}


object BDMAs2mBench{
    def main(args: Array[String]): Unit = {
        val block_dma_config = BDMAConfig(axi4DataWidth = 32)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            defaultClockDomainFrequency = FixedFrequency(100 MHz), targetDirectory = "rtl/BlockDMA").
            generateSystemVerilog(new BDMAs2m(block_dma_config)).printPruned()
    }
}


object BDMAs2mSimApp extends App{
    import spinal.core.sim._
    val block_dma_config = BDMAConfig(axi4DataWidth = 32)
    SimConfig.withWave.allOptimisation.doSim(new BDMAs2m(block_dma_config)){ dut =>
        dut.clockDomain.forkStimulus(5)
        dut.io.s2m_cch.valid #= false
        dut.io.dma_aw.ready #= true
        dut.io.dma_w.ready #= true
        dut.io.s2m_reset #= false
        dut.io.s2m_data.stream.valid #= false
        dut.io.s2m_data.stream.last #= false
        dut.clockDomain.waitSampling(10)
        dut.io.s2m_cch.desc_start_addr #= 0x8ff1ef1
        dut.io.s2m_cch.desc_total_bytes #= 0x226
        dut.io.s2m_cch.desc_burst #= 1
        dut.io.s2m_cch.desc_id #= 3
        dut.io.s2m_cch.valid #= true
        dut.clockDomain.waitSampling(1)
        dut.io.s2m_cch.valid #= false
        for(idx <- 0 until 500){
            dut.io.s2m_data.stream.valid #= true
            dut.io.s2m_data.stream.strb #= 7
            dut.io.s2m_data.stream.data #= idx
            dut.io.s2m_data.stream.last #= false
            //            dut.io.dma_r.valid.randomize()
            //            dut.io.dma_ar.ready.randomize()
            //            dut.io.m2s_data.stream.ready.randomize()
            //            dut.io.m2s_reset.randomize()
            dut.clockDomain.waitSampling(1)
        }
        dut.io.s2m_data.stream.valid #= true
        dut.io.s2m_data.stream.strb #= 7
        dut.io.s2m_data.stream.data #= 255
        dut.io.s2m_data.stream.last #= true
        dut.io.s2m_reset #= true
        dut.clockDomain.waitSampling(1)
        dut.io.s2m_data.stream.valid #= false
        dut.io.s2m_reset #= false
        dut.clockDomain.waitSampling(500)
    }
}


