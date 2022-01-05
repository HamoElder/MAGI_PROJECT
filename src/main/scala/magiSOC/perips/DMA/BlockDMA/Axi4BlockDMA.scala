package magiSOC.perips.DMA.BlockDMA

import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi.{Axi4, Axi4Config}
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.bus.AxiStream4.{AxiStream4, AxiStream4Config, AxiStream4SpecRenamer}


object Axi4DMAWriteStates extends SpinalEnum{
    val IDLE, START, WRITE, FINISH_BURST, DROP_DATA = newElement()
}

case class DMAControlChannel(config: Axi4BlockDMAConfig)extends Bundle with IMasterSlave {
    val desc_addr = config.axi4Config.addressType
    val desc_total_bytes = config.lenDataType
    val desc_burst = Bits(2 bits)
    val desc_id = config.axi4Config.idType
    val intr_en = Bool()

    override def asMaster(): Unit = {
        out(desc_total_bytes, desc_addr, desc_burst, desc_id, intr_en)
    }

    override type RefOwnerType = this.type
}

/**
 *
 * @param axi4AddrWidth: Width of AXI data bus in bits
 * @param axi4DataWidth: Width of AXI address bus in bits
 * @param axi4MaxBurstLen: Width of Axi burst length to generate
 * @param axisStrbEn: Use AxiStream tstrb signal
 * @param axis4KeepEn: Use AxiStream tkeep signal
 * @param axis4LastEn: Use AxiStream tlast signal
 * @param axis4IDEn: Use AxiStream tid signal
 * @param axil4CfgDataWidth: Width of AxiLite4 config bus in bits
 * @param lenWidth: Width of Length Field
 * @param outStanding: The Max OutStanding Size
 */
case class Axi4BlockDMAConfig(
                             axi4AddrWidth      : Int = 16,
                             axi4DataWidth      : Int = 32,
                             axi4MaxBurstLen    : Int = 16,

                             axisStrbEn         : Boolean = true,
                             axis4KeepEn        : Boolean = true,
                             axis4LastEn        : Boolean = true,
                             axis4IDEn          : Boolean = true,

                             axil4CfgDataWidth  : Int = 32,
                             lenWidth           : Int = 20,
                             outStanding        : Int = 1
                             ){
    def idWidth = 4

    def cfgAddressWidth: Int = 8
    def axiLite4Config: AxiLite4Config = AxiLite4Config(cfgAddressWidth, axil4CfgDataWidth)

    def axi4Config: Axi4Config = Axi4Config(
        addressWidth = axi4AddrWidth,
        dataWidth = axi4DataWidth,
        idWidth = idWidth,
        useLock = false,
        useRegion = false,
        useCache = false,
        useProt = false,
        useQos = false
    )
    def axi4BurstSize: Int = log2Up(axi4Config.bytePerWord)
    def axi4MaxBurstSize: Int = axi4MaxBurstLen << axi4BurstSize

    println(axi4BurstSize, axi4MaxBurstSize)

    def axisConfig: AxiStream4Config = AxiStream4Config(
        dataWidth = axi4DataWidth,
        idWidth   = idWidth,
        userWidth = -1,
        useID = axis4IDEn, useStrb = axisStrbEn, useKeep = axis4KeepEn, useLast = axis4LastEn
    )

    def lenDataType: UInt = UInt(lenWidth bits)
    def cntDataType: UInt = UInt(log2Up(lenWidth) bits)

}


case class Axi4BlockDMA(config: Axi4BlockDMAConfig) extends Component {
    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))
        val axi4Data = master(Axi4(config.axi4Config))

        val mem_to_stream = master(AxiStream4(config.axisConfig))
        val stream_to_mem = slave(AxiStream4(config.axisConfig))
        val intr_m2s = out(Bool())
        val intr_s2m = out(Bool())
    }
    noIoPrefix()
    AxiLite4SpecRenamer(io.axil4Ctrl)
    AxiStream4SpecRenamer(io.mem_to_stream)
    AxiStream4SpecRenamer(io.stream_to_mem)


    val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")



    axil4busCtrl.printDataModel()
}
