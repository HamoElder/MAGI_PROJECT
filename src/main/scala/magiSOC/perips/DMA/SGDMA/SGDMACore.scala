package magiSOC.perips.DMA.SGDMA

import spinal.core._
import spinal.lib._

case class SGDMACoreConfig(
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

}


case class SGDMACore(config: SGDMACoreConfig) extends Component {
    val io = new Bundle{

    }
    noIoPrefix()

}
