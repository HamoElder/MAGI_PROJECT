// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDynamicClockDivider.h for the primary calling header

#include "VDynamicClockDivider.h"
#include "VDynamicClockDivider__Syms.h"

//==========

void VDynamicClockDivider::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDynamicClockDivider::eval\n"); );
    VDynamicClockDivider__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VDynamicClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/DynamicClockDivider.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VDynamicClockDivider::_eval_initial_loop(VDynamicClockDivider__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/DynamicClockDivider.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VDynamicClockDivider::_sequent__TOP__1(VDynamicClockDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDynamicClockDivider::_sequent__TOP__1\n"); );
    VDynamicClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__DynamicClockDivider__DOT__negEdgeClockArea_clk_neg_buf;
    CData/*3:0*/ __Vdly__DynamicClockDivider__DOT__negEdgeClockArea_neg_cnt;
    // Body
    __Vdly__DynamicClockDivider__DOT__negEdgeClockArea_neg_cnt 
        = vlTOPp->DynamicClockDivider__DOT__negEdgeClockArea_neg_cnt;
    __Vdly__DynamicClockDivider__DOT__negEdgeClockArea_clk_neg_buf 
        = vlTOPp->DynamicClockDivider__DOT__negEdgeClockArea_clk_neg_buf;
    __Vdly__DynamicClockDivider__DOT__negEdgeClockArea_neg_cnt 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->enable)
                                           ? (((IData)(vlTOPp->DynamicClockDivider__DOT__negEdgeClockArea_neg_cnt) 
                                               == (0xfU 
                                                   & ((IData)(vlTOPp->divisor) 
                                                      - (IData)(1U))))
                                               ? 0U
                                               : (IData)(vlTOPp->DynamicClockDivider__DOT___zz_negEdgeClockArea_neg_cnt_1))
                                           : 0U));
    if (vlTOPp->reset) {
        __Vdly__DynamicClockDivider__DOT__negEdgeClockArea_clk_neg_buf = 0U;
    } else {
        if (vlTOPp->enable) {
            if ((((IData)(vlTOPp->DynamicClockDivider__DOT__negEdgeClockArea_neg_cnt) 
                  == (0xfU & ((IData)(vlTOPp->divisor) 
                              - (IData)(1U)))) | ((IData)(vlTOPp->DynamicClockDivider__DOT__negEdgeClockArea_neg_cnt) 
                                                  == 
                                                  (7U 
                                                   & (((IData)(vlTOPp->divisor) 
                                                       - (IData)(1U)) 
                                                      >> 1U))))) {
                __Vdly__DynamicClockDivider__DOT__negEdgeClockArea_clk_neg_buf 
                    = (1U & (~ (IData)(vlTOPp->DynamicClockDivider__DOT__negEdgeClockArea_clk_neg_buf)));
            }
        } else {
            __Vdly__DynamicClockDivider__DOT__negEdgeClockArea_clk_neg_buf = 0U;
        }
    }
    vlTOPp->DynamicClockDivider__DOT__negEdgeClockArea_neg_cnt 
        = __Vdly__DynamicClockDivider__DOT__negEdgeClockArea_neg_cnt;
    vlTOPp->DynamicClockDivider__DOT__negEdgeClockArea_clk_neg_buf 
        = __Vdly__DynamicClockDivider__DOT__negEdgeClockArea_clk_neg_buf;
    vlTOPp->DynamicClockDivider__DOT___zz_negEdgeClockArea_neg_cnt_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->DynamicClockDivider__DOT__negEdgeClockArea_neg_cnt)));
}

