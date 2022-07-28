package magiRF.top.IEEE802_11

import magiRF.packages.Coder.Convolutional.Decoder.{ViterbiDecoderConfig, ViterbiGen}
import magiRF.packages.Coder.Convolutional.Encoder.ConvEncoderConfig
import magiRF.packages.Preamble.PreambleConfig
import spinal.core._
import spinal.lib._

object OFDMBenchConfig {
    def iqWidth = 16
    def stf_preamble_config: PreambleConfig = PreambleConfig(iqWidth, IEEE802_11.stf, scale = 1.0)
    def ltf_preamble_config: PreambleConfig = PreambleConfig(iqWidth, IEEE802_11.ltf, scale = 1.0)

    def conv_encoder_config: ConvEncoderConfig = ConvEncoderConfig(8, 7, List(91, 121))
    def viterbi_decoder_config: ViterbiDecoderConfig = ViterbiDecoderConfig(7, 84, 1, List(91, 121), Seq(3, 1, 3, 1, 3, 1, 3, 1))

}
