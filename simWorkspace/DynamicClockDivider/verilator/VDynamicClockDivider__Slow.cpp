// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDynamicClockDivider.h for the primary calling header

#include "VDynamicClockDivider.h"
#include "VDynamicClockDivider__Syms.h"

//==========

VL_CTOR_IMP(VDynamicClockDivider) {
    VDynamicClockDivider__Syms* __restrict vlSymsp = __VlSymsp = new VDynamicClockDivider__Syms(this, name());
    VDynamicClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VDynamicClockDivider::__Vconfigure(VDynamicClockDivider__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VDynamicClockDivider::~VDynamicClockDivider() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VDynamicClockDivider::_settle__TOP__3(VDynamicClockDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDynamicClockDivider::_settle__TOP__3\n"); );
    VDynamicClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->DynamicClockDivider__DOT___zz_pos_cnt_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->DynamicClockDivider__DOT__pos_cnt)));
    vlTOPp->DynamicClockDivider__DOT___zz_negEdgeClockArea_neg_cnt_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->DynamicClockDivider__DOT__negEdgeClockArea_neg_cnt)));
    vlTOPp->clk_out = ((0U != (IData)(vlTOPp->divisor)) 
                       & ((1U & (IData)(vlTOPp->divisor))
                           ? ((IData)(vlTOPp->DynamicClockDivider__DOT__clk_pos_buf) 
                              | (IData)(vlTOPp->DynamicClockDivider__DOT__negEdgeClockArea_clk_neg_buf))
                           : (IData)(vlTOPp->DynamicClockDivider__DOT__clk_out_buf)));
}

void VDynamicClockDivider::_eval_initial(VDynamicClockDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDynamicClockDivider::_eval_initial\n"); );
    VDynamicClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = (1U & (~ (IData)(vlTOPp->clk)));
    vlTOPp->__Vclklast__TOP__reset = (1U & (~ (IData)(vlTOPp->reset)));
}

void VDynamicClockDivider::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDynamicClockDivider::final\n"); );
    // Variables
    VDynamicClockDivider__Syms* __restrict vlSymsp = this->__VlSymsp;
    VDynamicClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VDynamicClockDivider::_eval_settle(VDynamicClockDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDynamicClockDivider::_eval_settle\n"); );
    VDynamicClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void VDynamicClockDivider::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDynamicClockDivider::_ctor_var_reset\n"); );
    // Body
    enable = VL_RAND_RESET_I(1);
    divisor = VL_RAND_RESET_I(4);
    clk_out = VL_RAND_RESET_I(1);
    clk = 0;
    reset = 0;
    DynamicClockDivider__DOT___zz_pos_cnt_1 = VL_RAND_RESET_I(4);
    DynamicClockDivider__DOT___zz_negEdgeClockArea_neg_cnt_1 = VL_RAND_RESET_I(4);
    DynamicClockDivider__DOT__pos_cnt = VL_RAND_RESET_I(4);
    DynamicClockDivider__DOT__clk_out_buf = VL_RAND_RESET_I(1);
    DynamicClockDivider__DOT__clk_pos_buf = VL_RAND_RESET_I(1);
    DynamicClockDivider__DOT__negEdgeClockArea_clk_neg_buf = VL_RAND_RESET_I(1);
    DynamicClockDivider__DOT__negEdgeClockArea_neg_cnt = VL_RAND_RESET_I(4);
    __Vm_traceActivity = 0;
}
