package magiRF.modules.DSP

import magiRF.modules.DSP.CORDIC.{CordicConfig, CordicRotator}
import spinal.core.sim._
import spinal.core._
import spinal.lib._

object CordicRotatorSimApp extends App{

    val cordic_config = CordicConfig(16 exp, -15 exp, 16, false)

    SimConfig
        .withWave
        //        .allOptimisation
        .doSim(new CordicRotator(cordic_config)){ dut =>
            dut.clockDomain.forkStimulus(5)
            dut.io.iter_limit #= 15
            dut.io.rot_mode #= false
            dut.io.w_en #= false
            dut.io.x_u #= 1
            dut.io.raw_data.valid #= false
            dut.io.result.ready #= true
            dut.clockDomain.waitSampling(10)
            dut.io.w_en #= true
            for (idx <- 0 until cordic_config.iterations){
                dut.io.w_addr #= idx
                dut.clockDomain.waitSampling(1)
                dut.io.w_data.raw #= (Math.pow(2, -(idx) ) * ( 1 << 15)).toInt
                dut.clockDomain.waitSampling(1)
            }
            dut.io.w_en #= false
            dut.clockDomain.waitSampling(10)
            dut.io.raw_data.x.raw #= (5 << 15)
            dut.io.raw_data.y.raw #= (3 << 15)
            dut.io.raw_data.z.raw #= (0 << 13)
            dut.io.raw_data.valid #= true
            dut.clockDomain.waitSampling(1)
            for (idx <- 1 until 10){
                dut.io.raw_data.x.raw #= (10 << 15)
                dut.io.raw_data.y.raw #= (idx << 15)
                dut.io.raw_data.z.raw #= (0 << 13)
                dut.clockDomain.waitSampling(1)
            }
            dut.io.raw_data.valid #= false

            dut.clockDomain.waitSampling(100)

        }
}
