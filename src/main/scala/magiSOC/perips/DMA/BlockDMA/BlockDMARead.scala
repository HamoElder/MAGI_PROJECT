package magiSOC.perips.DMA.BlockDMA

import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi.{Axi4, Axi4Ar, Axi4R}
import utils.bus.AxiStream4.{AxiStream4}

object BDMAReadCCHStates extends SpinalEnum{
    val IDLE, REQ, HALT = newElement()
}

object BDMAReadAxiStates extends SpinalEnum{
    val IDLE, REQ, BURST, FINISH = newElement()
}

case class BlockDMARead(config: BDMAConfig) extends Component {
    val io = new Bundle{
        val dma_ar = master(Stream(Axi4Ar(config.axi4Config)))
        val dma_r = slave(Stream(Axi4R(config.axi4Config)))

//        val m2s_data = master(AxiStream4(config.axisConfig))
        val dma_cch = slave(Stream(DMAControlChannel(config)))

        val intr_m2s = out(Bool())
    }
    noIoPrefix()

    val dma_rd_cch_state = Reg(BDMAReadCCHStates()) init(BDMAReadCCHStates.IDLE)
    val dma_rd_req_fifo = StreamFifo(Axi4Ar(config.axi4Config), depth = 4)
    /**
     * DMA CCH
     */
    val cch_ready = Reg(Bool()) init(False)
    val cch_total_bytes = Reg(config.bytesCntDataType) init(0)

    /**
     * FIFO Ar In
     */
    val fifo_in_id = Reg(config.axi4Config.idType)
    val fifo_in_addr = Reg(config.axi4Config.addressType)
    val fifo_in_len = Reg(config.axi4Config.lenType)
    val fifo_in_size = U(config.axi4BurstSize, 3 bits)
    val fifo_in_burst = Reg(Bits(2 bits))
    val fifo_in_valid = Reg(Bool()) init(False)
    /**
     * CCH Address Request Processing
     */
    switch(dma_rd_cch_state){
        is(BDMAReadCCHStates.IDLE){
            cch_total_bytes := io.dma_cch.desc_total_bytes

            fifo_in_id := io.dma_cch.desc_id
            fifo_in_addr := (io.dma_cch.desc_addr.asBits(config.axi4AddrWidth-1 downto config.axi4BurstSize) ## B(0, config.axi4BurstSize bits)).asUInt
            fifo_in_burst := io.dma_cch.desc_burst
            fifo_in_valid := False

            when(io.dma_cch.fire){
                dma_rd_cch_state := BDMAReadCCHStates.REQ
                cch_ready := False
            }.otherwise{
                cch_ready := True
            }
        }
        is(BDMAReadCCHStates.REQ){
            when(cch_total_bytes <= (config.axi4MaxBurstLen * config.axi4Config.bytePerWord)) {
                // packet smaller than max burst size
                when((fifo_in_addr + cch_total_bytes).asBits(12) =/= fifo_in_addr.asBits(12)){
                    // crosses 4k boundary
                    fifo_in_len := ((config.cross4kBoundaryLimit - (fifo_in_addr & config.cross4kBoundaryMask)) >> config.axi4BurstSize).resized
                }.otherwise{
                    fifo_in_len := (cch_total_bytes |>> config.axi4BurstSize).resized
                }
            }.otherwise{
                // packet larger than max burst size
                when((fifo_in_addr + config.axi4MaxBurstLen * config.axi4Config.bytePerWord).asBits(12) =/= fifo_in_addr.asBits(12) ){
                    // crosses 4k boundary
                    fifo_in_len := ((config.cross4kBoundaryLimit - (fifo_in_addr & config.cross4kBoundaryMask)) >> config.axi4BurstSize).resized
                }.otherwise{
                    fifo_in_len := config.axi4MaxBurstLen
                }
            }

            when(dma_rd_req_fifo.io.push.fire){
                fifo_in_valid := False
//                cch_total_bytes := cch_total_bytes
                fifo_in_addr := fifo_in_addr + fifo_in_len * config.axi4Config.bytePerWord
                dma_rd_cch_state := BDMAReadCCHStates.HALT
            }.otherwise{
                fifo_in_valid := True
            }
        }
        is(BDMAReadCCHStates.HALT){
            when(cch_total_bytes =/= 0 && dma_rd_req_fifo.io.availability =/= 0){
                dma_rd_cch_state := BDMAReadCCHStates.REQ
            }
        }
    }
    /**
     * FIFO Ar In Connection
     */
    dma_rd_req_fifo.io.push.valid := fifo_in_valid
    dma_rd_req_fifo.io.push.id := fifo_in_id
    dma_rd_req_fifo.io.push.addr := fifo_in_addr
    dma_rd_req_fifo.io.push.len := fifo_in_len
    dma_rd_req_fifo.io.push.size := fifo_in_size
    dma_rd_req_fifo.io.push.burst := fifo_in_burst


    val dma_rd_axi_state = Reg(BDMAReadAxiStates()) init(BDMAReadAxiStates.IDLE)
    val fifo_pop_valve = Reg(Bool()) init(False)


    /**
     * DMA Ar Channel
     */

    val r_valve = Reg(Bool()) init(False)
    /**
     * AXI STREAM4 Channel
     */
    val addr_to_strb = Vec(config.axisConfig.strbType, config.axisConfig.bytePerWord)
    for(idx <- 0 until config.axisConfig.bytePerWord){
        if(config.endianness == LITTLE){
            addr_to_strb(idx) := ((BigInt(1) << config.axisConfig.strbType.getWidth) - 1) >> idx << idx
        }else{
            addr_to_strb(idx) := ((BigInt(1) << config.axisConfig.strbType.getWidth) - 1) >> idx
        }
    }

    val m2s_strb = if(config.axis4StrbEn) Reg(config.axisConfig.strbType) else null

    switch(dma_rd_axi_state){
        is(BDMAReadAxiStates.IDLE){
            if(config.axis4StrbEn){
                m2s_strb := addr_to_strb(io.dma_cch.desc_addr.asBits(config.axi4BurstSize - 1 downto 0).asUInt)
            }
            when(dma_rd_req_fifo.io.pop.fire){
                dma_rd_axi_state := BDMAReadAxiStates.BURST
            }
        }
        is(BDMAReadAxiStates.REQ){

        }
        is(BDMAReadAxiStates.BURST){

        }
        is(BDMAReadAxiStates.FINISH){

        }
    }
    /**
     * DMA CCH Connection
     */
    io.dma_cch.ready := cch_ready
    io.intr_m2s := True

    /**
     * AXI4 Connection
     */
    io.dma_ar << dma_rd_req_fifo.io.pop
    io.dma_ar.valid.removeAssignments()
    dma_rd_req_fifo.io.pop.ready.removeAssignments()
    io.dma_ar.valid := dma_rd_req_fifo.io.pop.valid && fifo_pop_valve
    dma_rd_req_fifo.io.pop.ready := io.dma_ar.ready && fifo_pop_valve
//    io.dma_r.ready := io.data_m2s.stream.ready && r_valve
    io.dma_r.ready := True
    /**
     * AXISTREAM4 Connection
     */
//    io.data_m2s.stream.valid := io.dma_r.valid && r_valve
//    io.data_m2s.stream.data := io.dma_r.data
//    io.data_m2s.stream.last := cch_total_bytes === 0
//    if(config.axis4IDEn) {
//        io.data_m2s.stream.id := io.dma_r.id
//    }
//    if(config.axis4StrbEn){
//        io.data_m2s.stream.strb := m2s_strb
//    }
//    if(config.axis4KeepEn){
//        io.data_m2s.stream.keep_ := m2s_strb
//    }
}
