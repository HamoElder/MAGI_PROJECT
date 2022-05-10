package magiRF.top

import magiRF.packages.PackageGen.StreamPkgGen
import magiRF.top.RFBench.Config.{axiLite4_config, codedDataType, genDemodulatorConfig, genPhyPkgConfig, interfaceIQDataType, phyDataType, power_adjustor_config, rf_payload_upper_boundary, rx_package_data_type, stream_config}
import magiRF.top.RFBench.RFBenchTop
import magiRF.top.RFBench.Receiver.RX
import magiRF.top.RFBench.Transmitter.TX
import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.bus.AxiStream4.{AxiStream4, AxiStream4SpecRenamer, AxiStream4X}

case class LoopBackTest() extends Component {
    val io = new Bundle {
        val axil4Ctrl = slave(AxiLite4(axiLite4_config))
        val trans_data = slave(AxiStream4(stream_config))
        val result_data = master(Stream(Fragment(phyDataType)))
        //      val recv_data = master(AxiStream4(stream_config))
    }
    noIoPrefix()
    AxiStream4SpecRenamer(io.trans_data)
    //  AxiStream4SpecRenamer(io.recv_data)
    AxiLite4SpecRenamer(io.axil4Ctrl)

    val axil4busCtrl: AxiLite4SlaveFactory = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")
    val axi4_stream_fifo = StreamFifo(AxiStream4X(stream_config), 256)
    axi4_stream_fifo.io.push << io.trans_data.stream
    val stream_package_gen = StreamPkgGen(genPhyPkgConfig)
    stream_package_gen.io.raw_data.stream << axi4_stream_fifo.io.pop
    val trans_fifo = StreamFifo(
        Fragment(phyDataType),
        16
    )
    trans_fifo.io.push << stream_package_gen.io.pkg_data
    val transmitter = TX()
    transmitter.io.raw_data << trans_fifo.io.pop
    val trans_to_recv_fifo = StreamFifo(interfaceIQDataType, 1024)
    trans_to_recv_fifo.io.push << transmitter.io.rf_data
    val receiver = RX()
    trans_to_recv_fifo.io.pop.ready := True
    receiver.io.raw_data.payload := trans_to_recv_fifo.io.pop.valid ? trans_to_recv_fifo.io.pop.payload | trans_to_recv_fifo.io.pop.payload.getZero
    receiver.io.raw_data.valid := True
    io.result_data << receiver.io.result_data
    val pkg_gen_bridge = stream_package_gen.driveFrom(axil4busCtrl, 0x00, this.clockDomain, this.clockDomain)
    val transmitter_bridge = transmitter.driveFrom(axil4busCtrl, 0x10, this.clockDomain, this.clockDomain)
    val receiver_bridge = receiver.driveFrom(axil4busCtrl, 0x40, this.clockDomain, this.clockDomain)
    axil4busCtrl.printDataModel()
}


object LoopBackTestSimApp extends App {

    import spinal.core.sim._
    import utils.bus.AxiLite.sim.AxiLite4Driver

    SimConfig
        .withWave
        .allOptimisation
        .doSim(new LoopBackTest()) { dut =>
            dut.clockDomain.forkStimulus(5)
            dut.io.trans_data.stream.valid #= false
            dut.io.trans_data.stream.last #= false
            dut.io.result_data.ready #= true
            val aliteDrv = AxiLite4Driver(dut.io.axil4Ctrl, dut.clockDomain)
            aliteDrv.reset()
            dut.clockDomain.waitSampling(1)
            aliteDrv.write(0x00, rf_payload_upper_boundary)
            aliteDrv.write(0x10, 0x0)
            aliteDrv.write(0x14, 2)
            aliteDrv.write(0x18, 16)
            aliteDrv.write(0x10, 0x1)
            aliteDrv.write(0x20, 0x1)
            aliteDrv.write(0x40, 0x0)
            aliteDrv.write(0x44, 0x1)
            aliteDrv.write(0x48, 3488428)
            aliteDrv.write(0x4C, 16)
            for (idx <- 0 until 2) {
                dut.io.trans_data.stream.valid #= true
                dut.io.trans_data.stream.ready #= true
                dut.io.trans_data.stream.data #= idx
                dut.io.trans_data.stream.keep_ #= 15
                dut.clockDomain.waitSampling(1)
            }
            dut.io.trans_data.stream.last #= true
            dut.io.trans_data.stream.valid #= true
            dut.io.trans_data.stream.data #= 0x03020100
            dut.io.trans_data.stream.keep_ #= 7
            dut.clockDomain.waitSampling(1)
            dut.io.trans_data.stream.last #= false
            dut.io.trans_data.stream.valid #= false
            dut.clockDomain.waitSampling(2000)
            /**
             * Next Package
             */
            for (idx <- 0 until 10) {
                dut.io.trans_data.stream.valid #= true
                dut.io.trans_data.stream.ready #= true
                dut.io.trans_data.stream.data #= idx
                dut.io.trans_data.stream.keep_ #= 15
                dut.clockDomain.waitSampling(1)
            }
            dut.io.trans_data.stream.last #= true
            dut.io.trans_data.stream.valid #= true
            dut.io.trans_data.stream.data #= 0x03020100
            dut.io.trans_data.stream.keep_ #= 7
            dut.clockDomain.waitSampling(1)
            dut.io.trans_data.stream.last #= false
            dut.io.trans_data.stream.valid #= false

            dut.clockDomain.waitSampling(4100)
        }
}

