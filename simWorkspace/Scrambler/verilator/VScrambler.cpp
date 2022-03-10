// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VScrambler.h for the primary calling header

#include "VScrambler.h"
#include "VScrambler__Syms.h"

//==========

void VScrambler::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VScrambler::eval\n"); );
    VScrambler__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VScrambler* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/Scrambler.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VScrambler::_eval_initial_loop(VScrambler__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/Scrambler.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VScrambler::_sequent__TOP__1(VScrambler__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VScrambler::_sequent__TOP__1\n"); );
    VScrambler* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->Scrambler__DOT__scram_valid = 0U;
    } else {
        if (vlTOPp->init_state_valid) {
            vlTOPp->Scrambler__DOT__scram_valid = 0U;
        } else {
            if (vlTOPp->scram_data_ready) {
                vlTOPp->Scrambler__DOT__scram_valid = 1U;
            }
        }
    }
    vlTOPp->scram_data_valid = vlTOPp->Scrambler__DOT__scram_valid;
}

VL_INLINE_OPT void VScrambler::_sequent__TOP__2(VScrambler__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VScrambler::_sequent__TOP__2\n"); );
    VScrambler* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->init_state_valid)))) {
        if (vlTOPp->scram_data_ready) {
            vlTOPp->Scrambler__DOT__scram_data = (((IData)(vlTOPp->Scrambler__DOT__feed_back_7) 
                                                   << 7U) 
                                                  | (((IData)(vlTOPp->Scrambler__DOT__feed_back_6) 
                                                      << 6U) 
                                                     | (((IData)(vlTOPp->Scrambler__DOT__feed_back_5) 
                                                         << 5U) 
                                                        | (((IData)(vlTOPp->Scrambler__DOT__feed_back_4) 
                                                            << 4U) 
                                                           | (((IData)(vlTOPp->Scrambler__DOT__feed_back_3) 
                                                               << 3U) 
                                                              | (((IData)(vlTOPp->Scrambler__DOT__feed_back_2) 
                                                                  << 2U) 
                                                                 | (((IData)(vlTOPp->Scrambler__DOT__feed_back_1) 
                                                                     << 1U) 
                                                                    | (IData)(vlTOPp->Scrambler__DOT__feed_back_0))))))));
        }
    }
    if (vlTOPp->init_state_valid) {
        vlTOPp->Scrambler__DOT__scram_state = vlTOPp->init_state_payload;
    } else {
        if (vlTOPp->scram_data_ready) {
            vlTOPp->Scrambler__DOT__scram_state = (
                                                   (0x7eU 
                                                    & ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_6) 
                                                       << 1U)) 
                                                   | (IData)(vlTOPp->Scrambler__DOT__feed_back_7));
        }
    }
    vlTOPp->scram_data_payload = vlTOPp->Scrambler__DOT__scram_data;
    vlTOPp->Scrambler__DOT__feed_back_0 = (1U & (((IData)(vlTOPp->Scrambler__DOT__scram_state) 
                                                  >> 6U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->Scrambler__DOT__scram_state) 
                                                  >> 3U)));
    vlTOPp->Scrambler__DOT___zz_r_scr_0 = (((IData)(vlTOPp->Scrambler__DOT__scram_state) 
                                            << 1U) 
                                           | (IData)(vlTOPp->Scrambler__DOT__feed_back_0));
    vlTOPp->Scrambler__DOT__feed_back_1 = (1U & (((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_0) 
                                                  >> 6U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_0) 
                                                  >> 3U)));
    vlTOPp->Scrambler__DOT___zz_r_scr_1 = ((0xfeU & 
                                            ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_0) 
                                             << 1U)) 
                                           | (IData)(vlTOPp->Scrambler__DOT__feed_back_1));
    vlTOPp->Scrambler__DOT__feed_back_2 = (1U & (((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_1) 
                                                  >> 6U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_1) 
                                                  >> 3U)));
    vlTOPp->Scrambler__DOT___zz_r_scr_2 = ((0xfeU & 
                                            ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_1) 
                                             << 1U)) 
                                           | (IData)(vlTOPp->Scrambler__DOT__feed_back_2));
    vlTOPp->Scrambler__DOT__feed_back_3 = (1U & (((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_2) 
                                                  >> 6U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_2) 
                                                  >> 3U)));
    vlTOPp->Scrambler__DOT___zz_r_scr_3 = ((0xfeU & 
                                            ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_2) 
                                             << 1U)) 
                                           | (IData)(vlTOPp->Scrambler__DOT__feed_back_3));
    vlTOPp->Scrambler__DOT__feed_back_4 = (1U & (((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_3) 
                                                  >> 6U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_3) 
                                                  >> 3U)));
    vlTOPp->Scrambler__DOT___zz_r_scr_4 = ((0xfeU & 
                                            ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_3) 
                                             << 1U)) 
                                           | (IData)(vlTOPp->Scrambler__DOT__feed_back_4));
    vlTOPp->Scrambler__DOT__feed_back_5 = (1U & (((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_4) 
                                                  >> 6U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_4) 
                                                  >> 3U)));
    vlTOPp->Scrambler__DOT___zz_r_scr_5 = ((0xfeU & 
                                            ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_4) 
                                             << 1U)) 
                                           | (IData)(vlTOPp->Scrambler__DOT__feed_back_5));
    vlTOPp->Scrambler__DOT__feed_back_6 = (1U & (((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_5) 
                                                  >> 6U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_5) 
                                                  >> 3U)));
    vlTOPp->Scrambler__DOT___zz_r_scr_6 = ((0xfeU & 
                                            ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_5) 
                                             << 1U)) 
                                           | (IData)(vlTOPp->Scrambler__DOT__feed_back_6));
    vlTOPp->Scrambler__DOT__feed_back_7 = (1U & (((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_6) 
                                                  >> 6U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_6) 
                                                  >> 3U)));
}

void VScrambler::_eval(VScrambler__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VScrambler::_eval\n"); );
    VScrambler* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VScrambler::_change_request(VScrambler__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VScrambler::_change_request\n"); );
    VScrambler* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VScrambler::_change_request_1(VScrambler__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VScrambler::_change_request_1\n"); );
    VScrambler* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VScrambler::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VScrambler::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((init_state_valid & 0xfeU))) {
        Verilated::overWidthError("init_state_valid");}
    if (VL_UNLIKELY((init_state_payload & 0x80U))) {
        Verilated::overWidthError("init_state_payload");}
    if (VL_UNLIKELY((scram_data_ready & 0xfeU))) {
        Verilated::overWidthError("scram_data_ready");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
