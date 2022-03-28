// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPreambleDetector__Syms.h"


//======================

void VPreambleDetector::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VPreambleDetector* t = (VPreambleDetector*)userthis;
    VPreambleDetector__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VPreambleDetector::traceChgThis(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VPreambleDetector::traceChgThis__2(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__k1),24);
    }
}

void VPreambleDetector::traceChgThis__3(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+9,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_result_valid_1));
        vcdp->chgBus(c+17,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_i),24);
        vcdp->chgBus(c+25,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_q),24);
        vcdp->chgBit(c+33,(vlTOPp->PreambleDetector__DOT__gate_pkg_det));
        vcdp->chgBus(c+41,(vlTOPp->PreambleDetector__DOT__prod_avg_mag),24);
        vcdp->chgBit(c+49,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_63_valid));
        vcdp->chgBus(c+57,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_63_payload_cha_i),12);
        vcdp->chgBus(c+65,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_63_payload_cha_q),12);
        vcdp->chgBit(c+73,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_0_valid));
        vcdp->chgBus(c+81,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_i),12);
        vcdp->chgBus(c+89,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_q),12);
        vcdp->chgBit(c+97,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_1_valid));
        vcdp->chgBus(c+105,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_i),12);
        vcdp->chgBus(c+113,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_q),12);
        vcdp->chgBit(c+121,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_2_valid));
        vcdp->chgBus(c+129,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_i),12);
        vcdp->chgBus(c+137,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_q),12);
        vcdp->chgBit(c+145,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_3_valid));
        vcdp->chgBus(c+153,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_i),12);
        vcdp->chgBus(c+161,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_q),12);
        vcdp->chgBit(c+169,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_4_valid));
        vcdp->chgBus(c+177,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_i),12);
        vcdp->chgBus(c+185,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_q),12);
        vcdp->chgBit(c+193,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_5_valid));
        vcdp->chgBus(c+201,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_i),12);
        vcdp->chgBus(c+209,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_q),12);
        vcdp->chgBit(c+217,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_6_valid));
        vcdp->chgBus(c+225,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_i),12);
        vcdp->chgBus(c+233,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_q),12);
        vcdp->chgBit(c+241,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_7_valid));
        vcdp->chgBus(c+249,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_i),12);
        vcdp->chgBus(c+257,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_q),12);
        vcdp->chgBit(c+265,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_8_valid));
        vcdp->chgBus(c+273,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_i),12);
        vcdp->chgBus(c+281,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_q),12);
        vcdp->chgBit(c+289,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_9_valid));
        vcdp->chgBus(c+297,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_i),12);
        vcdp->chgBus(c+305,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_q),12);
        vcdp->chgBit(c+313,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_10_valid));
        vcdp->chgBus(c+321,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_i),12);
        vcdp->chgBus(c+329,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_q),12);
        vcdp->chgBit(c+337,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_11_valid));
        vcdp->chgBus(c+345,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_i),12);
        vcdp->chgBus(c+353,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_q),12);
        vcdp->chgBit(c+361,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_12_valid));
        vcdp->chgBus(c+369,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_i),12);
        vcdp->chgBus(c+377,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_q),12);
        vcdp->chgBit(c+385,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_13_valid));
        vcdp->chgBus(c+393,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_i),12);
        vcdp->chgBus(c+401,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_q),12);
        vcdp->chgBit(c+409,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_14_valid));
        vcdp->chgBus(c+417,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_i),12);
        vcdp->chgBus(c+425,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_q),12);
        vcdp->chgBit(c+433,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_15_valid));
        vcdp->chgBus(c+441,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_i),12);
        vcdp->chgBus(c+449,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_q),12);
        vcdp->chgBit(c+457,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_16_valid));
        vcdp->chgBus(c+465,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_16_payload_cha_i),12);
        vcdp->chgBus(c+473,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_16_payload_cha_q),12);
        vcdp->chgBit(c+481,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_17_valid));
        vcdp->chgBus(c+489,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_17_payload_cha_i),12);
        vcdp->chgBus(c+497,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_17_payload_cha_q),12);
        vcdp->chgBit(c+505,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_18_valid));
        vcdp->chgBus(c+513,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_18_payload_cha_i),12);
        vcdp->chgBus(c+521,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_18_payload_cha_q),12);
        vcdp->chgBit(c+529,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_19_valid));
        vcdp->chgBus(c+537,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_19_payload_cha_i),12);
        vcdp->chgBus(c+545,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_19_payload_cha_q),12);
        vcdp->chgBit(c+553,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_20_valid));
        vcdp->chgBus(c+561,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_20_payload_cha_i),12);
        vcdp->chgBus(c+569,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_20_payload_cha_q),12);
        vcdp->chgBit(c+577,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_21_valid));
        vcdp->chgBus(c+585,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_21_payload_cha_i),12);
        vcdp->chgBus(c+593,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_21_payload_cha_q),12);
        vcdp->chgBit(c+601,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_22_valid));
        vcdp->chgBus(c+609,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_22_payload_cha_i),12);
        vcdp->chgBus(c+617,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_22_payload_cha_q),12);
        vcdp->chgBit(c+625,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_23_valid));
        vcdp->chgBus(c+633,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_23_payload_cha_i),12);
        vcdp->chgBus(c+641,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_23_payload_cha_q),12);
        vcdp->chgBit(c+649,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_24_valid));
        vcdp->chgBus(c+657,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_24_payload_cha_i),12);
        vcdp->chgBus(c+665,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_24_payload_cha_q),12);
        vcdp->chgBit(c+673,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_25_valid));
        vcdp->chgBus(c+681,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_25_payload_cha_i),12);
        vcdp->chgBus(c+689,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_25_payload_cha_q),12);
        vcdp->chgBit(c+697,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_26_valid));
        vcdp->chgBus(c+705,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_26_payload_cha_i),12);
        vcdp->chgBus(c+713,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_26_payload_cha_q),12);
        vcdp->chgBit(c+721,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_27_valid));
        vcdp->chgBus(c+729,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_27_payload_cha_i),12);
        vcdp->chgBus(c+737,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_27_payload_cha_q),12);
        vcdp->chgBit(c+745,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_28_valid));
        vcdp->chgBus(c+753,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_28_payload_cha_i),12);
        vcdp->chgBus(c+761,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_28_payload_cha_q),12);
        vcdp->chgBit(c+769,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_29_valid));
        vcdp->chgBus(c+777,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_29_payload_cha_i),12);
        vcdp->chgBus(c+785,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_29_payload_cha_q),12);
        vcdp->chgBit(c+793,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_30_valid));
        vcdp->chgBus(c+801,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_30_payload_cha_i),12);
        vcdp->chgBus(c+809,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_30_payload_cha_q),12);
        vcdp->chgBit(c+817,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_31_valid));
        vcdp->chgBus(c+825,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_i),12);
        vcdp->chgBus(c+833,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_q),12);
        vcdp->chgBit(c+841,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_32_valid));
        vcdp->chgBus(c+849,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_32_payload_cha_i),12);
        vcdp->chgBus(c+857,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_32_payload_cha_q),12);
        vcdp->chgBit(c+865,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_33_valid));
        vcdp->chgBus(c+873,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_33_payload_cha_i),12);
        vcdp->chgBus(c+881,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_33_payload_cha_q),12);
        vcdp->chgBit(c+889,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_34_valid));
        vcdp->chgBus(c+897,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_34_payload_cha_i),12);
        vcdp->chgBus(c+905,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_34_payload_cha_q),12);
        vcdp->chgBit(c+913,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_35_valid));
        vcdp->chgBus(c+921,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_35_payload_cha_i),12);
        vcdp->chgBus(c+929,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_35_payload_cha_q),12);
        vcdp->chgBit(c+937,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_36_valid));
        vcdp->chgBus(c+945,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_36_payload_cha_i),12);
        vcdp->chgBus(c+953,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_36_payload_cha_q),12);
        vcdp->chgBit(c+961,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_37_valid));
        vcdp->chgBus(c+969,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_37_payload_cha_i),12);
        vcdp->chgBus(c+977,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_37_payload_cha_q),12);
        vcdp->chgBit(c+985,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_38_valid));
        vcdp->chgBus(c+993,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_38_payload_cha_i),12);
        vcdp->chgBus(c+1001,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_38_payload_cha_q),12);
        vcdp->chgBit(c+1009,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_39_valid));
        vcdp->chgBus(c+1017,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_39_payload_cha_i),12);
        vcdp->chgBus(c+1025,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_39_payload_cha_q),12);
        vcdp->chgBit(c+1033,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_40_valid));
        vcdp->chgBus(c+1041,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_40_payload_cha_i),12);
        vcdp->chgBus(c+1049,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_40_payload_cha_q),12);
        vcdp->chgBit(c+1057,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_41_valid));
        vcdp->chgBus(c+1065,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_41_payload_cha_i),12);
        vcdp->chgBus(c+1073,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_41_payload_cha_q),12);
        vcdp->chgBit(c+1081,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_42_valid));
        vcdp->chgBus(c+1089,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_42_payload_cha_i),12);
        vcdp->chgBus(c+1097,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_42_payload_cha_q),12);
        vcdp->chgBit(c+1105,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_43_valid));
        vcdp->chgBus(c+1113,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_43_payload_cha_i),12);
        vcdp->chgBus(c+1121,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_43_payload_cha_q),12);
        vcdp->chgBit(c+1129,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_44_valid));
        vcdp->chgBus(c+1137,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_44_payload_cha_i),12);
        vcdp->chgBus(c+1145,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_44_payload_cha_q),12);
        vcdp->chgBit(c+1153,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_45_valid));
        vcdp->chgBus(c+1161,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_45_payload_cha_i),12);
        vcdp->chgBus(c+1169,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_45_payload_cha_q),12);
        vcdp->chgBit(c+1177,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_46_valid));
        vcdp->chgBus(c+1185,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_46_payload_cha_i),12);
        vcdp->chgBus(c+1193,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_46_payload_cha_q),12);
        vcdp->chgBit(c+1201,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_47_valid));
        vcdp->chgBus(c+1209,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_47_payload_cha_i),12);
        vcdp->chgBus(c+1217,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_47_payload_cha_q),12);
        vcdp->chgBit(c+1225,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_48_valid));
        vcdp->chgBus(c+1233,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_48_payload_cha_i),12);
        vcdp->chgBus(c+1241,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_48_payload_cha_q),12);
        vcdp->chgBit(c+1249,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_49_valid));
        vcdp->chgBus(c+1257,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_49_payload_cha_i),12);
        vcdp->chgBus(c+1265,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_49_payload_cha_q),12);
        vcdp->chgBit(c+1273,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_50_valid));
        vcdp->chgBus(c+1281,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_50_payload_cha_i),12);
        vcdp->chgBus(c+1289,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_50_payload_cha_q),12);
        vcdp->chgBit(c+1297,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_51_valid));
        vcdp->chgBus(c+1305,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_51_payload_cha_i),12);
        vcdp->chgBus(c+1313,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_51_payload_cha_q),12);
        vcdp->chgBit(c+1321,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_52_valid));
        vcdp->chgBus(c+1329,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_52_payload_cha_i),12);
        vcdp->chgBus(c+1337,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_52_payload_cha_q),12);
        vcdp->chgBit(c+1345,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_53_valid));
        vcdp->chgBus(c+1353,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_53_payload_cha_i),12);
        vcdp->chgBus(c+1361,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_53_payload_cha_q),12);
        vcdp->chgBit(c+1369,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_54_valid));
        vcdp->chgBus(c+1377,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_54_payload_cha_i),12);
        vcdp->chgBus(c+1385,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_54_payload_cha_q),12);
        vcdp->chgBit(c+1393,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_55_valid));
        vcdp->chgBus(c+1401,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_55_payload_cha_i),12);
        vcdp->chgBus(c+1409,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_55_payload_cha_q),12);
        vcdp->chgBit(c+1417,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_56_valid));
        vcdp->chgBus(c+1425,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_56_payload_cha_i),12);
        vcdp->chgBus(c+1433,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_56_payload_cha_q),12);
        vcdp->chgBit(c+1441,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_57_valid));
        vcdp->chgBus(c+1449,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_57_payload_cha_i),12);
        vcdp->chgBus(c+1457,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_57_payload_cha_q),12);
        vcdp->chgBit(c+1465,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_58_valid));
        vcdp->chgBus(c+1473,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_58_payload_cha_i),12);
        vcdp->chgBus(c+1481,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_58_payload_cha_q),12);
        vcdp->chgBit(c+1489,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_59_valid));
        vcdp->chgBus(c+1497,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_59_payload_cha_i),12);
        vcdp->chgBus(c+1505,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_59_payload_cha_q),12);
        vcdp->chgBit(c+1513,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_60_valid));
        vcdp->chgBus(c+1521,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_60_payload_cha_i),12);
        vcdp->chgBus(c+1529,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_60_payload_cha_q),12);
        vcdp->chgBit(c+1537,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_61_valid));
        vcdp->chgBus(c+1545,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_61_payload_cha_i),12);
        vcdp->chgBus(c+1553,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_61_payload_cha_q),12);
        vcdp->chgBit(c+1561,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_62_valid));
        vcdp->chgBus(c+1569,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_62_payload_cha_i),12);
        vcdp->chgBus(c+1577,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_62_payload_cha_q),12);
        vcdp->chgBus(c+1585,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_63),24);
        vcdp->chgBus(c+1593,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_63),24);
        vcdp->chgBus(c+1601,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_i),24);
        vcdp->chgBus(c+1609,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_q),24);
        vcdp->chgBit(c+1617,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid));
        vcdp->chgBus(c+1625,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_0),24);
        vcdp->chgBus(c+1633,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_1),24);
        vcdp->chgBus(c+1641,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_2),24);
        vcdp->chgBus(c+1649,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_3),24);
        vcdp->chgBus(c+1657,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_4),24);
        vcdp->chgBus(c+1665,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_5),24);
        vcdp->chgBus(c+1673,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_6),24);
        vcdp->chgBus(c+1681,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_7),24);
        vcdp->chgBus(c+1689,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_8),24);
        vcdp->chgBus(c+1697,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_9),24);
        vcdp->chgBus(c+1705,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_10),24);
        vcdp->chgBus(c+1713,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_11),24);
        vcdp->chgBus(c+1721,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_12),24);
        vcdp->chgBus(c+1729,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_13),24);
        vcdp->chgBus(c+1737,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_14),24);
        vcdp->chgBus(c+1745,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_15),24);
        vcdp->chgBus(c+1753,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_16),24);
        vcdp->chgBus(c+1761,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_17),24);
        vcdp->chgBus(c+1769,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_18),24);
        vcdp->chgBus(c+1777,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_19),24);
        vcdp->chgBus(c+1785,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_20),24);
        vcdp->chgBus(c+1793,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_21),24);
        vcdp->chgBus(c+1801,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_22),24);
        vcdp->chgBus(c+1809,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_23),24);
        vcdp->chgBus(c+1817,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_24),24);
        vcdp->chgBus(c+1825,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_25),24);
        vcdp->chgBus(c+1833,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_26),24);
        vcdp->chgBus(c+1841,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_27),24);
        vcdp->chgBus(c+1849,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_28),24);
        vcdp->chgBus(c+1857,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_29),24);
        vcdp->chgBus(c+1865,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_30),24);
        vcdp->chgBus(c+1873,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_31),24);
        vcdp->chgBus(c+1881,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_32),24);
        vcdp->chgBus(c+1889,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_33),24);
        vcdp->chgBus(c+1897,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_34),24);
        vcdp->chgBus(c+1905,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_35),24);
        vcdp->chgBus(c+1913,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_36),24);
        vcdp->chgBus(c+1921,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_37),24);
        vcdp->chgBus(c+1929,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_38),24);
        vcdp->chgBus(c+1937,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_39),24);
        vcdp->chgBus(c+1945,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_40),24);
        vcdp->chgBus(c+1953,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_41),24);
        vcdp->chgBus(c+1961,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_42),24);
        vcdp->chgBus(c+1969,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_43),24);
        vcdp->chgBus(c+1977,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_44),24);
        vcdp->chgBus(c+1985,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_45),24);
        vcdp->chgBus(c+1993,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_46),24);
        vcdp->chgBus(c+2001,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_47),24);
        vcdp->chgBus(c+2009,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_48),24);
    }
}

