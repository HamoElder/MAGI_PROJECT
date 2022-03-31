// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCFOEstimator__Syms.h"


//======================

void VCFOEstimator::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCFOEstimator* t = (VCFOEstimator*)userthis;
    VCFOEstimator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VCFOEstimator::traceChgThis(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCFOEstimator::traceChgThis__2(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,((1U & (IData)((VL_ULL(1) 
                                         & ((VL_ULL(0x1ffffff80000) 
                                             + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_2) 
                                            >> 0x2cU))))));
        vcdp->chgBit(c+9,((0U != (0xfffffU & ((IData)(0x80000U) 
                                              + (IData)(vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_2))))));
        vcdp->chgBit(c+17,((1U & (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130 
                                  >> 0x18U))));
        vcdp->chgBit(c+25,((1U & (~ (IData)((3U == 
                                             (3U & 
                                              (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130 
                                               >> 0x17U))))))));
        vcdp->chgBit(c+33,((1U & (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130 
                                  >> 0x17U))));
        vcdp->chgBit(c+41,((1U & (IData)((VL_ULL(1) 
                                          & ((VL_ULL(0x1ffffff80000) 
                                              + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_5) 
                                             >> 0x2cU))))));
        vcdp->chgBit(c+49,((0U != (0xfffffU & ((IData)(0x80000U) 
                                               + (IData)(vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_5))))));
        vcdp->chgBit(c+57,((1U & (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130_4 
                                  >> 0x18U))));
        vcdp->chgBit(c+65,((1U & (~ (IData)((3U == 
                                             (3U & 
                                              (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130_4 
                                               >> 0x17U))))))));
        vcdp->chgBit(c+73,((1U & (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130_4 
                                  >> 0x17U))));
        vcdp->chgBus(c+81,((0xffffffU & ((0x1000000U 
                                          & vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130)
                                          ? ((3U == 
                                              (3U & 
                                               (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130 
                                                >> 0x17U)))
                                              ? vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130
                                              : 0x800000U)
                                          : ((0x800000U 
                                              & vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130)
                                              ? 0x7fffffU
                                              : vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130)))),24);
        vcdp->chgBus(c+89,((0xffffffU & ((0x1000000U 
                                          & vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130_4)
                                          ? ((3U == 
                                              (3U & 
                                               (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130_4 
                                                >> 0x17U)))
                                              ? vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130_4
                                              : 0x800000U)
                                          : ((0x800000U 
                                              & vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130_4)
                                              ? 0x7fffffU
                                              : vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130_4)))),24);
    }
}

void VCFOEstimator::traceChgThis__3(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+97,(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_11),24);
        vcdp->chgBus(c+105,(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_y),24);
        vcdp->chgBus(c+113,(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z),24);
    }
}

