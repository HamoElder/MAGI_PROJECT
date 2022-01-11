package magiSOC.perips.DMA.BlockDMA

import spinal.lib._
import spinal.core._
import spinal.lib.bus.amba4.axi.{Axi4Config, Axi4ReadOnly}
import utils.bus.AxiStream4.{AxiStream4, AxiStream4Config}

object DMAReadStates extends SpinalEnum{
    val IDLE, START, WRITE, FINISH_BURST, DROP_DATA = newElement()
}


case class BDMAConfig(
                         axi4AddrWidth  : Int = 16,
                         axi4DataWidth  : Int = 32,
                         axi4MaxBurstLen: Int = 16,
                         axi4IDWidth    : Int = 4,

                         axis4StrbEn    : Boolean = true,
                         axis4KeepEn    : Boolean = true,
                         axis4IDEn      : Boolean = true,

                         bytesLimit     : BigInt = 1 GiB,
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
    def axi4BurstSize: Int = log2Up(axi4Config.bytePerWord)
    def axi4MaxBurstSize: Int = axi4MaxBurstLen << axi4BurstSize
    def cross4kBoundaryLimit: Int = (Math.pow(2, 12)).toInt
    def cross4kBoundaryMask: Int = (cross4kBoundaryLimit - 1)
    println(axi4BurstSize, axi4MaxBurstSize)

    def axisConfig: AxiStream4Config = AxiStream4Config(
        dataWidth = axi4DataWidth,
        idWidth = axi4IDWidth,
        userWidth = -1,
        useID = axis4IDEn, useStrb = axis4StrbEn, useKeep = axis4KeepEn
    )

    def bytesCntWidth: Int = log2Up(bytesLimit)
    def bytesCntDataType: UInt = UInt(bytesCntWidth bits)

    def burstCntWidth: Int = log2Up(bytesLimit / axi4Config.bytePerWord + 1)
    def burstCntDataType: UInt = UInt(burstCntWidth bits)

    def cross4kAssert = 12

}

case class DMAControlChannel(config: BDMAConfig)extends Bundle with IMasterSlave {
    val desc_addr = config.axi4Config.addressType
    val desc_total_bytes = config.bytesCntDataType
    val desc_burst = Bits(2 bits)
    val desc_id = config.axi4Config.idType

    override def asMaster(): Unit = {
        out(desc_total_bytes, desc_addr, desc_burst, desc_id)
    }

    override type RefOwnerType = this.type
}


case class BlockDMACore(config: BDMAConfig) extends Component{
    val io = new Bundle{
        val axi4Data = master(Axi4ReadOnly(config.axi4Config))

//        val m2s_data = master(AxiStream4(config.axisConfig))

        val m2s_desc_valid = in(Bool())
        val m2s_desc_ready = out(Bool())
        val m2s_desc_addr = in(config.axi4Config.addressType)
        val m2s_desc_total_bytes = in(config.bytesCntDataType)
        val m2s_desc_burst = in(Bits(2 bits))
        val m2s_desc_id = in(config.axi4Config.idType)
        val m2s_intr_en = in(Bool())

        val intr_m2s = out(Bool())

//        val stream_to_mem = slave(AxiStream4(config.axisConfig))

//        val intr_s2m = out(Bool())
    }
    noIoPrefix()


    val m2s_inst = BlockDMARead(config)
    m2s_inst.io.dma_cch.valid := io.m2s_desc_valid
    io.m2s_desc_ready := m2s_inst.io.dma_cch.ready
    m2s_inst.io.dma_cch.desc_addr := io.m2s_desc_addr
    m2s_inst.io.dma_cch.desc_total_bytes := io.m2s_desc_total_bytes
    m2s_inst.io.dma_cch.desc_burst := io.m2s_desc_burst
    m2s_inst.io.dma_cch.desc_id := io.m2s_desc_id
//    m2s_inst.io.dma_cch.intr_en := io.m2s_intr_en


//    io.axi4Data.ar << BDMARead_inst.io.dma_ar
//    io.axi4Data.r << BDMARead_inst.io.dma_r

    io.intr_m2s := io.m2s_intr_en ? m2s_inst.io.intr_m2s | False

    /**
     * AXI4 Connection
     */
    io.axi4Data.ar << m2s_inst.io.dma_ar
    m2s_inst.io.dma_r << io.axi4Data.r

    /**
     * AXISTREAM4 Connection
     */
//    io.m2s_channel << m2s_inst.io.data_m2s
}

object BlockDMACoreBench{
    def main(args: Array[String]): Unit = {
        val block_dma_config = BDMAConfig()
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            defaultClockDomainFrequency = FixedFrequency(100 MHz), targetDirectory = "rtl/BlockDMA").
            generateSystemVerilog(new BlockDMACore(block_dma_config)).printPruned()
    }
}


object BlockDMACoreSimApp extends App{
    import spinal.core.sim._
    val block_dma_config = BDMAConfig()
    SimConfig.withWave.allOptimisation.doSim(new BlockDMACore(block_dma_config)){ dut =>
        dut.clockDomain.forkStimulus(10)
        dut.clockDomain.reset
        dut.io.m2s_desc_valid #= false
        dut.io.axi4Data.ar.ready #= false
//        dut.io.m2s_channel.stream.ready #= true

        dut.clockDomain.waitSampling(10)

        dut.io.m2s_desc_valid #= true
        dut.io.m2s_desc_addr #= 0x1f3
        dut.io.m2s_desc_total_bytes #= 0x12
        dut.io.m2s_desc_burst #= 1
        dut.io.m2s_desc_id #= 3
        dut.io.m2s_intr_en #= true

        dut.clockDomain.waitSampling(1)

        dut.io.axi4Data.ar.ready #= true
        dut.clockDomain.waitSampling(2)
//        dut.io.axi4Data.ar.ready #= false

        for(idx <- 0 until 100){
            dut.io.axi4Data.r.valid #= true
            dut.io.axi4Data.r.data #= idx
            dut.io.axi4Data.r.id #= 3
            dut.clockDomain.waitSampling(1)
        }
        dut.io.axi4Data.ar.ready #= false
        dut.io.axi4Data.r.valid #= false
        dut.clockDomain.waitSampling(100)
    }
}

