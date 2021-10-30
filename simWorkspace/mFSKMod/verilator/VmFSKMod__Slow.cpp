// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmFSKMod.h for the primary calling header

#include "VmFSKMod.h"
#include "VmFSKMod__Syms.h"

//==========

VL_CTOR_IMP(VmFSKMod) {
    VmFSKMod__Syms* __restrict vlSymsp = __VlSymsp = new VmFSKMod__Syms(this, name());
    VmFSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VmFSKMod::__Vconfigure(VmFSKMod__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VmFSKMod::~VmFSKMod() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VmFSKMod::_initial__TOP__1(VmFSKMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmFSKMod::_initial__TOP__1\n"); );
    VmFSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mod_iq_payload_cha_q = 0U;
}

void VmFSKMod::_settle__TOP__3(VmFSKMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmFSKMod::_settle__TOP__3\n"); );
    VmFSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mod_iq_valid = vlTOPp->mFSKMod__DOT__unit_valid;
    vlTOPp->mod_iq_payload_cha_i = ((IData)(vlTOPp->mFSKMod__DOT__unit_valid)
                                     ? ((0U == (IData)(vlTOPp->mFSKMod__DOT__unit_data))
                                         ? 1U : ((1U 
                                                  == (IData)(vlTOPp->mFSKMod__DOT__unit_data))
                                                  ? 2U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlTOPp->mFSKMod__DOT__unit_data))
                                                   ? 4U
                                                   : 8U)))
                                     : 0U);
}

void VmFSKMod::_eval_initial(VmFSKMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmFSKMod::_eval_initial\n"); );
    VmFSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VmFSKMod::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmFSKMod::final\n"); );
    // Variables
    VmFSKMod__Syms* __restrict vlSymsp = this->__VlSymsp;
    VmFSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VmFSKMod::_eval_settle(VmFSKMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmFSKMod::_eval_settle\n"); );
    VmFSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void VmFSKMod::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmFSKMod::_ctor_var_reset\n"); );
    // Body
    unit_data_valid = VL_RAND_RESET_I(1);
    unit_data_payload = VL_RAND_RESET_I(2);
    mod_iq_valid = VL_RAND_RESET_I(1);
    mod_iq_payload_cha_i = VL_RAND_RESET_I(11);
    mod_iq_payload_cha_q = VL_RAND_RESET_I(11);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    mFSKMod__DOT__unit_data = VL_RAND_RESET_I(2);
    mFSKMod__DOT__unit_valid = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
