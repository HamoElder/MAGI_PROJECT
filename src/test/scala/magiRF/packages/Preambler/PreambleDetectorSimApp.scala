package magiRF.packages.Preambler

import magiRF.packages.Preamble.{PreambleDetector, PreambleDetectorConfig}
import spinal.core.sim._
import magiRF.top.IEEE802_11.IEEE802_11.{stf, stf64, ltf}
import scala.util.Random

object PreambleDetectorSimApp extends App{

    val preamble_config = PreambleDetectorConfig(16, 16, 32, usePowerMeter = true)
//    val preamble_config = PreambleDetectorConfig(16, 16, 32, stf.map(_*100))
    SimConfig.withWave.doSim(new PreambleDetector(preamble_config)){ dut =>
        dut.clockDomain.forkStimulus(5)
        dut.io.raw_data.valid #= false
        dut.io.gate_threshold #= 4500000
        dut.clockDomain.waitSampling(10)
        for(idx <- 0 until 2600){
            dut.io.raw_data.valid #= true

            dut.io.raw_data.cha_i #= (ltf(Random.nextInt().abs % ltf.length).re * 4096).toInt
            dut.io.raw_data.cha_q #= (ltf(Random.nextInt().abs % ltf.length).im * 4096).toInt
            dut.clockDomain.waitSampling(1)
        }
        for(idx <- 0 until 1600){
            dut.io.raw_data.valid #= true
            dut.io.raw_data.cha_i #= (stf(idx % 160).re * 4096).toInt
            dut.io.raw_data.cha_q #= (stf(idx % 160).im * 4096).toInt

            dut.clockDomain.waitSampling(1)
        }
        for(idx <- 0 until 2600){
            dut.io.raw_data.valid #= true

            dut.io.raw_data.cha_i #= (ltf(Random.nextInt().abs % ltf.length).re * 4096).toInt
            dut.io.raw_data.cha_q #= (ltf(Random.nextInt().abs % ltf.length).im * 4096).toInt
            dut.clockDomain.waitSampling(1)
        }
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.valid #= false
        dut.clockDomain.waitSampling(1000)
    }
}
