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

void VCFOEstimator::_settle__TOP__16(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_settle__TOP__16\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOEstimator__DOT___zz_impulse_cnt = (0x3fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlTOPp->CFOEstimator__DOT__impulse_cnt)));
    vlTOPp->delta_phi_payload = (0xffffffU & VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z, 5U));
    vlTOPp->delta_phi_valid = ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_11) 
                               & (0x39U == (IData)(vlTOPp->CFOEstimator__DOT__impulse_cnt)));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_85 
        = (1U & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_44)
                  ? (~ (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_33 
                        >> 0x17U)) : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_22 
                                      >> 0x17U)));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_82 
        = (1U & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_43)
                  ? (~ (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_32 
                        >> 0x17U)) : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_21 
                                      >> 0x17U)));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_79 
        = (1U & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_42)
                  ? (~ (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_31 
                        >> 0x17U)) : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_20 
                                      >> 0x17U)));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_76 
        = (1U & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_41)
                  ? (~ (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_30 
                        >> 0x17U)) : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_19 
                                      >> 0x17U)));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_73 
        = (1U & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_40)
                  ? (~ (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_29 
                        >> 0x17U)) : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_18 
                                      >> 0x17U)));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_70 
        = (1U & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_39)
                  ? (~ (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_28 
                        >> 0x17U)) : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_17 
                                      >> 0x17U)));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_67 
        = (1U & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_38)
                  ? (~ (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_27 
                        >> 0x17U)) : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_16 
                                      >> 0x17U)));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_64 
        = (1U & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_37)
                  ? (~ (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_26 
                        >> 0x17U)) : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_15 
                                      >> 0x17U)));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_61 
        = (1U & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_36)
                  ? (~ (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_25 
                        >> 0x17U)) : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_14 
                                      >> 0x17U)));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_58 
        = (1U & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_35)
                  ? (~ (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_24 
                        >> 0x17U)) : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_13 
                                      >> 0x17U)));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_55 
        = (1U & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_34)
                  ? (~ (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_23 
                        >> 0x17U)) : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_12 
                                      >> 0x17U)));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i_1 
        = (VL_ULL(0xfffffffffff) & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                                    - (((QData)((IData)(
                                                        (0xfffffU 
                                                         & VL_NEGATE_I((IData)(
                                                                               (1U 
                                                                                & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_31 
                                                                                >> 0x17U))))))) 
                                        << 0x18U) | (QData)((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_31)))));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q_1 
        = (VL_ULL(0xfffffffffff) & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                                    - (((QData)((IData)(
                                                        (0xfffffU 
                                                         & VL_NEGATE_I((IData)(
                                                                               (1U 
                                                                                & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31 
                                                                                >> 0x17U))))))) 
                                        << 0x18U) | (QData)((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31)))));
    vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_2 
        = (((QData)((IData)((1U & (IData)((vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                                           >> 0x2bU))))) 
            << 0x2cU) | vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i);
    vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_5 
        = (((QData)((IData)((1U & (IData)((vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                                           >> 0x2bU))))) 
            << 0x2cU) | vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q);
    vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130 = 
        (0x1ffffffU & ((1U & (IData)((VL_ULL(1) & (
                                                   (VL_ULL(0x1ffffff80000) 
                                                    + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_2) 
                                                   >> 0x2cU))))
                        ? ((0U != (0xfffffU & ((IData)(0x80000U) 
                                               + (IData)(vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_2))))
                            ? ((IData)(1U) + (IData)(
                                                     (VL_ULL(0x1ffffff) 
                                                      & ((VL_ULL(0x1ffffff80000) 
                                                          + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_2) 
                                                         >> 0x14U))))
                            : (IData)((VL_ULL(0x1ffffff) 
                                       & ((VL_ULL(0x1ffffff80000) 
                                           + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_2) 
                                          >> 0x14U))))
                        : (IData)((VL_ULL(0x1ffffff) 
                                   & ((VL_ULL(0x80000) 
                                       + (((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                                                                       >> 0x2bU))))) 
                                           << 0x2cU) 
                                          | vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i)) 
                                      >> 0x14U)))));
    vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130_4 
        = (0x1ffffffU & ((1U & (IData)((VL_ULL(1) & 
                                        ((VL_ULL(0x1ffffff80000) 
                                          + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_5) 
                                         >> 0x2cU))))
                          ? ((0U != (0xfffffU & ((IData)(0x80000U) 
                                                 + (IData)(vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_5))))
                              ? ((IData)(1U) + (IData)(
                                                       (VL_ULL(0x1ffffff) 
                                                        & ((VL_ULL(0x1ffffff80000) 
                                                            + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_5) 
                                                           >> 0x14U))))
                              : (IData)((VL_ULL(0x1ffffff) 
                                         & ((VL_ULL(0x1ffffff80000) 
                                             + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_5) 
                                            >> 0x14U))))
                          : (IData)((VL_ULL(0x1ffffff) 
                                     & ((VL_ULL(0x80000) 
                                         + (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                                                                         >> 0x2bU))))) 
                                             << 0x2cU) 
                                            | vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q)) 
                                        >> 0x14U)))));
}

