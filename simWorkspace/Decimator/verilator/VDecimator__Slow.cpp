// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDecimator.h for the primary calling header

#include "VDecimator.h"
#include "VDecimator__Syms.h"

//==========

VL_CTOR_IMP(VDecimator) {
    VDecimator__Syms* __restrict vlSymsp = __VlSymsp = new VDecimator__Syms(this, name());
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VDecimator::__Vconfigure(VDecimator__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VDecimator::~VDecimator() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VDecimator::_settle__TOP__3(VDecimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimator::_settle__TOP__3\n"); );
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Decimator__DOT___zz_cnt = (7U & ((IData)(1U) 
                                             + (IData)(vlTOPp->Decimator__DOT__cnt)));
    vlTOPp->out_payload = vlTOPp->Decimator__DOT__out_data;
    vlTOPp->out_valid = vlTOPp->Decimator__DOT__out_valid_1;
}

void VDecimator::_eval_initial(VDecimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimator::_eval_initial\n"); );
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VDecimator::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimator::final\n"); );
    // Variables
    VDecimator__Syms* __restrict vlSymsp = this->__VlSymsp;
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VDecimator::_eval_settle(VDecimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimator::_eval_settle\n"); );
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void VDecimator::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimator::_ctor_var_reset\n"); );
    // Body
    in_valid = VL_RAND_RESET_I(1);
    in_payload = VL_RAND_RESET_I(12);
    out_valid = VL_RAND_RESET_I(1);
    out_payload = VL_RAND_RESET_I(12);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    Decimator__DOT___zz_cnt = VL_RAND_RESET_I(3);
    Decimator__DOT__cnt = VL_RAND_RESET_I(3);
    Decimator__DOT__out_data = VL_RAND_RESET_I(12);
    Decimator__DOT__out_valid_1 = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
