// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmQAMMod.h for the primary calling header

#include "VmQAMMod.h"
#include "VmQAMMod__Syms.h"

//==========

VL_CTOR_IMP(VmQAMMod) {
    VmQAMMod__Syms* __restrict vlSymsp = __VlSymsp = new VmQAMMod__Syms(this, name());
    VmQAMMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VmQAMMod::__Vconfigure(VmQAMMod__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VmQAMMod::~VmQAMMod() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VmQAMMod::_settle__TOP__2(VmQAMMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmQAMMod::_settle__TOP__2\n"); );
    VmQAMMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mod_iq_valid = vlTOPp->mQAMMod__DOT__unit_valid;
    vlTOPp->mod_iq_payload_cha_i = ((IData)(vlTOPp->mQAMMod__DOT__unit_valid)
                                     ? ((0U == (3U 
                                                & ((IData)(vlTOPp->mQAMMod__DOT__unit_data) 
                                                   >> 2U)))
                                         ? 0xc34aU : 
                                        ((1U == (3U 
                                                 & ((IData)(vlTOPp->mQAMMod__DOT__unit_data) 
                                                    >> 2U)))
                                          ? 0xd4a3U
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlTOPp->mQAMMod__DOT__unit_data) 
                                                >> 2U)))
                                              ? 0xf754U
                                              : 0xe5fbU)))
                                     : 0U);
    vlTOPp->mod_iq_payload_cha_q = ((IData)(vlTOPp->mQAMMod__DOT__unit_valid)
                                     ? ((0U == (3U 
                                                & (IData)(vlTOPp->mQAMMod__DOT__unit_data)))
                                         ? 0xc34aU : 
                                        ((1U == (3U 
                                                 & (IData)(vlTOPp->mQAMMod__DOT__unit_data)))
                                          ? 0xd4a3U
                                          : ((2U == 
                                              (3U & (IData)(vlTOPp->mQAMMod__DOT__unit_data)))
                                              ? 0xf754U
                                              : 0xe5fbU)))
                                     : 0U);
}

void VmQAMMod::_eval_initial(VmQAMMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmQAMMod::_eval_initial\n"); );
    VmQAMMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VmQAMMod::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmQAMMod::final\n"); );
    // Variables
    VmQAMMod__Syms* __restrict vlSymsp = this->__VlSymsp;
    VmQAMMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VmQAMMod::_eval_settle(VmQAMMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmQAMMod::_eval_settle\n"); );
    VmQAMMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VmQAMMod::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmQAMMod::_ctor_var_reset\n"); );
    // Body
    unit_data_valid = VL_RAND_RESET_I(1);
    unit_data_payload = VL_RAND_RESET_I(4);
    mod_iq_valid = VL_RAND_RESET_I(1);
    mod_iq_payload_cha_i = VL_RAND_RESET_I(16);
    mod_iq_payload_cha_q = VL_RAND_RESET_I(16);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    mQAMMod__DOT__unit_data = VL_RAND_RESET_I(4);
    mQAMMod__DOT__unit_valid = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
