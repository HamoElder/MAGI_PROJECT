// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGMSKMod.h for the primary calling header

#include "VGMSKMod.h"
#include "VGMSKMod__Syms.h"

//==========

void VGMSKMod::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VGMSKMod::eval\n"); );
    VGMSKMod__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VGMSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/GMSKMod.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VGMSKMod::_eval_initial_loop(VGMSKMod__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/GMSKMod.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VGMSKMod::_sequent__TOP__1(VGMSKMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGMSKMod::_sequent__TOP__1\n"); );
    VGMSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__GMSKMod__DOT__symbol_filter__DOT__data_buf_1 
        = vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_1;
    vlTOPp->__Vdly__GMSKMod__DOT__symbol_filter__DOT__data_buf_0 
        = vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_0;
    vlTOPp->GMSKMod__DOT__mod_valid_next_regNext = 
        ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->GMSKMod__DOT__mod_valid_next));
    vlTOPp->mod_iq_valid = vlTOPp->GMSKMod__DOT__mod_valid_next_regNext;
    vlTOPp->GMSKMod__DOT__mod_valid_next = ((~ (IData)(vlTOPp->reset)) 
                                            & (IData)(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__raw_valid_next_regNext));
}

VL_INLINE_OPT void VGMSKMod::_sequent__TOP__2(VGMSKMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGMSKMod::_sequent__TOP__2\n"); );
    VGMSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->GMSKMod__DOT___zz_sinTable_port0 = vlTOPp->GMSKMod__DOT__sinTable
        [(0x7ffU & (IData)(vlTOPp->GMSKMod__DOT__phi_integral))];
    vlTOPp->GMSKMod__DOT___zz_cosTable_port0 = vlTOPp->GMSKMod__DOT__cosTable
        [(0x7ffU & (IData)(vlTOPp->GMSKMod__DOT__phi_integral))];
    vlTOPp->mod_iq_payload_fragment_cha_q = vlTOPp->GMSKMod__DOT___zz_sinTable_port0;
    vlTOPp->mod_iq_payload_fragment_cha_i = vlTOPp->GMSKMod__DOT___zz_cosTable_port0;
}

