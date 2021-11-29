// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPhaseRotator.h for the primary calling header

#include "VPhaseRotator.h"
#include "VPhaseRotator__Syms.h"

//==========

VL_CTOR_IMP(VPhaseRotator) {
    VPhaseRotator__Syms* __restrict vlSymsp = __VlSymsp = new VPhaseRotator__Syms(this, name());
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VPhaseRotator::__Vconfigure(VPhaseRotator__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VPhaseRotator::~VPhaseRotator() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VPhaseRotator::_settle__TOP__9(VPhaseRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_settle__TOP__9\n"); );
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->rotated_data_valid = vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_15;
    vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_2 
        = (((QData)((IData)((1U & (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 
                                   >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15)));
    vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_5 
        = (((QData)((IData)((1U & (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y 
                                   >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y)));
    vlTOPp->PhaseRotator__DOT___zz_when_PhaseRotator_l47 
        = (vlTOPp->PhaseRotator__DOT__phi + vlTOPp->PhaseRotator__DOT__phiCorrect);
    vlTOPp->PhaseRotator__DOT___zz_rotated_x_raw = 
        (0x1ffffU & ((1U & (IData)((VL_ULL(1) & ((VL_ULL(0x1ffff8000) 
                                                  + vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                                 >> 0x20U))))
                      ? ((0U != (0xffffU & ((IData)(0x8000U) 
                                            + (IData)(vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_2))))
                          ? ((IData)(1U) + (IData)(
                                                   (VL_ULL(0x1ffff) 
                                                    & ((VL_ULL(0x1ffff8000) 
                                                        + vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                                       >> 0x10U))))
                          : (IData)((VL_ULL(0x1ffff) 
                                     & ((VL_ULL(0x1ffff8000) 
                                         + vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                        >> 0x10U))))
                      : (IData)((VL_ULL(0x1ffff) & 
                                 ((VL_ULL(0x8000) + 
                                   (((QData)((IData)(
                                                     (1U 
                                                      & (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 
                                                         >> 0x1fU)))) 
                                     << 0x20U) | (QData)((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15)))) 
                                  >> 0x10U)))));
    vlTOPp->PhaseRotator__DOT___zz_rotated_y_raw = 
        (0x1ffffU & ((1U & (IData)((VL_ULL(1) & ((VL_ULL(0x1ffff8000) 
                                                  + vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                                 >> 0x20U))))
                      ? ((0U != (0xffffU & ((IData)(0x8000U) 
                                            + (IData)(vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_5))))
                          ? ((IData)(1U) + (IData)(
                                                   (VL_ULL(0x1ffff) 
                                                    & ((VL_ULL(0x1ffff8000) 
                                                        + vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                                       >> 0x10U))))
                          : (IData)((VL_ULL(0x1ffff) 
                                     & ((VL_ULL(0x1ffff8000) 
                                         + vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                        >> 0x10U))))
                      : (IData)((VL_ULL(0x1ffff) & 
                                 ((VL_ULL(0x8000) + 
                                   (((QData)((IData)(
                                                     (1U 
                                                      & (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y 
                                                         >> 0x1fU)))) 
                                     << 0x20U) | (QData)((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y)))) 
                                  >> 0x10U)))));
    vlTOPp->PhaseRotator__DOT__phiNext = (VL_LTS_III(1,32,32, 0x1921fU, vlTOPp->PhaseRotator__DOT___zz_when_PhaseRotator_l47)
                                           ? ((vlTOPp->PhaseRotator__DOT__phi 
                                               - (IData)(0x3243fU)) 
                                              + vlTOPp->PhaseRotator__DOT__phiCorrect)
                                           : (VL_GTS_III(1,32,32, 0xfffe6de1U, vlTOPp->PhaseRotator__DOT___zz_when_PhaseRotator_l47)
                                               ? ((IData)(0x3243fU) 
                                                  + 
                                                  (vlTOPp->PhaseRotator__DOT__phi 
                                                   + vlTOPp->PhaseRotator__DOT__phiCorrect))
                                               : (vlTOPp->PhaseRotator__DOT__phi 
                                                  + vlTOPp->PhaseRotator__DOT__phiCorrect)));
    vlTOPp->PhaseRotator__DOT__rotated_x_raw = (0xffffU 
                                                & ((0x10000U 
                                                    & vlTOPp->PhaseRotator__DOT___zz_rotated_x_raw)
                                                    ? 
                                                   ((3U 
                                                     != 
                                                     (3U 
                                                      & (vlTOPp->PhaseRotator__DOT___zz_rotated_x_raw 
                                                         >> 0xfU)))
                                                     ? 0x8000U
                                                     : vlTOPp->PhaseRotator__DOT___zz_rotated_x_raw)
                                                    : 
                                                   ((0x8000U 
                                                     & vlTOPp->PhaseRotator__DOT___zz_rotated_x_raw)
                                                     ? 0x7fffU
                                                     : vlTOPp->PhaseRotator__DOT___zz_rotated_x_raw)));
    vlTOPp->PhaseRotator__DOT__rotated_y_raw = (0xffffU 
                                                & ((0x10000U 
                                                    & vlTOPp->PhaseRotator__DOT___zz_rotated_y_raw)
                                                    ? 
                                                   ((3U 
                                                     != 
                                                     (3U 
                                                      & (vlTOPp->PhaseRotator__DOT___zz_rotated_y_raw 
                                                         >> 0xfU)))
                                                     ? 0x8000U
                                                     : vlTOPp->PhaseRotator__DOT___zz_rotated_y_raw)
                                                    : 
                                                   ((0x8000U 
                                                     & vlTOPp->PhaseRotator__DOT___zz_rotated_y_raw)
                                                     ? 0x7fffU
                                                     : vlTOPp->PhaseRotator__DOT___zz_rotated_y_raw)));
    vlTOPp->rotated_data_payload_cha_i = (0xffffU & 
                                          ((IData)(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_15)
                                            ? (IData)(vlTOPp->PhaseRotator__DOT__rotated_x_raw)
                                            : VL_NEGATE_I((IData)(vlTOPp->PhaseRotator__DOT__rotated_x_raw))));
    vlTOPp->rotated_data_payload_cha_q = (0xffffU & 
                                          ((IData)(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_15)
                                            ? (IData)(vlTOPp->PhaseRotator__DOT__rotated_y_raw)
                                            : VL_NEGATE_I((IData)(vlTOPp->PhaseRotator__DOT__rotated_y_raw))));
}

void VPhaseRotator::_eval_initial(VPhaseRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_eval_initial\n"); );
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VPhaseRotator::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::final\n"); );
    // Variables
    VPhaseRotator__Syms* __restrict vlSymsp = this->__VlSymsp;
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPhaseRotator::_eval_settle(VPhaseRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_eval_settle\n"); );
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__9(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VPhaseRotator::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_payload_cha_i = VL_RAND_RESET_I(16);
    raw_data_payload_cha_q = VL_RAND_RESET_I(16);
    phiCorrect_valid = VL_RAND_RESET_I(1);
    phiCorrect_payload = VL_RAND_RESET_I(32);
    rotated_data_valid = VL_RAND_RESET_I(1);
    rotated_data_payload_cha_i = VL_RAND_RESET_I(16);
    rotated_data_payload_cha_q = VL_RAND_RESET_I(16);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    PhaseRotator__DOT___zz_when_PhaseRotator_l47 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_2 = VL_RAND_RESET_Q(33);
    PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_5 = VL_RAND_RESET_Q(33);
    PhaseRotator__DOT__xy_symbol = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__phi = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__phiNext = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__phiCorrect = VL_RAND_RESET_I(32);
    PhaseRotator__DOT___zz_rotated_x_raw = VL_RAND_RESET_I(17);
    PhaseRotator__DOT__rotated_x_raw = VL_RAND_RESET_I(16);
    PhaseRotator__DOT___zz_rotated_y_raw = VL_RAND_RESET_I(17);
    PhaseRotator__DOT__rotated_y_raw = VL_RAND_RESET_I(16);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_12 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_13 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_14 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_15 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_46 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_47 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_48 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_49 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_50 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_52 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_53 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_54 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_55 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_56 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_57 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_58 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_59 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z_1 = VL_RAND_RESET_I(32);
    PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_0 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_1 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_2 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_3 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_4 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_5 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_6 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_7 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_8 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_9 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_10 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_11 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_12 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_13 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_14 = VL_RAND_RESET_I(1);
    PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_15 = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
