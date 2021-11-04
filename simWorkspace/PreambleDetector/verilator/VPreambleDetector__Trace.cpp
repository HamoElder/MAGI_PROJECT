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
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
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
        vcdp->chgBus(c+1,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__k1),32);
    }
}

void VPreambleDetector::traceChgThis__3(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+9,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_i),32);
        vcdp->chgBus(c+17,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_q),32);
    }
}

void VPreambleDetector::traceChgThis__4(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+25,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_result_valid_1));
        vcdp->chgBit(c+33,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_result_valid_1));
        vcdp->chgBus(c+41,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_i),32);
        vcdp->chgBus(c+49,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_q),32);
        vcdp->chgBit(c+57,(vlTOPp->PreambleDetector__DOT__gate_pkg_det));
        vcdp->chgBus(c+65,(vlTOPp->PreambleDetector__DOT__prod_avg_mag),32);
        vcdp->chgBit(c+73,(vlTOPp->PreambleDetector__DOT__power_pkg_det));
        vcdp->chgBus(c+81,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_31),27);
        vcdp->chgBus(c+89,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_31),27);
        vcdp->chgBus(c+97,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_i),32);
        vcdp->chgBus(c+105,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_q),32);
        vcdp->chgBit(c+113,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid));
        vcdp->chgBus(c+121,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_0),27);
        vcdp->chgBus(c+129,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_1),27);
        vcdp->chgBus(c+137,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_2),27);
        vcdp->chgBus(c+145,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_3),27);
        vcdp->chgBus(c+153,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_4),27);
        vcdp->chgBus(c+161,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_5),27);
        vcdp->chgBus(c+169,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_6),27);
        vcdp->chgBus(c+177,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_7),27);
        vcdp->chgBus(c+185,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_8),27);
        vcdp->chgBus(c+193,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_9),27);
        vcdp->chgBus(c+201,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_10),27);
        vcdp->chgBus(c+209,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_11),27);
        vcdp->chgBus(c+217,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_12),27);
        vcdp->chgBus(c+225,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_13),27);
        vcdp->chgBus(c+233,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_14),27);
        vcdp->chgBus(c+241,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_15),27);
        vcdp->chgBus(c+249,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_16),27);
        vcdp->chgBus(c+257,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_17),27);
        vcdp->chgBus(c+265,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_18),27);
        vcdp->chgBus(c+273,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_19),27);
        vcdp->chgBus(c+281,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_20),27);
        vcdp->chgBus(c+289,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_21),27);
        vcdp->chgBus(c+297,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_22),27);
        vcdp->chgBus(c+305,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_23),27);
        vcdp->chgBus(c+313,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_24),27);
        vcdp->chgBus(c+321,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_25),27);
        vcdp->chgBus(c+329,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_26),27);
        vcdp->chgBus(c+337,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_27),27);
        vcdp->chgBus(c+345,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_28),27);
        vcdp->chgBus(c+353,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_29),27);
        vcdp->chgBus(c+361,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_30),27);
        vcdp->chgBus(c+369,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_0),27);
        vcdp->chgBus(c+377,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_1),27);
        vcdp->chgBus(c+385,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_2),27);
        vcdp->chgBus(c+393,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_3),27);
        vcdp->chgBus(c+401,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_4),27);
        vcdp->chgBus(c+409,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_5),27);
        vcdp->chgBus(c+417,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_6),27);
        vcdp->chgBus(c+425,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_7),27);
        vcdp->chgBus(c+433,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_8),27);
        vcdp->chgBus(c+441,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_9),27);
        vcdp->chgBus(c+449,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_10),27);
        vcdp->chgBus(c+457,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_11),27);
        vcdp->chgBus(c+465,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_12),27);
        vcdp->chgBus(c+473,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_13),27);
        vcdp->chgBus(c+481,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_14),27);
        vcdp->chgBus(c+489,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_15),27);
        vcdp->chgBus(c+497,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_16),27);
        vcdp->chgBus(c+505,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_17),27);
        vcdp->chgBus(c+513,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_18),27);
        vcdp->chgBus(c+521,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_19),27);
        vcdp->chgBus(c+529,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_20),27);
        vcdp->chgBus(c+537,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_21),27);
        vcdp->chgBus(c+545,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_22),27);
        vcdp->chgBus(c+553,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_23),27);
        vcdp->chgBus(c+561,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_24),27);
        vcdp->chgBus(c+569,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_25),27);
        vcdp->chgBus(c+577,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_26),27);
        vcdp->chgBus(c+585,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_27),27);
        vcdp->chgBus(c+593,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_28),27);
        vcdp->chgBus(c+601,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_29),27);
        vcdp->chgBus(c+609,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_30),27);
        vcdp->chgBit(c+617,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_15_valid));
        vcdp->chgBus(c+625,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_15_payload_cha_i),16);
        vcdp->chgBus(c+633,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_15_payload_cha_q),16);
        vcdp->chgBit(c+641,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_0_valid));
        vcdp->chgBus(c+649,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_0_payload_cha_i),16);
        vcdp->chgBus(c+657,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_0_payload_cha_q),16);
        vcdp->chgBit(c+665,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_1_valid));
        vcdp->chgBus(c+673,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_1_payload_cha_i),16);
        vcdp->chgBus(c+681,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_1_payload_cha_q),16);
        vcdp->chgBit(c+689,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_2_valid));
        vcdp->chgBus(c+697,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_2_payload_cha_i),16);
        vcdp->chgBus(c+705,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_2_payload_cha_q),16);
        vcdp->chgBit(c+713,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_3_valid));
        vcdp->chgBus(c+721,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_3_payload_cha_i),16);
        vcdp->chgBus(c+729,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_3_payload_cha_q),16);
        vcdp->chgBit(c+737,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_4_valid));
        vcdp->chgBus(c+745,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_4_payload_cha_i),16);
        vcdp->chgBus(c+753,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_4_payload_cha_q),16);
        vcdp->chgBit(c+761,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_5_valid));
        vcdp->chgBus(c+769,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_5_payload_cha_i),16);
        vcdp->chgBus(c+777,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_5_payload_cha_q),16);
        vcdp->chgBit(c+785,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_6_valid));
        vcdp->chgBus(c+793,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_6_payload_cha_i),16);
        vcdp->chgBus(c+801,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_6_payload_cha_q),16);
        vcdp->chgBit(c+809,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_7_valid));
        vcdp->chgBus(c+817,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_7_payload_cha_i),16);
        vcdp->chgBus(c+825,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_7_payload_cha_q),16);
        vcdp->chgBit(c+833,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_8_valid));
        vcdp->chgBus(c+841,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_8_payload_cha_i),16);
        vcdp->chgBus(c+849,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_8_payload_cha_q),16);
        vcdp->chgBit(c+857,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_9_valid));
        vcdp->chgBus(c+865,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_9_payload_cha_i),16);
        vcdp->chgBus(c+873,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_9_payload_cha_q),16);
        vcdp->chgBit(c+881,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_10_valid));
        vcdp->chgBus(c+889,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_10_payload_cha_i),16);
        vcdp->chgBus(c+897,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_10_payload_cha_q),16);
        vcdp->chgBit(c+905,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_11_valid));
        vcdp->chgBus(c+913,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_11_payload_cha_i),16);
        vcdp->chgBus(c+921,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_11_payload_cha_q),16);
        vcdp->chgBit(c+929,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_12_valid));
        vcdp->chgBus(c+937,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_12_payload_cha_i),16);
        vcdp->chgBus(c+945,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_12_payload_cha_q),16);
        vcdp->chgBit(c+953,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_13_valid));
        vcdp->chgBus(c+961,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_13_payload_cha_i),16);
        vcdp->chgBus(c+969,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_13_payload_cha_q),16);
        vcdp->chgBit(c+977,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_14_valid));
        vcdp->chgBus(c+985,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_14_payload_cha_i),16);
        vcdp->chgBus(c+993,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_14_payload_cha_q),16);
        vcdp->chgBus(c+1001,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_31),32);
        vcdp->chgBus(c+1009,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_31),32);
        vcdp->chgBus(c+1017,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_i),32);
        vcdp->chgBus(c+1025,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_q),32);
        vcdp->chgBit(c+1033,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid));
        vcdp->chgBus(c+1041,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_0),32);
        vcdp->chgBus(c+1049,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_1),32);
        vcdp->chgBus(c+1057,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_2),32);
        vcdp->chgBus(c+1065,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_3),32);
        vcdp->chgBus(c+1073,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_4),32);
        vcdp->chgBus(c+1081,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_5),32);
        vcdp->chgBus(c+1089,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_6),32);
        vcdp->chgBus(c+1097,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_7),32);
        vcdp->chgBus(c+1105,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_8),32);
        vcdp->chgBus(c+1113,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_9),32);
        vcdp->chgBus(c+1121,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_10),32);
        vcdp->chgBus(c+1129,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_11),32);
        vcdp->chgBus(c+1137,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_12),32);
        vcdp->chgBus(c+1145,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_13),32);
        vcdp->chgBus(c+1153,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_14),32);
        vcdp->chgBus(c+1161,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_15),32);
        vcdp->chgBus(c+1169,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_16),32);
        vcdp->chgBus(c+1177,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_17),32);
        vcdp->chgBus(c+1185,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_18),32);
        vcdp->chgBus(c+1193,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_19),32);
        vcdp->chgBus(c+1201,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_20),32);
        vcdp->chgBus(c+1209,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_21),32);
        vcdp->chgBus(c+1217,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_22),32);
        vcdp->chgBus(c+1225,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_23),32);
        vcdp->chgBus(c+1233,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_24),32);
        vcdp->chgBus(c+1241,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_25),32);
        vcdp->chgBus(c+1249,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_26),32);
        vcdp->chgBus(c+1257,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_27),32);
        vcdp->chgBus(c+1265,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_28),32);
        vcdp->chgBus(c+1273,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_29),32);
        vcdp->chgBus(c+1281,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_30),32);
        vcdp->chgBus(c+1289,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_0),32);
        vcdp->chgBus(c+1297,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_1),32);
        vcdp->chgBus(c+1305,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_2),32);
        vcdp->chgBus(c+1313,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_3),32);
        vcdp->chgBus(c+1321,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_4),32);
        vcdp->chgBus(c+1329,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_5),32);
        vcdp->chgBus(c+1337,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_6),32);
        vcdp->chgBus(c+1345,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_7),32);
        vcdp->chgBus(c+1353,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_8),32);
        vcdp->chgBus(c+1361,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_9),32);
        vcdp->chgBus(c+1369,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_10),32);
        vcdp->chgBus(c+1377,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_11),32);
        vcdp->chgBus(c+1385,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_12),32);
        vcdp->chgBus(c+1393,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_13),32);
        vcdp->chgBus(c+1401,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_14),32);
        vcdp->chgBus(c+1409,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_15),32);
        vcdp->chgBus(c+1417,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_16),32);
        vcdp->chgBus(c+1425,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_17),32);
        vcdp->chgBus(c+1433,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_18),32);
        vcdp->chgBus(c+1441,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_19),32);
        vcdp->chgBus(c+1449,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_20),32);
        vcdp->chgBus(c+1457,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_21),32);
        vcdp->chgBus(c+1465,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_22),32);
        vcdp->chgBus(c+1473,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_23),32);
        vcdp->chgBus(c+1481,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_24),32);
        vcdp->chgBus(c+1489,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_25),32);
        vcdp->chgBus(c+1497,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_26),32);
        vcdp->chgBus(c+1505,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_27),32);
        vcdp->chgBus(c+1513,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_28),32);
        vcdp->chgBus(c+1521,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_29),32);
        vcdp->chgBus(c+1529,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_30),32);
    }
}

