// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStreamPkgGen.h for the primary calling header

#include "VStreamPkgGen.h"
#include "VStreamPkgGen__Syms.h"

//==========

VL_CTOR_IMP(VStreamPkgGen) {
    VStreamPkgGen__Syms* __restrict vlSymsp = __VlSymsp = new VStreamPkgGen__Syms(this, name());
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VStreamPkgGen::__Vconfigure(VStreamPkgGen__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VStreamPkgGen::~VStreamPkgGen() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VStreamPkgGen::_settle__TOP__3(VStreamPkgGen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPkgGen::_settle__TOP__3\n"); );
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->raw_data_ready = (0U == (IData)(vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt));
    vlTOPp->pkg_data_payload = (0xffU & (vlTOPp->StreamPkgGen__DOT__split_core__DOT__data_buf 
                                         >> 0x18U));
    vlTOPp->pkg_data_valid = ((0U != (IData)(vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt)) 
                              & ((IData)(vlTOPp->StreamPkgGen__DOT__strb_buf) 
                                 >> 3U));
    vlTOPp->StreamPkgGen__DOT__split_core__DOT__raw_data_fire 
        = ((IData)(vlTOPp->raw_data_valid) & (0U == (IData)(vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt)));
    vlTOPp->StreamPkgGen__DOT__split_core__DOT__split_data_fire 
        = ((0U != (IData)(vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt)) 
           & (IData)(vlTOPp->pkg_data_ready));
}

void VStreamPkgGen::_eval_initial(VStreamPkgGen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPkgGen::_eval_initial\n"); );
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VStreamPkgGen::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPkgGen::final\n"); );
    // Variables
    VStreamPkgGen__Syms* __restrict vlSymsp = this->__VlSymsp;
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VStreamPkgGen::_eval_settle(VStreamPkgGen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPkgGen::_eval_settle\n"); );
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VStreamPkgGen::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPkgGen::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_ready = VL_RAND_RESET_I(1);
    raw_data_payload_data = VL_RAND_RESET_I(32);
    raw_data_payload_strb = VL_RAND_RESET_I(4);
    pkg_data_valid = VL_RAND_RESET_I(1);
    pkg_data_ready = VL_RAND_RESET_I(1);
    pkg_data_payload = VL_RAND_RESET_I(8);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    StreamPkgGen__DOT__strb_buf = VL_RAND_RESET_I(4);
    StreamPkgGen__DOT__split_core__DOT__cnt = VL_RAND_RESET_I(3);
    StreamPkgGen__DOT__split_core__DOT__data_buf = VL_RAND_RESET_I(32);
    StreamPkgGen__DOT__split_core__DOT__raw_data_fire = VL_RAND_RESET_I(1);
    StreamPkgGen__DOT__split_core__DOT__split_data_fire = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
