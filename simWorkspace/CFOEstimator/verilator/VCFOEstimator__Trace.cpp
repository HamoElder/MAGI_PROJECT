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
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
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
                                         & ((VL_ULL(0x1ffff8000) 
                                             + vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_5) 
                                            >> 0x20U))))));
        vcdp->chgBit(c+9,((0U != (0xffffU & ((IData)(0x8000U) 
                                             + (IData)(vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_5))))));
        vcdp->chgBit(c+17,((1U & (vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_1 
                                  >> 0x10U))));
        vcdp->chgBit(c+25,((3U != (3U & (vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_1 
                                         >> 0xfU)))));
        vcdp->chgBit(c+33,((1U & (vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_1 
                                  >> 0xfU))));
    }
}

void VCFOEstimator::traceChgThis__3(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+41,(vlTOPp->CFOEstimator__DOT__cordic_core__DOT__raw_data_fire));
    }
}

void VCFOEstimator::traceChgThis__4(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+49,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1),32);
    }
}

void VCFOEstimator::traceChgThis__5(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+57,(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_4),16);
        vcdp->chgBus(c+65,(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_y),16);
        vcdp->chgBus(c+73,(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z),16);
    }
}

void VCFOEstimator::traceChgThis__6(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+81,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1));
        vcdp->chgBus(c+89,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i),32);
        vcdp->chgBus(c+97,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q),32);
        vcdp->chgBit(c+105,(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_raw_data_ready));
        vcdp->chgBit(c+113,(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid));
        vcdp->chgBus(c+121,(vlTOPp->CFOEstimator__DOT__impluse_cnt),5);
        vcdp->chgBit(c+129,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_valid));
        vcdp->chgBus(c+137,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i),16);
        vcdp->chgBus(c+145,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_q),16);
        vcdp->chgBit(c+153,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_valid));
        vcdp->chgBus(c+161,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_i),16);
        vcdp->chgBus(c+169,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_q),16);
        vcdp->chgBit(c+177,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_valid));
        vcdp->chgBus(c+185,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_i),16);
        vcdp->chgBus(c+193,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_q),16);
        vcdp->chgBit(c+201,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_valid));
        vcdp->chgBus(c+209,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_i),16);
        vcdp->chgBus(c+217,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_q),16);
        vcdp->chgBit(c+225,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_valid));
        vcdp->chgBus(c+233,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_i),16);
        vcdp->chgBus(c+241,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_q),16);
        vcdp->chgBit(c+249,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_valid));
        vcdp->chgBus(c+257,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_i),16);
        vcdp->chgBus(c+265,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_q),16);
        vcdp->chgBit(c+273,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_valid));
        vcdp->chgBus(c+281,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_i),16);
        vcdp->chgBus(c+289,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_q),16);
        vcdp->chgBit(c+297,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_valid));
        vcdp->chgBus(c+305,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_i),16);
        vcdp->chgBus(c+313,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_q),16);
        vcdp->chgBit(c+321,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_valid));
        vcdp->chgBus(c+329,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_i),16);
        vcdp->chgBus(c+337,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_q),16);
        vcdp->chgBit(c+345,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_valid));
        vcdp->chgBus(c+353,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_i),16);
        vcdp->chgBus(c+361,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_q),16);
        vcdp->chgBit(c+369,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_valid));
        vcdp->chgBus(c+377,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_i),16);
        vcdp->chgBus(c+385,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_q),16);
        vcdp->chgBit(c+393,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_valid));
        vcdp->chgBus(c+401,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_i),16);
        vcdp->chgBus(c+409,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_q),16);
        vcdp->chgBit(c+417,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_valid));
        vcdp->chgBus(c+425,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_i),16);
        vcdp->chgBus(c+433,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_q),16);
        vcdp->chgBit(c+441,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_valid));
        vcdp->chgBus(c+449,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_i),16);
        vcdp->chgBus(c+457,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_q),16);
        vcdp->chgBit(c+465,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_valid));
        vcdp->chgBus(c+473,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_i),16);
        vcdp->chgBus(c+481,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_q),16);
        vcdp->chgBit(c+489,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_valid));
        vcdp->chgBus(c+497,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_i),16);
        vcdp->chgBus(c+505,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_q),16);
        vcdp->chgBus(c+513,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15),32);
        vcdp->chgBus(c+521,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_15),32);
        vcdp->chgBus(c+529,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_i),32);
        vcdp->chgBus(c+537,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_q),32);
        vcdp->chgBit(c+545,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid));
        vcdp->chgBus(c+553,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0),32);
        vcdp->chgBus(c+561,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1),32);
        vcdp->chgBus(c+569,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2),32);
        vcdp->chgBus(c+577,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3),32);
        vcdp->chgBus(c+585,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4),32);
        vcdp->chgBus(c+593,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5),32);
        vcdp->chgBus(c+601,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6),32);
        vcdp->chgBus(c+609,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7),32);
        vcdp->chgBus(c+617,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8),32);
        vcdp->chgBus(c+625,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9),32);
        vcdp->chgBus(c+633,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10),32);
        vcdp->chgBus(c+641,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11),32);
        vcdp->chgBus(c+649,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12),32);
        vcdp->chgBus(c+657,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13),32);
        vcdp->chgBus(c+665,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14),32);
        vcdp->chgBus(c+673,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_0),32);
        vcdp->chgBus(c+681,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_1),32);
        vcdp->chgBus(c+689,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_2),32);
        vcdp->chgBus(c+697,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_3),32);
        vcdp->chgBus(c+705,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_4),32);
        vcdp->chgBus(c+713,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_5),32);
        vcdp->chgBus(c+721,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_6),32);
        vcdp->chgBus(c+729,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_7),32);
        vcdp->chgBus(c+737,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_8),32);
        vcdp->chgBus(c+745,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_9),32);
        vcdp->chgBus(c+753,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_10),32);
        vcdp->chgBus(c+761,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_11),32);
        vcdp->chgBus(c+769,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_12),32);
        vcdp->chgBus(c+777,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_13),32);
        vcdp->chgBus(c+785,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_14),32);
        vcdp->chgBit(c+793,((0xfU <= (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x))));
    }
}

void VCFOEstimator::traceChgThis__7(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+801,(vlTOPp->rotated_data_valid));
        vcdp->chgBus(c+809,(vlTOPp->rotated_data_payload_cha_i),16);
        vcdp->chgBus(c+817,(vlTOPp->rotated_data_payload_cha_q),16);
        vcdp->chgBit(c+825,(vlTOPp->delta_phi_valid));
        vcdp->chgBus(c+833,(vlTOPp->delta_phi_payload),16);
        vcdp->chgBit(c+841,(vlTOPp->clk));
        vcdp->chgBit(c+849,(vlTOPp->reset));
        vcdp->chgBus(c+857,(VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->rotated_data_payload_cha_i)), 
                                        VL_EXTENDS_II(32,16, 
                                                      (0xffffU 
                                                       & ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_q) 
                                                          + (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i)))))),32);
        vcdp->chgBus(c+865,(VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->rotated_data_payload_cha_q)), 
                                        VL_EXTENDS_II(32,16, 
                                                      (0xffffU 
                                                       & ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i) 
                                                          - (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_q)))))),32);
    }
}
