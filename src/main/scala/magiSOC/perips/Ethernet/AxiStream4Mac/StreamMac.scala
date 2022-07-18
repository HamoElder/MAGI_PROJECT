package magiSOC.perips.Ethernet.AxiStream4Mac

import magiRF.packages.PackageGen.{StreamPkgGen, StreamPkgGenConfig}

import magiSOC.perips.Ethernet.{PhyRx, PhyTx}
import spinal.core._
import spinal.lib._
import utils.bus.AxiStream4.{AxiStream4, AxiStream4Config, AxiStream4SpecRenamer, AxiStream4X}

case class MacEthConfig(
                            phyTxDataWidth   : Int,
                            phyRxDataWidth   : Int,
                            streamDataWidth  : Int,
                            streamFifoDepth  : BigInt,
                            phyTxFifoDepth   : BigInt
                        ){
    def axi4StreamConfig: AxiStream4Config = AxiStream4Config(streamDataWidth, useID = false, useStrb = false, useKeep = true, useLast = true)
    def phyPkgConfig: StreamPkgGenConfig = StreamPkgGenConfig(streamDataWidth, phyTxDataWidth, 1600, LITTLE, useKeep = true)
    def phyTxDataType: PhyTx = PhyTx(phyTxDataWidth)
    def phyRxDataType: PhyRx = PhyRx(phyRxDataWidth)
}


case class StreamMac(config: MacEthConfig) extends Component {
    val io = new Bundle{
        val trans_data = slave(AxiStream4(config.axi4StreamConfig))
//        val recv_data = master(AxiStream4(config.axi4StreamConfig))

        val phyTxInterface = master(Stream(Fragment(config.phyTxDataType)))

        val eth_clk = in(Bool())
        val eth_reset = in(Bool())
    }
    noIoPrefix()
    AxiStream4SpecRenamer(io.trans_data)
//    AxiStream4SpecRenamer(io.recv_data)

    val ethClockDomain = ClockDomain(
        clock = io.eth_clk,
        reset = io.eth_reset,
        config = ClockDomainConfig(
            clockEdge = RISING,
            resetKind = SYNC,
            resetActiveLevel = HIGH
        )
    )
    val stream_package_gen = StreamPkgGen(config.phyPkgConfig)
    stream_package_gen.io.raw_data << io.trans_data
    val core_to_eth_fifoCc = StreamFifoCC(
        Fragment(config.phyTxDataType),
        config.streamFifoDepth.toInt,
        this.clockDomain,
        ethClockDomain
    )
    stream_package_gen.io.slices_limit := 1500
    core_to_eth_fifoCc.io.push.data := stream_package_gen.io.pkg_data.fragment
    core_to_eth_fifoCc.io.push.last := stream_package_gen.io.pkg_data.last
    core_to_eth_fifoCc.io.push.valid := stream_package_gen.io.pkg_data.valid
    stream_package_gen.io.pkg_data.ready := core_to_eth_fifoCc.io.push.ready

    val eth_to_core_fifoCc = StreamFifoCC(
        AxiStream4X(config.axi4StreamConfig),
        config.streamFifoDepth.toInt,
        ethClockDomain,
        this.clockDomain
    )

    val ethClockArea = new ClockingArea(ethClockDomain){
        val transmitter = new MacTx(config.phyTxDataWidth, config.phyTxFifoDepth.toInt)
        transmitter.io.raw_data << core_to_eth_fifoCc.io.pop
        io.phyTxInterface << transmitter.io.result_data
    }

}

object StreamMacBench{
    def main(args: Array[String]): Unit = {
        val mac_ethernet_config = MacEthConfig(8, 8, 32, 64, 1600)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/StreamMac").generateSystemVerilog(new StreamMac(mac_ethernet_config)).printPruned()
    }
}
