package magiSOC.perips.DMA.BlockDMA

import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi.{Axi4, Axi4Ar, Axi4R}

object BDMAReadStates extends SpinalEnum{
    val IDLE, REQ, BURST, FINISH = newElement()
}

case class BlockDMARead(config: Axi4BlockDMAConfig) extends Component {
    val io = new Bundle{
        val dma_ar = master(Stream(Axi4Ar(config.axi4Config)))
        val dma_r = slave(Stream(Axi4R(config.axi4Config)))

        val data_m2s = master(Stream(Axi4R(config.axi4Config)))

        val dma_cch = slave(Stream(DMAControlChannel(config)))

        val intr_m2s = out(Bool())
    }
    noIoPrefix()

    val dma_rd_state = Reg(BDMAReadStates()) init(BDMAReadStates.IDLE)
    /**
     * DMA Ar Channel
     */
    val ar_id = Reg(config.axi4Config.idType)
    val ar_addr = Reg(config.axi4Config.idType)
    val ar_len = Reg(config.axi4Config.lenType)
    val ar_size = B(config.axi4BurstSize, 3 bits)

    val ar_burst = Reg(Bits(2 bits)) init(Axi4.burst.INCR)
    val ar_valid = Reg(Bool()) init(False)

    /**
     * DMA Read Channel
     */
    val r_ready = Reg(Bool()) init(False)

    /**
     * DMA CCH
     */
    val cch_ready = Reg(Bool()) init(False)
    val cch_total_bytes = Reg(config.lenDataType) init(0)
    val cch_intr_en = Reg(Bool()) init(False)

    /**
     * AXI STREAM4 Channel
     */

    switch(dma_rd_state){
        is(BDMAReadStates.IDLE){
            ar_id := io.dma_cch.desc_id
            ar_addr := io.dma_cch.desc_addr
            ar_burst := io.dma_cch.desc_burst
            ar_valid := False
            cch_total_bytes := io.dma_cch.desc_total_bytes
            cch_intr_en := io.dma_cch.intr_en
            when(io.dma_cch.fire){
                dma_rd_state := BDMAReadStates.REQ
                cch_ready := False
            }.otherwise{
                cch_ready := True
            }
        }
        is(BDMAReadStates.REQ){
            when(cch_total_bytes <= config.axi4MaxBurstLen) {
                // packet smaller than max burst size
                ar_len := cch_total_bytes
            }.otherwise{
                // packet larger than max burst size
                ar_len := config.axi4MaxBurstLen
            }
            ar_len := config.axi4MaxBurstLen
            when(io.dma_ar.fire){
                ar_valid := False
                dma_rd_state := BDMAReadStates.BURST
            }.otherwise{
                ar_valid := True
            }
        }
        is(BDMAReadStates.BURST){
            when(io.dma_r.fire){

            }
        }
        is(BDMAReadStates.FINISH){

        }
    }



}
