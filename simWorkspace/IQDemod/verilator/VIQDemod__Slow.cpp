// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIQDemod.h for the primary calling header

#include "VIQDemod.h"
#include "VIQDemod__Syms.h"

//==========

VL_CTOR_IMP(VIQDemod) {
    VIQDemod__Syms* __restrict vlSymsp = __VlSymsp = new VIQDemod__Syms(this, name());
    VIQDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VIQDemod::__Vconfigure(VIQDemod__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VIQDemod::~VIQDemod() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VIQDemod::_settle__TOP__3(VIQDemod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQDemod::_settle__TOP__3\n"); );
    VIQDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->unit_data_valid = vlTOPp->IQDemod__DOT__unit_valid;
    vlTOPp->unit_data_payload = (((IData)(vlTOPp->IQDemod__DOT__unit_data_i) 
                                  << 1U) | (IData)(vlTOPp->IQDemod__DOT__unit_data_q));
}

void VIQDemod::_eval_initial(VIQDemod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQDemod::_eval_initial\n"); );
    VIQDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VIQDemod::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQDemod::final\n"); );
    // Variables
    VIQDemod__Syms* __restrict vlSymsp = this->__VlSymsp;
    VIQDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIQDemod::_eval_settle(VIQDemod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQDemod::_eval_settle\n"); );
    VIQDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void VIQDemod::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQDemod::_ctor_var_reset\n"); );
    // Body
    unit_data_valid = VL_RAND_RESET_I(1);
    unit_data_payload = VL_RAND_RESET_I(8);
    mod_iq_valid = VL_RAND_RESET_I(1);
    mod_iq_payload_cha_i = VL_RAND_RESET_I(16);
    mod_iq_payload_cha_q = VL_RAND_RESET_I(16);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    IQDemod__DOT__demod_data_i = VL_RAND_RESET_I(16);
    IQDemod__DOT__demod_valid_i = VL_RAND_RESET_I(1);
    IQDemod__DOT__demod_data_q = VL_RAND_RESET_I(16);
    IQDemod__DOT__demod_valid_q = VL_RAND_RESET_I(1);
    IQDemod__DOT__compTable_i = VL_RAND_RESET_I(1);
    IQDemod__DOT__codeTable_q = VL_RAND_RESET_I(1);
    IQDemod__DOT__demod_valid = VL_RAND_RESET_I(1);
    IQDemod__DOT__unit_data_i = VL_RAND_RESET_I(1);
    IQDemod__DOT__unit_data_q = VL_RAND_RESET_I(1);
    IQDemod__DOT__unit_valid = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
