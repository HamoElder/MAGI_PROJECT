package magiRF.top.RFBench

import Misc.math.{Complex, RaisedCosineFilterParams, RaisedCosineTaps, SquareRootRaisedCosineFilterParams, SquareRootRaisedCosineTaps}
import Misc.math.ZadoffChuSeq.zcSeqGen
import magiRF.modules.DSP.Correlator.CrossCorrelatorConfig
import magiRF.modules.DSP.PowerAdjustor.PowerAdjustorConfig
import magiRF.modules.Modem.Demodulator.DemodulatorRTLConfig
import magiRF.modules.Modem.Demodulator.extensions.lookUpDemodConfig
import magiRF.modules.Modem.Misc.{dataDivConfig, demodUnitConfig, modUnitConfig}
import magiRF.modules.Modem.Modulator.modRTLConfig
import magiRF.modules.Modem.Modulator.extensions.{ModExtension, lookUpModConfig, mPSKModExtension, mQAMModExtension}
import magiRF.packages.CFO.CFOCorrectorConfig
import magiRF.packages.Coder.Convolutional.Decoder.ViterbiDecoderConfig
import magiRF.packages.Coder.Convolutional.Encoder.ConvEncoderConfig
import magiRF.packages.PackageGen.{AxiLite4PackageGenConfig, StreamPkgGenConfig}
import magiRF.packages.Preamble.{PreambleConfig, PreambleDetectorConfig}
import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.AxiLite4Config
import utils.bus.AxiStream4.AxiStream4Config
import utils.bus.IQBundle.IQBundle
import utils.common.CRC.CrcKind

