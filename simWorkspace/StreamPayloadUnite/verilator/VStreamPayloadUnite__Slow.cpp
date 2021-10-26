// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStreamPayloadUnite.h for the primary calling header

#include "VStreamPayloadUnite.h"
#include "VStreamPayloadUnite__Syms.h"

//==========

VL_CTOR_IMP(VStreamPayloadUnite) {
    VStreamPayloadUnite__Syms* __restrict vlSymsp = __VlSymsp = new VStreamPayloadUnite__Syms(this, name());
    VStreamPayloadUnite* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VStreamPayloadUnite::__Vconfigure(VStreamPayloadUnite__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VStreamPayloadUnite::~VStreamPayloadUnite() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VStreamPayloadUnite::_settle__TOP__3(VStreamPayloadUnite__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPayloadUnite::_settle__TOP__3\n"); );
    VStreamPayloadUnite* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->unite_data_valid = (0U == (IData)(vlTOPp->StreamPayloadUnite__DOT__cnt));
    vlTOPp->unite_data_payload = vlTOPp->StreamPayloadUnite__DOT__data_buf;
    vlTOPp->StreamPayloadUnite__DOT___zz_data_buf = 
        (((QData)((IData)(vlTOPp->raw_data_payload)) 
          << 0x20U) | (QData)((IData)(vlTOPp->StreamPayloadUnite__DOT__data_buf)));
    vlTOPp->raw_data_ready = (0U != (IData)(vlTOPp->StreamPayloadUnite__DOT__cnt));
    vlTOPp->StreamPayloadUnite__DOT__raw_data_fire 
        = ((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->raw_data_ready));
}

void VStreamPayloadUnite::_eval_initial(VStreamPayloadUnite__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPayloadUnite::_eval_initial\n"); );
    VStreamPayloadUnite* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VStreamPayloadUnite::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPayloadUnite::final\n"); );
    // Variables
    VStreamPayloadUnite__Syms* __restrict vlSymsp = this->__VlSymsp;
    VStreamPayloadUnite* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VStreamPayloadUnite::_eval_settle(VStreamPayloadUnite__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPayloadUnite::_eval_settle\n"); );
    VStreamPayloadUnite* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VStreamPayloadUnite::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPayloadUnite::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_ready = VL_RAND_RESET_I(1);
    raw_data_payload = VL_RAND_RESET_I(8);
    unite_data_valid = VL_RAND_RESET_I(1);
    unite_data_ready = VL_RAND_RESET_I(1);
    unite_data_payload = VL_RAND_RESET_I(32);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    StreamPayloadUnite__DOT___zz_data_buf = VL_RAND_RESET_Q(40);
    StreamPayloadUnite__DOT__cnt = VL_RAND_RESET_I(3);
    StreamPayloadUnite__DOT__data_buf = VL_RAND_RESET_I(32);
    StreamPayloadUnite__DOT__raw_data_fire = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
