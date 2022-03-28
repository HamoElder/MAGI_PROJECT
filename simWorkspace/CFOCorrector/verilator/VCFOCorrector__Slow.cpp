// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCFOCorrector.h for the primary calling header

#include "VCFOCorrector.h"
#include "VCFOCorrector__Syms.h"

//==========

VL_CTOR_IMP(VCFOCorrector) {
    VCFOCorrector__Syms* __restrict vlSymsp = __VlSymsp = new VCFOCorrector__Syms(this, name());
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VCFOCorrector::__Vconfigure(VCFOCorrector__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VCFOCorrector::~VCFOCorrector() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VCFOCorrector::_settle__TOP__21(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_settle__TOP__21\n"); );
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->rotated_data_valid = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11;
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_impulse_cnt 
        = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__impulse_cnt)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_2 
        = ((0x1000000U & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11 
                          << 1U)) | vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11);
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_5 
        = ((0x1000000U & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y 
                          << 1U)) | vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y);
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_85 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_85 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_44)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_33 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_22 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_82 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_82 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_43)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_32 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_21 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_79 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_79 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_42)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_31 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_20 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_76 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_76 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_41)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_30 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_19 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_73 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_73 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_40)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_29 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_18 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_70 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_70 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_39)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_28 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_17 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_67 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_67 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_38)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_27 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_16 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_64 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_64 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_37)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_26 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_61 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_61 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_36)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_25 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_14 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_58 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_58 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_35)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_24 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_13 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_55 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_55 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_34)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_23 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_12 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50 
        = (0xffffffU & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                        + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i 
        = (VL_ULL(0xfffffffffff) & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                                    - (((QData)((IData)(
                                                        (0xfffffU 
                                                         & VL_NEGATE_I((IData)(
                                                                               (1U 
                                                                                & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31 
                                                                                >> 0x17U))))))) 
                                        << 0x18U) | (QData)((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31)))));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q 
        = (VL_ULL(0xfffffffffff) & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                                    - (((QData)((IData)(
                                                        (0xfffffU 
                                                         & VL_NEGATE_I((IData)(
                                                                               (1U 
                                                                                & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_31 
                                                                                >> 0x17U))))))) 
                                        << 0x18U) | (QData)((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_31)))));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_2 
        = (((QData)((IData)((1U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                                           >> 0x2bU))))) 
            << 0x2cU) | vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i);
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_5 
        = (((QData)((IData)((1U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                                           >> 0x2bU))))) 
            << 0x2cU) | vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q);
    vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid 
        = ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) 
           & (IData)(vlTOPp->enable));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw 
        = (0x1fffU & ((0x1000000U & ((IData)(0x1fff800U) 
                                     + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_2))
                       ? ((0U != (0xfffU & ((IData)(0x800U) 
                                            + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_2)))
                           ? ((IData)(1U) + (0x1fffU 
                                             & (((IData)(0x1fff800U) 
                                                 + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                                >> 0xcU)))
                           : (0x1fffU & (((IData)(0x1fff800U) 
                                          + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                         >> 0xcU)))
                       : (0x1fffU & (((IData)(0x800U) 
                                      + ((0x1000000U 
                                          & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11 
                                             << 1U)) 
                                         | vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11)) 
                                     >> 0xcU))));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw 
        = (0x1fffU & ((0x1000000U & ((IData)(0x1fff800U) 
                                     + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_5))
                       ? ((0U != (0xfffU & ((IData)(0x800U) 
                                            + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_5)))
                           ? ((IData)(1U) + (0x1fffU 
                                             & (((IData)(0x1fff800U) 
                                                 + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                                >> 0xcU)))
                           : (0x1fffU & (((IData)(0x1fff800U) 
                                          + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                         >> 0xcU)))
                       : (0x1fffU & (((IData)(0x800U) 
                                      + ((0x1000000U 
                                          & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y 
                                             << 1U)) 
                                         | vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y)) 
                                     >> 0xcU))));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiNext 
        = (0xffffffU & (VL_LTS_III(1,24,24, 0x1921U, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50)
                         ? ((vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                             - (IData)(0x3243U)) + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect)
                         : (VL_GTS_III(1,24,24, 0xffe6dfU, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50)
                             ? ((IData)(0x3243U) + 
                                (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                                 + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect))
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                                + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect))));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125 
        = (0x1ffffffU & ((1U & (IData)((VL_ULL(1) & 
                                        ((VL_ULL(0x1ffffff80000) 
                                          + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                         >> 0x2cU))))
                          ? ((0U != (0xfffffU & ((IData)(0x80000U) 
                                                 + (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_2))))
                              ? ((IData)(1U) + (IData)(
                                                       (VL_ULL(0x1ffffff) 
                                                        & ((VL_ULL(0x1ffffff80000) 
                                                            + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                                           >> 0x14U))))
                              : (IData)((VL_ULL(0x1ffffff) 
                                         & ((VL_ULL(0x1ffffff80000) 
                                             + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                            >> 0x14U))))
                          : (IData)((VL_ULL(0x1ffffff) 
                                     & ((VL_ULL(0x80000) 
                                         + (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                                                                         >> 0x2bU))))) 
                                             << 0x2cU) 
                                            | vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i)) 
                                        >> 0x14U)))));
}

