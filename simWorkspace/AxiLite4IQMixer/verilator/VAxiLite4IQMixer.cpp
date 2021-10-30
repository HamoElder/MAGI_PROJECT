// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxiLite4IQMixer.h for the primary calling header

#include "VAxiLite4IQMixer.h"
#include "VAxiLite4IQMixer__Syms.h"

//==========

void VAxiLite4IQMixer::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAxiLite4IQMixer::eval\n"); );
    VAxiLite4IQMixer__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/AxiLite4IQMixer.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VAxiLite4IQMixer::_eval_initial_loop(VAxiLite4IQMixer__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/AxiLite4IQMixer.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VAxiLite4IQMixer::_sequent__TOP__2(VAxiLite4IQMixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4IQMixer::_sequent__TOP__2\n"); );
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->axil4Ctrl_arready) {
        vlTOPp->AxiLite4IQMixer__DOT__axil4Ctrl_ar_rData_prot 
            = vlTOPp->axil4Ctrl_arprot;
    }
    if (vlTOPp->axil4Ctrl_arready) {
        vlTOPp->AxiLite4IQMixer__DOT__axil4Ctrl_ar_rData_addr 
            = vlTOPp->axil4Ctrl_araddr;
    }
    if (vlTOPp->AxiLite4IQMixer__DOT___zz_writeJoinEvent_translated_ready) {
        vlTOPp->AxiLite4IQMixer__DOT___zz_axil4Ctrl_bresp = 0U;
    }
    vlTOPp->axil4Ctrl_bresp = vlTOPp->AxiLite4IQMixer__DOT___zz_axil4Ctrl_bresp;
}

VL_INLINE_OPT void VAxiLite4IQMixer::_sequent__TOP__3(VAxiLite4IQMixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4IQMixer::_sequent__TOP__3\n"); );
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rf_resetn) {
        if (vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__iq_en) {
            vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_iq_valid_1 = 1U;
            vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_iq_data 
                = (vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_i_data 
                   + vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_q_data);
            vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_i_data 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__base_i_data)), 
                              VL_EXTENDS_II(32,16, (IData)(vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__carrier_i_data)));
            vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_q_data 
                = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__base_q_data)), 
                              VL_EXTENDS_II(32,16, (IData)(vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__carrier_q_data)));
        } else {
            vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_iq_valid_1 = 0U;
            vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_i_data = 0U;
            vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_q_data = 0U;
        }
    } else {
        vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_iq_valid_1 = 0U;
        vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_i_data = 0U;
        vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_q_data = 0U;
        vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_iq_data = 0U;
    }
    vlTOPp->if_iq_0_valid = vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_iq_valid_1;
    vlTOPp->if_iq_0_payload = vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_iq_data;
    vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__iq_en 
        = ((IData)(vlTOPp->rf_resetn) & ((IData)(vlTOPp->base_iq_0_valid) 
                                         & (IData)(vlTOPp->carries_iq_valid)));
    if (vlTOPp->rf_resetn) {
        if (vlTOPp->base_iq_0_valid) {
            vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__base_i_data 
                = vlTOPp->AxiLite4IQMixer__DOT__powerAdjustor_2__DOT__shifted_data_cha_i;
        }
    } else {
        vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__base_i_data = 0U;
    }
    if (vlTOPp->rf_resetn) {
        if (vlTOPp->carries_iq_valid) {
            vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__carrier_i_data 
                = vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_carrier_power_adjustor__DOT__shifted_data_cha_i;
        }
    } else {
        vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__carrier_i_data = 0U;
    }
    if (vlTOPp->rf_resetn) {
        if (vlTOPp->base_iq_0_valid) {
            vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__base_q_data 
                = vlTOPp->AxiLite4IQMixer__DOT__powerAdjustor_2__DOT__shifted_data_cha_q;
        }
    } else {
        vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__base_q_data = 0U;
    }
    if (vlTOPp->rf_resetn) {
        if (vlTOPp->carries_iq_valid) {
            vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__carrier_q_data 
                = vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_carrier_power_adjustor__DOT__shifted_data_cha_q;
        }
    } else {
        vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__carrier_q_data = 0U;
    }
}

