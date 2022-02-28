package magiSOC.perips.DMA.BlockDMA

import spinal.lib._
import spinal.core._
import spinal.lib.bus.amba4.axi.{Axi4, Axi4Config, Axi4SpecRenamer}
import spinal.lib.bus.misc.BusSlaveFactory
import utils.bus.AxiStream4.{AxiStream4, AxiStream4Config, AxiStream4SpecRenamer}

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
                         bytesLimit     : BigInt = 1 GiB,
                         outStandingLen : Int     = 8,
                         endianness     : Endianness = LITTLE
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
        useID = axis4IDEn, useStrb = axis4StrbEn, useKeep = axis4KeepEn, useLast = true
    )
    def axi4AxFifoDepth: Int = 8
    def axi4WFifoDepth: Int = 2 * axi4MaxBurstLen
    def axis4FifoDepth: Int = 32
    def axi4OutstandingDepth: Int = outStandingLen + 4

    def bytesCntWidth: Int = log2Up(bytesLimit)
    def bytesCntDataType: UInt = UInt(bytesCntWidth bits)

}

case class BDMAControlChannel(config: BDMAConfig) extends Bundle with IMasterSlave{
    val desc_start_addr = config.axi4Config.addressType
    val desc_total_bytes = config.bytesCntDataType
    val desc_burst = Bits(2 bits)
    val desc_id = config.axi4Config.idType
    val desc_reset = Bool()
//    val desc_err = UInt(2 bits)

    override def asMaster(): Unit = {
        out(desc_total_bytes, desc_start_addr, desc_burst, desc_id, desc_reset)
//        in(desc_err)
    }

    override type RefOwnerType = this.type
}