void VPreambleDetector::traceChgThis__5(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1537,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_i_regNext),32);
        vcdp->chgBus(c+1545,((0x7ffffffU & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_i_regNext 
                                            >> 5U))),27);
        vcdp->chgBus(c+1553,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_q_regNext),32);
        vcdp->chgBus(c+1561,((0x7ffffffU & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_q_regNext 
                                            >> 5U))),27);
    }
}

void VPreambleDetector::traceChgThis__6(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1569,(vlTOPp->raw_data_valid));
        vcdp->chgBus(c+1577,(vlTOPp->raw_data_payload_cha_i),16);
        vcdp->chgBus(c+1585,(vlTOPp->raw_data_payload_cha_q),16);
        vcdp->chgBit(c+1593,(vlTOPp->raw_data_out_valid));
        vcdp->chgBus(c+1601,(vlTOPp->raw_data_out_payload_cha_i),16);
        vcdp->chgBus(c+1609,(vlTOPp->raw_data_out_payload_cha_q),16);
        vcdp->chgBus(c+1617,(vlTOPp->gate_threshold),32);
        vcdp->chgBit(c+1625,(vlTOPp->pkg_detected));
        vcdp->chgBit(c+1633,(vlTOPp->clk));
        vcdp->chgBit(c+1641,(vlTOPp->reset));
        vcdp->chgBus(c+1649,(VL_MULS_III(32,32,32, 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_i)), 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_i)))),32);
        vcdp->chgBus(c+1657,(VL_MULS_III(32,32,32, 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_q)), 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_q)))),32);
        vcdp->chgBus(c+1665,(VL_MULS_III(32,32,32, 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_i)), 
                                         VL_EXTENDS_II(32,16, 
                                                       (0xffffU 
                                                        & ((IData)(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_15_payload_cha_q) 
                                                           + (IData)(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_15_payload_cha_i)))))),32);
        vcdp->chgBus(c+1673,(VL_MULS_III(32,32,32, 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_q)), 
                                         VL_EXTENDS_II(32,16, 
                                                       (0xffffU 
                                                        & ((IData)(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_15_payload_cha_i) 
                                                           - (IData)(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_15_payload_cha_q)))))),32);
    }
}