VL_INLINE_OPT void VDynamicClockDivider::_sequent__TOP__2(VDynamicClockDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDynamicClockDivider::_sequent__TOP__2\n"); );
    VDynamicClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__DynamicClockDivider__DOT__clk_pos_buf;
    CData/*0:0*/ __Vdly__DynamicClockDivider__DOT__clk_out_buf;
    CData/*3:0*/ __Vdly__DynamicClockDivider__DOT__pos_cnt;
    // Body
    __Vdly__DynamicClockDivider__DOT__pos_cnt = vlTOPp->DynamicClockDivider__DOT__pos_cnt;
    __Vdly__DynamicClockDivider__DOT__clk_out_buf = vlTOPp->DynamicClockDivider__DOT__clk_out_buf;
    __Vdly__DynamicClockDivider__DOT__clk_pos_buf = vlTOPp->DynamicClockDivider__DOT__clk_pos_buf;
    __Vdly__DynamicClockDivider__DOT__pos_cnt = ((IData)(vlTOPp->reset)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlTOPp->enable)
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->divisor))
                                                    ? 
                                                   (((IData)(vlTOPp->DynamicClockDivider__DOT__pos_cnt) 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlTOPp->divisor) 
                                                         - (IData)(1U))))
                                                     ? 0U
                                                     : (IData)(vlTOPp->DynamicClockDivider__DOT___zz_pos_cnt_1))
                                                    : 
                                                   (((IData)(vlTOPp->DynamicClockDivider__DOT__pos_cnt) 
                                                     == 
                                                     (7U 
                                                      & (((IData)(vlTOPp->divisor) 
                                                          >> 1U) 
                                                         - (IData)(1U))))
                                                     ? 0U
                                                     : (IData)(vlTOPp->DynamicClockDivider__DOT___zz_pos_cnt_1)))
                                                   : 0U));
    if (vlTOPp->reset) {
        __Vdly__DynamicClockDivider__DOT__clk_out_buf = 0U;
    } else {
        if (vlTOPp->enable) {
            if ((1U & (~ (IData)(vlTOPp->divisor)))) {
                if (((IData)(vlTOPp->DynamicClockDivider__DOT__pos_cnt) 
                     == (7U & (((IData)(vlTOPp->divisor) 
                                >> 1U) - (IData)(1U))))) {
                    __Vdly__DynamicClockDivider__DOT__clk_out_buf 
                        = (1U & (~ (IData)(vlTOPp->DynamicClockDivider__DOT__clk_out_buf)));
                }
            }
        } else {
            __Vdly__DynamicClockDivider__DOT__clk_out_buf = 0U;
        }
    }
    if (vlTOPp->reset) {
        __Vdly__DynamicClockDivider__DOT__clk_pos_buf = 0U;
    } else {
        if (vlTOPp->enable) {
            if ((1U & (IData)(vlTOPp->divisor))) {
                if ((((IData)(vlTOPp->DynamicClockDivider__DOT__pos_cnt) 
                      == (0xfU & ((IData)(vlTOPp->divisor) 
                                  - (IData)(1U)))) 
                     | ((IData)(vlTOPp->DynamicClockDivider__DOT__pos_cnt) 
                        == (7U & (((IData)(vlTOPp->divisor) 
                                   - (IData)(1U)) >> 1U))))) {
                    __Vdly__DynamicClockDivider__DOT__clk_pos_buf 
                        = (1U & (~ (IData)(vlTOPp->DynamicClockDivider__DOT__clk_pos_buf)));
                }
            }
        } else {
            __Vdly__DynamicClockDivider__DOT__clk_pos_buf = 0U;
        }
    }
    vlTOPp->DynamicClockDivider__DOT__clk_out_buf = __Vdly__DynamicClockDivider__DOT__clk_out_buf;
    vlTOPp->DynamicClockDivider__DOT__pos_cnt = __Vdly__DynamicClockDivider__DOT__pos_cnt;
    vlTOPp->DynamicClockDivider__DOT__clk_pos_buf = __Vdly__DynamicClockDivider__DOT__clk_pos_buf;
    vlTOPp->DynamicClockDivider__DOT___zz_pos_cnt_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->DynamicClockDivider__DOT__pos_cnt)));
}

VL_INLINE_OPT void VDynamicClockDivider::_combo__TOP__4(VDynamicClockDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDynamicClockDivider::_combo__TOP__4\n"); );
    VDynamicClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->clk_out = ((0U != (IData)(vlTOPp->divisor)) 
                       & ((1U & (IData)(vlTOPp->divisor))
                           ? ((IData)(vlTOPp->DynamicClockDivider__DOT__clk_pos_buf) 
                              | (IData)(vlTOPp->DynamicClockDivider__DOT__negEdgeClockArea_clk_neg_buf))
                           : (IData)(vlTOPp->DynamicClockDivider__DOT__clk_out_buf)));
}

void VDynamicClockDivider::_eval(VDynamicClockDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDynamicClockDivider::_eval\n"); );
    VDynamicClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk)) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VDynamicClockDivider::_change_request(VDynamicClockDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDynamicClockDivider::_change_request\n"); );
    VDynamicClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VDynamicClockDivider::_change_request_1(VDynamicClockDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDynamicClockDivider::_change_request_1\n"); );
    VDynamicClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VDynamicClockDivider::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDynamicClockDivider::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
    if (VL_UNLIKELY((divisor & 0xf0U))) {
        Verilated::overWidthError("divisor");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
