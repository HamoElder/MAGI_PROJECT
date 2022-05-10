package magiRF.top.RFBench.Receiver

import magiRF.modules.DSP.PowerAdjustor.PowerAdjustor
import magiRF.packages.Coder.Convolutional.Decoder.ViterbiDecoder
import magiRF.packages.Puncher.DePuncturing
import magiRF.top.RFBench.Config.{code_rate, codedDataType, codedDataWidth, de_puncture_mask_seq_1_2, decoder_fifo_depth, genDemodulatorConfig, headerCorrectorWinDatatype, header_corrector_win_default, interConnectFifoDepth, interfaceIQDataType, iqWidth, modIQDataType, phyDataType, power_adjustor_config, preamble_config, rx_package_data_type, soft_width, stream_config, viterbi_decoder_config}
import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.common.ClkCrossing.ClkCrossing

case class RX() extends Component {
    val io = new Bundle{
        val raw_data = slave(Flow(interfaceIQDataType))
        val result_data = master(Stream(Fragment(phyDataType)))

        val pa_shift_bias = in(power_adjustor_config.ratioType)
        val pa_shift_dir = in(Bool())

        val min_plateau = in(preamble_config.plateauDataType)
        val gate_threshold = if(preamble_config.usePowerMeter) null else in(preamble_config.gateThresholdDataType)
        val phase_corrector_shift = in(headerCorrectorWinDatatype)

        val demod_w_en = if(genDemodulatorConfig.editable) in(genDemodulatorConfig.editSelectDataType) else null
        val demod_w_addr = if(genDemodulatorConfig.editable) in(UInt(genDemodulatorConfig.cfgDataWidth bits)) else null
        val demod_w_data = if(genDemodulatorConfig.editable) in(Bits(genDemodulatorConfig.cfgDataWidth bits)) else null
        val demod_w_sel = if(genDemodulatorConfig.editable) in(Bits(2 bits)) else null

        val demod_iq_shift = if(genDemodulatorConfig.lookUpNum > 0) in(UInt(genDemodulatorConfig.cfgDataWidth bits)) else null

    }
    noIoPrefix()
    val phy_rx_reset = Bool()
    val datatype_convert = PhyRxInterfaceIQ2modIQ()
    datatype_convert.io.raw_data << io.raw_data
    val phy_rx_power_adjustor = PowerAdjustor(power_adjustor_config)
    phy_rx_power_adjustor.io.shift_bias := io.pa_shift_bias
    phy_rx_power_adjustor.io.shift_dir := io.pa_shift_dir
    phy_rx_power_adjustor.io.raw_data << datatype_convert.io.result_data
    val phy_rx_preamble_detector = new PhyRxPreambleDetector()
    if(!preamble_config.usePowerMeter) {
        phy_rx_preamble_detector.io.gate_threshold := io.gate_threshold
    }
    phy_rx_preamble_detector.io.min_plateau := io.min_plateau
    phy_rx_preamble_detector.io.detector_reset := phy_rx_reset
    phy_rx_preamble_detector.io.raw_data << phy_rx_power_adjustor.io.adjusted_data
    val phy_rx_cfo = PhyRxCFO()
    phy_rx_cfo.io.raw_data << phy_rx_preamble_detector.io.result_data
    phy_rx_cfo.io.cfo_reset := phy_rx_reset
    phy_rx_cfo.io.phase_corrector_shift := io.phase_corrector_shift
    phy_rx_cfo.io.pkg_detected := phy_rx_preamble_detector.io.pkg_handling
    val phy_rx_filter = PhyRxFilter()
    phy_rx_filter.io.raw_data << phy_rx_cfo.io.result_data
    val phy_rx_decimator = PhyRxDecimator()
    phy_rx_decimator.io.raw_data << phy_rx_filter.io.result_data
    phy_rx_decimator.io.enable := phy_rx_cfo.io.phase_corrected
    val phy_rx_header_extender = PhyRxHeaderExtender()
    phy_rx_header_extender.io.raw_data << phy_rx_decimator.io.result_data
    phy_rx_header_extender.io.header_extender_reset := phy_rx_reset

    val phy_rx_demodulator = PhyRxDemodulator()
    phy_rx_demodulator.io.raw_data << phy_rx_header_extender.io.result_data
    phy_rx_demodulator.io.header_message << phy_rx_header_extender.io.header_message

    val phy_rx_data_combination = PhyRxDataCombination()
    phy_rx_data_combination.io.raw_data << phy_rx_demodulator.io.result_data
    phy_rx_data_combination.io.header_message << phy_rx_header_extender.io.header_message
    phy_rx_data_combination.io.enable := phy_rx_cfo.io.phase_corrected

    val phy_rx_descrambling = PhyRxDescrambling()
    phy_rx_descrambling.io.raw_data << phy_rx_data_combination.io.result_data

    val de_scrambling_to_de_puncher_fifo = StreamFifo(Fragment(codedDataType), decoder_fifo_depth)
    de_scrambling_to_de_puncher_fifo.io.push << phy_rx_descrambling.io.result_data.toStream
    de_scrambling_to_de_puncher_fifo.io.flush := phy_rx_reset
    val phy_rx_de_puncher = DePuncturing(codedDataWidth, soft_width, code_rate, de_puncture_mask_seq_1_2)
    phy_rx_de_puncher.io.raw_data << de_scrambling_to_de_puncher_fifo.io.pop

    val phy_rx_decoder = ViterbiDecoder(viterbi_decoder_config)
    phy_rx_decoder.io.raw_data << phy_rx_de_puncher.io.de_punched_data.queue(interConnectFifoDepth)
    val phy_rx_crc_checker = PhyRxCrcChecker()
    phy_rx_crc_checker.io.raw_data << StreamFragmentWidthAdapter.make(phy_rx_decoder.io.decoded_data.toStream.queue(interConnectFifoDepth), phyDataType)
    phy_rx_crc_checker.io.header_message << phy_rx_header_extender.io.header_message
    io.result_data << phy_rx_crc_checker.io.result_data

    phy_rx_reset := phy_rx_header_extender.io.sdf_not_found || phy_rx_crc_checker.io.phy_rx_finish

    if(genDemodulatorConfig.editable){
        phy_rx_demodulator.io.w_en := io.demod_w_en
        phy_rx_demodulator.io.w_addr := io.demod_w_addr
        phy_rx_demodulator.io.w_data := io.demod_w_data
        phy_rx_demodulator.io.w_sel := io.demod_w_sel
    }
    if(genDemodulatorConfig.lookUpNum > 0){
        phy_rx_demodulator.io.iq_shift := io.demod_iq_shift
    }

//    io.header_message << phy_rx_header_extender.io.header_message

    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt, coreClockDomain: ClockDomain, rfClockDomain: ClockDomain): Area = new Area {
        val pa_shift_bias = cloneOf(io.pa_shift_bias)
        val pa_shift_dir = cloneOf(io.pa_shift_dir)
        busCtrl.driveAndRead(pa_shift_bias, address = baseAddress + 0x00, bitOffset = 0,
            documentation = s"Power Adjustor Shift Bias (${power_adjustor_config.ratioType.getBitsWidth} bits).") init (0)
        busCtrl.driveAndRead(pa_shift_dir, address = baseAddress + 0x04, bitOffset = 0,
            documentation = "Power Adjustor Shift Direction (1 bits).") init (False)
        io.pa_shift_bias := ClkCrossing(coreClockDomain, rfClockDomain, pa_shift_bias)
        io.pa_shift_dir := ClkCrossing(coreClockDomain, rfClockDomain, pa_shift_dir)
        if(!preamble_config.usePowerMeter){
            val gate_threshold = cloneOf(io.gate_threshold)
            busCtrl.driveAndRead(gate_threshold, address = baseAddress + 0x08, bitOffset = 0,
                documentation = s"Preamble Detector Gate Threshold Reg (${preamble_config.gateThresholdDataType.getBitsWidth} bits).") init(0)
            io.gate_threshold := ClkCrossing(coreClockDomain, rfClockDomain, gate_threshold)
        }
        val min_plateau = cloneOf(io.min_plateau)
        busCtrl.driveAndRead(min_plateau, address = baseAddress + 0x0C, bitOffset = 0,
            documentation = s"Preamble Detector Gate Minimum Plateau Reg (${preamble_config.plateauWinWidth} bits).") init(0)
        io.min_plateau := ClkCrossing(coreClockDomain, rfClockDomain, min_plateau)
        if(genDemodulatorConfig.editable){
            val demod_w_en = cloneOf(io.demod_w_en)
            val demod_w_addr = cloneOf(io.demod_w_addr)
            val demod_w_data = cloneOf(io.demod_w_data)
            val demod_w_sel = cloneOf(io.demod_w_sel)

            busCtrl.drive(demod_w_en, address = baseAddress + 0x10, bitOffset = 0,
                documentation = "Look Up Demodulator Ram Write Enable (1 bits).") init(genDemodulatorConfig.editNum)
            busCtrl.drive(demod_w_addr, address = baseAddress + 0x14, bitOffset = 0,
                documentation = s"Look Up Demodulator Ram Write Address Set (${demod_w_addr.getBitsWidth} bits).") init(0)
            busCtrl.drive(demod_w_data, address = baseAddress + 0x18, bitOffset =0,
                documentation = s"Look Up Demodulator Ram Write Data Set  (${demod_w_data.getBitsWidth} bits).") init(0)
            busCtrl.drive(demod_w_sel, address = baseAddress + 0x1C, bitOffset =0,
                documentation = s"Look Up Demodulator Ram Compare And Code IQ Select Set (${demod_w_sel.getBitsWidth} bits).") init(0)
            io.demod_w_en := demod_w_en
            io.demod_w_addr := demod_w_addr
            io.demod_w_data := demod_w_data
            io.demod_w_sel := demod_w_sel
        }
        if(genDemodulatorConfig.lookUpNum > 0){
            phy_rx_demodulator.io.iq_shift := io.demod_iq_shift
        }
        val phase_corrector_shift = cloneOf(io.phase_corrector_shift)
        busCtrl.driveAndRead(phase_corrector_shift, address = baseAddress + 0x20, bitOffset = 0,
            documentation = s"CFO Corrector Shift Size (${phase_corrector_shift.getBitsWidth} bits).") init (header_corrector_win_default)
        io.phase_corrector_shift := ClkCrossing(coreClockDomain, rfClockDomain, phase_corrector_shift)
    }
}
