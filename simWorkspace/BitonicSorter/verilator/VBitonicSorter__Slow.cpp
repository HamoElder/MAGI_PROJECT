// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBitonicSorter.h for the primary calling header

#include "VBitonicSorter.h"
#include "VBitonicSorter__Syms.h"

//==========

VL_CTOR_IMP(VBitonicSorter) {
    VBitonicSorter__Syms* __restrict vlSymsp = __VlSymsp = new VBitonicSorter__Syms(this, name());
    VBitonicSorter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VBitonicSorter::__Vconfigure(VBitonicSorter__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VBitonicSorter::~VBitonicSorter() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VBitonicSorter::_settle__TOP__11(VBitonicSorter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSorter::_settle__TOP__11\n"); );
    VBitonicSorter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sorted_data_payload_0_data = vlTOPp->BitonicSorter__DOT___zz_sorted_data_payload_0_data;
    vlTOPp->sorted_data_payload_1_data = vlTOPp->BitonicSorter__DOT___zz_sorted_data_payload_1_data;
    vlTOPp->sorted_data_payload_2_data = vlTOPp->BitonicSorter__DOT___zz_sorted_data_payload_2_data;
    vlTOPp->sorted_data_payload_3_data = vlTOPp->BitonicSorter__DOT___zz_sorted_data_payload_3_data;
    vlTOPp->sorted_data_payload_4_data = vlTOPp->BitonicSorter__DOT___zz_sorted_data_payload_4_data;
    vlTOPp->sorted_data_payload_5_data = vlTOPp->BitonicSorter__DOT___zz_sorted_data_payload_5_data;
    vlTOPp->sorted_data_payload_6_data = vlTOPp->BitonicSorter__DOT___zz_sorted_data_payload_6_data;
    vlTOPp->sorted_data_payload_7_data = vlTOPp->BitonicSorter__DOT___zz_sorted_data_payload_7_data;
    vlTOPp->sorted_data_payload_8_data = vlTOPp->BitonicSorter__DOT___zz_sorted_data_payload_8_data;
    vlTOPp->sorted_data_payload_9_data = vlTOPp->BitonicSorter__DOT___zz_sorted_data_payload_9_data;
    vlTOPp->sorted_data_payload_10_data = vlTOPp->BitonicSorter__DOT___zz_sorted_data_payload_10_data;
    vlTOPp->sorted_data_payload_11_data = vlTOPp->BitonicSorter__DOT___zz_sorted_data_payload_11_data;
    vlTOPp->sorted_data_payload_12_data = vlTOPp->BitonicSorter__DOT___zz_sorted_data_payload_12_data;
    vlTOPp->sorted_data_payload_13_data = vlTOPp->BitonicSorter__DOT___zz_sorted_data_payload_13_data;
    vlTOPp->sorted_data_payload_14_data = vlTOPp->BitonicSorter__DOT___zz_sorted_data_payload_14_data;
    vlTOPp->sorted_data_payload_15_data = vlTOPp->BitonicSorter__DOT___zz_sorted_data_payload_15_data;
    vlTOPp->sorted_data_valid = vlTOPp->BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_10;
    vlTOPp->BitonicSorter__DOT__cmpUnit_152__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_64) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_64));
    vlTOPp->BitonicSorter__DOT__cmpUnit_153__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_65) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_65));
    vlTOPp->BitonicSorter__DOT__cmpUnit_154__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_66) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_66));
    vlTOPp->BitonicSorter__DOT__cmpUnit_155__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_67) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_67));
    vlTOPp->BitonicSorter__DOT__cmpUnit_156__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_68) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_68));
    vlTOPp->BitonicSorter__DOT__cmpUnit_157__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_69) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_69));
    vlTOPp->BitonicSorter__DOT__cmpUnit_158__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_70) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_70));
    vlTOPp->BitonicSorter__DOT__cmpUnit_159__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_71) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_71));
    vlTOPp->BitonicSorter__DOT__cmpUnit_144__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_56) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_56));
    vlTOPp->BitonicSorter__DOT__cmpUnit_145__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_57) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_57));
    vlTOPp->BitonicSorter__DOT__cmpUnit_146__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_58) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_58));
    vlTOPp->BitonicSorter__DOT__cmpUnit_147__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_59) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_59));
    vlTOPp->BitonicSorter__DOT__cmpUnit_148__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_60) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_60));
    vlTOPp->BitonicSorter__DOT__cmpUnit_149__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_61) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_61));
    vlTOPp->BitonicSorter__DOT__cmpUnit_150__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_62) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_62));
    vlTOPp->BitonicSorter__DOT__cmpUnit_151__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_63) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_63));
    vlTOPp->BitonicSorter__DOT__cmpUnit_136__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_48) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_48));
    vlTOPp->BitonicSorter__DOT__cmpUnit_137__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_49) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_49));
    vlTOPp->BitonicSorter__DOT__cmpUnit_138__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_50) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_50));
    vlTOPp->BitonicSorter__DOT__cmpUnit_139__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_51) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_51));
    vlTOPp->BitonicSorter__DOT__cmpUnit_140__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_52) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_52));
    vlTOPp->BitonicSorter__DOT__cmpUnit_141__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_53) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_53));
    vlTOPp->BitonicSorter__DOT__cmpUnit_142__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_54) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_54));
    vlTOPp->BitonicSorter__DOT__cmpUnit_143__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_55) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_55));
    vlTOPp->BitonicSorter__DOT__cmpUnit_128__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_40) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_40));
    vlTOPp->BitonicSorter__DOT__cmpUnit_129__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_41) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_41));
    vlTOPp->BitonicSorter__DOT__cmpUnit_130__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_42) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_42));
    vlTOPp->BitonicSorter__DOT__cmpUnit_131__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_43) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_43));
    vlTOPp->BitonicSorter__DOT__cmpUnit_132__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_44) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_44));
    vlTOPp->BitonicSorter__DOT__cmpUnit_133__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_45) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_45));
    vlTOPp->BitonicSorter__DOT__cmpUnit_134__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_46) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_46));
    vlTOPp->BitonicSorter__DOT__cmpUnit_135__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_47) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_47));
    vlTOPp->BitonicSorter__DOT__cmpUnit_120__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_32) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_32));
    vlTOPp->BitonicSorter__DOT__cmpUnit_121__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_33) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_33));
    vlTOPp->BitonicSorter__DOT__cmpUnit_122__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_34) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_34));
    vlTOPp->BitonicSorter__DOT__cmpUnit_123__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_35) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_35));
    vlTOPp->BitonicSorter__DOT__cmpUnit_124__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_36) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_36));
    vlTOPp->BitonicSorter__DOT__cmpUnit_125__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_37) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_37));
    vlTOPp->BitonicSorter__DOT__cmpUnit_126__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_38) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_38));
    vlTOPp->BitonicSorter__DOT__cmpUnit_127__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_39) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_39));
    vlTOPp->BitonicSorter__DOT__cmpUnit_112__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_24) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_24));
    vlTOPp->BitonicSorter__DOT__cmpUnit_113__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_25) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_25));
    vlTOPp->BitonicSorter__DOT__cmpUnit_114__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_26) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_26));
    vlTOPp->BitonicSorter__DOT__cmpUnit_115__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_27) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_27));
    vlTOPp->BitonicSorter__DOT__cmpUnit_116__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_28) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_28));
    vlTOPp->BitonicSorter__DOT__cmpUnit_117__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_29) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_29));
    vlTOPp->BitonicSorter__DOT__cmpUnit_118__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_30) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_30));
    vlTOPp->BitonicSorter__DOT__cmpUnit_119__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_31) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_31));
    vlTOPp->BitonicSorter__DOT__cmpUnit_104__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_16) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_16));
    vlTOPp->BitonicSorter__DOT__cmpUnit_105__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_17) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_17));
    vlTOPp->BitonicSorter__DOT__cmpUnit_106__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_18) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_18));
    vlTOPp->BitonicSorter__DOT__cmpUnit_107__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_19) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_19));
    vlTOPp->BitonicSorter__DOT__cmpUnit_108__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_20) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_20));
    vlTOPp->BitonicSorter__DOT__cmpUnit_109__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_21) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_21));
    vlTOPp->BitonicSorter__DOT__cmpUnit_110__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_22) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_22));
    vlTOPp->BitonicSorter__DOT__cmpUnit_111__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_23) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_23));
    vlTOPp->BitonicSorter__DOT__cmpUnit_96__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_8) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_8));
    vlTOPp->BitonicSorter__DOT__cmpUnit_97__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_9) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_9));
    vlTOPp->BitonicSorter__DOT__cmpUnit_98__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_10) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_10));
    vlTOPp->BitonicSorter__DOT__cmpUnit_99__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_11) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_11));
    vlTOPp->BitonicSorter__DOT__cmpUnit_100__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_12) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_12));
    vlTOPp->BitonicSorter__DOT__cmpUnit_101__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_13) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_13));
    vlTOPp->BitonicSorter__DOT__cmpUnit_102__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_14) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_14));
    vlTOPp->BitonicSorter__DOT__cmpUnit_103__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_15) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_15));
    vlTOPp->BitonicSorter__DOT__cmpUnit_88__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data));
    vlTOPp->BitonicSorter__DOT__cmpUnit_89__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_1) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_1));
    vlTOPp->BitonicSorter__DOT__cmpUnit_90__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_2) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_2));
    vlTOPp->BitonicSorter__DOT__cmpUnit_91__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_3) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_3));
    vlTOPp->BitonicSorter__DOT__cmpUnit_92__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_4) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_4));
    vlTOPp->BitonicSorter__DOT__cmpUnit_93__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_5) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_5));
    vlTOPp->BitonicSorter__DOT__cmpUnit_94__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_6) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_6));
    vlTOPp->BitonicSorter__DOT__cmpUnit_95__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_7) 
           < (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_7));
    vlTOPp->BitonicSorter__DOT__cmpUnit_80__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_0_data) 
           < (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_1_data));
    vlTOPp->BitonicSorter__DOT__cmpUnit_81__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_2_data) 
           < (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_3_data));
    vlTOPp->BitonicSorter__DOT__cmpUnit_82__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_4_data) 
           < (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_5_data));
    vlTOPp->BitonicSorter__DOT__cmpUnit_83__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_6_data) 
           < (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_7_data));
    vlTOPp->BitonicSorter__DOT__cmpUnit_84__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_8_data) 
           < (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_9_data));
    vlTOPp->BitonicSorter__DOT__cmpUnit_85__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_10_data) 
           < (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_11_data));
    vlTOPp->BitonicSorter__DOT__cmpUnit_86__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_12_data) 
           < (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_13_data));
    vlTOPp->BitonicSorter__DOT__cmpUnit_87__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_14_data) 
           < (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_15_data));
    vlTOPp->BitonicSorter__DOT__cmpUnit_152__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_152__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_152__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_153__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_153__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_153__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_154__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_154__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_154__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_155__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_155__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_155__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_156__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_156__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_156__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_157__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_157__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_157__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_158__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_158__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_158__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_159__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_159__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_159__DOT__cmp_less_result))));
}

