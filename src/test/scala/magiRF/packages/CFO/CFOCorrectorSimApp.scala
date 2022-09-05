package magiRF.packages.CFO

import Misc.math.Complex
import magiRF.packages.Estimator.CFOEstimator.{CFOCorrector, CFOCorrectorConfig}

import scala.util.Random
import spinal.core.sim._
import magiRF.top.IEEE802_11.IEEE802_11.ltf
import magiRF.top.RFBench.Config.stf


object CFOCorrectorSimApp extends App{
    val cfo_corrector_config = CFOCorrectorConfig(12, stf.length, stf.length, 12, 4, 12)
    SimConfig
        .withWave
        .allOptimisation
        .doSim(new CFOCorrector(cfo_corrector_config)){ dut =>
            dut.clockDomain.forkStimulus(5)
            dut.io.raw_data.valid #= false
//            dut.io.ref_data.cha_i #= 0
//            dut.io.ref_data.cha_q #= 0
            dut.clockDomain.waitSampling(10)
//            for(idx <- 0 until 360){
//                dut.io.raw_data.valid #= true
//                dut.io.raw_data.cha_i #= (ltf(Random.nextInt().abs % ltf.length).re * 1024).toInt
//                dut.io.raw_data.cha_q #= (ltf(Random.nextInt().abs % ltf.length).im * 1024).toInt
//                dut.clockDomain.waitSampling(1)
//            }
            dut.io.enable #= true
            for(idx <- 0 until 2560){
                dut.io.raw_data.valid #= true
                val raw_data = stf(idx % stf.length) * 2047
              val fs = Complex(scala.math.cos(2 * scala.math.Pi * 0.115 * idx / 32),
                scala.math.sin(2 * scala.math.Pi * 0.115 * idx / 32))
                val cfo_data = raw_data * fs
//                dut.io.ref_data.cha_i #= raw_data.re.toInt
//                dut.io.ref_data.cha_q #= raw_data.im.toInt
                dut.io.raw_data.cha_i #= cfo_data.re.toInt
                dut.io.raw_data.cha_q #= cfo_data.im.toInt
                dut.clockDomain.waitSampling(1)
            }
            dut.io.enable #= false
            for(idx <- 0 until 360){
                dut.io.raw_data.valid #= true
                dut.io.raw_data.cha_i #= (ltf(Random.nextInt().abs % ltf.length).re * 1024).toInt
                dut.io.raw_data.cha_q #= (ltf(Random.nextInt().abs % ltf.length).im * 1024).toInt
                dut.clockDomain.waitSampling(1)
            }
            dut.io.raw_data.valid #= false

            dut.clockDomain.waitSampling(100)
        }
}