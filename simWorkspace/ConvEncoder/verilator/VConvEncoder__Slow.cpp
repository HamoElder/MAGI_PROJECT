// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvEncoder.h for the primary calling header

#include "VConvEncoder.h"
#include "VConvEncoder__Syms.h"

//==========

VL_CTOR_IMP(VConvEncoder) {
    VConvEncoder__Syms* __restrict vlSymsp = __VlSymsp = new VConvEncoder__Syms(this, name());
    VConvEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VConvEncoder::__Vconfigure(VConvEncoder__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VConvEncoder::~VConvEncoder() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VConvEncoder::_settle__TOP__3(VConvEncoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvEncoder::_settle__TOP__3\n"); );
    VConvEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->coded_data_payload_fragment = vlTOPp->ConvEncoder__DOT__coded_data;
    vlTOPp->coded_data_valid = vlTOPp->ConvEncoder__DOT__coded_data_valid_1;
    vlTOPp->coded_data_payload_last = vlTOPp->ConvEncoder__DOT__raw_data_payload_last_regNext;
    vlTOPp->ConvEncoder__DOT___zz_r_enc_0 = ((8U & 
                                              ((IData)(vlTOPp->ConvEncoder__DOT__raw_data_payload) 
                                               << 3U)) 
                                             | (IData)(vlTOPp->ConvEncoder__DOT__r_enc_buf));
    vlTOPp->ConvEncoder__DOT___zz_r_enc_1 = ((8U & 
                                              ((IData)(vlTOPp->ConvEncoder__DOT__raw_data_payload) 
                                               << 2U)) 
                                             | (7U 
                                                & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_0) 
                                                   >> 1U)));
    vlTOPp->ConvEncoder__DOT___zz_r_enc_2 = ((8U & 
                                              ((IData)(vlTOPp->ConvEncoder__DOT__raw_data_payload) 
                                               << 1U)) 
                                             | (7U 
                                                & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_1) 
                                                   >> 1U)));
    vlTOPp->ConvEncoder__DOT___zz_r_enc_3 = ((8U & (IData)(vlTOPp->ConvEncoder__DOT__raw_data_payload)) 
                                             | (7U 
                                                & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_2) 
                                                   >> 1U)));
    vlTOPp->ConvEncoder__DOT___zz_r_enc_4 = ((8U & 
                                              ((IData)(vlTOPp->ConvEncoder__DOT__raw_data_payload) 
                                               >> 1U)) 
                                             | (7U 
                                                & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_3) 
                                                   >> 1U)));
    vlTOPp->ConvEncoder__DOT___zz_r_enc_5 = ((8U & 
                                              ((IData)(vlTOPp->ConvEncoder__DOT__raw_data_payload) 
                                               >> 2U)) 
                                             | (7U 
                                                & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_4) 
                                                   >> 1U)));
    vlTOPp->ConvEncoder__DOT___zz_r_enc_6 = ((8U & 
                                              ((IData)(vlTOPp->ConvEncoder__DOT__raw_data_payload) 
                                               >> 3U)) 
                                             | (7U 
                                                & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_5) 
                                                   >> 1U)));
    vlTOPp->ConvEncoder__DOT__code_vec_0 = ((0x7eU 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_0)) 
                                            | (1U & 
                                               ((((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_0) 
                                                  >> 1U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_0) 
                                                  >> 2U)) 
                                                ^ ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_0) 
                                                   >> 3U))));
    vlTOPp->ConvEncoder__DOT__code_vec_0 = ((0x7dU 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_0)) 
                                            | (2U & 
                                               (((0xfffffffeU 
                                                  & (IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_1)) 
                                                 ^ 
                                                 (0x7ffffffeU 
                                                  & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_1) 
                                                     >> 1U))) 
                                                ^ (0x3ffffffeU 
                                                   & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_1) 
                                                      >> 2U)))));
    vlTOPp->ConvEncoder__DOT__code_vec_0 = ((0x7bU 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_0)) 
                                            | (4U & 
                                               (((0xfffffffcU 
                                                  & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_2) 
                                                     << 1U)) 
                                                 ^ 
                                                 (0xfffffffcU 
                                                  & (IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_2))) 
                                                ^ (0x7ffffffcU 
                                                   & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_2) 
                                                      >> 1U)))));
    vlTOPp->ConvEncoder__DOT__code_vec_0 = ((0x77U 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_0)) 
                                            | (8U & 
                                               (((0xfffffff8U 
                                                  & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_3) 
                                                     << 2U)) 
                                                 ^ 
                                                 (0xfffffff8U 
                                                  & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_3) 
                                                     << 1U))) 
                                                ^ (0xfffffff8U 
                                                   & (IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_3)))));
    vlTOPp->ConvEncoder__DOT__code_vec_0 = ((0x6fU 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_0)) 
                                            | (0x10U 
                                               & (((0xfffffff0U 
                                                    & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_4) 
                                                       << 3U)) 
                                                   ^ 
                                                   (0xfffffff0U 
                                                    & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_4) 
                                                       << 2U))) 
                                                  ^ 
                                                  (0xfffffff0U 
                                                   & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_4) 
                                                      << 1U)))));
    vlTOPp->ConvEncoder__DOT__code_vec_0 = ((0x5fU 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_0)) 
                                            | (0x20U 
                                               & (((0xffffffe0U 
                                                    & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_5) 
                                                       << 4U)) 
                                                   ^ 
                                                   (0xffffffe0U 
                                                    & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_5) 
                                                       << 3U))) 
                                                  ^ 
                                                  (0xffffffe0U 
                                                   & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_5) 
                                                      << 2U)))));
    vlTOPp->ConvEncoder__DOT__code_vec_0 = ((0x3fU 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_0)) 
                                            | (0x40U 
                                               & (((0xffffffc0U 
                                                    & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_6) 
                                                       << 5U)) 
                                                   ^ 
                                                   (0xffffffc0U 
                                                    & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_6) 
                                                       << 4U))) 
                                                  ^ 
                                                  (0xffffffc0U 
                                                   & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_6) 
                                                      << 3U)))));
    vlTOPp->ConvEncoder__DOT__code_vec_1 = ((0x7eU 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_1)) 
                                            | (1U & 
                                               ((((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_0) 
                                                  >> 1U) 
                                                 ^ 
                                                 (2U 
                                                  & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_0) 
                                                     >> 2U))) 
                                                ^ (1U 
                                                   & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_0) 
                                                      >> 3U)))));
    vlTOPp->ConvEncoder__DOT__code_vec_1 = ((0x7dU 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_1)) 
                                            | (2U & 
                                               (((0xfffffffeU 
                                                  & (IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_1)) 
                                                 ^ 
                                                 (4U 
                                                  & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_1) 
                                                     >> 1U))) 
                                                ^ (2U 
                                                   & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_1) 
                                                      >> 2U)))));
    vlTOPp->ConvEncoder__DOT__code_vec_1 = ((0x7bU 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_1)) 
                                            | (4U & 
                                               (((0xfffffffcU 
                                                  & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_2) 
                                                     << 1U)) 
                                                 ^ 
                                                 (8U 
                                                  & (IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_2))) 
                                                ^ (4U 
                                                   & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_2) 
                                                      >> 1U)))));
    vlTOPp->ConvEncoder__DOT__code_vec_1 = ((0x77U 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_1)) 
                                            | (8U & 
                                               (((0xfffffff8U 
                                                  & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_3) 
                                                     << 2U)) 
                                                 ^ 
                                                 (0x10U 
                                                  & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_3) 
                                                     << 1U))) 
                                                ^ (8U 
                                                   & (IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_3)))));
    vlTOPp->ConvEncoder__DOT__code_vec_1 = ((0x6fU 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_1)) 
                                            | (0x10U 
                                               & (((0xfffffff0U 
                                                    & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_4) 
                                                       << 3U)) 
                                                   ^ 
                                                   (0x20U 
                                                    & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_4) 
                                                       << 2U))) 
                                                  ^ 
                                                  (0x10U 
                                                   & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_4) 
                                                      << 1U)))));
    vlTOPp->ConvEncoder__DOT__code_vec_1 = ((0x5fU 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_1)) 
                                            | (0x20U 
                                               & (((0xffffffe0U 
                                                    & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_5) 
                                                       << 4U)) 
                                                   ^ 
                                                   (0x40U 
                                                    & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_5) 
                                                       << 3U))) 
                                                  ^ 
                                                  (0x20U 
                                                   & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_5) 
                                                      << 2U)))));
    vlTOPp->ConvEncoder__DOT__code_vec_1 = ((0x3fU 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_1)) 
                                            | (0x40U 
                                               & (((0xffffffc0U 
                                                    & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_6) 
                                                       << 5U)) 
                                                   ^ 
                                                   (0x80U 
                                                    & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_6) 
                                                       << 4U))) 
                                                  ^ 
                                                  (0x40U 
                                                   & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_6) 
                                                      << 3U)))));
}