void VCFOCorrector::_settle__TOP__22(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_settle__TOP__22\n"); );
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125_4 
        = (0x1ffffffU & ((1U & (IData)((VL_ULL(1) & 
                                        ((VL_ULL(0x1ffffff80000) 
                                          + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                         >> 0x2cU))))
                          ? ((0U != (0xfffffU & ((IData)(0x80000U) 
                                                 + (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_5))))
                              ? ((IData)(1U) + (IData)(
                                                       (VL_ULL(0x1ffffff) 
                                                        & ((VL_ULL(0x1ffffff80000) 
                                                            + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                                           >> 0x14U))))
                              : (IData)((VL_ULL(0x1ffffff) 
                                         & ((VL_ULL(0x1ffffff80000) 
                                             + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                            >> 0x14U))))
                          : (IData)((VL_ULL(0x1ffffff) 
                                     & ((VL_ULL(0x80000) 
                                         + (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                                                                         >> 0x2bU))))) 
                                             << 0x2cU) 
                                            | vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q)) 
                                        >> 0x14U)))));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_x_raw 
        = (0xfffU & ((0x1000U & (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw))
                      ? ((3U != (3U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw) 
                                       >> 0xbU))) ? 0x800U
                          : (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw))
                      : ((0x800U & (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw))
                          ? 0x7ffU : (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw))));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_y_raw 
        = (0xfffU & ((0x1000U & (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw))
                      ? ((3U != (3U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw) 
                                       >> 0xbU))) ? 0x800U
                          : (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw))
                      : ((0x800U & (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw))
                          ? 0x7ffU : (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw))));
    vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_i 
        = (0xfffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_11)
                      ? (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_x_raw)
                      : VL_NEGATE_I((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_x_raw))));
    vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_q 
        = (0xfffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_11)
                      ? (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_y_raw)
                      : VL_NEGATE_I((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_y_raw))));
    vlTOPp->rotated_data_payload_cha_i = vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_i;
    vlTOPp->rotated_data_payload_cha_q = vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_q;
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1 
        = (0xffffffU & VL_MULS_III(24,24,24, (0xffffffU 
                                              & VL_EXTENDS_II(24,12, (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_i))), 
                                   (0xffffffU & VL_EXTENDS_II(24,12, 
                                                              (0xfffU 
                                                               & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_i) 
                                                                  + (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_q)))))));
}

void VCFOCorrector::_eval_initial(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_eval_initial\n"); );
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VCFOCorrector::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::final\n"); );
    // Variables
    VCFOCorrector__Syms* __restrict vlSymsp = this->__VlSymsp;
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCFOCorrector::_eval_settle(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_eval_settle\n"); );
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__21(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__22(vlSymsp);
}

void VCFOCorrector::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_ctor_var_reset\n"); );
    // Body
    ref_data_valid = VL_RAND_RESET_I(1);
    ref_data_payload_cha_i = VL_RAND_RESET_I(12);
    ref_data_payload_cha_q = VL_RAND_RESET_I(12);
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_payload_cha_i = VL_RAND_RESET_I(12);
    raw_data_payload_cha_q = VL_RAND_RESET_I(12);
    rotated_data_valid = VL_RAND_RESET_I(1);
    rotated_data_payload_cha_i = VL_RAND_RESET_I(12);
    rotated_data_payload_cha_q = VL_RAND_RESET_I(12);
    enable = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_2 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_5 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__xy_symbol = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__phi = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__phiNext = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__phiCorrect = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw = VL_RAND_RESET_I(13);
    CFOCorrector__DOT__phase_rotator__DOT__rotated_x_raw = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw = VL_RAND_RESET_I(13);
    CFOCorrector__DOT__phase_rotator__DOT__rotated_y_raw = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_46 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_47 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_48 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_49 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_50 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_52 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_53 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_54 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z_1 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_55 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_58 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_61 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_64 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_67 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_70 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_73 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_76 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_79 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_82 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_85 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_0 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_1 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_2 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_3 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_4 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_5 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_6 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_7 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_8 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_9 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_10 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_11 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_2 = VL_RAND_RESET_Q(45);
    CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_5 = VL_RAND_RESET_Q(45);
    CFOCorrector__DOT__cfo_estimator__DOT___zz_impulse_cnt = VL_RAND_RESET_I(6);
    CFOCorrector__DOT__cfo_estimator__DOT__impulse_cnt = VL_RAND_RESET_I(6);
    CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125_4 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_i = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_q = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i = VL_RAND_RESET_Q(44);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q = VL_RAND_RESET_Q(44);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i = VL_RAND_RESET_Q(44);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q = VL_RAND_RESET_Q(44);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_i = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_q = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_17 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_18 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_19 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_20 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_21 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_22 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_23 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_24 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_25 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_26 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_27 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_28 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_29 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_30 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_0 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_1 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_2 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_3 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_4 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_5 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_6 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_7 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_8 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_9 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_10 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_11 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_12 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_13 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_14 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_15 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_16 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_17 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_18 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_19 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_20 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_21 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_22 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_23 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_24 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_25 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_26 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_27 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_28 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_29 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_30 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_31 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_1 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_2 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_3 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_4 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_5 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_6 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_7 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_8 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_9 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_10 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_11 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_12 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_13 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_14 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_16 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_17 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_18 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_19 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_20 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_21 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_22 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_y = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_23 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_24 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_25 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_26 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_27 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_28 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_29 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_30 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_31 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_32 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_33 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_1 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_2 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_3 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_4 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_5 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_6 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_7 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_8 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_9 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_10 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_11 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_34 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_35 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_36 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_37 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_38 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_39 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_40 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_41 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_42 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_43 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_44 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_45 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_46 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_47 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_48 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_49 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_50 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_51 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_52 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_53 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_54 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z_1 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_55 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_58 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_61 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_64 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_67 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_70 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_73 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_76 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_79 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_82 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_85 = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
