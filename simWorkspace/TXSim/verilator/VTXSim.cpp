// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTXSim.h for the primary calling header

#include "VTXSim.h"
#include "VTXSim__Syms.h"

//==========

void VTXSim::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTXSim::eval\n"); );
    VTXSim__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/TXSim.v", 22, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VTXSim::_eval_initial_loop(VTXSim__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/TXSim.v", 22, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VTXSim::_sequent__TOP__4(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_sequent__TOP__4\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TXSim__DOT__stream_package_gen__DOT__split_core__DOT__data_buf 
        = vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__data_buf;
    vlTOPp->__Vdly__TXSim__DOT__stream_package_gen__DOT__strb_buf 
        = vlTOPp->TXSim__DOT__stream_package_gen__DOT__strb_buf;
    vlTOPp->__Vdlyvset__TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TXSim__DOT__streamFifo_12__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TXSim__DOT__streamFifo_13__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram__v0 = 0U;
    vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_last 
        = vlTOPp->TXSim__DOT__mod_rtl__DOT__flowDeMux_1_outputs_2_payload_last;
    vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_last 
        = vlTOPp->TXSim__DOT__mod_rtl__DOT__flowDeMux_1_outputs_1_payload_last;
    vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_last 
        = vlTOPp->TXSim__DOT__mod_rtl__DOT__flowDeMux_1_outputs_0_payload_last;
    if (vlTOPp->axil4Ctrl_arready) {
        vlTOPp->TXSim__DOT__axil4Ctrl_ar_rData_prot 
            = vlTOPp->axil4Ctrl_arprot;
    }
    if (vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire) {
        vlTOPp->__Vdly__TXSim__DOT__stream_package_gen__DOT__split_core__DOT__data_buf 
            = vlTOPp->raw_data_tdata;
    } else {
        if (vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core_split_data_fire) {
            vlTOPp->__Vdly__TXSim__DOT__stream_package_gen__DOT__split_core__DOT__data_buf 
                = (vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__data_buf 
                   >> 8U);
        }
    }
    vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
        = vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram
        [vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext];
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_logic_ram_port0 
        = ((0x85U >= (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_valueNext))
            ? vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ram
           [vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_valueNext]
            : vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT____Vxrand1);
    if (vlTOPp->TXSim__DOT___zz_writeJoinEvent_translated_ready) {
        vlTOPp->TXSim__DOT___zz_axil4Ctrl_bresp = 0U;
    }
    if (vlTOPp->axil4Ctrl_arready) {
        vlTOPp->TXSim__DOT__axil4Ctrl_ar_rData_addr 
            = vlTOPp->axil4Ctrl_araddr;
    }
    vlTOPp->TXSim__DOT__clkCrossing_6__DOT__area_clkO_buf1 
        = vlTOPp->TXSim__DOT__clkCrossing_6__DOT__area_clkO_buf0;
    if (vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire) {
        vlTOPp->__Vdly__TXSim__DOT__stream_package_gen__DOT__strb_buf 
            = vlTOPp->raw_data_tstrb;
    } else {
        if (vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core_split_data_fire) {
            vlTOPp->__Vdly__TXSim__DOT__stream_package_gen__DOT__strb_buf 
                = (0xfU & ((IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT__strb_buf) 
                           >> 1U));
        }
    }
    vlTOPp->TXSim__DOT__clkCrossing_7__DOT__area_clkO_buf1 
        = vlTOPp->TXSim__DOT__clkCrossing_7__DOT__area_clkO_buf0;
    if (vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_1) {
        vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT____Vlvbound2 
            = vlTOPp->TXSim__DOT__streamFifo_12__DOT___zz_logic_ram_port0;
        if ((0x85U >= (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value))) {
            vlTOPp->__Vdlyvval__TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ram__v0 
                = vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT____Vlvbound2;
            vlTOPp->__Vdlyvset__TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ram__v0 = 1U;
            vlTOPp->__Vdlyvdim0__TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ram__v0 
                = vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value;
        }
    }
    if (vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_1) {
        vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT____Vlvbound2 
            = ((0x1feU & (vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__data_buf 
                          << 1U)) | (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_payload_last));
        if ((0x3e7U >= (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value))) {
            vlTOPp->__Vdlyvval__TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ram__v0 
                = vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT____Vlvbound2;
            vlTOPp->__Vdlyvset__TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ram__v0 = 1U;
            vlTOPp->__Vdlyvdim0__TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ram__v0 
                = vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value;
        }
    }
    if (vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_1) {
        vlTOPp->__Vdlyvval__TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = ((((IData)(vlTOPp->TXSim__DOT__phy_tx_front_raw_data_valid)
                  ? (0xfffU & (vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                               >> 0xdU)) : 0U) << 0xcU) 
               | ((IData)(vlTOPp->TXSim__DOT__phy_tx_front_raw_data_valid)
                   ? (0xfffU & (vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                                >> 1U)) : 0U));
        vlTOPp->__Vdlyvset__TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->TXSim__DOT__streamFifo_12__DOT___zz_1) {
        vlTOPp->__Vdlyvval__TXSim__DOT__streamFifo_12__DOT__logic_ram__v0 
            = (((0x10000U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                             << 1U)) | ((0x8000U & 
                                         ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                          << 8U)) | 
                                        ((0x4000U & (IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment)) 
                                         | ((0x2000U 
                                             & ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                << 7U)) 
                                            | (0x1000U 
                                               & ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                  >> 1U)))))) 
               | ((0x800U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                             << 6U)) | ((0x400U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                   >> 2U)) 
                                        | ((0x200U 
                                            & ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                               << 5U)) 
                                           | ((0x100U 
                                               & ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                  >> 3U)) 
                                              | ((0x80U 
                                                  & ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                     << 4U)) 
                                                 | ((0x40U 
                                                     & ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                        >> 4U)) 
                                                    | ((0x20U 
                                                        & ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                           << 3U)) 
                                                       | ((0x10U 
                                                           & ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                              >> 5U)) 
                                                          | ((8U 
                                                              & ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                                 << 2U)) 
                                                             | ((4U 
                                                                 & ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                                    >> 6U)) 
                                                                | ((2U 
                                                                    & ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                                       << 1U)) 
                                                                   | (IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_last)))))))))))));
        vlTOPp->__Vdlyvset__TXSim__DOT__streamFifo_12__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TXSim__DOT__streamFifo_12__DOT__logic_ram__v0 
            = vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT___zz_1) {
        vlTOPp->__Vdlyvval__TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram__v0 
            = (((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_data_q) 
                << 0xdU) | (((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_data_i) 
                             << 1U) | (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_last)));
        vlTOPp->__Vdlyvset__TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_1) {
        vlTOPp->__Vdlyvval__TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = (((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_payload_fragment) 
                << 1U) | (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_payload_last));
        vlTOPp->__Vdlyvset__TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_1) {
        vlTOPp->__Vdlyvval__TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = (((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_payload_fragment) 
                << 1U) | (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_payload_last));
        vlTOPp->__Vdlyvset__TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->TXSim__DOT__streamFifo_13__DOT___zz_1) {
        vlTOPp->__Vdlyvval__TXSim__DOT__streamFifo_13__DOT__logic_ram__v0 
            = vlTOPp->TXSim__DOT__streamFifo_13__DOT___zz_logic_ram_port_1;
        vlTOPp->__Vdlyvset__TXSim__DOT__streamFifo_13__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TXSim__DOT__streamFifo_13__DOT__logic_ram__v0 
            = vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_1) {
        vlTOPp->__Vdlyvval__TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = ((0x1feU & (((IData)(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__emitCrc)
                            ? ((0U == (IData)(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__counter))
                                ? vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1_result
                                : ((1U == (IData)(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__counter))
                                    ? (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1_result 
                                       >> 8U) : ((2U 
                                                  == (IData)(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__counter))
                                                  ? 
                                                 (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1_result 
                                                  >> 0x10U)
                                                  : 
                                                 (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1_result 
                                                  >> 0x18U))))
                            : ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                               >> 1U)) << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_payload_last));
        vlTOPp->__Vdlyvset__TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_1) {
        vlTOPp->__Vdlyvval__TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = ((0x1ffe000U & ((VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_32)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_131__DOT__previous_adder_data) 
                              << 6U)) | ((0x1ffeU & 
                                          ((VL_MULS_III(19,19,19, 
                                                        (0x7ffffU 
                                                         & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                        (0x7ffffU 
                                                         & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_32)))) 
                                            + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_98__DOT__previous_adder_data) 
                                           >> 6U)) 
                                         | (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_25)));
        vlTOPp->__Vdlyvset__TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
    }
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
        = vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram
        [vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext];
    if (vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT___zz_1) {
        vlTOPp->__Vdlyvval__TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = (((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data) 
                << 1U) | (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__raw_data_payload_last_regNext));
        vlTOPp->__Vdlyvset__TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_1) {
        vlTOPp->__Vdlyvval__TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = ((0x1fffeU & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_data) 
                             << 1U) ^ (0xfffffffeU 
                                       & vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_logic_ram_port0))) 
               | (1U & vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_logic_ram_port0));
        vlTOPp->__Vdlyvset__TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram__v0 
            = vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value;
    }
}

