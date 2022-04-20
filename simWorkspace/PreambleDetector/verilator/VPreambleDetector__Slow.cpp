// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPreambleDetector.h for the primary calling header

#include "VPreambleDetector.h"
#include "VPreambleDetector__Syms.h"

//==========

VL_CTOR_IMP(VPreambleDetector) {
    VPreambleDetector__Syms* __restrict vlSymsp = __VlSymsp = new VPreambleDetector__Syms(this, name());
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VPreambleDetector::__Vconfigure(VPreambleDetector__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VPreambleDetector::~VPreambleDetector() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VPreambleDetector::_settle__TOP__9(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_settle__TOP__9\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PreambleDetector__DOT__when_PreambleDetector_l67 
        = (0xffU > (IData)(vlTOPp->PreambleDetector__DOT__plateau_cnt));
    vlTOPp->raw_data_out_valid = vlTOPp->PreambleDetector__DOT__raw_data_regNext_valid;
    vlTOPp->raw_data_out_payload_cha_i = vlTOPp->PreambleDetector__DOT__raw_data_regNext_payload_cha_i;
    vlTOPp->raw_data_out_payload_cha_q = vlTOPp->PreambleDetector__DOT__raw_data_regNext_payload_cha_q;
    vlTOPp->pkg_detected = (((IData)(vlTOPp->min_plateau) 
                             <= (IData)(vlTOPp->PreambleDetector__DOT__plateau_cnt)) 
                            & (IData)(vlTOPp->PreambleDetector__DOT__gate_pkg_det));
    vlTOPp->corr_result_valid = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_result_valid;
    vlTOPp->corr_result_payload_cha_i = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_i;
    vlTOPp->corr_result_payload_cha_q = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_q;
    vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_val_i_1 
        = (VL_ULL(0xfffffffff) & (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_i 
                                  - (((QData)((IData)(
                                                      (0xfffU 
                                                       & VL_NEGATE_I((IData)(
                                                                             (1U 
                                                                              & (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_15 
                                                                                >> 0x17U))))))) 
                                      << 0x18U) | (QData)((IData)(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_15)))));
    vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_val_q_1 
        = (VL_ULL(0xfffffffff) & (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_q 
                                  - (((QData)((IData)(
                                                      (0xfffU 
                                                       & VL_NEGATE_I((IData)(
                                                                             (1U 
                                                                              & (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_15 
                                                                                >> 0x17U))))))) 
                                      << 0x18U) | (QData)((IData)(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_15)))));
    vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT___zz_power_val_i 
        = (0xffffffU & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_i 
                        - ((0xf00000U & (VL_NEGATE_I((IData)(
                                                             (1U 
                                                              & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_15 
                                                                 >> 0x13U)))) 
                                         << 0x14U)) 
                           | vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_15)));
    vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT___zz_power_val_q 
        = (0xffffffU & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_q 
                        - ((0xf00000U & (VL_NEGATE_I((IData)(
                                                             (1U 
                                                              & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_15 
                                                                 >> 0x13U)))) 
                                         << 0x14U)) 
                           | vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_15)));
}

void VPreambleDetector::_eval_initial(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_eval_initial\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = (1U & (~ (IData)(vlTOPp->clk)));
    vlTOPp->__Vclklast__TOP__reset = (1U & (~ (IData)(vlTOPp->reset)));
}

void VPreambleDetector::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::final\n"); );
    // Variables
    VPreambleDetector__Syms* __restrict vlSymsp = this->__VlSymsp;
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPreambleDetector::_eval_settle(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_eval_settle\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__9(vlSymsp);
}

void VPreambleDetector::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_ctor_var_reset\n"); );
    // Body
    min_plateau = VL_RAND_RESET_I(8);
    pkg_detected = VL_RAND_RESET_I(1);
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_payload_cha_i = VL_RAND_RESET_I(12);
    raw_data_payload_cha_q = VL_RAND_RESET_I(12);
    raw_data_out_valid = VL_RAND_RESET_I(1);
    raw_data_out_payload_cha_i = VL_RAND_RESET_I(12);
    raw_data_out_payload_cha_q = VL_RAND_RESET_I(12);
    corr_result_valid = VL_RAND_RESET_I(1);
    corr_result_payload_cha_i = VL_RAND_RESET_Q(36);
    corr_result_payload_cha_q = VL_RAND_RESET_Q(36);
    clk = 0;
    reset = 0;
    PreambleDetector__DOT__gate_pkg_det = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__prod_avg_mag = VL_RAND_RESET_Q(36);
    PreambleDetector__DOT__plateau_cnt = VL_RAND_RESET_I(8);
    PreambleDetector__DOT___zz_gate_pkg_det = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__powerMeter_1_power_result_valid_regNext = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__when_PreambleDetector_l67 = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__raw_data_regNext_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__raw_data_regNext_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__raw_data_regNext_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__powerMeter_1__DOT___zz_power_val_i = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__powerMeter_1__DOT___zz_power_val_q = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_i = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_q = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__powerMeter_1__DOT__power_val_i = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__powerMeter_1__DOT__power_val_q = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__powerMeter_1__DOT__sq_i_regNext = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__powerMeter_1__DOT__sq_q_regNext = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__powerMeter_1__DOT__power_result_valid_1 = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_0 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_1 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_2 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_3 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_4 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_5 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_6 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_7 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_8 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_9 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_10 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_11 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_12 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_13 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_14 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_15 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_0 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_1 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_2 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_3 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_4 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_5 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_6 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_7 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_8 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_9 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_10 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_11 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_12 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_13 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_14 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_15 = VL_RAND_RESET_I(20);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_0_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_0_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_0_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_1_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_1_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_1_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_2_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_2_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_2_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_3_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_3_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_3_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_4_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_4_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_4_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_5_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_5_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_5_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_6_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_6_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_6_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_7_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_7_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_7_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_8_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_8_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_8_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_9_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_9_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_9_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_10_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_10_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_10_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_11_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_11_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_11_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_12_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_12_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_12_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_13_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_13_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_13_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_14_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_14_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_14_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_15_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_15_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_15_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_val_i_1 = VL_RAND_RESET_Q(36);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_val_q_1 = VL_RAND_RESET_Q(36);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_i = VL_RAND_RESET_Q(36);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_q = VL_RAND_RESET_Q(36);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_val_i = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_val_q = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_enable = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_result_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_0 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_1 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_2 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_3 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_4 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_5 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_6 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_7 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_8 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_9 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_10 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_11 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_12 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_13 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_14 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_15 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_0 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_1 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_2 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_3 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_4 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_5 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_6 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_7 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_8 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_9 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_10 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_11 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_12 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_13 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_14 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_15 = VL_RAND_RESET_I(24);
    __Vm_traceActivity = 0;
}
