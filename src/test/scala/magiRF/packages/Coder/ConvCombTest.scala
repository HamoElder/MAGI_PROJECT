package magiRF.packages.Coder

import magiRF.packages.Coder.Convolutional.Decoder.{ViterbiDecoder, ViterbiDecoderConfig}
import magiRF.packages.Coder.Convolutional.Encoder.{ConvEncoder, ConvEncoderConfig}
import magiRF.packages.Coder.ViterbiDecoderSimApp.viterbi_decoder
import spinal.core.sim._
import utils.bus.AxiLite.sim.AxiLite4Driver
import spinal.lib.sim.{StreamDriver, StreamMonitor, StreamReadyRandomizer}

import scala.util.Random
import spinal.core._
import spinal.lib._

case class ConvCombTest(encoder_config: ConvEncoderConfig, decoder_config: ViterbiDecoderConfig, fifoDepth: Int) extends Component{
    val io = new Bundle{
        val tail_bits = slave(Flow(encoder_config.regDataType))
        val raw_data = slave(Flow(Fragment(encoder_config.rawDataType)))
        val decoded_data = master(Flow(Fragment(decoder_config.decodedDataType)))
    }
    noIoPrefix()
    val encoder = ConvEncoder(encoder_config)
    encoder.io.tail_bits << io.tail_bits
    encoder.io.raw_data << io.raw_data
    val encoded_fifo = StreamFifo(Fragment(encoder_config.codedDataType), fifoDepth)

    encoded_fifo.io.push << encoder.io.coded_data.toStream

    val decoder = ViterbiDecoder(decoder_config)
    decoder.io.raw_data.fragment := encoded_fifo.io.pop.fragment
    decoder.io.raw_data.valid := encoded_fifo.io.pop.valid
    decoder.io.raw_data.last := encoded_fifo.io.pop.last
    encoded_fifo.io.pop.ready := decoder.io.raw_data.ready

    io.decoded_data << decoder.io.decoded_data

}

object ConvCombTestSimApp extends App{
    val viterbi_decoder = ViterbiDecoderConfig(3, 16, 1, List(7, 5), false)
    val conv_coder_config = ConvEncoderConfig(1, 3, List(7, 5))
//    val viterbi_decoder = ViterbiDecoderConfig(7, 84, 1, List(91, 121))
//    val conv_coder_config = ConvEncoderConfig(1, 7, List(91, 121))
    SimConfig.withWave.allOptimisation.doSim(new ConvCombTest(conv_coder_config, viterbi_decoder, 1024)) { dut =>

        dut.clockDomain.forkStimulus(5)
        dut.io.raw_data.valid #= false
        dut.io.tail_bits.valid #= false
        dut.io.raw_data.last #= false
        dut.io.tail_bits.payload #= 0
        dut.clockDomain.waitSampling(10)
        dut.io.tail_bits.valid #= true
        dut.io.tail_bits.payload #= 0
        dut.clockDomain.waitSampling(5)
        dut.io.tail_bits.valid #= false
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.valid #= true
        dut.io.raw_data.payload.fragment #= 1
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.payload.fragment #= 0
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.payload.fragment #= 0
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.payload.fragment #= 1
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.payload.fragment #= 1
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.payload.fragment #= 0
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.payload.fragment #= 0
        dut.clockDomain.waitSampling(1)
        for(idx <- 0 until 150){
//            dut.io.raw_data.fragment.randomize() // 85
            dut.io.raw_data.fragment #= idx % 2
            dut.clockDomain.waitSampling(1)
        }
        dut.io.raw_data.fragment #= 1
        dut.io.raw_data.last #= true
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.last #= false
        dut.io.raw_data.valid #= false
        dut.clockDomain.waitSampling(1000)
    }
}
