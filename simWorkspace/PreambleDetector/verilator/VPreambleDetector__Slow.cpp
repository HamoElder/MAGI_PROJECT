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

void VPreambleDetector::_settle__TOP__2(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_settle__TOP__2\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->raw_data_out_valid = vlTOPp->raw_data_valid;
    vlTOPp->raw_data_out_payload_cha_i = vlTOPp->raw_data_payload_cha_i;
    vlTOPp->raw_data_out_payload_cha_q = vlTOPp->raw_data_payload_cha_q;
    vlTOPp->PreambleDetector__DOT___zz_power_pkg_det_1 
        = (0x7fffffffU & ((vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_i 
                           >> 1U) + ((0x40000000U & 
                                      (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_i 
                                       >> 1U)) | (0x3fffffffU 
                                                  & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_i 
                                                     >> 2U)))));
    vlTOPp->pkg_detected = ((IData)(vlTOPp->PreambleDetector__DOT__gate_pkg_det) 
                            & (IData)(vlTOPp->PreambleDetector__DOT__power_pkg_det));
    vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT___zz_power_val_i 
        = (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_i 
           - ((0xf8000000U & (VL_NEGATE_I((IData)((1U 
                                                   & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_31 
                                                      >> 0x1aU)))) 
                              << 0x1bU)) | vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_31));
    vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT___zz_power_val_q 
        = (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_q 
           - ((0xf8000000U & (VL_NEGATE_I((IData)((1U 
                                                   & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_31 
                                                      >> 0x1aU)))) 
                              << 0x1bU)) | vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_31));
    vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_val_i 
        = (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_i 
           - vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_31);
    vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_val_q 
        = (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_q 
           - vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_31);
    vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__k1 
        = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_15_payload_cha_i)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & ((IData)(vlTOPp->raw_data_payload_cha_i) 
                                               + (IData)(vlTOPp->raw_data_payload_cha_q)))));
}

void VPreambleDetector::_eval_initial(VPreambleDetector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_eval_initial\n"); );
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
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
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VPreambleDetector::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPreambleDetector::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_payload_cha_i = VL_RAND_RESET_I(16);
    raw_data_payload_cha_q = VL_RAND_RESET_I(16);
    raw_data_out_valid = VL_RAND_RESET_I(1);
    raw_data_out_payload_cha_i = VL_RAND_RESET_I(16);
    raw_data_out_payload_cha_q = VL_RAND_RESET_I(16);
    gate_threshold = VL_RAND_RESET_I(32);
    pkg_detected = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    PreambleDetector__DOT___zz_power_pkg_det_1 = VL_RAND_RESET_I(31);
    PreambleDetector__DOT__gate_pkg_det = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__prod_avg_mag = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__power_pkg_det = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__powerMeter_1__DOT___zz_power_val_i = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__powerMeter_1__DOT___zz_power_val_q = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_i = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_q = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__powerMeter_1__DOT__power_val_i = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__powerMeter_1__DOT__power_val_q = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__powerMeter_1__DOT__sq_i_regNext = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__powerMeter_1__DOT__sq_q_regNext = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__powerMeter_1__DOT__power_result_valid_1 = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_0 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_1 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_2 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_3 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_4 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_5 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_6 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_7 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_8 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_9 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_10 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_11 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_12 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_13 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_14 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_15 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_16 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_17 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_18 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_19 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_20 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_21 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_22 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_23 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_24 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_25 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_26 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_27 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_28 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_29 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_30 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_31 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_0 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_1 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_2 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_3 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_4 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_5 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_6 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_7 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_8 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_9 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_10 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_11 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_12 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_13 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_14 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_15 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_16 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_17 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_18 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_19 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_20 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_21 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_22 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_23 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_24 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_25 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_26 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_27 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_28 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_29 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_30 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_31 = VL_RAND_RESET_I(27);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_0_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_0_payload_cha_i = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_0_payload_cha_q = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_1_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_1_payload_cha_i = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_1_payload_cha_q = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_2_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_2_payload_cha_i = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_2_payload_cha_q = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_3_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_3_payload_cha_i = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_3_payload_cha_q = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_4_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_4_payload_cha_i = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_4_payload_cha_q = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_5_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_5_payload_cha_i = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_5_payload_cha_q = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_6_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_6_payload_cha_i = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_6_payload_cha_q = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_7_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_7_payload_cha_i = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_7_payload_cha_q = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_8_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_8_payload_cha_i = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_8_payload_cha_q = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_9_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_9_payload_cha_i = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_9_payload_cha_q = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_10_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_10_payload_cha_i = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_10_payload_cha_q = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_11_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_11_payload_cha_i = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_11_payload_cha_q = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_12_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_12_payload_cha_i = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_12_payload_cha_q = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_13_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_13_payload_cha_i = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_13_payload_cha_q = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_14_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_14_payload_cha_i = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_14_payload_cha_q = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_15_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_15_payload_cha_i = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_15_payload_cha_q = VL_RAND_RESET_I(16);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_val_i = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_val_q = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_i = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_q = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__k1 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_i = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_q = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_result_valid_1 = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_0 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_1 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_2 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_3 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_4 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_5 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_6 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_7 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_8 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_9 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_10 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_11 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_12 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_13 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_14 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_15 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_16 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_17 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_18 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_19 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_20 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_21 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_22 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_23 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_24 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_25 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_26 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_27 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_28 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_29 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_30 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_31 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_0 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_1 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_2 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_3 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_4 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_5 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_6 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_7 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_8 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_9 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_10 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_11 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_12 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_13 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_14 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_15 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_16 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_17 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_18 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_19 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_20 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_21 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_22 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_23 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_24 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_25 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_26 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_27 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_28 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_29 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_30 = VL_RAND_RESET_I(32);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_31 = VL_RAND_RESET_I(32);
    __Vm_traceActivity = 0;
}
