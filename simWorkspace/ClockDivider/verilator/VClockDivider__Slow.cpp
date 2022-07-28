// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VClockDivider.h for the primary calling header

#include "VClockDivider.h"
#include "VClockDivider__Syms.h"

//==========

VL_CTOR_IMP(VClockDivider) {
    VClockDivider__Syms* __restrict vlSymsp = __VlSymsp = new VClockDivider__Syms(this, name());
    VClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VClockDivider::__Vconfigure(VClockDivider__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VClockDivider::~VClockDivider() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VClockDivider::_settle__TOP__2(VClockDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockDivider::_settle__TOP__2\n"); );
    VClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ClockDivider__DOT___zz___05Fzz_clk_out 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->ClockDivider__DOT___zz_clk_out)));
    vlTOPp->ClockDivider__DOT___zz___05Fzz_when_ClockDivider_l101 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->ClockDivider__DOT___zz_when_ClockDivider_l101)));
    vlTOPp->clk_out = vlTOPp->ClockDivider__DOT___zz_clk_out_1;
}

void VClockDivider::_eval_initial(VClockDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockDivider::_eval_initial\n"); );
    VClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = (1U & (~ (IData)(vlTOPp->clk)));
    vlTOPp->__Vclklast__TOP__reset = (1U & (~ (IData)(vlTOPp->reset)));
}

void VClockDivider::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockDivider::final\n"); );
    // Variables
    VClockDivider__Syms* __restrict vlSymsp = this->__VlSymsp;
    VClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VClockDivider::_eval_settle(VClockDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockDivider::_eval_settle\n"); );
    VClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VClockDivider::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockDivider::_ctor_var_reset\n"); );
    // Body
    enable = VL_RAND_RESET_I(1);
    clk_out = VL_RAND_RESET_I(1);
    clk = 0;
    reset = 0;
    ClockDivider__DOT___zz___05Fzz_clk_out = VL_RAND_RESET_I(4);
    ClockDivider__DOT___zz___05Fzz_when_ClockDivider_l101 = VL_RAND_RESET_I(7);
    ClockDivider__DOT___zz_clk_out = VL_RAND_RESET_I(4);
    ClockDivider__DOT___zz_when_ClockDivider_l101 = VL_RAND_RESET_I(7);
    ClockDivider__DOT__when_ClockDivider_l101 = VL_RAND_RESET_I(1);
    ClockDivider__DOT___zz_clk_out_1 = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
