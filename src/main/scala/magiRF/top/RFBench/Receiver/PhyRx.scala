package magiRF.top.RFBench.Receiver

import magiRF.modules.DSP.Correlator.CrossCorrelator
import magiRF.packages.CFO.CFOCorrector
import magiRF.packages.Preamble.PreambleDetector
import magiRF.top.RFBench.Config.{header_corrector_config, header_corrector_out_datatype, header_corrector_win_cnt_datatype, interfaceIQDataType, modIQDataType, preamble_config, rx_coarse_cfo_corrector_config, stream_config}
import spinal.core._
import spinal.lib._
import utils.bus.AxiStream4.AxiStream4
import utils.common.ShiftReg.ShiftRegister

class PhyRxCFO() extends Component{
    val io = new Bundle{
        val raw_data = slave(Flow(modIQDataType))
        val result_data = master(Flow(modIQDataType))
        val min_plateau = in(preamble_config.plateauDataType)
        val gate_threshold = if(preamble_config.usePowerMeter) null else in(preamble_config.gateThresholdDataType)
        val pkg_drop = in(Bool())
    }
    noIoPrefix()
    val package_handling = Reg(Bool()) init(False)
    val preamble_detector = PreambleDetector(preamble_config)
    val cfo_corrected = Reg(Bool()) init(True)
    val header_corrected = Reg(Bool()) init(False)
    preamble_detector.io.raw_data << io.raw_data
    preamble_detector.io.min_plateau := io.min_plateau
    if(!preamble_config.usePowerMeter){
        preamble_detector.io.gate_threshold := io.gate_threshold
    }
    when(io.pkg_drop){
        package_handling := False
    }.elsewhen(preamble_detector.io.pkg_detected){
        package_handling := True
    }

    val coarse_cfo_inst = CFOCorrector(rx_coarse_cfo_corrector_config)
    coarse_cfo_inst.io.raw_data << preamble_detector.io.raw_data_out
    coarse_cfo_inst.io.enable := ~cfo_corrected
    when(io.pkg_drop || coarse_cfo_inst.io.phi_correct_valid){
        cfo_corrected := True
    }.elsewhen(package_handling.rise()){
        cfo_corrected := False
    }

    val prod_max: SInt = Reg(header_corrector_out_datatype) init(0)
    val prod_cnt = Reg(header_corrector_win_cnt_datatype) init(0)
    val cross_corr_core = CrossCorrelator(header_corrector_config)
    cross_corr_core.io.raw_data << coarse_cfo_inst.io.rotated_data
    when(cross_corr_core.io.corr_result.valid && cfo_corrected){
        when(prod_max < cross_corr_core.io.corr_result.cha_i){
            prod_max := cross_corr_core.io.corr_result.cha_i
            prod_cnt := 0
        }.otherwise{
            prod_cnt := prod_cnt + 1
        }
    }
//    when(prod_cnt === )

    io.result_data << coarse_cfo_inst.io.rotated_data

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
