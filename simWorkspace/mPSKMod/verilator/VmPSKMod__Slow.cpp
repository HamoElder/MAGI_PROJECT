// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmPSKMod.h for the primary calling header

#include "VmPSKMod.h"
#include "VmPSKMod__Syms.h"

//==========

VL_CTOR_IMP(VmPSKMod) {
    VmPSKMod__Syms* __restrict vlSymsp = __VlSymsp = new VmPSKMod__Syms(this, name());
    VmPSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VmPSKMod::__Vconfigure(VmPSKMod__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VmPSKMod::~VmPSKMod() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VmPSKMod::_settle__TOP__2(VmPSKMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmPSKMod::_settle__TOP__2\n"); );
    VmPSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mod_iq_valid = vlTOPp->mPSKMod__DOT__unit_valid;
    vlTOPp->mPSKMod__DOT___zz___05Fzz_mod_iq_0 = ((0U 
                                                   == (IData)(vlTOPp->mPSKMod__DOT__unit_data))
                                                   ? 0xa7a7U
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlTOPp->mPSKMod__DOT__unit_data))
                                                    ? 0xa759U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlTOPp->mPSKMod__DOT__unit_data))
                                                     ? 0x59a7U
                                                     : 0x5959U)));
    vlTOPp->mod_iq_payload_cha_i = ((IData)(vlTOPp->mPSKMod__DOT__unit_valid)
                                     ? (0xffU & ((IData)(vlTOPp->mPSKMod__DOT___zz___05Fzz_mod_iq_0) 
                                                 >> 8U))
                                     : 0U);
    vlTOPp->mod_iq_payload_cha_q = ((IData)(vlTOPp->mPSKMod__DOT__unit_valid)
                                     ? (0xffU & (IData)(vlTOPp->mPSKMod__DOT___zz___05Fzz_mod_iq_0))
                                     : 0U);
}

void VmPSKMod::_eval_initial(VmPSKMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmPSKMod::_eval_initial\n"); );
    VmPSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VmPSKMod::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmPSKMod::final\n"); );
    // Variables
    VmPSKMod__Syms* __restrict vlSymsp = this->__VlSymsp;
    VmPSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VmPSKMod::_eval_settle(VmPSKMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmPSKMod::_eval_settle\n"); );
    VmPSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VmPSKMod::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmPSKMod::_ctor_var_reset\n"); );
    // Body
    unit_data_valid = VL_RAND_RESET_I(1);
    unit_data_payload = VL_RAND_RESET_I(2);
    mod_iq_valid = VL_RAND_RESET_I(1);
    mod_iq_payload_cha_i = VL_RAND_RESET_I(8);
    mod_iq_payload_cha_q = VL_RAND_RESET_I(8);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    mPSKMod__DOT___zz___05Fzz_mod_iq_0 = VL_RAND_RESET_I(16);
    mPSKMod__DOT__unit_data = VL_RAND_RESET_I(2);
    mPSKMod__DOT__unit_valid = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
