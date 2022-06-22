package magiSOC.perips.DMA.SGDMA

import magiSOC.perips.DMA.BlockDMA.BDMAConfig
import spinal.lib._
import spinal.core._
import utils.bus.AxiLite.AxiLite4Config

case class AxiLite4SGDMAConfig(
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
    val bdmaConfig: BDMAConfig = BDMAConfig(axi4AddrWidth, axi4DataWidth, axi4MaxBurstLen, axi4IDWidth, axis4StrbEn, axis4KeepEn,
        axis4IDEn, axis4LastEn, bytesLimit, outStandingLen, endianness)
    def addressWidth = 10
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, axil4DataWidth)
}


case class AxiLite4SGDMA() extends Component {
    val io = new Bundle{

    }
    noIoPrefix()

}
