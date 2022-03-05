package magiSOC.perips.Ethernet.AxiLite4Mac

import magiSOC.perips.Ethernet.{Gmii, GmiiParameter}
import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}


case class AxiLite4MacEthConfig(cfgDataWidth: Int,
                                phyDataWidth: Int){
    def addressWidth = 8
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, cfgDataWidth)
    def phyIoConfig: PhyParameter = PhyParameter(phyDataWidth, phyDataWidth)
    def macEthConfig: MacEthParameter = MacEthParameter(phyIoConfig, cfgDataWidth, cfgDataWidth, 4 KiB, 4 KiB)
    def gmiiConfig: GmiiParameter = GmiiParameter(phyDataWidth, withEr = true)

}

class AxiLite4MacEth(config: AxiLite4MacEthConfig) extends Component {
    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))
        val gmii = master(Gmii(config.gmiiConfig))

        val interrupt = out(Bool())
        val phy_clk = in(Bool())
        val phy_resetn = in(Bool())
    }
    noIoPrefix()
    AxiLite4SpecRenamer(io.axil4Ctrl)
    val phyClockDomain:ClockDomain = ClockDomain(
        clock = io.phy_clk,
        reset = io.phy_resetn,
        config = ClockDomainConfig(
            clockEdge = RISING,
            resetKind = SYNC,
            resetActiveLevel = LOW
        )
    )
    val mac = MacEth(config.macEthConfig, phyClockDomain, phyClockDomain)
    val phyClockArea = new ClockingArea(phyClockDomain){
        io.gmii.TX.fromTxStream << mac.io.phy.tx
        mac.io.phy.rx << io.gmii.RX.toRxFlow.toStream
    }


    val busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl)
    val bridge: Area = mac.io.ctrl.driveFrom(busCtrl, baseAddress = 0x00)
    io.interrupt := mac.io.ctrl.pending
    busCtrl.printDataModel()
}


object AxiLite4MacEthBench{
    def main(args: Array[String]): Unit = {
        val axiLite4_mac_ethernet_config = AxiLite4MacEthConfig(32, 8)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/AxiLite4MacEth").generateSystemVerilog(new AxiLite4MacEth(axiLite4_mac_ethernet_config)).printPruned()
    }
}