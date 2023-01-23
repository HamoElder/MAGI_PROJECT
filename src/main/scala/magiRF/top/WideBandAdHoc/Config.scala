package magiRF.top.WideBandAdHoc

import magiRF.modules.Modem.Misc.modUnitConfig
import magiRF.modules.Modem.Modulator.extensions.{ModExtension, lookUpModConfig, mPSKModExtension, mQAMModExtension}
import magiRF.modules.Modem.Modulator.modRTLConfig
import magiRF.packages.Coder.Convolutional.Encoder.ConvEncoderConfig
import spinal.core._
import spinal.lib._
import utils.common.CRC.CrcKind

object Config {
    def phyDataWidth = 1
    def iqWidth = 12
    def cfgDataWidth = 32

    def scramblerRegWidth = 31
    def scramblePoly0: Int =  (1 << 30) + (1 << 27)
    def scaramblePoly1: Int = (1 << 30) + (1 << 29) + (1 << 28) + (1 << 27)
    def phyDataType: Bits = Bits(phyDataWidth bits)
    def crcDataType: Bits = Bits(phyDataWidth * 2 bits)
    def blockLenDataWidth: Int = 20
    def blockLenDataType: UInt = UInt(blockLenDataWidth bits)
    def blockSegmentLenMin: Int = 40
    def blockSegmentLenMax: Int = 6144
    def blockSegmentLenDataWidth: Int = log2Up(blockSegmentLenMax)
    def blockSegmentLenDataType: UInt = UInt(blockSegmentLenDataWidth bits)
    def blockSegmentNumDataWidth: Int = log2Up((Math.pow(2, 20) / blockSegmentLenMax).toInt)
    def blockSegmentNumDataType: UInt = UInt(blockSegmentNumDataWidth bits)
    def codeRate = 3
    def codedDataWidth: Int = codeRate * phyDataWidth
    def codedDataType: Bits = Bits(codedDataWidth bits)
    def codedWithIndicateDataType: Bits = Bits(codedDataWidth + 1 bits)
    def interleavingColumnsNum: Int = 32
    def interleavingZeroPaddingDataType: UInt = UInt(log2Up(interleavingColumnsNum) bits)
    def interleavingRowsDataWidth: Int = log2Up((blockSegmentLenMax / interleavingColumnsNum) + 1)
    def interleavingRowsDataType: UInt = UInt(interleavingRowsDataWidth bits)
    def subBlockInterleavingAddrDataType: UInt = UInt(log2Up((blockSegmentLenMax/phyDataWidth) + 1) bits)
    def interleavingOutputVectorLenDataWidth: Int = 32
    def interleavingOutputVectorLenDataType: UInt = UInt(interleavingOutputVectorLenDataWidth bits)
    def conv_perm_seq: Seq[Int] = Seq[Int](1,17,9,25,5,21,13,29,3,19,11,27,7,23,15,31,0,16,8,24,4,20,12,28,2,18,10,26,6,22,14,30)
    def conv_perm_table: Seq[UInt] = for (data <- conv_perm_seq) yield {
        U(data, 5 bits)
    }
    def genModulatorConfig: modRTLConfig = {
        var mod_config = Seq[modUnitConfig]()
        var mod_method = Seq[ModExtension]()
        var lookup_mod_config = Seq[lookUpModConfig]()
        val unitDataWidth = phyDataWidth
        val modDataWidth = iqWidth

        def grayEncode(n: Int): Int = n ^ (n >>> 1)

        def QPSKTableLTE_I(m_val: Int, peak: Int): Array[BigInt] = {
            val ini_angle: Double = Math.PI * 1 / 4
            val direction: Boolean = false
            val factor:Double = 1.0 / Math.sqrt(2)
            var codeTable = new Array[BigInt](m_val)
            var angle = ini_angle
            for (idx <- 0 until m_val) {
                codeTable(grayEncode(idx)) = BigInt((peak * factor * Math.cos(angle)).round)
                angle = if (direction) angle + 2 * Math.PI / m_val else angle - 2 * Math.PI / m_val
            }
            codeTable
        }

        def QPSKTableLTE_Q(m_val: Int, peak: Int): Array[BigInt] = {
            val ini_angle: Double = Math.PI * 1 / 4
            val direction: Boolean = false
            val factor:Double = 1.0 / Math.sqrt(2)
            var codeTable = new Array[BigInt](m_val)
            var angle = ini_angle
            for (idx <- 0 until m_val) {
                codeTable(grayEncode(idx)) = BigInt((peak * factor * Math.sin(angle)).round)
                angle = if (direction) angle + 2 * Math.PI / m_val else angle - 2 * Math.PI / m_val
            }
            codeTable
        }

        mod_config = mod_config :+ modUnitConfig(modDataWidth, 2 * modDataWidth, 4, QPSKTableLTE_I, QPSKTableLTE_Q)
        mod_method = mod_method :+ mPSKModExtension()

        lookup_mod_config = lookup_mod_config :+ lookUpModConfig(modDataWidth, 4)
        lookup_mod_config = lookup_mod_config :+ lookUpModConfig(modDataWidth, 6)
        modRTLConfig(unitDataWidth, modDataWidth, cfgDataWidth, mod_config, mod_method, lookup_mod_config)
    }

    def CRC24AConfig: CrcKind = new CrcKind(
        polynomial = BigInt("864CFB", 16),
        polynomialWidth = 24,
        initValue = BigInt("000000", 16),
        inputReflected = false,
        outputReflected = false,
        finalXor = BigInt("000000", 16)
    )

    def CRC24BConfig: CrcKind = new CrcKind(
        polynomial = BigInt("800063", 16),
        polynomialWidth = 24,
        initValue = BigInt("000000", 16),
        inputReflected = false,
        outputReflected = false,
        finalXor = BigInt("000000", 16)
    )

    def CRC16Config: CrcKind = new CrcKind(
        polynomial = BigInt("1021", 16),
        polynomialWidth = 16,
        initValue = BigInt("0000", 16),
        inputReflected = false,
        outputReflected = false,
        finalXor = BigInt("0000", 16)
    )

    def CRC8Config: CrcKind = new CrcKind(
        polynomial = BigInt("9B", 16),
        polynomialWidth = 8,
        initValue = BigInt("00", 16),
        inputReflected = false,
        outputReflected = false,
        finalXor = BigInt("00", 16)
    )

    def lte_conv_encoder_config: ConvEncoderConfig = ConvEncoderConfig(phyDataWidth, 7, List(91, 121, 117))


}
