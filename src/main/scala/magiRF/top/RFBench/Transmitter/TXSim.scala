package magiRF.top.RFBench.Transmitter

import magiRF.interface.frontend.AD9361.{AD9361Bundle, AD9361Interface}
import magiRF.modules.Modem.Misc.dataDivDynamic
import magiRF.modules.Modem.Modulator.ModulatorRTL
import magiRF.packages.PackageGen.StreamPkgGen
import magiRF.packages.Preamble.PreambleExtender
import magiRF.packages.Puncher.Puncturing
import magiRF.top.RFBench.Config.{axiLite4_config, codedDataWidth, genModulatorConfig, genModulatorDivConfig, genPkgGenConfig, iqWidth, mask_seq_1_2, modIQDataType, phyDataType, phyDataWidth, rf_payload_upper_boundary, stf_preamble_config, stream_config}
import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.bus.AxiStream4.{AxiStream4, AxiStream4SpecRenamer}
import utils.bus.IQBundle.IQBundle

case class TXSim() extends Component{
    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(axiLite4_config))
        val raw_data = slave(AxiStream4(stream_config))
        val result_data = master(Stream(IQBundle(Bits(iqWidth bits))))
    }
    noIoPrefix()
    AxiStream4SpecRenamer(io.raw_data)
    AxiLite4SpecRenamer(io.axil4Ctrl)
    val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")
    val pipeline_halt = Bits(10 bits)

    val stream_package_gen = StreamPkgGen(genPkgGenConfig)
    stream_package_gen.io.raw_data << io.raw_data

    val phy_tx_padder = PhyTxPadder()
    phy_tx_padder.io.raw_data << stream_package_gen.io.pkg_data.queue(1000).haltWhen(pipeline_halt(0))
    val phy_tx_crc = PhyTxCrc()
    val phy_tx_padder_fifo = phy_tx_padder.io.result_data.queueWithAvailability(32)
    phy_tx_crc.io.raw_data << phy_tx_padder_fifo._1.haltWhen(pipeline_halt(1))
    pipeline_halt(0) := phy_tx_padder_fifo._2 < 20
    val phy_tx_encoder = PhyTxEncoder()
    val phy_tx_crc_fifo = phy_tx_crc.io.result_data.queueWithAvailability(32)
    phy_tx_encoder.io.raw_data << phy_tx_crc_fifo._1.haltWhen(pipeline_halt(2))
    pipeline_halt(1) := phy_tx_crc_fifo._2 < 20
    val phy_tx_puncher = Puncturing(codedDataWidth, mask_seq_1_2)
    val phy_tx_encoder_fifo = phy_tx_encoder.io.result_data.queueWithAvailability(32)
    phy_tx_puncher.io.raw_data << phy_tx_encoder_fifo._1.haltWhen(pipeline_halt(3))
    pipeline_halt(2) := phy_tx_encoder_fifo._2 < 20
    val phy_header_extender = PhyHeaderExtender()
    val phy_tx_puncher_fifo = phy_tx_puncher.io.punched_data.toStream.queueWithAvailability(32)
    phy_header_extender.io.raw_data << phy_tx_puncher_fifo._1.haltWhen(pipeline_halt(4))
    pipeline_halt(3) := phy_tx_puncher_fifo._2 < 20
    phy_header_extender.io.mod_method := B"8'b01010101"
    val phy_tx_scrambler = PhyTxScrambler()
    val phy_header_extender_fifo = phy_header_extender.io.result_data.queueWithAvailability(32)
    phy_tx_scrambler.io.raw_data << phy_header_extender_fifo._1.haltWhen(pipeline_halt(5))
    pipeline_halt(4) := phy_header_extender_fifo._2 < 20

    val mod_data_div = dataDivDynamic(genModulatorDivConfig)
    val phy_tx_scrambler_fifo = phy_tx_scrambler.io.result_data.queueWithAvailability(32)
    mod_data_div.io.base_data << phy_tx_scrambler_fifo._1.haltWhen(pipeline_halt(6))
    pipeline_halt(5) := phy_tx_scrambler_fifo._2 < 20
    val mod_rtl = ModulatorRTL(genModulatorConfig)
    mod_rtl.io.data_flow.unit_data << mod_data_div.io.unit_data.resized
    val phy_tx_oversampling = PhyTxOverSampling()
    val mod_rtl_fifo = mod_rtl.io.data_flow.mod_iq.toStream.queueWithAvailability(32)
    phy_tx_oversampling.io.raw_data << mod_rtl_fifo._1.haltWhen(pipeline_halt(7))
    pipeline_halt(6) := mod_rtl_fifo._2 < 20
    val phy_tx_filter = PhyTxFilter()
    phy_tx_filter.io.raw_data << phy_tx_oversampling.io.result_data
    val stf_preamble_adder = PreambleExtender(stf_preamble_config)
    val phy_tx_filter_fifo = phy_tx_filter.io.result_data.queueWithAvailability(32)
    stf_preamble_adder.io.raw_data << phy_tx_filter_fifo._1.haltWhen(pipeline_halt(8))
    pipeline_halt(7) := phy_tx_filter_fifo._2 < 20
    val phy_tx_front = PhyTxICFront()
    val stf_preamble_adder_fifo = stf_preamble_adder.io.preamble_data.queueWithAvailability(32)
    phy_tx_front.io.raw_data << stf_preamble_adder_fifo._1.haltWhen(pipeline_halt(9))
    pipeline_halt(8) := stf_preamble_adder_fifo._2 < 20

    val phy_tx_front_fifo = phy_tx_front.io.result_data.queueWithAvailability(32)
    io.result_data << phy_tx_front_fifo._1
    pipeline_halt(9) := phy_tx_front_fifo._2 < 20

    val pkg_gen_bridge = stream_package_gen.driveFrom(axil4busCtrl, 0x00, this.clockDomain, this.clockDomain)
    val data_div_bridge = mod_data_div.driveFrom(axil4busCtrl, 0x10, this.clockDomain, this.clockDomain)
    val mod_rtl_bridge = mod_rtl.driveFrom(axil4busCtrl, 0x20, this.clockDomain, this.clockDomain)
    axil4busCtrl.printDataModel()

}


