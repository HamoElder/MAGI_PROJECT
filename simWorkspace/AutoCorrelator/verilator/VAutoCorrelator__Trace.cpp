// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAutoCorrelator__Syms.h"


//======================

void VAutoCorrelator::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAutoCorrelator* t = (VAutoCorrelator*)userthis;
    VAutoCorrelator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VAutoCorrelator::traceChgThis(VAutoCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAutoCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAutoCorrelator::traceChgThis__2(VAutoCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAutoCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__k1),32);
    }
}

void VAutoCorrelator::traceChgThis__3(VAutoCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAutoCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+9,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_valid));
        vcdp->chgBus(c+17,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i),16);
        vcdp->chgBus(c+25,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_q),16);
        vcdp->chgBit(c+33,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__corr_result_valid_1));
        vcdp->chgBus(c+41,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__corr_val_i),32);
        vcdp->chgBus(c+49,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__corr_val_q),32);
        vcdp->chgBit(c+57,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_0_valid));
        vcdp->chgBus(c+65,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_i),16);
        vcdp->chgBus(c+73,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_q),16);
        vcdp->chgBit(c+81,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_1_valid));
        vcdp->chgBus(c+89,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_i),16);
        vcdp->chgBus(c+97,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_q),16);
        vcdp->chgBit(c+105,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_2_valid));
        vcdp->chgBus(c+113,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_i),16);
        vcdp->chgBus(c+121,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_q),16);
        vcdp->chgBit(c+129,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_3_valid));
        vcdp->chgBus(c+137,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_i),16);
        vcdp->chgBus(c+145,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_q),16);
        vcdp->chgBit(c+153,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_4_valid));
        vcdp->chgBus(c+161,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_i),16);
        vcdp->chgBus(c+169,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_q),16);
        vcdp->chgBit(c+177,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_5_valid));
        vcdp->chgBus(c+185,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_i),16);
        vcdp->chgBus(c+193,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_q),16);
        vcdp->chgBit(c+201,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_6_valid));
        vcdp->chgBus(c+209,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_i),16);
        vcdp->chgBus(c+217,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_q),16);
        vcdp->chgBit(c+225,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_7_valid));
        vcdp->chgBus(c+233,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_i),16);
        vcdp->chgBus(c+241,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_q),16);
        vcdp->chgBit(c+249,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_8_valid));
        vcdp->chgBus(c+257,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_i),16);
        vcdp->chgBus(c+265,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_q),16);
        vcdp->chgBit(c+273,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_9_valid));
        vcdp->chgBus(c+281,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_i),16);
        vcdp->chgBus(c+289,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_q),16);
        vcdp->chgBit(c+297,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_10_valid));
        vcdp->chgBus(c+305,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_i),16);
        vcdp->chgBus(c+313,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_q),16);
        vcdp->chgBit(c+321,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_11_valid));
        vcdp->chgBus(c+329,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_i),16);
        vcdp->chgBus(c+337,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_q),16);
        vcdp->chgBit(c+345,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_12_valid));
        vcdp->chgBus(c+353,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_i),16);
        vcdp->chgBus(c+361,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_q),16);
        vcdp->chgBit(c+369,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_13_valid));
        vcdp->chgBus(c+377,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_i),16);
        vcdp->chgBus(c+385,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_q),16);
        vcdp->chgBit(c+393,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_14_valid));
        vcdp->chgBus(c+401,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_i),16);
        vcdp->chgBus(c+409,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_q),16);
        vcdp->chgBus(c+417,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_31),32);
        vcdp->chgBus(c+425,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_31),32);
        vcdp->chgBus(c+433,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_i),32);
        vcdp->chgBus(c+441,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_q),32);
        vcdp->chgBit(c+449,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid));
        vcdp->chgBus(c+457,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0),32);
        vcdp->chgBus(c+465,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1),32);
        vcdp->chgBus(c+473,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2),32);
        vcdp->chgBus(c+481,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3),32);
        vcdp->chgBus(c+489,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4),32);
        vcdp->chgBus(c+497,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5),32);
        vcdp->chgBus(c+505,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6),32);
        vcdp->chgBus(c+513,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7),32);
        vcdp->chgBus(c+521,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8),32);
        vcdp->chgBus(c+529,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9),32);
        vcdp->chgBus(c+537,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10),32);
        vcdp->chgBus(c+545,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11),32);
        vcdp->chgBus(c+553,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12),32);
        vcdp->chgBus(c+561,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13),32);
        vcdp->chgBus(c+569,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14),32);
        vcdp->chgBus(c+577,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15),32);
        vcdp->chgBus(c+585,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_16),32);
        vcdp->chgBus(c+593,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_17),32);
        vcdp->chgBus(c+601,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_18),32);
        vcdp->chgBus(c+609,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_19),32);
        vcdp->chgBus(c+617,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_20),32);
        vcdp->chgBus(c+625,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_21),32);
        vcdp->chgBus(c+633,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_22),32);
        vcdp->chgBus(c+641,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_23),32);
        vcdp->chgBus(c+649,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_24),32);
        vcdp->chgBus(c+657,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_25),32);
        vcdp->chgBus(c+665,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_26),32);
        vcdp->chgBus(c+673,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_27),32);
        vcdp->chgBus(c+681,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_28),32);
        vcdp->chgBus(c+689,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_29),32);
        vcdp->chgBus(c+697,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_30),32);
        vcdp->chgBus(c+705,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_0),32);
        vcdp->chgBus(c+713,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_1),32);
        vcdp->chgBus(c+721,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_2),32);
        vcdp->chgBus(c+729,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_3),32);
        vcdp->chgBus(c+737,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_4),32);
        vcdp->chgBus(c+745,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_5),32);
        vcdp->chgBus(c+753,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_6),32);
        vcdp->chgBus(c+761,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_7),32);
        vcdp->chgBus(c+769,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_8),32);
        vcdp->chgBus(c+777,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_9),32);
        vcdp->chgBus(c+785,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_10),32);
        vcdp->chgBus(c+793,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_11),32);
        vcdp->chgBus(c+801,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_12),32);
        vcdp->chgBus(c+809,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_13),32);
        vcdp->chgBus(c+817,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_14),32);
        vcdp->chgBus(c+825,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_15),32);
        vcdp->chgBus(c+833,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_16),32);
        vcdp->chgBus(c+841,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_17),32);
        vcdp->chgBus(c+849,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_18),32);
        vcdp->chgBus(c+857,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_19),32);
        vcdp->chgBus(c+865,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_20),32);
        vcdp->chgBus(c+873,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_21),32);
        vcdp->chgBus(c+881,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_22),32);
        vcdp->chgBus(c+889,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_23),32);
        vcdp->chgBus(c+897,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_24),32);
        vcdp->chgBus(c+905,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_25),32);
        vcdp->chgBus(c+913,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_26),32);
        vcdp->chgBus(c+921,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_27),32);
        vcdp->chgBus(c+929,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_28),32);
        vcdp->chgBus(c+937,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_29),32);
        vcdp->chgBus(c+945,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_30),32);
    }
}

void VAutoCorrelator::traceChgThis__4(VAutoCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAutoCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+953,(vlTOPp->raw_data_valid));
        vcdp->chgBus(c+961,(vlTOPp->raw_data_payload_cha_i),16);
        vcdp->chgBus(c+969,(vlTOPp->raw_data_payload_cha_q),16);
        vcdp->chgBit(c+977,(vlTOPp->corr_result_valid));
        vcdp->chgBus(c+985,(vlTOPp->corr_result_payload_cha_i),32);
        vcdp->chgBus(c+993,(vlTOPp->corr_result_payload_cha_q),32);
        vcdp->chgBit(c+1001,(vlTOPp->clk));
        vcdp->chgBit(c+1009,(vlTOPp->reset));
        vcdp->chgBus(c+1017,(VL_MULS_III(32,32,32, 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_i)), 
                                         VL_EXTENDS_II(32,16, 
                                                       (0xffffU 
                                                        & ((IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_q) 
                                                           + (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i)))))),32);
        vcdp->chgBus(c+1025,(VL_MULS_III(32,32,32, 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_q)), 
                                         VL_EXTENDS_II(32,16, 
                                                       (0xffffU 
                                                        & ((IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i) 
                                                           - (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_q)))))),32);
    }
}
