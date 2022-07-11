package magiSOC.perips.SGDMA

import magiSOC.perips.DMA.SGDMA.{AxiLite4SGDMA, AxiLite4SGDMAConfig}
import spinal.core.sim._
import utils.bus.AxiLite.sim.AxiLite4Driver


object AxiLite4SGDMASimApp extends App{
    val axil4_sgdma_config = AxiLite4SGDMAConfig()
    SimConfig.withWave.allOptimisation.doSim(new AxiLite4SGDMA(axil4_sgdma_config)) { dut =>
        dut.clockDomain.forkStimulus(5)
        dut.io.axil4SG.ar.ready #= true
        dut.io.axil4SG.r.valid #= true
        dut.io.axil4SG.r.data #= 0x55550406
        dut.io.axi4S2M.aw.ready #= true
        dut.io.axi4M2S.ar.ready #= true
        dut.io.axi4S2M.w.ready #= true
        dut.io.axi4M2S.r.valid #= true
        dut.io.dataM2S.stream.ready #= true
        dut.io.dataS2M.stream.valid #= true
        val aliteDrv = AxiLite4Driver(dut.io.axil4Ctrl, dut.clockDomain)
        aliteDrv.reset()
        aliteDrv.write(0x04, 0x004504)
        aliteDrv.write(0x00,  0x02)
        aliteDrv.write(0x00,  0x01)


        dut.clockDomain.waitSampling(500)
    }
}
