package magiSOC.perips.DMA.BlockDMA

import spinal.lib._
import spinal.core._
import spinal.lib.bus.amba4.axi.Axi4Config
import utils.bus.AxiStream4.AxiStream4Config

object BDMAcchStates extends SpinalEnum{
    val IDLE, FIXED_REQ, INCR_REQ, HALT = newElement()
}

case class BDMAConfig(
                         axi4AddrWidth  : Int = 32,
                         axi4DataWidth  : Int = 32,
                         axi4MaxBurstLen: Int = 16,
                         axi4IDWidth    : Int = 4,

                         axis4StrbEn    : Boolean = true,
                         axis4KeepEn    : Boolean = true,
                         axis4IDEn      : Boolean = true,
                         axis4LastEn    : Boolean = true,
                         bytesLimit     : BigInt = 1 GiB
                     ){
    def axi4Config: Axi4Config = Axi4Config(
        addressWidth = axi4AddrWidth,
        dataWidth = axi4DataWidth,
        idWidth = axi4IDWidth,
        useLock = false,
        useRegion = false,
        useCache = false,
        useProt = false,
        useQos = false
    )
    def axi4NumberBytes: Int = axi4Config.bytePerWord
    def axi4Size: Int = log2Up(axi4NumberBytes)
    def axi4MaximumTotalDataTransactionSize: Int = axi4NumberBytes * axi4MaxBurstLen
    def axi4AddrOffsetMask: Int = (1 << axi4Size) - 1
    def axi4LowAddrRange: Range.Inclusive = (axi4Size-1 downto 0)
    def axisConfig: AxiStream4Config = AxiStream4Config(
        dataWidth = axi4DataWidth,
        idWidth = axi4IDWidth,
        userWidth = -1,
        useID = axis4IDEn, useStrb = axis4StrbEn, useKeep = axis4KeepEn, useLast = axis4LastEn
    )
    def axi4AxFifoDepth: Int = 8
    def axis4FifoDepth: Int = 32

    def bytesCntWidth: Int = log2Up(bytesLimit)
    def bytesCntDataType: UInt = UInt(bytesCntWidth bits)

}

case class BDMAControlChannel(config: BDMAConfig) extends Bundle with IMasterSlave{
    val desc_start_addr = config.axi4Config.addressType
    val desc_total_bytes = config.bytesCntDataType
    val desc_burst = Bits(2 bits)
    val desc_id = config.axi4Config.idType
//    val desc_err = UInt(2 bits)

    override def asMaster(): Unit = {
        out(desc_total_bytes, desc_start_addr, desc_burst, desc_id)
//        in(desc_err)
    }

    override type RefOwnerType = this.type
}


case class BDMACore() extends Component{
    val io = new Bundle{

    }
    noIoPrefix()
}
