// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCFOCorrector.h for the primary calling header

#include "VCFOCorrector.h"
#include "VCFOCorrector__Syms.h"

//==========

VL_CTOR_IMP(VCFOCorrector) {
    VCFOCorrector__Syms* __restrict vlSymsp = __VlSymsp = new VCFOCorrector__Syms(this, name());
    VCFOCorrector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VCFOCorrector::__Vconfigure(VCFOCorrector__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

VCFOCorrector::~VCFOCorrector() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VCFOCorrector::_settle__TOP__12(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_settle__TOP__12\n"); );
    VCFOCorrector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->rotated_data_valid = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11;
    vlTOPp->phi_correct_valid = vlTOPp->CFOCorrector__DOT__delta_phi_valid_regNext;
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_impulse_cnt 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__impulse_cnt)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_2 
        = ((0x2000000U & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11 
                          << 1U)) | vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11);
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_5 
        = ((0x2000000U & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y 
                          << 1U)) | vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y);
    vlTOPp->CFOCorrector__DOT__cfo_estimator_delta_phi_valid 
        = ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_11) 
           & (0x11U == (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__impulse_cnt)));
    vlTOPp->CFOCorrector__DOT__when_CFOCorrector_l45 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__delta_phi_valid) 
                 | (~ (IData)(vlTOPp->enable))));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_85 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33 
                        >> 0x18U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22 
                                      >> 0x18U)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_85 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_44)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_33 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_22 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_82 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32 
                        >> 0x18U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21 
                                      >> 0x18U)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_82 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_43)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_32 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_21 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_79 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31 
                        >> 0x18U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20 
                                      >> 0x18U)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_79 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_42)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_31 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_20 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_76 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30 
                        >> 0x18U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19 
                                      >> 0x18U)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_76 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_41)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_30 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_19 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_73 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29 
                        >> 0x18U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18 
                                      >> 0x18U)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_73 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_40)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_29 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_18 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_70 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28 
                        >> 0x18U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17 
                                      >> 0x18U)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_70 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_39)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_28 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_17 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_67 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27 
                        >> 0x18U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16 
                                      >> 0x18U)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_67 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_38)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_27 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_16 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_64 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26 
                        >> 0x18U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 
                                      >> 0x18U)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_64 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_37)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_26 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_61 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25 
                        >> 0x18U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14 
                                      >> 0x18U)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_61 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_36)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_25 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_14 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_58 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24 
                        >> 0x18U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13 
                                      >> 0x18U)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_58 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_35)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_24 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_13 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_55 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34)
                  ? (~ (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23 
                        >> 0x18U)) : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12 
                                      >> 0x18U)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_55 
        = (1U & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_34)
                  ? (~ (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_23 
                        >> 0x17U)) : (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_12 
                                      >> 0x17U)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50 
        = (0xffffffU & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                        + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i_1 
        = (0xfffffffU & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                         - ((0xf000000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15 
                                                          >> 0x17U)))) 
                                           << 0x18U)) 
                            | vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q_1 
        = (0xfffffffU & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                         - ((0xf000000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_15 
                                                          >> 0x17U)))) 
                                           << 0x18U)) 
                            | vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_15)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_2 
        = ((0x10000000U & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                           << 1U)) | vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i);
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_5 
        = ((0x10000000U & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                           << 1U)) | vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q);
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw 
        = (0x1fffU & ((0x2000000U & ((IData)(0x3fff000U) 
                                     + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_2))
                       ? ((0U != (0x1fffU & ((IData)(0x1000U) 
                                             + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_2)))
                           ? ((IData)(1U) + (0x1fffU 
                                             & (((IData)(0x3fff000U) 
                                                 + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_2) 
                                                >> 0xdU)))
                           : (0x1fffU & (((IData)(0x3fff000U) 
                                          + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_2) 
                                         >> 0xdU)))
                       : (0x1fffU & (((IData)(0x1000U) 
                                      + ((0x2000000U 
                                          & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11 
                                             << 1U)) 
                                         | vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11)) 
                                     >> 0xdU))));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw 
        = (0x1fffU & ((0x2000000U & ((IData)(0x3fff000U) 
                                     + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_5))
                       ? ((0U != (0x1fffU & ((IData)(0x1000U) 
                                             + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_5)))
                           ? ((IData)(1U) + (0x1fffU 
                                             & (((IData)(0x3fff000U) 
                                                 + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_5) 
                                                >> 0xdU)))
                           : (0x1fffU & (((IData)(0x3fff000U) 
                                          + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_5) 
                                         >> 0xdU)))
                       : (0x1fffU & (((IData)(0x1000U) 
                                      + ((0x2000000U 
                                          & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y 
                                             << 1U)) 
                                         | vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y)) 
                                     >> 0xdU))));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiNext 
        = (0xffffffU & (VL_LTES_III(1,24,24, 0x1921U, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50)
                         ? ((vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                             - (IData)(0x3243U)) + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect)
                         : (VL_GTES_III(1,24,24, 0xffe6dfU, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50)
                             ? ((IData)(0x3243U) + 
                                (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                                 + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect))
                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                                + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect))));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130 
        = (0x1ffffffU & ((0x10000000U & ((IData)(0x1ffffff8U) 
                                         + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_2))
                          ? ((0U != (0xfU & ((IData)(8U) 
                                             + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_2)))
                              ? ((IData)(1U) + (0x1ffffffU 
                                                & (((IData)(0x1ffffff8U) 
                                                    + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_2) 
                                                   >> 4U)))
                              : (0x1ffffffU & (((IData)(0x1ffffff8U) 
                                                + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_2) 
                                               >> 4U)))
                          : (0x1ffffffU & (((IData)(8U) 
                                            + ((0x10000000U 
                                                & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                                                   << 1U)) 
                                               | vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i)) 
                                           >> 4U))));
}

