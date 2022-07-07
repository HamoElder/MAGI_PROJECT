package magiSOC.perips.DMA.SGDMA

import magiSOC.perips.DMA.BlockDMA.BDMAConfig
import spinal.lib._
import spinal.core._
import utils.bus.AxiLite.AxiLite4Config

case class AxiLite4SGDMAConfig(
                                  sgAddrWidth    : Int = 32,
                                  sgDataWidth    : Int = 32,
                                  axi4AddrWidth  : Int = 32,
                                  axi4DataWidth  : Int = 32,
                                  axi4MaxBurstLen: Int = 16,
                                  axi4IDWidth    : Int = 4,

                                  axis4StrbEn    : Boolean = true,
                                  axis4KeepEn    : Boolean = true,
                                  axis4IDEn      : Boolean = false,
                                  axis4LastEn    : Boolean = true,

                                  axil4DataWidth : Int     = 32,
                                  bytesLimit     : BigInt  = 1 GiB,
                                  outStandingLen : Int     = 2,
                                  endianness     : Endianness = LITTLE
                              ){
    require(sgDataWidth == 32 || sgDataWidth == 64, "Data width must be 32 or 64")
    def sgAddrDataType: UInt = UInt(sgAddrWidth bits)
    def sgDataType: Bits = Bits(sgDataWidth bits)

    val bdmaConfig: BDMAConfig = BDMAConfig(axi4AddrWidth, axi4DataWidth, axi4MaxBurstLen, axi4IDWidth, axis4StrbEn, axis4KeepEn,
        axis4IDEn, axis4LastEn, bytesLimit, outStandingLen, endianness)
    def addressWidth = 10
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, axil4DataWidth)
}

object SGDMACCHStates extends SpinalEnum{
    val IDLE, CHECK_PREAMBLE, GET_MSG, SET_NEXT_PTR = newElement()
}
/** 32 bits
 * Symbol(16 bits) | desc_burst(2 bits)|desc_id(8 bits)|type(1 bits) | finish(1 bits)
 * start_addr(axi4AddrWidth bits)
 * desc_total_bytes(axi4DataWidth bits)
 * nextPtrAddr(sgAddrWidth bits)
 */
case class AxiLite4SGDMA() extends Component {
    val io = new Bundle{

    }
    noIoPrefix()

}
