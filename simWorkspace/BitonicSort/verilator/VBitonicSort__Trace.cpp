// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBitonicSort__Syms.h"


//======================

void VBitonicSort::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VBitonicSort* t = (VBitonicSort*)userthis;
    VBitonicSort__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VBitonicSort::traceChgThis(VBitonicSort__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitonicSort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity 
                                 | (vlTOPp->__Vm_traceActivity 
                                    >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                               >> 2U)) 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 3U))))) {
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

void VBitonicSort::traceChgThis__2(VBitonicSort__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitonicSort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(((4U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
                            ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_3_data)
                            : (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_4_out1_data))),16);
        vcdp->chgBus(c+9,(((4U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
                            ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_3_idx)
                            : (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_4_out1_idx))),4);
        vcdp->chgBus(c+17,(((2U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
                             ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_1_data)
                             : (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_5_out1_data))),16);
        vcdp->chgBus(c+25,(((2U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
                             ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_1_idx)
                             : (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_5_out1_idx))),4);
        vcdp->chgBus(c+33,(((1U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
                             ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_12__DOT__shift_reg_0_data)
                             : (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_6_out1_data))),16);
        vcdp->chgBus(c+41,(((1U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
                             ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_12__DOT__shift_reg_0_idx)
                             : (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_6_out1_idx))),4);
    }
}

void VBitonicSort::traceChgThis__3(VBitonicSort__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitonicSort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+49,(((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_5__DOT__cmp_less_result)
                             ? (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_3_out2_data)
                             : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_3_data))),16);
        vcdp->chgBus(c+57,(((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_5__DOT__cmp_less_result)
                             ? (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_3_out2_idx)
                             : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_3_idx))),4);
        vcdp->chgBus(c+65,(((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_6__DOT__cmp_less_result)
                             ? (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_4_out2_data)
                             : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_1_data))),16);
        vcdp->chgBus(c+73,(((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_6__DOT__cmp_less_result)
                             ? (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_4_out2_idx)
                             : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_1_idx))),4);
        vcdp->chgBus(c+81,(((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_7__DOT__cmp_sel)
                             ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_13__DOT__shift_reg_0_data)
                             : (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_5_out2_data))),16);
        vcdp->chgBus(c+89,(((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_7__DOT__cmp_sel)
                             ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_13__DOT__shift_reg_0_idx)
                             : (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_5_out2_idx))),4);
        vcdp->chgBus(c+97,(((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_7__DOT__cmp_sel)
                             ? (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_5_out2_data)
                             : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_13__DOT__shift_reg_0_data))),16);
        vcdp->chgBus(c+105,(((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_7__DOT__cmp_sel)
                              ? (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_5_out2_idx)
                              : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_13__DOT__shift_reg_0_idx))),4);
    }
}

void VBitonicSort::traceChgThis__4(VBitonicSort__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitonicSort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+113,(vlTOPp->BitonicSort__DOT__cmpUnit_4_out1_data),16);
        vcdp->chgBus(c+121,(vlTOPp->BitonicSort__DOT__cmpUnit_4_out1_idx),4);
        vcdp->chgBus(c+129,(vlTOPp->BitonicSort__DOT__cmpSwitch_3_out2_data),16);
        vcdp->chgBus(c+137,(vlTOPp->BitonicSort__DOT__cmpSwitch_3_out2_idx),4);
        vcdp->chgBus(c+145,(vlTOPp->BitonicSort__DOT__cmpUnit_5_out1_data),16);
        vcdp->chgBus(c+153,(vlTOPp->BitonicSort__DOT__cmpUnit_5_out1_idx),4);
        vcdp->chgBus(c+161,(vlTOPp->BitonicSort__DOT__cmpSwitch_4_out2_data),16);
        vcdp->chgBus(c+169,(vlTOPp->BitonicSort__DOT__cmpSwitch_4_out2_idx),4);
        vcdp->chgBus(c+177,(vlTOPp->BitonicSort__DOT__cmpUnit_6_out1_data),16);
        vcdp->chgBus(c+185,(vlTOPp->BitonicSort__DOT__cmpUnit_6_out1_idx),4);
        vcdp->chgBus(c+193,(vlTOPp->BitonicSort__DOT__cmpSwitch_5_out2_data),16);
        vcdp->chgBus(c+201,(vlTOPp->BitonicSort__DOT__cmpSwitch_5_out2_idx),4);
        vcdp->chgBit(c+209,(vlTOPp->BitonicSort__DOT__when_BitonicSort_l26));
        vcdp->chgBit(c+217,(vlTOPp->BitonicSort__DOT__cmpUnit_4__DOT__cmp_less_result));
        vcdp->chgBit(c+225,(vlTOPp->BitonicSort__DOT__cmpUnit_5__DOT__cmp_less_result));
        vcdp->chgBit(c+233,(vlTOPp->BitonicSort__DOT__cmpUnit_6__DOT__cmp_less_result));
        vcdp->chgBit(c+241,(vlTOPp->BitonicSort__DOT__cmpUnit_7__DOT__cmp_less_result));
        vcdp->chgBit(c+249,(vlTOPp->BitonicSort__DOT__cmpUnit_7__DOT__cmp_sel));
    }
}