void VBitonicSorter::_settle__TOP__12(VBitonicSorter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSorter::_settle__TOP__12\n"); );
    VBitonicSorter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BitonicSorter__DOT__cmpUnit_144__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_144__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_144__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_145__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_145__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_145__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_146__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_146__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_146__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_147__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_147__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_147__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_148__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_148__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_148__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_149__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_149__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_149__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_150__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_150__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_150__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_151__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_151__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_151__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_136__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_136__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_136__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_137__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_137__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_137__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_138__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_138__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_138__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_139__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_139__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_139__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_140__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_140__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_140__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_141__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_141__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_141__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_142__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_142__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_142__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_143__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_143__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_143__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_128__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_128__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_128__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_129__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_129__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_129__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_130__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_130__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_130__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_131__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_131__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_131__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_132__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_132__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_132__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_133__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_133__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_133__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_134__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_134__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_134__DOT__cmp_less_result))));
    vlTOPp->BitonicSorter__DOT__cmpUnit_135__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_135__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_135__DOT__cmp_less_result))));
}

void VBitonicSorter::_eval_initial(VBitonicSorter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSorter::_eval_initial\n"); );
    VBitonicSorter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VBitonicSorter::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSorter::final\n"); );
    // Variables
    VBitonicSorter__Syms* __restrict vlSymsp = this->__VlSymsp;
    VBitonicSorter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBitonicSorter::_eval_settle(VBitonicSorter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSorter::_eval_settle\n"); );
    VBitonicSorter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__11(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__12(vlSymsp);
}

void VBitonicSorter::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSorter::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_payload_0 = VL_RAND_RESET_I(8);
    raw_data_payload_1 = VL_RAND_RESET_I(8);
    raw_data_payload_2 = VL_RAND_RESET_I(8);
    raw_data_payload_3 = VL_RAND_RESET_I(8);
    raw_data_payload_4 = VL_RAND_RESET_I(8);
    raw_data_payload_5 = VL_RAND_RESET_I(8);
    raw_data_payload_6 = VL_RAND_RESET_I(8);
    raw_data_payload_7 = VL_RAND_RESET_I(8);
    raw_data_payload_8 = VL_RAND_RESET_I(8);
    raw_data_payload_9 = VL_RAND_RESET_I(8);
    raw_data_payload_10 = VL_RAND_RESET_I(8);
    raw_data_payload_11 = VL_RAND_RESET_I(8);
    raw_data_payload_12 = VL_RAND_RESET_I(8);
    raw_data_payload_13 = VL_RAND_RESET_I(8);
    raw_data_payload_14 = VL_RAND_RESET_I(8);
    raw_data_payload_15 = VL_RAND_RESET_I(8);
    ascending_order = VL_RAND_RESET_I(1);
    sorted_data_valid = VL_RAND_RESET_I(1);
    sorted_data_payload_0_data = VL_RAND_RESET_I(8);
    sorted_data_payload_1_data = VL_RAND_RESET_I(8);
    sorted_data_payload_2_data = VL_RAND_RESET_I(8);
    sorted_data_payload_3_data = VL_RAND_RESET_I(8);
    sorted_data_payload_4_data = VL_RAND_RESET_I(8);
    sorted_data_payload_5_data = VL_RAND_RESET_I(8);
    sorted_data_payload_6_data = VL_RAND_RESET_I(8);
    sorted_data_payload_7_data = VL_RAND_RESET_I(8);
    sorted_data_payload_8_data = VL_RAND_RESET_I(8);
    sorted_data_payload_9_data = VL_RAND_RESET_I(8);
    sorted_data_payload_10_data = VL_RAND_RESET_I(8);
    sorted_data_payload_11_data = VL_RAND_RESET_I(8);
    sorted_data_payload_12_data = VL_RAND_RESET_I(8);
    sorted_data_payload_13_data = VL_RAND_RESET_I(8);
    sorted_data_payload_14_data = VL_RAND_RESET_I(8);
    sorted_data_payload_15_data = VL_RAND_RESET_I(8);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__reg_data_buf_0_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT__reg_data_buf_1_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT__reg_data_buf_2_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT__reg_data_buf_3_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT__reg_data_buf_4_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT__reg_data_buf_5_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT__reg_data_buf_6_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT__reg_data_buf_7_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT__reg_data_buf_8_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT__reg_data_buf_9_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT__reg_data_buf_10_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT__reg_data_buf_11_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT__reg_data_buf_12_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT__reg_data_buf_13_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT__reg_data_buf_14_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT__reg_data_buf_15_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_1 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_1 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_2 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_3 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_2 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_3 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_4 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_5 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_4 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_5 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_6 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_7 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_6 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_7 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_8 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_8 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_9 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_9 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_10 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_10 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_11 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_11 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_12 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_12 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_13 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_13 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_14 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_14 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_15 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_15 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_16 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_17 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_18 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_19 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_16 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_17 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_18 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_19 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_20 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_21 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_22 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_23 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_20 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_21 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_22 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_23 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_24 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_25 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_24 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_25 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_26 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_27 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_26 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_27 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_28 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_29 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_28 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_29 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_30 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_31 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_30 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_31 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_32 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_32 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_33 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_33 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_34 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_34 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_35 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_35 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_36 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_36 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_37 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_37 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_38 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_38 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_39 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_39 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_40 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_41 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_42 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_43 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_44 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_45 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_46 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_47 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_40 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_41 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_42 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_43 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_44 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_45 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_46 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_47 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_48 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_49 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_50 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_51 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_48 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_49 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_50 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_51 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_52 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_53 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_54 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_55 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_52 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_53 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_54 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_55 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_56 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_57 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_56 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_57 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_58 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_59 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_58 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_59 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_60 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_61 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_60 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_61 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_62 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_63 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_62 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_63 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_64 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_64 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_65 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_65 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_66 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_66 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_67 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_67 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_68 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_68 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_69 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_69 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_70 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_70 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in1_data_71 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_in2_data_71 = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_sorted_data_payload_0_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_sorted_data_payload_1_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_sorted_data_payload_2_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_sorted_data_payload_3_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_sorted_data_payload_4_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_sorted_data_payload_5_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_sorted_data_payload_6_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_sorted_data_payload_7_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_sorted_data_payload_8_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_sorted_data_payload_9_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_sorted_data_payload_10_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_sorted_data_payload_11_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_sorted_data_payload_12_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_sorted_data_payload_13_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_sorted_data_payload_14_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT___zz_sorted_data_payload_15_data = VL_RAND_RESET_I(8);
    BitonicSorter__DOT__cmpUnit_80__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_81__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_82__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_83__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_84__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_85__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_86__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_87__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_88__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_89__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_90__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_91__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_92__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_93__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_94__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_95__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_96__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_97__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_98__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_99__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_100__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_101__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_102__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_103__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_104__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_105__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_106__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_107__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_108__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_109__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_110__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_111__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_112__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_113__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_114__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_115__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_116__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_117__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_118__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_119__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_120__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_121__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_122__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_123__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_124__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_125__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_126__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_127__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_128__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_128__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_129__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_129__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_130__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_130__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_131__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_131__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_132__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_132__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_133__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_133__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_134__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_134__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_135__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_135__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_136__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_136__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_137__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_137__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_138__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_138__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_139__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_139__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_140__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_140__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_141__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_141__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_142__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_142__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_143__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_143__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_144__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_144__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_145__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_145__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_146__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_146__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_147__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_147__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_148__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_148__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_149__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_149__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_150__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_150__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_151__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_151__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_152__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_152__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_153__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_153__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_154__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_154__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_155__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_155__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_156__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_156__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_157__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_157__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_158__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_158__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_159__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__cmpUnit_159__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_0 = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_1 = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_2 = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_3 = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_4 = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_5 = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_6 = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_7 = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_8 = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_9 = VL_RAND_RESET_I(1);
    BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_10 = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
