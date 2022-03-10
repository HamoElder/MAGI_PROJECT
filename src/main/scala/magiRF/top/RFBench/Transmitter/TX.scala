package magiRF.top.RFBench.Transmitter


import magiRF.interface.frontend.AD9361.{AD9361Bundle, AD9361Interface}
import magiRF.modules.Modem.Misc.dataDivDynamic
import magiRF.modules.Modem.Modulator.ModulatorRTL
import magiRF.packages.PackageGen.StreamPkgGen
import magiRF.packages.Preamble.PreambleExtender
import magiRF.packages.Puncher.Puncturing
import magiRF.top.RFBench.Config.{axiLite4_config, codedDataWidth, genModulatorConfig, genModulatorDivConfig, genPkgGenConfig, mask_seq_1_2, modIQDataType, phyDataType, phyDataWidth, rf_payload_upper_boundary, stf_preamble_config, stream_config}
import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.bus.AxiStream4.{AxiStream4, AxiStream4SpecRenamer}
import utils.bus.IQBundle.IQBundle

case class TX() extends Component{
    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(axiLite4_config))
        val raw_data = slave(AxiStream4(stream_config))
        val rf_if = PhyTxInterface()
    }
    noIoPrefix()
    AxiStream4SpecRenamer(io.raw_data)
    AxiLite4SpecRenamer(io.axil4Ctrl)
    val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")


    val rf_interface = AD9361Interface()
    val stream_package_gen = StreamPkgGen(genPkgGenConfig)
    stream_package_gen.io.raw_data << io.raw_data
    val core_to_rf_fifoCc = StreamFifoCC(
        Fragment(phyDataType),
        200,
        this.clockDomain,
        rf_interface.txClockDomain
    )
    core_to_rf_fifoCc.io.push << stream_package_gen.io.pkg_data

    val rfClockArea = new ClockingArea(rf_interface.txClockDomain) {
        val pipeline_halt = Reg(Bool()) init(False)



        val phy_tx_padder = PhyTxPadder()
        phy_tx_padder.io.raw_data << queue(200)
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
        mod_data_div.io.base_data << phy_tx_scrambler.io.result_data.queue(2000)
        val mod_rtl = ModulatorRTL(genModulatorConfig)
        mod_rtl.io.data_flow.unit_data << mod_data_div.io.unit_data.resized
        val stf_preamble_adder = PreambleExtender(stf_preamble_config)
        stf_preamble_adder.io.raw_data << mod_rtl.io.data_flow.mod_iq.toStream.queue(2000)
        val phy_tx_front = PhyTxICFront()
        phy_tx_front.io.raw_data << stf_preamble_adder.io.preamble_data.queue(8)

        phy_tx_front.io.result_data.ready := rf_interface.io.dac_data.ready
        rf_interface.io.dac_data.valid := phy_tx_front.io.result_data.valid
        rf_interface.io.dac_data.payload(0) := phy_tx_front.io.result_data.payload
        rf_interface.io.dac_data.payload(1) := phy_tx_front.io.result_data.payload.getZero
        rf_interface.io.dac_t1_mod := False
        rf_interface.io.adc_r1_mod := False

        rf_interface.io.rx_if_frame := io.rf_if.rx_if_frame
        rf_interface.io.rx_if_data := io.rf_if.rx_if_data
        rf_interface.io.rx_data_clk := io.rf_if.rx_data_clk

        io.rf_if.tx_if_frame := rf_interface.io.tx_if_frame
        io.rf_if.tx_fb_clk := rf_interface.io.tx_fb_clk
        io.rf_if.tx_if_data := rf_interface.io.tx_if_data

    }

    val pkg_gen_bridge = rfClockArea.stream_package_gen.driveFrom(axil4busCtrl, 0x00, this.clockDomain, rf_interface.txClockDomain)
    val data_div_bridge = rfClockArea.mod_data_div.driveFrom(axil4busCtrl, 0x10, this.clockDomain, rf_interface.txClockDomain)
    val mod_rtl_bridge = rfClockArea.mod_rtl.driveFrom(axil4busCtrl, 0x20, this.clockDomain, rf_interface.txClockDomain)
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
//            dut.io.result_data.ready #= true
            dut.clockDomain.waitSampling(1)
            val aliteDrv = AxiLite4Driver(dut.io.axil4Ctrl, dut.clockDomain)
            aliteDrv.reset()
            dut.clockDomain.waitSampling(10)
            aliteDrv.write(0x00, rf_payload_upper_boundary)
            aliteDrv.write(0x10, 0x0)
            aliteDrv.write(0x14, 4)
            aliteDrv.write(0x18, 16)
            aliteDrv.write(0x10, 0x1)
            aliteDrv.write(0x20, 0x2)
            for(idx <- 0 until 330){
                dut.io.raw_data.stream.valid #= true
//                dut.io.result_data.ready #= true
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
            dut.clockDomain.waitSampling(2000)
        }
}

