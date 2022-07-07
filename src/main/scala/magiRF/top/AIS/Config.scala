package magiRF.top.AIS

import magiRF.packages.Preamble.PreambleConfig
import magiRF.top.RFBench.Config.phyDataWidth
import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle
import utils.common.CRC.CrcKind

/**
 * Frame Structure:
 * ---------------------------------------------------------------------------------------------------------------------------------
 * | Training Sequence (24 bits)  |  Start Flag (8 bits) |  Data (168 bits)  | FCS (16 bits) | End Flag (8 bits) | Buffer (24 bits)|
 * ---------------------------------------------------------------------------------------------------------------------------------
 * |      010101.......0101       |        0x7e          |                                   |        0x7e       |                 |
 * ---------------------------------------------------------------------------------------------------------------------------------
 */

object Config {
    def iqWidth = 12

    def phyDataWidth = 8

    def streamDataWidth = 32

    def modIQDataType: IQBundle[SInt] = IQBundle(SInt(iqWidth bits))

    def interfaceIQDataType: IQBundle[Bits] = IQBundle(Bits(iqWidth bits))

    def crc_data_width: BigInt = 2 Bytes

    def crc16_config: CrcKind = new CrcKind(
        polynomial = BigInt("1021", 16),
        polynomialWidth = 16,
        initValue = BigInt("0000", 16),
        inputReflected = true,
        outputReflected = true,
        finalXor = BigInt("0000", 16)
    )

    def phyDataType: Bits = Bits(phyDataWidth bits)


}
