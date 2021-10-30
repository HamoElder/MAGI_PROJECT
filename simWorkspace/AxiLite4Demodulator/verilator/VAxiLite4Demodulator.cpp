// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxiLite4Demodulator.h for the primary calling header

#include "VAxiLite4Demodulator.h"
#include "VAxiLite4Demodulator__Syms.h"

//==========

void VAxiLite4Demodulator::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAxiLite4Demodulator::eval\n"); );
    VAxiLite4Demodulator__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/AxiLite4Demodulator.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VAxiLite4Demodulator::_eval_initial_loop(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/AxiLite4Demodulator.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__2(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__2\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->axil4Ctrl_arready) {
        vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_prot 
            = vlTOPp->axil4Ctrl_arprot;
    }
    if (vlTOPp->AxiLite4Demodulator__DOT___zz_writeJoinEvent_translated_ready) {
        vlTOPp->AxiLite4Demodulator__DOT___zz_axil4Ctrl_bresp = 0U;
    }
    if (vlTOPp->axil4Ctrl_arready) {
        vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_addr 
            = vlTOPp->axil4Ctrl_araddr;
    }
    vlTOPp->axil4Ctrl_bresp = vlTOPp->AxiLite4Demodulator__DOT___zz_axil4Ctrl_bresp;
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__8(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__8\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt 
        = vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt;
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_16__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_16__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_data_q 
        = ((IData)(vlTOPp->rf_resetn) ? ((3U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                          ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_q))
            : 0U);
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__demod_data_q 
        = ((IData)(vlTOPp->rf_resetn) ? ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                          ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_q))
            : 0U);
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_data_i 
        = ((IData)(vlTOPp->rf_resetn) ? ((3U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                          ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_i))
            : 0U);
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__demod_data_i 
        = ((IData)(vlTOPp->rf_resetn) ? ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                          ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_i))
            : 0U);
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q 
        = ((IData)(vlTOPp->rf_resetn) ? ((4U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                          ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_q))
            : 0U);
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i 
        = ((IData)(vlTOPp->rf_resetn) ? ((4U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                          ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_i))
            : 0U);
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x3eU)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_62 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__9(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__9\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x3dU)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_61 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x3cU)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_60 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x3bU)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_59 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x3aU)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_58 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x39U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_57 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x38U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_56 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x37U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_55 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x36U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_54 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x35U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_53 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x34U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_52 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x33U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_51 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x32U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_50 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x2fU)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_47 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x15U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_21 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x14U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_20 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x13U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_19 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x12U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_18 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x11U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_17 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x10U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_16 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0xfU)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_15 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0xeU)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_14 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0xdU)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_13 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0xcU)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_12 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x24U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_36 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x23U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_35 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x27U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_39 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__10(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__10\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 3U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_3 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x21U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_33 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x1bU)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_27 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x1aU)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_26 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1))))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_0 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x17U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_23 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x1cU)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_28 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x25U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_37 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 1U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_1 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x1fU)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_31 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x2eU)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_46 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0xaU)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_10 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x30U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_48 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x28U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_40 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 4U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_4 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x22U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_34 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x19U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_25 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x26U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_38 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 2U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_2 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x20U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_32 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0xbU)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_11 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x31U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_49 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x29U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_41 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 5U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_5 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1))))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_0 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__11(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__11\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x18U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_24 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x1dU)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_29 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x1eU)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_30 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x2aU)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_42 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 6U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_6 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x2bU)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_43 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 7U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_7 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x2cU)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_44 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 8U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_8 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x2dU)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_45 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 9U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_9 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                               >> 0x16U)))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_22 
                    = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 1U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_1 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 2U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_2 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 3U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_3 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 4U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_4 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 5U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_5 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 6U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_6 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 7U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_7 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 8U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_8 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 9U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_9 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0xaU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_10 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__12(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__12\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0xbU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_11 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0xcU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_12 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0xdU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_13 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0xeU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_14 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0xfU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_15 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x10U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_16 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x11U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_17 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x12U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_18 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x13U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_19 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x14U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_20 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x15U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_21 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x16U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_22 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x17U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_23 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x18U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_24 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x19U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_25 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x1aU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_26 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x1bU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_27 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x1cU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_28 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__13(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__13\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x1dU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_29 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x1eU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_30 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x1fU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_31 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x20U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_32 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x21U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_33 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x22U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_34 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x23U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_35 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x24U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_36 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x25U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_37 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x26U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_38 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x27U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_39 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x28U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_40 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x29U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_41 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x2aU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_42 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x2bU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_43 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x2cU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_44 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x2dU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_45 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x2eU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_46 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__14(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__14\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x2fU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_47 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x30U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_48 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x31U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_49 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x32U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_50 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x33U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_51 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x34U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_52 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x35U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_53 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x36U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_54 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x37U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_55 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x38U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_56 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x39U)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_57 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x3aU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_58 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x3bU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_59 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x3cU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_60 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x3dU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_61 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) {
        if ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
            if ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                if ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))) {
                    if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)) 
                                       >> 0x3eU)))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_62 
                            = (0xffffU & vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1);
                    }
                }
            }
        }
    }
    if (vlTOPp->rf_resetn) {
        if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_15__DOT__area_clkO_buf1) {
            if (vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__unit_data_valid_1) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_valid_1 
                    = ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt) 
                       == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_17__DOT__area_clkO_buf1));
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_buffer 
                    = (0xffffffU & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT___zz_base_data_buffer));
                vlTOPp->__Vdly__AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt 
                    = (((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt) 
                        == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_17__DOT__area_clkO_buf1))
                        ? 0U : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT___zz_base_cnt));
            } else {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_valid_1 
                    = ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt) 
                       == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_17__DOT__area_clkO_buf1));
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_buffer 
                    = (0xffffffU & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT___zz_base_data_buffer_3));
                vlTOPp->__Vdly__AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt 
                    = (((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt) 
                        == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_17__DOT__area_clkO_buf1))
                        ? 0U : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT___zz_base_cnt));
            }
        } else {
            vlTOPp->__Vdly__AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt = 0U;
            vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_valid_1 = 0U;
        }
    } else {
        vlTOPp->__Vdly__AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt = 0U;
        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_buffer = 0U;
        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_valid_1 = 0U;
    }
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__15(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__15\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__unit_data_buffer 
        = ((IData)(vlTOPp->rf_resetn) ? (0xfffU & (
                                                   (4U 
                                                    & (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                                    ? 
                                                   ((0x1fffU 
                                                     & ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_i) 
                                                        << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_11__DOT__area_clkO_buf1))) 
                                                    | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_q))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                                      ? 
                                                     (((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__unit_data_i) 
                                                       << 3U) 
                                                      | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__unit_data_q))
                                                      : 
                                                     (((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__unit_data_i) 
                                                       << 2U) 
                                                      | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__unit_data_q)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                                      ? 
                                                     (((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__unit_data_i) 
                                                       << 1U) 
                                                      | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__unit_data_q))
                                                      : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__unit_data_i)))))
            : 0U);
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt 
        = vlTOPp->__Vdly__AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt;
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__16(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__16\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx1;
    SData/*10:0*/ __Vtableidx2;
    // Body
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_16__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_16__DOT__area_clkI_reg;
    vlTOPp->base_data_valid = vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_valid_1;
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT___zz_base_cnt 
        = (0x1fU & ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt) 
                    + (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_16__DOT__area_clkO_buf1)));
    vlTOPp->base_data_payload = vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_buffer;
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT___zz_base_data_buffer_3 
        = (VL_ULL(0x7fffffffffffff) & ((QData)((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_buffer)) 
                                       << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_16__DOT__area_clkO_buf1)));
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_15__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_15__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_17__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_17__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__unit_data_valid_1 
        = ((IData)(vlTOPp->rf_resetn) & ((4U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                          ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_valid)
                                          : ((2U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                                  ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__unit_valid)
                                                  : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__unit_valid))
                                              : ((1U 
                                                  & (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                                  ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__unit_valid)
                                                  : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__unit_valid)))));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT___zz_base_data_buffer 
        = (VL_ULL(0x7fffffffffffff) & (((QData)((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_buffer)) 
                                        << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_16__DOT__area_clkO_buf1)) 
                                       | (QData)((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__unit_data_buffer))));
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_11__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_11__DOT__area_clkO_buf0;
    __Vtableidx2 = (((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__codeTable_q) 
                     << 6U) | (((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__compTable_i) 
                                << 1U) | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_valid)));
    if ((1U & vlTOPp->__Vtablechg2[__Vtableidx2])) {
        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__unit_data_i 
            = vlTOPp->__Vtable2_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__unit_data_i
            [__Vtableidx2];
    }
    if ((2U & vlTOPp->__Vtablechg2[__Vtableidx2])) {
        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__unit_data_q 
            = vlTOPp->__Vtable2_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__unit_data_q
            [__Vtableidx2];
    }
    __Vtableidx1 = (((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__codeTable_q) 
                     << 4U) | (((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__compTable_i) 
                                << 1U) | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__demod_valid)));
    if ((1U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__unit_data_i 
            = vlTOPp->__Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__unit_data_i
            [__Vtableidx1];
    }
    if ((2U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__unit_data_q 
            = vlTOPp->__Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__unit_data_q
            [__Vtableidx1];
    }
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__unit_data_q 
        = ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__demod_valid) 
           & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__codeTable_q));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__unit_data_i 
        = ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__demod_valid) 
           & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__compTable_i));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__unit_data_i 
        = ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__demod_valid) 
           & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__compTable_i));
    if (vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_valid) {
        if (((((((((VL_ULL(0) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i) 
                   | (VL_ULL(1) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                  | (VL_ULL(3) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                 | (VL_ULL(7) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                | (VL_ULL(0xf) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
               | (VL_ULL(0x1f) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
              | (VL_ULL(0x3f) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
             | (VL_ULL(0x7f) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i))) {
            vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_i 
                = ((VL_ULL(0) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                    ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_0)
                    : ((VL_ULL(1) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                        ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_1)
                        : ((VL_ULL(3) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                            ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_2)
                            : ((VL_ULL(7) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_3)
                                : ((VL_ULL(0xf) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                    ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_4)
                                    : ((VL_ULL(0x1f) 
                                        == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                        ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_5)
                                        : ((VL_ULL(0x3f) 
                                            == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                            ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_6)
                                            : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_7))))))));
        } else {
            if (((((((((VL_ULL(0xff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i) 
                       | (VL_ULL(0x1ff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                      | (VL_ULL(0x3ff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                     | (VL_ULL(0x7ff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                    | (VL_ULL(0xfff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                   | (VL_ULL(0x1fff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                  | (VL_ULL(0x3fff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                 | (VL_ULL(0x7fff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_i 
                    = ((VL_ULL(0xff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                        ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_8)
                        : ((VL_ULL(0x1ff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                            ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_9)
                            : ((VL_ULL(0x3ff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_10)
                                : ((VL_ULL(0x7ff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                    ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_11)
                                    : ((VL_ULL(0xfff) 
                                        == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                        ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_12)
                                        : ((VL_ULL(0x1fff) 
                                            == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                            ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_13)
                                            : ((VL_ULL(0x3fff) 
                                                == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_14)
                                                : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_15))))))));
            } else {
                if (((((((((VL_ULL(0xffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i) 
                           | (VL_ULL(0x1ffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                          | (VL_ULL(0x3ffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                         | (VL_ULL(0x7ffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                        | (VL_ULL(0xfffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                       | (VL_ULL(0x1fffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                      | (VL_ULL(0x3fffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                     | (VL_ULL(0x7fffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_i 
                        = ((VL_ULL(0xffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                            ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_16)
                            : ((VL_ULL(0x1ffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_17)
                                : ((VL_ULL(0x3ffff) 
                                    == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                    ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_18)
                                    : ((VL_ULL(0x7ffff) 
                                        == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                        ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_19)
                                        : ((VL_ULL(0xfffff) 
                                            == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                            ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_20)
                                            : ((VL_ULL(0x1fffff) 
                                                == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_21)
                                                : (
                                                   (VL_ULL(0x3fffff) 
                                                    == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                    ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_22)
                                                    : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_23))))))));
                } else {
                    if (((((((((VL_ULL(0xffffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i) 
                               | (VL_ULL(0x1ffffff) 
                                  == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                              | (VL_ULL(0x3ffffff) 
                                 == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                             | (VL_ULL(0x7ffffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                            | (VL_ULL(0xfffffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                           | (VL_ULL(0x1fffffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                          | (VL_ULL(0x3fffffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                         | (VL_ULL(0x7fffffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_i 
                            = ((VL_ULL(0xffffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_24)
                                : ((VL_ULL(0x1ffffff) 
                                    == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                    ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_25)
                                    : ((VL_ULL(0x3ffffff) 
                                        == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                        ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_26)
                                        : ((VL_ULL(0x7ffffff) 
                                            == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                            ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_27)
                                            : ((VL_ULL(0xfffffff) 
                                                == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_28)
                                                : (
                                                   (VL_ULL(0x1fffffff) 
                                                    == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                    ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_29)
                                                    : 
                                                   ((VL_ULL(0x3fffffff) 
                                                     == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                     ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_30)
                                                     : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_31))))))));
                    } else {
                        if (((((((((VL_ULL(0) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i) 
                                   | (VL_ULL(1) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                                  | (VL_ULL(3) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                                 | (VL_ULL(7) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                                | (VL_ULL(0xf) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                               | (VL_ULL(0x1f) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                              | (VL_ULL(0x3f) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                             | (VL_ULL(0x7f) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i))) {
                            vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_i 
                                = ((VL_ULL(0) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                    ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_32)
                                    : ((VL_ULL(1) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                        ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_33)
                                        : ((VL_ULL(3) 
                                            == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                            ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_34)
                                            : ((VL_ULL(7) 
                                                == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_35)
                                                : (
                                                   (VL_ULL(0xf) 
                                                    == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                    ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_36)
                                                    : 
                                                   ((VL_ULL(0x1f) 
                                                     == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                     ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_37)
                                                     : 
                                                    ((VL_ULL(0x3f) 
                                                      == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                      ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_38)
                                                      : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_39))))))));
                        } else {
                            if (((((((((VL_ULL(0xff) 
                                        == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i) 
                                       | (VL_ULL(0x1ff) 
                                          == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                                      | (VL_ULL(0x3ff) 
                                         == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                                     | (VL_ULL(0x7ff) 
                                        == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                                    | (VL_ULL(0xfff) 
                                       == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                                   | (VL_ULL(0x1fff) 
                                      == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                                  | (VL_ULL(0x3fff) 
                                     == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                                 | (VL_ULL(0x7fff) 
                                    == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i))) {
                                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_i 
                                    = ((VL_ULL(0xff) 
                                        == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                        ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_40)
                                        : ((VL_ULL(0x1ff) 
                                            == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                            ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_41)
                                            : ((VL_ULL(0x3ff) 
                                                == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_42)
                                                : (
                                                   (VL_ULL(0x7ff) 
                                                    == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                    ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_43)
                                                    : 
                                                   ((VL_ULL(0xfff) 
                                                     == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                     ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_44)
                                                     : 
                                                    ((VL_ULL(0x1fff) 
                                                      == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                      ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_45)
                                                      : 
                                                     ((VL_ULL(0x3fff) 
                                                       == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                       ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_46)
                                                       : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_47))))))));
                            } else {
                                if (((((((((VL_ULL(0xffff) 
                                            == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i) 
                                           | (VL_ULL(0x1ffff) 
                                              == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                                          | (VL_ULL(0x3ffff) 
                                             == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                                         | (VL_ULL(0x7ffff) 
                                            == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                                        | (VL_ULL(0xfffff) 
                                           == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                                       | (VL_ULL(0x1fffff) 
                                          == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                                      | (VL_ULL(0x3fffff) 
                                         == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                                     | (VL_ULL(0x7fffff) 
                                        == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i))) {
                                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_i 
                                        = ((VL_ULL(0xffff) 
                                            == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                            ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_48)
                                            : ((VL_ULL(0x1ffff) 
                                                == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_49)
                                                : (
                                                   (VL_ULL(0x3ffff) 
                                                    == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                    ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_50)
                                                    : 
                                                   ((VL_ULL(0x7ffff) 
                                                     == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                     ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_51)
                                                     : 
                                                    ((VL_ULL(0xfffff) 
                                                      == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                      ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_52)
                                                      : 
                                                     ((VL_ULL(0x1fffff) 
                                                       == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                       ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_53)
                                                       : 
                                                      ((VL_ULL(0x3fffff) 
                                                        == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                        ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_54)
                                                        : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_55))))))));
                                } else {
                                    if (((((((((VL_ULL(0xffffff) 
                                                == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i) 
                                               | (VL_ULL(0x1ffffff) 
                                                  == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                                              | (VL_ULL(0x3ffffff) 
                                                 == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                                             | (VL_ULL(0x7ffffff) 
                                                == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                                            | (VL_ULL(0xfffffff) 
                                               == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                                           | (VL_ULL(0x1fffffff) 
                                              == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                                          | (VL_ULL(0x3fffffff) 
                                             == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)) 
                                         | (VL_ULL(0x7fffffff) 
                                            == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i))) {
                                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_i 
                                            = ((VL_ULL(0xffffff) 
                                                == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_56)
                                                : (
                                                   (VL_ULL(0x1ffffff) 
                                                    == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                    ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_57)
                                                    : 
                                                   ((VL_ULL(0x3ffffff) 
                                                     == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                     ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_58)
                                                     : 
                                                    ((VL_ULL(0x7ffffff) 
                                                      == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                      ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_59)
                                                      : 
                                                     ((VL_ULL(0xfffffff) 
                                                       == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                       ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_60)
                                                       : 
                                                      ((VL_ULL(0x1fffffff) 
                                                        == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                        ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_61)
                                                        : 
                                                       ((VL_ULL(0x3fffffff) 
                                                         == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i)
                                                         ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_62)
                                                         : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_63))))))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_i = 0U;
    }
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__17(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__17\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_valid) {
        if (((((((((VL_ULL(0) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q) 
                   | (VL_ULL(1) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                  | (VL_ULL(3) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                 | (VL_ULL(7) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                | (VL_ULL(0xf) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
               | (VL_ULL(0x1f) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
              | (VL_ULL(0x3f) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
             | (VL_ULL(0x7f) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q))) {
            vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_q 
                = ((VL_ULL(0) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                    ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_0)
                    : ((VL_ULL(1) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                        ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_1)
                        : ((VL_ULL(3) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                            ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_2)
                            : ((VL_ULL(7) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_3)
                                : ((VL_ULL(0xf) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                    ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_4)
                                    : ((VL_ULL(0x1f) 
                                        == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                        ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_5)
                                        : ((VL_ULL(0x3f) 
                                            == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                            ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_6)
                                            : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_7))))))));
        } else {
            if (((((((((VL_ULL(0xff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q) 
                       | (VL_ULL(0x1ff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                      | (VL_ULL(0x3ff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                     | (VL_ULL(0x7ff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                    | (VL_ULL(0xfff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                   | (VL_ULL(0x1fff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                  | (VL_ULL(0x3fff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                 | (VL_ULL(0x7fff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q))) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_q 
                    = ((VL_ULL(0xff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                        ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_8)
                        : ((VL_ULL(0x1ff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                            ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_9)
                            : ((VL_ULL(0x3ff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_10)
                                : ((VL_ULL(0x7ff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                    ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_11)
                                    : ((VL_ULL(0xfff) 
                                        == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                        ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_12)
                                        : ((VL_ULL(0x1fff) 
                                            == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                            ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_13)
                                            : ((VL_ULL(0x3fff) 
                                                == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_14)
                                                : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_15))))))));
            } else {
                if (((((((((VL_ULL(0xffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q) 
                           | (VL_ULL(0x1ffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                          | (VL_ULL(0x3ffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                         | (VL_ULL(0x7ffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                        | (VL_ULL(0xfffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                       | (VL_ULL(0x1fffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                      | (VL_ULL(0x3fffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                     | (VL_ULL(0x7fffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q))) {
                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_q 
                        = ((VL_ULL(0xffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                            ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_16)
                            : ((VL_ULL(0x1ffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_17)
                                : ((VL_ULL(0x3ffff) 
                                    == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                    ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_18)
                                    : ((VL_ULL(0x7ffff) 
                                        == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                        ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_19)
                                        : ((VL_ULL(0xfffff) 
                                            == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                            ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_20)
                                            : ((VL_ULL(0x1fffff) 
                                                == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_21)
                                                : (
                                                   (VL_ULL(0x3fffff) 
                                                    == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                    ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_22)
                                                    : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_23))))))));
                } else {
                    if (((((((((VL_ULL(0xffffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q) 
                               | (VL_ULL(0x1ffffff) 
                                  == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                              | (VL_ULL(0x3ffffff) 
                                 == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                             | (VL_ULL(0x7ffffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                            | (VL_ULL(0xfffffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                           | (VL_ULL(0x1fffffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                          | (VL_ULL(0x3fffffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                         | (VL_ULL(0x7fffffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q))) {
                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_q 
                            = ((VL_ULL(0xffffff) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_24)
                                : ((VL_ULL(0x1ffffff) 
                                    == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                    ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_25)
                                    : ((VL_ULL(0x3ffffff) 
                                        == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                        ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_26)
                                        : ((VL_ULL(0x7ffffff) 
                                            == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                            ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_27)
                                            : ((VL_ULL(0xfffffff) 
                                                == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_28)
                                                : (
                                                   (VL_ULL(0x1fffffff) 
                                                    == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                    ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_29)
                                                    : 
                                                   ((VL_ULL(0x3fffffff) 
                                                     == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                     ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_30)
                                                     : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_31))))))));
                    } else {
                        if (((((((((VL_ULL(0) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q) 
                                   | (VL_ULL(1) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                                  | (VL_ULL(3) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                                 | (VL_ULL(7) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                                | (VL_ULL(0xf) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                               | (VL_ULL(0x1f) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                              | (VL_ULL(0x3f) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                             | (VL_ULL(0x7f) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q))) {
                            vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_q 
                                = ((VL_ULL(0) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                    ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_32)
                                    : ((VL_ULL(1) == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                        ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_33)
                                        : ((VL_ULL(3) 
                                            == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                            ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_34)
                                            : ((VL_ULL(7) 
                                                == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_35)
                                                : (
                                                   (VL_ULL(0xf) 
                                                    == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                    ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_36)
                                                    : 
                                                   ((VL_ULL(0x1f) 
                                                     == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                     ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_37)
                                                     : 
                                                    ((VL_ULL(0x3f) 
                                                      == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                      ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_38)
                                                      : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_39))))))));
                        } else {
                            if (((((((((VL_ULL(0xff) 
                                        == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q) 
                                       | (VL_ULL(0x1ff) 
                                          == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                                      | (VL_ULL(0x3ff) 
                                         == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                                     | (VL_ULL(0x7ff) 
                                        == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                                    | (VL_ULL(0xfff) 
                                       == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                                   | (VL_ULL(0x1fff) 
                                      == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                                  | (VL_ULL(0x3fff) 
                                     == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                                 | (VL_ULL(0x7fff) 
                                    == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q))) {
                                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_q 
                                    = ((VL_ULL(0xff) 
                                        == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                        ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_40)
                                        : ((VL_ULL(0x1ff) 
                                            == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                            ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_41)
                                            : ((VL_ULL(0x3ff) 
                                                == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_42)
                                                : (
                                                   (VL_ULL(0x7ff) 
                                                    == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                    ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_43)
                                                    : 
                                                   ((VL_ULL(0xfff) 
                                                     == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                     ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_44)
                                                     : 
                                                    ((VL_ULL(0x1fff) 
                                                      == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                      ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_45)
                                                      : 
                                                     ((VL_ULL(0x3fff) 
                                                       == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                       ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_46)
                                                       : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_47))))))));
                            } else {
                                if (((((((((VL_ULL(0xffff) 
                                            == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q) 
                                           | (VL_ULL(0x1ffff) 
                                              == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                                          | (VL_ULL(0x3ffff) 
                                             == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                                         | (VL_ULL(0x7ffff) 
                                            == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                                        | (VL_ULL(0xfffff) 
                                           == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                                       | (VL_ULL(0x1fffff) 
                                          == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                                      | (VL_ULL(0x3fffff) 
                                         == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                                     | (VL_ULL(0x7fffff) 
                                        == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q))) {
                                    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_q 
                                        = ((VL_ULL(0xffff) 
                                            == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                            ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_48)
                                            : ((VL_ULL(0x1ffff) 
                                                == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_49)
                                                : (
                                                   (VL_ULL(0x3ffff) 
                                                    == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                    ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_50)
                                                    : 
                                                   ((VL_ULL(0x7ffff) 
                                                     == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                     ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_51)
                                                     : 
                                                    ((VL_ULL(0xfffff) 
                                                      == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                      ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_52)
                                                      : 
                                                     ((VL_ULL(0x1fffff) 
                                                       == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                       ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_53)
                                                       : 
                                                      ((VL_ULL(0x3fffff) 
                                                        == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                        ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_54)
                                                        : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_55))))))));
                                } else {
                                    if (((((((((VL_ULL(0xffffff) 
                                                == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q) 
                                               | (VL_ULL(0x1ffffff) 
                                                  == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                                              | (VL_ULL(0x3ffffff) 
                                                 == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                                             | (VL_ULL(0x7ffffff) 
                                                == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                                            | (VL_ULL(0xfffffff) 
                                               == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                                           | (VL_ULL(0x1fffffff) 
                                              == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                                          | (VL_ULL(0x3fffffff) 
                                             == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)) 
                                         | (VL_ULL(0x7fffffff) 
                                            == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q))) {
                                        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_q 
                                            = ((VL_ULL(0xffffff) 
                                                == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_56)
                                                : (
                                                   (VL_ULL(0x1ffffff) 
                                                    == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                    ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_57)
                                                    : 
                                                   ((VL_ULL(0x3ffffff) 
                                                     == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                     ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_58)
                                                     : 
                                                    ((VL_ULL(0x7ffffff) 
                                                      == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                      ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_59)
                                                      : 
                                                     ((VL_ULL(0xfffffff) 
                                                       == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                       ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_60)
                                                       : 
                                                      ((VL_ULL(0x1fffffff) 
                                                        == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                        ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_61)
                                                        : 
                                                       ((VL_ULL(0x3fffffff) 
                                                         == vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q)
                                                         ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_62)
                                                         : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_63))))))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_q = 0U;
    }
}
