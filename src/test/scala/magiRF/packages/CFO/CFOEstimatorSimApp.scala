package magiRF.packages.CFO

import Misc.math.Complex

import scala.util.Random
import spinal.core.sim._
import magiRF.top.IEEE802_11.IEEE802_11.{ltf, stf}


object CFOEstimatorSimApp extends App{
    val cfo_estimator_config = CFOEstimatorConfig(16, 16, 16, 16)
    SimConfig
        .withWave
        .allOptimisation
        .doSim(new CFOEstimator(cfo_estimator_config)){ dut =>
            dut.clockDomain.forkStimulus(5)
            dut.io.rotated_data.valid #= false
            dut.clockDomain.waitSampling(10)
//            for(idx <- 0 until 1600){
//                dut.io.rotated_data.valid #= true
//                dut.io.rotated_data.cha_i #= (ltf(Random.nextInt().abs % ltf.length).re * 512).toInt
//                dut.io.rotated_data.cha_q #= (ltf(Random.nextInt().abs % ltf.length).im * 512).toInt
//                dut.clockDomain.waitSampling(1)
//            }
            for(idx <- 0 until 1600){
                dut.io.rotated_data.valid #= true
                val raw_data = stf(idx % 160) * 2048

                val fs = Complex(Math.cos(idx.toDouble/320.0* 2.0* Math.PI), Math.sin(idx.toDouble/320.0* 2.0* Math.PI))
                val cfo_data = raw_data*fs
                dut.io.rotated_data.cha_i #= cfo_data.re.toInt
                dut.io.rotated_data.cha_q #= cfo_data.im.toInt
                dut.clockDomain.waitSampling(1)
            }
//            for(idx <- 0 until 1600){
//                dut.io.rotated_data.valid #= true
//                dut.io.rotated_data.cha_i #= (ltf(Random.nextInt().abs % ltf.length).re * 512).toInt
//                dut.io.rotated_data.cha_q #= (ltf(Random.nextInt().abs % ltf.length).im * 512).toInt
//                dut.clockDomain.waitSampling(1)
//            }
            dut.io.rotated_data.valid #= false
            dut.clockDomain.waitSampling(100)
        }
}