void VCFOCorrector::_settle__TOP__13(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_settle__TOP__13\n"); );
    VCFOCorrector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4 
        = (0x1ffffffU & ((0x10000000U & ((IData)(0x1ffffff8U) 
                                         + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_5))
                          ? ((0U != (0xfU & ((IData)(8U) 
                                             + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_5)))
                              ? ((IData)(1U) + (0x1ffffffU 
                                                & (((IData)(0x1ffffff8U) 
                                                    + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_5) 
                                                   >> 4U)))
                              : (0x1ffffffU & (((IData)(0x1ffffff8U) 
                                                + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_5) 
                                               >> 4U)))
                          : (0x1ffffffU & (((IData)(8U) 
                                            + ((0x10000000U 
                                                & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                                                   << 1U)) 
                                               | vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q)) 
                                           >> 4U))));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_x_raw 
        = (0xfffU & ((0x1000U & (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw))
                      ? ((3U == (3U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw) 
                                       >> 0xbU))) ? (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw)
                          : 0x800U) : ((0x800U & (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw))
                                        ? 0x7ffU : (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw))));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_y_raw 
        = (0xfffU & ((0x1000U & (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw))
                      ? ((3U == (3U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw) 
                                       >> 0xbU))) ? (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw)
                          : 0x800U) : ((0x800U & (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw))
                                        ? 0x7ffU : (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw))));
    if (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_11) {
        vlTOPp->rotated_data_payload_cha_i = (0xfffU 
                                              & (- (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_x_raw)));
        vlTOPp->rotated_data_payload_cha_q = (0xfffU 
                                              & (- (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_y_raw)));
    } else {
        vlTOPp->rotated_data_payload_cha_i = (0xfffU 
                                              & (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_x_raw));
        vlTOPp->rotated_data_payload_cha_q = (0xfffU 
                                              & (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_y_raw));
    }
}

void VCFOCorrector::_eval_initial(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_eval_initial\n"); );
    VCFOCorrector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = (1U & (~ (IData)(vlTOPp->clk)));
    vlTOPp->__Vclklast__TOP__reset = (1U & (~ (IData)(vlTOPp->reset)));
}

void VCFOCorrector::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::final\n"); );
    // Variables
    VCFOCorrector__Syms* __restrict vlSymsp = this->__VlSymsp;
    VCFOCorrector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCFOCorrector::_eval_settle(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_eval_settle\n"); );
    VCFOCorrector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__12(vlSymsp);
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->_settle__TOP__13(vlSymsp);
}

void VCFOCorrector::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_payload_cha_i = VL_RAND_RESET_I(12);
    raw_data_payload_cha_q = VL_RAND_RESET_I(12);
    rotated_data_valid = VL_RAND_RESET_I(1);
    rotated_data_payload_cha_i = VL_RAND_RESET_I(12);
    rotated_data_payload_cha_q = VL_RAND_RESET_I(12);
    enable = VL_RAND_RESET_I(1);
    phi_correct_valid = VL_RAND_RESET_I(1);
    clk = 0;
    reset = 0;
    CFOCorrector__DOT__cfo_estimator_delta_phi_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__mean_cnt = VL_RAND_RESET_I(2);
    CFOCorrector__DOT__delta_phi_mean = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__delta_phi_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__when_CFOCorrector_l45 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__delta_phi_valid_regNext = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_2 = VL_RAND_RESET_I(29);
    CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_5 = VL_RAND_RESET_I(29);
    CFOCorrector__DOT__cfo_estimator__DOT___zz_impulse_cnt = VL_RAND_RESET_I(5);
    CFOCorrector__DOT__cfo_estimator__DOT__impulse_cnt = VL_RAND_RESET_I(5);
    CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4 = VL_RAND_RESET_I(25);
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
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i_1 = VL_RAND_RESET_I(28);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q_1 = VL_RAND_RESET_I(28);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i = VL_RAND_RESET_I(28);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q = VL_RAND_RESET_I(28);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid = VL_RAND_RESET_I(1);
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
    CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50 = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_2 = VL_RAND_RESET_I(26);
    CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_5 = VL_RAND_RESET_I(26);
    CFOCorrector__DOT__phase_rotator__DOT__xy_symbol = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__phi = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__phiNext = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT__phiCorrect = VL_RAND_RESET_I(24);
    CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw = VL_RAND_RESET_I(13);
    CFOCorrector__DOT__phase_rotator__DOT__rotated_x_raw = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw = VL_RAND_RESET_I(13);
    CFOCorrector__DOT__phase_rotator__DOT__rotated_y_raw = VL_RAND_RESET_I(12);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z = VL_RAND_RESET_I(25);
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
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_46 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_47 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_48 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_49 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_50 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_52 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_53 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_54 = VL_RAND_RESET_I(25);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z_1 = VL_RAND_RESET_I(25);
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
    __Vdly__CFOCorrector__DOT__phase_rotator__DOT__xy_symbol = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