VL_INLINE_OPT void VGMSKMod::_sequent__TOP__5(VGMSKMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGMSKMod::_sequent__TOP__5\n"); );
    VGMSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->GMSKMod__DOT__phi_integral = 0x192U;
        vlTOPp->GMSKMod__DOT__mod_last_next_regNext = 0U;
    } else {
        if (vlTOPp->GMSKMod__DOT__mod_last_next) {
            vlTOPp->GMSKMod__DOT__phi_integral = 0x192U;
        } else {
            if (vlTOPp->GMSKMod__DOT__symbol_filter__DOT__raw_valid_next_regNext) {
                vlTOPp->GMSKMod__DOT__phi_integral 
                    = (0xfffU & (VL_LTS_III(1,12,12, 0x648U, (IData)(vlTOPp->GMSKMod__DOT__sum_value))
                                  ? ((IData)(vlTOPp->GMSKMod__DOT__sum_value) 
                                     - (IData)(0x648U))
                                  : (VL_GTS_III(1,12,12, 0U, (IData)(vlTOPp->GMSKMod__DOT__sum_value))
                                      ? ((IData)(0x648U) 
                                         + (IData)(vlTOPp->GMSKMod__DOT__sum_value))
                                      : (IData)(vlTOPp->GMSKMod__DOT__sum_value))));
            }
        }
        vlTOPp->GMSKMod__DOT__mod_last_next_regNext 
            = vlTOPp->GMSKMod__DOT__mod_last_next;
    }
    vlTOPp->mod_iq_payload_last = vlTOPp->GMSKMod__DOT__mod_last_next_regNext;
    if (vlTOPp->reset) {
        vlTOPp->GMSKMod__DOT__mod_last_next = 0U;
    } else {
        if (vlTOPp->GMSKMod__DOT__symbol_filter__DOT__raw_valid_next_regNext) {
            vlTOPp->GMSKMod__DOT__mod_last_next = vlTOPp->GMSKMod__DOT__symbol_filter__DOT__raw_last_next_regNext;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->GMSKMod__DOT__symbol_filter__DOT__filtered_data = 0U;
        vlTOPp->GMSKMod__DOT__symbol_filter__DOT__raw_valid_next_regNext = 0U;
    } else {
        if (vlTOPp->GMSKMod__DOT__symbol_filter__DOT__raw_valid_next) {
            vlTOPp->GMSKMod__DOT__symbol_filter__DOT__filtered_data 
                = (0xfffU & ((((1U == (IData)(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_0))
                                ? 0x35U : ((2U == (IData)(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_0))
                                            ? 0xfcbU
                                            : 0U)) 
                              + ((1U == (IData)(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_1))
                                  ? 0x2b8U : ((2U == (IData)(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_1))
                                               ? 0xd48U
                                               : 0U))) 
                             + ((1U == (IData)(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_2))
                                 ? 0x35U : ((2U == (IData)(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_2))
                                             ? 0xfcbU
                                             : 0U))));
        }
        vlTOPp->GMSKMod__DOT__symbol_filter__DOT__raw_valid_next_regNext 
            = vlTOPp->GMSKMod__DOT__symbol_filter__DOT__raw_valid_next;
    }
    vlTOPp->GMSKMod__DOT__sum_value = (0xfffU & ((IData)(vlTOPp->GMSKMod__DOT__phi_integral) 
                                                 + 
                                                 VL_SHIFTRS_III(12,12,32, (IData)(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__filtered_data), 3U)));
    vlTOPp->GMSKMod__DOT__symbol_filter__DOT__raw_valid_next 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->unit_data_valid));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__GMSKMod__DOT__symbol_filter__DOT__data_buf_0 = 0U;
        vlTOPp->__Vdly__GMSKMod__DOT__symbol_filter__DOT__data_buf_1 = 0U;
        vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_2 = 0U;
        vlTOPp->GMSKMod__DOT__symbol_filter__DOT__raw_last_next_regNext = 0U;
    } else {
        if (vlTOPp->GMSKMod__DOT__symbol_filter__DOT__raw_last_next) {
            vlTOPp->__Vdly__GMSKMod__DOT__symbol_filter__DOT__data_buf_0 = 0U;
            vlTOPp->__Vdly__GMSKMod__DOT__symbol_filter__DOT__data_buf_1 = 0U;
            vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_2 = 0U;
        } else {
            if (vlTOPp->unit_data_valid) {
                vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_2 
                    = vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_1;
                vlTOPp->__Vdly__GMSKMod__DOT__symbol_filter__DOT__data_buf_1 
                    = vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_0;
                vlTOPp->__Vdly__GMSKMod__DOT__symbol_filter__DOT__data_buf_0 
                    = ((IData)(vlTOPp->unit_data_payload_fragment)
                        ? 1U : 2U);
            }
        }
        vlTOPp->GMSKMod__DOT__symbol_filter__DOT__raw_last_next_regNext 
            = vlTOPp->GMSKMod__DOT__symbol_filter__DOT__raw_last_next;
    }
    vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_1 
        = vlTOPp->__Vdly__GMSKMod__DOT__symbol_filter__DOT__data_buf_1;
    vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_0 
        = vlTOPp->__Vdly__GMSKMod__DOT__symbol_filter__DOT__data_buf_0;
    if (vlTOPp->reset) {
        vlTOPp->GMSKMod__DOT__symbol_filter__DOT__raw_last_next = 0U;
    } else {
        if (vlTOPp->unit_data_valid) {
            vlTOPp->GMSKMod__DOT__symbol_filter__DOT__raw_last_next 
                = vlTOPp->unit_data_payload_last;
        }
    }
}

void VGMSKMod::_eval(VGMSKMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGMSKMod::_eval\n"); );
    VGMSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VGMSKMod::_change_request(VGMSKMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGMSKMod::_change_request\n"); );
    VGMSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VGMSKMod::_change_request_1(VGMSKMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGMSKMod::_change_request_1\n"); );
    VGMSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VGMSKMod::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGMSKMod::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((unit_data_valid & 0xfeU))) {
        Verilated::overWidthError("unit_data_valid");}
    if (VL_UNLIKELY((unit_data_payload_last & 0xfeU))) {
        Verilated::overWidthError("unit_data_payload_last");}
    if (VL_UNLIKELY((unit_data_payload_fragment & 0xfeU))) {
        Verilated::overWidthError("unit_data_payload_fragment");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
