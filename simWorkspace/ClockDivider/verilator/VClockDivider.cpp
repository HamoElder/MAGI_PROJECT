// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VClockDivider.h for the primary calling header

#include "VClockDivider.h"
#include "VClockDivider__Syms.h"

//==========

void VClockDivider::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VClockDivider::eval\n"); );
    VClockDivider__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/ClockDivider.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VClockDivider::_eval_initial_loop(VClockDivider__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/ClockDivider.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VClockDivider::_sequent__TOP__1(VClockDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockDivider::_sequent__TOP__1\n"); );
    VClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdly__ClockDivider__DOT___zz_clk_out;
    CData/*6:0*/ __Vdly__ClockDivider__DOT___zz_when_ClockDivider_l101;
    CData/*0:0*/ __Vdly__ClockDivider__DOT__when_ClockDivider_l101;
    // Body
    __Vdly__ClockDivider__DOT__when_ClockDivider_l101 
        = vlTOPp->ClockDivider__DOT__when_ClockDivider_l101;
    __Vdly__ClockDivider__DOT___zz_when_ClockDivider_l101 
        = vlTOPp->ClockDivider__DOT___zz_when_ClockDivider_l101;
    __Vdly__ClockDivider__DOT___zz_clk_out = vlTOPp->ClockDivider__DOT___zz_clk_out;
    if (vlTOPp->reset) {
        __Vdly__ClockDivider__DOT___zz_clk_out = 0U;
        __Vdly__ClockDivider__DOT___zz_when_ClockDivider_l101 = 0U;
        __Vdly__ClockDivider__DOT__when_ClockDivider_l101 = 1U;
        vlTOPp->ClockDivider__DOT___zz_clk_out_1 = 0U;
    } else {
        if (vlTOPp->enable) {
            __Vdly__ClockDivider__DOT___zz_clk_out 
                = ((IData)(vlTOPp->ClockDivider__DOT__when_ClockDivider_l101)
                    ? ((7U == (IData)(vlTOPp->ClockDivider__DOT___zz_clk_out))
                        ? 0U : (IData)(vlTOPp->ClockDivider__DOT___zz___05Fzz_clk_out))
                    : ((8U == (IData)(vlTOPp->ClockDivider__DOT___zz_clk_out))
                        ? 0U : (IData)(vlTOPp->ClockDivider__DOT___zz___05Fzz_clk_out)));
            __Vdly__ClockDivider__DOT___zz_when_ClockDivider_l101 
                = ((0x56U == (IData)(vlTOPp->ClockDivider__DOT___zz_when_ClockDivider_l101))
                    ? 0U : (IData)(vlTOPp->ClockDivider__DOT___zz___05Fzz_when_ClockDivider_l101));
            __Vdly__ClockDivider__DOT__when_ClockDivider_l101 
                = (1U & (((0x56U == (IData)(vlTOPp->ClockDivider__DOT___zz_when_ClockDivider_l101)) 
                          | (0x17U == (IData)(vlTOPp->ClockDivider__DOT___zz_when_ClockDivider_l101)))
                          ? (~ (IData)(vlTOPp->ClockDivider__DOT__when_ClockDivider_l101))
                          : (IData)(vlTOPp->ClockDivider__DOT__when_ClockDivider_l101)));
            vlTOPp->ClockDivider__DOT___zz_clk_out_1 
                = ((IData)(vlTOPp->ClockDivider__DOT__when_ClockDivider_l101)
                    ? (3U >= (IData)(vlTOPp->ClockDivider__DOT___zz_clk_out))
                    : (3U >= (IData)(vlTOPp->ClockDivider__DOT___zz_clk_out)));
        }
    }
    vlTOPp->ClockDivider__DOT__when_ClockDivider_l101 
        = __Vdly__ClockDivider__DOT__when_ClockDivider_l101;
    vlTOPp->ClockDivider__DOT___zz_clk_out = __Vdly__ClockDivider__DOT___zz_clk_out;
    vlTOPp->ClockDivider__DOT___zz_when_ClockDivider_l101 
        = __Vdly__ClockDivider__DOT___zz_when_ClockDivider_l101;
    vlTOPp->ClockDivider__DOT___zz___05Fzz_clk_out 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->ClockDivider__DOT___zz_clk_out)));
    vlTOPp->ClockDivider__DOT___zz___05Fzz_when_ClockDivider_l101 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->ClockDivider__DOT___zz_when_ClockDivider_l101)));
    vlTOPp->clk_out = vlTOPp->ClockDivider__DOT___zz_clk_out_1;
}

void VClockDivider::_eval(VClockDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockDivider::_eval\n"); );
    VClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VClockDivider::_change_request(VClockDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockDivider::_change_request\n"); );
    VClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VClockDivider::_change_request_1(VClockDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockDivider::_change_request_1\n"); );
    VClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VClockDivider::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockDivider::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