void VPreambleDetector::traceChgThis__5(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2017,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_49),24);
        vcdp->chgBus(c+2025,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_50),24);
        vcdp->chgBus(c+2033,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_51),24);
        vcdp->chgBus(c+2041,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_52),24);
        vcdp->chgBus(c+2049,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_53),24);
        vcdp->chgBus(c+2057,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_54),24);
        vcdp->chgBus(c+2065,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_55),24);
        vcdp->chgBus(c+2073,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_56),24);
        vcdp->chgBus(c+2081,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_57),24);
        vcdp->chgBus(c+2089,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_58),24);
        vcdp->chgBus(c+2097,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_59),24);
        vcdp->chgBus(c+2105,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_60),24);
        vcdp->chgBus(c+2113,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_61),24);
        vcdp->chgBus(c+2121,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_62),24);
        vcdp->chgBus(c+2129,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0),24);
        vcdp->chgBus(c+2137,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1),24);
        vcdp->chgBus(c+2145,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2),24);
        vcdp->chgBus(c+2153,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3),24);
        vcdp->chgBus(c+2161,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4),24);
        vcdp->chgBus(c+2169,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5),24);
        vcdp->chgBus(c+2177,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6),24);
        vcdp->chgBus(c+2185,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7),24);
        vcdp->chgBus(c+2193,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8),24);
        vcdp->chgBus(c+2201,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9),24);
        vcdp->chgBus(c+2209,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10),24);
        vcdp->chgBus(c+2217,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11),24);
        vcdp->chgBus(c+2225,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12),24);
        vcdp->chgBus(c+2233,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13),24);
        vcdp->chgBus(c+2241,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14),24);
        vcdp->chgBus(c+2249,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15),24);
        vcdp->chgBus(c+2257,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16),24);
        vcdp->chgBus(c+2265,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_17),24);
        vcdp->chgBus(c+2273,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_18),24);
        vcdp->chgBus(c+2281,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_19),24);
        vcdp->chgBus(c+2289,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_20),24);
        vcdp->chgBus(c+2297,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_21),24);
        vcdp->chgBus(c+2305,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_22),24);
        vcdp->chgBus(c+2313,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_23),24);
        vcdp->chgBus(c+2321,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_24),24);
        vcdp->chgBus(c+2329,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_25),24);
        vcdp->chgBus(c+2337,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_26),24);
        vcdp->chgBus(c+2345,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_27),24);
        vcdp->chgBus(c+2353,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_28),24);
        vcdp->chgBus(c+2361,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_29),24);
        vcdp->chgBus(c+2369,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_30),24);
        vcdp->chgBus(c+2377,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31),24);
        vcdp->chgBus(c+2385,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_32),24);
        vcdp->chgBus(c+2393,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_33),24);
        vcdp->chgBus(c+2401,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_34),24);
        vcdp->chgBus(c+2409,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_35),24);
        vcdp->chgBus(c+2417,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_36),24);
        vcdp->chgBus(c+2425,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_37),24);
        vcdp->chgBus(c+2433,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_38),24);
        vcdp->chgBus(c+2441,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_39),24);
        vcdp->chgBus(c+2449,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_40),24);
        vcdp->chgBus(c+2457,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_41),24);
        vcdp->chgBus(c+2465,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_42),24);
        vcdp->chgBus(c+2473,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_43),24);
        vcdp->chgBus(c+2481,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_44),24);
        vcdp->chgBus(c+2489,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_45),24);
        vcdp->chgBus(c+2497,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_46),24);
        vcdp->chgBus(c+2505,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_47),24);
        vcdp->chgBus(c+2513,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_48),24);
        vcdp->chgBus(c+2521,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_49),24);
        vcdp->chgBus(c+2529,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_50),24);
        vcdp->chgBus(c+2537,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_51),24);
        vcdp->chgBus(c+2545,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_52),24);
        vcdp->chgBus(c+2553,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_53),24);
        vcdp->chgBus(c+2561,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_54),24);
        vcdp->chgBus(c+2569,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_55),24);
        vcdp->chgBus(c+2577,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_56),24);
        vcdp->chgBus(c+2585,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_57),24);
        vcdp->chgBus(c+2593,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_58),24);
        vcdp->chgBus(c+2601,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_59),24);
        vcdp->chgBus(c+2609,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_60),24);
        vcdp->chgBus(c+2617,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_61),24);
        vcdp->chgBus(c+2625,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_62),24);
    }
}

