package magiRF.packages.Coder

import magiRF.packages.Coder.Convolutional.Encoder.{ConvEncoder, ConvEncoderConfig}
import spinal.core.sim._
import spinal.core._
import spinal.lib._

object ConvEncoderSimApp extends App{

    	val conv_coder_config = ConvEncoderConfig(4, 7, List(91, 121))
//    val conv_coder_config = ConvEncoderConfig(7, 3, List(7, 5))
    SimConfig.withWave.doSim(new ConvEncoder(conv_coder_config)){ dut =>
        dut.clockDomain.forkStimulus(5)
        dut.io.raw_data.valid #= false
        dut.io.raw_data.last #= false
        dut.io.tail_bits.valid #= false
        dut.io.tail_bits.payload #= 0
        dut.clockDomain.waitSampling(10)
        dut.io.tail_bits.valid #= true
        dut.io.tail_bits.payload #= 0
        dut.clockDomain.waitSampling(5)
        dut.io.tail_bits.valid #= false
        dut.clockDomain.waitSampling(1)
        for(idx <- 0 until 200){
            dut.io.raw_data.valid #= true
            dut.io.raw_data.fragment.randomize()
//            dut.io.raw_data.fragment #= idx % 2 // 5
            dut.clockDomain.waitSampling(1)
        }
        dut.io.raw_data.last #= true
        dut.io.raw_data.fragment #= 1
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.valid #= false
        dut.io.raw_data.last #= false
        dut.clockDomain.waitSampling(1000)
    }
}
