// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCFOCorrector__Syms.h"


//======================

void VCFOCorrector::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCFOCorrector* t = (VCFOCorrector*)userthis;
    VCFOCorrector__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VCFOCorrector::traceChgThis(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 2U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 3U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCFOCorrector::traceChgThis__2(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,((1U & (((IData)(0x1fff800U) 
                                  + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                 >> 0x18U))));
        vcdp->chgBit(c+9,((0U != (0xfffU & ((IData)(0x800U) 
                                            + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_2)))));
        vcdp->chgBus(c+17,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_x_raw),12);
        vcdp->chgBit(c+25,((1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw) 
                                  >> 0xcU))));
        vcdp->chgBit(c+33,((3U != (3U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw) 
                                         >> 0xbU)))));
        vcdp->chgBit(c+41,((1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw) 
                                  >> 0xbU))));
        vcdp->chgBit(c+49,((1U & (((IData)(0x1fff800U) 
                                   + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                  >> 0x18U))));
        vcdp->chgBit(c+57,((0U != (0xfffU & ((IData)(0x800U) 
                                             + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_5)))));
        vcdp->chgBus(c+65,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_y_raw),12);
        vcdp->chgBit(c+73,((1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw) 
                                  >> 0xcU))));
        vcdp->chgBit(c+81,((3U != (3U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw) 
                                         >> 0xbU)))));
        vcdp->chgBit(c+89,((1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw) 
                                  >> 0xbU))));
    }
}

void VCFOCorrector::traceChgThis__3(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+97,((0xffffffU & (VL_LTS_III(1,24,24, 0x1921U, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50)
                                          ? ((vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                                              - (IData)(0x3243U)) 
                                             + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect)
                                          : (VL_GTS_III(1,24,24, 0xffe6dfU, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50)
                                              ? ((IData)(0x3243U) 
                                                 + 
                                                 (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                                                  + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect))
                                              : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                                                 + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect))))),24);
    }
}

void VCFOCorrector::traceChgThis__4(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+105,(VL_LTS_III(1,24,24, 0x1921U, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50)));
        vcdp->chgBit(c+113,(VL_GTS_III(1,24,24, 0xffe6dfU, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50)));
        vcdp->chgBus(c+121,((0xffffffU & VL_NEGATE_I(
                                                     ((0x1000000U 
                                                       & vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125_4)
                                                       ? 
                                                      ((3U 
                                                        != 
                                                        (3U 
                                                         & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125_4 
                                                            >> 0x17U)))
                                                        ? 0x800000U
                                                        : vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125_4)
                                                       : 
                                                      ((0x800000U 
                                                        & vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125_4)
                                                        ? 0x7fffffU
                                                        : vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125_4))))),24);
        vcdp->chgBit(c+129,((1U & (IData)((VL_ULL(1) 
                                           & ((VL_ULL(0x1ffffff80000) 
                                               + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                              >> 0x2cU))))));
        vcdp->chgBit(c+137,((0U != (0xfffffU & ((IData)(0x80000U) 
                                                + (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_2))))));
        vcdp->chgBit(c+145,((1U & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125 
                                   >> 0x18U))));
        vcdp->chgBit(c+153,((3U != (3U & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125 
                                          >> 0x17U)))));
        vcdp->chgBit(c+161,((1U & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125 
                                   >> 0x17U))));
        vcdp->chgBit(c+169,((1U & (IData)((VL_ULL(1) 
                                           & ((VL_ULL(0x1ffffff80000) 
                                               + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                              >> 0x2cU))))));
        vcdp->chgBit(c+177,((0U != (0xfffffU & ((IData)(0x80000U) 
                                                + (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_5))))));
        vcdp->chgBit(c+185,((1U & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125_4 
                                   >> 0x18U))));
        vcdp->chgBit(c+193,((3U != (3U & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125_4 
                                          >> 0x17U)))));
        vcdp->chgBit(c+201,((1U & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125_4 
                                   >> 0x17U))));
        vcdp->chgBus(c+209,((0xffffffU & ((0x1000000U 
                                           & vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125)
                                           ? ((3U != 
                                               (3U 
                                                & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125 
                                                   >> 0x17U)))
                                               ? 0x800000U
                                               : vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125)
                                           : ((0x800000U 
                                               & vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125)
                                               ? 0x7fffffU
                                               : vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125)))),24);
    }
}

void VCFOCorrector::traceChgThis__5(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+217,((0xffffffU & VL_MULS_III(24,24,24, 
                                                     (0xffffffU 
                                                      & VL_EXTENDS_II(24,12, (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_i))), 
                                                     (0xffffffU 
                                                      & VL_EXTENDS_II(24,12, 
                                                                      (0xfffU 
                                                                       & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_q) 
                                                                          + (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_i)))))))),24);
        vcdp->chgBus(c+225,((0xffffffU & VL_MULS_III(24,24,24, 
                                                     (0xffffffU 
                                                      & VL_EXTENDS_II(24,12, (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_q))), 
                                                     (0xffffffU 
                                                      & VL_EXTENDS_II(24,12, 
                                                                      (0xfffU 
                                                                       & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_i) 
                                                                          - (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_q)))))))),24);
    }
}

