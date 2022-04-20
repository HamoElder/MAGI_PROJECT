package magiRF.top.RFBench.Receiver

import magiRF.modules.DSP.Correlator.CrossCorrelator
import magiRF.modules.DSP.Decimator.DecimatorIQ
import magiRF.modules.Filters.FIR.TransposeFIR
import magiRF.modules.Modem.Demodulator.DemodulatorRTL
import magiRF.packages.CFO.CFOCorrector
import magiRF.packages.Equalizer.SCEqualizer
import magiRF.packages.Preamble.PreambleDetector
import magiRF.top.RFBench.Config.{demod_method_type, down_sampling_decimation, filter_cut_off_width, genDemodulatorConfig, header_corrector_config, header_corrector_out_datatype, header_corrector_win_cnt_datatype, header_corrector_win_limit, interfaceIQDataType, modIQDataType, mod_method_type, mod_method_width, preamble_config, receiver_use_timeout, rx_coarse_cfo_corrector_config, sdf_i_array, sdf_size, size_width, srrcConfig, srrcTaps, stream_config}
import spinal.core._
import spinal.lib._
import utils.bus.AxiStream4.AxiStream4
import utils.common.ShiftReg.ShiftRegister

case class PhyRxPreambleDetector() extends Component{
    val io = new Bundle{
        val raw_data = slave(Flow(modIQDataType))
        val result_data = master(Flow(modIQDataType))
        val min_plateau = in(preamble_config.plateauDataType)
        val gate_threshold = if(preamble_config.usePowerMeter) null else in(preamble_config.gateThresholdDataType)
        val detector_reset = in(Bool())
        val pkg_handling = out(Bool())
    }
    noIoPrefix()
    val preamble_detector = PreambleDetector(preamble_config)
    val pkg_handling = Reg(Bool()) init(False)
    preamble_detector.io.raw_data << io.raw_data
    preamble_detector.io.min_plateau := io.min_plateau
    if(!preamble_config.usePowerMeter){
        preamble_detector.io.gate_threshold := io.gate_threshold
    }
    when(io.detector_reset){
        pkg_handling := False
    }.elsewhen(preamble_detector.io.pkg_detected){
        pkg_handling := True
    }
    io.pkg_handling := pkg_handling
    io.result_data << preamble_detector.io.raw_data_out
}

case class PhyRxCFO() extends Component{
    val io = new Bundle{
        val raw_data = slave(Flow(modIQDataType))
        val result_data = master(Flow(modIQDataType))

        val cfo_reset = in(Bool())
        val pkg_detected = in(Bool())
        val phase_corrected = out(Bool())
    }
    noIoPrefix()

    val coarse_cfo_inst = CFOCorrector(rx_coarse_cfo_corrector_config)
    val cfo_corrected = Reg(Bool()) init(False)
    val cfo_enable = Reg(Bool()) init(False)
    val header_corrected = Reg(Bool()) init(False)
    coarse_cfo_inst.io.raw_data << io.raw_data
    coarse_cfo_inst.io.enable := cfo_enable

    when(io.cfo_reset || coarse_cfo_inst.io.phi_correct_valid) {
        cfo_enable := False
    }.elsewhen(io.pkg_detected.rise()){
        cfo_enable := True
    }

    when(io.cfo_reset){
        cfo_corrected := False
    }.elsewhen(coarse_cfo_inst.io.phi_correct_valid){
        cfo_corrected := True
    }

    /**
     * Cross Correlation
     */
    val cross_corr_core = CrossCorrelator(header_corrector_config)
    val phase_corrected = Reg(Bool()) init(False)
    val prod_max: SInt = Reg(header_corrector_out_datatype) init(0)
    val prod_cnt = Reg(header_corrector_win_cnt_datatype) init(0)

    cross_corr_core.io.raw_data << coarse_cfo_inst.io.rotated_data
    when(io.cfo_reset){
        phase_corrected := False
        prod_max := 0
        prod_cnt := 0
    }.elsewhen(cfo_corrected && ~phase_corrected){
        when(prod_cnt >= header_corrector_win_limit){
            phase_corrected := True
        }.otherwise{
            when(prod_max < cross_corr_core.io.corr_result.cha_i){
                prod_max := cross_corr_core.io.corr_result.cha_i
                prod_cnt := 0
            }.otherwise{
                prod_cnt := prod_cnt + 1
            }
            phase_corrected := False
        }
    }
    io.phase_corrected := phase_corrected
    io.result_data << coarse_cfo_inst.io.rotated_data
}

