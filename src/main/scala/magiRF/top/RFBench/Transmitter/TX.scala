package magiRF.top.RFBench.Transmitter


import magiRF.modules.Modem.Misc.dataDivDynamic
import magiRF.modules.Modem.Modulator.ModulatorRTL
import magiRF.packages.PackageGen.StreamPkgGen
import magiRF.packages.Puncher.Puncturing
import magiRF.top.RFBench.Config.{axiLite4_config, codedDataWidth, genPkgGenConfig, mask_seq_1_2, rf_payload_upper_boundary, stream_config, genModulatorDivConfig}
import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.bus.AxiStream4.{AxiStream4, AxiStream4SpecRenamer}

case class TX() extends Component{
    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(axiLite4_config))
        val raw_data = slave(AxiStream4(stream_config))
        val coded_data = master(Stream(Fragment(Bits(codedDataWidth bits))))
//        val rf_data = AD9361Bundle()
//        val rf_clk = in(Bool())
//        val rf_resetn = in(Bool())
    }
    noIoPrefix()
    AxiStream4SpecRenamer(io.raw_data)
    AxiLite4SpecRenamer(io.axil4Ctrl)
    val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")
    val pipeline_halt = Reg(Bool()) init(False)

    val stream_package_gen = StreamPkgGen(genPkgGenConfig)
    stream_package_gen.io.raw_data << io.raw_data
    val phy_tx_padder = PhyTxPadder()
    phy_tx_padder.io.raw_data << stream_package_gen.io.pkg_data.queue(200)
    val phy_tx_crc = PhyTxCrc()
    phy_tx_crc.io.raw_data << phy_tx_padder.io.result_data.queue(200)
    val phy_tx_encoder = PhyTxEncoder()
    phy_tx_encoder.io.raw_data << phy_tx_crc.io.result_data.queue(200)
    val phy_tx_puncher = Puncturing(codedDataWidth, mask_seq_1_2)
    phy_tx_puncher.io.raw_data << phy_tx_encoder.io.result_data.queue(200)
    val phy_header_extender = PhyHeaderExtender()
    phy_header_extender.io.raw_data << phy_tx_puncher.io.punched_data.toStream.queue(200)
    phy_header_extender.io.mod_method := B"8'b01010101"
    val phy_tx_scrambler = PhyTxScrambler()
    phy_tx_scrambler.io.raw_data << phy_header_extender.io.result_data.queue(200)
    val mod_data_div = dataDivDynamic(genModulatorDivConfig)
//    mod_data_div.io.base_data.payload << phy_tx_scrambler.io.result_data
//    mod_data_div.io.base_data.valid := io.base_data.valid
//    io.base_data.ready := mod_data_div.io.base_data.ready
//
//    val mod_rtl = ModulatorRTL(config.modulatorRTLConfig)
//    mod_rtl.io.data_flow.unit_data << mod_data_div.io.unit_data.resized
//    io.mod_iq.payload := mod_rtl.io.data_flow.mod_iq.payload
//    io.mod_iq.valid := mod_rtl.io.data_flow.mod_iq.valid
//
//    io.coded_data <<
//    phy_tx_puncher.io.punched_data

//    val rfClockDomain: ClockDomain = ClockDomain(
//        clock = io.rf_clk,
//        reset = io.rf_resetn,
//        config = ClockDomainConfig(
//            clockEdge = RISING,
//            resetKind = SYNC,
//            resetActiveLevel = LOW
//        )
//    )
//    val rfClockArea = new ClockingArea(rfClockDomain) {


//    }


//    val mod_data_div = dataDivDynamic(genModulatorDivConfig)
//    val mod_rtl = ModulatorRTL(genModulatorConfig)

//    val stf_preamble_adder = PreambleExtender(stf_preamble_config)
//    val ltf_preamble_adder = PreambleExtender(ltf_preamble_config)

//    mod_data_div.io.base_data.payload := io.base_data.payload
//    mod_data_div.io.base_data.valid := io.base_data.valid
//    io.base_data.ready := mod_data_div.io.base_data.ready
//
//
//    mod_rtl.io.data_flow.unit_data << mod_data_div.io.unit_data.resized
//    io.mod_iq.payload := mod_rtl.io.data_flow.mod_iq.payload
//    io.mod_iq.valid := mod_rtl.io.data_flow.mod_iq.valid
//
//    val mod_data_bridge = rfClockArea.mod_data_div.driveFrom(axil4busCtrl, 0x00, this.clockDomain, rfClockDomain)
//    val mod_rtl_bridge = rfClockArea.mod_rtl.driveFrom(axil4busCtrl, 0x10, this.clockDomain, rfClockDomain)
    val _ = stream_package_gen.driveFrom(axil4busCtrl, 0x00, this.clockDomain, this.clockDomain)

    axil4busCtrl.printDataModel()

}

object RFBenchTXBench {
    def main(args: Array[String]): Unit = {
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/RFBenchTX").generateSystemVerilog(new TX()).printPruned()
    }
}


object RFBenchTXSimApp extends App{

    import spinal.core.sim._
    import utils.bus.AxiLite.sim.AxiLite4Driver
    SimConfig
        .withWave
        .allOptimisation
        .doSim(new TX()){ dut =>
            dut.clockDomain.forkStimulus(5)
            dut.io.raw_data.stream.valid #= false
            dut.io.raw_data.stream.last #= false
            dut.io.coded_data.ready #= true
            dut.clockDomain.waitSampling(1)
            val aliteDrv = AxiLite4Driver(dut.io.axil4Ctrl, dut.clockDomain)
            aliteDrv.reset()
            dut.clockDomain.waitSampling(10)
            aliteDrv.write(0x00, rf_payload_upper_boundary)


            for(idx <- 0 until 330){
                dut.io.raw_data.stream.valid #= true
                dut.io.coded_data.ready #= true
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
            dut.clockDomain.waitSampling(500)
        }
}

