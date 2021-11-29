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

void VCFOCorrector::_settle__TOP__17(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_settle__TOP__17\n"); );
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp21[3];
    WData/*95:0*/ __Vtemp22[3];
    WData/*95:0*/ __Vtemp25[3];
    WData/*95:0*/ __Vtemp26[3];
    WData/*95:0*/ __Vtemp29[3];
    WData/*95:0*/ __Vtemp30[3];
    WData/*95:0*/ __Vtemp33[3];
    WData/*95:0*/ __Vtemp34[3];
    WData/*95:0*/ __Vtemp35[3];
    // Body
    vlTOPp->rotated_data_valid = vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_15;
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_impulse_cnt 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__impulse_cnt)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_delta_phi_payload_4[0U] 
        = (IData)(VL_MULS_QQQ(64,64,64, VL_ULL(0x800), 
                              VL_EXTENDS_QI(64,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_delta_phi_payload_4[1U] 
        = (IData)((VL_MULS_QQQ(64,64,64, VL_ULL(0x800), 
                               VL_EXTENDS_QI(64,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z)) 
                   >> 0x20U));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_delta_phi_payload_4[2U] 
        = (1U & (IData)((VL_MULS_QQQ(64,64,64, VL_ULL(0x800), 
                                     VL_EXTENDS_QI(64,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z)) 
                         >> 0x3fU)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_2 
        = (((QData)((IData)((1U & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 
                                   >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_5 
        = (((QData)((IData)((1U & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y 
                                   >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l47 
        = (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
           + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect);
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i 
        = (VL_ULL(0xffffffffffff) & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                                     - (((QData)((IData)(
                                                         (0xffffU 
                                                          & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31)))));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q 
        = (VL_ULL(0xffffffffffff) & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                                     - (((QData)((IData)(
                                                         (0xffffU 
                                                          & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_31 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_31)))));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_2 
        = (((QData)((IData)((1U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                                           >> 0x2fU))))) 
            << 0x30U) | vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i);
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_5 
        = (((QData)((IData)((1U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                                           >> 0x2fU))))) 
            << 0x30U) | vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q);
    vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid 
        = ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_15) 
           & (IData)(vlTOPp->enable));
    __Vtemp21[0U] = 0xffff8000U;
    __Vtemp21[1U] = 0xffffffffU;
    __Vtemp21[2U] = 1U;
    VL_ADD_W(3, __Vtemp22, __Vtemp21, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_delta_phi_payload_4);
    __Vtemp25[0U] = 0xffff8000U;
    __Vtemp25[1U] = 0xffffffffU;
    __Vtemp25[2U] = 1U;
    VL_ADD_W(3, __Vtemp26, __Vtemp25, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_delta_phi_payload_4);
    __Vtemp29[0U] = 0xffff8000U;
    __Vtemp29[1U] = 0xffffffffU;
    __Vtemp29[2U] = 1U;
    VL_ADD_W(3, __Vtemp30, __Vtemp29, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_delta_phi_payload_4);
    __Vtemp33[0U] = 0x8000U;
    __Vtemp33[1U] = 0U;
    __Vtemp33[2U] = 0U;
    __Vtemp34[0U] = (IData)(VL_MULS_QQQ(64,64,64, VL_ULL(0x800), 
                                        VL_EXTENDS_QI(64,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z)));
    __Vtemp34[1U] = (IData)((VL_MULS_QQQ(64,64,64, VL_ULL(0x800), 
                                         VL_EXTENDS_QI(64,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z)) 
                             >> 0x20U));
    __Vtemp34[2U] = (1U & (IData)((VL_MULS_QQQ(64,64,64, VL_ULL(0x800), 
                                               VL_EXTENDS_QI(64,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z)) 
                                   >> 0x3fU)));
    VL_ADD_W(3, __Vtemp35, __Vtemp33, __Vtemp34);
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload 
        = (VL_ULL(0x1ffffffffffff) & ((1U & __Vtemp22[2U])
                                       ? ((0U != (0xffffU 
                                                  & ((IData)(0x8000U) 
                                                     + 
                                                     vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_delta_phi_payload_4[0U])))
                                           ? (VL_ULL(1) 
                                              + (((QData)((IData)(
                                                                  (1U 
                                                                   & __Vtemp26[2U]))) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(
                                                                     __Vtemp26[1U])) 
                                                     << 0x10U) 
                                                    | ((QData)((IData)(
                                                                       __Vtemp26[0U])) 
                                                       >> 0x10U))))
                                           : (((QData)((IData)(
                                                               (1U 
                                                                & __Vtemp30[2U]))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  __Vtemp30[1U])) 
                                                  << 0x10U) 
                                                 | ((QData)((IData)(
                                                                    __Vtemp30[0U])) 
                                                    >> 0x10U))))
                                       : (((QData)((IData)(
                                                           (1U 
                                                            & __Vtemp35[2U]))) 
                                           << 0x30U) 
                                          | (((QData)((IData)(
                                                              __Vtemp35[1U])) 
                                              << 0x10U) 
                                             | ((QData)((IData)(
                                                                __Vtemp35[0U])) 
                                                >> 0x10U)))));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw 
        = (0x1ffffU & ((1U & (IData)((VL_ULL(1) & (
                                                   (VL_ULL(0x1ffff8000) 
                                                    + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                                   >> 0x20U))))
                        ? ((0U != (0xffffU & ((IData)(0x8000U) 
                                              + (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_2))))
                            ? ((IData)(1U) + (IData)(
                                                     (VL_ULL(0x1ffff) 
                                                      & ((VL_ULL(0x1ffff8000) 
                                                          + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                                         >> 0x10U))))
                            : (IData)((VL_ULL(0x1ffff) 
                                       & ((VL_ULL(0x1ffff8000) 
                                           + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                          >> 0x10U))))
                        : (IData)((VL_ULL(0x1ffff) 
                                   & ((VL_ULL(0x8000) 
                                       + (((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 
                                                               >> 0x1fU)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15)))) 
                                      >> 0x10U)))));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw 
        = (0x1ffffU & ((1U & (IData)((VL_ULL(1) & (
                                                   (VL_ULL(0x1ffff8000) 
                                                    + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                                   >> 0x20U))))
                        ? ((0U != (0xffffU & ((IData)(0x8000U) 
                                              + (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_5))))
                            ? ((IData)(1U) + (IData)(
                                                     (VL_ULL(0x1ffff) 
                                                      & ((VL_ULL(0x1ffff8000) 
                                                          + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                                         >> 0x10U))))
                            : (IData)((VL_ULL(0x1ffff) 
                                       & ((VL_ULL(0x1ffff8000) 
                                           + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                          >> 0x10U))))
                        : (IData)((VL_ULL(0x1ffff) 
                                   & ((VL_ULL(0x8000) 
                                       + (((QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y 
                                                               >> 0x1fU)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y)))) 
                                      >> 0x10U)))));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiNext 
        = (VL_LTS_III(1,32,32, 0x1921fU, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l47)
            ? ((vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                - (IData)(0x3243fU)) + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect)
            : (VL_GTS_III(1,32,32, 0xfffe6de1U, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l47)
                ? ((IData)(0x3243fU) + (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                                        + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect))
                : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                   + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect)));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125 
        = (VL_ULL(0x1ffffffff) & ((1U & (IData)((VL_ULL(1) 
                                                 & ((VL_ULL(0x1ffffffff8000) 
                                                     + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                                    >> 0x30U))))
                                   ? ((0U != (0xffffU 
                                              & ((IData)(0x8000U) 
                                                 + (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_2))))
                                       ? (VL_ULL(1) 
                                          + (VL_ULL(0x1ffffffff) 
                                             & ((VL_ULL(0x1ffffffff8000) 
                                                 + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                                >> 0x10U)))
                                       : (VL_ULL(0x1ffffffff) 
                                          & ((VL_ULL(0x1ffffffff8000) 
                                              + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                             >> 0x10U)))
                                   : (VL_ULL(0x1ffffffff) 
                                      & ((VL_ULL(0x8000) 
                                          + (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                                                                          >> 0x2fU))))) 
                                              << 0x30U) 
                                             | vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i)) 
                                         >> 0x10U))));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125_4 
        = (VL_ULL(0x1ffffffff) & ((1U & (IData)((VL_ULL(1) 
                                                 & ((VL_ULL(0x1ffffffff8000) 
                                                     + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                                    >> 0x30U))))
                                   ? ((0U != (0xffffU 
                                              & ((IData)(0x8000U) 
                                                 + (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_5))))
                                       ? (VL_ULL(1) 
                                          + (VL_ULL(0x1ffffffff) 
                                             & ((VL_ULL(0x1ffffffff8000) 
                                                 + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                                >> 0x10U)))
                                       : (VL_ULL(0x1ffffffff) 
                                          & ((VL_ULL(0x1ffffffff8000) 
                                              + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                             >> 0x10U)))
                                   : (VL_ULL(0x1ffffffff) 
                                      & ((VL_ULL(0x8000) 
                                          + (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                                                                          >> 0x2fU))))) 
                                              << 0x30U) 
                                             | vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q)) 
                                         >> 0x10U))));
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
        = (VL_ULL(0xffffffffffff) & ((1U & (IData)(
                                                   (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload 
                                                    >> 0x30U)))
                                      ? ((3U != (3U 
                                                 & (IData)(
                                                           (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload 
                                                            >> 0x2fU))))
                                          ? VL_ULL(0x800000000000)
                                          : vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload)
                                      : ((1U & (IData)(
                                                       (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload 
                                                        >> 0x2fU)))
                                          ? VL_ULL(0x7fffffffffff)
                                          : vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_x_raw 
        = (0xffffU & ((0x10000U & vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw)
                       ? ((3U != (3U & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw 
                                        >> 0xfU))) ? 0x8000U
                           : vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw)
                       : ((0x8000U & vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw)
                           ? 0x7fffU : vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw)));
    vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_y_raw 
        = (0xffffU & ((0x10000U & vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw)
                       ? ((3U != (3U & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw 
                                        >> 0xfU))) ? 0x8000U
                           : vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw)
                       : ((0x8000U & vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw)
                           ? 0x7fffU : vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw)));
    vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_i 
        = (0xffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_15)
                       ? (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_x_raw)
                       : VL_NEGATE_I((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_x_raw))));
    vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_q 
        = (0xffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_15)
                       ? (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_y_raw)
                       : VL_NEGATE_I((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_y_raw))));
    vlTOPp->rotated_data_payload_cha_i = (0xffffU & 
                                          VL_NEGATE_I((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_i)));
    vlTOPp->rotated_data_payload_cha_q = vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_q;
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1 
        = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_i)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_i) 
                                               + (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_q)))));
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
    vlTOPp->_settle__TOP__17(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VCFOCorrector::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_payload_cha_i = VL_RAND_RESET_I(16);
    raw_data_payload_cha_q = VL_RAND_RESET_I(16);
    rotated_data_valid = VL_RAND_RESET_I(1);
    rotated_data_payload_cha_i = VL_RAND_RESET_I(16);
    rotated_data_payload_cha_q = VL_RAND_RESET_I(16);
    enable = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l47 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_2 = VL_RAND_RESET_Q(33);
    CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_5 = VL_RAND_RESET_Q(33);
    CFOCorrector__DOT__phase_rotator__DOT__xy_symbol = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__phi = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__phiNext = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__phiCorrect = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw = VL_RAND_RESET_I(17);
    CFOCorrector__DOT__phase_rotator__DOT__rotated_x_raw = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw = VL_RAND_RESET_I(17);
    CFOCorrector__DOT__phase_rotator__DOT__rotated_y_raw = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z = VL_RAND_RESET_I(32);
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
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_12 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_13 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_14 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_15 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_46 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_47 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_48 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_49 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_50 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_52 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_53 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_54 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_55 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_56 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_57 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_58 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_59 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z_1 = VL_RAND_RESET_I(32);
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
    CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_12 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_13 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_14 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_15 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_2 = VL_RAND_RESET_Q(49);
    CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_5 = VL_RAND_RESET_Q(49);
    VL_RAND_RESET_W(65, CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_delta_phi_payload_4);
    CFOCorrector__DOT__cfo_estimator__DOT___zz_impulse_cnt = VL_RAND_RESET_I(7);
    CFOCorrector__DOT__cfo_estimator__DOT__impulse_cnt = VL_RAND_RESET_I(7);
    CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125 = VL_RAND_RESET_Q(33);
    CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125_4 = VL_RAND_RESET_Q(33);
    CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload = VL_RAND_RESET_Q(49);
    CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 = VL_RAND_RESET_Q(48);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_i = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_q = VL_RAND_RESET_I(16);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i = VL_RAND_RESET_Q(48);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q = VL_RAND_RESET_Q(48);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i = VL_RAND_RESET_Q(48);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q = VL_RAND_RESET_Q(48);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_i = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_q = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_17 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_18 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_19 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_20 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_21 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_22 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_23 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_24 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_25 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_26 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_27 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_28 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_29 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_30 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_0 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_1 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_2 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_3 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_4 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_5 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_6 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_7 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_8 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_9 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_10 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_11 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_12 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_13 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_14 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_15 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_16 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_17 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_18 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_19 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_20 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_21 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_22 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_23 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_24 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_25 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_26 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_27 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_28 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_29 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_30 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_31 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_1 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_2 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_3 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_4 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_5 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_6 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_7 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_8 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_9 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_10 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_11 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_12 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_13 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_14 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_16 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_17 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_18 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_19 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_20 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_21 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_22 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_23 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_24 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_25 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_26 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_27 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_28 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_29 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_30 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_y = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_31 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_32 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_33 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_34 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_35 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_36 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_37 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_38 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_39 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_40 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_41 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_42 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_43 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_44 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_45 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z = VL_RAND_RESET_I(32);
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
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_12 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_13 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_14 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_15 = VL_RAND_RESET_I(1);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_46 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_47 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_48 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_49 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_50 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_51 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_52 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_53 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_54 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_55 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_56 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_57 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_58 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_59 = VL_RAND_RESET_I(32);
    CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z_1 = VL_RAND_RESET_I(32);
    __Vm_traceActivity = 0;
}
