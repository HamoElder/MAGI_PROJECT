// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIQMixer.h for the primary calling header

#include "VIQMixer.h"
#include "VIQMixer__Syms.h"

//==========

VL_CTOR_IMP(VIQMixer) {
    VIQMixer__Syms* __restrict vlSymsp = __VlSymsp = new VIQMixer__Syms(this, name());
    VIQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VIQMixer::__Vconfigure(VIQMixer__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VIQMixer::~VIQMixer() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VIQMixer::_settle__TOP__2(VIQMixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQMixer::_settle__TOP__2\n"); );
    VIQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->if_iq_0_valid = vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__if_iq_valid_1;
    vlTOPp->if_iq_0_payload = vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__if_iq_data;
}

void VIQMixer::_eval_initial(VIQMixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQMixer::_eval_initial\n"); );
    VIQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VIQMixer::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQMixer::final\n"); );
    // Variables
    VIQMixer__Syms* __restrict vlSymsp = this->__VlSymsp;
    VIQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIQMixer::_eval_settle(VIQMixer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQMixer::_eval_settle\n"); );
    VIQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VIQMixer::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIQMixer::_ctor_var_reset\n"); );
    // Body
    base_iq_0_valid = VL_RAND_RESET_I(1);
    base_iq_0_payload_cha_i = VL_RAND_RESET_I(16);
    base_iq_0_payload_cha_q = VL_RAND_RESET_I(16);
    carries_iq_valid = VL_RAND_RESET_I(1);
    carries_iq_payload_cha_i = VL_RAND_RESET_I(16);
    carries_iq_payload_cha_q = VL_RAND_RESET_I(16);
    if_iq_0_valid = VL_RAND_RESET_I(1);
    if_iq_0_payload = VL_RAND_RESET_I(32);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    IQMixer__DOT__iQMixerCore_1__DOT__base_i_data = VL_RAND_RESET_I(16);
    IQMixer__DOT__iQMixerCore_1__DOT__base_q_data = VL_RAND_RESET_I(16);
    IQMixer__DOT__iQMixerCore_1__DOT__carrier_i_data = VL_RAND_RESET_I(16);
    IQMixer__DOT__iQMixerCore_1__DOT__carrier_q_data = VL_RAND_RESET_I(16);
    IQMixer__DOT__iQMixerCore_1__DOT__if_iq_valid_1 = VL_RAND_RESET_I(1);
    IQMixer__DOT__iQMixerCore_1__DOT__if_i_data = VL_RAND_RESET_I(32);
    IQMixer__DOT__iQMixerCore_1__DOT__if_q_data = VL_RAND_RESET_I(32);
    IQMixer__DOT__iQMixerCore_1__DOT__if_iq_data = VL_RAND_RESET_I(32);
    IQMixer__DOT__iQMixerCore_1__DOT__iq_en = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
