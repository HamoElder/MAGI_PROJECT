// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStreamPackageGen.h for the primary calling header

#include "VStreamPackageGen.h"
#include "VStreamPackageGen__Syms.h"

//==========

VL_CTOR_IMP(VStreamPackageGen) {
    VStreamPackageGen__Syms* __restrict vlSymsp = __VlSymsp = new VStreamPackageGen__Syms(this, name());
    VStreamPackageGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VStreamPackageGen::__Vconfigure(VStreamPackageGen__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VStreamPackageGen::~VStreamPackageGen() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VStreamPackageGen::_settle__TOP__3(VStreamPackageGen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPackageGen::_settle__TOP__3\n"); );
    VStreamPackageGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->raw_data_ready = (0U == (IData)(vlTOPp->StreamPackageGen__DOT__split_core__DOT__cnt));
    vlTOPp->pkg_data_payload = (0xffU & (vlTOPp->StreamPackageGen__DOT__split_core__DOT__data_buf 
                                         >> 0x18U));
    vlTOPp->pkg_data_valid = ((0U != (IData)(vlTOPp->StreamPackageGen__DOT__split_core__DOT__cnt)) 
                              & ((IData)(vlTOPp->StreamPackageGen__DOT__strb_buf) 
                                 >> 3U));
    vlTOPp->StreamPackageGen__DOT__split_core__DOT__raw_data_fire 
        = ((IData)(vlTOPp->raw_data_valid) & (0U == (IData)(vlTOPp->StreamPackageGen__DOT__split_core__DOT__cnt)));
    vlTOPp->StreamPackageGen__DOT__split_core__DOT__split_data_fire 
        = ((0U != (IData)(vlTOPp->StreamPackageGen__DOT__split_core__DOT__cnt)) 
           & (IData)(vlTOPp->pkg_data_ready));
}

void VStreamPackageGen::_eval_initial(VStreamPackageGen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPackageGen::_eval_initial\n"); );
    VStreamPackageGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VStreamPackageGen::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPackageGen::final\n"); );
    // Variables
    VStreamPackageGen__Syms* __restrict vlSymsp = this->__VlSymsp;
    VStreamPackageGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VStreamPackageGen::_eval_settle(VStreamPackageGen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPackageGen::_eval_settle\n"); );
    VStreamPackageGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VStreamPackageGen::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamPackageGen::_ctor_var_reset\n"); );
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
    StreamPackageGen__DOT__strb_buf = VL_RAND_RESET_I(4);
    StreamPackageGen__DOT__split_core__DOT__cnt = VL_RAND_RESET_I(3);
    StreamPackageGen__DOT__split_core__DOT__data_buf = VL_RAND_RESET_I(32);
    StreamPackageGen__DOT__split_core__DOT__raw_data_fire = VL_RAND_RESET_I(1);
    StreamPackageGen__DOT__split_core__DOT__split_data_fire = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
