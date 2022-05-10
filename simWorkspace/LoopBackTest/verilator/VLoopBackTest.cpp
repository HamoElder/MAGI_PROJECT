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

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__26(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__26\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__halt_cnt 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__halt_cnt;
    vlTOPp->__Vdly__LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__data_buf 
        = vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__data_buf;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__decoded_ram_select 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__decoded_ram_select;
    vlTOPp->__Vdly__LoopBackTest__DOT__stream_package_gen__DOT__bit_valid_buf 
        = vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__bit_valid_buf;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__pkg_cnt 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__pkg_cnt;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_2__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0 = 0U;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last;
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__trans_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram__v0 = 0U;
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__33(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__33\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen_result_data_queueWithAvailability__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder_decoded_data_toStream_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__data_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_puncher_punched_data_toStream_queueWithAvailability__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__LoopBackTest__DOT__receiver__DOT__de_scrambling_to_de_puncher_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_last 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__flowDeMux_2_outputs_2_payload_last;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_last 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__flowDeMux_2_outputs_1_payload_last;
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_last 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl__DOT__flowDeMux_2_outputs_0_payload_last;
    if (vlTOPp->axil4Ctrl_arready) {
        vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_prot 
            = vlTOPp->axil4Ctrl_arprot;
    }
    if ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((1U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__halt_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__halt_cnt)));
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__halt_cnt = 0U;
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT___zz_writeJoinEvent_translated_ready) {
        vlTOPp->LoopBackTest__DOT___zz_axil4Ctrl_bresp = 0U;
    }
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT___zz_survival_path_ram_2_port1 
        = ((0xa7U >= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_read))
            ? vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_2
           [vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_read]
            : vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT____Vxrand6);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port1 
        = ((0xa7U >= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_read))
            ? vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_1
           [vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_read]
            : vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT____Vxrand4);
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT___zz_survival_path_ram_0_port1 
        = ((0xa7U >= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_read))
            ? vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_0
           [vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_read]
            : vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT____Vxrand2);
    vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT___zz_logic_ram_port0 
        = vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_ram
        [vlTOPp->LoopBackTest__DOT__transmitter__DOT__mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability__DOT__logic_popPtr_valueNext];
    if (vlTOPp->axil4Ctrl_arready) {
        vlTOPp->LoopBackTest__DOT__axil4Ctrl_ar_rData_addr 
            = vlTOPp->axil4Ctrl_araddr;
    }
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
    vlTOPp->LoopBackTest__DOT__clkCrossing_10__DOT__area_clkO_buf1 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_10__DOT__area_clkO_buf0;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_126 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_124 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_122 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_120 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_118 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_116 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_114 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__34(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__34\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_112 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_110 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_108 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_106 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_104 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_102 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_100 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_98 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_96 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_94 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_92 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_90 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_88 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_86 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_84 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_82 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_127 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_80 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_125 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_105 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_103 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_101 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_99 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_97 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_95 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_93 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_23 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__35(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__35\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_89 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_21 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_87 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_19 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_9 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_29 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_27 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_5 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_37 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_83 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_36 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_15 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_38 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_17 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_25 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_113 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_34 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_13 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_11 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_3 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_35 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_81 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_7 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_85 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_91 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_0 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_33 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_31 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__36(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__36\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_39 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_107 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_40 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_41 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_109 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_42 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_43 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_111 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_44 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_45 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_1 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_46 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_47 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_115 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_2 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_48 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_49 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_117 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_4 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_50 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_51 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_119 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_6 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_52 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_53 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_121 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_8 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_54 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_55 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__37(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__37\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_123 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_10 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_56 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_57 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_12 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_58 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_59 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_14 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_60 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_61 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_16 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_62 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_63 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_18 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_64 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_65 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_20 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_66 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_67 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_22 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_68 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_69 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_24 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_70 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_71 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_26 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_72 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_73 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__38(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__38\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_28 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_74 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_75 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_30 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_76 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_77 
        = (3U & ((1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_32 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_78 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__candidate_branches_79 
        = (3U & ((1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    if ((4U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((2U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((0xa7U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_read))) {
                vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__decoded_ram_select 
                    = ((0U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__decoded_ram_select))
                        ? 2U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT___zz_decoded_ram_select_2));
            }
        } else {
            if ((1U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__decoded_ram_select = 1U;
            } else {
                if ((0xa7U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_read))) {
                    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__tail_repeat) {
                        vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__decoded_ram_select 
                            = ((0U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__decoded_ram_select))
                                ? 2U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT___zz_decoded_ram_select));
                    }
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((1U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state))) {
                if ((7U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__halt_cnt))) {
                    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__goto_tail) {
                        vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__decoded_ram_select 
                            = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_select;
                    }
                }
            } else {
                if ((0xa7U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_read))) {
                    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__decoded_ram_select 
                        = ((0U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__decoded_ram_select))
                            ? 2U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT___zz_decoded_ram_select_2));
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state))) {
                if ((0xa7U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_read))) {
                    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__decoded_ram_select 
                        = ((0U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__decoded_ram_select))
                            ? 2U : (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT___zz_decoded_ram_select_1));
                }
            }
        }
    }
    if ((0U != (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status))) {
        if ((1U == (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__header_status))) {
            if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__pkg_size_fire) {
                vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_header_extender__DOT__pkg_size_payload_1 
                    = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT___zz_logic_ram_port0;
            }
        }
    }
    if ((4U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((2U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state))) {
            vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__pipe_halt = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__pipe_halt = 1U;
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__pipe_halt = 0U;
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__pipe_halt = 0U;
                if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__when_Traceback_l104) {
                    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__pipe_halt = 1U;
                }
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire) {
        vlTOPp->__Vdly__LoopBackTest__DOT__stream_package_gen__DOT__bit_valid_buf 
            = (0xfU & (IData)((vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT___zz_logic_ram_port0 
                               >> 0x20U)));
    } else {
        if (vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__split_data_fire) {
            vlTOPp->__Vdly__LoopBackTest__DOT__stream_package_gen__DOT__bit_valid_buf 
                = (0xfU & ((IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__bit_valid_buf) 
                           >> 1U));
        }
    }
    if ((4U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_status))) {
        vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__pkg_cnt 
            = (0xffU & ((IData)(1U) + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__pkg_cnt)));
    } else {
        if ((2U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_status))) {
            if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_status)))) {
                if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__raw_data_fire_3) {
                    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__pkg_cnt 
                        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__when_PhyRx_l452)
                            ? 0U : ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__when_PhyRx_l456)
                                     ? 0U : (0xffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__pkg_cnt)))));
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__crc_status))) {
                if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__raw_data_fire_3) {
                    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__pkg_cnt 
                        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__when_PhyRx_l439)
                            ? 0U : (0xffU & ((IData)(1U) 
                                             + (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__pkg_cnt))));
                }
            } else {
                vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_crc_checker__DOT__pkg_cnt = 0U;
            }
        }
    }
    vlTOPp->LoopBackTest__DOT__clkCrossing_19__DOT__area_clkO_buf1 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_19__DOT__area_clkO_buf0;
    vlTOPp->LoopBackTest__DOT__clkCrossing_11__DOT__area_clkO_buf1 
        = vlTOPp->LoopBackTest__DOT__clkCrossing_11__DOT__area_clkO_buf0;
    vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44 
        = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_cfo__DOT__coarse_cfo_inst__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43;
    if (((2U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_select)) 
         & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path_valid))) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT____Vlvbound5 
            = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path;
        if ((0xa7U >= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_write))) {
            vlTOPp->__Vdlyvval__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_2__v0 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT____Vlvbound5;
            vlTOPp->__Vdlyvset__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_2__v0 = 1U;
            vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_2__v0 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_write;
        }
    }
    if (((1U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_select)) 
         & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path_valid))) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT____Vlvbound3 
            = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path;
        if ((0xa7U >= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_write))) {
            vlTOPp->__Vdlyvval__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT____Vlvbound3;
            vlTOPp->__Vdlyvset__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0 = 1U;
            vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_write;
        }
    }
    if (((0U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_select)) 
         & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path_valid))) {
        vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT____Vlvbound1 
            = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__pmu_core__DOT__survival_path;
        if ((0xa7U >= (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_write))) {
            vlTOPp->__Vdlyvval__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT____Vlvbound1;
            vlTOPp->__Vdlyvset__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0 = 1U;
            vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0 
                = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__tbu_core__DOT__ram_addr_write;
        }
    }
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last 
        = ((~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)) 
           & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last) 
              | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT___zz_lifo_last)));
    vlTOPp->__Vdly__LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last 
        = ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) 
           & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last) 
              | (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT___zz_lifo_last)));
    if (vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_logic_ram_port0;
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__trans_to_recv_fifo__DOT__logic_pushPtr_value;
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__39(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__39\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp7[16];
    WData/*511:0*/ __Vtemp8[16];
    WData/*511:0*/ __Vtemp9[16];
    WData/*511:0*/ __Vtemp10[16];
    WData/*511:0*/ __Vtemp11[16];
    WData/*511:0*/ __Vtemp12[16];
    WData/*511:0*/ __Vtemp13[16];
    WData/*511:0*/ __Vtemp14[16];
    WData/*511:0*/ __Vtemp15[16];
    WData/*511:0*/ __Vtemp16[16];
    WData/*511:0*/ __Vtemp17[16];
    WData/*511:0*/ __Vtemp18[16];
    WData/*511:0*/ __Vtemp19[16];
    WData/*511:0*/ __Vtemp20[16];
    WData/*511:0*/ __Vtemp21[16];
    WData/*511:0*/ __Vtemp22[16];
    WData/*511:0*/ __Vtemp23[16];
    WData/*511:0*/ __Vtemp24[16];
    WData/*511:0*/ __Vtemp25[16];
    WData/*511:0*/ __Vtemp26[16];
    WData/*511:0*/ __Vtemp27[16];
    WData/*511:0*/ __Vtemp28[16];
    WData/*511:0*/ __Vtemp29[16];
    WData/*511:0*/ __Vtemp30[16];
    WData/*511:0*/ __Vtemp31[16];
    WData/*511:0*/ __Vtemp32[16];
    WData/*511:0*/ __Vtemp33[16];
    WData/*511:0*/ __Vtemp34[16];
    WData/*511:0*/ __Vtemp35[16];
    WData/*511:0*/ __Vtemp36[16];
    WData/*511:0*/ __Vtemp37[16];
    WData/*511:0*/ __Vtemp38[16];
    WData/*511:0*/ __Vtemp39[16];
    WData/*511:0*/ __Vtemp40[16];
    WData/*511:0*/ __Vtemp41[16];
    WData/*511:0*/ __Vtemp42[16];
    WData/*511:0*/ __Vtemp43[16];
    WData/*511:0*/ __Vtemp44[16];
    WData/*511:0*/ __Vtemp45[16];
    WData/*511:0*/ __Vtemp46[16];
    WData/*511:0*/ __Vtemp47[16];
    WData/*511:0*/ __Vtemp48[16];
    WData/*511:0*/ __Vtemp49[16];
    WData/*511:0*/ __Vtemp50[16];
    WData/*511:0*/ __Vtemp51[16];
    WData/*511:0*/ __Vtemp52[16];
    // Body
    if (vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_ram__v0 
            = (((QData)((IData)(vlTOPp->trans_data_tlast)) 
                << 0x24U) | (((QData)((IData)(vlTOPp->trans_data_tkeep)) 
                              << 0x20U) | (QData)((IData)(vlTOPp->trans_data_tdata))));
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__axi4_stream_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT__logic_ram__v0 
            = (0x18U | ((6U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__raw_data_fragment) 
                               << 1U)) | ((1U == (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__cnt)) 
                                          & (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher__DOT__raw_data_last))));
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_de_puncher_de_punched_data_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->LoopBackTest__DOT__trans_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__trans_fifo__DOT__logic_ram__v0 
            = ((0x1feU & (vlTOPp->LoopBackTest__DOT__stream_package_gen__DOT__split_core__DOT__data_buf 
                          << 1U)) | (IData)(vlTOPp->LoopBackTest__DOT__stream_package_gen_pkg_data_payload_last));
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__trans_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__trans_fifo__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__trans_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT___zz_1) {
        vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT____Vlvbound2 
            = vlTOPp->LoopBackTest__DOT__trans_fifo__DOT___zz_logic_ram_port0;
        if ((0xfbU >= (IData)(vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_value))) {
            vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram__v0 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT____Vlvbound2;
            vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram__v0 = 1U;
            vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_ram__v0 
                = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__dataFifo__DOT__logic_pushPtr_value;
        }
    }
    if (vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_payload_1;
        vlTOPp->__Vdlyvset__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_ram__v0 
            = vlTOPp->LoopBackTest__DOT__transmitter__DOT__phy_tx_information_gen__DOT__pkg_size_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp7[0U] = 1U;
            __Vtemp7[1U] = 0U;
            __Vtemp7[2U] = 0U;
            __Vtemp7[3U] = 0U;
            __Vtemp7[4U] = 0U;
            __Vtemp7[5U] = 0U;
            __Vtemp7[6U] = 0U;
            __Vtemp7[7U] = 0U;
            __Vtemp7[8U] = 0U;
            __Vtemp7[9U] = 0U;
            __Vtemp7[0xaU] = 0U;
            __Vtemp7[0xbU] = 0U;
            __Vtemp7[0xcU] = 0U;
            __Vtemp7[0xdU] = 0U;
            __Vtemp7[0xeU] = 0U;
            __Vtemp7[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp8, __Vtemp7, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp8[8U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_267 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp9[0U] = 1U;
            __Vtemp9[1U] = 0U;
            __Vtemp9[2U] = 0U;
            __Vtemp9[3U] = 0U;
            __Vtemp9[4U] = 0U;
            __Vtemp9[5U] = 0U;
            __Vtemp9[6U] = 0U;
            __Vtemp9[7U] = 0U;
            __Vtemp9[8U] = 0U;
            __Vtemp9[9U] = 0U;
            __Vtemp9[0xaU] = 0U;
            __Vtemp9[0xbU] = 0U;
            __Vtemp9[0xcU] = 0U;
            __Vtemp9[0xdU] = 0U;
            __Vtemp9[0xeU] = 0U;
            __Vtemp9[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp10, __Vtemp9, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp10[8U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_266 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp11[0U] = 1U;
            __Vtemp11[1U] = 0U;
            __Vtemp11[2U] = 0U;
            __Vtemp11[3U] = 0U;
            __Vtemp11[4U] = 0U;
            __Vtemp11[5U] = 0U;
            __Vtemp11[6U] = 0U;
            __Vtemp11[7U] = 0U;
            __Vtemp11[8U] = 0U;
            __Vtemp11[9U] = 0U;
            __Vtemp11[0xaU] = 0U;
            __Vtemp11[0xbU] = 0U;
            __Vtemp11[0xcU] = 0U;
            __Vtemp11[0xdU] = 0U;
            __Vtemp11[0xeU] = 0U;
            __Vtemp11[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp12, __Vtemp11, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp12[8U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_265 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp13[0U] = 1U;
            __Vtemp13[1U] = 0U;
            __Vtemp13[2U] = 0U;
            __Vtemp13[3U] = 0U;
            __Vtemp13[4U] = 0U;
            __Vtemp13[5U] = 0U;
            __Vtemp13[6U] = 0U;
            __Vtemp13[7U] = 0U;
            __Vtemp13[8U] = 0U;
            __Vtemp13[9U] = 0U;
            __Vtemp13[0xaU] = 0U;
            __Vtemp13[0xbU] = 0U;
            __Vtemp13[0xcU] = 0U;
            __Vtemp13[0xdU] = 0U;
            __Vtemp13[0xeU] = 0U;
            __Vtemp13[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp14, __Vtemp13, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp14[8U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_264 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp15[0U] = 1U;
            __Vtemp15[1U] = 0U;
            __Vtemp15[2U] = 0U;
            __Vtemp15[3U] = 0U;
            __Vtemp15[4U] = 0U;
            __Vtemp15[5U] = 0U;
            __Vtemp15[6U] = 0U;
            __Vtemp15[7U] = 0U;
            __Vtemp15[8U] = 0U;
            __Vtemp15[9U] = 0U;
            __Vtemp15[0xaU] = 0U;
            __Vtemp15[0xbU] = 0U;
            __Vtemp15[0xcU] = 0U;
            __Vtemp15[0xdU] = 0U;
            __Vtemp15[0xeU] = 0U;
            __Vtemp15[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp16, __Vtemp15, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp16[8U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_263 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp17[0U] = 1U;
            __Vtemp17[1U] = 0U;
            __Vtemp17[2U] = 0U;
            __Vtemp17[3U] = 0U;
            __Vtemp17[4U] = 0U;
            __Vtemp17[5U] = 0U;
            __Vtemp17[6U] = 0U;
            __Vtemp17[7U] = 0U;
            __Vtemp17[8U] = 0U;
            __Vtemp17[9U] = 0U;
            __Vtemp17[0xaU] = 0U;
            __Vtemp17[0xbU] = 0U;
            __Vtemp17[0xcU] = 0U;
            __Vtemp17[0xdU] = 0U;
            __Vtemp17[0xeU] = 0U;
            __Vtemp17[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp18, __Vtemp17, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp18[8U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_262 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp19[0U] = 1U;
            __Vtemp19[1U] = 0U;
            __Vtemp19[2U] = 0U;
            __Vtemp19[3U] = 0U;
            __Vtemp19[4U] = 0U;
            __Vtemp19[5U] = 0U;
            __Vtemp19[6U] = 0U;
            __Vtemp19[7U] = 0U;
            __Vtemp19[8U] = 0U;
            __Vtemp19[9U] = 0U;
            __Vtemp19[0xaU] = 0U;
            __Vtemp19[0xbU] = 0U;
            __Vtemp19[0xcU] = 0U;
            __Vtemp19[0xdU] = 0U;
            __Vtemp19[0xeU] = 0U;
            __Vtemp19[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp20, __Vtemp19, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp20[8U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_261 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp21[0U] = 1U;
            __Vtemp21[1U] = 0U;
            __Vtemp21[2U] = 0U;
            __Vtemp21[3U] = 0U;
            __Vtemp21[4U] = 0U;
            __Vtemp21[5U] = 0U;
            __Vtemp21[6U] = 0U;
            __Vtemp21[7U] = 0U;
            __Vtemp21[8U] = 0U;
            __Vtemp21[9U] = 0U;
            __Vtemp21[0xaU] = 0U;
            __Vtemp21[0xbU] = 0U;
            __Vtemp21[0xcU] = 0U;
            __Vtemp21[0xdU] = 0U;
            __Vtemp21[0xeU] = 0U;
            __Vtemp21[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp22, __Vtemp21, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp22[8U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_260 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp23[0U] = 1U;
            __Vtemp23[1U] = 0U;
            __Vtemp23[2U] = 0U;
            __Vtemp23[3U] = 0U;
            __Vtemp23[4U] = 0U;
            __Vtemp23[5U] = 0U;
            __Vtemp23[6U] = 0U;
            __Vtemp23[7U] = 0U;
            __Vtemp23[8U] = 0U;
            __Vtemp23[9U] = 0U;
            __Vtemp23[0xaU] = 0U;
            __Vtemp23[0xbU] = 0U;
            __Vtemp23[0xcU] = 0U;
            __Vtemp23[0xdU] = 0U;
            __Vtemp23[0xeU] = 0U;
            __Vtemp23[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp24, __Vtemp23, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((8U & __Vtemp24[8U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_259 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp25[0U] = 1U;
            __Vtemp25[1U] = 0U;
            __Vtemp25[2U] = 0U;
            __Vtemp25[3U] = 0U;
            __Vtemp25[4U] = 0U;
            __Vtemp25[5U] = 0U;
            __Vtemp25[6U] = 0U;
            __Vtemp25[7U] = 0U;
            __Vtemp25[8U] = 0U;
            __Vtemp25[9U] = 0U;
            __Vtemp25[0xaU] = 0U;
            __Vtemp25[0xbU] = 0U;
            __Vtemp25[0xcU] = 0U;
            __Vtemp25[0xdU] = 0U;
            __Vtemp25[0xeU] = 0U;
            __Vtemp25[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp26, __Vtemp25, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((4U & __Vtemp26[8U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_258 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp27[0U] = 1U;
            __Vtemp27[1U] = 0U;
            __Vtemp27[2U] = 0U;
            __Vtemp27[3U] = 0U;
            __Vtemp27[4U] = 0U;
            __Vtemp27[5U] = 0U;
            __Vtemp27[6U] = 0U;
            __Vtemp27[7U] = 0U;
            __Vtemp27[8U] = 0U;
            __Vtemp27[9U] = 0U;
            __Vtemp27[0xaU] = 0U;
            __Vtemp27[0xbU] = 0U;
            __Vtemp27[0xcU] = 0U;
            __Vtemp27[0xdU] = 0U;
            __Vtemp27[0xeU] = 0U;
            __Vtemp27[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp28, __Vtemp27, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((2U & __Vtemp28[8U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_257 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp29[0U] = 1U;
            __Vtemp29[1U] = 0U;
            __Vtemp29[2U] = 0U;
            __Vtemp29[3U] = 0U;
            __Vtemp29[4U] = 0U;
            __Vtemp29[5U] = 0U;
            __Vtemp29[6U] = 0U;
            __Vtemp29[7U] = 0U;
            __Vtemp29[8U] = 0U;
            __Vtemp29[9U] = 0U;
            __Vtemp29[0xaU] = 0U;
            __Vtemp29[0xbU] = 0U;
            __Vtemp29[0xcU] = 0U;
            __Vtemp29[0xdU] = 0U;
            __Vtemp29[0xeU] = 0U;
            __Vtemp29[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp30, __Vtemp29, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((1U & __Vtemp30[8U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_256 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp31[0U] = 1U;
            __Vtemp31[1U] = 0U;
            __Vtemp31[2U] = 0U;
            __Vtemp31[3U] = 0U;
            __Vtemp31[4U] = 0U;
            __Vtemp31[5U] = 0U;
            __Vtemp31[6U] = 0U;
            __Vtemp31[7U] = 0U;
            __Vtemp31[8U] = 0U;
            __Vtemp31[9U] = 0U;
            __Vtemp31[0xaU] = 0U;
            __Vtemp31[0xbU] = 0U;
            __Vtemp31[0xcU] = 0U;
            __Vtemp31[0xdU] = 0U;
            __Vtemp31[0xeU] = 0U;
            __Vtemp31[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp32, __Vtemp31, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp32[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_255 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp33[0U] = 1U;
            __Vtemp33[1U] = 0U;
            __Vtemp33[2U] = 0U;
            __Vtemp33[3U] = 0U;
            __Vtemp33[4U] = 0U;
            __Vtemp33[5U] = 0U;
            __Vtemp33[6U] = 0U;
            __Vtemp33[7U] = 0U;
            __Vtemp33[8U] = 0U;
            __Vtemp33[9U] = 0U;
            __Vtemp33[0xaU] = 0U;
            __Vtemp33[0xbU] = 0U;
            __Vtemp33[0xcU] = 0U;
            __Vtemp33[0xdU] = 0U;
            __Vtemp33[0xeU] = 0U;
            __Vtemp33[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp34, __Vtemp33, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp34[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_254 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp35[0U] = 1U;
            __Vtemp35[1U] = 0U;
            __Vtemp35[2U] = 0U;
            __Vtemp35[3U] = 0U;
            __Vtemp35[4U] = 0U;
            __Vtemp35[5U] = 0U;
            __Vtemp35[6U] = 0U;
            __Vtemp35[7U] = 0U;
            __Vtemp35[8U] = 0U;
            __Vtemp35[9U] = 0U;
            __Vtemp35[0xaU] = 0U;
            __Vtemp35[0xbU] = 0U;
            __Vtemp35[0xcU] = 0U;
            __Vtemp35[0xdU] = 0U;
            __Vtemp35[0xeU] = 0U;
            __Vtemp35[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp36, __Vtemp35, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp36[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_253 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp37[0U] = 1U;
            __Vtemp37[1U] = 0U;
            __Vtemp37[2U] = 0U;
            __Vtemp37[3U] = 0U;
            __Vtemp37[4U] = 0U;
            __Vtemp37[5U] = 0U;
            __Vtemp37[6U] = 0U;
            __Vtemp37[7U] = 0U;
            __Vtemp37[8U] = 0U;
            __Vtemp37[9U] = 0U;
            __Vtemp37[0xaU] = 0U;
            __Vtemp37[0xbU] = 0U;
            __Vtemp37[0xcU] = 0U;
            __Vtemp37[0xdU] = 0U;
            __Vtemp37[0xeU] = 0U;
            __Vtemp37[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp38, __Vtemp37, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp38[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_252 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp39[0U] = 1U;
            __Vtemp39[1U] = 0U;
            __Vtemp39[2U] = 0U;
            __Vtemp39[3U] = 0U;
            __Vtemp39[4U] = 0U;
            __Vtemp39[5U] = 0U;
            __Vtemp39[6U] = 0U;
            __Vtemp39[7U] = 0U;
            __Vtemp39[8U] = 0U;
            __Vtemp39[9U] = 0U;
            __Vtemp39[0xaU] = 0U;
            __Vtemp39[0xbU] = 0U;
            __Vtemp39[0xcU] = 0U;
            __Vtemp39[0xdU] = 0U;
            __Vtemp39[0xeU] = 0U;
            __Vtemp39[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp40, __Vtemp39, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp40[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_251 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp41[0U] = 1U;
            __Vtemp41[1U] = 0U;
            __Vtemp41[2U] = 0U;
            __Vtemp41[3U] = 0U;
            __Vtemp41[4U] = 0U;
            __Vtemp41[5U] = 0U;
            __Vtemp41[6U] = 0U;
            __Vtemp41[7U] = 0U;
            __Vtemp41[8U] = 0U;
            __Vtemp41[9U] = 0U;
            __Vtemp41[0xaU] = 0U;
            __Vtemp41[0xbU] = 0U;
            __Vtemp41[0xcU] = 0U;
            __Vtemp41[0xdU] = 0U;
            __Vtemp41[0xeU] = 0U;
            __Vtemp41[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp42, __Vtemp41, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp42[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_250 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp43[0U] = 1U;
            __Vtemp43[1U] = 0U;
            __Vtemp43[2U] = 0U;
            __Vtemp43[3U] = 0U;
            __Vtemp43[4U] = 0U;
            __Vtemp43[5U] = 0U;
            __Vtemp43[6U] = 0U;
            __Vtemp43[7U] = 0U;
            __Vtemp43[8U] = 0U;
            __Vtemp43[9U] = 0U;
            __Vtemp43[0xaU] = 0U;
            __Vtemp43[0xbU] = 0U;
            __Vtemp43[0xcU] = 0U;
            __Vtemp43[0xdU] = 0U;
            __Vtemp43[0xeU] = 0U;
            __Vtemp43[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp44, __Vtemp43, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp44[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_249 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp45[0U] = 1U;
            __Vtemp45[1U] = 0U;
            __Vtemp45[2U] = 0U;
            __Vtemp45[3U] = 0U;
            __Vtemp45[4U] = 0U;
            __Vtemp45[5U] = 0U;
            __Vtemp45[6U] = 0U;
            __Vtemp45[7U] = 0U;
            __Vtemp45[8U] = 0U;
            __Vtemp45[9U] = 0U;
            __Vtemp45[0xaU] = 0U;
            __Vtemp45[0xbU] = 0U;
            __Vtemp45[0xcU] = 0U;
            __Vtemp45[0xdU] = 0U;
            __Vtemp45[0xeU] = 0U;
            __Vtemp45[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp46, __Vtemp45, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp46[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_248 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp47[0U] = 1U;
            __Vtemp47[1U] = 0U;
            __Vtemp47[2U] = 0U;
            __Vtemp47[3U] = 0U;
            __Vtemp47[4U] = 0U;
            __Vtemp47[5U] = 0U;
            __Vtemp47[6U] = 0U;
            __Vtemp47[7U] = 0U;
            __Vtemp47[8U] = 0U;
            __Vtemp47[9U] = 0U;
            __Vtemp47[0xaU] = 0U;
            __Vtemp47[0xbU] = 0U;
            __Vtemp47[0xcU] = 0U;
            __Vtemp47[0xdU] = 0U;
            __Vtemp47[0xeU] = 0U;
            __Vtemp47[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp48, __Vtemp47, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp48[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_247 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp49[0U] = 1U;
            __Vtemp49[1U] = 0U;
            __Vtemp49[2U] = 0U;
            __Vtemp49[3U] = 0U;
            __Vtemp49[4U] = 0U;
            __Vtemp49[5U] = 0U;
            __Vtemp49[6U] = 0U;
            __Vtemp49[7U] = 0U;
            __Vtemp49[8U] = 0U;
            __Vtemp49[9U] = 0U;
            __Vtemp49[0xaU] = 0U;
            __Vtemp49[0xbU] = 0U;
            __Vtemp49[0xcU] = 0U;
            __Vtemp49[0xdU] = 0U;
            __Vtemp49[0xeU] = 0U;
            __Vtemp49[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp50, __Vtemp49, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp50[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_246 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp51[0U] = 1U;
            __Vtemp51[1U] = 0U;
            __Vtemp51[2U] = 0U;
            __Vtemp51[3U] = 0U;
            __Vtemp51[4U] = 0U;
            __Vtemp51[5U] = 0U;
            __Vtemp51[6U] = 0U;
            __Vtemp51[7U] = 0U;
            __Vtemp51[8U] = 0U;
            __Vtemp51[9U] = 0U;
            __Vtemp51[0xaU] = 0U;
            __Vtemp51[0xbU] = 0U;
            __Vtemp51[0xcU] = 0U;
            __Vtemp51[0xdU] = 0U;
            __Vtemp51[0xeU] = 0U;
            __Vtemp51[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp52, __Vtemp51, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp52[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_245 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
}
