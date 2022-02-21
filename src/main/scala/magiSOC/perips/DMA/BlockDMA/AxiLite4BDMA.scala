package magiSOC.perips.DMA.BlockDMA

import spinal.lib._
import spinal.core._
import spinal.lib.bus.amba4.axi.{Axi4, Axi4SpecRenamer}
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.bus.AxiStream4.{AxiStream4, AxiStream4SpecRenamer}

case class AxiLite4BDMAConfig(
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
    val bdmaConfig: BDMAConfig = BDMAConfig(axi4AddrWidth, axi4DataWidth, axi4MaxBurstLen, axi4IDWidth, axis4StrbEn, axis4KeepEn,
                    axis4IDEn, axis4LastEn, bytesLimit, outStandingLen, endianness)
    def addressWidth = 8
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, axi4DataWidth)
}

case class AxiLite4BDMA(config: AxiLite4BDMAConfig) extends Component {
    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))

        val axi4S2M = master(Axi4(config.bdmaConfig.axi4Config))
        val axi4M2S = master(Axi4(config.bdmaConfig.axi4Config))

        val dataS2M = slave(AxiStream4(config.bdmaConfig.axisConfig))
        val dataM2S = master(AxiStream4(config.bdmaConfig.axisConfig))

        val intrS2M = out(Bool())
        val intrM2S = out(Bool())
    }
    noIoPrefix()
    Axi4SpecRenamer(io.axi4M2S)
    Axi4SpecRenamer(io.axi4S2M)
    AxiStream4SpecRenamer(io.dataS2M)
    AxiStream4SpecRenamer(io.dataM2S)
    AxiLite4SpecRenamer(io.axil4Ctrl)

    val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")

    val bdma_core = new BDMACore(config.bdmaConfig)
    io.axi4S2M.aw << bdma_core.io.axi4S2M.aw
    io.axi4S2M.ar << bdma_core.io.axi4S2M.ar
    io.axi4S2M.r >> bdma_core.io.axi4S2M.r
    io.axi4S2M.w << bdma_core.io.axi4S2M.w
    io.axi4S2M.b >> bdma_core.io.axi4S2M.b

    io.axi4M2S.aw << bdma_core.io.axi4M2S.aw
    io.axi4M2S.ar << bdma_core.io.axi4M2S.ar
    io.axi4M2S.r >> bdma_core.io.axi4M2S.r
    io.axi4M2S.w << bdma_core.io.axi4M2S.w
    io.axi4M2S.b >> bdma_core.io.axi4M2S.b

    io.dataS2M >> bdma_core.io.dataS2M
    io.dataM2S << bdma_core.io.dataM2S

    io.intrS2M := bdma_core.io.intrS2M
    io.intrM2S := bdma_core.io.intrM2S

    bdma_core.driveFrom(axil4busCtrl, 0x00)

    axil4busCtrl.printDataModel()
}

object AxiLite4BDMABench{
    def main(args: Array[String]): Unit = {
        val axil4_dma_config = AxiLite4BDMAConfig(axi4DataWidth = 32)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            defaultClockDomainFrequency = FixedFrequency(100 MHz), targetDirectory = "rtl/AxiLite4BDMA").
            generateSystemVerilog(new AxiLite4BDMA(axil4_dma_config)).printPruned()
    }
}