case class PhyRxEqualizer() extends Component{
    val io = new Bundle{
        val raw_data = slave(Flow(modIQDataType))
        val result_data = master(Flow(modIQDataType))
        val first_bit_indicate = in(Bool())
    }
    noIoPrefix()
//    val equalizer_inst = SCEqualizer()

}

case class PhyRxFilter() extends Component{
    val io = new Bundle{
        val raw_data = slave(Flow(modIQDataType))
        val result_data = master(Flow(modIQDataType))
    }
    noIoPrefix()
    val fir_filter_iq = TransposeFIR(io.raw_data.cha_i.getBitsWidth, srrcTaps, 2, reloadableCoff = false)
    fir_filter_iq.io.raw_data.valid := io.raw_data.valid
    fir_filter_iq.io.raw_data.payload(0) := io.raw_data.cha_i
    fir_filter_iq.io.raw_data.payload(1) := io.raw_data.cha_q

    io.result_data.valid := fir_filter_iq.io.filtered_data.valid
    io.result_data.cha_i := fir_filter_iq.io.filtered_data.payload(0).floor(filter_cut_off_width bits)
    io.result_data.cha_q := fir_filter_iq.io.filtered_data.payload(1).floor(filter_cut_off_width bits)

}

case class PhyRxDecimator() extends Component{
    val io = new Bundle{
        val raw_data = slave(Flow(modIQDataType))
        val result_data = master(Flow(modIQDataType))
        val enable = in(Bool)
    }
    noIoPrefix()
    val decimator = DecimatorIQ(cloneOf(modIQDataType.cha_i), down_sampling_decimation)
    decimator.io.in << io.raw_data.takeWhen(io.enable)
    io.result_data << decimator.io.out
}

case class PhyRxPkgMessage() extends Bundle with IMasterSlave{
    def sizeDataType: UInt = UInt(size_width* 8 bits)
    val pkg_size = sizeDataType
    val demod_method = mod_method_type
    override def asMaster(): Unit = {
        out(pkg_size, demod_method)
    }

    override type RefOwnerType = this.type
}