void VCFOCorrector::traceChgThis__6(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+233,(vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_i),12);
        vcdp->chgBus(c+241,(vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_q),12);
    }
}

void VCFOCorrector::traceChgThis__7(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+249,(vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid));
        vcdp->chgBit(c+257,((1U & (~ (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid)))));
    }
}

void VCFOCorrector::traceChgThis__8(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+265,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1),24);
    }
}

void VCFOCorrector::traceChgThis__9(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+273,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11),24);
        vcdp->chgBus(c+281,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y),24);
        vcdp->chgBus(c+289,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z),24);
        vcdp->chgBit(c+297,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_11));
        vcdp->chgBus(c+305,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi),24);
        vcdp->chgBit(c+313,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_0));
        vcdp->chgBit(c+321,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_1));
        vcdp->chgBit(c+329,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_2));
        vcdp->chgBit(c+337,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_3));
        vcdp->chgBit(c+345,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_4));
        vcdp->chgBit(c+353,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_5));
        vcdp->chgBit(c+361,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_6));
        vcdp->chgBit(c+369,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_7));
        vcdp->chgBit(c+377,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_8));
        vcdp->chgBit(c+385,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_9));
        vcdp->chgBit(c+393,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_10));
        vcdp->chgBus(c+401,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_11),24);
        vcdp->chgBus(c+409,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_y),24);
        vcdp->chgBus(c+417,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z),24);
        vcdp->chgQuad(c+425,((VL_ULL(0xffffffffffff) 
                              & VL_MULS_QQQ(48,48,48, VL_ULL(0x80), 
                                            (VL_ULL(0xffffffffffff) 
                                             & VL_EXTENDS_QI(48,24, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z))))),48);
    }
}