case class BDMACore(config: BDMAConfig) extends Component{
    val io = new Bundle{
        val axi4S2M = master(Axi4(config.axi4Config))
        val axi4M2S = master(Axi4(config.axi4Config))

        val dataS2M = slave(AxiStream4(config.axisConfig))
        val dataM2S = master(AxiStream4(config.axisConfig))

        val cchS2M = slave(Stream(BDMAControlChannel(config)))
        val cchM2S = slave(Stream(BDMAControlChannel(config)))

        val indicatorS2M = out(BDMAs2mStates())
        val indicatorM2S = out(BDMAm2sStates())

        val intrS2M = out(Bool())
        val intrM2S = out(Bool())
    }
    noIoPrefix()
    Axi4SpecRenamer(io.axi4M2S)
    Axi4SpecRenamer(io.axi4S2M)
    AxiStream4SpecRenamer(io.dataS2M)
    AxiStream4SpecRenamer(io.dataM2S)

    val dma_s2m_core = BDMAs2m(config)
    val dma_m2s_core = BDMAm2s(config)

    io.axi4S2M.aw << dma_s2m_core.io.dma_aw
    io.axi4S2M.w << dma_s2m_core.io.dma_w
    io.axi4S2M.b >> dma_s2m_core.io.dma_b
    io.axi4S2M.ar.valid := False
    io.axi4S2M.ar.addr := 0
    io.axi4S2M.r.ready := False

    io.axi4M2S.ar << dma_m2s_core.io.dma_ar
    io.axi4M2S.r >> dma_m2s_core.io.dma_r
    io.axi4M2S.aw.valid := False
    io.axi4M2S.aw.addr := 0
    io.axi4M2S.w.valid := False
    io.axi4M2S.w.data := 0
    io.axi4M2S.b.ready := False

    if(config.axi4Config.useId){
        io.axi4S2M.ar.id := 0
        io.axi4M2S.aw.id := 0
    }
    if(config.axi4Config.useRegion){
        io.axi4S2M.ar.region := 0
        io.axi4M2S.aw.region := 0
    }
    if(config.axi4Config.useLen){
        io.axi4S2M.ar.len := 0
        io.axi4M2S.aw.len := 0
    }
    if(config.axi4Config.useSize){
        io.axi4S2M.ar.size := 0
        io.axi4M2S.aw.size := 0
    }
    if(config.axi4Config.useBurst){
        io.axi4S2M.ar.burst := 0
        io.axi4M2S.aw.burst := 0
    }
    if(config.axi4Config.useLock){
        io.axi4S2M.ar.lock := 0
        io.axi4M2S.aw.lock := 0
    }
    if(config.axi4Config.useCache){
        io.axi4S2M.ar.cache := 0
        io.axi4M2S.aw.cache := 0
    }
    if(config.axi4Config.useQos){
        io.axi4S2M.ar.qos := 0
        io.axi4M2S.aw.qos := 0
    }
    if(config.axi4Config.useProt){
        io.axi4S2M.ar.prot := 0
        io.axi4M2S.aw.prot := 0
    }

    if(config.axi4Config.useStrb){
        io.axi4M2S.w.strb := 0
    }
    if(config.axi4Config.useLast){
        io.axi4M2S.w.last := False
    }

    io.dataS2M >> dma_s2m_core.io.s2m_data
    io.indicatorS2M := dma_s2m_core.io.s2m_state
    io.cchS2M >> dma_s2m_core.io.s2m_cch
    io.intrS2M := dma_s2m_core.io.s2m_intr

    io.dataM2S << dma_m2s_core.io.m2s_data
    io.indicatorM2S := dma_m2s_core.io.m2s_state
    io.cchM2S >> dma_m2s_core.io.m2s_cch
    io.intrM2S := dma_m2s_core.io.m2s_intr

    /**
     * @param busCtrl
     * @param baseAddress
     * @return
     */
    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt): Area = new Area {
        busCtrl.driveAndRead(io.cchS2M.valid, address = baseAddress + 0x00, bitOffset = 0,
            documentation = s"Valid Enable Register of BDMA Stream to Memory Control Channel. (1 bits)") init(False)
        busCtrl.driveAndRead(io.cchS2M.desc_start_addr, address = baseAddress + 0x04, bitOffset = 0,
            documentation = s"Start Address Register of BDMA Stream to Memory Control Channel. (${config.axi4Config.addressWidth} bits)") init(0)
        busCtrl.driveAndRead(io.cchS2M.desc_total_bytes, address = baseAddress + 0x08, bitOffset = 0,
            documentation = s"Total Bytes Register of BDMA Stream to Memory Control Channel. (${config.bytesCntWidth} bits)") init(0)
        busCtrl.driveAndRead(io.cchS2M.desc_burst, address = baseAddress + 0x0C, bitOffset = 0,
            documentation = s"Burst Type Register of BDMA Stream to Memory Control Channel. (2 bits)") init(0)
        busCtrl.driveAndRead(io.cchS2M.desc_id, address = baseAddress + 0x10, bitOffset = 0,
            documentation = s"ID Register of BDMA Stream to Memory Control Channel. (${config.axi4Config.idWidth} bits)") init(0)
        busCtrl.driveAndRead(io.cchS2M.desc_reset, address = baseAddress + 0x14, bitOffset = 0,
            documentation = s"Reset Enable Register of BDMA Stream to Memory Control Channel. (1 bits)") init(False)
        busCtrl.read(io.cchS2M.ready, address = baseAddress + 0x18, bitOffset = 0,
            documentation = s"Ready Indicator Register of BDMA Stream to Memory Control Channel. (1 bits)")
        busCtrl.read(io.intrS2M, address = baseAddress + 0x18, bitOffset = 1,
            documentation = s"Interrupt Indicator Register of BDMA Stream to Memory Module. (1 bits)")
        busCtrl.read(io.indicatorS2M, address = baseAddress + 0x1C, bitOffset = 0,
            documentation = s"State Indicator Register of BDMA Stream to Memory Module. (${BDMAs2mStates().getBitsWidth} bits)")

        busCtrl.driveAndRead(io.cchM2S.valid, address = baseAddress + 0x20, bitOffset = 0,
            documentation = s"Valid Enable Register of BDMA Memory to Stream Control Channel. (1 bits)") init(False)
        busCtrl.driveAndRead(io.cchM2S.desc_start_addr, address = baseAddress + 0x24, bitOffset = 0,
            documentation = s"Start Address Register of BDMA Memory to Stream Control Channel. (${config.axi4Config.addressWidth} bits)") init(0)
        busCtrl.driveAndRead(io.cchM2S.desc_total_bytes, address = baseAddress + 0x28, bitOffset = 0,
            documentation = s"Total Bytes Register of BDMA Memory to Stream Control Channel. (${config.bytesCntWidth} bits)") init(0)
        busCtrl.driveAndRead(io.cchM2S.desc_burst, address = baseAddress + 0x2C, bitOffset = 0,
            documentation = s"Burst Type Register of BDMA Memory to Stream Control Channel. (2 bits)") init(0)
        busCtrl.driveAndRead(io.cchM2S.desc_id, address = baseAddress + 0x30, bitOffset = 0,
            documentation = s"ID Register of BDMA Memory to Stream Control Channel. (${config.axi4Config.idWidth} bits)") init(0)
        busCtrl.driveAndRead(io.cchM2S.desc_reset, address = baseAddress + 0x34, bitOffset = 0,
            documentation = s"Reset Enable Register of BDMA Memory to Stream Control Channel. (1 bits)") init(False)
        busCtrl.read(io.cchM2S.ready, address = baseAddress + 0x38, bitOffset = 0,
            documentation = s"Ready Indicator Register of BDMA Memory to Stream Control Channel. (1 bits)")
        busCtrl.read(io.intrM2S, address = baseAddress + 0x38, bitOffset = 1,
            documentation = s"Interrupt Indicator Register of BDMA Memory to Stream Module. (1 bits)")
        busCtrl.read(io.indicatorM2S, address = baseAddress + 0x3C, bitOffset = 0,
            documentation = s"State Indicator Register of BDMA Memory to Stream Module. (${BDMAs2mStates().getBitsWidth} bits)")
    }
}


object BDMACoreBench{
    def main(args: Array[String]): Unit = {
        val block_dma_config = BDMAConfig(axi4DataWidth = 32)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            defaultClockDomainFrequency = FixedFrequency(100 MHz), targetDirectory = "rtl/BlockDMA").
            generateSystemVerilog(new BDMACore(block_dma_config)).printPruned()
    }
}