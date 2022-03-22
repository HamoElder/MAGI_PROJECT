package magiRF.top.RFBench

import Misc.math.{Complex, RaisedCosineFilterParams, RaisedCosineTaps, SquareRootRaisedCosineFilterParams, SquareRootRaisedCosineTaps}
import Misc.math.ZadoffChuSeq.zcSeqGen
import magiRF.modules.Modem.Misc.{dataDivConfig, modUnitConfig}
import magiRF.modules.Modem.Modulator.modRTLConfig
import magiRF.modules.Modem.Modulator.extensions.{ModExtension, lookUpModConfig, mPSKModExtension, mQAMModExtension}
import magiRF.packages.Coder.Convolutional.Decoder.ViterbiDecoderConfig
import magiRF.packages.Coder.Convolutional.Encoder.ConvEncoderConfig
import magiRF.packages.PackageGen.{AxiLite4PackageGenConfig, StreamPkgGenConfig}
import magiRF.packages.Preamble.PreambleConfig
import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.AxiLite4Config
import utils.bus.AxiStream4.AxiStream4Config
import utils.bus.IQBundle.IQBundle
import utils.common.CRC.CrcKind

/**
 * Frame Structure:
 * ----------------------------------------------------------------------------------------------------------------------------------------
 * |          stf (16 bytes)        | modulator method (1 byte) | size (1 bytes) | payload(16-250 bytes) | crc (4 bytes) | padding (1 byte) |
 * ----------------------------------------------------------------------------------------------------------------------------------------
 * |                               |         BPSK   Uncoded  Scrambling         |             Coded   Configurable  Scrambling             |
 * |             PLCP              |                    SIGNAL                  |                             DATA                         |
 * ---------------------------------------------------------------------------------------------------------------------------------------
 * Modulator Method:
 * 0101_0101      =>     BPSK
 * 1010_1010      =>     QPSK
 * 0101_1010      =>     16QAM
 * 1010_0101      =>     LookUpMethod
 * ENCODER FLOW:
 * Data From DMA(4 bytes) => StreamPkgGen (1 bytes) => PADDING => CRC => Convolutional Code (16 bits) => Puncturing
 * ||
 * \/
 * RF Interface <= Preambler Extend <= Filter <= Modulation(12 bits * 2) <= Scrambling <=  HeaderExtend
 *
 * DECODER FLOW:
 * RF Interface(12 bits * 2) => Preambler Detector => CFO Estimator => CFO Corrector => DeModulation(1 bits * 2)
 * ||
 * \/
 * Data To DMA <= StreamPkgComb <= CRC Checker <= Viterbi Decoder<= DePuncturing <= HeaderMessage <= Descrambling
 *
 */

object Config {
    /**
     * Transmitter Parameter
     */
    def iqWidth = 12

    def phyDataWidth = 8

    def streamDataWidth = 32

    def modIQDataType: IQBundle[SInt] = IQBundle(SInt(iqWidth bits))

    def interfaceIQDataType: IQBundle[Bits] = IQBundle(Bits(iqWidth bits))

    def cfgDataWidth = 32

    def code_rate = 2

    def codedDataWidth: Int = code_rate * phyDataWidth

    def cfgAddressWidth = 8

    def scrambler_reg_width = 7

    def scrambler_poly = 72

    def oversampled_zeros = 8

    def crc_data_width: BigInt = 4 Bytes

    def method_width: BigInt = 1 Byte

    def size_width: BigInt = 1 Byte

    def rf_payload_upper_boundary: BigInt = 250 Bytes

    def rf_payload_lower_boundary: BigInt = 16 Bytes

    def phy_payload_upper_boundary: BigInt = rf_payload_upper_boundary / code_rate

    def phy_payload_lower_boundary: BigInt = rf_payload_lower_boundary / code_rate

    def phyDataType: Bits = Bits(phyDataWidth bits)

    def codedDataType: Bits = Bits(codedDataWidth bits)

    def interConnectFifoDepth = 32

    def interConnectHaltThreshold = 18

    def srrcConfig: SquareRootRaisedCosineFilterParams = SquareRootRaisedCosineFilterParams(128.0, 0.3, 4, oversampled_zeros)
    def srrcTaps: List[Int] = SquareRootRaisedCosineTaps(srrcConfig).toList

    val stf32: Array[Complex] = zcSeqGen(3, 32)
    val stf: Array[Complex] = (stf32 ++ stf32 ++ stf32 ++ stf32)

    //    val ltf32: Array[Complex] = zcSeqGen(5, 32)
    //    val ltf: Array[Complex] = (ltf32 ++ ltf32)

    def stf_preamble_config: PreambleConfig = PreambleConfig(iqWidth, stf, scale = 0.55)
    //    def ltf_preamble_config: PreambleConfig = PreambleConfig(iqWidth, ltf, scale = 0.6)

    def conv_encoder_config: ConvEncoderConfig = ConvEncoderConfig(phyDataWidth, 7, List(91, 121))

    def viterbi_decoder_config: ViterbiDecoderConfig = ViterbiDecoderConfig(7, 84, 1, List(91, 121))