void VCFOCorrector::traceChgThis__10(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+441,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11));
        vcdp->chgBit(c+449,(((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_11) 
                             & (0x39U == (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__impulse_cnt)))));
        vcdp->chgBit(c+457,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__xy_symbol));
        vcdp->chgBus(c+465,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect),24);
        vcdp->chgBit(c+473,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1));
        vcdp->chgQuad(c+481,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i),44);
        vcdp->chgQuad(c+497,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q),44);
        vcdp->chgBit(c+513,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_11));
        vcdp->chgBus(c+521,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__impulse_cnt),6);
        vcdp->chgBit(c+529,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_valid));
        vcdp->chgBus(c+537,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_i),12);
        vcdp->chgBus(c+545,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_q),12);
        vcdp->chgBit(c+553,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_valid));
        vcdp->chgBus(c+561,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_payload_cha_i),12);
        vcdp->chgBus(c+569,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_payload_cha_q),12);
        vcdp->chgBit(c+577,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_valid));
        vcdp->chgBus(c+585,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_payload_cha_i),12);
        vcdp->chgBus(c+593,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_payload_cha_q),12);
        vcdp->chgBit(c+601,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_valid));
        vcdp->chgBus(c+609,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_payload_cha_i),12);
        vcdp->chgBus(c+617,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_payload_cha_q),12);
        vcdp->chgBit(c+625,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_valid));
        vcdp->chgBus(c+633,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_payload_cha_i),12);
        vcdp->chgBus(c+641,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_payload_cha_q),12);
        vcdp->chgBit(c+649,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_valid));
        vcdp->chgBus(c+657,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_payload_cha_i),12);
        vcdp->chgBus(c+665,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_payload_cha_q),12);
        vcdp->chgBit(c+673,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_valid));
        vcdp->chgBus(c+681,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_payload_cha_i),12);
        vcdp->chgBus(c+689,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_payload_cha_q),12);
        vcdp->chgBit(c+697,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_valid));
        vcdp->chgBus(c+705,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_payload_cha_i),12);
        vcdp->chgBus(c+713,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_payload_cha_q),12);
        vcdp->chgBit(c+721,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_valid));
        vcdp->chgBus(c+729,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_payload_cha_i),12);
        vcdp->chgBus(c+737,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_payload_cha_q),12);
        vcdp->chgBit(c+745,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_valid));
        vcdp->chgBus(c+753,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_payload_cha_i),12);
        vcdp->chgBus(c+761,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_payload_cha_q),12);
        vcdp->chgBit(c+769,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_valid));
        vcdp->chgBus(c+777,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_payload_cha_i),12);
        vcdp->chgBus(c+785,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_payload_cha_q),12);
        vcdp->chgBit(c+793,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_valid));
        vcdp->chgBus(c+801,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_payload_cha_i),12);
        vcdp->chgBus(c+809,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_payload_cha_q),12);
        vcdp->chgBit(c+817,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_valid));
        vcdp->chgBus(c+825,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_payload_cha_i),12);
        vcdp->chgBus(c+833,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_payload_cha_q),12);
        vcdp->chgBit(c+841,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_valid));
        vcdp->chgBus(c+849,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_payload_cha_i),12);
        vcdp->chgBus(c+857,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_payload_cha_q),12);
        vcdp->chgBit(c+865,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_valid));
        vcdp->chgBus(c+873,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_payload_cha_i),12);
        vcdp->chgBus(c+881,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_payload_cha_q),12);
        vcdp->chgBit(c+889,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_valid));
        vcdp->chgBus(c+897,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_payload_cha_i),12);
        vcdp->chgBus(c+905,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_payload_cha_q),12);
        vcdp->chgBit(c+913,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_valid));
        vcdp->chgBus(c+921,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_payload_cha_i),12);
        vcdp->chgBus(c+929,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_payload_cha_q),12);
        vcdp->chgBit(c+937,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_valid));
        vcdp->chgBus(c+945,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_payload_cha_i),12);
        vcdp->chgBus(c+953,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_payload_cha_q),12);
        vcdp->chgBit(c+961,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_valid));
        vcdp->chgBus(c+969,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_payload_cha_i),12);
        vcdp->chgBus(c+977,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_payload_cha_q),12);
        vcdp->chgBit(c+985,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_valid));
        vcdp->chgBus(c+993,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_payload_cha_i),12);
        vcdp->chgBus(c+1001,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_payload_cha_q),12);
        vcdp->chgBit(c+1009,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_valid));
        vcdp->chgBus(c+1017,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_payload_cha_i),12);
        vcdp->chgBus(c+1025,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_payload_cha_q),12);
        vcdp->chgBit(c+1033,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_valid));
        vcdp->chgBus(c+1041,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_payload_cha_i),12);
        vcdp->chgBus(c+1049,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_payload_cha_q),12);
        vcdp->chgBit(c+1057,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_valid));
        vcdp->chgBus(c+1065,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_payload_cha_i),12);
        vcdp->chgBus(c+1073,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_payload_cha_q),12);
        vcdp->chgBit(c+1081,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_valid));
        vcdp->chgBus(c+1089,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_payload_cha_i),12);
        vcdp->chgBus(c+1097,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_payload_cha_q),12);
        vcdp->chgBit(c+1105,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_valid));
        vcdp->chgBus(c+1113,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_payload_cha_i),12);
        vcdp->chgBus(c+1121,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_payload_cha_q),12);
        vcdp->chgBit(c+1129,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_valid));
        vcdp->chgBus(c+1137,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_payload_cha_i),12);
        vcdp->chgBus(c+1145,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_payload_cha_q),12);
        vcdp->chgBit(c+1153,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_valid));
        vcdp->chgBus(c+1161,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_payload_cha_i),12);
        vcdp->chgBus(c+1169,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_payload_cha_q),12);
        vcdp->chgBit(c+1177,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_valid));
        vcdp->chgBus(c+1185,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_payload_cha_i),12);
        vcdp->chgBus(c+1193,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_payload_cha_q),12);
        vcdp->chgBit(c+1201,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_valid));
        vcdp->chgBus(c+1209,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_payload_cha_i),12);
        vcdp->chgBus(c+1217,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_payload_cha_q),12);
        vcdp->chgBit(c+1225,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_valid));
        vcdp->chgBus(c+1233,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_payload_cha_i),12);
        vcdp->chgBus(c+1241,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_payload_cha_q),12);
        vcdp->chgBit(c+1249,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_valid));
        vcdp->chgBus(c+1257,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_payload_cha_i),12);
        vcdp->chgBus(c+1265,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_payload_cha_q),12);
        vcdp->chgBit(c+1273,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_valid));
        vcdp->chgBus(c+1281,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_payload_cha_i),12);
        vcdp->chgBus(c+1289,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_payload_cha_q),12);
        vcdp->chgBit(c+1297,((1U & (~ (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)))));
        vcdp->chgBus(c+1305,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31),24);
        vcdp->chgBus(c+1313,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_31),24);
        vcdp->chgBus(c+1321,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_i),24);
        vcdp->chgBus(c+1329,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_q),24);
        vcdp->chgBit(c+1337,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid));
        vcdp->chgBus(c+1345,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0),24);
        vcdp->chgBus(c+1353,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1),24);
        vcdp->chgBus(c+1361,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2),24);
        vcdp->chgBus(c+1369,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3),24);
        vcdp->chgBus(c+1377,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4),24);
        vcdp->chgBus(c+1385,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5),24);
        vcdp->chgBus(c+1393,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6),24);
        vcdp->chgBus(c+1401,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7),24);
        vcdp->chgBus(c+1409,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8),24);
        vcdp->chgBus(c+1417,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9),24);
        vcdp->chgBus(c+1425,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10),24);
        vcdp->chgBus(c+1433,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11),24);
        vcdp->chgBus(c+1441,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12),24);
        vcdp->chgBus(c+1449,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13),24);
        vcdp->chgBus(c+1457,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14),24);
        vcdp->chgBus(c+1465,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15),24);
        vcdp->chgBus(c+1473,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16),24);
        vcdp->chgBus(c+1481,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_17),24);
        vcdp->chgBus(c+1489,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_18),24);
        vcdp->chgBus(c+1497,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_19),24);
        vcdp->chgBus(c+1505,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_20),24);
        vcdp->chgBus(c+1513,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_21),24);
        vcdp->chgBus(c+1521,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_22),24);
        vcdp->chgBus(c+1529,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_23),24);
        vcdp->chgBus(c+1537,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_24),24);
        vcdp->chgBus(c+1545,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_25),24);
        vcdp->chgBus(c+1553,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_26),24);
        vcdp->chgBus(c+1561,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_27),24);
        vcdp->chgBus(c+1569,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_28),24);
        vcdp->chgBus(c+1577,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_29),24);
        vcdp->chgBus(c+1585,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_30),24);
        vcdp->chgBus(c+1593,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_0),24);
        vcdp->chgBus(c+1601,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_1),24);
        vcdp->chgBus(c+1609,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_2),24);
        vcdp->chgBus(c+1617,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_3),24);
        vcdp->chgBus(c+1625,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_4),24);
        vcdp->chgBus(c+1633,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_5),24);
        vcdp->chgBus(c+1641,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_6),24);
        vcdp->chgBus(c+1649,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_7),24);
        vcdp->chgBus(c+1657,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_8),24);
        vcdp->chgBus(c+1665,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_9),24);
        vcdp->chgBus(c+1673,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_10),24);
        vcdp->chgBus(c+1681,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_11),24);
        vcdp->chgBus(c+1689,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_12),24);
        vcdp->chgBus(c+1697,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_13),24);
        vcdp->chgBus(c+1705,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_14),24);
        vcdp->chgBus(c+1713,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_15),24);
        vcdp->chgBus(c+1721,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_16),24);
        vcdp->chgBus(c+1729,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_17),24);
        vcdp->chgBus(c+1737,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_18),24);
        vcdp->chgBus(c+1745,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_19),24);
        vcdp->chgBus(c+1753,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_20),24);
        vcdp->chgBus(c+1761,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_21),24);
        vcdp->chgBus(c+1769,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_22),24);
        vcdp->chgBus(c+1777,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_23),24);
        vcdp->chgBus(c+1785,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_24),24);
        vcdp->chgBus(c+1793,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_25),24);
        vcdp->chgBus(c+1801,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_26),24);
        vcdp->chgBus(c+1809,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_27),24);
        vcdp->chgBus(c+1817,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_28),24);
        vcdp->chgBus(c+1825,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_29),24);
        vcdp->chgBus(c+1833,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_30),24);
    }
}

