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
    // Variables
    WData/*95:0*/ __Vtemp22[3];
    WData/*95:0*/ __Vtemp23[3];
    WData/*95:0*/ __Vtemp26[3];
    WData/*95:0*/ __Vtemp27[3];
    WData/*95:0*/ __Vtemp30[3];
    WData/*95:0*/ __Vtemp31[3];
    WData/*95:0*/ __Vtemp34[3];
    WData/*95:0*/ __Vtemp35[3];
    WData/*95:0*/ __Vtemp36[3];
    // Body
    vlTOPp->CFOEstimator__DOT___zz_impulse_cnt = (0x3fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlTOPp->CFOEstimator__DOT__impulse_cnt)));
    vlTOPp->delta_phi_valid = ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_15) 
                               & (0x1fU == (IData)(vlTOPp->CFOEstimator__DOT__impulse_cnt)));
    vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_4[0U] 
        = (IData)(VL_MULS_QQQ(64,64,64, VL_ULL(0x1000), 
                              VL_EXTENDS_QI(64,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z)));
    vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_4[1U] 
        = (IData)((VL_MULS_QQQ(64,64,64, VL_ULL(0x1000), 
                               VL_EXTENDS_QI(64,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z)) 
                   >> 0x20U));
    vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_4[2U] 
        = (1U & (IData)((VL_MULS_QQQ(64,64,64, VL_ULL(0x1000), 
                                     VL_EXTENDS_QI(64,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z)) 
                         >> 0x3fU)));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i 
        = (VL_ULL(0xffffffffffff) & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                                     - (((QData)((IData)(
                                                         (0xffffU 
                                                          & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_31 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_31)))));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q 
        = (VL_ULL(0xffffffffffff) & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                                     - (((QData)((IData)(
                                                         (0xffffU 
                                                          & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31)))));
    vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_2 
        = (((QData)((IData)((1U & (IData)((vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                                           >> 0x2fU))))) 
            << 0x30U) | vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i);
    vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_5 
        = (((QData)((IData)((1U & (IData)((vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                                           >> 0x2fU))))) 
            << 0x30U) | vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1 
        = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_i)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & ((IData)(vlTOPp->rotated_data_payload_cha_i) 
                                               + (IData)(vlTOPp->rotated_data_payload_cha_q)))));
    __Vtemp22[0U] = 0xffff8000U;
    __Vtemp22[1U] = 0xffffffffU;
    __Vtemp22[2U] = 1U;
    VL_ADD_W(3, __Vtemp23, __Vtemp22, vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_4);
    __Vtemp26[0U] = 0xffff8000U;
    __Vtemp26[1U] = 0xffffffffU;
    __Vtemp26[2U] = 1U;
    VL_ADD_W(3, __Vtemp27, __Vtemp26, vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_4);
    __Vtemp30[0U] = 0xffff8000U;
    __Vtemp30[1U] = 0xffffffffU;
    __Vtemp30[2U] = 1U;
    VL_ADD_W(3, __Vtemp31, __Vtemp30, vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_4);
    __Vtemp34[0U] = 0x8000U;
    __Vtemp34[1U] = 0U;
    __Vtemp34[2U] = 0U;
    __Vtemp35[0U] = (IData)(VL_MULS_QQQ(64,64,64, VL_ULL(0x1000), 
                                        VL_EXTENDS_QI(64,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z)));
    __Vtemp35[1U] = (IData)((VL_MULS_QQQ(64,64,64, VL_ULL(0x1000), 
                                         VL_EXTENDS_QI(64,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z)) 
                             >> 0x20U));
    __Vtemp35[2U] = (1U & (IData)((VL_MULS_QQQ(64,64,64, VL_ULL(0x1000), 
                                               VL_EXTENDS_QI(64,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z)) 
                                   >> 0x3fU)));
    VL_ADD_W(3, __Vtemp36, __Vtemp34, __Vtemp35);
    vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload 
        = (VL_ULL(0x1ffffffffffff) & ((1U & __Vtemp23[2U])
                                       ? ((0U != (0xffffU 
                                                  & ((IData)(0x8000U) 
                                                     + 
                                                     vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_4[0U])))
                                           ? (VL_ULL(1) 
                                              + (((QData)((IData)(
                                                                  (1U 
                                                                   & __Vtemp27[2U]))) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(
                                                                     __Vtemp27[1U])) 
                                                     << 0x10U) 
                                                    | ((QData)((IData)(
                                                                       __Vtemp27[0U])) 
                                                       >> 0x10U))))
                                           : (((QData)((IData)(
                                                               (1U 
                                                                & __Vtemp31[2U]))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  __Vtemp31[1U])) 
                                                  << 0x10U) 
                                                 | ((QData)((IData)(
                                                                    __Vtemp31[0U])) 
                                                    >> 0x10U))))
                                       : (((QData)((IData)(
                                                           (1U 
                                                            & __Vtemp36[2U]))) 
                                           << 0x30U) 
                                          | (((QData)((IData)(
                                                              __Vtemp36[1U])) 
                                              << 0x10U) 
                                             | ((QData)((IData)(
                                                                __Vtemp36[0U])) 
                                                >> 0x10U)))));
    vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125 = 
        (VL_ULL(0x1ffffffff) & ((1U & (IData)((VL_ULL(1) 
                                               & ((VL_ULL(0x1ffffffff8000) 
                                                   + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                                  >> 0x30U))))
                                 ? ((0U != (0xffffU 
                                            & ((IData)(0x8000U) 
                                               + (IData)(vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_2))))
                                     ? (VL_ULL(1) + 
                                        (VL_ULL(0x1ffffffff) 
                                         & ((VL_ULL(0x1ffffffff8000) 
                                             + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                            >> 0x10U)))
                                     : (VL_ULL(0x1ffffffff) 
                                        & ((VL_ULL(0x1ffffffff8000) 
                                            + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                           >> 0x10U)))
                                 : (VL_ULL(0x1ffffffff) 
                                    & ((VL_ULL(0x8000) 
                                        + (((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                                                                        >> 0x2fU))))) 
                                            << 0x30U) 
                                           | vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i)) 
                                       >> 0x10U))));
    vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125_4 
        = (VL_ULL(0x1ffffffff) & ((1U & (IData)((VL_ULL(1) 
                                                 & ((VL_ULL(0x1ffffffff8000) 
                                                     + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                                    >> 0x30U))))
                                   ? ((0U != (0xffffU 
                                              & ((IData)(0x8000U) 
                                                 + (IData)(vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_5))))
                                       ? (VL_ULL(1) 
                                          + (VL_ULL(0x1ffffffff) 
                                             & ((VL_ULL(0x1ffffffff8000) 
                                                 + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                                >> 0x10U)))
                                       : (VL_ULL(0x1ffffffff) 
                                          & ((VL_ULL(0x1ffffffff8000) 
                                              + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                             >> 0x10U)))
                                   : (VL_ULL(0x1ffffffff) 
                                      & ((VL_ULL(0x8000) 
                                          + (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                                                                          >> 0x2fU))))) 
                                              << 0x30U) 
                                             | vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q)) 
                                         >> 0x10U))));
    vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_7 
        = (VL_ULL(0xffffffffffff) & ((1U & (IData)(
                                                   (vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload 
                                                    >> 0x30U)))
                                      ? ((3U != (3U 
                                                 & (IData)(
                                                           (vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload 
                                                            >> 0x2fU))))
                                          ? VL_ULL(0x800000000000)
                                          : vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload)
                                      : ((1U & (IData)(
                                                       (vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload 
                                                        >> 0x2fU)))
                                          ? VL_ULL(0x7fffffffffff)
                                          : vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload)));
    vlTOPp->delta_phi_payload = ((1U & (IData)((vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_7 
                                                >> 0x2fU)))
                                  ? ((0x1ffffU != (0x1ffffU 
                                                   & (IData)(
                                                             (vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_7 
                                                              >> 0x1fU))))
                                      ? 0x80000000U
                                      : (IData)(vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_7))
                                  : ((0U != (0xffffU 
                                             & (IData)(
                                                       (vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_7 
                                                        >> 0x1fU))))
                                      ? 0x7fffffffU
                                      : (IData)(vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_7)));
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
    delta_phi_payload = VL_RAND_RESET_I(32);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_2 = VL_RAND_RESET_Q(49);
    CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_5 = VL_RAND_RESET_Q(49);
    VL_RAND_RESET_W(65, CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_4);
    CFOEstimator__DOT___zz_impulse_cnt = VL_RAND_RESET_I(6);
    CFOEstimator__DOT__impulse_cnt = VL_RAND_RESET_I(6);
    CFOEstimator__DOT___zz_when_SInt_l125 = VL_RAND_RESET_Q(33);
    CFOEstimator__DOT___zz_when_SInt_l125_4 = VL_RAND_RESET_Q(33);
    CFOEstimator__DOT___zz_delta_phi_payload = VL_RAND_RESET_Q(49);
    CFOEstimator__DOT___zz_delta_phi_payload_7 = VL_RAND_RESET_Q(48);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_i = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_q = VL_RAND_RESET_I(16);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i = VL_RAND_RESET_Q(48);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q = VL_RAND_RESET_Q(48);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i = VL_RAND_RESET_Q(48);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q = VL_RAND_RESET_Q(48);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_i = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_q = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1 = VL_RAND_RESET_I(1);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_0 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_1 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_2 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_3 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_4 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_5 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_6 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_7 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_8 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_9 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_10 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_11 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_12 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_13 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_14 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_15 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_16 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_17 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_18 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_19 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_20 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_21 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_22 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_23 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_24 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_25 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_26 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_27 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_28 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_29 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_30 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_31 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_17 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_18 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_19 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_20 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_21 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_22 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_23 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_24 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_25 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_26 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_27 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_28 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_29 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_30 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_1 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_3 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_4 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_5 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_6 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_7 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_8 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_9 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_10 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_11 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_12 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_13 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_14 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_15 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_16 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_17 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_18 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_19 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_20 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_21 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_22 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_23 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_24 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_25 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_26 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_27 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_28 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_29 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_30 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_y = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_31 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_32 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_33 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_34 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_35 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_36 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_37 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_38 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_39 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_40 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_41 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_42 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_43 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_44 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_45 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z = VL_RAND_RESET_I(32);
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
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_46 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_47 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_48 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_49 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_50 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_51 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_52 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_53 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_54 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_55 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_56 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_57 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_58 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_59 = VL_RAND_RESET_I(32);
    CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z_1 = VL_RAND_RESET_I(32);
    __Vm_traceActivity = 0;
}
