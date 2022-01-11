package magiRF.packages.CDMA

import magiRF.packages.CDMA.Despreador.CDMADespreading
import spinal.core.sim._

object CDMADespreadingSimApp extends App{

    val walsh_8_order = Seq[BigInt](0xff, 0xaa, 0xcc, 0x99, 0xf0, 0xa5, 0xc3, 0x96)
    SimConfig.withWave.allOptimisation.doSim(new CDMADespreading(16, 8, 8, true, walsh_8_order)){ dut =>
        dut.clockDomain.forkStimulus(10)
        dut.clockDomain.reset
        dut.io.clc #= true
        dut.io.w_en #= false
        dut.io.cnt_limit #= 7
        dut.io.mod_iq.valid #= false
        dut.io.mod_iq.payload.cha_i #= 0
        dut.io.mod_iq.payload.cha_q #= 0
        dut.clockDomain.waitSampling(1)
        dut.io.w_en #= true
        for(idx <- 0 until 8){
            dut.io.w_addr #= idx
            dut.io.w_data #= walsh_8_order(idx)
            dut.clockDomain.waitSampling(1)
        }
        dut.io.w_en #= false
        dut.clockDomain.waitSampling(10)
        dut.io.clc #= false
        for(idx <- 0 until 96){
            dut.io.mod_iq.valid #= true
//            dut.io.mod_iq.valid.randomize()
            dut.io.mod_iq.payload.cha_i #= idx
            dut.io.mod_iq.payload.cha_q #= idx + 1
            dut.clockDomain.waitSampling(1)
        }
        dut.io.mod_iq.valid #= false
        dut.clockDomain.waitSampling(20)
        dut.io.clc #= true
        dut.clockDomain.waitSampling(50 )
    }
}
