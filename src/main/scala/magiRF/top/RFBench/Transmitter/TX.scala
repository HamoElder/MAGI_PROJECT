package magiRF.top.RFBench.Transmitter


import magiRF.interface.frontend.AD9361.{AD9361Bundle, AD9361Interface}
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
//        val axil4Ctrl = slave(AxiLite4(axiLite4_config))
        val raw_data = slave(Stream(Fragment(phyDataType)))
        val rf_data = master(Stream(interfaceIQDataType))

        val enable = in Bool()
        val cnt_step = in(genModulatorDivConfig.cntType)
        val cnt_limit = in(genModulatorDivConfig.cntType)

        val w_en = if(genModulatorConfig.editable) in(genModulatorConfig.editSelectDataType) else null
        val w_addr = if(genModulatorConfig.editable) in(Bits(genModulatorConfig.cfgDataWidth bits)) else null
        val w_data = if(genModulatorConfig.editable) in(Bits(genModulatorConfig.cfgDataWidth bits)) else null
        val mod_cnt_limit = if(genModulatorConfig.useTPlay) in(Bits(genModulatorConfig.cfgDataWidth bits)) else null

        val select = in(UInt(log2Up(genModulatorConfig.selectNum) bits))
    }
    noIoPrefix()

    val pipeline_halt = Bits(8 bits)

    val phy_tx_padder = PhyTxPadder()
    phy_tx_padder.io.raw_data << io.raw_data.haltWhen(pipeline_halt(0))
    val padder_to_crc_fifo = phy_tx_padder.io.result_data.queueWithAvailability(interConnectFifoDepth)
    pipeline_halt(0) := padder_to_crc_fifo._2 < interConnectHaltThreshold
    val phy_tx_crc = PhyTxCrc()
    phy_tx_crc.io.raw_data << padder_to_crc_fifo._1.haltWhen(pipeline_halt(1))
    val crc_to_encoder_fifo = phy_tx_crc.io.result_data.queueWithAvailability(interConnectFifoDepth)
    pipeline_halt(1) := crc_to_encoder_fifo._2 < interConnectHaltThreshold
    val phy_tx_encoder = PhyTxEncoder()
    phy_tx_encoder.io.raw_data << crc_to_encoder_fifo._1.haltWhen(pipeline_halt(2))
    val phy_tx_puncher = Puncturing(codedDataWidth, mask_seq_1_2)
    phy_tx_puncher.io.raw_data << phy_tx_encoder.io.result_data
    val puncher_to_header_extender_fifo = phy_tx_puncher.io.punched_data.toStream.queueWithAvailability(interConnectFifoDepth)
    pipeline_halt(2) := puncher_to_header_extender_fifo._2< interConnectHaltThreshold
    val phy_header_extender = PhyHeaderExtender()
    phy_header_extender.io.raw_data << puncher_to_header_extender_fifo._1.haltWhen(pipeline_halt(3))
    phy_header_extender.io.mod_method := io.select.asBits.resized
    val header_extender_fifo_to_scrambler_fifo = phy_header_extender.io.result_data.queueWithAvailability(interConnectFifoDepth)
    pipeline_halt(3) := header_extender_fifo_to_scrambler_fifo._2 < interConnectHaltThreshold
    val phy_tx_scrambler = PhyTxScrambler()
    phy_tx_scrambler.io.raw_data << header_extender_fifo_to_scrambler_fifo._1.haltWhen(pipeline_halt(4))
    val scrambler_to_mod_data_div_fifo = phy_tx_scrambler.io.result_data.queueWithAvailability(interConnectFifoDepth)
    pipeline_halt(4) := scrambler_to_mod_data_div_fifo._2 < interConnectHaltThreshold
    val mod_data_div = dataDivDynamic(genModulatorDivConfig)
    mod_data_div.io.base_data << scrambler_to_mod_data_div_fifo._1.haltWhen(pipeline_halt(5))
    val mod_rtl = ModulatorRTL(genModulatorConfig)
    mod_rtl.io.data_flow.unit_data << mod_data_div.io.unit_data.resized
    val mod_rtl_to_tx_oversampling_fifo = mod_rtl.io.data_flow.mod_iq.toStream.queueWithAvailability(interConnectFifoDepth)
    pipeline_halt(5) := mod_rtl_to_tx_oversampling_fifo._2 < interConnectHaltThreshold
    val phy_tx_oversampling = PhyTxOverSampling()
    phy_tx_oversampling.io.raw_data << mod_rtl_to_tx_oversampling_fifo._1.haltWhen(pipeline_halt(6))
    val phy_tx_filter = PhyTxFilter()
    phy_tx_filter.io.raw_data << phy_tx_oversampling.io.result_data
    val tx_filter_to_preamble_adder_fifo = phy_tx_filter.io.result_data.queueWithAvailability(interConnectFifoDepth)
    pipeline_halt(6) := tx_filter_to_preamble_adder_fifo._2 < interConnectHaltThreshold
    val stf_preamble_adder = PreambleExtender(stf_preamble_config)
    stf_preamble_adder.io.raw_data << tx_filter_to_preamble_adder_fifo._1.haltWhen(pipeline_halt(7))
    val phy_tx_front = PhyTxICFront()
    phy_tx_front.io.raw_data << stf_preamble_adder.io.preamble_data
    val front_to_interface_fifo = phy_tx_front.io.result_data.queueWithAvailability(interConnectFifoDepth)
    pipeline_halt(7) := front_to_interface_fifo._2 < interConnectHaltThreshold

    io.rf_data << front_to_interface_fifo._1

    mod_data_div.io.enable := io.enable
    mod_data_div.io.cnt_step := io.cnt_step
    mod_data_div.io.cnt_limit := io.cnt_limit

    mod_rtl.io.select := io.select
    if(genModulatorConfig.editable){
        mod_rtl.io.w_en := io.w_en
        mod_rtl.io.w_addr := io.w_addr
        mod_rtl.io.w_data := io.w_data
    }
    if(genModulatorConfig.useTPlay){
        mod_rtl.io.cnt_limit := io.mod_cnt_limit
    }

    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt, coreClockDomain: ClockDomain, rfClockDomain: ClockDomain): Area = new Area {
        val enable = cloneOf(io.enable)
        val cnt_step = cloneOf(io.cnt_step)
        val cnt_limit = cloneOf(io.cnt_limit)
        busCtrl.driveAndRead(enable, address = baseAddress + 0x00, bitOffset = 0,
            documentation = "Data Divide Dynamic Module Enable.") init (False)
        busCtrl.driveAndRead(cnt_step, address = baseAddress + 0x04, bitOffset = 0,
            documentation = "Data Divide Dynamic Module Counter Step.") init (0)
        busCtrl.driveAndRead(cnt_limit, address = baseAddress + 0x08, bitOffset = 0,
            documentation = "Data Divide Dynamic Module Counter Max Value.") init (0)
        io.enable := ClkCrossing(coreClockDomain, rfClockDomain, enable)
        io.cnt_step := ClkCrossing(coreClockDomain, rfClockDomain, cnt_step)
        io.cnt_limit := ClkCrossing(coreClockDomain, rfClockDomain, cnt_limit)

        val select = cloneOf(io.select)
        busCtrl.driveAndRead(select, address = baseAddress + 0x10, bitOffset = 0,
            documentation = "Modulator RTL select.") init(0)
        if(genModulatorConfig.editable){
            val w_en = cloneOf(io.w_en)
            val w_addr = cloneOf(io.w_addr)
            val w_data = cloneOf(io.w_data)
            busCtrl.drive(w_en, address = baseAddress + 0x14, bitOffset = 0,
                documentation = "Look Up Modulator Ram Write Enable.") init(genModulatorConfig.editNum)
            busCtrl.drive(w_addr, address = baseAddress + 0x18, bitOffset = 0,
                documentation = "Look Up Modulator Ram Write Address Set.") init(0)
            busCtrl.drive(w_data, address = baseAddress + 0x1C, bitOffset = 0,
                documentation = "Look Up Modulator Ram Write Data Set.") init(0)
            io.w_en := ClkCrossing(coreClockDomain, rfClockDomain, w_en)
            io.w_addr := ClkCrossing(coreClockDomain, rfClockDomain, w_addr)
            io.w_data := ClkCrossing(coreClockDomain, rfClockDomain, w_data)
        }
        if(genModulatorConfig.useTPlay){
            val mod_cnt_limit = cloneOf(io.mod_cnt_limit)
            busCtrl.drive(mod_cnt_limit, address = baseAddress + 0x20, bitOffset = 0,
                documentation = "Look Up Modulator Play Mode T Limit.") init(0)
            io.mod_cnt_limit := ClkCrossing(coreClockDomain, rfClockDomain, mod_cnt_limit)
        }
        io.select := ClkCrossing(coreClockDomain, rfClockDomain, select)

    }

}

object RFBenchTXBench {
    def main(args: Array[String]): Unit = {
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/RFBenchTX").generateSystemVerilog(new TX()).printPruned()
    }
}



