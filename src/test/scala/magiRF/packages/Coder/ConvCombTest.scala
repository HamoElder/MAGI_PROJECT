package magiRF.packages.Coder

import magiRF.packages.Coder.Convolutional.Decoder.{ViterbiDecoder, ViterbiDecoderConfig}
import magiRF.packages.Coder.Convolutional.Encoder.{ConvEncoder, ConvEncoderConfig}
import magiRF.packages.Coder.ViterbiDecoderSimApp.viterbi_decoder
import magiRF.packages.Puncher.{DePuncturing, Puncturing}
import spinal.core.sim._
import utils.bus.AxiLite.sim.AxiLite4Driver
import spinal.lib.sim.{StreamDriver, StreamMonitor, StreamReadyRandomizer}

import scala.util.Random
import spinal.core._
import spinal.lib._

case class ConvCombTest(encoder_config: ConvEncoderConfig, decoder_config: ViterbiDecoderConfig, puncture_mask_seq: Seq[Int],
                        de_puncture_mask_seq: Seq[Int],fifoDepth: Int) extends Component{
    val io = new Bundle{
        val tail_bits = slave(Flow(encoder_config.regDataType))
        val raw_data = slave(Stream(Fragment(encoder_config.rawDataType)))
        val decoded_data = master(Stream(Fragment(encoder_config.rawDataType)))
    }
    noIoPrefix()
    val encoder = ConvEncoder(encoder_config)
    encoder.io.tail_bits << io.tail_bits
    encoder.io.raw_data << io.raw_data

    val puncture_core = Puncturing(encoder_config.dataWidth * encoder_config.codeRate, puncture_mask_seq)
    puncture_core.io.raw_data << encoder.io.coded_data.toStream.queue(fifoDepth)

    val de_puncture_core = DePuncturing(puncture_core.punchedDataWidth, decoder_config.softWidth, decoder_config.codeRate, de_puncture_mask_seq)

    de_puncture_core.io.raw_data << puncture_core.io.punched_data.toStream.queue(fifoDepth)

    val decoder = ViterbiDecoder(decoder_config)
    decoder.io.raw_data << de_puncture_core.io.de_punched_data.queue(fifoDepth)
    io.decoded_data << StreamFragmentWidthAdapter.make(decoder.io.decoded_data.toStream.queue(fifoDepth), encoder_config.rawDataType)

}

object ConvCombTestSimApp extends App{

    //    val puncture_mask_seq = Seq(0, 8, 1, 9, 2, 10, 3, 11, 4, 12, 5, 13, 6, 14, 7, 15)   // 1 / 2
    //    val de_puncture_mask_seq = Seq(3, 3, 3, 3, 3, 3, 3, 3)                              // 1 / 2
    val puncture_mask_seq = Seq(0, 8, 1, 2, 10, 3, 4, 12, 5, 6, 14, 7)                    // 2 / 3
    val de_puncture_mask_seq = Seq(3, 1, 3, 1, 3, 1, 3, 1)                                // 2 / 3
    //    val puncture_mask_seq = Seq(0, 8, 1, 2, 10, 3, 11, 4, 5, 13, 6, 14, 7)
    //    val de_puncture_mask_seq = Seq(3, 1, 3, 3, 1, 3, 3, 1)


//    val viterbi_decoder = ViterbiDecoderConfig(3, 16, 1, List(7, 5), false)
//    val conv_coder_config = ConvEncoderConfig(1, 3, List(7, 5))
    val viterbi_decoder = ViterbiDecoderConfig(7, 84, 1, List(91, 121), de_puncture_mask_seq)
    val conv_coder_config = ConvEncoderConfig(8, 7, List(91, 121))
//    val viterbi_decoder = ViterbiDecoderConfig(7, 84, 1, List(91, 121, 117))
//    val conv_coder_config = ConvEncoderConfig(8, 7, List(91, 121, 117))

    SimConfig.withWave.allOptimisation.doSim(new ConvCombTest(conv_coder_config, viterbi_decoder, puncture_mask_seq,
        de_puncture_mask_seq, 2048)) { dut =>

        dut.clockDomain.forkStimulus(5)
        dut.io.raw_data.valid #= false
        dut.io.tail_bits.valid #= false
        dut.io.raw_data.last #= false
        dut.io.tail_bits.payload #= 0
        dut.io.decoded_data.ready #= true
        dut.clockDomain.waitSampling(10)
        dut.io.tail_bits.valid #= true
        dut.io.tail_bits.payload #= 0
        dut.clockDomain.waitSampling(5)
        dut.io.tail_bits.valid #= false
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.valid #= true
        for(idx <- 100 until 300){
//            dut.io.raw_data.fragment.randomize() // 85
            dut.io.raw_data.fragment #= idx % 256
            dut.clockDomain.waitSampling(1)
        }
        dut.io.raw_data.fragment #= 255
        dut.io.raw_data.last #= true
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.last #= false
        dut.io.raw_data.valid #= false
        dut.clockDomain.waitSampling(3000)
    }
}
