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
    vlTOPp->pkg_detected = vlTOPp->PreambleDetector__DOT__gate_pkg_det;
    vlTOPp->corr_result_valid = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_result_valid_1;
    vlTOPp->corr_result_payload_cha_i = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_i;
    vlTOPp->corr_result_payload_cha_q = vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_q;
    vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_val_i 
        = (0xffffffU & (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_i 
                        - vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_63));
    vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_val_q 
        = (0xffffffU & (vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_q 
                        - vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_63));
    vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__k1 
        = (0xffffffU & VL_MULS_III(24,24,24, (0xffffffU 
                                              & VL_EXTENDS_II(24,12, (IData)(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_63_payload_cha_i))), 
                                   (0xffffffU & VL_EXTENDS_II(24,12, 
                                                              (0xfffU 
                                                               & ((IData)(vlTOPp->raw_data_payload_cha_i) 
                                                                  + (IData)(vlTOPp->raw_data_payload_cha_q)))))));
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
    gate_threshold = VL_RAND_RESET_I(24);
    pkg_detected = VL_RAND_RESET_I(1);
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_payload_cha_i = VL_RAND_RESET_I(12);
    raw_data_payload_cha_q = VL_RAND_RESET_I(12);
    raw_data_out_valid = VL_RAND_RESET_I(1);
    raw_data_out_payload_cha_i = VL_RAND_RESET_I(12);
    raw_data_out_payload_cha_q = VL_RAND_RESET_I(12);
    corr_result_valid = VL_RAND_RESET_I(1);
    corr_result_payload_cha_i = VL_RAND_RESET_I(24);
    corr_result_payload_cha_q = VL_RAND_RESET_I(24);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__gate_pkg_det = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__prod_avg_mag = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_0_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_1_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_2_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_3_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_4_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_5_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_6_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_7_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_8_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_9_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_10_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_11_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_12_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_13_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_14_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_15_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_16_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_16_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_16_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_17_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_17_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_17_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_18_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_18_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_18_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_19_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_19_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_19_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_20_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_20_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_20_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_21_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_21_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_21_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_22_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_22_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_22_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_23_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_23_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_23_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_24_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_24_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_24_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_25_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_25_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_25_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_26_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_26_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_26_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_27_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_27_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_27_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_28_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_28_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_28_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_29_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_29_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_29_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_30_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_30_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_30_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_31_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_32_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_32_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_32_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_33_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_33_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_33_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_34_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_34_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_34_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_35_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_35_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_35_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_36_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_36_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_36_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_37_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_37_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_37_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_38_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_38_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_38_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_39_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_39_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_39_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_40_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_40_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_40_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_41_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_41_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_41_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_42_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_42_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_42_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_43_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_43_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_43_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_44_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_44_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_44_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_45_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_45_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_45_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_46_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_46_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_46_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_47_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_47_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_47_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_48_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_48_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_48_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_49_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_49_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_49_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_50_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_50_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_50_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_51_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_51_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_51_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_52_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_52_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_52_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_53_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_53_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_53_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_54_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_54_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_54_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_55_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_55_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_55_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_56_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_56_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_56_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_57_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_57_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_57_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_58_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_58_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_58_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_59_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_59_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_59_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_60_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_60_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_60_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_61_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_61_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_61_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_62_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_62_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_62_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_63_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_63_payload_cha_i = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_63_payload_cha_q = VL_RAND_RESET_I(12);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_val_i = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_val_q = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_i = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_q = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__k1 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_i = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_q = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_result_valid_1 = VL_RAND_RESET_I(1);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_0 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_1 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_2 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_3 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_4 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_5 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_6 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_7 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_8 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_9 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_10 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_11 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_12 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_13 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_14 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_15 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_16 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_17 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_18 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_19 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_20 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_21 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_22 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_23 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_24 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_25 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_26 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_27 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_28 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_29 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_30 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_31 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_32 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_33 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_34 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_35 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_36 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_37 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_38 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_39 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_40 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_41 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_42 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_43 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_44 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_45 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_46 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_47 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_48 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_49 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_50 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_51 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_52 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_53 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_54 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_55 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_56 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_57 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_58 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_59 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_60 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_61 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_62 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_63 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_17 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_18 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_19 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_20 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_21 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_22 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_23 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_24 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_25 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_26 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_27 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_28 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_29 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_30 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_32 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_33 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_34 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_35 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_36 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_37 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_38 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_39 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_40 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_41 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_42 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_43 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_44 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_45 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_46 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_47 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_48 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_49 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_50 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_51 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_52 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_53 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_54 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_55 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_56 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_57 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_58 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_59 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_60 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_61 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_62 = VL_RAND_RESET_I(24);
    PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_63 = VL_RAND_RESET_I(24);
    __Vm_traceActivity = 0;
}
