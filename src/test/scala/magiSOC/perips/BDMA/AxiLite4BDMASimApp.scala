package magiSOC.perips.BDMA

import magiSOC.perips.DMA.BlockDMA.{AxiLite4BDMA, AxiLite4BDMAConfig}
import spinal.core.sim._

object AxiLite4BDMASimApp extends App{
    val axil4_dma_config = AxiLite4BDMAConfig(axi4DataWidth = 32)
    SimConfig.withWave.allOptimisation.doSim(new AxiLite4BDMA(axil4_dma_config)) { dut =>
        dut.clockDomain.forkStimulus(5)
    }
}
