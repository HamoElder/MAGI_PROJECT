// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStreamPayloadSplit.h for the primary calling header

#include "VStreamPayloadSplit.h"
#include "VStreamPayloadSplit__Syms.h"

//==========

VL_CTOR_IMP(VStreamPayloadSplit) {
    VStreamPayloadSplit__Syms* __restrict vlSymsp = __VlSymsp = new VStreamPayloadSplit__Syms(this, name());
    VStreamPayloadSplit* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VStreamPayloadSplit::__Vconfigure(VStreamPayloadSplit__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VStreamPayloadSplit::~VStreamPayloadSplit() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VStreamPayloadSplit::_settle__TOP__3(VStreamPayloadSplit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPayloadSplit::_settle__TOP__3\n"); );
    VStreamPayloadSplit* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->split_data_payload = (0xffU & (vlTOPp->StreamPayloadSplit__DOT__data_buf 
                                           >> 0x18U));
    vlTOPp->raw_data_ready = (0U == (IData)(vlTOPp->StreamPayloadSplit__DOT__cnt));
    vlTOPp->split_data_valid = (0U != (IData)(vlTOPp->StreamPayloadSplit__DOT__cnt));
    vlTOPp->StreamPayloadSplit__DOT__raw_data_fire 
        = ((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->raw_data_ready));
    vlTOPp->StreamPayloadSplit__DOT__split_data_fire 
        = ((IData)(vlTOPp->split_data_valid) & (IData)(vlTOPp->split_data_ready));
}

void VStreamPayloadSplit::_eval_initial(VStreamPayloadSplit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPayloadSplit::_eval_initial\n"); );
    VStreamPayloadSplit* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VStreamPayloadSplit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPayloadSplit::final\n"); );
    // Variables
    VStreamPayloadSplit__Syms* __restrict vlSymsp = this->__VlSymsp;
    VStreamPayloadSplit* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VStreamPayloadSplit::_eval_settle(VStreamPayloadSplit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPayloadSplit::_eval_settle\n"); );
    VStreamPayloadSplit* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VStreamPayloadSplit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPayloadSplit::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_ready = VL_RAND_RESET_I(1);
    raw_data_payload = VL_RAND_RESET_I(32);
    split_data_valid = VL_RAND_RESET_I(1);
    split_data_ready = VL_RAND_RESET_I(1);
    split_data_payload = VL_RAND_RESET_I(8);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    StreamPayloadSplit__DOT__cnt = VL_RAND_RESET_I(3);
    StreamPayloadSplit__DOT__data_buf = VL_RAND_RESET_I(32);
    StreamPayloadSplit__DOT__raw_data_fire = VL_RAND_RESET_I(1);
    StreamPayloadSplit__DOT__split_data_fire = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
