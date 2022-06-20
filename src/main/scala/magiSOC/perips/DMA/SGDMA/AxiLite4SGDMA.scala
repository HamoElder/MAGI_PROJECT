package magiSOC.perips.DMA.SGDMA

import spinal.lib._
import spinal.core._

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

}


case class AxiLite4SGDMA() extends Component {
    val io = new Bundle{

    }
    noIoPrefix()

}