void VConvEncoder::_eval_initial(VConvEncoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvEncoder::_eval_initial\n"); );
    VConvEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VConvEncoder::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvEncoder::final\n"); );
    // Variables
    VConvEncoder__Syms* __restrict vlSymsp = this->__VlSymsp;
    VConvEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VConvEncoder::_eval_settle(VConvEncoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvEncoder::_eval_settle\n"); );
    VConvEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VConvEncoder::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvEncoder::_ctor_var_reset\n"); );
    // Body
    tail_bits_valid = VL_RAND_RESET_I(1);
    tail_bits_payload = VL_RAND_RESET_I(3);
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_payload_last = VL_RAND_RESET_I(1);
    raw_data_payload_fragment = VL_RAND_RESET_I(7);
    coded_data_valid = VL_RAND_RESET_I(1);
    coded_data_payload_last = VL_RAND_RESET_I(1);
    coded_data_payload_fragment = VL_RAND_RESET_I(14);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    ConvEncoder__DOT___zz_r_enc_0 = VL_RAND_RESET_I(4);
    ConvEncoder__DOT___zz_r_enc_1 = VL_RAND_RESET_I(4);
    ConvEncoder__DOT___zz_r_enc_2 = VL_RAND_RESET_I(4);
    ConvEncoder__DOT___zz_r_enc_3 = VL_RAND_RESET_I(4);
    ConvEncoder__DOT___zz_r_enc_4 = VL_RAND_RESET_I(4);
    ConvEncoder__DOT___zz_r_enc_5 = VL_RAND_RESET_I(4);
    ConvEncoder__DOT___zz_r_enc_6 = VL_RAND_RESET_I(4);
    ConvEncoder__DOT__raw_data_payload = VL_RAND_RESET_I(7);
    ConvEncoder__DOT__raw_data_valid_1 = VL_RAND_RESET_I(1);
    ConvEncoder__DOT__coded_data = VL_RAND_RESET_I(14);
    ConvEncoder__DOT__coded_data_valid_1 = VL_RAND_RESET_I(1);
    ConvEncoder__DOT__r_enc_buf = VL_RAND_RESET_I(3);
    ConvEncoder__DOT__code_vec_0 = VL_RAND_RESET_I(7);
    ConvEncoder__DOT__code_vec_1 = VL_RAND_RESET_I(7);
    ConvEncoder__DOT__raw_data_payload_last_regNext = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
