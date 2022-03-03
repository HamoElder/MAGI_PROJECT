package magiSOC.perips.BDMA

import magiSOC.perips.DMA.BlockDMA.{BDMAConfig, BDMAm2s}
import spinal.core.sim._

object BDMAm2sSimApp extends App{
    val r_data = 0x04030201
    val block_dma_config = BDMAConfig(axi4DataWidth = 32)
    SimConfig.withWave.allOptimisation.doSim(new BDMAm2s(block_dma_config)){ dut =>
        dut.clockDomain.forkStimulus(10)
        dut.io.m2s_cch.valid #= false
        dut.io.dma_ar.ready #= true
        dut.io.dma_r.valid #= true
        dut.io.m2s_cch.desc_reset #= false
        dut.io.m2s_data.stream.ready #= true
        dut.io.dma_r.data #= r_data
        dut.clockDomain.waitSampling(10)
        dut.io.m2s_cch.desc_start_addr #= 0x8ff1ef2
        dut.io.m2s_cch.desc_total_bytes #= 255
        dut.io.m2s_cch.desc_burst #= 1
        dut.io.m2s_cch.desc_id #= 3
        dut.io.m2s_cch.valid #= true
        dut.clockDomain.waitSampling(1)
        dut.io.m2s_cch.valid #= false
        for(idx <- 0 until 100){
            dut.io.dma_r.data #= r_data + idx
            //            dut.io.dma_r.valid.randomize()
            //            dut.io.dma_ar.ready.randomize()
            //            dut.io.m2s_data.stream.ready.randomize()
            //            dut.io.m2s_reset.randomize()
            dut.clockDomain.waitSampling(1)
        }
        dut.io.m2s_cch.desc_reset #= true
        dut.clockDomain.waitSampling(1)
        dut.io.m2s_cch.desc_reset #= false

        /**
         * Next Round
         */
        dut.clockDomain.waitSampling(5)
        dut.io.m2s_cch.valid #= true
        dut.clockDomain.waitSampling(1)
        dut.io.m2s_cch.valid #= false
        for(idx <- 0 until 100){
            dut.io.dma_r.data #= r_data + idx
            //            dut.io.dma_r.valid.randomize()
            //            dut.io.dma_ar.ready.randomize()
            //            dut.io.m2s_data.stream.ready.randomize()
            //            dut.io.m2s_reset.randomize()
            dut.clockDomain.waitSampling(1)
        }
        dut.io.m2s_cch.desc_reset #= true
        dut.clockDomain.waitSampling(1)
        dut.io.m2s_cch.desc_reset #= false
        dut.clockDomain.waitSampling(300)
    }
}



