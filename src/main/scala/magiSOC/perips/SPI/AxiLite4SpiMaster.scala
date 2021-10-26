package magiSOC.perips.SPI

import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}


case class AxiLite4SpiMasterConfig(
                                      ssWidth       : Int,
                                      timerWidth    : Int,
                                      dataWidth     : Int = 8,
                                      useSclk       : Boolean = true,
                                      cmdFifoDepth  : Int = 32,
                                      rspFifoDepth  : Int = 32,
                                      cfgDataWidth  : Int = 32
                                  ){
    def addressWidth = 8
    def spiCoreConfig: SpiMasterCtrlGenerics = SpiMasterCtrlGenerics(ssWidth, timerWidth, dataWidth)
    def spiMasterConfig: SpiMasterCtrlMemoryMappedConfig = SpiMasterCtrlMemoryMappedConfig(spiCoreConfig, cmdFifoDepth, rspFifoDepth)
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, cfgDataWidth)
}
case class AxiLite4SpiMaster(config : AxiLite4SpiMasterConfig) extends Component {
    val io = new Bundle{
        val axil4Ctrl =  slave(AxiLite4(config.axiLite4Config))
        val spi = master(SpiMaster(ssWidth = config.ssWidth, config.useSclk))
        val interrupt = out Bool()
    }
    noIoPrefix()
    AxiLite4SpecRenamer(io.axil4Ctrl)
    val spiCtrl = new SpiMasterCtrl(config.spiCoreConfig)

    io.spi <> spiCtrl.io.spi

    val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")
    val bridge = spiCtrl.io.driveFrom(axil4busCtrl)(config.spiMasterConfig)
    io.interrupt := bridge.interruptCtrl.interrupt
    axil4busCtrl.printDataModel()
}

object axil4SpiMasterCtrlBench{
    def main(args: Array[String]): Unit ={
        val spi_master_config = AxiLite4SpiMasterConfig(1, 16)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl").generateSystemVerilog(new AxiLite4SpiMaster(spi_master_config)).printPruned().printUnused()
    }
}
