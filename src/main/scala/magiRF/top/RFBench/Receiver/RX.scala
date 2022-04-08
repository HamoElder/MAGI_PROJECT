package magiRF.top.RFBench.Receiver

import magiRF.modules.DSP.PowerAdjustor.PowerAdjustor
import magiRF.top.RFBench.Config.{interfaceIQDataType, iqWidth, modIQDataType, power_adjustor_config, preamble_config, stream_config}
import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.bus.AxiStream4.{AxiStream4, AxiStream4SpecRenamer}
import utils.bus.IQBundle.IQBundle
import utils.common.ClkCrossing.ClkCrossing

case class RX() extends Component {
    val io = new Bundle{
        val raw_data = slave(Flow(interfaceIQDataType))
        val pa_shift_bias = in(power_adjustor_config.ratioType)
        val pa_shift_dir = in(Bool())
        val result_data = master(Flow(modIQDataType))
        val min_plateau = in(preamble_config.plateauDataType)
        val gate_threshold = if(preamble_config.usePowerMeter) null else in(preamble_config.gateThresholdDataType)
//        val result_data = master(AxiStream4(stream_config))
    }
    noIoPrefix()
//    AxiStream4SpecRenamer(io.result_data)
    val datatype_convert = PhyRxInterfaceIQ2modIQ()
    datatype_convert.io.raw_data << io.raw_data
    val phy_rx_power_adjustor = PowerAdjustor(power_adjustor_config)
    phy_rx_power_adjustor.io.shift_bias := io.pa_shift_bias
    phy_rx_power_adjustor.io.shift_dir := io.pa_shift_dir
    phy_rx_power_adjustor.io.raw_data << datatype_convert.io.result_data
    val phy_rx_cfo = new PhyRxCFO()
    if(!preamble_config.usePowerMeter) {
        phy_rx_cfo.io.gate_threshold := io.gate_threshold
    }
    phy_rx_cfo.io.min_plateau := io.min_plateau
    phy_rx_cfo.io.pkg_drop := False
    phy_rx_cfo.io.raw_data << phy_rx_power_adjustor.io.adjusted_data
    io.result_data << phy_rx_cfo.io.result_data

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

    }
}