VL_INLINE_OPT void VTXSim::_sequent__TOP__5(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_sequent__TOP__5\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1_init_state_valid) {
        vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state = 0x7fU;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1_scram_data_ready) {
            vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state 
                = ((0x7eU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14) 
                             << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_15));
        }
    }
    vlTOPp->TXSim__DOT__stream_package_gen__DOT__strb_buf 
        = vlTOPp->__Vdly__TXSim__DOT__stream_package_gen__DOT__strb_buf;
    if (vlTOPp->__Vdlyvset__TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ram__v0) {
        vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ram__v0;
    }
    vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__data_buf 
        = vlTOPp->__Vdly__TXSim__DOT__stream_package_gen__DOT__split_core__DOT__data_buf;
    if (vlTOPp->__Vdlyvset__TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram__v0) {
        vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[vlTOPp->__Vdlyvdim0__TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram__v0) {
        vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[vlTOPp->__Vdlyvdim0__TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram__v0;
    }
    vlTOPp->result_data_payload_cha_i = (0xfffU & vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_logic_ram_port0);
    vlTOPp->result_data_payload_cha_q = (0xfffU & (vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                                                   >> 0xcU));
    vlTOPp->axil4Ctrl_bresp = vlTOPp->TXSim__DOT___zz_axil4Ctrl_bresp;
    vlTOPp->TXSim__DOT__clkCrossing_6__DOT__area_clkO_buf0 
        = vlTOPp->TXSim__DOT__clkCrossing_6__DOT__area_clkI_reg;
    vlTOPp->TXSim__DOT__clkCrossing_7__DOT__area_clkO_buf0 
        = vlTOPp->TXSim__DOT__clkCrossing_7__DOT__area_clkI_reg;
    vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT___zz_logic_ram_port0 
        = vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram
        [vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_valueNext];
    vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment 
        = (0xffffU & (vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                      >> 1U));
    if ((0U == (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_states))) {
        vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_data_q 
            = vlTOPp->TXSim__DOT__stf_preamble_adder__DOT___zz_Q_mem_port0;
    } else {
        if ((1U == (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_states))) {
            vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_data_q 
                = vlTOPp->TXSim__DOT__stf_preamble_adder__DOT___zz_Q_mem_port0;
        } else {
            if (vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__raw_data_fire) {
                vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_data_q 
                    = (0xfffU & (vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                                 >> 0xdU));
            }
        }
    }
    if ((0U == (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_states))) {
        vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_data_i 
            = vlTOPp->TXSim__DOT__stf_preamble_adder__DOT___zz_I_mem_port0;
    } else {
        if ((1U == (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_states))) {
            vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_data_i 
                = vlTOPp->TXSim__DOT__stf_preamble_adder__DOT___zz_I_mem_port0;
        } else {
            if (vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__raw_data_fire) {
                vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_data_i 
                    = (0xfffU & (vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                                 >> 1U));
            }
        }
    }
    vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_32 = 3U;
    if (vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid) {
        vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data 
            = (((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0) 
                << 8U) | (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1));
    }
    if ((1U & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1_init_state_valid)))) {
        if (vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1_scram_data_ready) {
            vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_data 
                = (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_15) 
                    << 0xfU) | (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_14) 
                                 << 0xeU) | (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_13) 
                                              << 0xdU) 
                                             | (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_12) 
                                                 << 0xcU) 
                                                | (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_11) 
                                                    << 0xbU) 
                                                   | (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_10) 
                                                       << 0xaU) 
                                                      | (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_9) 
                                                          << 9U) 
                                                         | (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_8) 
                                                             << 8U) 
                                                            | (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_7) 
                                                                << 7U) 
                                                               | (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_6) 
                                                                   << 6U) 
                                                                  | (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_5) 
                                                                      << 5U) 
                                                                     | (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_4) 
                                                                         << 4U) 
                                                                        | (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_3) 
                                                                            << 3U) 
                                                                           | (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_2) 
                                                                               << 2U) 
                                                                              | (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_0))))))))))))))));
        }
    }
    if (vlTOPp->__Vdlyvset__TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram__v0) {
        vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[vlTOPp->__Vdlyvdim0__TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram__v0;
    }
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_0 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__clkCrossing_6__DOT__area_clkI_reg 
        = vlTOPp->TXSim__DOT__pkg_gen_bridge_slices_limit_driver;
    vlTOPp->TXSim__DOT__clkCrossing_7__DOT__area_clkI_reg 
        = vlTOPp->TXSim__DOT__stream_package_gen__DOT__pkg_slices_cnt;
    vlTOPp->TXSim__DOT__stf_preamble_adder__DOT___zz_Q_mem_port0 
        = vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__Q_mem
        [(0x3fU & (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__cnt))];
    vlTOPp->TXSim__DOT__stf_preamble_adder__DOT___zz_I_mem_port0 
        = vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__I_mem
        [(0x3fU & (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__cnt))];
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0 
        = (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state) 
            << 1U) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_0));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_1 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0) 
                            >> 3U)));
    if ((0U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
        if (vlTOPp->TXSim__DOT__writeJoinEvent_fire) {
            vlTOPp->TXSim__DOT__pkg_gen_bridge_slices_limit_driver 
                = (0x7fU & vlTOPp->axil4Ctrl_wdata);
        }
    }
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_1));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_2 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_2));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_3 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_3));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_4 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_4));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_5 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_5));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_6 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_6));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_7 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_7));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_8 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7) 
                            >> 3U)));
}

