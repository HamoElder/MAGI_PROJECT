package magiRF.top.RFBench

import magiRF.packages.PackageGen.StreamPkgGen
import magiRF.packages.PackageRestructured.StreamPackageRestructured
import magiRF.top.RFBench.Config._
import magiRF.top.RFBench.Receiver.RX
import magiRF.top.RFBench.Transmitter.TX
import magiRF.top.RFBench.Utils.rxIntrCtrl
import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.bus.AxiStream4.{AxiStream4, AxiStream4SpecRenamer, AxiStream4X}


case class RFBenchIQ() extends Component {
    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(axiLite4_config))
        val trans_data = slave(AxiStream4(stream_config))
        val recv_data = master(AxiStream4(stream_config))
        val recv_intr = out(Bool())

        val rf_tx_data = master(Stream(interfaceIQDataType))
        val rf_rx_data = slave(Flow(interfaceIQDataType))
        val rf_clk = in(Bool())
    }
    noIoPrefix()
    AxiStream4SpecRenamer(io.trans_data)
    AxiStream4SpecRenamer(io.recv_data)
    AxiLite4SpecRenamer(io.axil4Ctrl)
    val axil4busCtrl: AxiLite4SlaveFactory = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")

    val rfClockDomain = ClockDomain(
        clock = io.rf_clk,
        reset = this.clockDomain.reset,
        config = ClockDomainConfig(
            clockEdge = this.clockDomain.config.clockEdge,
            resetKind = this.clockDomain.config.resetKind,
            resetActiveLevel = this.clockDomain.config.resetActiveLevel
        )
    )

    val stream_package_gen = StreamPkgGen(genPhyPkgConfig)
    stream_package_gen.io.raw_data << io.trans_data
    val core_to_rf_fifoCc = StreamFifoCC(
        Fragment(phyDataType),
        16,
        this.clockDomain,
        rfClockDomain
    )
    core_to_rf_fifoCc.io.push << stream_package_gen.io.pkg_data
    val rf_to_core_fifoCc: StreamFifoCC[AxiStream4X] = StreamFifoCC(
        AxiStream4X(stream_config),
        1 << (rxFifoDepth.toBigInt.bitLength),
        rfClockDomain,
        this.clockDomain
    )

    val rx_intr_ctrl = new rxIntrCtrl()
    rx_intr_ctrl.io.raw_data << rf_to_core_fifoCc.io.pop
    io.recv_data << rx_intr_ctrl.io.result_data
    io.recv_intr := rx_intr_ctrl.io.intr
    /**
     * Tx
     */
    val rfTxClockArea = new ClockingArea(rfClockDomain){
        val transmitter = TX()
        transmitter.io.raw_data << core_to_rf_fifoCc.io.pop
        io.rf_tx_data << transmitter.io.rf_data
    }
    /**
     * Rx
     */
    val rfRxClockArea = new ClockingArea(rfClockDomain){
        val receiver = RX()
        receiver.io.raw_data << io.rf_rx_data
        val stream_package_restructured: StreamPackageRestructured = StreamPackageRestructured(genStreamPkgConfig)
        stream_package_restructured.io.pkg_data << receiver.io.result_data
        rf_to_core_fifoCc.io.push << stream_package_restructured.io.stream_data.stream
    }

    val pkg_gen_bridge: Area = stream_package_gen.driveFrom(axil4busCtrl, 0x00, this.clockDomain, this.clockDomain)
    val transmitter_bridge: Area = rfTxClockArea.transmitter.driveFrom(axil4busCtrl, 0x10, this.clockDomain, rfClockDomain)
    val receiver_bridge: Area = rfRxClockArea.receiver.driveFrom(axil4busCtrl, 0x40, this.clockDomain, rfClockDomain)
    val receiver_intr_ctrl_bridge: Area = rx_intr_ctrl.driveFrom(axil4busCtrl, 0x70)
    axil4busCtrl.printDataModel()
}


object RFBenchIQBench{
    def main(args: Array[String]): Unit = {
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/RFBenchIQ").generateSystemVerilog(new RFBenchIQ()).printPruned()
    }
}