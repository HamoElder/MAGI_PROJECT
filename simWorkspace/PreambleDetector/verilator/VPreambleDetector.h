// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VPREAMBLEDETECTOR_H_
#define _VPREAMBLEDETECTOR_H_  // guard

#include "verilated.h"

//==========

class VPreambleDetector__Syms;
class VPreambleDetector_VerilatedVcd;


//----------

VL_MODULE(VPreambleDetector) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(pkg_detected,0,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(raw_data_out_valid,0,0);
    VL_OUT8(corr_result_valid,0,0);
    VL_IN16(raw_data_payload_cha_i,11,0);
    VL_IN16(raw_data_payload_cha_q,11,0);
    VL_OUT16(raw_data_out_payload_cha_i,11,0);
    VL_OUT16(raw_data_out_payload_cha_q,11,0);
    VL_IN(gate_threshold,23,0);
    VL_OUT(corr_result_payload_cha_i,23,0);
    VL_OUT(corr_result_payload_cha_q,23,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ PreambleDetector__DOT__gate_pkg_det;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_0_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_1_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_2_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_3_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_4_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_5_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_6_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_7_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_8_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_9_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_10_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_11_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_12_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_13_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_14_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_15_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_16_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_17_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_18_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_19_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_20_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_21_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_22_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_23_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_24_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_25_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_26_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_27_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_28_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_29_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_30_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_31_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_32_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_33_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_34_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_35_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_36_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_37_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_38_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_39_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_40_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_41_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_42_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_43_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_44_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_45_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_46_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_47_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_48_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_49_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_50_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_51_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_52_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_53_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_54_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_55_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_56_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_57_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_58_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_59_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_60_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_61_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_62_valid;
    };
    struct {
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_63_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_result_valid_1;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_16_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_16_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_17_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_17_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_18_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_18_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_19_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_19_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_20_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_20_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_21_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_21_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_22_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_22_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_23_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_23_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_24_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_24_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_25_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_25_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_26_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_26_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_27_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_27_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_28_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_28_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_29_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_29_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_30_payload_cha_i;
    };
    struct {
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_30_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_32_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_32_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_33_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_33_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_34_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_34_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_35_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_35_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_36_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_36_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_37_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_37_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_38_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_38_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_39_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_39_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_40_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_40_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_41_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_41_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_42_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_42_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_43_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_43_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_44_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_44_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_45_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_45_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_46_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_46_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_47_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_47_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_48_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_48_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_49_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_49_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_50_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_50_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_51_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_51_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_52_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_52_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_53_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_53_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_54_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_54_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_55_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_55_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_56_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_56_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_57_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_57_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_58_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_58_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_59_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_59_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_60_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_60_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_61_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_61_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_62_payload_cha_i;
    };
    struct {
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_62_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_63_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_63_payload_cha_q;
        IData/*23:0*/ PreambleDetector__DOT__prod_avg_mag;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_val_i;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_val_q;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_i;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_q;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__k1;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_i;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_q;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_0;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_1;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_2;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_3;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_4;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_5;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_6;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_7;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_8;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_9;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_10;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_11;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_12;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_13;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_14;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_15;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_16;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_17;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_18;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_19;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_20;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_21;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_22;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_23;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_24;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_25;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_26;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_27;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_28;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_29;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_30;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_31;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_32;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_33;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_34;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_35;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_36;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_37;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_38;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_39;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_40;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_41;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_42;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_43;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_44;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_45;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_46;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_47;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_48;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_49;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_50;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_51;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_52;
    };
    struct {
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_53;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_54;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_55;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_56;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_57;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_58;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_59;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_60;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_61;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_62;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_63;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_17;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_18;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_19;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_20;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_21;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_22;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_23;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_24;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_25;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_26;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_27;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_28;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_29;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_30;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_32;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_33;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_34;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_35;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_36;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_37;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_38;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_39;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_40;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_41;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_42;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_43;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_44;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_45;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_46;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_47;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_48;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_49;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_50;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_51;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_52;
    };
    struct {
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_53;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_54;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_55;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_56;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_57;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_58;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_59;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_60;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_61;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_62;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_63;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VPreambleDetector__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VPreambleDetector);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VPreambleDetector(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VPreambleDetector();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VPreambleDetector__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VPreambleDetector__Syms* symsp, bool first);
  private:
    static QData _change_request(VPreambleDetector__Syms* __restrict vlSymsp);
    static QData _change_request_1(VPreambleDetector__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _combo__TOP__20(VPreambleDetector__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VPreambleDetector__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VPreambleDetector__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VPreambleDetector__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__10(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__11(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__12(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__13(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__14(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__15(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__16(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__17(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__18(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__19(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VPreambleDetector__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__4(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