case class PhyRxHeaderExtender()extends Component{
    def cntDataType: UInt = UInt(4 bits)
    def sizeDataType: UInt = UInt(size_width* 8 bits)
    object PhyRxHeaderStatus extends SpinalEnum{
        val SDF, METHOD, SIZE, DATA = newElement()
    }
    val io = new Bundle{
        val raw_data = slave(Flow(modIQDataType))
        val result_data = master(Flow(modIQDataType))
        val sdf_not_found = out(Bool())
        val header_extender_reset = in(Bool())
        val header_message = master(Flow(PhyRxPkgMessage()))
    }
    noIoPrefix()
    val cnt = Reg(cntDataType) init(0)
    val sdf_i_win = Reg(Bits(sdf_size bits)) init(0)
    val sdf_i_ref = Bits(sdf_size bits)
    val by_pass_enable = Reg(Bool()) init(False)
    for(idx <- 0 until sdf_size){
        if(sdf_i_array(sdf_size - 1 - idx) >= 0){
            sdf_i_ref(idx) := True
        }else{
            sdf_i_ref(idx) := False
        }
    }

    val raw_data_i_bpsk_demoded = io.raw_data.cha_i >= 0

    when(io.header_extender_reset){
        sdf_i_win := 0
    }.elsewhen(io.raw_data.fire){
        sdf_i_win(0) := raw_data_i_bpsk_demoded
        for(idx <- 1 until sdf_size){
            sdf_i_win(idx) := sdf_i_win(idx - 1)
        }
    }
    val pkg_size = Reg(sizeDataType)
    val demod_method = Reg(mod_method_type)
    val header_status = Reg(PhyRxHeaderStatus) init(PhyRxHeaderStatus.SDF)
    val message_valid = Reg(Bool()) init(False)
    val timeout = Reg(UInt(6 bits)) init(0)
    io.sdf_not_found := False
    switch(header_status){
        is(PhyRxHeaderStatus.SDF){
            when(sdf_i_win === sdf_i_ref){
                header_status := PhyRxHeaderStatus.METHOD
            }
            cnt := (mod_method_width - 1)
            by_pass_enable := False
            when(io.raw_data.fire){
                timeout := timeout + 1
                when(timeout === 63){
                    io.sdf_not_found := True
                }
            }
        }
        is(PhyRxHeaderStatus.METHOD){
            timeout := 0
            when(io.raw_data.fire){
                when(cnt === 0){
                    header_status := PhyRxHeaderStatus.SIZE
                    cnt := size_width * 8 - 1
                }.otherwise{
                    cnt := cnt - 1
                }
                demod_method(cnt.resize(log2Up(mod_method_width) bits)) := raw_data_i_bpsk_demoded
            }
        }
        is(PhyRxHeaderStatus.SIZE){
            when(io.raw_data.fire){
                when(cnt === 0){
                    header_status := PhyRxHeaderStatus.DATA
                    message_valid := True
                }.otherwise{
                    cnt := cnt - 1
                }
                pkg_size(cnt.resize(log2Up(size_width * 8) bits)) := raw_data_i_bpsk_demoded
            }
        }
        is(PhyRxHeaderStatus.DATA){
            when(io.header_extender_reset){
                header_status := PhyRxHeaderStatus.SDF
            }
            message_valid := False
            by_pass_enable := True
        }
    }

    io.result_data << io.raw_data.takeWhen(by_pass_enable).stage()
    io.header_message.pkg_size := pkg_size
    io.header_message.demod_method := demod_method
    io.header_message.valid := message_valid
}

case class PhyRxDemodulator() extends Component{
    val io = new Bundle{
        val raw_data = slave(Flow(modIQDataType))
        val result_data = master(Flow(Fragment(genDemodulatorConfig.unitDataType)))

        val w_en = if(genDemodulatorConfig.editable) in(genDemodulatorConfig.editSelectDataType) else null
        val w_addr = if(genDemodulatorConfig.editable) in(UInt(genDemodulatorConfig.cfgDataWidth bits)) else null
        val w_data = if(genDemodulatorConfig.editable) in(Bits(genDemodulatorConfig.cfgDataWidth bits)) else null
        val w_sel = if(genDemodulatorConfig.editable) in(Bits(2 bits)) else null

        val iq_shift = if(genDemodulatorConfig.lookUpNum > 0) in(UInt(genDemodulatorConfig.cfgDataWidth bits)) else null

        val select = in(demod_method_type)

        val header_message = slave(Flow(PhyRxPkgMessage()))
    }
    noIoPrefix()
    val demodulator_inst = DemodulatorRTL(genDemodulatorConfig)
    demodulator_inst.io.data_flow.mod_iq.cha_i := io.raw_data.cha_i
    demodulator_inst.io.data_flow.mod_iq.cha_q := io.raw_data.cha_q
    demodulator_inst.io.data_flow.mod_iq.valid := io.raw_data.valid
    demodulator_inst.io.data_flow.mod_iq.last := False // TODO:

    when(io.header_message.fire){

    }

    if(genDemodulatorConfig.editable){
        demodulator_inst.io.w_en := io.w_en
        demodulator_inst.io.w_addr := io.w_addr
        demodulator_inst.io.w_data := io.w_data
        demodulator_inst.io.w_sel := io.w_sel
    }

    if(genDemodulatorConfig.lookUpNum > 0){
        demodulator_inst.io.iq_shift := io.iq_shift
    }

    demodulator_inst.io.select := io.select

    io.result_data << demodulator_inst.io.data_flow.unit_data

}

case class PhyRxPayloadExtender() extends Component{
    val io = new Bundle{
        val raw_data = slave(Flow(modIQDataType))
        val result_data = master(Flow(modIQDataType))
    }
    noIoPrefix()

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