void VPreambleDetector::traceChgThis__6(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2633,(vlTOPp->gate_threshold),24);
        vcdp->chgBit(c+2641,(vlTOPp->pkg_detected));
        vcdp->chgBit(c+2649,(vlTOPp->raw_data_valid));
        vcdp->chgBus(c+2657,(vlTOPp->raw_data_payload_cha_i),12);
        vcdp->chgBus(c+2665,(vlTOPp->raw_data_payload_cha_q),12);
        vcdp->chgBit(c+2673,(vlTOPp->raw_data_out_valid));
        vcdp->chgBus(c+2681,(vlTOPp->raw_data_out_payload_cha_i),12);
        vcdp->chgBus(c+2689,(vlTOPp->raw_data_out_payload_cha_q),12);
        vcdp->chgBit(c+2697,(vlTOPp->corr_result_valid));
        vcdp->chgBus(c+2705,(vlTOPp->corr_result_payload_cha_i),24);
        vcdp->chgBus(c+2713,(vlTOPp->corr_result_payload_cha_q),24);
        vcdp->chgBit(c+2721,(vlTOPp->clk));
        vcdp->chgBit(c+2729,(vlTOPp->reset));
        vcdp->chgBus(c+2737,((0xffffffU & VL_MULS_III(24,24,24, 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,12, (IData)(vlTOPp->raw_data_payload_cha_i))), 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,12, 
                                                                       (0xfffU 
                                                                        & ((IData)(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_63_payload_cha_q) 
                                                                           + (IData)(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_63_payload_cha_i)))))))),24);
        vcdp->chgBus(c+2745,((0xffffffU & VL_MULS_III(24,24,24, 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,12, (IData)(vlTOPp->raw_data_payload_cha_q))), 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,12, 
                                                                       (0xfffU 
                                                                        & ((IData)(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_63_payload_cha_i) 
                                                                           - (IData)(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_3__DOT__shift_reg_63_payload_cha_q)))))))),24);
    }
}
