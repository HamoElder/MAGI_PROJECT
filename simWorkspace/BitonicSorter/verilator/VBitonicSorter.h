// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VBITONICSORTER_H_
#define _VBITONICSORTER_H_  // guard

#include "verilated.h"

//==========

class VBitonicSorter__Syms;
class VBitonicSorter_VerilatedVcd;


//----------

VL_MODULE(VBitonicSorter) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(raw_data_valid,0,0);
    VL_IN8(raw_data_payload_0,7,0);
    VL_IN8(raw_data_payload_1,7,0);
    VL_IN8(raw_data_payload_2,7,0);
    VL_IN8(raw_data_payload_3,7,0);
    VL_IN8(raw_data_payload_4,7,0);
    VL_IN8(raw_data_payload_5,7,0);
    VL_IN8(raw_data_payload_6,7,0);
    VL_IN8(raw_data_payload_7,7,0);
    VL_IN8(raw_data_payload_8,7,0);
    VL_IN8(raw_data_payload_9,7,0);
    VL_IN8(raw_data_payload_10,7,0);
    VL_IN8(raw_data_payload_11,7,0);
    VL_IN8(raw_data_payload_12,7,0);
    VL_IN8(raw_data_payload_13,7,0);
    VL_IN8(raw_data_payload_14,7,0);
    VL_IN8(raw_data_payload_15,7,0);
    VL_IN8(ascending_order,0,0);
    VL_OUT8(sorted_data_valid,0,0);
    VL_OUT8(sorted_data_payload_0_data,7,0);
    VL_OUT8(sorted_data_payload_1_data,7,0);
    VL_OUT8(sorted_data_payload_2_data,7,0);
    VL_OUT8(sorted_data_payload_3_data,7,0);
    VL_OUT8(sorted_data_payload_4_data,7,0);
    VL_OUT8(sorted_data_payload_5_data,7,0);
    VL_OUT8(sorted_data_payload_6_data,7,0);
    VL_OUT8(sorted_data_payload_7_data,7,0);
    VL_OUT8(sorted_data_payload_8_data,7,0);
    VL_OUT8(sorted_data_payload_9_data,7,0);
    VL_OUT8(sorted_data_payload_10_data,7,0);
    VL_OUT8(sorted_data_payload_11_data,7,0);
    VL_OUT8(sorted_data_payload_12_data,7,0);
    VL_OUT8(sorted_data_payload_13_data,7,0);
    VL_OUT8(sorted_data_payload_14_data,7,0);
    VL_OUT8(sorted_data_payload_15_data,7,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*7:0*/ BitonicSorter__DOT__reg_data_buf_0_data;
        CData/*7:0*/ BitonicSorter__DOT__reg_data_buf_1_data;
        CData/*7:0*/ BitonicSorter__DOT__reg_data_buf_2_data;
        CData/*7:0*/ BitonicSorter__DOT__reg_data_buf_3_data;
        CData/*7:0*/ BitonicSorter__DOT__reg_data_buf_4_data;
        CData/*7:0*/ BitonicSorter__DOT__reg_data_buf_5_data;
        CData/*7:0*/ BitonicSorter__DOT__reg_data_buf_6_data;
        CData/*7:0*/ BitonicSorter__DOT__reg_data_buf_7_data;
        CData/*7:0*/ BitonicSorter__DOT__reg_data_buf_8_data;
        CData/*7:0*/ BitonicSorter__DOT__reg_data_buf_9_data;
        CData/*7:0*/ BitonicSorter__DOT__reg_data_buf_10_data;
        CData/*7:0*/ BitonicSorter__DOT__reg_data_buf_11_data;
        CData/*7:0*/ BitonicSorter__DOT__reg_data_buf_12_data;
        CData/*7:0*/ BitonicSorter__DOT__reg_data_buf_13_data;
        CData/*7:0*/ BitonicSorter__DOT__reg_data_buf_14_data;
        CData/*7:0*/ BitonicSorter__DOT__reg_data_buf_15_data;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_1;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_1;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_2;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_3;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_2;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_3;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_4;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_5;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_4;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_5;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_6;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_7;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_6;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_7;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_8;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_8;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_9;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_9;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_10;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_10;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_11;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_11;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_12;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_12;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_13;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_13;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_14;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_14;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_15;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_15;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_16;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_17;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_18;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_19;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_16;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_17;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_18;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_19;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_20;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_21;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_22;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_23;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_20;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_21;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_22;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_23;
    };
    struct {
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_24;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_25;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_24;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_25;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_26;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_27;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_26;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_27;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_28;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_29;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_28;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_29;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_30;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_31;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_30;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_31;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_32;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_32;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_33;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_33;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_34;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_34;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_35;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_35;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_36;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_36;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_37;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_37;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_38;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_38;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_39;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_39;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_40;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_41;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_42;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_43;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_44;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_45;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_46;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_47;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_40;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_41;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_42;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_43;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_44;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_45;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_46;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_47;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_48;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_49;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_50;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_51;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_48;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_49;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_50;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_51;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_52;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_53;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_54;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_55;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_52;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_53;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_54;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_55;
    };
    struct {
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_56;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_57;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_56;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_57;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_58;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_59;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_58;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_59;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_60;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_61;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_60;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_61;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_62;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_63;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_62;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_63;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_64;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_64;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_65;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_65;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_66;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_66;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_67;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_67;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_68;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_68;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_69;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_69;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_70;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_70;
        CData/*7:0*/ BitonicSorter__DOT___zz_in1_data_71;
        CData/*7:0*/ BitonicSorter__DOT___zz_in2_data_71;
        CData/*7:0*/ BitonicSorter__DOT___zz_sorted_data_payload_0_data;
        CData/*7:0*/ BitonicSorter__DOT___zz_sorted_data_payload_1_data;
        CData/*7:0*/ BitonicSorter__DOT___zz_sorted_data_payload_2_data;
        CData/*7:0*/ BitonicSorter__DOT___zz_sorted_data_payload_3_data;
        CData/*7:0*/ BitonicSorter__DOT___zz_sorted_data_payload_4_data;
        CData/*7:0*/ BitonicSorter__DOT___zz_sorted_data_payload_5_data;
        CData/*7:0*/ BitonicSorter__DOT___zz_sorted_data_payload_6_data;
        CData/*7:0*/ BitonicSorter__DOT___zz_sorted_data_payload_7_data;
        CData/*7:0*/ BitonicSorter__DOT___zz_sorted_data_payload_8_data;
        CData/*7:0*/ BitonicSorter__DOT___zz_sorted_data_payload_9_data;
        CData/*7:0*/ BitonicSorter__DOT___zz_sorted_data_payload_10_data;
        CData/*7:0*/ BitonicSorter__DOT___zz_sorted_data_payload_11_data;
        CData/*7:0*/ BitonicSorter__DOT___zz_sorted_data_payload_12_data;
        CData/*7:0*/ BitonicSorter__DOT___zz_sorted_data_payload_13_data;
        CData/*7:0*/ BitonicSorter__DOT___zz_sorted_data_payload_14_data;
        CData/*7:0*/ BitonicSorter__DOT___zz_sorted_data_payload_15_data;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_80__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_81__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_82__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_83__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_84__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_85__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_86__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_87__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_88__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_89__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_90__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_91__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_92__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_93__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_94__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_95__DOT__cmp_less_result;
    };
    struct {
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_96__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_97__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_98__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_99__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_100__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_101__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_102__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_103__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_104__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_105__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_106__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_107__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_108__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_109__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_110__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_111__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_112__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_113__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_114__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_115__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_116__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_117__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_118__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_119__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_120__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_121__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_122__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_123__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_124__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_125__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_126__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_127__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_128__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_128__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_129__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_129__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_130__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_130__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_131__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_131__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_132__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_132__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_133__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_133__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_134__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_134__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_135__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_135__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_136__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_136__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_137__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_137__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_138__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_138__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_139__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_139__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_140__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_140__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_141__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_141__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_142__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_142__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_143__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_143__DOT__cmp_sel;
    };
    struct {
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_144__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_144__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_145__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_145__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_146__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_146__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_147__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_147__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_148__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_148__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_149__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_149__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_150__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_150__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_151__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_151__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_152__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_152__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_153__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_153__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_154__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_154__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_155__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_155__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_156__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_156__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_157__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_157__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_158__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_158__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_159__DOT__cmp_less_result;
        CData/*0:0*/ BitonicSorter__DOT__cmpUnit_159__DOT__cmp_sel;
        CData/*0:0*/ BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_0;
        CData/*0:0*/ BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_1;
        CData/*0:0*/ BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_2;
        CData/*0:0*/ BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_3;
        CData/*0:0*/ BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_4;
        CData/*0:0*/ BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_5;
        CData/*0:0*/ BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_6;
        CData/*0:0*/ BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_7;
        CData/*0:0*/ BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_8;
        CData/*0:0*/ BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_9;
        CData/*0:0*/ BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_10;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VBitonicSorter__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VBitonicSorter);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VBitonicSorter(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VBitonicSorter();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VBitonicSorter__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VBitonicSorter__Syms* symsp, bool first);
  private:
    static QData _change_request(VBitonicSorter__Syms* __restrict vlSymsp);
    static QData _change_request_1(VBitonicSorter__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__13(VBitonicSorter__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VBitonicSorter__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VBitonicSorter__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VBitonicSorter__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VBitonicSorter__Syms* __restrict vlSymsp);
    static void _sequent__TOP__10(VBitonicSorter__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VBitonicSorter__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VBitonicSorter__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VBitonicSorter__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VBitonicSorter__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(VBitonicSorter__Syms* __restrict vlSymsp);
    static void _settle__TOP__11(VBitonicSorter__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__12(VBitonicSorter__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VBitonicSorter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VBitonicSorter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VBitonicSorter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VBitonicSorter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VBitonicSorter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VBitonicSorter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VBitonicSorter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VBitonicSorter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VBitonicSorter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VBitonicSorter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__11(VBitonicSorter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__3(VBitonicSorter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__6(VBitonicSorter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VBitonicSorter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VBitonicSorter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__2(VBitonicSorter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
