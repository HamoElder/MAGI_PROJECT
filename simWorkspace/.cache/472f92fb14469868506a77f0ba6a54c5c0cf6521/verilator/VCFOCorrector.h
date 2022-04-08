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
    VL_IN16(ref_data_payload_cha_i,11,0);
    VL_IN16(ref_data_payload_cha_q,11,0);
    VL_IN16(raw_data_payload_cha_i,11,0);
    VL_IN16(raw_data_payload_cha_q,11,0);
    VL_OUT16(rotated_data_payload_cha_i,11,0);
    VL_OUT16(rotated_data_payload_cha_q,11,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator_delta_phi_valid;
        CData/*1:0*/ CFOCorrector__DOT__mean_cnt;
        CData/*0:0*/ CFOCorrector__DOT__delta_phi_valid;
        CData/*0:0*/ CFOCorrector__DOT__when_CFOCorrector_l45;
        CData/*0:0*/ CFOCorrector__DOT__raw_data_takeWhen_valid;
        CData/*5:0*/ CFOCorrector__DOT__cfo_estimator__DOT___zz_impulse_cnt;
        CData/*5:0*/ CFOCorrector__DOT__cfo_estimator__DOT__impulse_cnt;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_valid;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid;
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
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_34;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_35;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_36;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_37;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_38;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_39;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_40;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_41;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_42;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_43;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_44;
    };
    struct {
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_55;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_58;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_61;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_64;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_67;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_70;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_73;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_76;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_79;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_82;
        CData/*0:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_85;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__xy_symbol;
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
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_55;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_58;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_61;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_64;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_67;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_70;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_73;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_76;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_79;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_82;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_85;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_0;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_1;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_2;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_3;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_4;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_5;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_6;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_7;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_8;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_9;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_10;
        CData/*0:0*/ CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_11;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_payload_cha_q;
    };
    struct {
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_payload_cha_q;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_i;
        SData/*11:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_q;
        SData/*12:0*/ CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw;
        SData/*11:0*/ CFOCorrector__DOT__phase_rotator__DOT__rotated_x_raw;
        SData/*12:0*/ CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw;
        SData/*11:0*/ CFOCorrector__DOT__phase_rotator__DOT__rotated_y_raw;
        IData/*23:0*/ CFOCorrector__DOT__delta_phi_mean;
        IData/*24:0*/ CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130;
    };
    struct {
        IData/*24:0*/ CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_17;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_18;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_19;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_20;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_21;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_22;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_23;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_24;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_25;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_26;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_27;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_28;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_29;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_30;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_0;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_1;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_2;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_3;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_4;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_5;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_6;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_7;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_8;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_9;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_10;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_11;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_12;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_13;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_14;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_15;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_16;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_17;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_18;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_19;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_20;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_21;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_22;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_23;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_24;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_25;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_26;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_27;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_28;
    };
    struct {
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_29;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_30;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_31;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_1;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_2;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_3;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_4;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_5;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_6;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_7;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_8;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_9;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_10;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_11;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_12;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_13;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_14;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_16;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_17;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_18;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_19;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_20;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_21;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_22;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_y;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_23;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_24;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_25;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_26;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_27;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_28;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_29;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_30;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_31;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_32;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_33;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_45;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_46;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_47;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_48;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_49;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_50;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_51;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_52;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_53;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_54;
        IData/*23:0*/ CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z_1;
        IData/*23:0*/ CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50;
        IData/*25:0*/ CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_2;
        IData/*25:0*/ CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_5;
        IData/*23:0*/ CFOCorrector__DOT__phase_rotator__DOT__phi;
        IData/*23:0*/ CFOCorrector__DOT__phase_rotator__DOT__phiNext;
        IData/*23:0*/ CFOCorrector__DOT__phase_rotator__DOT__phiCorrect;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7;
    };
    struct {
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_46;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_47;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_48;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_49;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_50;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_52;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_53;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_54;
        IData/*24:0*/ CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z_1;
        QData/*44:0*/ CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_2;
        QData/*44:0*/ CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_5;
        QData/*43:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i_1;
        QData/*43:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q_1;
        QData/*43:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i;
        QData/*43:0*/ CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vdly__CFOCorrector__DOT__phase_rotator__DOT__xy_symbol;
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
    static void _combo__TOP__18(VCFOCorrector__Syms* __restrict vlSymsp);
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
    static void _sequent__TOP__10(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__11(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__12(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__13(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__14(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__17(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__19(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__20(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__21(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__22(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__23(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VCFOCorrector__Syms* __restrict vlSymsp);
    static void _settle__TOP__15(VCFOCorrector__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__16(VCFOCorrector__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__12(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__11(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
