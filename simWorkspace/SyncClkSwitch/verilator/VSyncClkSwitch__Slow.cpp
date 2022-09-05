// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSyncClkSwitch.h for the primary calling header

#include "VSyncClkSwitch.h"
#include "VSyncClkSwitch__Syms.h"

//==========

VL_CTOR_IMP(VSyncClkSwitch) {
    VSyncClkSwitch__Syms* __restrict vlSymsp = __VlSymsp = new VSyncClkSwitch__Syms(this, name());
    VSyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VSyncClkSwitch::__Vconfigure(VSyncClkSwitch__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

VSyncClkSwitch::~VSyncClkSwitch() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VSyncClkSwitch::_eval_initial(VSyncClkSwitch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncClkSwitch::_eval_initial\n"); );
    VSyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk_in_1 = (1U & (~ (IData)(vlTOPp->clk_in_1)));
    vlTOPp->__Vclklast__TOP__clk_rstn = (1U & (~ (IData)(vlTOPp->clk_rstn)));
    vlTOPp->__Vclklast__TOP__clk_in_0 = (1U & (~ (IData)(vlTOPp->clk_in_0)));
}

void VSyncClkSwitch::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncClkSwitch::final\n"); );
    // Variables
    VSyncClkSwitch__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSyncClkSwitch::_eval_settle(VSyncClkSwitch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncClkSwitch::_eval_settle\n"); );
    VSyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void VSyncClkSwitch::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncClkSwitch::_ctor_var_reset\n"); );
    // Body
    clk_in_0 = 0;
    clk_in_1 = 0;
    clk_rstn = 0;
    select_1 = VL_RAND_RESET_I(1);
    clk_out = VL_RAND_RESET_I(1);
    SyncClkSwitch__DOT__negClkArea1_clk_sel_1 = VL_RAND_RESET_I(1);
    SyncClkSwitch__DOT__negClkArea0_clk_sel_0 = VL_RAND_RESET_I(1);
    __Vdly__SyncClkSwitch__DOT__negClkArea0_clk_sel_0 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
