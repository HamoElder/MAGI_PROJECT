package magiRF.top.RFBench.Receiver

import magiRF.modules.DSP.PowerAdjustor.PowerAdjustor
import magiRF.top.RFBench.Config.{interfaceIQDataType, iqWidth, modIQDataType, power_adjustor_config, stream_config}
import spinal.core._
import spinal.lib._
import utils.bus.AxiStream4.{AxiStream4, AxiStream4SpecRenamer}
import utils.bus.IQBundle.IQBundle

class RX extends Component {
    val io = new Bundle{
        val raw_data = slave(Flow(interfaceIQDataType))
        val result_data = master(AxiStream4(stream_config))
    }
    noIoPrefix()
    AxiStream4SpecRenamer(io.result_data)
    val datatype_convert = PhyRxInterfaceIQ2modIQ()
    datatype_convert.io.raw_data << io.raw_data
    val phy_rx_power_adjustor = PowerAdjustor(power_adjustor_config)
    phy_rx_power_adjustor.io.shift_bias := 0
    phy_rx_power_adjustor.io.shift_dir := False
    phy_rx_power_adjustor.io.raw_data << datatype_convert.io.result_data
    val phy_rx_cfo = new PhyRxCFO()
    phy_rx_cfo.io.raw_data << phy_rx_cfo.io.result_data

}