    def mask_seq_1_2 = Seq(0, 8, 1, 9, 2, 10, 3, 11, 4, 12, 5, 13, 6, 14, 7, 15)

    def crc32_config: CrcKind = CrcKind.Crc32

    def stream_config: AxiStream4Config = AxiStream4Config(streamDataWidth, useID = false, useStrb = true, useLast = true)

    def axiLite4_config: AxiLite4Config = AxiLite4Config(cfgAddressWidth, cfgDataWidth)

    def genPkgGenConfig: StreamPkgGenConfig = StreamPkgGenConfig(streamDataWidth, phyDataWidth, phy_payload_upper_boundary.toInt)

    def genModulatorDivConfig: dataDivConfig = dataDivConfig(codedDataWidth, 0)

    def genModulatorConfig: modRTLConfig = {
        var mod_config = Seq[modUnitConfig]()
        var mod_method = Seq[ModExtension]()
        var lookup_mod_config = Seq[lookUpModConfig]()
        val unitDataWidth = phyDataWidth
        val modDataWidth = iqWidth

        def grayEncode(n: Int): Int = n ^ (n >>> 1)

        //        def grayEncode(n: Long): Long = n ^ (n >>> 1)
        def BPSKTable802_11_I(m_val: Int, peak: Int): Array[BigInt] = {
            val ini_angle: Double = Math.PI
            val direction: Boolean = false
            var codeTable = new Array[BigInt](m_val)
            var angle = ini_angle
            for (idx <- 0 until m_val) {
                codeTable(grayEncode(idx)) = BigInt((peak * Math.cos(angle)).round)
                angle = if (direction) angle + 2 * Math.PI / m_val else angle - 2 * Math.PI / m_val
            }
            codeTable
        }

        def BPSKTable802_11_Q(m_val: Int, peak: Int): Array[BigInt] = {
            val ini_angle: Double = Math.PI
            val direction: Boolean = false
            var codeTable = new Array[BigInt](m_val)
            var angle = ini_angle
            for (idx <- 0 until m_val) {
                codeTable(grayEncode(idx)) = 0
                angle = if (direction) angle + 2 * Math.PI / m_val else angle - 2 * Math.PI / m_val
            }
            codeTable
        }

        mod_config = mod_config :+ modUnitConfig(modDataWidth, 2 * modDataWidth, 2, BPSKTable802_11_I, BPSKTable802_11_Q)
        mod_method = mod_method :+ mPSKModExtension()

        def QPSKTable802_11_I(m_val: Int, peak: Int): Array[BigInt] = {
            val ini_angle: Double = Math.PI * 5 / 4
            val direction: Boolean = false
            var codeTable = new Array[BigInt](m_val)
            var angle = ini_angle
            for (idx <- 0 until m_val) {
                codeTable(grayEncode(idx)) = BigInt((peak * Math.cos(angle)).round)
                angle = if (direction) angle + 2 * Math.PI / m_val else angle - 2 * Math.PI / m_val
            }
            codeTable
        }

        def QPSKTable802_11_Q(m_val: Int, peak: Int): Array[BigInt] = {
            val ini_angle: Double = Math.PI * 5 / 4
            val direction: Boolean = false
            var codeTable = new Array[BigInt](m_val)
            var angle = ini_angle
            for (idx <- 0 until m_val) {
                codeTable(grayEncode(idx)) = BigInt((peak * Math.sin(angle)).round)
                angle = if (direction) angle + 2 * Math.PI / m_val else angle - 2 * Math.PI / m_val
            }
            codeTable
        }

        mod_config = mod_config :+ modUnitConfig(modDataWidth, 2 * modDataWidth, 4, QPSKTable802_11_I, QPSKTable802_11_Q)
        mod_method = mod_method :+ mPSKModExtension()

        def QAM16Table802_11(m_val: Int, peak: Int): Array[BigInt] = {
            val single_m_val = log2Up(m_val) >> 1
            val m_range = Math.pow(2, single_m_val).toInt
            val factor: Double = 0.9486832980505138 / 2
            val direction: Boolean = true
            var codeTable = new Array[BigInt](m_range)
            var value = if (direction) -peak else peak
            for (idx <- 0 until m_range) {
                codeTable(grayEncode(idx)) = (factor * value).round
                value = if (direction) value + (2 * peak) / (m_range - 1) else value - (2 * peak) / (m_range - 1)
            }
            codeTable
        }

        mod_config = mod_config :+ modUnitConfig(modDataWidth, modDataWidth, 16, QAM16Table802_11, QAM16Table802_11)
        mod_method = mod_method :+ mQAMModExtension()

        //        lookup_mod_config = lookup_mod_config :+ lookUpModConfig(modDataWidth, 8)
        //        lookup_mod_config = lookup_mod_config :+ lookUpModConfig(modDataWidth, 4, 3)
        modRTLConfig(unitDataWidth, modDataWidth, cfgDataWidth, mod_config, mod_method, lookup_mod_config)
    }
}