VL_INLINE_OPT void VAxiLite4IQMixer::_sequent__TOP__4(VAxiLite4IQMixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4IQMixer::_sequent__TOP__4\n"); );
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->base_iq_0_valid) {
        vlTOPp->AxiLite4IQMixer__DOT__powerAdjustor_2__DOT__shifted_data_cha_i 
            = (0xffffU & ((IData)(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_7__DOT__area_clkO_buf1)
                           ? VL_SHIFTRS_III(16,16,2, (IData)(vlTOPp->base_iq_0_payload_cha_i), (IData)(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_6__DOT__area_clkO_buf1))
                           : ((IData)(vlTOPp->base_iq_0_payload_cha_i) 
                              << (IData)(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_6__DOT__area_clkO_buf1))));
    }
    if (vlTOPp->carries_iq_valid) {
        vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_carrier_power_adjustor__DOT__shifted_data_cha_i 
            = (0xffffU & ((IData)(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_5__DOT__area_clkO_buf1)
                           ? VL_SHIFTRS_III(16,16,3, (IData)(vlTOPp->carries_iq_payload_cha_i), (IData)(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                           : ((IData)(vlTOPp->carries_iq_payload_cha_i) 
                              << (IData)(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_4__DOT__area_clkO_buf1))));
    }
    if (vlTOPp->base_iq_0_valid) {
        vlTOPp->AxiLite4IQMixer__DOT__powerAdjustor_2__DOT__shifted_data_cha_q 
            = (0xffffU & ((IData)(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_7__DOT__area_clkO_buf1)
                           ? VL_SHIFTRS_III(16,16,2, (IData)(vlTOPp->base_iq_0_payload_cha_q), (IData)(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_6__DOT__area_clkO_buf1))
                           : ((IData)(vlTOPp->base_iq_0_payload_cha_q) 
                              << (IData)(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_6__DOT__area_clkO_buf1))));
    }
    if (vlTOPp->carries_iq_valid) {
        vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_carrier_power_adjustor__DOT__shifted_data_cha_q 
            = (0xffffU & ((IData)(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_5__DOT__area_clkO_buf1)
                           ? VL_SHIFTRS_III(16,16,3, (IData)(vlTOPp->carries_iq_payload_cha_q), (IData)(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                           : ((IData)(vlTOPp->carries_iq_payload_cha_q) 
                              << (IData)(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_4__DOT__area_clkO_buf1))));
    }
    vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_7__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_7__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_6__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_6__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_5__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_5__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_4__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_4__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_7__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_7__DOT__area_clkI_reg;
    vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_6__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_6__DOT__area_clkI_reg;
    vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_5__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_5__DOT__area_clkI_reg;
    vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_4__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_4__DOT__area_clkI_reg;
}

VL_INLINE_OPT void VAxiLite4IQMixer::_sequent__TOP__5(VAxiLite4IQMixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4IQMixer::_sequent__TOP__5\n"); );
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4IQMixer__DOT__axil4Ctrl_ar_rValid = 0U;
    } else {
        if (vlTOPp->axil4Ctrl_arready) {
            vlTOPp->AxiLite4IQMixer__DOT__axil4Ctrl_ar_rValid 
                = vlTOPp->axil4Ctrl_arvalid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4IQMixer__DOT___zz_axil4Ctrl_bvalid_2 = 0U;
    } else {
        if (vlTOPp->AxiLite4IQMixer__DOT___zz_writeJoinEvent_translated_ready) {
            vlTOPp->AxiLite4IQMixer__DOT___zz_axil4Ctrl_bvalid_2 
                = vlTOPp->AxiLite4IQMixer__DOT__writeJoinEvent_valid;
        }
    }
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->AxiLite4IQMixer__DOT__axil4Ctrl_ar_rValid;
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->AxiLite4IQMixer__DOT___zz_axil4Ctrl_bvalid_2;
}

VL_INLINE_OPT void VAxiLite4IQMixer::_sequent__TOP__7(VAxiLite4IQMixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4IQMixer::_sequent__TOP__7\n"); );
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_7__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4IQMixer__DOT___zz_readRsp_data_1;
    vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_6__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4IQMixer__DOT___zz_readRsp_data;
    vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_5__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4IQMixer__DOT_____05Fshift_dir_driver;
    vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_4__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4IQMixer__DOT_____05Fshift_bias_driver;
}

VL_INLINE_OPT void VAxiLite4IQMixer::_combo__TOP__8(VAxiLite4IQMixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4IQMixer::_combo__TOP__8\n"); );
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4IQMixer__DOT__writeJoinEvent_valid 
        = ((IData)(vlTOPp->axil4Ctrl_awvalid) & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4IQMixer__DOT__axil4Ctrl_ar_rValid)))) {
        vlTOPp->axil4Ctrl_arready = 1U;
    }
    vlTOPp->AxiLite4IQMixer__DOT___zz_writeJoinEvent_translated_ready 
        = vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4IQMixer__DOT___zz_axil4Ctrl_bvalid_2)))) {
        vlTOPp->AxiLite4IQMixer__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
}