VL_INLINE_OPT void VTXSim::_sequent__TOP__6(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_sequent__TOP__6\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_8));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_9 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_9));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_10 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_10));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_11 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_11));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_12 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_12));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_13 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_13));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_14 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13) 
                            >> 3U)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14 
        = ((0xfeU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13) 
                     << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_14));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_15 
        = (1U & (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14) 
                  >> 6U) ^ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14) 
                            >> 3U)));
}

VL_INLINE_OPT void VTXSim::_sequent__TOP__10(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_sequent__TOP__10\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TXSim__DOT__stream_package_gen__DOT__split_core__DOT__cnt 
        = vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__cnt;
    vlTOPp->__Vdly__TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status 
        = vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status;
    vlTOPp->__Vdly__TXSim__DOT__stf_preamble_adder__DOT__preamble_states 
        = vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_states;
    vlTOPp->__Vdly__TXSim__DOT__stf_preamble_adder__DOT__repeatCnt 
        = vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__repeatCnt;
    vlTOPp->__Vdly__TXSim__DOT__stf_preamble_adder__DOT__cnt 
        = vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__cnt;
    vlTOPp->__Vdly__TXSim__DOT__phy_tx_oversampling__DOT__cnt 
        = vlTOPp->TXSim__DOT__phy_tx_oversampling__DOT__cnt;
    vlTOPp->__Vdly__TXSim__DOT__phy_header_extender__DOT__counter 
        = vlTOPp->TXSim__DOT__phy_header_extender__DOT__counter;
    vlTOPp->__Vdly__TXSim__DOT__mod_data_div__DOT__base_buffer 
        = vlTOPp->TXSim__DOT__mod_data_div__DOT__base_buffer;
    vlTOPp->__Vdly__TXSim__DOT__phy_tx_padder__DOT__counter 
        = vlTOPp->TXSim__DOT__phy_tx_padder__DOT__counter;
    vlTOPp->__Vdly__TXSim__DOT__mod_data_div__DOT__base_cnt 
        = vlTOPp->TXSim__DOT__mod_data_div__DOT__base_cnt;
    vlTOPp->__Vdly__TXSim__DOT__phy_header_extender__DOT__header_status 
        = vlTOPp->TXSim__DOT__phy_header_extender__DOT__header_status;
    vlTOPp->__Vdly__TXSim__DOT__phy_tx_crc__DOT__counter 
        = vlTOPp->TXSim__DOT__phy_tx_crc__DOT__counter;
    vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_last 
        = (1U & ((~ (IData)(vlTOPp->reset)) & vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0));
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__stream_package_gen__DOT__raw_data_last = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire) {
            vlTOPp->TXSim__DOT__stream_package_gen__DOT__raw_data_last 
                = vlTOPp->raw_data_tlast;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__axil4Ctrl_ar_rValid = 0U;
    } else {
        if (vlTOPp->axil4Ctrl_arready) {
            vlTOPp->TXSim__DOT__axil4Ctrl_ar_rValid 
                = vlTOPp->axil4Ctrl_arvalid;
        }
    }
    vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_last 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__flowDeMux_1_outputs_2_payload_last));
    vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_last 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__flowDeMux_1_outputs_1_payload_last));
    vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_last 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__flowDeMux_1_outputs_0_payload_last));
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__stream_package_gen__DOT__pkg_slices_cnt = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire)))) {
            if (vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core_split_data_fire) {
                vlTOPp->TXSim__DOT__stream_package_gen__DOT__pkg_slices_cnt 
                    = ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_payload_last)
                        ? 0U : (IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT___zz_pkg_slices_cnt));
            }
        }
    }
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TXSim__DOT__stream_package_gen__DOT__split_core__DOT__cnt = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire) {
            vlTOPp->__Vdly__TXSim__DOT__stream_package_gen__DOT__split_core__DOT__cnt = 4U;
        } else {
            if (vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core_split_data_fire) {
                vlTOPp->__Vdly__TXSim__DOT__stream_package_gen__DOT__split_core__DOT__cnt 
                    = (7U & ((IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__cnt) 
                             - (IData)(1U)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT___zz_axil4Ctrl_bvalid_2 = 0U;
    } else {
        if (vlTOPp->TXSim__DOT___zz_writeJoinEvent_translated_ready) {
            vlTOPp->TXSim__DOT___zz_axil4Ctrl_bvalid_2 
                = vlTOPp->TXSim__DOT__writeJoinEvent_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_valid = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1_init_state_valid) {
            vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_valid = 0U;
        } else {
            if (vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1_scram_data_ready) {
                vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_valid = 1U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_oversampling__DOT__raw_last = 0U;
    } else {
        if (((IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling_raw_data_valid) 
             & (IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling_raw_data_ready))) {
            vlTOPp->TXSim__DOT__phy_tx_oversampling__DOT__raw_last 
                = (1U & vlTOPp->TXSim__DOT__streamFifo_13__DOT___zz_logic_ram_port0);
        }
    }
    vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment 
        = ((IData)(vlTOPp->reset) ? 0U : ((2U != (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                                           ? 0U : (0xfU 
                                                   & (IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_buffer))));
    vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((0U 
                                                != (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                                                ? 0U
                                                : (0xffU 
                                                   & (IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_buffer)))));
    vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment 
        = ((IData)(vlTOPp->reset) ? 0U : ((1U != (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                                           ? 0U : (3U 
                                                   & (IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_buffer))));
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__mod_data_div__DOT__base_last = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__clkCrossing_8__DOT__area_clkO_buf1) {
            if (vlTOPp->TXSim__DOT__mod_data_div__DOT__base_data_fire) {
                vlTOPp->TXSim__DOT__mod_data_div__DOT__base_last 
                    = (1U & vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_logic_ram_port0);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
            if (vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_valid) {
                vlTOPp->__Vdly__TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
                if ((((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_valid) 
                      & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_ready)) 
                     & vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_logic_ram_port0)) {
                    vlTOPp->__Vdly__TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status = 2U;
                }
            } else {
                vlTOPp->__Vdly__TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status = 0U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TXSim__DOT__stf_preamble_adder__DOT__cnt = 0U;
        vlTOPp->__Vdly__TXSim__DOT__stf_preamble_adder__DOT__repeatCnt = 0U;
        vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__raw_ready = 0U;
        vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_valid = 0U;
        vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_last = 0U;
        vlTOPp->__Vdly__TXSim__DOT__stf_preamble_adder__DOT__preamble_states = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_states))) {
            vlTOPp->__Vdly__TXSim__DOT__stf_preamble_adder__DOT__cnt = 0U;
            vlTOPp->__Vdly__TXSim__DOT__stf_preamble_adder__DOT__repeatCnt = 0U;
            vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__raw_ready = 0U;
            vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_valid = 0U;
            vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_last = 0U;
            if (((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_raw_data_valid) 
                 & (~ (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_full)))) {
                vlTOPp->__Vdly__TXSim__DOT__stf_preamble_adder__DOT__cnt 
                    = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__cnt)));
                vlTOPp->__Vdly__TXSim__DOT__stf_preamble_adder__DOT__preamble_states = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_states))) {
                if ((1U & (~ (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_full)))) {
                    vlTOPp->__Vdly__TXSim__DOT__stf_preamble_adder__DOT__cnt 
                        = ((0x40U == (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__cnt))
                            ? 0U : (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT___zz_cnt));
                }
                vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_valid = 1U;
                if (vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__when_PreambleExtender_l74) {
                    vlTOPp->__Vdly__TXSim__DOT__stf_preamble_adder__DOT__repeatCnt 
                        = (7U & ((IData)(1U) + (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__repeatCnt)));
                    if (vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__when_PreambleExtender_l76) {
                        vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__raw_ready = 1U;
                        vlTOPp->__Vdly__TXSim__DOT__stf_preamble_adder__DOT__preamble_states = 2U;
                    }
                }
            } else {
                vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_valid 
                    = vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__raw_data_fire;
                if ((((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_raw_data_valid) 
                      & (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_raw_data_ready)) 
                     & vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_logic_ram_port0)) {
                    vlTOPp->__Vdly__TXSim__DOT__stf_preamble_adder__DOT__preamble_states = 0U;
                    vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_last = 1U;
                } else {
                    vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_last = 0U;
                }
            }
        }
    }
}

