package magiRF.packages.CDMA

import magiRF.packages.CDMA.Despreador.{AxiLite4CDMADespread, AxiLite4CDMADespreadConfig}
import utils.bus.AxiLite.sim.AxiLite4Driver
import spinal.core.sim._

object AxiLite4CDMADespreadSimApp extends App{
    val walsh_8_order = Seq[BigInt](0xff, 0xaa, 0xcc, 0x99, 0xf0, 0xa5, 0xc3, 0x96)
    val axiLite4_cdma_despread_config = AxiLite4CDMADespreadConfig(16, 8, 8, 32, true, walsh_8_order)
    SimConfig.withWave.allOptimisation.doSim(new AxiLite4CDMADespread(axiLite4_cdma_despread_config)) { dut =>
        dut.clockDomain.forkStimulus(5)
        dut.rfClockDomain.forkStimulus(3)
        dut.clockDomain.reset
        val aliteDrv = AxiLite4Driver(dut.io.axil4Ctrl, dut.clockDomain)
        aliteDrv.reset()
        aliteDrv.write(0x00, 0x3)
        aliteDrv.write(0x0c, 0x7)
        dut.io.mod_iq.valid #= false
        dut.io.mod_iq.payload.cha_i #= 0
        dut.io.mod_iq.payload.cha_q #= 0
        for(idx <- 0 until 8){
            aliteDrv.write(0x04, idx)
            aliteDrv.write(0x08, walsh_8_order(idx))
        }
        aliteDrv.write(0x00, 0x0)
        dut.rfClockDomain.waitSampling(10)

        for(idx <- 1 until 100){
            dut.io.mod_iq.valid #= true
            //            dut.io.base_iq.valid.randomize()
            dut.io.mod_iq.payload.cha_i #= idx
            dut.io.mod_iq.payload.cha_q #= idx + 1
            dut.rfClockDomain.waitSampling(1)
        }
        dut.io.mod_iq.valid #= false
        dut.rfClockDomain.waitSampling(50)
        aliteDrv.write(0x00, 0x1)
        dut.rfClockDomain.waitSampling(10 )
    }
}
