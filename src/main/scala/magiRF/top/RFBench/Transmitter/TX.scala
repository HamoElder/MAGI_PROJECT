package magiRF.top.RFBench.Transmitter


import magiRF.interfaces.frontend.AD9361.{AD9361Bundle, AD9361Interface}
import magiRF.modules.Modem.Misc.dataDivDynamic
import magiRF.modules.Modem.Modulator.ModulatorRTL
import magiRF.packages.PackageGen.StreamPkgGen
import magiRF.packages.Preamble.PreambleExtender
import magiRF.packages.Puncher.Puncturing
import magiRF.top.RFBench.Config.{axiLite4_config, codedDataWidth, genModulatorConfig, genModulatorDivConfig, genPkgGenConfig, interConnectFifoDepth, interConnectHaltThreshold, interfaceIQDataType, mask_seq_1_2, modIQDataType, phyDataType, phyDataWidth, rf_payload_upper_boundary, stf_preamble_config, stream_config}
import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.bus.AxiLite.{AxiLite4, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.bus.AxiStream4.{AxiStream4, AxiStream4SpecRenamer}
import utils.bus.IQBundle.IQBundle
import utils.common.ClkCrossing.ClkCrossing
import utils.debugger.Ila

case class TX() extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(phyDataType)))
        val rf_data = master(Stream(interfaceIQDataType))

        val div_enable = in Bool()
        val div_cnt_step = in(genModulatorDivConfig.cntType)
        val div_cnt_limit = in(genModulatorDivConfig.cntType)

        val mod_w_en = if(genModulatorConfig.editable) in(genModulatorConfig.editSelectDataType) else null
        val mod_w_addr = if(genModulatorConfig.editable) in(Bits(genModulatorConfig.cfgDataWidth bits)) else null
        val mod_w_data = if(genModulatorConfig.editable) in(Bits(genModulatorConfig.cfgDataWidth bits)) else null
        val mod_cnt_limit = if(genModulatorConfig.useTPlay) in(Bits(genModulatorConfig.cfgDataWidth bits)) else null

        val mod_method_select = in(UInt(log2Up(genModulatorConfig.selectNum) bits))
    }
    noIoPrefix()

    val pipeline_halt = Bits(9 bits)
    val phy_tx_information_gen = PhyPkgInformationGen()
    phy_tx_information_gen.io.raw_data << io.raw_data.haltWhen(pipeline_halt(0))
    val information_to_padder_fifo = phy_tx_information_gen.io.result_data.queueWithAvailability(interConnectFifoDepth)
    pipeline_halt(0) := information_to_padder_fifo._2 < interConnectHaltThreshold
    val phy_tx_padder = PhyTxPadder()
    phy_tx_padder.io.raw_data << information_to_padder_fifo._1.haltWhen(pipeline_halt(1))
    val padder_to_crc_fifo = phy_tx_padder.io.result_data.queueWithAvailability(interConnectFifoDepth)
    pipeline_halt(1) := padder_to_crc_fifo._2 < interConnectHaltThreshold
    val phy_tx_crc = PhyTxCrc()
    phy_tx_crc.io.raw_data << padder_to_crc_fifo._1.haltWhen(pipeline_halt(2))
    val crc_to_encoder_fifo = phy_tx_crc.io.result_data.queueWithAvailability(interConnectFifoDepth)
    pipeline_halt(2) := crc_to_encoder_fifo._2 < interConnectHaltThreshold
    val phy_tx_encoder = PhyTxEncoder()
    phy_tx_encoder.io.raw_data << crc_to_encoder_fifo._1.haltWhen(pipeline_halt(3))
    val phy_tx_puncher = Puncturing(codedDataWidth, mask_seq_1_2)
    phy_tx_puncher.io.raw_data << phy_tx_encoder.io.result_data
    val puncher_to_scrambling_fifo = phy_tx_puncher.io.punched_data.toStream.queueWithAvailability(interConnectFifoDepth)
    pipeline_halt(3) := puncher_to_scrambling_fifo._2< interConnectHaltThreshold
    val phy_tx_scrambler = PhyTxScrambler()
    phy_tx_scrambler.io.raw_data << puncher_to_scrambling_fifo._1.haltWhen(pipeline_halt(4))
    val scrambler_to_mod_data_div_fifo = phy_tx_scrambler.io.result_data.queueWithAvailability(interConnectFifoDepth)
    pipeline_halt(4) := scrambler_to_mod_data_div_fifo._2 < interConnectHaltThreshold
    val mod_data_div = dataDivDynamic(genModulatorDivConfig)
    mod_data_div.io.base_data << scrambler_to_mod_data_div_fifo._1.haltWhen(pipeline_halt(5))
    val mod_rtl = ModulatorRTL(genModulatorConfig)
    mod_rtl.io.data_flow.unit_data << mod_data_div.io.unit_data.resized
    val mod_rtl_to_header_extender_fifo = mod_rtl.io.data_flow.mod_iq.toStream.queueWithAvailability(interConnectFifoDepth)
    pipeline_halt(5) := mod_rtl_to_header_extender_fifo._2 < interConnectHaltThreshold
    val phy_header_extender = PhyHeaderExtender()
    phy_header_extender.io.raw_data << mod_rtl_to_header_extender_fifo._1.haltWhen(pipeline_halt(6))
    phy_header_extender.io.pkg_size << phy_tx_information_gen.io.pkg_size
    phy_header_extender.io.mod_method := io.mod_method_select

    val header_extender_to_oversampling_fifo = phy_header_extender.io.result_data.queueWithAvailability(interConnectFifoDepth)
    pipeline_halt(6) := header_extender_to_oversampling_fifo._2 < interConnectHaltThreshold
    val phy_tx_oversampling = PhyTxOverSampling()
    phy_tx_oversampling.io.raw_data << header_extender_to_oversampling_fifo._1.haltWhen(pipeline_halt(7))
    val phy_tx_filter = PhyTxFilter()
    phy_tx_filter.io.raw_data << phy_tx_oversampling.io.result_data
    val tx_filter_to_preamble_adder_fifo = phy_tx_filter.io.result_data.queueWithAvailability(interConnectFifoDepth)
    pipeline_halt(7) := tx_filter_to_preamble_adder_fifo._2 < interConnectHaltThreshold
    val stf_preamble_adder = PreambleExtender(stf_preamble_config)
    stf_preamble_adder.io.raw_data << tx_filter_to_preamble_adder_fifo._1.haltWhen(pipeline_halt(8))
    val phy_tx_front = PhyTxICFront()
    phy_tx_front.io.raw_data << stf_preamble_adder.io.preamble_data
    val front_to_interface_fifo = phy_tx_front.io.result_data.queueWithAvailability(interConnectFifoDepth)
    pipeline_halt(8) := front_to_interface_fifo._2 < interConnectHaltThreshold

    io.rf_data << front_to_interface_fifo._1

    mod_data_div.io.enable := io.div_enable
    mod_data_div.io.cnt_step := io.div_cnt_step
    mod_data_div.io.cnt_limit := io.div_cnt_limit

    mod_rtl.io.select := io.mod_method_select
    if(genModulatorConfig.editable){
        mod_rtl.io.w_en := io.mod_w_en
        mod_rtl.io.w_addr := io.mod_w_addr
        mod_rtl.io.w_data := io.mod_w_data
    }
    if(genModulatorConfig.useTPlay){
        mod_rtl.io.cnt_limit := io.mod_cnt_limit
    }

    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt, coreClockDomain: ClockDomain, rfClockDomain: ClockDomain): Area = new Area {
        val div_enable = cloneOf(io.div_enable)
        val div_cnt_step = cloneOf(io.div_cnt_step)
        val div_cnt_limit = cloneOf(io.div_cnt_limit)
        busCtrl.driveAndRead(div_enable, address = baseAddress + 0x00, bitOffset = 0,
            documentation = "Data Divide Dynamic Module Enable (1 bits).") init (False)
        busCtrl.driveAndRead(div_cnt_step, address = baseAddress + 0x04, bitOffset = 0,
            documentation = s"Data Divide Dynamic Module Counter Step (${div_cnt_step.getBitsWidth} bits).") init (0)
        busCtrl.driveAndRead(div_cnt_limit, address = baseAddress + 0x08, bitOffset = 0,
            documentation = s"Data Divide Dynamic Module Counter Max Value (${div_cnt_limit.getBitsWidth} bits).") init (0)
        io.div_enable := ClkCrossing(coreClockDomain, rfClockDomain, div_enable)
        io.div_cnt_step := ClkCrossing(coreClockDomain, rfClockDomain, div_cnt_step)
        io.div_cnt_limit := ClkCrossing(coreClockDomain, rfClockDomain, div_cnt_limit)

        val mod_method_select = cloneOf(io.mod_method_select)
        busCtrl.driveAndRead(mod_method_select, address = baseAddress + 0x10, bitOffset = 0,
            documentation = s"Modulator RTL select (${mod_method_select.getBitsWidth} bits).") init(0)
        io.mod_method_select := ClkCrossing(coreClockDomain, rfClockDomain, mod_method_select)
        if(genModulatorConfig.editable){
            val mod_w_en = cloneOf(io.mod_w_en)
            val mod_w_addr = cloneOf(io.mod_w_addr)
            val mod_w_data = cloneOf(io.mod_w_data)
            busCtrl.drive(mod_w_en, address = baseAddress + 0x14, bitOffset = 0,
                documentation = "Look Up Modulator Ram Write Enable (1 bits).") init(genModulatorConfig.editNum)
            busCtrl.drive(mod_w_addr, address = baseAddress + 0x18, bitOffset = 0,
                documentation = s"Look Up Modulator Ram Write Address Set (${mod_w_addr.getBitsWidth} bits).") init(0)
            busCtrl.drive(mod_w_data, address = baseAddress + 0x1C, bitOffset = 0,
                documentation = s"Look Up Modulator Ram Write Data Set (${mod_w_data.getBitsWidth} bits).") init(0)
            io.mod_w_en := ClkCrossing(coreClockDomain, rfClockDomain, mod_w_en)
            io.mod_w_addr := ClkCrossing(coreClockDomain, rfClockDomain, mod_w_addr)
            io.mod_w_data := ClkCrossing(coreClockDomain, rfClockDomain, mod_w_data)
        }
        if(genModulatorConfig.useTPlay){
            val mod_cnt_limit = cloneOf(io.mod_cnt_limit)
            busCtrl.drive(mod_cnt_limit, address = baseAddress + 0x20, bitOffset = 0,
                documentation = s"Look Up Modulator Play Mode T Limit (${mod_cnt_limit.getBitsWidth} bits).") init(0)
            io.mod_cnt_limit := ClkCrossing(coreClockDomain, rfClockDomain, mod_cnt_limit)
        }
    }


}

object RFBenchTXBench {
    def main(args: Array[String]): Unit = {
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/RFBenchTX").generateSystemVerilog(new TX()).printPruned()
    }
}

