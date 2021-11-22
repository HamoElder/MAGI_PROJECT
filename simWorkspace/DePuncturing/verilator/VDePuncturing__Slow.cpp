// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDePuncturing.h for the primary calling header

#include "VDePuncturing.h"
#include "VDePuncturing__Syms.h"

//==========

VL_CTOR_IMP(VDePuncturing) {
    VDePuncturing__Syms* __restrict vlSymsp = __VlSymsp = new VDePuncturing__Syms(this, name());
    VDePuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VDePuncturing::__Vconfigure(VDePuncturing__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VDePuncturing::~VDePuncturing() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VDePuncturing::_settle__TOP__3(VDePuncturing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDePuncturing::_settle__TOP__3\n"); );
    VDePuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->DePuncturing__DOT___zz_mask_cnt = (1U & 
                                               ((IData)(1U) 
                                                + (IData)(vlTOPp->DePuncturing__DOT__mask_cnt)));
    vlTOPp->DePuncturing__DOT___zz_raw_data_fragment 
        = (0xffffU & ((IData)(vlTOPp->DePuncturing__DOT__raw_data_fragment) 
                      >> 2U));
    vlTOPp->de_punched_data_payload_fragment = (3U 
                                                & (IData)(vlTOPp->DePuncturing__DOT__raw_data_fragment));
    vlTOPp->DePuncturing__DOT__when_DePuncturing_l43 
        = ((IData)(vlTOPp->DePuncturing__DOT__raw_data_last) 
           & (0U == (IData)(vlTOPp->DePuncturing__DOT__cnt)));
    vlTOPp->de_punched_data_payload_last = ((1U == (IData)(vlTOPp->DePuncturing__DOT__cnt)) 
                                            & (IData)(vlTOPp->DePuncturing__DOT__raw_data_last));
    vlTOPp->de_punched_data_valid = (0U != (IData)(vlTOPp->DePuncturing__DOT__cnt));
    vlTOPp->raw_data_ready = ((0U == (IData)(vlTOPp->DePuncturing__DOT__cnt)) 
                              & (~ (IData)(vlTOPp->DePuncturing__DOT__raw_data_last)));
    vlTOPp->DePuncturing__DOT__de_punched_data_fire 
        = ((IData)(vlTOPp->de_punched_data_valid) & (IData)(vlTOPp->de_punched_data_ready));
    vlTOPp->DePuncturing__DOT__raw_data_fire = ((IData)(vlTOPp->raw_data_valid) 
                                                & (IData)(vlTOPp->raw_data_ready));
}

void VDePuncturing::_eval_initial(VDePuncturing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDePuncturing::_eval_initial\n"); );
    VDePuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VDePuncturing::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDePuncturing::final\n"); );
    // Variables
    VDePuncturing__Syms* __restrict vlSymsp = this->__VlSymsp;
    VDePuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VDePuncturing::_eval_settle(VDePuncturing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDePuncturing::_eval_settle\n"); );
    VDePuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VDePuncturing::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDePuncturing::_ctor_var_reset\n"); );
    // Body
    dummy_bits = VL_RAND_RESET_I(1);
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_ready = VL_RAND_RESET_I(1);
    raw_data_payload_last = VL_RAND_RESET_I(1);
    raw_data_payload_fragment = VL_RAND_RESET_I(16);
    de_punched_data_valid = VL_RAND_RESET_I(1);
    de_punched_data_ready = VL_RAND_RESET_I(1);
    de_punched_data_payload_last = VL_RAND_RESET_I(1);
    de_punched_data_payload_fragment = VL_RAND_RESET_I(2);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    DePuncturing__DOT___zz_mask_cnt = VL_RAND_RESET_I(1);
    DePuncturing__DOT__mask_cnt = VL_RAND_RESET_I(1);
    DePuncturing__DOT__cnt = VL_RAND_RESET_I(4);
    DePuncturing__DOT__raw_data_fragment = VL_RAND_RESET_I(16);
    DePuncturing__DOT__raw_data_last = VL_RAND_RESET_I(1);
    DePuncturing__DOT__when_DePuncturing_l43 = VL_RAND_RESET_I(1);
    DePuncturing__DOT___zz_raw_data_fragment = VL_RAND_RESET_I(16);
    DePuncturing__DOT__raw_data_fire = VL_RAND_RESET_I(1);
    DePuncturing__DOT__de_punched_data_fire = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