VL_INLINE_OPT void VAxiLite4IQMixer::_sequent__TOP__9(VAxiLite4IQMixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4IQMixer::_sequent__TOP__9\n"); );
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4IQMixer__DOT___zz_readRsp_data_1 = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((4U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((0x10U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((0x14U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if (vlTOPp->AxiLite4IQMixer__DOT__writeJoinEvent_fire) {
                            vlTOPp->AxiLite4IQMixer__DOT___zz_readRsp_data_1 
                                = (1U & vlTOPp->axil4Ctrl_wdata);
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4IQMixer__DOT___zz_readRsp_data = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((4U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((0x10U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if (vlTOPp->AxiLite4IQMixer__DOT__writeJoinEvent_fire) {
                        vlTOPp->AxiLite4IQMixer__DOT___zz_readRsp_data 
                            = (3U & vlTOPp->axil4Ctrl_wdata);
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4IQMixer__DOT_____05Fshift_dir_driver = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((4U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if (vlTOPp->AxiLite4IQMixer__DOT__writeJoinEvent_fire) {
                    vlTOPp->AxiLite4IQMixer__DOT_____05Fshift_dir_driver 
                        = (1U & vlTOPp->axil4Ctrl_wdata);
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4IQMixer__DOT_____05Fshift_bias_driver = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if (vlTOPp->AxiLite4IQMixer__DOT__writeJoinEvent_fire) {
                vlTOPp->AxiLite4IQMixer__DOT_____05Fshift_bias_driver 
                    = (7U & vlTOPp->axil4Ctrl_wdata);
            }
        }
    }
    vlTOPp->AxiLite4IQMixer__DOT__readRsp_data = 0U;
    if ((0U == (IData)(vlTOPp->AxiLite4IQMixer__DOT__axil4Ctrl_ar_rData_addr))) {
        vlTOPp->AxiLite4IQMixer__DOT__readRsp_data 
            = ((0xfffffff8U & vlTOPp->AxiLite4IQMixer__DOT__readRsp_data) 
               | (IData)(vlTOPp->AxiLite4IQMixer__DOT_____05Fshift_bias_driver));
    } else {
        if ((4U == (IData)(vlTOPp->AxiLite4IQMixer__DOT__axil4Ctrl_ar_rData_addr))) {
            vlTOPp->AxiLite4IQMixer__DOT__readRsp_data 
                = ((0xfffffffeU & vlTOPp->AxiLite4IQMixer__DOT__readRsp_data) 
                   | (IData)(vlTOPp->AxiLite4IQMixer__DOT_____05Fshift_dir_driver));
        } else {
            if ((0x10U == (IData)(vlTOPp->AxiLite4IQMixer__DOT__axil4Ctrl_ar_rData_addr))) {
                vlTOPp->AxiLite4IQMixer__DOT__readRsp_data 
                    = ((0xfffffffcU & vlTOPp->AxiLite4IQMixer__DOT__readRsp_data) 
                       | (IData)(vlTOPp->AxiLite4IQMixer__DOT___zz_readRsp_data));
            } else {
                if ((0x14U == (IData)(vlTOPp->AxiLite4IQMixer__DOT__axil4Ctrl_ar_rData_addr))) {
                    vlTOPp->AxiLite4IQMixer__DOT__readRsp_data 
                        = ((0xfffffffeU & vlTOPp->AxiLite4IQMixer__DOT__readRsp_data) 
                           | (IData)(vlTOPp->AxiLite4IQMixer__DOT___zz_readRsp_data_1));
                }
            }
        }
    }
    vlTOPp->axil4Ctrl_rdata = vlTOPp->AxiLite4IQMixer__DOT__readRsp_data;
}

VL_INLINE_OPT void VAxiLite4IQMixer::_combo__TOP__10(VAxiLite4IQMixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4IQMixer::_combo__TOP__10\n"); );
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4IQMixer__DOT__writeJoinEvent_fire 
        = ((IData)(vlTOPp->AxiLite4IQMixer__DOT__writeJoinEvent_valid) 
           & (IData)(vlTOPp->AxiLite4IQMixer__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->axil4Ctrl_awready = vlTOPp->AxiLite4IQMixer__DOT__writeJoinEvent_fire;
    vlTOPp->axil4Ctrl_wready = vlTOPp->AxiLite4IQMixer__DOT__writeJoinEvent_fire;
}

void VAxiLite4IQMixer::_eval(VAxiLite4IQMixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4IQMixer::_eval\n"); );
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->rf_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__rf_clk)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__8(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__9(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x40U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__10(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rf_clk = vlTOPp->rf_clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VAxiLite4IQMixer::_change_request(VAxiLite4IQMixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4IQMixer::_change_request\n"); );
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VAxiLite4IQMixer::_change_request_1(VAxiLite4IQMixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4IQMixer::_change_request_1\n"); );
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAxiLite4IQMixer::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4IQMixer::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((axil4Ctrl_awvalid & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_awvalid");}
    if (VL_UNLIKELY((axil4Ctrl_awprot & 0xf8U))) {
        Verilated::overWidthError("axil4Ctrl_awprot");}
    if (VL_UNLIKELY((axil4Ctrl_wvalid & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_wvalid");}
    if (VL_UNLIKELY((axil4Ctrl_wstrb & 0xf0U))) {
        Verilated::overWidthError("axil4Ctrl_wstrb");}
    if (VL_UNLIKELY((axil4Ctrl_bready & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_bready");}
    if (VL_UNLIKELY((axil4Ctrl_arvalid & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_arvalid");}
    if (VL_UNLIKELY((axil4Ctrl_arprot & 0xf8U))) {
        Verilated::overWidthError("axil4Ctrl_arprot");}
    if (VL_UNLIKELY((axil4Ctrl_rready & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_rready");}
    if (VL_UNLIKELY((base_iq_0_valid & 0xfeU))) {
        Verilated::overWidthError("base_iq_0_valid");}
    if (VL_UNLIKELY((carries_iq_valid & 0xfeU))) {
        Verilated::overWidthError("carries_iq_valid");}
    if (VL_UNLIKELY((rf_clk & 0xfeU))) {
        Verilated::overWidthError("rf_clk");}
    if (VL_UNLIKELY((rf_resetn & 0xfeU))) {
        Verilated::overWidthError("rf_resetn");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
