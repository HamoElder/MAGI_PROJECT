// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VScrambler.h for the primary calling header

#include "VScrambler.h"
#include "VScrambler__Syms.h"

//==========

VL_CTOR_IMP(VScrambler) {
    VScrambler__Syms* __restrict vlSymsp = __VlSymsp = new VScrambler__Syms(this, name());
    VScrambler* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VScrambler::__Vconfigure(VScrambler__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VScrambler::~VScrambler() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VScrambler::_settle__TOP__3(VScrambler__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VScrambler::_settle__TOP__3\n"); );
    VScrambler* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->scram_data_payload = vlTOPp->Scrambler__DOT__scram_data;
    vlTOPp->scram_data_valid = vlTOPp->Scrambler__DOT__scram_valid;
    vlTOPp->Scrambler__DOT__feed_back_0 = (1U & (((IData)(vlTOPp->Scrambler__DOT__scram_state) 
                                                  >> 6U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->Scrambler__DOT__scram_state) 
                                                  >> 3U)));
    vlTOPp->Scrambler__DOT___zz_r_scr_0 = (((IData)(vlTOPp->Scrambler__DOT__scram_state) 
                                            << 1U) 
                                           | (IData)(vlTOPp->Scrambler__DOT__feed_back_0));
    vlTOPp->Scrambler__DOT__feed_back_1 = (1U & (((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_0) 
                                                  >> 6U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_0) 
                                                  >> 3U)));
    vlTOPp->Scrambler__DOT___zz_r_scr_1 = ((0xfeU & 
                                            ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_0) 
                                             << 1U)) 
                                           | (IData)(vlTOPp->Scrambler__DOT__feed_back_1));
    vlTOPp->Scrambler__DOT__feed_back_2 = (1U & (((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_1) 
                                                  >> 6U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_1) 
                                                  >> 3U)));
    vlTOPp->Scrambler__DOT___zz_r_scr_2 = ((0xfeU & 
                                            ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_1) 
                                             << 1U)) 
                                           | (IData)(vlTOPp->Scrambler__DOT__feed_back_2));
    vlTOPp->Scrambler__DOT__feed_back_3 = (1U & (((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_2) 
                                                  >> 6U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_2) 
                                                  >> 3U)));
    vlTOPp->Scrambler__DOT___zz_r_scr_3 = ((0xfeU & 
                                            ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_2) 
                                             << 1U)) 
                                           | (IData)(vlTOPp->Scrambler__DOT__feed_back_3));
    vlTOPp->Scrambler__DOT__feed_back_4 = (1U & (((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_3) 
                                                  >> 6U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_3) 
                                                  >> 3U)));
    vlTOPp->Scrambler__DOT___zz_r_scr_4 = ((0xfeU & 
                                            ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_3) 
                                             << 1U)) 
                                           | (IData)(vlTOPp->Scrambler__DOT__feed_back_4));
    vlTOPp->Scrambler__DOT__feed_back_5 = (1U & (((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_4) 
                                                  >> 6U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_4) 
                                                  >> 3U)));
    vlTOPp->Scrambler__DOT___zz_r_scr_5 = ((0xfeU & 
                                            ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_4) 
                                             << 1U)) 
                                           | (IData)(vlTOPp->Scrambler__DOT__feed_back_5));
    vlTOPp->Scrambler__DOT__feed_back_6 = (1U & (((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_5) 
                                                  >> 6U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_5) 
                                                  >> 3U)));
    vlTOPp->Scrambler__DOT___zz_r_scr_6 = ((0xfeU & 
                                            ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_5) 
                                             << 1U)) 
                                           | (IData)(vlTOPp->Scrambler__DOT__feed_back_6));
    vlTOPp->Scrambler__DOT__feed_back_7 = (1U & (((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_6) 
                                                  >> 6U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_6) 
                                                  >> 3U)));
}

void VScrambler::_eval_initial(VScrambler__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VScrambler::_eval_initial\n"); );
    VScrambler* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VScrambler::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VScrambler::final\n"); );
    // Variables
    VScrambler__Syms* __restrict vlSymsp = this->__VlSymsp;
    VScrambler* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VScrambler::_eval_settle(VScrambler__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VScrambler::_eval_settle\n"); );
    VScrambler* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VScrambler::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VScrambler::_ctor_var_reset\n"); );
    // Body
    init_state_valid = VL_RAND_RESET_I(1);
    init_state_payload = VL_RAND_RESET_I(7);
    scram_data_valid = VL_RAND_RESET_I(1);
    scram_data_ready = VL_RAND_RESET_I(1);
    scram_data_payload = VL_RAND_RESET_I(8);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    Scrambler__DOT___zz_r_scr_0 = VL_RAND_RESET_I(8);
    Scrambler__DOT___zz_r_scr_1 = VL_RAND_RESET_I(8);
    Scrambler__DOT___zz_r_scr_2 = VL_RAND_RESET_I(8);
    Scrambler__DOT___zz_r_scr_3 = VL_RAND_RESET_I(8);
    Scrambler__DOT___zz_r_scr_4 = VL_RAND_RESET_I(8);
    Scrambler__DOT___zz_r_scr_5 = VL_RAND_RESET_I(8);
    Scrambler__DOT___zz_r_scr_6 = VL_RAND_RESET_I(8);
    Scrambler__DOT__scram_state = VL_RAND_RESET_I(7);
    Scrambler__DOT__feed_back_0 = VL_RAND_RESET_I(1);
    Scrambler__DOT__feed_back_1 = VL_RAND_RESET_I(1);
    Scrambler__DOT__feed_back_2 = VL_RAND_RESET_I(1);
    Scrambler__DOT__feed_back_3 = VL_RAND_RESET_I(1);
    Scrambler__DOT__feed_back_4 = VL_RAND_RESET_I(1);
    Scrambler__DOT__feed_back_5 = VL_RAND_RESET_I(1);
    Scrambler__DOT__feed_back_6 = VL_RAND_RESET_I(1);
    Scrambler__DOT__feed_back_7 = VL_RAND_RESET_I(1);
    Scrambler__DOT__scram_valid = VL_RAND_RESET_I(1);
    Scrambler__DOT__scram_data = VL_RAND_RESET_I(8);
    __Vm_traceActivity = 0;
}