object RFBenchTXSimApp extends App{

    import spinal.core.sim._
    import utils.bus.AxiLite.sim.AxiLite4Driver
    SimConfig
        .withWave
        .allOptimisation
        .doSim(new TXSim()){ dut =>
            dut.clockDomain.forkStimulus(5)
            dut.io.raw_data.stream.valid #= false
            dut.io.raw_data.stream.last #= false
            dut.io.result_data.ready #= false
            dut.clockDomain.waitSampling(1)
            val aliteDrv = AxiLite4Driver(dut.io.axil4Ctrl, dut.clockDomain)
            aliteDrv.reset()
            dut.clockDomain.waitSampling(10)
            aliteDrv.write(0x00, rf_payload_upper_boundary)
//            aliteDrv.write(0x10, 0x0)
//            aliteDrv.write(0x14, 4)
//            aliteDrv.write(0x18, 16)
//            aliteDrv.write(0x10, 0x1)
//            aliteDrv.write(0x20, 0x2)
            aliteDrv.write(0x10, 0x0)
            aliteDrv.write(0x14, 2)
            aliteDrv.write(0x18, 16)
            aliteDrv.write(0x10, 0x1)
            aliteDrv.write(0x20, 0x1)
            for(idx <- 0 until 150){
                dut.io.raw_data.stream.valid #= true
                dut.io.result_data.ready #= true
                //                dut.io.raw_data.valid.randomize()
                //                dut.io.pkg_data.ready.randomize()
                dut.io.raw_data.stream.data #= 0x04030201
                //                dut.io.raw_data.payload.strb.randomize()
                dut.io.raw_data.stream.strb #= 15
                dut.clockDomain.waitSampling(1)
            }
            dut.io.raw_data.stream.last #= true
            dut.io.raw_data.stream.valid #= true
            dut.io.raw_data.stream.data #= 0x12345678
            dut.io.raw_data.stream.strb #= 3
            dut.clockDomain.waitSampling(1)
            dut.io.raw_data.stream.last #= false
            dut.io.raw_data.stream.valid #= false
            dut.clockDomain.waitSampling(9000)
        }
}