/**
 * Frame Structure:
 * ----------------------------------------------------------------------------------------------------------------------------------------------
 * |         stf (20 bytes)        | SDF (1 bytes) | Method (2 bits) | size (1 bytes) | payload(16-255 bytes) | crc (4 bytes) | padding (1 byte) |
 * ----------------------------------------------------------------------------------------------------------------------------------------------
 * |                               |            BPSK   Uncoded  UnScrambling          |             Coded   Configurable  Scrambling             |
 * |             PLCP              |                       SIGNAL                     |                             DATA                         |
 * ----------------------------------------------------------------------------------------------------------------------------------------------
 * Modulator Method:
 * 00      =>     BPSK
 * 01      =>     QPSK
 * 10      =>     16QAM
 * 11      =>     LookUpMethod
 * ENCODER FLOW:
 * Data From DMA(4 bytes) => StreamPkgGen (1 bytes) => PADDING => CRC => Convolutional Code (16 bits) => Puncturing
 *                                                                                                          ||
 *                                                                                                          \/
 * RF Interface <= Preambler Extend <= Filter <= UpSampling <= HeaderExtend <= Modulation(12 bits * 2) <=  Scrambling
 *
 * DECODER FLOW:
 * RF Interface(12 bits * 2) => Preambler Detector => CFO Estimator => CFO Corrector => Filter => DownSampling => DeModulation(1 bits * 2)
 *                                                                                                                      ||
 *                                                                                                                      \/
 *                Data To DMA <= StreamPkgComb <= CRC Checker <= Viterbi Decoder<= DePuncturing <= Descrambling <= HeaderMessage
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

    def size_width: BigInt = 1 Byte

    def rf_payload_upper_boundary: BigInt = 255 Bytes

    def rf_payload_lower_boundary: BigInt = 16 Bytes

    def phy_payload_upper_boundary: BigInt = rf_payload_upper_boundary / code_rate

    def phy_payload_lower_boundary: BigInt = rf_payload_lower_boundary / code_rate

    def phyDataType: Bits = Bits(phyDataWidth bits)

    def codedDataType: Bits = Bits(codedDataWidth bits)

    def interConnectFifoDepth = 32

    def interConnectHaltThreshold = 18

    def power_adjustor_ratio = 4

    def dataResolutionWidth: Int = iqWidth

    def stf: Array[Complex] = zcSeqGen(1, 16)

    def stf_repeat_times = 10

    def sdf_size: Int = 8

    def mask_seq_1_2 = Seq(0, 8, 1, 9, 2, 10, 3, 11, 4, 12, 5, 13, 6, 14, 7, 15)
    //    val ltf32: Array[Complex] = zcSeqGen(5, 32)
    //    val ltf: Array[Complex] = (ltf32 ++ ltf32)
    def srrcConfig: SquareRootRaisedCosineFilterParams = SquareRootRaisedCosineFilterParams(128.0, 0.3, 4, oversampled_zeros)

    def srrcTaps: List[Int] = SquareRootRaisedCosineTaps(srrcConfig).toList

    def filter_cut_off_width: Int = log2Up(srrcTaps.max + 1) + 1

    def stf_preamble_config: PreambleConfig = PreambleConfig(iqWidth, stf, stf_repeat_times, scale = 0.55)
    //    def ltf_preamble_config: PreambleConfig = PreambleConfig(iqWidth, ltf, scale = 0.6)

    def header_bpsk_mod_array: Array[Int] = {
        def grayEncode(n: Int): Int = n ^ (n >>> 1)

        def BPSKTable802_11_I(m_val: Int, peak: Int): Array[Int] = {
            val ini_angle: Double = scala.math.Pi
            val direction: Boolean = false
            var codeTable = new Array[Int](m_val)
            var angle = ini_angle
            for (idx <- 0 until m_val) {
                codeTable(grayEncode(idx)) = ((peak * Math.cos(angle)).round).toInt
                angle = if (direction) angle + 2 * Math.PI / m_val else angle - 2 * Math.PI / m_val
            }
            codeTable
        }
        BPSKTable802_11_I(2, (scala.math.pow(2, iqWidth - 1) - 1).toInt)
    }
    def sdf_i_array: Array[Int] = Array[Int](header_bpsk_mod_array(0), header_bpsk_mod_array(0),
        header_bpsk_mod_array(1), header_bpsk_mod_array(1), header_bpsk_mod_array(0), header_bpsk_mod_array(0),
        header_bpsk_mod_array(1), header_bpsk_mod_array(0))

    def conv_encoder_config: ConvEncoderConfig = ConvEncoderConfig(phyDataWidth, 7, List(91, 121))

    def viterbi_decoder_config: ViterbiDecoderConfig = ViterbiDecoderConfig(7, 84, 1, List(91, 121))

    def crc32_config: CrcKind = new CrcKind(
        polynomial = BigInt("04C11DB7", 16),
        polynomialWidth = 32,
        initValue = BigInt("FFFFFFFF", 16),
        inputReflected = true,
        outputReflected = true,
        finalXor = BigInt("FFFFFFFF", 16)
    )

    def stream_config: AxiStream4Config = AxiStream4Config(streamDataWidth, useID = false, useStrb = true, useLast = true)

    def axiLite4_config: AxiLite4Config = AxiLite4Config(cfgAddressWidth, cfgDataWidth)

    def genPkgGenConfig: StreamPkgGenConfig = StreamPkgGenConfig(streamDataWidth, phyDataWidth, phy_payload_upper_boundary.toInt, LITTLE)

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
            val ini_angle: Double = scala.math.Pi
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
    def mod_method_width: Int = log2Up(genModulatorConfig.selectNum)
    def mod_method_type: UInt = UInt(mod_method_width bits)

    def power_adjustor_config: PowerAdjustorConfig = PowerAdjustorConfig(iqWidth, iqWidth, power_adjustor_ratio)
    def preamble_config: PreambleDetectorConfig = PreambleDetectorConfig(12, stf.length, stf.length, 8, usePowerMeter = true)
    def rx_coarse_cfo_corrector_config: CFOCorrectorConfig = CFOCorrectorConfig(iqWidth, stf.length, stf.length, iqWidth, (stf_repeat_times / 2) & 0xfe, dataResolutionWidth)
    def header_corrector_out_width: Int = 3 * iqWidth
    def header_corrector_out_datatype: SInt = SInt(header_corrector_out_width bits)
    def header_corrector_win_limit: Int = stf.length + stf.length / 2 - 2
    def header_corrector_win_cnt_datatype: UInt = UInt(log2Up(header_corrector_win_limit + 1) bits)
    def header_corrector_config: CrossCorrelatorConfig = CrossCorrelatorConfig(12, stf,  3 * iqWidth)

    def receiver_use_timeout: Boolean = false

    def down_sampling_decimation: Int = oversampled_zeros

    def genDemodulatorConfig: DemodulatorRTLConfig = {
        var demod_config = Seq[demodUnitConfig]()
        var lookup_demod_config = Seq[lookUpDemodConfig]()
        val unitDataWidth = phyDataWidth
        val modDataWidth = iqWidth

        def grayEncode(n : Int): Int = n ^ (n >>> 1)
        //        def grayEncode(n: Long): Long = n ^ (n >>> 1)

        def B_Q_PSKTable802_11_I(m_val: Int, peak: Int): (Array[BigInt], Array[Int]) = {
            var code = new Array[Int](m_val)
            var codeTable = new Array[BigInt](m_val)
            codeTable(0) = 0
            code(0) = 0
            code(1) = 1
            (codeTable, code)
        }
        demod_config = demod_config :+ demodUnitConfig(unitDataWidth, modDataWidth, 2, B_Q_PSKTable802_11_I, null)
        demod_config = demod_config :+ demodUnitConfig(unitDataWidth, modDataWidth, 4, B_Q_PSKTable802_11_I, B_Q_PSKTable802_11_I)

        def QAM_16_Table802_11_IQ(m_val: Int, peak: Int): (Array[BigInt], Array[Int]) = {

            val single_m_val = log2Up(m_val) >> 1
            val m_range = Math.pow(2, single_m_val).toInt
            val factor: Double = 0.9486832980505138 / 2
            val direction : Boolean  = true
            var codeTable = new Array[BigInt](m_range)
            var code = new Array[Int](m_range)
            var value = if(direction) -peak else peak
            for(idx <- 0 until m_range){
                codeTable(idx) = (factor * value).round
                code(idx) = grayEncode(idx)
                value = if(direction) value + (2 * peak) / (m_range - 1) else value - (2 * peak) / (m_range - 1)
            }
            for(idx <- 0 until m_range - 1){
                codeTable(idx) = (codeTable(idx) + codeTable(idx + 1)) >> 1
            }
            (codeTable, code)
        }

        demod_config = demod_config :+ demodUnitConfig(unitDataWidth, modDataWidth, 16, QAM_16_Table802_11_IQ, QAM_16_Table802_11_IQ)
//        lookup_demod_config = lookup_demod_config :+ lookUpDemodConfig(unitDataWidth, modDataWidth)
        DemodulatorRTLConfig(unitDataWidth, modDataWidth, 32, demod_config, lookup_demod_config)

    }
    def demod_method_width: Int = log2Up(genDemodulatorConfig.selectNum)
    def demod_method_type: UInt = UInt(demod_method_width bits)
}
