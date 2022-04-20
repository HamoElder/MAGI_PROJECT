// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoopBackTest.h for the primary calling header

#include "VLoopBackTest.h"
#include "VLoopBackTest__Syms.h"

//==========

void VLoopBackTest::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VLoopBackTest::eval\n"); );
    VLoopBackTest__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/LoopBackTest.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VLoopBackTest::_eval_initial_loop(VLoopBackTest__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/LoopBackTest.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__6(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__6\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__data_buf 
        = vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__data_buf;
    vlTOPp->__Vdly__LoopBackTest__DOT__stream_package_gen__DOT__strb_buf 
        = vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__strb_buf;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__trans_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram__v0 = 0U;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_last 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__flowDeMux_1_outputs_2_payload_last;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_last 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__flowDeMux_1_outputs_1_payload_last;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_last 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__flowDeMux_1_outputs_0_payload_last;
    if (vlTOPp->axil4Ctrl_arready) {
        vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_prot 
            = vlTOPp->axil4Ctrl_arprot;
    }
    if (vlTOPp->LoopBackTest__DOT___zz_writeJoinEvent_translated_ready) {
        vlTOPp->LoopBackTest__DOT___zz_axil4Ctrl_bresp = 0U;
    }
    if (vlTOPp->axil4Ctrl_arready) {
        vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr 
            = vlTOPp->axil4Ctrl_araddr;
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_logic_ram_port0 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ram
        [vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_valueNext];
    if (vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire) {
        vlTOPp->__Vdly__LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__data_buf 
            = (IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT___zz_logic_ram_port0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__split_data_fire) {
            vlTOPp->__Vdly__LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__data_buf 
                = (vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__data_buf 
                   >> 8U);
        }
    }
    vlTOPp->LoopBackTest__DOT__clkCrossing_9__DOT__area_clkO_buf1 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_9__DOT__area_clkO_buf0;
    if ((0U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status))) {
        if ((1U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status))) {
            if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__pkg_size_fire) {
                vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__pkg_size_payload_1 
                    = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT___zz_logic_ram_port0;
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire) {
        vlTOPp->__Vdly__LoopBackTest__DOT__stream_package_gen__DOT__strb_buf 
            = (0xfU & (IData)((vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT___zz_logic_ram_port0 
                               >> 0x20U)));
    } else {
        if (vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__split_data_fire) {
            vlTOPp->__Vdly__LoopBackTest__DOT__stream_package_gen__DOT__strb_buf 
                = (0xfU & ((IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__strb_buf) 
                           >> 1U));
        }
    }
    vlTOPp->LoopBackTest__DOT__clkCrossing_10__DOT__area_clkO_buf1 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_10__DOT__area_clkO_buf0;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43;
    if (vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_logic_ram_port0;
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_ram__v0 
            = (((QData)((IData)(vlTOPp->trans_data_tlast)) 
                << 0x28U) | (((QData)((IData)(vlTOPp->trans_data_tkeep)) 
                              << 0x24U) | (((QData)((IData)(vlTOPp->trans_data_tstrb)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->trans_data_tdata)))));
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_payload_1;
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT___zz_1) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT____Vlvbound2 
            = vlTOPp->LoopBackTest__DOT__trans_fifo__DOT___zz_logic_ram_port0;
        if ((0x80U >= (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_value))) {
            vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram__v0 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT____Vlvbound2;
            vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram__v0 = 1U;
            vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram__v0 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_value;
        }
    }
    if (vlTOPp->LoopBackTest__DOT__trans_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__trans_fifo__DOT__logic_ram__v0 
            = ((0x1feU & (vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__data_buf 
                          << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen_pkg_data_payload_last));
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__trans_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__trans_fifo__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = ((((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_valid)
                  ? (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_data_q)
                  : 0U) << 0xcU) | ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_valid)
                                     ? (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_data_i)
                                     : 0U));
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_logic_ram_port_1;
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_payload_fragment) 
                << 1U) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_payload_last));
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT___zz_logic_ram_port0;
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_payload_fragment_cha_q) 
                << 0xdU) | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_payload_fragment_cha_i) 
                             << 1U) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_payload_last)));
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_85)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33 
                                 - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z_1)
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z_1)));
    }
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = ((0x1feU & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__emitCrc)
                            ? ((0U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__counter))
                                ? vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1_result
                                : ((1U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__counter))
                                    ? (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1_result 
                                       >> 8U) : ((2U 
                                                  == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__counter))
                                                  ? 
                                                 (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1_result 
                                                  >> 0x10U)
                                                  : 
                                                 (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1_result 
                                                  >> 0x18U))))
                            : ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                               >> 1U)) << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_payload_last));
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = ((0x1ffe000U & ((VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_32)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_197__DOT__previous_adder_data) 
                              << 6U)) | ((0x1ffeU & 
                                          ((VL_MULS_III(19,19,19, 
                                                        (0x7ffffU 
                                                         & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                        (0x7ffffU 
                                                         & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_32)))) 
                                            + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_164__DOT__previous_adder_data) 
                                           >> 6U)) 
                                         | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_25)));
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_44 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_43;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram
        [vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext];
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ram__v0 
            = (((0x10000U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                             << 1U)) | ((0x8000U & 
                                         ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                          << 8U)) | 
                                        ((0x4000U & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment)) 
                                         | ((0x2000U 
                                             & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                << 7U)) 
                                            | (0x1000U 
                                               & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                  >> 1U)))))) 
               | ((0x800U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                             << 6U)) | ((0x400U & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                   >> 2U)) 
                                        | ((0x200U 
                                            & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                               << 5U)) 
                                           | ((0x100U 
                                               & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                  >> 3U)) 
                                              | ((0x80U 
                                                  & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                     << 4U)) 
                                                 | ((0x40U 
                                                     & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                        >> 4U)) 
                                                    | ((0x20U 
                                                        & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                           << 3U)) 
                                                       | ((0x10U 
                                                           & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                              >> 5U)) 
                                                          | ((8U 
                                                              & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                                 << 2U)) 
                                                             | ((4U 
                                                                 & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                                    >> 6U)) 
                                                                | ((2U 
                                                                    & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                                       << 1U)) 
                                                                   | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_last)))))))))))));
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_value;
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__7(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__7\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__raw_data_takeWhen_regNext_payload_cha_q 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__out_data_cha_q;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__raw_data_takeWhen_regNext_payload_cha_i 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__out_data_cha_i;
    if ((0U != (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__header_status))) {
        if ((1U != (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__header_status))) {
            if ((2U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__header_status))) {
                if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__out_valid_1) {
                    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__pkg_size 
                        = (((~ ((IData)(1U) << (7U 
                                                & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__cnt)))) 
                            & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__pkg_size)) 
                           | (VL_LTES_III(1,12,12, 0U, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__out_data_cha_i)) 
                              << (7U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__cnt))));
                }
            }
        }
    }
    if ((0U != (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__header_status))) {
        if ((1U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__header_status))) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__out_valid_1) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__demod_method 
                    = (((~ ((IData)(1U) << (1U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__cnt)))) 
                        & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__demod_method)) 
                       | (VL_LTES_III(1,12,12, 0U, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__out_data_cha_i)) 
                          << (1U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__cnt))));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_85)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10, 0xaU))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10, 0xaU))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_85)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22, 0xaU))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22, 0xaU))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_10) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_y 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_85)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_22 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_10, 0xaU))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_22 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_10, 0xaU))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_10) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_11 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_85)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_10 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_22, 0xaU))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_10 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_22, 0xaU))));
    }
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = ((0x1fffeU & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_data) 
                             << 1U) ^ (0xfffffffeU 
                                       & vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_logic_ram_port0))) 
               | (1U & vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_logic_ram_port0));
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1_init_state_valid) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state = 0x7fU;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1_scram_data_ready) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state 
                = ((0x7eU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14) 
                             << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_15));
        }
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_mod_array[0U] = 0x801U;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_mod_array[1U] = 0x7ffU;
    vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__strb_buf 
        = vlTOPp->__Vdly__LoopBackTest__DOT__stream_package_gen__DOT__strb_buf;
    vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__data_buf 
        = vlTOPp->__Vdly__LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__data_buf;
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram__v0;
    }
    vlTOPp->axil4Ctrl_bresp = vlTOPp->LoopBackTest__DOT___zz_axil4Ctrl_bresp;
    vlTOPp->LoopBackTest__DOT__clkCrossing_9__DOT__area_clkO_buf0 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_9__DOT__area_clkI_reg;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram
        [vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_popPtr_valueNext];
    vlTOPp->LoopBackTest__DOT__clkCrossing_10__DOT__area_clkO_buf0 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_10__DOT__area_clkI_reg;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram
        [vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext];
    if ((0U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states))) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_data_q 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT___zz_Q_mem_port0;
    } else {
        if ((1U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_data_q 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT___zz_Q_mem_port1;
        } else {
            if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__raw_data_fire) {
                vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_data_q 
                    = (0xfffU & (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                                 >> 0xdU));
            }
        }
    }
    if ((0U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states))) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_data_i 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT___zz_I_mem_port0;
    } else {
        if ((1U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_data_i 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT___zz_I_mem_port1;
        } else {
            if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__raw_data_fire) {
                vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_data_i 
                    = (0xfffU & (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                                 >> 1U));
            }
        }
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT___zz_logic_ram_port0 
        = ((0x80U >= (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_valueNext))
            ? vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram
           [vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_valueNext]
            : (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT____Vxrand1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z_1 = 3U;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_82)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32 
                                 - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_54)
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_54)));
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_32 = 3U;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_43 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_42;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_fragment 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data;
    vlTOPp->result_data_payload_cha_q = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__raw_data_takeWhen_regNext_payload_cha_q;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__raw_data_takeWhen_valid) {
        if ((7U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__cnt))) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__out_data_cha_q 
                = (0xfffU & ((VL_MULS_III(19,19,19, 
                                          (0x7ffffU 
                                           & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                          (0x7ffffU 
                                           & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_32)))) 
                              + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_197__DOT__previous_adder_data) 
                             >> 7U));
        }
    }
    vlTOPp->result_data_payload_cha_i = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__raw_data_takeWhen_regNext_payload_cha_i;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_5 
        = ((0x2000000U & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y 
                          << 1U)) | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_2 
        = ((0x2000000U & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11 
                          << 1U)) | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11);
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_82)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21, 9U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21, 9U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_82)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9, 9U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9, 9U))));
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__8(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__8\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_9) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_10 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_82)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_9 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_21, 9U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_9 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_21, 9U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_9) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_22 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_82)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_21 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_9, 9U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_21 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_9, 9U))));
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1_init_state_valid)))) {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1_scram_data_ready) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_data 
                = (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_15) 
                    << 0xfU) | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_14) 
                                 << 0xeU) | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_13) 
                                              << 0xdU) 
                                             | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_12) 
                                                 << 0xcU) 
                                                | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_11) 
                                                    << 0xbU) 
                                                   | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_10) 
                                                       << 0xaU) 
                                                      | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_9) 
                                                          << 9U) 
                                                         | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_8) 
                                                             << 8U) 
                                                            | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_7) 
                                                                << 7U) 
                                                               | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_6) 
                                                                   << 6U) 
                                                                  | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_5) 
                                                                      << 5U) 
                                                                     | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_4) 
                                                                         << 4U) 
                                                                        | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_3) 
                                                                            << 3U) 
                                                                           | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_2) 
                                                                               << 2U) 
                                                                              | (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_0))))))))))))))));
        }
    }
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram__v0) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram__v0;
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_y_raw 
        = (0x1fffU & ((0x2000000U & ((IData)(0x3fff000U) 
                                     + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_5))
                       ? ((0U != (0x1fffU & ((IData)(0x1000U) 
                                             + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_5)))
                           ? ((IData)(1U) + (0x1fffU 
                                             & (((IData)(0x3fff000U) 
                                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_5) 
                                                >> 0xdU)))
                           : (0x1fffU & (((IData)(0x3fff000U) 
                                          + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_5) 
                                         >> 0xdU)))
                       : (0x1fffU & (((IData)(0x1000U) 
                                      + ((0x2000000U 
                                          & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y 
                                             << 1U)) 
                                         | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y)) 
                                     >> 0xdU))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_x_raw 
        = (0x1fffU & ((0x2000000U & ((IData)(0x3fff000U) 
                                     + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_2))
                       ? ((0U != (0x1fffU & ((IData)(0x1000U) 
                                             + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_2)))
                           ? ((IData)(1U) + (0x1fffU 
                                             & (((IData)(0x3fff000U) 
                                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_2) 
                                                >> 0xdU)))
                           : (0x1fffU & (((IData)(0x3fff000U) 
                                          + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_2) 
                                         >> 0xdU)))
                       : (0x1fffU & (((IData)(0x1000U) 
                                      + ((0x2000000U 
                                          & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11 
                                             << 1U)) 
                                         | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11)) 
                                     >> 0xdU))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_0 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__clkCrossing_9__DOT__area_clkI_reg 
        = vlTOPp->LoopBackTest__DOT__pkg_gen_bridge_slices_limit_driver;
    vlTOPp->LoopBackTest__DOT__clkCrossing_10__DOT__area_clkI_reg 
        = vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__pkg_slices_cnt;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT___zz_Q_mem_port0 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__Q_mem
        [vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt];
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT___zz_Q_mem_port1 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__Q_mem
        [vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt];
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT___zz_I_mem_port0 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__I_mem
        [vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt];
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT___zz_I_mem_port1 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__I_mem
        [vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt];
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_54 = 7U;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_79)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31 
                                 - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_53)
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_53)));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_42 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_41;
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data 
            = (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0) 
                << 8U) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__rotated_y_raw 
        = (0xfffU & ((0x1000U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_y_raw))
                      ? ((3U == (3U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_y_raw) 
                                       >> 0xbU))) ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_y_raw)
                          : 0x800U) : ((0x800U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_y_raw))
                                        ? 0x7ffU : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_y_raw))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__rotated_x_raw 
        = (0xfffU & ((0x1000U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_x_raw))
                      ? ((3U == (3U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_x_raw) 
                                       >> 0xbU))) ? (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_x_raw)
                          : 0x800U) : ((0x800U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_x_raw))
                                        ? 0x7ffU : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_rotated_x_raw))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_85 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22 
                                      >> 0x18U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_79)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20, 8U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20, 8U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_79)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8, 8U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8, 8U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_8) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_9 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_79)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_8 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_20, 8U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_8 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_20, 8U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_8) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_21 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_79)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_20 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_8, 8U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_20 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_8, 8U))));
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0 
        = (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state) 
            << 1U) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_0));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__9(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__9\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_1 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0) 
                            >> 3U)));
    if ((0U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
        if (vlTOPp->LoopBackTest__DOT__writeJoinEvent_fire) {
            vlTOPp->LoopBackTest__DOT__pkg_gen_bridge_slices_limit_driver 
                = (0x7fU & vlTOPp->axil4Ctrl_wdata);
        }
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_53 = 0xfU;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_76)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30 
                                 - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_52)
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_52)));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_41 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_40;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_82 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21 
                                      >> 0x18U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_76)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19, 7U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19, 7U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_76)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7, 7U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7, 7U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_7) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_8 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_76)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_7 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_19, 7U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_7 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_19, 7U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_7) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_20 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_76)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_19 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_7, 7U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_19 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_7, 7U))));
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_1));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_2 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_52 = 0x1fU;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_73)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29 
                                 - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51)
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51)));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_40 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_39;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_79 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20 
                                      >> 0x18U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_73)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18, 6U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18, 6U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_73)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6, 6U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6, 6U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_6) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_7 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_73)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_6 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_18, 6U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_6 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_18, 6U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_6) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_19 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_73)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_18 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_6, 6U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_18 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_6, 6U))));
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_2));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_3 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51 = 0x3fU;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_70)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28 
                                 - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_50)
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_50)));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_39 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_38;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_76 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19 
                                      >> 0x18U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_70)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17, 5U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17, 5U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_70)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5, 5U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5, 5U))));
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__10(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__10\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_5) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_6 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_70)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_5 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_17, 5U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_5 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_17, 5U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_5) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_18 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_70)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_17 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_5, 5U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_17 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_5, 5U))));
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_3));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_4 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_50 = 0x7fU;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_67)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27 
                                 - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_49)
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_49)));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_38 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_37;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_73 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18 
                                      >> 0x18U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_67)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16, 4U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16, 4U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_67)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4, 4U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4, 4U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_4) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_5 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_67)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_4 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_16, 4U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_4 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_16, 4U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_4) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_17 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_67)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_16 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_4, 4U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_16 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_4, 4U))));
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_4));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_5 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_49 = 0xffU;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_64)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26 
                                 - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_48)
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_48)));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_37 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_36;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_70 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17 
                                      >> 0x18U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_64)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15, 3U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15, 3U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_64)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3, 3U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3, 3U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_3) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_4 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_64)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_3 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15, 3U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_3 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15, 3U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_3) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_16 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_64)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_3, 3U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_3, 3U))));
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_5));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_6 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_48 = 0x1fdU;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_61)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25 
                                 - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_47)
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_47)));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_36 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_35;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_67 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16 
                                      >> 0x18U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_61)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14, 2U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14, 2U))));
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__11(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__11\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_61)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2, 2U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2, 2U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_2) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_3 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_61)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_2 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_14, 2U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_2 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_14, 2U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_2) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_61)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_14 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_2, 2U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_14 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_2, 2U))));
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_6));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_7 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_47 = 0x3ebU;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_58)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24 
                                 - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_46)
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_46)));
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_35 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_34;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_64 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 
                                      >> 0x18U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_58)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13, 1U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13, 1U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_58)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13 
                                 + VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1, 1U))
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13 
                                 - VL_SHIFTRS_III(25,25,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1, 1U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_1) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_2 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_58)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_1 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_13, 1U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_1 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_13, 1U))));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_1) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_14 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_58)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_13 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_1, 1U))
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_13 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_1, 1U))));
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_7));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_8 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7) 
                            >> 3U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34 = 1U;
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_46 = 0x76bU;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_55)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23 
                                 - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45)
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45)));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_34 = 0U;
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_61 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14 
                                      >> 0x18U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_55)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x 
                                 - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12)
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12)));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13 
            = (0x1ffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_55)
                              ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12 
                                 + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x)
                              : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12 
                                 - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x)));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_1 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_55)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x 
                                - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_12)
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x 
                                + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_12)));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_13 
            = (0xffffffU & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_55)
                             ? (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_12 
                                + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x)
                             : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_12 
                                - vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x)));
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_8));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_9 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45 = 0xc90U;
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23 
            = ((0x1000000U & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__phi 
                              << 1U)) | vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__phi);
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_58 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13 
                                      >> 0x18U)));
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x 
            = ((0x1000000U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_payload_cha_i) 
                              << 0xdU)) | ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_payload_cha_i) 
                                           << 0xcU));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12 
            = ((0x1000000U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_payload_cha_q) 
                              << 0xdU)) | ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__raw_data_regNext_payload_cha_q) 
                                           << 0xcU));
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x 
            = (0xffffffU & ((0x1000000U & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_when_SInt_l130)
                             ? ((3U == (3U & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_when_SInt_l130 
                                              >> 0x17U)))
                                 ? vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_when_SInt_l130
                                 : 0x800000U) : ((0x800000U 
                                                  & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_when_SInt_l130)
                                                  ? 0x7fffffU
                                                  : vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_when_SInt_l130)));
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__12(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__12\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_12 
            = (0xffffffU & ((0x1000000U & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4)
                             ? ((3U == (3U & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4 
                                              >> 0x17U)))
                                 ? vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4
                                 : 0x800000U) : ((0x800000U 
                                                  & vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4)
                                                  ? 0x7fffffU
                                                  : vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4)));
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_9));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_10 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_55 
        = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34)
                  ? (~ (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23 
                        >> 0x18U)) : (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12 
                                      >> 0x18U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_10));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_11 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_11));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_12 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_12));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_13 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_13));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_14 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13) 
                            >> 3U)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14 
        = ((0xfeU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13) 
                     << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_14));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_15 
        = (1U & (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14) 
                  >> 6U) ^ ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14) 
                            >> 3U)));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__22(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__22\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__mean_cnt 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__mean_cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__cnt 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__xy_symbol 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__xy_symbol;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__prod_cnt 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__prod_cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_cnt 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__cnt 
        = vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__cnt 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__timeout 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__timeout;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__header_status 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__header_status;
    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states;
    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__repeatCnt 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__repeatCnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status;
    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__cnt 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__counter 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__counter;
    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__counter 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__counter;
    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status;
    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_buffer 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_buffer;
    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_cnt 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__cnt 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__counter 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__counter;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__plateau_cnt 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__plateau_cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__delta_phi_mean 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__delta_phi_mean;
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__cnt = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__raw_data_takeWhen_valid) {
            vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__cnt 
                = ((7U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__cnt))
                    ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT___zz_cnt));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rValid = 0U;
    } else {
        if (vlTOPp->axil4Ctrl_arready) {
            vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rValid 
                = vlTOPp->axil4Ctrl_arvalid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__xy_symbol = 0U;
    } else {
        if (VL_LTES_III(1,24,24, 0x1921U, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l47)) {
            vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__xy_symbol 
                = (1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__xy_symbol)));
        } else {
            if (VL_GTES_III(1,24,24, 0xffe6dfU, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50)) {
                vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__xy_symbol 
                    = (1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__xy_symbol)));
            }
        }
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_last 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__flowDeMux_1_outputs_2_payload_last));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_last 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__flowDeMux_1_outputs_1_payload_last));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_last 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__flowDeMux_1_outputs_0_payload_last));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__prod_cnt = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender_sdf_not_found) {
            vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__prod_cnt = 0U;
        } else {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__when_PhyRx_l85) {
                if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__when_PhyRx_l86)))) {
                    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__prod_cnt 
                        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__when_PhyRx_l89)
                            ? 0U : (0x1fU & ((IData)(1U) 
                                             + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__prod_cnt))));
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__phase_corrected_1 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender_sdf_not_found) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__phase_corrected_1 = 0U;
        } else {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__when_PhyRx_l85) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__phase_corrected_1 
                    = (0x16U <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__prod_cnt));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__raw_data_last = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire) {
            vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__raw_data_last 
                = (1U & (IData)((vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT___zz_logic_ram_port0 
                                 >> 0x28U)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__pkg_slices_cnt = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire)))) {
            if (vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__split_data_fire) {
                vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__pkg_slices_cnt 
                    = ((IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen_pkg_data_payload_last)
                        ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT___zz_pkg_slices_cnt));
            }
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__23(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__23\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__when_PhyTx_l246));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT___zz_axil4Ctrl_bvalid_2 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT___zz_writeJoinEvent_translated_ready) {
            vlTOPp->LoopBackTest__DOT___zz_axil4Ctrl_bvalid_2 
                = vlTOPp->LoopBackTest__DOT__writeJoinEvent_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_cnt = 0U;
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_payload_1 = 0U;
    } else {
        if ((1U & (~ (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_raw_data_valid) 
                       & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_raw_data_ready)) 
                      & (IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT___zz_logic_ram_port0))))) {
            if (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_raw_data_valid) 
                 & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_raw_data_ready))) {
                vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_cnt 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_cnt)));
            }
        }
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__when_PhyTx_l246) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_payload_1 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_cnt)));
            vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_cnt = 0U;
        } else {
            if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__raw_data_fire_3) {
                vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_cnt 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_cnt)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_valid = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1_init_state_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_valid = 0U;
        } else {
            if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1_scram_data_ready) {
                vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_valid = 1U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__cnt = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire) {
            vlTOPp->__Vdly__LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__cnt = 4U;
        } else {
            if (vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__split_data_fire) {
                vlTOPp->__Vdly__LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__cnt 
                    = (7U & ((IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__cnt) 
                             - (IData)(1U)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__raw_last = 0U;
    } else {
        if (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_raw_data_valid) 
             & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_raw_data_ready))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__raw_last 
                = (1U & vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_logic_ram_port0);
        }
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data_valid_1));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__phi 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid)
                                           ? vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__phiNext
                                           : 0U));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo_io_pop_valid))) {
            vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_pushing;
        }
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment 
        = ((IData)(vlTOPp->reset) ? 0U : ((2U != (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                           ? 0U : (0xfU 
                                                   & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_buffer))));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((0U 
                                                != (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                                ? 0U
                                                : (0xffU 
                                                   & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_buffer)))));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire))) {
            vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
            if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_raw_data_valid) {
                vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
                if ((((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_raw_data_valid) 
                      & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_raw_data_ready)) 
                     & vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_logic_ram_port0)) {
                    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status = 2U;
                }
            } else {
                vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status = 0U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt = 0U;
        vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__repeatCnt = 0U;
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__raw_ready = 0U;
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_valid = 0U;
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_last = 0U;
        vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states))) {
            vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt = 0U;
            vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__repeatCnt = 0U;
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__raw_ready = 0U;
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_valid = 0U;
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_last = 0U;
            if (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder_raw_data_valid) 
                 & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full)))) {
                vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt)));
                vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states))) {
                if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full)))) {
                    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt 
                        = ((0xfU == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt))
                            ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT___zz_cnt));
                }
                vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_valid = 1U;
                if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__when_PreambleExtender_l74) {
                    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__repeatCnt 
                        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__repeatCnt)));
                    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__when_PreambleExtender_l76) {
                        vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__raw_ready = 1U;
                        vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states = 2U;
                    }
                }
            } else {
                vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_valid 
                    = vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__raw_data_fire;
                if ((((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder_raw_data_valid) 
                      & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder_raw_data_ready)) 
                     & vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_logic_ram_port0)) {
                    vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states = 0U;
                    vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_last = 1U;
                } else {
                    vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_last = 0U;
                }
            }
        }
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment 
        = ((IData)(vlTOPp->reset) ? 0U : ((1U != (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                           ? 0U : (3U 
                                                   & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_buffer))));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_last = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__clkCrossing_11__DOT__area_clkO_buf1) {
            if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_data_fire) {
                vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__base_last 
                    = (1U & vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_logic_ram_port0);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cfo_corrected = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender_sdf_not_found) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cfo_corrected = 0U;
        } else {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__delta_phi_valid_regNext) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cfo_corrected = 1U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__phiCorrect = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__delta_phi_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__phiCorrect 
                    = (0xffffffU & VL_NEGATE_I(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__delta_phi_mean));
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__phiCorrect = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__cnt = 0U;
    } else {
        if (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_result_data_valid) 
             & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_raw_data_ready))) {
            vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__cnt 
                = ((7U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT__cnt))
                    ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling__DOT___zz_cnt));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__raw_data_payload_first = 1U;
    } else {
        if (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_raw_data_valid) 
             & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_raw_data_ready))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__raw_data_payload_first 
                = (1U & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_logic_ram_port0));
        }
    }
    vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__raw_data_takeWhen_regNext_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__out_valid_1) 
                                         & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__by_pass_enable)));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_popping))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushing;
        }
    }
    vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_pushPtr_value)));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popping))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_risingOccupancy 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushing;
        }
    }
    vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushPtr_value)));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__24(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__24\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__counter = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__when_PhyTx_l72) {
            vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__counter 
                = (7U & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__counter)));
        }
        if ((((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_valid) 
              & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full))) 
             & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_payload_last))) {
            vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_padder__DOT__counter = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_popping))) {
            vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status = 0U;
        vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__counter = 0U;
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__pkg_size_ready_1 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status))) {
            if (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_raw_data_valid) 
                 & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo_io_pop_valid))) {
                vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status = 1U;
                vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__pkg_size_ready_1 = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status))) {
                if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__pkg_size_fire) {
                    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__pkg_size_ready_1 = 0U;
                }
                if (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_valid) 
                     & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full)))) {
                    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__when_PhyTx_l310) {
                        vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status = 2U;
                        vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__counter = 9U;
                    } else {
                        vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__counter 
                            = (0x1fU & ((IData)(1U) 
                                        + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__counter)));
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status))) {
                    if (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_valid) 
                         & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full)))) {
                        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__when_PhyTx_l322) {
                            vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status = 3U;
                            vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__counter = 0U;
                        } else {
                            vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__counter 
                                = (0x1fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    }
                } else {
                    if ((((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_valid) 
                          & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full))) 
                         & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_payload_last))) {
                        vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_valueNext));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_value)));
    vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((2U == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf1)) 
                                         & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__unit_valid)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((1U == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf1)) 
                                         & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__unit_valid)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((0U == (IData)(vlTOPp->LoopBackTest__DOT__clkCrossing_14__DOT__area_clkO_buf1)) 
                                         & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_data_div__DOT__unit_valid)));
    vlTOPp->LoopBackTest__DOT__trans_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__cnt 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11)
                                           ? ((0xfU 
                                               <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__cnt))
                                               ? 0U
                                               : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT___zz_cnt))
                                           : 0U));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state = 0xffffffffU;
    } else {
        if ((((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_valid) 
              & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full))) 
             & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_payload_last))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state = 0xffffffffU;
        } else {
            if (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_raw_data_valid) 
                 & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_raw_data_ready))) {
                vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                    = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__prod_max = VL_ULL(0);
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender_sdf_not_found) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__prod_max = VL_ULL(0);
        } else {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__when_PhyRx_l85) {
                if ((0x16U > (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__prod_cnt))) {
                    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__when_PhyRx_l89) {
                        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__prod_max 
                            = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__corr_val_i;
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushing) 
             != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popping))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_risingOccupancy 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushing) 
             != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popping))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_risingOccupancy 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushing) 
             != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popping))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_risingOccupancy 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushing) 
             != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popping))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_risingOccupancy 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushing) 
             != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popping))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_risingOccupancy 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__shiftRegister_11__DOT__shift_reg_11 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__shiftRegister_11__DOT__shift_reg_11 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__shiftRegister_11__DOT__shift_reg_10;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__shiftRegister_11__DOT__shift_reg_11 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushing) 
             != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popping))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_risingOccupancy 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushing) 
             != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popping))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_risingOccupancy 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushing) 
             != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popping))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_risingOccupancy 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__counter = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__emitCrc) {
            if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full)))) {
                vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__counter 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc__DOT__counter)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushing) 
             != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popping))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_risingOccupancy 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__last_padding = 0U;
    } else {
        if ((((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_result_data_valid) 
              & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_raw_data_ready)) 
             & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_oversampling_result_data_payload_last))) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__last_padding = 1U;
        } else {
            if ((((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) 
                  & (~ (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full))) 
                 & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_25))) {
                vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__last_padding = 0U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_15 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_15 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_12__DOT__shift_reg_14;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_15 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__power_cal_valid) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_15 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__powerMeter_1__DOT__shiftRegister_11__DOT__shift_reg_14;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_197__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_197__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_31)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_196__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_164__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_164__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_31)))) 
                               + vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_163__DOT__previous_adder_data));
        }
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value)));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__25(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__25\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value)));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__r_enc_buf = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid) {
            vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__r_enc_buf 
                = (0x7fU & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                            >> 1U));
        }
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_valueNext));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_valueNext));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_pushPtr_value)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_pushPtr_value)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_pushPtr_value)));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value)));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__impulse_cnt 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid)
                                           ? ((0x11U 
                                               <= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__impulse_cnt))
                                               ? 0U
                                               : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT___zz_impulse_cnt))
                                           : 0U));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_11 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_10));
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher__DOT__raw_data_last 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__raw_data_payload_last_regNext));
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_16 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_16 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_15;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_16 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_16 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cross_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_15;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_15 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_15 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_14;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_15 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_15 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__autoCorrelator_2__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_14;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__plateau_cnt = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__gate_pkg_det) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__when_PreambleDetector_l67) {
                vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__plateau_cnt 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__plateau_cnt)));
            }
        } else {
            vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__preamble_detector__DOT__plateau_cnt = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_197__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_197__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__coff_mem_31)))) 
                               + vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_filter__DOT__fir_filter_iq__DOT__transposeCore_196__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__out_valid_1) {
            vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win 
                = ((0xfeU & (IData)(vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win)) 
                   | VL_LTES_III(32,12,12, 0U, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decimator__DOT__decimator__DOT__out_data_cha_i)));
            vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win 
                = ((0xfdU & (IData)(vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win)) 
                   | (2U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win) 
                            << 1U)));
            vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win 
                = ((0xfbU & (IData)(vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win)) 
                   | (4U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win) 
                            << 1U)));
            vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win 
                = ((0xf7U & (IData)(vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win)) 
                   | (8U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win) 
                            << 1U)));
            vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win 
                = ((0xefU & (IData)(vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win)) 
                   | (0x10U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win) 
                               << 1U)));
            vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win 
                = ((0xdfU & (IData)(vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win)) 
                   | (0x20U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win) 
                               << 1U)));
            vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win 
                = ((0xbfU & (IData)(vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win)) 
                   | (0x40U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win) 
                               << 1U)));
            vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win 
                = ((0x7fU & (IData)(vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win)) 
                   | (0x80U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender__DOT__sdf_i_win) 
                               << 1U)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_15 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_15 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_14;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_12__DOT__shift_reg_15 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_15 = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_15 
                    = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_14;
            }
        } else {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_11__DOT__shift_reg_15 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cfo_enable = 0U;
    } else {
        if (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_header_extender_sdf_not_found) 
             | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__delta_phi_valid_regNext))) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cfo_enable = 0U;
        } else {
            if (((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_preamble_detector__DOT__pkg_handling_1) 
                 & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__pkg_detected_regNext)))) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__cfo_enable = 1U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__delta_phi_mean = 0U;
    } else {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__when_CFOCorrector_l45) {
            vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__delta_phi_mean = 0U;
        } else {
            if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator_delta_phi_valid) {
                vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__delta_phi_mean 
                    = (0xffffffU & (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__delta_phi_mean 
                                    + ((0xc00000U & 
                                        (VL_NEGATE_I((IData)(
                                                             (1U 
                                                              & (VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z, 4U) 
                                                                 >> 0x17U)))) 
                                         << 0x16U)) 
                                       | (0x3fffffU 
                                          & (VL_SHIFTRS_III(24,24,32, vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z, 4U) 
                                             >> 2U)))));
            }
        }
    }
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_cnt 
        = vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_cnt;
    vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__cnt 
        = vlTOPp->__Vdly__LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__cnt;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status 
        = vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler__DOT__scrambler_status;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states 
        = vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__preamble_states;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__repeatCnt 
        = vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__repeatCnt;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt 
        = vlTOPp->__Vdly__LoopBackTest__DOT__transmitter__DOT__stf_preamble_adder__DOT__cnt;
}
