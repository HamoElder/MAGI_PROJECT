package magiRF.packages.Preambler

import Misc.math.Complex
import magiRF.packages.Preamble.{PreambleDetector, PreambleDetectorConfig}
import spinal.core.sim._
import magiRF.top.IEEE802_11.IEEE802_11.ltf
import magiRF.top.RFBench.Config.stf

import scala.util.Random

object PreambleDetectorSimApp extends App{

    val preamble_config = PreambleDetectorConfig(12, stf.length, stf.length, 8, usePowerMeter = true)
//    val preamble_config = PreambleDetectorConfig(16, 16, 32, stf.map(_*100))
    SimConfig.withWave.doSim(new PreambleDetector(preamble_config)){ dut =>
        dut.clockDomain.forkStimulus(5)
        dut.io.raw_data.valid #= false
        dut.io.min_plateau #= 16
//        dut.io.gate_threshold #= 4000000
        dut.clockDomain.waitSampling(10)
        for(idx <- 0 until 2600){
            dut.io.raw_data.valid #= true
            dut.io.raw_data.cha_i #= (ltf(Random.nextInt().abs % ltf.length).re * 2048).toInt
            dut.io.raw_data.cha_q #= (ltf(Random.nextInt().abs % ltf.length).im * 2048).toInt
            dut.clockDomain.waitSampling(1)
        }
        for(idx <- 0 until 640){
            dut.io.raw_data.valid #= true
            val raw_data = stf(idx % stf.length) * 512
            val fs = Complex(scala.math.cos(2 * scala.math.Pi * 0.185 * idx / 32),
                scala.math.sin(2 * scala.math.Pi * 0.185 * idx / 32))
            val cfo_data = raw_data * fs
            dut.io.raw_data.cha_i #= cfo_data.re.toInt + (ltf(Random.nextInt().abs % ltf.length).re * 512).toInt
            dut.io.raw_data.cha_q #= cfo_data.im.toInt + (ltf(Random.nextInt().abs % ltf.length).im * 512).toInt
            dut.clockDomain.waitSampling(1)
        }
        for(idx <- 0 until 2600){
            dut.io.raw_data.valid #= true

            dut.io.raw_data.cha_i #= (ltf(Random.nextInt().abs % ltf.length).re * 2048).toInt
            dut.io.raw_data.cha_q #= (ltf(Random.nextInt().abs % ltf.length).im * 2048).toInt
            dut.clockDomain.waitSampling(1)
        }
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.valid #= false
        dut.clockDomain.waitSampling(1000)
    }
}
