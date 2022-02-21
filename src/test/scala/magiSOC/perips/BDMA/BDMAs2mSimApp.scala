package magiSOC.perips.BDMA

import magiSOC.perips.DMA.BlockDMA.{BDMAConfig, BDMAs2m}
import spinal.core.sim._

object BDMAs2mSimApp extends App{

    val block_dma_config = BDMAConfig(axi4DataWidth = 32)
    SimConfig.withWave.allOptimisation.doSim(new BDMAs2m(block_dma_config)){ dut =>
        dut.clockDomain.forkStimulus(5)
        dut.io.s2m_cch.valid #= false
        dut.io.dma_aw.ready #= true
        dut.io.dma_w.ready #= true
        dut.io.dma_b.valid #= true
        dut.io.s2m_cch.desc_reset #= false
        dut.io.s2m_data.stream.valid #= false
        dut.io.s2m_data.stream.last #= false
        dut.clockDomain.waitSampling(10)
        dut.io.s2m_cch.desc_start_addr #= 0x8ff1ecd
        dut.io.s2m_cch.desc_total_bytes #= 996
        dut.io.s2m_cch.desc_burst #= 1
        dut.io.s2m_cch.desc_id #= 3
        dut.io.s2m_cch.valid #= true
        dut.clockDomain.waitSampling(1)
        dut.io.s2m_cch.valid #= false
        for(idx <- 1 until 255){
            dut.io.s2m_data.stream.strb #= 15
            dut.io.s2m_data.stream.keep_ #= 15
            dut.io.s2m_data.stream.data #= idx + (idx << 8) + (idx << 16)
            dut.io.s2m_data.stream.last #= false
            dut.io.s2m_data.stream.valid #= true
//            dut.io.dma_w.ready.randomize()
//            dut.io.dma_aw.ready.randomize()
//            dut.io.s2m_data.stream.valid.randomize()
//            dut.io.s2m_cch.desc_reset.randomize()
            dut.clockDomain.waitSampling(1)
        }
        dut.io.s2m_data.stream.valid #= true
        dut.io.s2m_data.stream.strb #= 7
        dut.io.s2m_data.stream.data #= 255
        dut.io.s2m_data.stream.last #= true
        dut.io.s2m_cch.desc_reset #= true
        dut.clockDomain.waitSampling(1)
        dut.io.s2m_data.stream.valid #= false
        dut.io.s2m_cch.desc_reset #= false
        dut.clockDomain.waitSampling(500)
    }
}



