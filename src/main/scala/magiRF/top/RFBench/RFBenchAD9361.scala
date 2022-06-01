package magiRF.top.RFBench
import magiRF.interfaces.frontend.AD9361.AD9361Interface
import magiRF.packages.PackageGen.StreamPkgGen
import magiRF.packages.PackageRestructured.StreamPackageRestructured
import magiRF.top.RFBench.Config.{axiLite4_config, cross_clk_fifo_depth, genPhyPkgConfig, genStreamPkgConfig, interfaceIQDataType, phyDataType, rf_payload_upper_boundary, rxFifoCntType, rxFifoDepth, stream_config, stream_data_type}
import magiRF.top.RFBench.Receiver.RX
import magiRF.top.RFBench.Transmitter.{PhyTxInterface, TX}
import magiRF.top.RFBench.Utils.rxIntrCtrl
import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.bus.AxiLite.{AxiLite4, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.bus.AxiStream4.{AxiStream4, AxiStream4SpecRenamer, AxiStream4X}
import utils.debugger.Ila


case class RFBenchAD9361() extends Component{
    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(axiLite4_config))
        val trans_data = slave(AxiStream4(stream_config))
        val recv_data = master(AxiStream4(stream_config))
        val rf_if = PhyTxInterface()
        val recv_intr = out(Bool())
        val ad9361_rx_clk = out(Bool())
    }
    noIoPrefix()
    AxiStream4SpecRenamer(io.trans_data)
    AxiStream4SpecRenamer(io.recv_data)
    AxiLite4SpecRenamer(io.axil4Ctrl)
    val axil4busCtrl: AxiLite4SlaveFactory = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")
    val rf_interface = AD9361Interface()
    /**
     * Tx
     */
    val stream_package_gen = StreamPkgGen(genPhyPkgConfig)
    stream_package_gen.io.raw_data << io.trans_data
    val core_to_rf_fifoCc = StreamFifoCC(
        Fragment(phyDataType),
        64,
        this.clockDomain,
        rf_interface.txClockDomain
    )
    core_to_rf_fifoCc.io.push << stream_package_gen.io.pkg_data
    val rf_to_core_fifoCc = StreamFifoCC(
        AxiStream4X(stream_config),
        1 << (rxFifoDepth.toBigInt.bitLength),
        rf_interface.rxClockDomain,
        this.clockDomain
    )

    val rx_intr_ctrl = rxIntrCtrl()
    rx_intr_ctrl.io.raw_data << rf_to_core_fifoCc.io.pop
    io.recv_data << rx_intr_ctrl.io.result_data
    io.recv_intr := rx_intr_ctrl.io.intr
    io.ad9361_rx_clk := rf_interface.io.data_clk
    val rfTxClockArea = new ClockingArea(rf_interface.txClockDomain){
        val transmitter = TX()
        transmitter.io.raw_data << core_to_rf_fifoCc.io.pop
        transmitter.io.rf_data.ready := rf_interface.io.dac_data.ready
        rf_interface.io.dac_data.valid := transmitter.io.rf_data.valid
        rf_interface.io.dac_data.payload(1) := transmitter.io.rf_data.payload
        rf_interface.io.dac_data.payload(0) := transmitter.io.rf_data.payload
        rf_interface.io.dac_t1_mod := False
        rf_interface.io.adc_r1_mod := False

        rf_interface.io.rx_if_frame := io.rf_if.rx_if_frame
        rf_interface.io.rx_if_data := io.rf_if.rx_if_data
        rf_interface.io.rx_data_clk := io.rf_if.rx_data_clk

        io.rf_if.tx_if_frame := rf_interface.io.tx_if_frame
        io.rf_if.tx_fb_clk := rf_interface.io.tx_fb_clk
        io.rf_if.tx_if_data := rf_interface.io.tx_if_data

//        val tx_ila = Ila(Seq(rf_interface.io.dac_data.valid, rf_interface.io.dac_data.payload(0).cha_i,
//            rf_interface.io.dac_data.payload(0).cha_q, rf_interface.io.dac_data.payload(1).cha_i, rf_interface.io.dac_data.payload(1).cha_q), 2048)
    }

    val rfRxClockArea = new ClockingArea(rf_interface.rxClockDomain){
        val receiver = RX()
        receiver.io.raw_data.payload := rf_interface.io.adc_data.payload(0)
        receiver.io.raw_data.valid := rf_interface.io.adc_data.valid
        val stream_package_restructured: StreamPackageRestructured = StreamPackageRestructured(genStreamPkgConfig)
        stream_package_restructured.io.pkg_data << receiver.io.result_data
        rf_to_core_fifoCc.io.push << stream_package_restructured.io.stream_data.stream

//        val rx_ila = Ila(Seq(rf_interface.io.adc_data.valid, rf_interface.io.adc_data.payload(0).cha_i,
//            rf_interface.io.adc_data.payload(0).cha_q, rf_interface.io.adc_data.payload(1).cha_i, rf_interface.io.adc_data.payload(1).cha_q), 2048)
    }

    val pkg_gen_bridge: Area = stream_package_gen.driveFrom(axil4busCtrl, 0x00, this.clockDomain, this.clockDomain)
    val transmitter_bridge: Area = rfTxClockArea.transmitter.driveFrom(axil4busCtrl, 0x10, this.clockDomain, rf_interface.txClockDomain)
    val receiver_bridge: Area = rfRxClockArea.receiver.driveFrom(axil4busCtrl, 0x40, this.clockDomain, rf_interface.rxClockDomain)
    val receiver_intr_ctrl_bridge: Area = rx_intr_ctrl.driveFrom(axil4busCtrl, 0x70)
    axil4busCtrl.printDataModel()
}

object RFBenchAD9361Bench {
    def main(args: Array[String]): Unit = {
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/RFBenchAD9361").generateSystemVerilog(new RFBenchAD9361()).printPruned()
    }
}