void VCFOEstimator::_eval_initial(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_eval_initial\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = (1U & (~ (IData)(vlTOPp->clk)));
    vlTOPp->__Vclklast__TOP__reset = (1U & (~ (IData)(vlTOPp->reset)));
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
    vlTOPp->_settle__TOP__16(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VCFOEstimator::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_ctor_var_reset\n"); );
    // Body
    rotated_data_valid = VL_RAND_RESET_I(1);
    rotated_data_payload_cha_i = VL_RAND_RESET_I(12);
    rotated_data_payload_cha_q = VL_RAND_RESET_I(12);
    delta_phi_valid = VL_RAND_RESET_I(1);
    delta_phi_payload = VL_RAND_RESET_I(24);
    clk = 0;
    reset = 0;
    CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_2 = VL_RAND_RESET_Q(45);
    CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_5 = VL_RAND_RESET_Q(45);
    CFOEstimator__DOT___zz_impulse_cnt = VL_RAND_RESET_I(6);
    CFOEstimator__DOT__impulse_cnt = VL_RAND_RESET_I(6);
    CFOEstimator__DOT___zz_when_SInt_l130 = VL_RAND_RESET_I(25);
    CFOEstimator__DOT___zz_when_SInt_l130_4 = VL_RAND_RESET_I(25);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_16_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_16_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_16_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_17_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_17_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_17_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_18_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_18_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_18_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_19_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_19_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_19_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_20_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_20_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_20_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_21_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_21_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_21_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_22_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_22_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_22_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_23_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_23_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_23_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_24_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_24_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_24_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_25_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_25_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_25_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_26_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_26_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_26_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_27_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_27_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_27_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_28_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_28_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_28_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_29_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_29_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_29_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_30_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_30_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_30_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_31_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_i = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_q = VL_RAND_RESET_I(12);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i_1 = VL_RAND_RESET_Q(44);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q_1 = VL_RAND_RESET_Q(44);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i = VL_RAND_RESET_Q(44);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q = VL_RAND_RESET_Q(44);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_0 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_1 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_2 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_3 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_4 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_5 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_6 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_7 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_8 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_9 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_10 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_11 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_12 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_13 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_14 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_15 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_16 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_17 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_18 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_19 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_20 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_21 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_22 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_23 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_24 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_25 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_26 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_27 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_28 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_29 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_30 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_31 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_17 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_18 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_19 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_20 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_21 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_22 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_23 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_24 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_25 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_26 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_27 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_28 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_29 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_30 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_1 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_3 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_4 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_5 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_6 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_7 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_8 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_9 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_10 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_11 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_12 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_13 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_14 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_15 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_16 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_17 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_18 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_19 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_20 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_21 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_22 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_y = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_23 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_24 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_25 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_26 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_27 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_28 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_29 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_30 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_31 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_32 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_33 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z = VL_RAND_RESET_I(24);
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
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_34 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_35 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_36 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_37 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_38 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_39 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_40 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_41 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_42 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_43 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_44 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_45 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_46 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_47 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_48 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_49 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_50 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_51 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_52 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_53 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_54 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z_1 = VL_RAND_RESET_I(24);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_55 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_58 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_61 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_64 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_67 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_70 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_73 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_76 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_79 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_82 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_85 = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
