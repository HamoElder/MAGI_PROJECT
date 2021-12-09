// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBitonicSortMDC__Syms.h"


//======================

void VBitonicSortMDC::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VBitonicSortMDC* t = (VBitonicSortMDC*)userthis;
    VBitonicSortMDC__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VBitonicSortMDC::traceChgThis(VBitonicSortMDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitonicSortMDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VBitonicSortMDC::traceChgThis__2(VBitonicSortMDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitonicSortMDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(((4U & (IData)(vlTOPp->BitonicSortMDC__DOT__cnt))
                            ? (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_8__DOT__shift_reg_3_data)
                            : (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_4_out1_data))),16);
        vcdp->chgBus(c+9,(((2U & (IData)(vlTOPp->BitonicSortMDC__DOT__cnt))
                            ? (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_10__DOT__shift_reg_1_data)
                            : (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_5_out1_data))),16);
        vcdp->chgBus(c+17,(((1U & (IData)(vlTOPp->BitonicSortMDC__DOT__cnt))
                             ? (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_12__DOT__shift_reg_0_data)
                             : (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_6_out1_data))),16);
    }
}

void VBitonicSortMDC::traceChgThis__3(VBitonicSortMDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitonicSortMDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+25,(((IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_5__DOT__cmp_sel)
                             ? (IData)(vlTOPp->BitonicSortMDC__DOT__cmpSwitch_3_out2_data)
                             : (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_9__DOT__shift_reg_3_data))),16);
        vcdp->chgBus(c+33,(((IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_6__DOT__cmp_sel)
                             ? (IData)(vlTOPp->BitonicSortMDC__DOT__cmpSwitch_4_out2_data)
                             : (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_11__DOT__shift_reg_1_data))),16);
        vcdp->chgBus(c+41,(((IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_7__DOT__cmp_sel)
                             ? (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_13__DOT__shift_reg_0_data)
                             : (IData)(vlTOPp->BitonicSortMDC__DOT__cmpSwitch_5_out2_data))),16);
        vcdp->chgBus(c+49,(((IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_7__DOT__cmp_sel)
                             ? (IData)(vlTOPp->BitonicSortMDC__DOT__cmpSwitch_5_out2_data)
                             : (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_13__DOT__shift_reg_0_data))),16);
    }
}

void VBitonicSortMDC::traceChgThis__4(VBitonicSortMDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitonicSortMDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+57,(vlTOPp->BitonicSortMDC__DOT__cmpUnit_4_out1_data),16);
        vcdp->chgBus(c+65,(vlTOPp->BitonicSortMDC__DOT__cmpSwitch_3_out2_data),16);
        vcdp->chgBus(c+73,(vlTOPp->BitonicSortMDC__DOT__cmpUnit_5_out1_data),16);
        vcdp->chgBus(c+81,(vlTOPp->BitonicSortMDC__DOT__cmpSwitch_4_out2_data),16);
        vcdp->chgBus(c+89,(vlTOPp->BitonicSortMDC__DOT__cmpUnit_6_out1_data),16);
        vcdp->chgBus(c+97,(vlTOPp->BitonicSortMDC__DOT__cmpSwitch_5_out2_data),16);
        vcdp->chgBit(c+105,(vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27));
        vcdp->chgBit(c+113,(vlTOPp->BitonicSortMDC__DOT__cmpUnit_4__DOT__cmp_less_result));
        vcdp->chgBit(c+121,(vlTOPp->BitonicSortMDC__DOT__cmpUnit_4__DOT__cmp_sel));
        vcdp->chgBit(c+129,(vlTOPp->BitonicSortMDC__DOT__cmpUnit_5__DOT__cmp_less_result));
        vcdp->chgBit(c+137,(vlTOPp->BitonicSortMDC__DOT__cmpUnit_5__DOT__cmp_sel));
        vcdp->chgBit(c+145,(vlTOPp->BitonicSortMDC__DOT__cmpUnit_6__DOT__cmp_less_result));
        vcdp->chgBit(c+153,(vlTOPp->BitonicSortMDC__DOT__cmpUnit_6__DOT__cmp_sel));
        vcdp->chgBit(c+161,(vlTOPp->BitonicSortMDC__DOT__cmpUnit_7__DOT__cmp_less_result));
        vcdp->chgBit(c+169,(vlTOPp->BitonicSortMDC__DOT__cmpUnit_7__DOT__cmp_sel));
    }
}

