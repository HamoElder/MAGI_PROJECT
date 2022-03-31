package magiRF.packages.CFO

import Misc.math.Complex
import Misc.math.ZadoffChuSeq.zcSeqGen

import scala.util.Random
import spinal.core.sim._
import magiRF.top.IEEE802_11.IEEE802_11.ltf
import magiRF.top.RFBench.Config.stf


object CFOEstimatorSimApp extends App{
    val cfo_estimator_config = CFOEstimatorConfig(12, 32, 32, 12, 12)

    SimConfig
        .withWave
        .allOptimisation
        .doSim(new CFOEstimator(cfo_estimator_config)){ dut =>
            dut.clockDomain.forkStimulus(5)
            dut.io.rotated_data.valid #= false
            dut.io.rotated_data.cha_i #= 0
            dut.io.rotated_data.cha_q #= 0
            dut.clockDomain.waitSampling(10)

//            val data = Complex(16384, 16384)
//            val data = Complex(128, 128)
//            for(idx <- 0 until 4096){
//                dut.io.rotated_data.valid #= true
//                //            dut.io.raw_data.cha_i #= 512
//                //            dut.io.raw_data.cha_q #= 512
//                val fs = Complex(Math.cos(2 * Math.PI * 0.08991321736197408 * idx / 16),
//                    Math.sin(2 * Math.PI * 0.08991321736197408 * idx / 16))
//                val data_shift = data * fs
//                dut.io.rotated_data.cha_i #= (data_shift.re).toInt
//                dut.io.rotated_data.cha_q #= (data_shift.im).toInt
//                dut.clockDomain.waitSampling(1)
//            }
            for(idx <- 0 until 320){
                dut.io.rotated_data.valid #= true
                val raw_data = stf(idx % 32) * 2047
                val fs = Complex(scala.math.cos(2 * scala.math.Pi * 0.075 * idx / 32),
                scala.math.sin(2 * scala.math.Pi * 0.075 * idx / 32))
                val cfo_data = raw_data * fs
                dut.io.rotated_data.cha_i #= cfo_data.re.round
                dut.io.rotated_data.cha_q #= cfo_data.im.round
                dut.clockDomain.waitSampling(1)
            }
            for(idx <- 0 until 800){
                dut.io.rotated_data.valid #= true
                dut.io.rotated_data.cha_i #= (ltf(Random.nextInt().abs % ltf.length).re * 512).toInt
                dut.io.rotated_data.cha_q #= (ltf(Random.nextInt().abs % ltf.length).im * 512).toInt
                dut.clockDomain.waitSampling(1)
            }
            dut.io.rotated_data.valid #= false
            dut.clockDomain.waitSampling(100)
        }
}
