package magiRF.packages.CFO

import Misc.math.Complex
import scala.util.Random
import spinal.core.sim._
import magiRF.top.IEEE802_11.IEEE802_11.{ltf, stf}


object CFOCorrectorSimApp extends App{
    val cfo_corrector_config = CFOCorrectorConfig(16, 32, 32, 16, 16)
    SimConfig
        .withWave
        .allOptimisation
        .doSim(new CFOCorrector(cfo_corrector_config)){ dut =>
            dut.clockDomain.forkStimulus(5)
            dut.io.raw_data.valid #= false
            dut.clockDomain.waitSampling(10)
//            for(idx <- 0 until 160){
//                dut.io.raw_data.valid #= true
//                dut.io.raw_data.cha_i #= (ltf(Random.nextInt().abs % ltf.length).re * 128).toInt
//                dut.io.raw_data.cha_q #= (ltf(Random.nextInt().abs % ltf.length).im * 128).toInt
//                dut.clockDomain.waitSampling(1)
//            }
            dut.io.enable #= true
            for(idx <- 0 until 1600){
                dut.io.raw_data.valid #= true
                val raw_data = stf(idx % 160) * 2048
                val fs = Complex(Math.cos(2 * Math.PI * 0.075 * idx / 16),
                    Math.sin(2 * Math.PI * 0.075 * idx / 16))
                val cfo_data = raw_data * fs
                dut.io.raw_data.cha_i #= cfo_data.re.toInt
                dut.io.raw_data.cha_q #= cfo_data.im.toInt
                dut.clockDomain.waitSampling(1)
            }
            dut.io.enable #= false
            for(idx <- 0 until 160){
                dut.io.raw_data.valid #= true
                dut.io.raw_data.cha_i #= (ltf(Random.nextInt().abs % ltf.length).re * 128).toInt
                dut.io.raw_data.cha_q #= (ltf(Random.nextInt().abs % ltf.length).im * 128).toInt
                dut.clockDomain.waitSampling(1)
            }
            dut.io.raw_data.valid #= false

            dut.clockDomain.waitSampling(100)
        }
}