void VBitonicSortMDC::traceChgThis__5(VBitonicSortMDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitonicSortMDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+177,(vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_7_data),16);
        vcdp->chgBus(c+185,(vlTOPp->BitonicSortMDC__DOT__shiftRegister_8__DOT__shift_reg_3_data),16);
        vcdp->chgBus(c+193,(vlTOPp->BitonicSortMDC__DOT__shiftRegister_9__DOT__shift_reg_3_data),16);
        vcdp->chgBus(c+201,(vlTOPp->BitonicSortMDC__DOT__shiftRegister_10__DOT__shift_reg_1_data),16);
        vcdp->chgBus(c+209,(vlTOPp->BitonicSortMDC__DOT__shiftRegister_11__DOT__shift_reg_1_data),16);
        vcdp->chgBus(c+217,(vlTOPp->BitonicSortMDC__DOT__shiftRegister_12__DOT__shift_reg_0_data),16);
        vcdp->chgBus(c+225,(vlTOPp->BitonicSortMDC__DOT__shiftRegister_13__DOT__shift_reg_0_data),16);
        vcdp->chgBus(c+233,(vlTOPp->BitonicSortMDC__DOT__cmpUnit_7_out1_regNext_data),16);
        vcdp->chgBus(c+241,(vlTOPp->BitonicSortMDC__DOT__cmpUnit_7_out2_regNext_data),16);
        vcdp->chgBus(c+249,(vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_0_data),16);
        vcdp->chgBus(c+257,(vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_1_data),16);
        vcdp->chgBus(c+265,(vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_2_data),16);
        vcdp->chgBus(c+273,(vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_3_data),16);
        vcdp->chgBus(c+281,(vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_4_data),16);
        vcdp->chgBus(c+289,(vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_5_data),16);
        vcdp->chgBus(c+297,(vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_6_data),16);
        vcdp->chgBus(c+305,(vlTOPp->BitonicSortMDC__DOT__shiftRegister_8__DOT__shift_reg_0_data),16);
        vcdp->chgBus(c+313,(vlTOPp->BitonicSortMDC__DOT__shiftRegister_8__DOT__shift_reg_1_data),16);
        vcdp->chgBus(c+321,(vlTOPp->BitonicSortMDC__DOT__shiftRegister_8__DOT__shift_reg_2_data),16);
        vcdp->chgBus(c+329,(vlTOPp->BitonicSortMDC__DOT__shiftRegister_9__DOT__shift_reg_0_data),16);
        vcdp->chgBus(c+337,(vlTOPp->BitonicSortMDC__DOT__shiftRegister_9__DOT__shift_reg_1_data),16);
        vcdp->chgBus(c+345,(vlTOPp->BitonicSortMDC__DOT__shiftRegister_9__DOT__shift_reg_2_data),16);
        vcdp->chgBus(c+353,(vlTOPp->BitonicSortMDC__DOT__shiftRegister_10__DOT__shift_reg_0_data),16);
        vcdp->chgBus(c+361,(vlTOPp->BitonicSortMDC__DOT__shiftRegister_11__DOT__shift_reg_0_data),16);
    }
}

void VBitonicSortMDC::traceChgThis__6(VBitonicSortMDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitonicSortMDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+369,((1U & ((IData)(vlTOPp->BitonicSortMDC__DOT__cnt) 
                                   >> 2U))));
        vcdp->chgBit(c+377,((1U & ((IData)(vlTOPp->BitonicSortMDC__DOT__cnt) 
                                   >> 1U))));
        vcdp->chgBit(c+385,((1U & (IData)(vlTOPp->BitonicSortMDC__DOT__cnt))));
        vcdp->chgBus(c+393,(vlTOPp->BitonicSortMDC__DOT__cnt),5);
    }
}

void VBitonicSortMDC::traceChgThis__7(VBitonicSortMDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitonicSortMDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+401,(vlTOPp->ascending_order));
        vcdp->chgBit(c+409,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+417,(vlTOPp->raw_data_ready));
        vcdp->chgBus(c+425,(vlTOPp->raw_data_payload_data),16);
        vcdp->chgBit(c+433,(vlTOPp->sorted_data_valid));
        vcdp->chgBus(c+441,(vlTOPp->sorted_data_payload_low_data),16);
        vcdp->chgBus(c+449,(vlTOPp->sorted_data_payload_high_data),16);
        vcdp->chgBit(c+457,(vlTOPp->clk));
        vcdp->chgBit(c+465,(vlTOPp->reset));
        vcdp->chgBus(c+473,(((IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_4__DOT__cmp_sel)
                              ? (IData)(vlTOPp->raw_data_payload_data)
                              : (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_7_data))),16);
        vcdp->chgBit(c+481,(((IData)(vlTOPp->raw_data_valid) 
                             & (IData)(vlTOPp->raw_data_ready))));
        vcdp->chgBit(c+489,((((IData)(vlTOPp->raw_data_valid) 
                              & (IData)(vlTOPp->raw_data_ready)) 
                             | (0x10U <= (IData)(vlTOPp->BitonicSortMDC__DOT__cnt)))));
    }
}
