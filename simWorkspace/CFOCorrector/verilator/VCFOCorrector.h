// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCFOCORRECTOR_H_
#define _VCFOCORRECTOR_H_  // guard

#include "verilated.h"

//==========

class VCFOCorrector__Syms;
class VCFOCorrector_VerilatedVcd;


//----------

VL_MODULE(VCFOCorrector) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(ref_data_valid,0,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(rotated_data_valid,0,0);
    VL_IN8(enable,0,0);
    VL_IN16(ref_data_payload_cha_i,15,0);
    VL_IN16(ref_data_payload_cha_q,15,0);
    VL_IN16(raw_data_payload_cha_i,15,0);
    VL_IN16(raw_data_payload_cha_q,15,0);
    VL_OUT16(rotated_data_payload_cha_i,15,0);
    VL_OUT16(rotated_data_payload_cha_q,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_12;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_13;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_14;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_15;
        CData/*6:0*/ CFOCorrector__DOT__cfo_estimator__DOT___zz_impluse_cnt;
        CData/*6:0*/ CFOCorrector__DOT__cfo_estimator__DOT__impluse_cnt;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_16_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_17_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_18_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_19_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_20_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_21_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_22_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_23_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_24_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_25_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_26_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_27_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_28_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_29_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_30_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_31_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_32_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_33_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_34_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_35_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_36_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_37_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_38_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_39_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_40_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_41_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_42_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_43_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_44_valid;
    };
    struct {
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_45_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_46_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_47_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_48_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_49_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_50_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_51_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_52_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_53_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_54_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_55_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_56_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_57_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_58_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_59_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_60_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_61_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_62_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_63_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_1;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_2;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_3;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_4;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_5;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_6;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_7;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_8;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_9;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_10;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_11;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_12;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_13;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_14;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_15;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__phi;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25;
    };
    struct {
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_46;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_47;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_48;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_49;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_50;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51;
        SData/*15:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z_1;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_16_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_16_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_17_payload_cha_i;
    };
    struct {
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_17_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_18_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_18_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_19_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_19_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_20_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_20_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_21_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_21_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_22_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_22_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_23_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_23_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_24_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_24_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_25_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_25_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_26_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_26_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_27_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_27_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_28_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_28_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_29_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_29_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_30_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_30_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_31_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_31_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_32_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_32_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_33_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_33_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_34_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_34_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_35_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_35_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_36_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_36_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_37_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_37_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_38_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_38_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_39_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_39_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_40_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_40_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_41_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_41_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_42_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_42_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_43_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_43_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_44_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_44_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_45_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_45_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_46_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_46_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_47_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_47_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_48_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_48_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_49_payload_cha_i;
    };
    struct {
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_49_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_50_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_50_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_51_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_51_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_52_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_52_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_53_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_53_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_54_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_54_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_55_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_55_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_56_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_56_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_57_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_57_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_58_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_58_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_59_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_59_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_60_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_60_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_61_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_61_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_62_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_62_payload_cha_q;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_63_payload_cha_i;
        SData/*15:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_63_payload_cha_q;
        WData/*64:0*/ CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_delta_phi_payload_4[3];
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_i;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_q;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_16;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_17;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_18;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_19;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_20;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_21;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_22;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_23;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_24;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_25;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_26;
    };
    struct {
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_27;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_28;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_29;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_30;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_31;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_32;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_33;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_34;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_35;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_36;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_37;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_38;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_39;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_40;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_41;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_42;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_43;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_44;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_45;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_46;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_47;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_48;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_49;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_50;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_51;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_52;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_53;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_54;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_55;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_56;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_57;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_58;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_59;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_60;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_61;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_62;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_63;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_0;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_1;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_2;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_3;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_4;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_5;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_6;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_7;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_8;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_9;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_10;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_11;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_12;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_13;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_14;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_15;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_16;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_17;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_18;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_19;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_20;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_21;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_22;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_23;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_24;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_25;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_26;
    };
    struct {
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_27;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_28;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_29;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_30;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_31;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_32;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_33;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_34;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_35;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_36;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_37;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_38;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_39;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_40;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_41;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_42;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_43;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_44;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_45;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_46;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_47;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_48;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_49;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_50;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_51;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_52;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_53;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_54;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_55;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_56;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_57;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_58;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_59;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_60;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_61;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_62;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_63;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_1;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_2;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_3;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_4;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_5;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_6;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_7;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_8;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_9;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_10;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_11;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_12;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_13;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_14;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_16;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_17;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_18;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_19;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_20;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_21;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_22;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_23;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_24;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_25;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_26;
    };
    struct {
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_27;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_28;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_29;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_30;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_y;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_31;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_32;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_33;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_34;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_35;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_36;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_37;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_38;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_39;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_40;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_41;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_42;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_43;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_44;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_45;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_46;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_47;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_48;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_49;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_50;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_51;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_52;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_53;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_54;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_55;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_56;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_57;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_58;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_59;
        IData/*31:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z_1;
        QData/*42:0*/ CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload;
        QData/*41:0*/ CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VCFOCorrector__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCFOCorrector);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VCFOCorrector(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VCFOCorrector();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VCFOCorrector__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VCFOCorrector__Syms* symsp, bool first);
  private:
    static QData _change_request(VCFOCorrector__Syms* __restrict vlSymsp);
    static QData _change_request_1(VCFOCorrector__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__26(VCFOCorrector__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VCFOCorrector__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VCFOCorrector__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VCFOCorrector__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__11(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__12(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__13(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__14(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__15(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__16(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__17(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__18(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__19(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__20(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__21(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__23(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__24(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__25(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__27(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _settle__TOP__22(VCFOCorrector__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__12(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__13(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__11(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__8(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