VL_INLINE_OPT void VTXSim::_sequent__TOP__11(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_sequent__TOP__11\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TXSim__DOT__phy_tx_oversampling__DOT__cnt = 0U;
    } else {
        if (((IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling_result_data_valid) 
             & (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_raw_data_ready))) {
            vlTOPp->__Vdly__TXSim__DOT__phy_tx_oversampling__DOT__cnt 
                = ((7U == (IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling__DOT__cnt))
                    ? 0U : (IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling__DOT___zz_cnt));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_padder__DOT__raw_data_payload_first = 1U;
    } else {
        if (((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_raw_data_valid) 
             & (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_raw_data_ready))) {
            vlTOPp->TXSim__DOT__phy_tx_padder__DOT__raw_data_payload_first 
                = (1U & (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_logic_ram_port0));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TXSim__DOT__phy_header_extender__DOT__counter = 0U;
    } else {
        if ((((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_valid) 
              & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full))) 
             & (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_payload_last))) {
            vlTOPp->__Vdly__TXSim__DOT__phy_header_extender__DOT__counter = 0U;
        } else {
            if (((IData)(vlTOPp->TXSim__DOT__phy_header_extender_raw_data_valid) 
                 & (IData)(vlTOPp->TXSim__DOT__phy_header_extender_raw_data_ready))) {
                vlTOPp->__Vdly__TXSim__DOT__phy_header_extender__DOT__counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__counter)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TXSim__DOT__phy_tx_padder__DOT__counter = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_padder__DOT__when_PhyTx_l71) {
            vlTOPp->__Vdly__TXSim__DOT__phy_tx_padder__DOT__counter 
                = (7U & ((IData)(1U) + (IData)(vlTOPp->TXSim__DOT__phy_tx_padder__DOT__counter)));
        }
        if ((((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_valid) 
              & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full))) 
             & (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_payload_last))) {
            vlTOPp->__Vdly__TXSim__DOT__phy_tx_padder__DOT__counter = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popping))) {
            vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_risingOccupancy 
                = vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushing;
        }
    }
    vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability_io_pop_valid) 
                                         & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                                               >> 3U))));
    vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((2U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1)) 
                                         & (IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__unit_valid)));
    vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((1U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1)) 
                                         & (IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__unit_valid)));
    vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((0U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1)) 
                                         & (IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__unit_valid)));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TXSim__DOT__phy_header_extender__DOT__header_status = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__header_status))) {
            if (vlTOPp->TXSim__DOT__phy_header_extender__DOT__emitHeader) {
                vlTOPp->__Vdly__TXSim__DOT__phy_header_extender__DOT__header_status = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__header_status))) {
                if ((1U & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full)))) {
                    vlTOPp->__Vdly__TXSim__DOT__phy_header_extender__DOT__header_status = 2U;
                }
            } else {
                if ((((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_valid) 
                      & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full))) 
                     & (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_payload_last))) {
                    vlTOPp->__Vdly__TXSim__DOT__phy_header_extender__DOT__header_status = 0U;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popping))) {
            vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushing;
        }
    }
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_valueNext));
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value)));
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state = 0xffffffffU;
    } else {
        if ((((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_valid) 
              & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full))) 
             & (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_payload_last))) {
            vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state = 0xffffffffU;
        } else {
            if (((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_raw_data_valid) 
                 & (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_raw_data_ready))) {
                vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                    = vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8;
            }
        }
    }
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_valueNext));
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushing) 
             != (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popping))) {
            vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_risingOccupancy 
                = vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushing) 
             != (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popping))) {
            vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_risingOccupancy 
                = vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushing;
        }
    }
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value)));
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushing) 
             != (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popping))) {
            vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_risingOccupancy 
                = vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__last_padding = 0U;
    } else {
        if ((((IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling_result_data_valid) 
              & (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_raw_data_ready)) 
             & (IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling_result_data_payload_last))) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__last_padding = 1U;
        } else {
            if ((((IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) 
                  & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full))) 
                 & (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_25))) {
                vlTOPp->TXSim__DOT__phy_tx_filter__DOT__last_padding = 0U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushing) 
             != (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popping))) {
            vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_risingOccupancy 
                = vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushing) 
             != (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popping))) {
            vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_risingOccupancy 
                = vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushing) 
             != (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popping))) {
            vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_risingOccupancy 
                = vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushing) 
             != (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popping))) {
            vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_risingOccupancy 
                = vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_131__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_131__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_31)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_130__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_98__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_98__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_31)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_97__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushing) 
             != (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popping))) {
            vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_risingOccupancy 
                = vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushing) 
             != (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popping))) {
            vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_risingOccupancy 
                = vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TXSim__DOT__phy_tx_crc__DOT__counter = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__emitCrc) {
            if ((1U & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full)))) {
                vlTOPp->__Vdly__TXSim__DOT__phy_tx_crc__DOT__counter 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__counter)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushing) 
             != (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popping))) {
            vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_risingOccupancy 
                = vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushing;
        }
    }
    vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext));
    vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_value)));
    vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext));
    vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value)));
    vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext));
    vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value)));
    vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext));
}

