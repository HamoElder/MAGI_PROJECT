// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDePuncturing.h for the primary calling header

#include "VDePuncturing.h"
#include "VDePuncturing__Syms.h"

//==========

void VDePuncturing::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDePuncturing::eval\n"); );
    VDePuncturing__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VDePuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/DePuncturing.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VDePuncturing::_eval_initial_loop(VDePuncturing__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/DePuncturing.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VDePuncturing::_sequent__TOP__1(VDePuncturing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDePuncturing::_sequent__TOP__1\n"); );
    VDePuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->DePuncturing__DOT__when_DePuncturing_l43)))) {
        if (vlTOPp->DePuncturing__DOT__raw_data_fire) {
            vlTOPp->DePuncturing__DOT__raw_data_fragment 
                = vlTOPp->raw_data_payload_fragment;
        } else {
            if (vlTOPp->DePuncturing__DOT__de_punched_data_fire) {
                vlTOPp->DePuncturing__DOT__raw_data_fragment 
                    = vlTOPp->DePuncturing__DOT___zz_raw_data_fragment;
            }
        }
    }
    vlTOPp->DePuncturing__DOT___zz_raw_data_fragment 
        = (0xffffU & ((IData)(vlTOPp->DePuncturing__DOT__raw_data_fragment) 
                      >> 2U));
    vlTOPp->de_punched_data_payload_fragment = (3U 
                                                & (IData)(vlTOPp->DePuncturing__DOT__raw_data_fragment));
}

VL_INLINE_OPT void VDePuncturing::_sequent__TOP__2(VDePuncturing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDePuncturing::_sequent__TOP__2\n"); );
    VDePuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdly__DePuncturing__DOT__cnt;
    CData/*0:0*/ __Vdly__DePuncturing__DOT__mask_cnt;
    // Body
    __Vdly__DePuncturing__DOT__mask_cnt = vlTOPp->DePuncturing__DOT__mask_cnt;
    __Vdly__DePuncturing__DOT__cnt = vlTOPp->DePuncturing__DOT__cnt;
    if (vlTOPp->reset) {
        __Vdly__DePuncturing__DOT__mask_cnt = 0U;
    } else {
        if (vlTOPp->DePuncturing__DOT__when_DePuncturing_l43) {
            __Vdly__DePuncturing__DOT__mask_cnt = 0U;
        } else {
            if ((1U & (~ (IData)(vlTOPp->DePuncturing__DOT__raw_data_fire)))) {
                if (vlTOPp->DePuncturing__DOT__de_punched_data_fire) {
                    __Vdly__DePuncturing__DOT__mask_cnt 
                        = ((IData)(vlTOPp->DePuncturing__DOT__mask_cnt) 
                           & (IData)(vlTOPp->DePuncturing__DOT___zz_mask_cnt));
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->DePuncturing__DOT__raw_data_last = 0U;
    } else {
        if (vlTOPp->DePuncturing__DOT__when_DePuncturing_l43) {
            vlTOPp->DePuncturing__DOT__raw_data_last = 0U;
        } else {
            if (vlTOPp->DePuncturing__DOT__raw_data_fire) {
                vlTOPp->DePuncturing__DOT__raw_data_last 
                    = vlTOPp->raw_data_payload_last;
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__DePuncturing__DOT__cnt = 0U;
    } else {
        if (vlTOPp->DePuncturing__DOT__when_DePuncturing_l43) {
            __Vdly__DePuncturing__DOT__cnt = 0U;
        } else {
            if (vlTOPp->DePuncturing__DOT__raw_data_fire) {
                __Vdly__DePuncturing__DOT__cnt = 8U;
            } else {
                if (vlTOPp->DePuncturing__DOT__de_punched_data_fire) {
                    __Vdly__DePuncturing__DOT__cnt 
                        = (0xfU & ((IData)(vlTOPp->DePuncturing__DOT__cnt) 
                                   - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->DePuncturing__DOT__mask_cnt = __Vdly__DePuncturing__DOT__mask_cnt;
    vlTOPp->DePuncturing__DOT__cnt = __Vdly__DePuncturing__DOT__cnt;
    vlTOPp->DePuncturing__DOT___zz_mask_cnt = (1U & 
                                               ((IData)(1U) 
                                                + (IData)(vlTOPp->DePuncturing__DOT__mask_cnt)));
    vlTOPp->DePuncturing__DOT__when_DePuncturing_l43 
        = ((IData)(vlTOPp->DePuncturing__DOT__raw_data_last) 
           & (0U == (IData)(vlTOPp->DePuncturing__DOT__cnt)));
    vlTOPp->de_punched_data_payload_last = ((1U == (IData)(vlTOPp->DePuncturing__DOT__cnt)) 
                                            & (IData)(vlTOPp->DePuncturing__DOT__raw_data_last));
    vlTOPp->de_punched_data_valid = (0U != (IData)(vlTOPp->DePuncturing__DOT__cnt));
    vlTOPp->raw_data_ready = ((0U == (IData)(vlTOPp->DePuncturing__DOT__cnt)) 
                              & (~ (IData)(vlTOPp->DePuncturing__DOT__raw_data_last)));
}

VL_INLINE_OPT void VDePuncturing::_combo__TOP__4(VDePuncturing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDePuncturing::_combo__TOP__4\n"); );
    VDePuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->DePuncturing__DOT__de_punched_data_fire 
        = ((IData)(vlTOPp->de_punched_data_valid) & (IData)(vlTOPp->de_punched_data_ready));
    vlTOPp->DePuncturing__DOT__raw_data_fire = ((IData)(vlTOPp->raw_data_valid) 
                                                & (IData)(vlTOPp->raw_data_ready));
}

void VDePuncturing::_eval(VDePuncturing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDePuncturing::_eval\n"); );
    VDePuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VDePuncturing::_change_request(VDePuncturing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDePuncturing::_change_request\n"); );
    VDePuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VDePuncturing::_change_request_1(VDePuncturing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDePuncturing::_change_request_1\n"); );
    VDePuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VDePuncturing::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDePuncturing::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((dummy_bits & 0xfeU))) {
        Verilated::overWidthError("dummy_bits");}
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((raw_data_payload_last & 0xfeU))) {
        Verilated::overWidthError("raw_data_payload_last");}
    if (VL_UNLIKELY((de_punched_data_ready & 0xfeU))) {
        Verilated::overWidthError("de_punched_data_ready");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
