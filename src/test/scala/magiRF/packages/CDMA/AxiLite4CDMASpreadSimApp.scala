package magiRF.packages.CDMA

import magiRF.packages.CDMA.Spreador.{AxiLite4CDMASpread, AxiLite4CDMASpreadConfig}
import utils.bus.AxiLite.sim.AxiLite4Driver
import spinal.core.sim._

object AxiLite4CDMASpreadSimApp extends App{

    val walsh_8_order = Seq[BigInt](0xff, 0xaa, 0xcc, 0x99, 0xf0, 0xa5, 0xc3, 0x96)
    val axiLite4_cdma_spreading_config = AxiLite4CDMASpreadConfig(16, 8, 8, 32, true)
    SimConfig.withWave.allOptimisation.doSim(new AxiLite4CDMASpread(axiLite4_cdma_spreading_config)){ dut =>
        dut.clockDomain.forkStimulus(5)
        dut.rfClockDomain.forkStimulus(3)

        val aliteDrv = AxiLite4Driver(dut.io.axil4Ctrl, dut.clockDomain)
        aliteDrv.reset()
        aliteDrv.write(0x00, 0x3)
        aliteDrv.write(0x0c, 0x7)
        dut.io.base_iq.valid #= false
        for(cha <- 0 until 8){
            dut.io.base_iq.payload(cha).cha_i #= 0
            dut.io.base_iq.payload(cha).cha_q #= 0
        }
        for(idx <- 0 until 8){
            aliteDrv.write(0x04, idx)
            aliteDrv.write(0x08, walsh_8_order(idx))
        }
        aliteDrv.write(0x00, 0x0)
        dut.rfClockDomain.waitSampling(10)

        for(idx <- 1 until 100){
            dut.io.base_iq.valid #= true
            //            dut.io.base_iq.valid.randomize()
            for(cha <- 0 until 8){
                dut.io.base_iq.payload(cha).cha_i #= idx + cha
                dut.io.base_iq.payload(cha).cha_q #= idx + cha + 1
            }
            dut.rfClockDomain.waitSampling(1)
        }
        dut.io.base_iq.valid #= false
        dut.rfClockDomain.waitSampling(20)
        aliteDrv.write(0x00, 0x1)
        dut.rfClockDomain.waitSampling(30 )
    }
}


