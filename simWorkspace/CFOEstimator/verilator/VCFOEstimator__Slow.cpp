// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCFOEstimator.h for the primary calling header

#include "VCFOEstimator.h"
#include "VCFOEstimator__Syms.h"

//==========

VL_CTOR_IMP(VCFOEstimator) {
    VCFOEstimator__Syms* __restrict vlSymsp = __VlSymsp = new VCFOEstimator__Syms(this, name());
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VCFOEstimator::__Vconfigure(VCFOEstimator__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VCFOEstimator::~VCFOEstimator() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VCFOEstimator::_settle__TOP__11(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_settle__TOP__11\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->delta_phi_valid = vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_15;
    vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_5 
        = (((QData)((IData)((1U & (VL_MULS_III(32,32,32, (IData)(2U), 
                                               VL_EXTENDS_II(32,16, (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z))) 
                                   >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(VL_MULS_III(32,32,32, (IData)(2U), 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z))))));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i 
        = (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
           - vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q 
        = (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
           - vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_15);
    vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_2 
        = (((QData)((IData)((1U & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                                   >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i)));
    vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_5 
        = (((QData)((IData)((1U & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                                   >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q)));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1 
        = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & ((IData)(vlTOPp->rotated_data_payload_cha_i) 
                                               + (IData)(vlTOPp->rotated_data_payload_cha_q)))));
    vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_1 
        = (0x1ffffU & ((1U & (IData)((VL_ULL(1) & (
                                                   (VL_ULL(0x1ffff8000) 
                                                    + vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_5) 
                                                   >> 0x20U))))
                        ? ((0U != (0xffffU & ((IData)(0x8000U) 
                                              + (IData)(vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_5))))
                            ? ((IData)(1U) + (IData)(
                                                     (VL_ULL(0x1ffff) 
                                                      & ((VL_ULL(0x1ffff8000) 
                                                          + vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_5) 
                                                         >> 0x10U))))
                            : (IData)((VL_ULL(0x1ffff) 
                                       & ((VL_ULL(0x1ffff8000) 
                                           + vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_5) 
                                          >> 0x10U))))
                        : (IData)((VL_ULL(0x1ffff) 
                                   & ((VL_ULL(0x8000) 
                                       + (((QData)((IData)(
                                                           (1U 
                                                            & (VL_MULS_III(32,32,32, (IData)(2U), 
                                                                           VL_EXTENDS_II(32,16, (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z))) 
                                                               >> 0x1fU)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            VL_MULS_III(32,32,32, (IData)(2U), 
                                                                        VL_EXTENDS_II(32,16, (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z))))))) 
                                      >> 0x10U)))));
    vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125 = 
        (0x1ffffU & ((1U & (IData)((VL_ULL(1) & ((VL_ULL(0x1ffff8000) 
                                                  + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                                 >> 0x20U))))
                      ? ((0U != (0xffffU & ((IData)(0x8000U) 
                                            + (IData)(vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_2))))
                          ? ((IData)(1U) + (IData)(
                                                   (VL_ULL(0x1ffff) 
                                                    & ((VL_ULL(0x1ffff8000) 
                                                        + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                                       >> 0x10U))))
                          : (IData)((VL_ULL(0x1ffff) 
                                     & ((VL_ULL(0x1ffff8000) 
                                         + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                        >> 0x10U))))
                      : (IData)((VL_ULL(0x1ffff) & 
                                 ((VL_ULL(0x8000) + 
                                   (((QData)((IData)(
                                                     (1U 
                                                      & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                                                         >> 0x1fU)))) 
                                     << 0x20U) | (QData)((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i)))) 
                                  >> 0x10U)))));
    vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125_4 
        = (0x1ffffU & ((1U & (IData)((VL_ULL(1) & (
                                                   (VL_ULL(0x1ffff8000) 
                                                    + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                                   >> 0x20U))))
                        ? ((0U != (0xffffU & ((IData)(0x8000U) 
                                              + (IData)(vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_5))))
                            ? ((IData)(1U) + (IData)(
                                                     (VL_ULL(0x1ffff) 
                                                      & ((VL_ULL(0x1ffff8000) 
                                                          + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                                         >> 0x10U))))
                            : (IData)((VL_ULL(0x1ffff) 
                                       & ((VL_ULL(0x1ffff8000) 
                                           + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                          >> 0x10U))))
                        : (IData)((VL_ULL(0x1ffff) 
                                   & ((VL_ULL(0x8000) 
                                       + (((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                                                               >> 0x1fU)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q)))) 
                                      >> 0x10U)))));
    vlTOPp->delta_phi_payload = (0xffffU & ((0x10000U 
                                             & vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_1)
                                             ? ((3U 
                                                 != 
                                                 (3U 
                                                  & (vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_1 
                                                     >> 0xfU)))
                                                 ? 0x8000U
                                                 : vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_1)
                                             : ((0x8000U 
                                                 & vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_1)
                                                 ? 0x7fffU
                                                 : vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_1)));
}

void VCFOEstimator::_eval_initial(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_eval_initial\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VCFOEstimator::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::final\n"); );
    // Variables
    VCFOEstimator__Syms* __restrict vlSymsp = this->__VlSymsp;
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCFOEstimator::_eval_settle(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_eval_settle\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__11(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VCFOEstimator::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_ctor_var_reset\n"); );
    // Body
    rotated_data_valid = VL_RAND_RESET_I(1);
    rotated_data_payload_cha_i = VL_RAND_RESET_I(16);
    rotated_data_payload_cha_q = VL_RAND_RESET_I(16);
    delta_phi_valid = VL_RAND_RESET_I(1);
    delta_phi_payload = VL_RAND_RESET_I(16);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_2 = VL_RAND_RESET_Q(33);
    CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_5 = VL_RAND_RESET_Q(33);
    CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_5 = VL_RAND_RESET_Q(33);
    CFOEstimator__DOT___zz_when_SInt_l125 = VL_RAND_RESET_I(17);
    CFOEstimator__DOT___zz_when_SInt_l125_4 = VL_RAND_RESET_I(17);
    CFOEstimator__DOT___zz_delta_phi_payload_1 = VL_RAND_RESET_I(17);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_i = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_q = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_0 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_1 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_2 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_3 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_4 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_5 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_6 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_7 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_8 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_9 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_10 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_11 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_12 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_13 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_14 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_15 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_1 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_3 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_4 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_5 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_6 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_7 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_8 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_9 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_10 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_11 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_12 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_13 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_14 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_15 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_16 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_17 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_18 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_19 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_20 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_21 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_22 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_23 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_24 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_25 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_26 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_27 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_28 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_29 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_30 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_y = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_31 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_32 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_33 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_34 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_35 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_36 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_37 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_38 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_39 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_40 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_41 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_42 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_43 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_44 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_45 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_1 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_2 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_3 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_4 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_5 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_6 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_7 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_8 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_9 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_10 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_11 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_12 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_13 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_14 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_15 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_46 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_47 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_48 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_49 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_50 = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_51 = VL_RAND_RESET_I(16);
    __Vm_traceActivity = 0;
}