VL_INLINE_OPT void VTXSim::_sequent__TOP__12(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_sequent__TOP__12\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext));
    vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value)));
    vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_valueNext));
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value)));
    vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_valueNext));
    vlTOPp->TXSim__DOT__streamFifo_12__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_value)));
    vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_value)));
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext));
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__r_enc_buf = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__r_enc_buf 
                = (0x7fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                            >> 1U));
        }
    }
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext));
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value)));
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value)));
    vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_valueNext));
    vlTOPp->TXSim__DOT__streamFifo_13__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_value)));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__raw_data_payload_last_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__emitEncoding));
    vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__cnt 
        = vlTOPp->__Vdly__TXSim__DOT__stream_package_gen__DOT__split_core__DOT__cnt;
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status 
        = vlTOPp->__Vdly__TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status;
    vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_states 
        = vlTOPp->__Vdly__TXSim__DOT__stf_preamble_adder__DOT__preamble_states;
    vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__repeatCnt 
        = vlTOPp->__Vdly__TXSim__DOT__stf_preamble_adder__DOT__repeatCnt;
    vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__cnt 
        = vlTOPp->__Vdly__TXSim__DOT__stf_preamble_adder__DOT__cnt;
    vlTOPp->TXSim__DOT__phy_tx_oversampling__DOT__cnt 
        = vlTOPp->__Vdly__TXSim__DOT__phy_tx_oversampling__DOT__cnt;
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__counter 
        = vlTOPp->__Vdly__TXSim__DOT__phy_header_extender__DOT__counter;
    vlTOPp->TXSim__DOT__phy_tx_padder__DOT__counter 
        = vlTOPp->__Vdly__TXSim__DOT__phy_tx_padder__DOT__counter;
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__header_status 
        = vlTOPp->__Vdly__TXSim__DOT__phy_header_extender__DOT__header_status;
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->TXSim__DOT__axil4Ctrl_ar_rValid;
    vlTOPp->TXSim__DOT__stream_package_gen__DOT___zz_pkg_slices_cnt 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT__pkg_slices_cnt)));
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_payload_last 
        = (((IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT__pkg_slices_cnt) 
            == (0x7fU & ((IData)(vlTOPp->TXSim__DOT__clkCrossing_6__DOT__area_clkO_buf1) 
                         - (IData)(1U)))) | ((IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT__raw_data_last) 
                                             & (1U 
                                                == (IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT__strb_buf))));
    vlTOPp->raw_data_tready = (0U == (IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__cnt));
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->TXSim__DOT___zz_axil4Ctrl_bvalid_2;
    vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
        = ((0U == (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment))
            ? 0xa59a59U : ((1U == (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment))
                            ? 0xa595a7U : ((2U == (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment))
                                            ? 0x5a7a59U
                                            : 0x5a75a7U)));
    vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__when_PreambleExtender_l76 
        = (5U == (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__repeatCnt));
    vlTOPp->TXSim__DOT__stf_preamble_adder__DOT___zz_cnt 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__cnt)));
    vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__when_PreambleExtender_l74 
        = (0x40U == (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__cnt));
    vlTOPp->TXSim__DOT__phy_tx_oversampling__DOT___zz_cnt 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling__DOT__cnt)));
    vlTOPp->TXSim__DOT__phy_tx_padder__DOT__fill = 
        ((0U != (IData)(vlTOPp->TXSim__DOT__phy_tx_padder__DOT__counter)) 
         & (IData)(vlTOPp->TXSim__DOT__phy_tx_padder__DOT__raw_data_payload_first));
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__mod_data_div__DOT__unit_valid = 0U;
        vlTOPp->__Vdly__TXSim__DOT__mod_data_div__DOT__base_cnt = 0U;
        vlTOPp->__Vdly__TXSim__DOT__mod_data_div__DOT__base_buffer = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__clkCrossing_8__DOT__area_clkO_buf1) {
            if (vlTOPp->TXSim__DOT__mod_data_div__DOT__base_data_fire) {
                vlTOPp->__Vdly__TXSim__DOT__mod_data_div__DOT__base_cnt 
                    = vlTOPp->TXSim__DOT__mod_data_div__DOT___zz_base_cnt;
                vlTOPp->__Vdly__TXSim__DOT__mod_data_div__DOT__base_buffer 
                    = (0xffffU & (vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                                  >> 1U));
                vlTOPp->TXSim__DOT__mod_data_div__DOT__unit_valid = 1U;
            } else {
                if (vlTOPp->TXSim__DOT__mod_data_div__DOT__when_dataDivDynamic_l52) {
                    vlTOPp->__Vdly__TXSim__DOT__mod_data_div__DOT__base_buffer 
                        = (0xffffU & ((IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_buffer) 
                                      >> (IData)(vlTOPp->TXSim__DOT__clkCrossing_9__DOT__area_clkO_buf1)));
                    vlTOPp->TXSim__DOT__mod_data_div__DOT__unit_valid = 0U;
                } else {
                    if (vlTOPp->TXSim__DOT__mod_data_div__DOT__loaded) {
                        vlTOPp->__Vdly__TXSim__DOT__mod_data_div__DOT__base_cnt 
                            = (0xfU & ((IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_cnt) 
                                       + (IData)(vlTOPp->TXSim__DOT__clkCrossing_9__DOT__area_clkO_buf1)));
                        vlTOPp->__Vdly__TXSim__DOT__mod_data_div__DOT__base_buffer 
                            = (0xffffU & ((IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_buffer) 
                                          >> (IData)(vlTOPp->TXSim__DOT__clkCrossing_9__DOT__area_clkO_buf1)));
                        vlTOPp->TXSim__DOT__mod_data_div__DOT__unit_valid = 1U;
                    }
                }
            }
        } else {
            vlTOPp->__Vdly__TXSim__DOT__mod_data_div__DOT__base_cnt 
                = vlTOPp->TXSim__DOT__clkCrossing_10__DOT__area_clkO_buf1;
            vlTOPp->TXSim__DOT__mod_data_div__DOT__unit_valid = 0U;
        }
    }
}

