// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncClkSwitch.h for the primary calling header

#include "VAsyncClkSwitch.h"
#include "VAsyncClkSwitch__Syms.h"

//==========

VL_CTOR_IMP(VAsyncClkSwitch) {
    VAsyncClkSwitch__Syms* __restrict vlSymsp = __VlSymsp = new VAsyncClkSwitch__Syms(this, name());
    VAsyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VAsyncClkSwitch::__Vconfigure(VAsyncClkSwitch__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

VAsyncClkSwitch::~VAsyncClkSwitch() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VAsyncClkSwitch::_eval_initial(VAsyncClkSwitch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncClkSwitch::_eval_initial\n"); );
    VAsyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk_in_1 = (1U & (~ (IData)(vlTOPp->clk_in_1)));
    vlTOPp->__Vclklast__TOP__clk_rstn = (1U & (~ (IData)(vlTOPp->clk_rstn)));
    vlTOPp->__Vclklast__TOP__clk_in_0 = (1U & (~ (IData)(vlTOPp->clk_in_0)));
}

void VAsyncClkSwitch::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncClkSwitch::final\n"); );
    // Variables
    VAsyncClkSwitch__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAsyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAsyncClkSwitch::_eval_settle(VAsyncClkSwitch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncClkSwitch::_eval_settle\n"); );
    VAsyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__5(vlSymsp);
}

void VAsyncClkSwitch::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncClkSwitch::_ctor_var_reset\n"); );
    // Body
    clk_in_0 = 0;
    clk_in_1 = 0;
    clk_rstn = 0;
    select_1 = VL_RAND_RESET_I(1);
    clk_out = VL_RAND_RESET_I(1);
    AsyncClkSwitch__DOT__posClkArea1_clk_sel_1 = VL_RAND_RESET_I(1);
    AsyncClkSwitch__DOT__posClkArea0_clk_sel_0 = VL_RAND_RESET_I(1);
    AsyncClkSwitch__DOT__negClkArea0_clk_sel_0_buf = VL_RAND_RESET_I(1);
    AsyncClkSwitch__DOT__negClkArea1_clk_sel_1_buf = VL_RAND_RESET_I(1);
    __Vdly__AsyncClkSwitch__DOT__posClkArea0_clk_sel_0 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