void VCFOCorrector::traceChgThis__12(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1841,(vlTOPp->ref_data_valid));
        vcdp->chgBus(c+1849,(vlTOPp->ref_data_payload_cha_i),12);
        vcdp->chgBus(c+1857,(vlTOPp->ref_data_payload_cha_q),12);
        vcdp->chgBit(c+1865,(vlTOPp->raw_data_valid));
        vcdp->chgBus(c+1873,(vlTOPp->raw_data_payload_cha_i),12);
        vcdp->chgBus(c+1881,(vlTOPp->raw_data_payload_cha_q),12);
        vcdp->chgBit(c+1889,(vlTOPp->rotated_data_valid));
        vcdp->chgBus(c+1897,(vlTOPp->rotated_data_payload_cha_i),12);
        vcdp->chgBus(c+1905,(vlTOPp->rotated_data_payload_cha_q),12);
        vcdp->chgBit(c+1913,(vlTOPp->enable));
        vcdp->chgBit(c+1921,(vlTOPp->clk));
        vcdp->chgBit(c+1929,(vlTOPp->reset));
        vcdp->chgBus(c+1937,(((IData)(vlTOPp->raw_data_payload_cha_i) 
                              << 0xcU)),24);
        vcdp->chgBus(c+1945,(((IData)(vlTOPp->raw_data_payload_cha_q) 
                              << 0xcU)),24);
        vcdp->chgBit(c+1953,((1U & (~ (IData)(vlTOPp->raw_data_valid)))));
    }
}
