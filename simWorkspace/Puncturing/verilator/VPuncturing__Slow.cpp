// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPuncturing.h for the primary calling header

#include "VPuncturing.h"
#include "VPuncturing__Syms.h"

//==========

VL_CTOR_IMP(VPuncturing) {
    VPuncturing__Syms* __restrict vlSymsp = __VlSymsp = new VPuncturing__Syms(this, name());
    VPuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VPuncturing::__Vconfigure(VPuncturing__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VPuncturing::~VPuncturing() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VPuncturing::_initial__TOP__1(VPuncturing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPuncturing::_initial__TOP__1\n"); );
    VPuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->raw_data_ready = 1U;
}

void VPuncturing::_settle__TOP__4(VPuncturing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPuncturing::_settle__TOP__4\n"); );
    VPuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->punched_data_valid = vlTOPp->Puncturing__DOT__raw_data_valid_1;
    vlTOPp->punched_data_payload_last = vlTOPp->Puncturing__DOT__raw_data_last;
    vlTOPp->punched_data_payload_fragment = ((0x8000U 
                                              & (IData)(vlTOPp->Puncturing__DOT__raw_data_fragment)) 
                                             | ((0x4000U 
                                                 & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                    << 7U)) 
                                                | ((0x2000U 
                                                    & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                       >> 1U)) 
                                                   | ((0x1000U 
                                                       & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                          << 6U)) 
                                                      | ((0x800U 
                                                          & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                             >> 2U)) 
                                                         | ((0x400U 
                                                             & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                                << 5U)) 
                                                            | ((0x200U 
                                                                & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                                   >> 3U)) 
                                                               | ((0x100U 
                                                                   & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                                      << 4U)) 
                                                                  | ((0x80U 
                                                                      & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                                         >> 4U)) 
                                                                     | ((0x40U 
                                                                         & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                                            << 3U)) 
                                                                        | ((0x20U 
                                                                            & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                                               >> 5U)) 
                                                                           | ((0x10U 
                                                                               & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                                                << 2U)) 
                                                                              | ((8U 
                                                                                & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                                                >> 6U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                                                >> 7U)) 
                                                                                | (1U 
                                                                                & (IData)(vlTOPp->Puncturing__DOT__raw_data_fragment)))))))))))))))));
}

void VPuncturing::_eval_initial(VPuncturing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPuncturing::_eval_initial\n"); );
    VPuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VPuncturing::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPuncturing::final\n"); );
    // Variables
    VPuncturing__Syms* __restrict vlSymsp = this->__VlSymsp;
    VPuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPuncturing::_eval_settle(VPuncturing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPuncturing::_eval_settle\n"); );
    VPuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
}

void VPuncturing::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPuncturing::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_ready = VL_RAND_RESET_I(1);
    raw_data_payload_last = VL_RAND_RESET_I(1);
    raw_data_payload_fragment = VL_RAND_RESET_I(16);
    punched_data_valid = VL_RAND_RESET_I(1);
    punched_data_payload_last = VL_RAND_RESET_I(1);
    punched_data_payload_fragment = VL_RAND_RESET_I(16);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    Puncturing__DOT__raw_data_fragment = VL_RAND_RESET_I(16);
    Puncturing__DOT__raw_data_valid_1 = VL_RAND_RESET_I(1);
    Puncturing__DOT__raw_data_last = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
