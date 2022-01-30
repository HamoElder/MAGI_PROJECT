// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCordicRotator_H_
#define _VCordicRotator_H_

#include "verilated.h"
class VCordicRotator__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VCordicRotator) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(rotate_mode,0,0);
    VL_IN8(x_u,1,0);
    VL_IN8(w_en,0,0);
    VL_IN8(w_addr,7,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(raw_data_ready,0,0);
    VL_OUT8(result_valid,0,0);
    //char	__VpadToAlign9[3];
    VL_IN(w_data,31,0);
    VL_IN(raw_data_payload_x,31,0);
    VL_IN(raw_data_payload_y,31,0);
    VL_IN(raw_data_payload_z,31,0);
    VL_OUT(result_payload_x,31,0);
    VL_OUT(result_payload_y,31,0);
    VL_OUT(result_payload_z,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(CordicRotator__DOT___zz_result_valid,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_valid_1,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_valid_2,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_valid_3,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_valid_4,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_valid_5,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_valid_6,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_valid_7,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_valid_8,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_valid_9,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_valid_10,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_valid_11,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_valid_12,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_valid_13,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_valid_14,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_valid_15,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_46,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_47,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_48,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_49,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_50,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_51,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_52,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_53,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_54,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_55,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_56,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_57,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_58,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_59,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_60,0,0);
    VL_SIG8(CordicRotator__DOT__raw_data_fire,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_76,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_79,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_82,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_85,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_88,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_91,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_94,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_97,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_100,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_103,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_106,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_109,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_112,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_115,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_118,0,0);
    //char	__VpadToAlign91[1];
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_1_2,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_1_3,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_17,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_17_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_32,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_32_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_2_2,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_2_3,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_18,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_18_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_33,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_33_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_3,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_3_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_19,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_19_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_34,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_34_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_4,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_4_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_20,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_20_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_35,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_35_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_5,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_5_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_21,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_21_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_36,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_36_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_6,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_6_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_22,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_22_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_37,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_37_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_7,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_7_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_23,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_23_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_38,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_38_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_8,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_8_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_24,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_24_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_39,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_39_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_9,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_9_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_25,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_25_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_40,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_40_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_10,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_10_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_26,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_26_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_41,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_41_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_11,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_11_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_27,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_27_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_42,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_42_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_12,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_12_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_28,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_28_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_43,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_43_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_13,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_13_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_29,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_29_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_44,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_44_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_14,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_14_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_30,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_30_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_45,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_45_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_15,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_15_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_y,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_y_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_z,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_z_1,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_1,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_2,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_3,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_4,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_5,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_6,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_7,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_8,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_9,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_10,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_11,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_12,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_13,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_14,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_15,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_16,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_17,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_18,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_19,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_20,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_21,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_22,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_23,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_24,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_25,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_26,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_27,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_28,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_29,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_30,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_y,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_31,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_32,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_33,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_34,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_35,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_36,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_37,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_38,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_39,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_40,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_41,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_42,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_43,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_44,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_45,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_z,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_61,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_62,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_63,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_64,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_65,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_66,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_67,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_68,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_69,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_70,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_71,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_72,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_73,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_74,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_z_1,31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vdly__CordicRotator__DOT___zz_result_valid,0,0);
    VL_SIG8(__Vdly__CordicRotator__DOT___zz_result_valid_1,0,0);
    VL_SIG8(__Vdly__CordicRotator__DOT___zz_result_valid_2,0,0);
    VL_SIG8(__Vdly__CordicRotator__DOT___zz_result_valid_3,0,0);
    VL_SIG8(__Vdly__CordicRotator__DOT___zz_result_valid_4,0,0);
    VL_SIG8(__Vdly__CordicRotator__DOT___zz_result_valid_5,0,0);
    VL_SIG8(__Vdly__CordicRotator__DOT___zz_result_valid_6,0,0);
    VL_SIG8(__Vdly__CordicRotator__DOT___zz_result_valid_7,0,0);
    VL_SIG8(__Vdly__CordicRotator__DOT___zz_result_valid_8,0,0);
    VL_SIG8(__Vdly__CordicRotator__DOT___zz_result_valid_9,0,0);
    VL_SIG8(__Vdly__CordicRotator__DOT___zz_result_valid_10,0,0);
    VL_SIG8(__Vdly__CordicRotator__DOT___zz_result_valid_11,0,0);
    VL_SIG8(__Vdly__CordicRotator__DOT___zz_result_valid_12,0,0);
    VL_SIG8(__Vdly__CordicRotator__DOT___zz_result_valid_13,0,0);
    VL_SIG8(__Vdly__CordicRotator__DOT___zz_result_valid_14,0,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    //char	__VpadToAlign725[3];
    VL_SIG(__Vdly__CordicRotator__DOT___zz_result_payload_x,31,0);
    VL_SIG(__Vdly__CordicRotator__DOT___zz_result_payload_x_1,31,0);
    VL_SIG(__Vdly__CordicRotator__DOT___zz_result_payload_x_2,31,0);
    VL_SIG(__Vdly__CordicRotator__DOT___zz_result_payload_x_3,31,0);
    VL_SIG(__Vdly__CordicRotator__DOT___zz_result_payload_x_4,31,0);
    VL_SIG(__Vdly__CordicRotator__DOT___zz_result_payload_x_5,31,0);
    VL_SIG(__Vdly__CordicRotator__DOT___zz_result_payload_x_6,31,0);
    VL_SIG(__Vdly__CordicRotator__DOT___zz_result_payload_x_7,31,0);
    VL_SIG(__Vdly__CordicRotator__DOT___zz_result_payload_x_8,31,0);
    VL_SIG(__Vdly__CordicRotator__DOT___zz_result_payload_x_9,31,0);
    VL_SIG(__Vdly__CordicRotator__DOT___zz_result_payload_x_10,31,0);
    VL_SIG(__Vdly__CordicRotator__DOT___zz_result_payload_x_11,31,0);
    VL_SIG(__Vdly__CordicRotator__DOT___zz_result_payload_x_12,31,0);
    VL_SIG(__Vdly__CordicRotator__DOT___zz_result_payload_x_13,31,0);
    VL_SIG(__Vdly__CordicRotator__DOT___zz_result_payload_x_14,31,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign796[4];
    VCordicRotator__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VCordicRotator& operator= (const VCordicRotator&);	///< Copying not allowed
    VCordicRotator(const VCordicRotator&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VCordicRotator(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VCordicRotator();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VCordicRotator__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VCordicRotator__Syms* symsp, bool first);
  private:
    static QData	_change_request(VCordicRotator__Syms* __restrict vlSymsp);
    static QData	_change_request_1(VCordicRotator__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__11(VCordicRotator__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VCordicRotator__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VCordicRotator__Syms* __restrict vlSymsp);
    static void	_eval_initial(VCordicRotator__Syms* __restrict vlSymsp);
    static void	_eval_settle(VCordicRotator__Syms* __restrict vlSymsp);
    static void	_initial__TOP__1(VCordicRotator__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__10(VCordicRotator__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(VCordicRotator__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__5(VCordicRotator__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__6(VCordicRotator__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__7(VCordicRotator__Syms* __restrict vlSymsp);
    static void	_settle__TOP__8(VCordicRotator__Syms* __restrict vlSymsp);
    static void	_settle__TOP__9(VCordicRotator__Syms* __restrict vlSymsp);
    static void	traceChgThis(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