VL_INLINE_OPT void VTXSim::_sequent__TOP__13(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_sequent__TOP__13\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_payload_fragment = 0U;
    if ((0U != (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__header_status))) {
        vlTOPp->TXSim__DOT__phy_header_extender_result_data_payload_fragment 
            = (0xffffU & ((1U == (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__header_status))
                           ? (0x5500U | (0xffU & ((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__counter) 
                                                  << 1U)))
                           : (vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_logic_ram_port0 
                              >> 1U)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_header_extender__DOT__emitHeader = 0U;
    } else {
        if ((((IData)(vlTOPp->TXSim__DOT__phy_header_extender_raw_data_valid) 
              & (IData)(vlTOPp->TXSim__DOT__phy_header_extender_raw_data_ready)) 
             & vlTOPp->TXSim__DOT__streamFifo_12__DOT___zz_logic_ram_port0)) {
            vlTOPp->TXSim__DOT__phy_header_extender__DOT__emitHeader = 1U;
        }
        if ((((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_valid) 
              & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full))) 
             & (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_payload_last))) {
            vlTOPp->TXSim__DOT__phy_header_extender__DOT__emitHeader = 0U;
        }
    }
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT___zz_result_2 
        = ((0x100000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                             >> 0xbU)) << 0x14U)) | 
           ((0x80000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                             >> 0xcU)) << 0x13U)) | 
            ((0x40000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                              >> 0xdU)) << 0x12U)) 
             | ((0x20000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                 >> 0xeU)) << 0x11U)) 
                | ((0x10000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                    >> 0xfU)) << 0x10U)) 
                   | ((0x8000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                      >> 0x10U)) << 0xfU)) 
                      | ((0x4000U & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                         >> 0x11U)) 
                                     << 0xeU)) | ((0x2000U 
                                                   & ((~ 
                                                       (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                        >> 0x12U)) 
                                                      << 0xdU)) 
                                                  | ((0x1000U 
                                                      & ((~ 
                                                          (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                           >> 0x13U)) 
                                                         << 0xcU)) 
                                                     | ((0x800U 
                                                         & ((~ 
                                                             (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                              >> 0x14U)) 
                                                            << 0xbU)) 
                                                        | ((0x400U 
                                                            & ((~ 
                                                                (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                 >> 0x15U)) 
                                                               << 0xaU)) 
                                                           | ((0x200U 
                                                               & ((~ 
                                                                   (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                    >> 0x16U)) 
                                                                  << 9U)) 
                                                              | ((0x100U 
                                                                  & ((~ 
                                                                      (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                       >> 0x17U)) 
                                                                     << 8U)) 
                                                                 | ((0x80U 
                                                                     & ((~ 
                                                                         (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                          >> 0x18U)) 
                                                                        << 7U)) 
                                                                    | ((0x40U 
                                                                        & ((~ 
                                                                            (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                             >> 0x19U)) 
                                                                           << 6U)) 
                                                                       | ((0x20U 
                                                                           & ((~ 
                                                                               (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1aU)) 
                                                                              << 5U)) 
                                                                          | ((0x10U 
                                                                              & ((~ 
                                                                                (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                             | ((8U 
                                                                                & ((~ 
                                                                                (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1fU)))))))))))))))))))))));
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_valueNext));
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_25 = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_25 
                = vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_24;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_130__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_130__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_30)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_129__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_97__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_97__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_30)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_96__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_crc__DOT__emitCrc = 0U;
    } else {
        if ((((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_raw_data_valid) 
              & (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_raw_data_ready)) 
             & (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0))) {
            vlTOPp->TXSim__DOT__phy_tx_crc__DOT__emitCrc = 1U;
        }
        if ((((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_valid) 
              & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full))) 
             & (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_payload_last))) {
            vlTOPp->TXSim__DOT__phy_tx_crc__DOT__emitCrc = 0U;
        }
        if ((1U & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__when_PhyTx_l39)))) {
            if ((3U == (IData)(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__counter))) {
                if ((1U & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full)))) {
                    vlTOPp->TXSim__DOT__phy_tx_crc__DOT__emitCrc = 0U;
                }
            }
        }
    }
    vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext));
    vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext));
    vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext));
    vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext));
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext));
    vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_valueNext));
    vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_valueNext));
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext));
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext));
    vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_valueNext));
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__emitEncoding = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__when_PhyTx_l95) {
            vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__emitEncoding = 1U;
        }
        if (vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__when_PhyTx_l95_1) {
            vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__emitEncoding = 0U;
        }
    }
    vlTOPp->TXSim__DOT__mod_data_div__DOT__base_buffer 
        = vlTOPp->__Vdly__TXSim__DOT__mod_data_div__DOT__base_buffer;
    vlTOPp->TXSim__DOT__mod_data_div__DOT__base_cnt 
        = vlTOPp->__Vdly__TXSim__DOT__mod_data_div__DOT__base_cnt;
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_payload_last = 0U;
    if ((0U != (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__header_status))) {
        if ((1U != (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__header_status))) {
            vlTOPp->TXSim__DOT__phy_header_extender_result_data_payload_last 
                = (1U & vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_logic_ram_port0);
        }
    }
    vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1_result 
        = ((0x80000000U & ((~ vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state) 
                           << 0x1fU)) | ((0x40000000U 
                                          & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                 >> 1U)) 
                                             << 0x1eU)) 
                                         | ((0x20000000U 
                                             & ((~ 
                                                 (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                  >> 2U)) 
                                                << 0x1dU)) 
                                            | ((0x10000000U 
                                                & ((~ 
                                                    (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                     >> 3U)) 
                                                   << 0x1cU)) 
                                               | ((0x8000000U 
                                                   & ((~ 
                                                       (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                        >> 4U)) 
                                                      << 0x1bU)) 
                                                  | ((0x4000000U 
                                                      & ((~ 
                                                          (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                           >> 5U)) 
                                                         << 0x1aU)) 
                                                     | ((0x2000000U 
                                                         & ((~ 
                                                             (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                              >> 6U)) 
                                                            << 0x19U)) 
                                                        | ((0x1000000U 
                                                            & ((~ 
                                                                (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                 >> 7U)) 
                                                               << 0x18U)) 
                                                           | ((0x800000U 
                                                               & ((~ 
                                                                   (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                    >> 8U)) 
                                                                  << 0x17U)) 
                                                              | ((0x400000U 
                                                                  & ((~ 
                                                                      (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                       >> 9U)) 
                                                                     << 0x16U)) 
                                                                 | ((0x200000U 
                                                                     & ((~ 
                                                                         (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                          >> 0xaU)) 
                                                                        << 0x15U)) 
                                                                    | vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT___zz_result_2)))))))))));
    vlTOPp->TXSim__DOT__phy_tx_crc__DOT__counter = vlTOPp->__Vdly__TXSim__DOT__phy_tx_crc__DOT__counter;
}