void VBitonicSort::traceChgThis__5(VBitonicSort__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitonicSort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+257,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_7_data),16);
        vcdp->chgBus(c+265,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_7_idx),4);
        vcdp->chgBus(c+273,(vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_3_data),16);
        vcdp->chgBus(c+281,(vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_3_idx),4);
        vcdp->chgBus(c+289,(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_3_data),16);
        vcdp->chgBus(c+297,(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_3_idx),4);
        vcdp->chgBus(c+305,(vlTOPp->BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_1_data),16);
        vcdp->chgBus(c+313,(vlTOPp->BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_1_idx),4);
        vcdp->chgBus(c+321,(vlTOPp->BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_1_data),16);
        vcdp->chgBus(c+329,(vlTOPp->BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_1_idx),4);
        vcdp->chgBus(c+337,(vlTOPp->BitonicSort__DOT__shiftRegister_12__DOT__shift_reg_0_data),16);
        vcdp->chgBus(c+345,(vlTOPp->BitonicSort__DOT__shiftRegister_12__DOT__shift_reg_0_idx),4);
        vcdp->chgBus(c+353,(vlTOPp->BitonicSort__DOT__shiftRegister_13__DOT__shift_reg_0_data),16);
        vcdp->chgBus(c+361,(vlTOPp->BitonicSort__DOT__shiftRegister_13__DOT__shift_reg_0_idx),4);
        vcdp->chgBus(c+369,(vlTOPp->BitonicSort__DOT__cmpUnit_7_out1_regNext_data),16);
        vcdp->chgBus(c+377,(vlTOPp->BitonicSort__DOT__cmpUnit_7_out1_regNext_idx),4);
        vcdp->chgBus(c+385,(vlTOPp->BitonicSort__DOT__cmpUnit_7_out2_regNext_data),16);
        vcdp->chgBus(c+393,(vlTOPp->BitonicSort__DOT__cmpUnit_7_out2_regNext_idx),4);
        vcdp->chgBus(c+401,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_0_data),16);
        vcdp->chgBus(c+409,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_0_idx),4);
        vcdp->chgBus(c+417,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_1_data),16);
        vcdp->chgBus(c+425,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_1_idx),4);
        vcdp->chgBus(c+433,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_2_data),16);
        vcdp->chgBus(c+441,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_2_idx),4);
        vcdp->chgBus(c+449,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_3_data),16);
        vcdp->chgBus(c+457,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_3_idx),4);
        vcdp->chgBus(c+465,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_4_data),16);
        vcdp->chgBus(c+473,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_4_idx),4);
        vcdp->chgBus(c+481,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_5_data),16);
        vcdp->chgBus(c+489,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_5_idx),4);
        vcdp->chgBus(c+497,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_6_data),16);
        vcdp->chgBus(c+505,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_6_idx),4);
        vcdp->chgBus(c+513,(vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_0_data),16);
        vcdp->chgBus(c+521,(vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_0_idx),4);
        vcdp->chgBus(c+529,(vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_1_data),16);
        vcdp->chgBus(c+537,(vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_1_idx),4);
        vcdp->chgBus(c+545,(vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_2_data),16);
        vcdp->chgBus(c+553,(vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_2_idx),4);
        vcdp->chgBus(c+561,(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_0_data),16);
        vcdp->chgBus(c+569,(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_0_idx),4);
        vcdp->chgBus(c+577,(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_1_data),16);
        vcdp->chgBus(c+585,(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_1_idx),4);
        vcdp->chgBus(c+593,(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_2_data),16);
        vcdp->chgBus(c+601,(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_2_idx),4);
        vcdp->chgBus(c+609,(vlTOPp->BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_0_data),16);
        vcdp->chgBus(c+617,(vlTOPp->BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_0_idx),4);
        vcdp->chgBus(c+625,(vlTOPp->BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_0_data),16);
        vcdp->chgBus(c+633,(vlTOPp->BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_0_idx),4);
    }
}

void VBitonicSort::traceChgThis__6(VBitonicSort__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitonicSort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+641,((1U & ((IData)(vlTOPp->BitonicSort__DOT__cnt) 
                                   >> 2U))));
        vcdp->chgBit(c+649,((1U & ((IData)(vlTOPp->BitonicSort__DOT__cnt) 
                                   >> 1U))));
        vcdp->chgBit(c+657,((1U & (IData)(vlTOPp->BitonicSort__DOT__cnt))));
        vcdp->chgBus(c+665,(vlTOPp->BitonicSort__DOT__cnt),5);
    }
}

void VBitonicSort::traceChgThis__7(VBitonicSort__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitonicSort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+673,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+681,(vlTOPp->raw_data_ready));
        vcdp->chgBus(c+689,(vlTOPp->raw_data_payload_data),16);
        vcdp->chgBus(c+697,(vlTOPp->raw_data_payload_idx),4);
        vcdp->chgBit(c+705,(vlTOPp->sorted_data_valid));
        vcdp->chgBus(c+713,(vlTOPp->sorted_data_payload_low_data),16);
        vcdp->chgBus(c+721,(vlTOPp->sorted_data_payload_low_idx),4);
        vcdp->chgBus(c+729,(vlTOPp->sorted_data_payload_high_data),16);
        vcdp->chgBus(c+737,(vlTOPp->sorted_data_payload_high_idx),4);
        vcdp->chgBit(c+745,(vlTOPp->clk));
        vcdp->chgBit(c+753,(vlTOPp->reset));
        vcdp->chgBus(c+761,(((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_4__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->raw_data_payload_data)
                              : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_7_data))),16);
        vcdp->chgBus(c+769,(((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_4__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->raw_data_payload_idx)
                              : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_7_idx))),4);
        vcdp->chgBit(c+777,(((IData)(vlTOPp->raw_data_valid) 
                             & (IData)(vlTOPp->raw_data_ready))));
        vcdp->chgBit(c+785,((((IData)(vlTOPp->raw_data_valid) 
                              & (IData)(vlTOPp->raw_data_ready)) 
                             | (0x10U <= (IData)(vlTOPp->BitonicSort__DOT__cnt)))));
    }
}
