package magiSOC.perips.SPI

import spinal.core._
import spinal.lib._
import spinal.lib.com.spi.{SpiSlave, SpiSlaveCtrl, SpiSlaveCtrlGenerics, SpiSlaveCtrlMemoryMappedConfig}
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}

case class AxiLite4SpiSlaveConfig(
                                     dataWidth     : Int = 8,
                                     rxFifoDepth   : Int = 32,
                                     txFifoDepth   : Int = 32,
                                     cfgDataWidth  : Int = 32
                                 ) {
    def addressWidth = 8
    def spiCoreConfig: SpiSlaveCtrlGenerics = SpiSlaveCtrlGenerics(dataWidth)
    def spiSlaveConfig: SpiSlaveCtrlMemoryMappedConfig = SpiSlaveCtrlMemoryMappedConfig(spiCoreConfig, rxFifoDepth, txFifoDepth)
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, cfgDataWidth)
}

case class AxiLite4SpiSlave(config: AxiLite4SpiSlaveConfig) extends Component{
    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))
        val spi = master(SpiSlave())
    }
    noIoPrefix()
    AxiLite4SpecRenamer(io.axil4Ctrl)
    val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")
    val core = new SpiSlaveCtrl(config.spiCoreConfig)
    core.io.driveFrom(axil4busCtrl, 0)(config.spiSlaveConfig)
    io.spi <> core.io.spi
}

object AxiLite4SpiSlaveBench{
    def main(args: Array[String]): Unit ={
        val spi_slave_config = AxiLite4SpiSlaveConfig(8)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/AxiLite4SpiSlave").generateSystemVerilog(new AxiLite4SpiSlave(spi_slave_config)).printPruned().printUnused()
    }
}