VL_INLINE_OPT void VTXSim::_sequent__TOP__14(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_sequent__TOP__14\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__mod_data_div__DOT__loaded = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__clkCrossing_8__DOT__area_clkO_buf1) {
            if (vlTOPp->TXSim__DOT__mod_data_div__DOT__base_data_fire) {
                vlTOPp->TXSim__DOT__mod_data_div__DOT__loaded = 1U;
            } else {
                if (vlTOPp->TXSim__DOT__mod_data_div__DOT__when_dataDivDynamic_l52) {
                    vlTOPp->TXSim__DOT__mod_data_div__DOT__loaded = 0U;
                }
            }
        } else {
            vlTOPp->TXSim__DOT__mod_data_div__DOT__loaded = 0U;
        }
    }
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value));
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value));
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_24 = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_24 
                = vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_23;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_129__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_129__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_29)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_128__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_96__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_96__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_29)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_95__DOT__previous_adder_data));
        }
    }
    vlTOPp->TXSim__DOT__phy_tx_crc__DOT__when_PhyTx_l39 
        = (1U & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__emitCrc)));
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_payload_last = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__emitCrc) {
        if ((3U == (IData)(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__counter))) {
            vlTOPp->TXSim__DOT__phy_tx_crc_result_data_payload_last = 1U;
        }
    }
    vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_value));
    vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value));
    vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_value));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__emitEncoding)
            ? 0U : (0xffU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                             >> 1U)));
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_full 
        = ((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_risingOccupancy));
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_full 
        = ((IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_risingOccupancy));
    vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full 
        = ((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
    vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_full 
        = ((IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_risingOccupancy));
    vlTOPp->TXSim__DOT__pipeline_halt = ((0x3feU & (IData)(vlTOPp->TXSim__DOT__pipeline_halt)) 
                                         | (0x14U > 
                                            ((((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                                               & (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                                              << 5U) 
                                             | (0x1fU 
                                                & ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                   - (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))));
    vlTOPp->TXSim__DOT__pipeline_halt = ((0x3fdU & (IData)(vlTOPp->TXSim__DOT__pipeline_halt)) 
                                         | ((0x14U 
                                             > ((((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                                                  & (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                                                 << 5U) 
                                                | (0x1fU 
                                                   & ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                      - (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
                                            << 1U));
    vlTOPp->TXSim__DOT__pipeline_halt = ((0x3fbU & (IData)(vlTOPp->TXSim__DOT__pipeline_halt)) 
                                         | ((0x14U 
                                             > ((((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                                                  & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                                                 << 5U) 
                                                | (0x1fU 
                                                   & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                      - (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
                                            << 2U));
    vlTOPp->TXSim__DOT__pipeline_halt = ((0x3f7U & (IData)(vlTOPp->TXSim__DOT__pipeline_halt)) 
                                         | ((0x14U 
                                             > ((((~ (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_risingOccupancy)) 
                                                  & (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ptrMatch)) 
                                                 << 5U) 
                                                | (0x1fU 
                                                   & ((IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_value) 
                                                      - (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_value))))) 
                                            << 3U));
    vlTOPp->TXSim__DOT__pipeline_halt = ((0x3efU & (IData)(vlTOPp->TXSim__DOT__pipeline_halt)) 
                                         | ((0x14U 
                                             > ((((~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                                                  & (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                                                 << 5U) 
                                                | (0x1fU 
                                                   & ((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                      - (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
                                            << 4U));
    vlTOPp->TXSim__DOT__pipeline_halt = ((0x3dfU & (IData)(vlTOPp->TXSim__DOT__pipeline_halt)) 
                                         | ((0x14U 
                                             > ((((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                                                  & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                                                 << 5U) 
                                                | (0x1fU 
                                                   & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                      - (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
                                            << 5U));
    vlTOPp->TXSim__DOT__pipeline_halt = ((0x3bfU & (IData)(vlTOPp->TXSim__DOT__pipeline_halt)) 
                                         | ((0x14U 
                                             > ((((~ (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_risingOccupancy)) 
                                                  & (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ptrMatch)) 
                                                 << 5U) 
                                                | (0x1fU 
                                                   & ((IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_value) 
                                                      - (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_value))))) 
                                            << 6U));
    vlTOPp->TXSim__DOT__pipeline_halt = ((0x37fU & (IData)(vlTOPp->TXSim__DOT__pipeline_halt)) 
                                         | ((0x14U 
                                             > ((((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                                                  & (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                                                 << 5U) 
                                                | (0x1fU 
                                                   & ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                      - (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
                                            << 7U));
    vlTOPp->TXSim__DOT__pipeline_halt = ((0x2ffU & (IData)(vlTOPp->TXSim__DOT__pipeline_halt)) 
                                         | ((0x14U 
                                             > ((((~ (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                                                  & (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                                                 << 5U) 
                                                | (0x1fU 
                                                   & ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                      - (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
                                            << 8U));
    vlTOPp->TXSim__DOT__pipeline_halt = ((0x1ffU & (IData)(vlTOPp->TXSim__DOT__pipeline_halt)) 
                                         | ((0x14U 
                                             > ((((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                                                  & (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                                                 << 5U) 
                                                | (0x1fU 
                                                   & ((IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                      - (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))) 
                                            << 9U));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0 
        = ((0x80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 7U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__r_enc_buf));
    vlTOPp->TXSim__DOT__phy_header_extender_raw_data_ready 
        = (1U & ((~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_full)) 
                 & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__emitHeader))));
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_full))))));
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushing 
        = (((0U != (IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__cnt)) 
            & (IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT__strb_buf)) 
           & (~ (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_full)));
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_full))))));
    vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core_split_data_fire 
        = ((0U != (IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__cnt)) 
           & (~ (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_full)));
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_23 = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_23 
                = vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_22;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_128__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_128__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_28)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_127__DOT__previous_adder_data));
        }
    }
}

VL_INLINE_OPT void VTXSim::_sequent__TOP__15(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_sequent__TOP__15\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_95__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_95__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_28)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_94__DOT__previous_adder_data));
        }
    }
    vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data_valid_1) 
           & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_ready = 0U;
    if ((0U != (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
        if ((1U == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
            vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_ready 
                = (1U & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_full)));
        }
    }
    vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->TXSim__DOT__phy_tx_filter_raw_data_ready 
        = (1U & ((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__last_padding)) 
                 & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full))));
    vlTOPp->TXSim__DOT__phy_tx_crc_raw_data_ready = 
        (1U & ((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__emitCrc)) 
               & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full))));
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushing 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_valid_1) 
           & (~ (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_full)));
    vlTOPp->TXSim__DOT__streamFifo_12_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_full))))));
    vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_valid) 
           & (~ (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TXSim__DOT__stf_preamble_adder_raw_data_ready 
        = ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__raw_ready) 
           & (~ (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->TXSim__DOT__phy_tx_padder_raw_data_ready 
        = (1U & ((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full)) 
                 & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_padder__DOT__fill))));
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo_io_pop_ready = 0U;
    if ((0U != (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__header_status))) {
        if ((1U != (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__header_status))) {
            vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo_io_pop_ready 
                = (1U & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full)));
        }
    }
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full))))));
    vlTOPp->TXSim__DOT__streamFifo_13_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_full))))));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1 
        = ((0x80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 6U)) | (0x7fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                         >> 1U)));
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_valid = 0U;
    if ((0U != (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__header_status))) {
        vlTOPp->TXSim__DOT__phy_header_extender_result_data_valid 
            = ((1U == (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__header_status)) 
               | (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo_io_pop_valid));
    }
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_padder_raw_data_valid 
        = ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo_io_pop_valid) 
           & (~ (IData)(vlTOPp->TXSim__DOT__pipeline_halt)));
    vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability_io_pop_valid) 
           & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                 >> 3U)));
    vlTOPp->result_data_valid = vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability_io_pop_valid;
    vlTOPp->TXSim__DOT__stf_preamble_adder_raw_data_valid 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability_io_pop_valid) 
           & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                 >> 8U)));
    vlTOPp->TXSim__DOT__phy_tx_oversampling_raw_data_ready 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_raw_data_ready) 
           & (0U == (IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling__DOT__cnt)));
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability_io_pop_valid) 
           & ((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__emitEncoding)) 
              & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                    >> 2U))));
    vlTOPp->TXSim__DOT__phy_tx_encoder_raw_data_valid 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability_io_pop_valid) 
           & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                 >> 2U)));
    vlTOPp->TXSim__DOT__streamFifo_12__DOT___zz_1 = 0U;
    if (vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__streamFifo_12__DOT___zz_1 = 1U;
    }
    vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popping 
        = ((IData)(vlTOPp->TXSim__DOT__streamFifo_12_io_pop_valid) 
           & ((IData)(vlTOPp->TXSim__DOT__phy_header_extender_raw_data_ready) 
              & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                    >> 4U))));
    vlTOPp->TXSim__DOT__phy_header_extender_raw_data_valid 
        = ((IData)(vlTOPp->TXSim__DOT__streamFifo_12_io_pop_valid) 
           & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                 >> 4U)));
    vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability_io_pop_valid) 
           & ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_raw_data_ready) 
              & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                    >> 8U))));
    vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability_io_pop_valid) 
           & ((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full)) 
              & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                    >> 9U))));
    vlTOPp->TXSim__DOT__phy_tx_front_raw_data_valid 
        = ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability_io_pop_valid) 
           & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                 >> 9U)));
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo_io_pop_valid) 
           & ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_raw_data_ready) 
              & (~ (IData)(vlTOPp->TXSim__DOT__pipeline_halt))));
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability_io_pop_valid) 
           & ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_raw_data_ready) 
              & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                    >> 1U))));
    vlTOPp->TXSim__DOT__phy_tx_crc_raw_data_valid = 
        ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability_io_pop_valid) 
         & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
               >> 1U)));
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popping 
        = ((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo_io_pop_valid) 
           & (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo_io_pop_ready));
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popping 
        = ((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability_io_pop_valid) 
           & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_ready) 
              & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                    >> 5U))));
    vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_valid 
        = ((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability_io_pop_valid) 
           & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                 >> 5U)));
}

