// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPowerMeter__Syms.h"


//======================

void VPowerMeter::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VPowerMeter* t = (VPowerMeter*)userthis;
    VPowerMeter__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VPowerMeter::traceChgThis(VPowerMeter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPowerMeter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VPowerMeter::traceChgThis__2(VPowerMeter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPowerMeter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,((1U & (IData)((VL_ULL(1) 
                                         & ((VL_ULL(0x1fff00000) 
                                             + vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_2) 
                                            >> 0x20U))))));
        vcdp->chgBit(c+9,((0U != (0x1fffffU & ((IData)(0x100000U) 
                                               + (IData)(vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_2))))));
        vcdp->chgBit(c+17,((1U & ((IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_i) 
                                  >> 0xbU))));
        vcdp->chgBit(c+25,((3U != (3U & ((IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_i) 
                                         >> 0xaU)))));
        vcdp->chgBit(c+33,((1U & ((IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_i) 
                                  >> 0xaU))));
        vcdp->chgBit(c+41,((1U & (IData)((VL_ULL(1) 
                                          & ((VL_ULL(0x1fff00000) 
                                              + vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_5) 
                                             >> 0x20U))))));
        vcdp->chgBit(c+49,((0U != (0x1fffffU & ((IData)(0x100000U) 
                                                + (IData)(vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_5))))));
        vcdp->chgBit(c+57,((1U & ((IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_q) 
                                  >> 0xbU))));
        vcdp->chgBit(c+65,((3U != (3U & ((IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_q) 
                                         >> 0xaU)))));
        vcdp->chgBit(c+73,((1U & ((IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_q) 
                                  >> 0xaU))));
    }
}

void VPowerMeter::traceChgThis__3(VPowerMeter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPowerMeter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+81,(vlTOPp->PowerMeter__DOT__power_cal_i),11);
        vcdp->chgBus(c+89,(vlTOPp->PowerMeter__DOT__power_cal_q),11);
    }
}

void VPowerMeter::traceChgThis__4(VPowerMeter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPowerMeter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+97,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_31),11);
        vcdp->chgBus(c+105,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_31),11);
        vcdp->chgBus(c+113,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_0),11);
        vcdp->chgBus(c+121,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_1),11);
        vcdp->chgBus(c+129,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_2),11);
        vcdp->chgBus(c+137,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_3),11);
        vcdp->chgBus(c+145,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_4),11);
        vcdp->chgBus(c+153,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_5),11);
        vcdp->chgBus(c+161,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_6),11);
        vcdp->chgBus(c+169,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_7),11);
        vcdp->chgBus(c+177,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_8),11);
        vcdp->chgBus(c+185,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_9),11);
        vcdp->chgBus(c+193,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_10),11);
        vcdp->chgBus(c+201,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_11),11);
        vcdp->chgBus(c+209,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_12),11);
        vcdp->chgBus(c+217,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_13),11);
        vcdp->chgBus(c+225,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_14),11);
        vcdp->chgBus(c+233,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_15),11);
        vcdp->chgBus(c+241,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_16),11);
        vcdp->chgBus(c+249,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_17),11);
        vcdp->chgBus(c+257,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_18),11);
        vcdp->chgBus(c+265,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_19),11);
        vcdp->chgBus(c+273,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_20),11);
        vcdp->chgBus(c+281,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_21),11);
        vcdp->chgBus(c+289,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_22),11);
        vcdp->chgBus(c+297,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_23),11);
        vcdp->chgBus(c+305,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_24),11);
        vcdp->chgBus(c+313,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_25),11);
        vcdp->chgBus(c+321,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_26),11);
        vcdp->chgBus(c+329,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_27),11);
        vcdp->chgBus(c+337,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_28),11);
        vcdp->chgBus(c+345,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_29),11);
        vcdp->chgBus(c+353,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_30),11);
        vcdp->chgBus(c+361,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_0),11);
        vcdp->chgBus(c+369,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_1),11);
        vcdp->chgBus(c+377,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_2),11);
        vcdp->chgBus(c+385,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_3),11);
        vcdp->chgBus(c+393,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_4),11);
        vcdp->chgBus(c+401,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_5),11);
        vcdp->chgBus(c+409,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_6),11);
        vcdp->chgBus(c+417,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_7),11);
        vcdp->chgBus(c+425,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_8),11);
        vcdp->chgBus(c+433,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_9),11);
        vcdp->chgBus(c+441,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_10),11);
        vcdp->chgBus(c+449,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_11),11);
        vcdp->chgBus(c+457,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_12),11);
        vcdp->chgBus(c+465,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_13),11);
        vcdp->chgBus(c+473,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_14),11);
        vcdp->chgBus(c+481,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_15),11);
        vcdp->chgBus(c+489,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_16),11);
        vcdp->chgBus(c+497,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_17),11);
        vcdp->chgBus(c+505,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_18),11);
        vcdp->chgBus(c+513,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_19),11);
        vcdp->chgBus(c+521,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_20),11);
        vcdp->chgBus(c+529,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_21),11);
        vcdp->chgBus(c+537,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_22),11);
        vcdp->chgBus(c+545,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_23),11);
        vcdp->chgBus(c+553,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_24),11);
        vcdp->chgBus(c+561,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_25),11);
        vcdp->chgBus(c+569,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_26),11);
        vcdp->chgBus(c+577,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_27),11);
        vcdp->chgBus(c+585,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_28),11);
        vcdp->chgBus(c+593,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_29),11);
        vcdp->chgBus(c+601,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_30),11);
    }
}

void VPowerMeter::traceChgThis__5(VPowerMeter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPowerMeter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+609,(vlTOPp->PowerMeter__DOT__power_val_cha_i),16);
        vcdp->chgBus(c+617,(vlTOPp->PowerMeter__DOT__power_val_cha_q),16);
        vcdp->chgBus(c+625,(vlTOPp->PowerMeter__DOT__sq_i_regNext),32);
        vcdp->chgBus(c+633,(vlTOPp->PowerMeter__DOT__sq_q_regNext),32);
    }
}

void VPowerMeter::traceChgThis__6(VPowerMeter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPowerMeter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+641,(vlTOPp->PowerMeter__DOT__power_val_i),16);
        vcdp->chgBus(c+649,(vlTOPp->PowerMeter__DOT__power_val_q),16);
        vcdp->chgBit(c+657,(vlTOPp->PowerMeter__DOT__power_cal_valid));
        vcdp->chgBit(c+665,(vlTOPp->PowerMeter__DOT__power_result_valid_1));
    }
}

void VPowerMeter::traceChgThis__7(VPowerMeter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPowerMeter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+673,(vlTOPp->raw_data_valid));
        vcdp->chgBus(c+681,(vlTOPp->raw_data_payload_cha_i),16);
        vcdp->chgBus(c+689,(vlTOPp->raw_data_payload_cha_q),16);
        vcdp->chgBit(c+697,(vlTOPp->power_result_valid));
        vcdp->chgBus(c+705,(vlTOPp->power_result_payload_cha_i),16);
        vcdp->chgBus(c+713,(vlTOPp->power_result_payload_cha_q),16);
        vcdp->chgBit(c+721,(vlTOPp->clk));
        vcdp->chgBit(c+729,(vlTOPp->reset));
        vcdp->chgBus(c+737,(VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_i)), 
                                        VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_i)))),32);
        vcdp->chgBus(c+745,(VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_q)), 
                                        VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_q)))),32);
    }
}