void VCFOEstimator::traceChgThis__4(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+121,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid));
        vcdp->chgQuad(c+129,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i),44);
        vcdp->chgQuad(c+145,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q),44);
        vcdp->chgBit(c+161,(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_11));
        vcdp->chgBus(c+169,(vlTOPp->CFOEstimator__DOT__impulse_cnt),6);
        vcdp->chgBit(c+177,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_31_valid));
        vcdp->chgBus(c+185,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_i),12);
        vcdp->chgBus(c+193,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_q),12);
        vcdp->chgBit(c+201,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_valid));
        vcdp->chgBus(c+209,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_i),12);
        vcdp->chgBus(c+217,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_q),12);
        vcdp->chgBit(c+225,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_valid));
        vcdp->chgBus(c+233,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_i),12);
        vcdp->chgBus(c+241,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_q),12);
        vcdp->chgBit(c+249,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_valid));
        vcdp->chgBus(c+257,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_i),12);
        vcdp->chgBus(c+265,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_q),12);
        vcdp->chgBit(c+273,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_valid));
        vcdp->chgBus(c+281,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_i),12);
        vcdp->chgBus(c+289,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_q),12);
        vcdp->chgBit(c+297,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_valid));
        vcdp->chgBus(c+305,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_i),12);
        vcdp->chgBus(c+313,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_q),12);
        vcdp->chgBit(c+321,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_valid));
        vcdp->chgBus(c+329,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_i),12);
        vcdp->chgBus(c+337,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_q),12);
        vcdp->chgBit(c+345,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_valid));
        vcdp->chgBus(c+353,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_i),12);
        vcdp->chgBus(c+361,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_q),12);
        vcdp->chgBit(c+369,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_valid));
        vcdp->chgBus(c+377,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_i),12);
        vcdp->chgBus(c+385,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_q),12);
        vcdp->chgBit(c+393,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_valid));
        vcdp->chgBus(c+401,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_i),12);
        vcdp->chgBus(c+409,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_q),12);
        vcdp->chgBit(c+417,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_valid));
        vcdp->chgBus(c+425,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_i),12);
        vcdp->chgBus(c+433,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_q),12);
        vcdp->chgBit(c+441,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_valid));
        vcdp->chgBus(c+449,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_i),12);
        vcdp->chgBus(c+457,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_q),12);
        vcdp->chgBit(c+465,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_valid));
        vcdp->chgBus(c+473,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_i),12);
        vcdp->chgBus(c+481,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_q),12);
        vcdp->chgBit(c+489,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_valid));
        vcdp->chgBus(c+497,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_i),12);
        vcdp->chgBus(c+505,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_q),12);
        vcdp->chgBit(c+513,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_valid));
        vcdp->chgBus(c+521,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_i),12);
        vcdp->chgBus(c+529,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_q),12);
        vcdp->chgBit(c+537,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_valid));
        vcdp->chgBus(c+545,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_i),12);
        vcdp->chgBus(c+553,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_q),12);
        vcdp->chgBit(c+561,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_valid));
        vcdp->chgBus(c+569,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_i),12);
        vcdp->chgBus(c+577,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_q),12);
        vcdp->chgBit(c+585,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_16_valid));
        vcdp->chgBus(c+593,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_16_payload_cha_i),12);
        vcdp->chgBus(c+601,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_16_payload_cha_q),12);
        vcdp->chgBit(c+609,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_17_valid));
        vcdp->chgBus(c+617,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_17_payload_cha_i),12);
        vcdp->chgBus(c+625,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_17_payload_cha_q),12);
        vcdp->chgBit(c+633,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_18_valid));
        vcdp->chgBus(c+641,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_18_payload_cha_i),12);
        vcdp->chgBus(c+649,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_18_payload_cha_q),12);
        vcdp->chgBit(c+657,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_19_valid));
        vcdp->chgBus(c+665,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_19_payload_cha_i),12);
        vcdp->chgBus(c+673,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_19_payload_cha_q),12);
        vcdp->chgBit(c+681,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_20_valid));
        vcdp->chgBus(c+689,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_20_payload_cha_i),12);
        vcdp->chgBus(c+697,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_20_payload_cha_q),12);
        vcdp->chgBit(c+705,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_21_valid));
        vcdp->chgBus(c+713,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_21_payload_cha_i),12);
        vcdp->chgBus(c+721,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_21_payload_cha_q),12);
        vcdp->chgBit(c+729,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_22_valid));
        vcdp->chgBus(c+737,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_22_payload_cha_i),12);
        vcdp->chgBus(c+745,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_22_payload_cha_q),12);
        vcdp->chgBit(c+753,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_23_valid));
        vcdp->chgBus(c+761,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_23_payload_cha_i),12);
        vcdp->chgBus(c+769,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_23_payload_cha_q),12);
        vcdp->chgBit(c+777,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_24_valid));
        vcdp->chgBus(c+785,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_24_payload_cha_i),12);
        vcdp->chgBus(c+793,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_24_payload_cha_q),12);
        vcdp->chgBit(c+801,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_25_valid));
        vcdp->chgBus(c+809,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_25_payload_cha_i),12);
        vcdp->chgBus(c+817,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_25_payload_cha_q),12);
        vcdp->chgBit(c+825,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_26_valid));
        vcdp->chgBus(c+833,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_26_payload_cha_i),12);
        vcdp->chgBus(c+841,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_26_payload_cha_q),12);
        vcdp->chgBit(c+849,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_27_valid));
        vcdp->chgBus(c+857,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_27_payload_cha_i),12);
        vcdp->chgBus(c+865,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_27_payload_cha_q),12);
        vcdp->chgBit(c+873,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_28_valid));
        vcdp->chgBus(c+881,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_28_payload_cha_i),12);
        vcdp->chgBus(c+889,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_28_payload_cha_q),12);
        vcdp->chgBit(c+897,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_29_valid));
        vcdp->chgBus(c+905,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_29_payload_cha_i),12);
        vcdp->chgBus(c+913,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_29_payload_cha_q),12);
        vcdp->chgBit(c+921,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_30_valid));
        vcdp->chgBus(c+929,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_30_payload_cha_i),12);
        vcdp->chgBus(c+937,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_30_payload_cha_q),12);
        vcdp->chgBit(c+945,((1U & (~ (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable)))));
        vcdp->chgBus(c+953,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_31),24);
        vcdp->chgBus(c+961,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31),24);
        vcdp->chgBus(c+969,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i),24);
        vcdp->chgBit(c+977,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable));
        vcdp->chgBus(c+985,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_0),24);
        vcdp->chgBus(c+993,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_1),24);
        vcdp->chgBus(c+1001,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_2),24);
        vcdp->chgBus(c+1009,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_3),24);
        vcdp->chgBus(c+1017,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_4),24);
        vcdp->chgBus(c+1025,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_5),24);
        vcdp->chgBus(c+1033,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_6),24);
        vcdp->chgBus(c+1041,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_7),24);
        vcdp->chgBus(c+1049,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_8),24);
        vcdp->chgBus(c+1057,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_9),24);
        vcdp->chgBus(c+1065,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_10),24);
        vcdp->chgBus(c+1073,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_11),24);
        vcdp->chgBus(c+1081,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_12),24);
        vcdp->chgBus(c+1089,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_13),24);
        vcdp->chgBus(c+1097,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_14),24);
        vcdp->chgBus(c+1105,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_15),24);
        vcdp->chgBus(c+1113,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_16),24);
        vcdp->chgBus(c+1121,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_17),24);
        vcdp->chgBus(c+1129,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_18),24);
        vcdp->chgBus(c+1137,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_19),24);
        vcdp->chgBus(c+1145,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_20),24);
        vcdp->chgBus(c+1153,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_21),24);
        vcdp->chgBus(c+1161,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_22),24);
        vcdp->chgBus(c+1169,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_23),24);
        vcdp->chgBus(c+1177,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_24),24);
        vcdp->chgBus(c+1185,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_25),24);
        vcdp->chgBus(c+1193,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_26),24);
        vcdp->chgBus(c+1201,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_27),24);
        vcdp->chgBus(c+1209,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_28),24);
        vcdp->chgBus(c+1217,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_29),24);
        vcdp->chgBus(c+1225,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_30),24);
        vcdp->chgBus(c+1233,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q),24);
        vcdp->chgBus(c+1241,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0),24);
        vcdp->chgBus(c+1249,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1),24);
        vcdp->chgBus(c+1257,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2),24);
        vcdp->chgBus(c+1265,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3),24);
        vcdp->chgBus(c+1273,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4),24);
        vcdp->chgBus(c+1281,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5),24);
        vcdp->chgBus(c+1289,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6),24);
        vcdp->chgBus(c+1297,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7),24);
        vcdp->chgBus(c+1305,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8),24);
        vcdp->chgBus(c+1313,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9),24);
        vcdp->chgBus(c+1321,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10),24);
        vcdp->chgBus(c+1329,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11),24);
        vcdp->chgBus(c+1337,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12),24);
        vcdp->chgBus(c+1345,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13),24);
        vcdp->chgBus(c+1353,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14),24);
        vcdp->chgBus(c+1361,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15),24);
        vcdp->chgBus(c+1369,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16),24);
        vcdp->chgBus(c+1377,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_17),24);
        vcdp->chgBus(c+1385,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_18),24);
        vcdp->chgBus(c+1393,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_19),24);
        vcdp->chgBus(c+1401,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_20),24);
        vcdp->chgBus(c+1409,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_21),24);
        vcdp->chgBus(c+1417,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_22),24);
        vcdp->chgBus(c+1425,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_23),24);
        vcdp->chgBus(c+1433,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_24),24);
        vcdp->chgBus(c+1441,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_25),24);
        vcdp->chgBus(c+1449,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_26),24);
        vcdp->chgBus(c+1457,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_27),24);
        vcdp->chgBus(c+1465,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_28),24);
        vcdp->chgBus(c+1473,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_29),24);
        vcdp->chgBus(c+1481,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_30),24);
    }
}

void VCFOEstimator::traceChgThis__5(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1489,(vlTOPp->rotated_data_valid));
        vcdp->chgBus(c+1497,(vlTOPp->rotated_data_payload_cha_i),12);
        vcdp->chgBus(c+1505,(vlTOPp->rotated_data_payload_cha_q),12);
        vcdp->chgBit(c+1513,(vlTOPp->delta_phi_valid));
        vcdp->chgBus(c+1521,(vlTOPp->delta_phi_payload),24);
        vcdp->chgBit(c+1529,(vlTOPp->clk));
        vcdp->chgBit(c+1537,(vlTOPp->reset));
        vcdp->chgBit(c+1545,((1U & (~ (IData)(vlTOPp->rotated_data_valid)))));
    }
}