VL_INLINE_OPT void VTXSim::_sequent__TOP__16(VTXSim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTXSim::_sequent__TOP__16\n"); );
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TXSim__DOT__phy_tx_oversampling_raw_data_valid 
        = ((IData)(vlTOPp->TXSim__DOT__streamFifo_13_io_pop_valid) 
           & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                 >> 7U)));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2 
        = ((0x80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 5U)) | (0x7fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                         >> 1U)));
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_valid) 
           & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_valueNext 
        = (((0x3e7U == (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x3ffU & ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value) 
                              + (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_valid 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_raw_data_valid) 
           & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_padder__DOT__fill)));
    if (vlTOPp->TXSim__DOT__phy_tx_padder__DOT__fill) {
        vlTOPp->TXSim__DOT__phy_tx_padder_result_data_valid = 1U;
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_22 = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_22 
                = vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_21;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_127__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_127__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_27)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_126__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_94__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_94__DOT__previous_adder_data 
                = (0x7ffffU & (VL_MULS_III(19,19,19, 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                           (0x7ffffU 
                                            & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_27)))) 
                               + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_93__DOT__previous_adder_data));
        }
    }
    vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__raw_data_fire 
        = ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_raw_data_valid) 
           & (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_raw_data_ready));
    vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popping 
        = ((IData)(vlTOPp->TXSim__DOT__streamFifo_13_io_pop_valid) 
           & ((IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling_raw_data_ready) 
              & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                    >> 7U))));
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__when_PhyTx_l95 
        = (((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_raw_data_valid) 
            & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__emitEncoding))) 
           & (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_logic_ram_port0));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__emitEncoding) 
           | (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_raw_data_valid));
    vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popping) {
        vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushing 
        = (((IData)(vlTOPp->TXSim__DOT__phy_header_extender_raw_data_valid) 
            & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__emitHeader))) 
           & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_full)));
    vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_front_raw_data_valid) 
           & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popping) {
        vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_valid 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__emitCrc) 
           | (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_raw_data_valid));
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popping) {
        vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popping) {
        vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1_init_state_valid 
        = (1U & ((0U == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status))
                  ? (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_valid))
                  : (1U != (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status))));
    vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1_scram_data_ready 
        = ((0U == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status))
            ? (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_valid)
            : ((1U == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status)) 
               & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_valid) 
                  & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_ready))));
    vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_valid = 0U;
    if ((0U != (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
        if ((1U == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
            vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_valid 
                = ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_valid) 
                   & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_valid));
        }
    }
    vlTOPp->TXSim__DOT__phy_tx_oversampling_result_data_valid 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling_raw_data_valid) 
           | (0U != (IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling__DOT__cnt)));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3 
        = ((0x80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 4U)) | (0x7fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                         >> 1U)));
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_padder__DOT__when_PhyTx_l71 
        = ((7U != (IData)(vlTOPp->TXSim__DOT__phy_tx_padder__DOT__counter)) 
           & ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_valid) 
              & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full))));
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_valid) 
           & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popping) {
        vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__when_PhyTx_l95_1 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid) 
           & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__emitEncoding));
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_1 = 0U;
    if (vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_valid) 
           & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_valueNext 
        = (((0x85U == (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value) 
                             + (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_willIncrement))));
    vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushing 
        = ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_valid) 
           & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_full)));
    vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4 
        = ((0x80U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 3U)) | (0x7fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                         >> 1U)));
    vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_1 = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_1 = 1U;
    }
    vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushing) {
        vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement = 1U;
    }
    if (vlTOPp->reset) {
        vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_21 = 0U;
    } else {
        if (vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) {
            vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_21 
                = vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_20;
        }
    }
}
