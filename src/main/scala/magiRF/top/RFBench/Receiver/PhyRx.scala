package magiRF.top.RFBench.Receiver

import magiRF.packages.CFO.CFOCorrector
import magiRF.packages.Preamble.PreambleDetector
import magiRF.top.RFBench.Config.{interfaceIQDataType, modIQDataType, preamble_config, stream_config}
import spinal.core._
import spinal.lib._
import utils.bus.AxiStream4.AxiStream4

class PhyRxCFO() extends Component{
    val io = new Bundle{
        val raw_data = slave(Flow(modIQDataType))
        val result_data = master(Flow(modIQDataType))
        val gate_threshold = if(preamble_config.usePowerMeter) null else in(preamble_config.gateThresholdDataType)
    }
    noIoPrefix()
    val preamble_detector = PreambleDetector(preamble_config)
    preamble_detector.io.raw_data << io.raw_data
    preamble_detector.io.gate_threshold := io.gate_threshold
//    val cfo_inst = CFOCorrector()

    io.result_data << preamble_detector.io.raw_data_out
}


case class PhyRxInterfaceIQ2modIQ() extends Component{
    val io = new Bundle{
        val raw_data = slave(Flow(interfaceIQDataType))
        val result_data = master(Flow(modIQDataType))
    }
    noIoPrefix()
    io.result_data.cha_i := io.raw_data.cha_i.asSInt
    io.result_data.cha_q := io.raw_data.cha_q.asSInt
    io.result_data.valid := io.raw_data.valid
}
