// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTransposeFIR__Syms.h"


//======================

void VTransposeFIR::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTransposeFIR* t = (VTransposeFIR*)userthis;
    VTransposeFIR__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VTransposeFIR::traceChgThis(VTransposeFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTransposeFIR::traceChgThis__2(VTransposeFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->TransposeFIR__DOT__transposeCore_21__DOT__previous_adder_data),24);
        vcdp->chgBus(c+9,(vlTOPp->TransposeFIR__DOT__transposeCore_22__DOT__previous_adder_data),24);
        vcdp->chgBus(c+17,(vlTOPp->TransposeFIR__DOT__transposeCore_23__DOT__previous_adder_data),24);
        vcdp->chgBus(c+25,(vlTOPp->TransposeFIR__DOT__transposeCore_24__DOT__previous_adder_data),24);
        vcdp->chgBus(c+33,(vlTOPp->TransposeFIR__DOT__transposeCore_25__DOT__previous_adder_data),24);
        vcdp->chgBus(c+41,(vlTOPp->TransposeFIR__DOT__transposeCore_26__DOT__previous_adder_data),24);
        vcdp->chgBus(c+49,(vlTOPp->TransposeFIR__DOT__transposeCore_27__DOT__previous_adder_data),24);
        vcdp->chgBus(c+57,(vlTOPp->TransposeFIR__DOT__transposeCore_28__DOT__previous_adder_data),24);
        vcdp->chgBus(c+65,(vlTOPp->TransposeFIR__DOT__transposeCore_29__DOT__previous_adder_data),24);
        vcdp->chgBus(c+73,(vlTOPp->TransposeFIR__DOT__transposeCore_30__DOT__previous_adder_data),24);
        vcdp->chgBus(c+81,(vlTOPp->TransposeFIR__DOT__transposeCore_31__DOT__previous_adder_data),24);
        vcdp->chgBus(c+89,(vlTOPp->TransposeFIR__DOT__transposeCore_32__DOT__previous_adder_data),24);
        vcdp->chgBus(c+97,(vlTOPp->TransposeFIR__DOT__transposeCore_33__DOT__previous_adder_data),24);
        vcdp->chgBus(c+105,(vlTOPp->TransposeFIR__DOT__transposeCore_34__DOT__previous_adder_data),24);
        vcdp->chgBus(c+113,(vlTOPp->TransposeFIR__DOT__transposeCore_35__DOT__previous_adder_data),24);
        vcdp->chgBus(c+121,(vlTOPp->TransposeFIR__DOT__transposeCore_36__DOT__previous_adder_data),24);
        vcdp->chgBus(c+129,(vlTOPp->TransposeFIR__DOT__transposeCore_37__DOT__previous_adder_data),24);
        vcdp->chgBus(c+137,(vlTOPp->TransposeFIR__DOT__transposeCore_38__DOT__previous_adder_data),24);
        vcdp->chgBus(c+145,(vlTOPp->TransposeFIR__DOT__transposeCore_39__DOT__previous_adder_data),24);
        vcdp->chgBus(c+153,(vlTOPp->TransposeFIR__DOT__transposeCore_40__DOT__previous_adder_data),24);
        vcdp->chgBus(c+161,(vlTOPp->TransposeFIR__DOT__transposeCore_41__DOT__previous_adder_data),24);
    }
}

void VTransposeFIR::traceChgThis__3(VTransposeFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+169,(vlTOPp->TransposeFIR__DOT__coff_mem_0),8);
        vcdp->chgBus(c+177,(vlTOPp->TransposeFIR__DOT__coff_mem_1),8);
        vcdp->chgBus(c+185,(vlTOPp->TransposeFIR__DOT__coff_mem_2),8);
        vcdp->chgBus(c+193,(vlTOPp->TransposeFIR__DOT__coff_mem_3),8);
        vcdp->chgBus(c+201,(vlTOPp->TransposeFIR__DOT__coff_mem_4),8);
        vcdp->chgBus(c+209,(vlTOPp->TransposeFIR__DOT__coff_mem_5),8);
        vcdp->chgBus(c+217,(vlTOPp->TransposeFIR__DOT__coff_mem_6),8);
        vcdp->chgBus(c+225,(vlTOPp->TransposeFIR__DOT__coff_mem_7),8);
        vcdp->chgBus(c+233,(vlTOPp->TransposeFIR__DOT__coff_mem_8),8);
        vcdp->chgBus(c+241,(vlTOPp->TransposeFIR__DOT__coff_mem_9),8);
        vcdp->chgBus(c+249,(vlTOPp->TransposeFIR__DOT__coff_mem_10),8);
    }
}

void VTransposeFIR::traceChgThis__4(VTransposeFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+257,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+265,(vlTOPp->raw_data_ready));
        vcdp->chgBus(c+273,(vlTOPp->raw_data_payload_0),16);
        vcdp->chgBit(c+281,(vlTOPp->filtered_data_valid));
        vcdp->chgBus(c+289,(vlTOPp->filtered_data_payload_0),24);
        vcdp->chgBit(c+297,(vlTOPp->clk));
        vcdp->chgBit(c+305,(vlTOPp->reset));
        vcdp->chgBus(c+313,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_0)))) 
                                          + vlTOPp->TransposeFIR__DOT__transposeCore_21__DOT__previous_adder_data))),24);
        vcdp->chgBus(c+321,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_1)))) 
                                          + vlTOPp->TransposeFIR__DOT__transposeCore_22__DOT__previous_adder_data))),24);
        vcdp->chgBus(c+329,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_2)))) 
                                          + vlTOPp->TransposeFIR__DOT__transposeCore_23__DOT__previous_adder_data))),24);
        vcdp->chgBus(c+337,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_3)))) 
                                          + vlTOPp->TransposeFIR__DOT__transposeCore_24__DOT__previous_adder_data))),24);
        vcdp->chgBus(c+345,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_4)))) 
                                          + vlTOPp->TransposeFIR__DOT__transposeCore_25__DOT__previous_adder_data))),24);
        vcdp->chgBus(c+353,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_5)))) 
                                          + vlTOPp->TransposeFIR__DOT__transposeCore_26__DOT__previous_adder_data))),24);
        vcdp->chgBus(c+361,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_6)))) 
                                          + vlTOPp->TransposeFIR__DOT__transposeCore_27__DOT__previous_adder_data))),24);
        vcdp->chgBus(c+369,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_7)))) 
                                          + vlTOPp->TransposeFIR__DOT__transposeCore_28__DOT__previous_adder_data))),24);
        vcdp->chgBus(c+377,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_8)))) 
                                          + vlTOPp->TransposeFIR__DOT__transposeCore_29__DOT__previous_adder_data))),24);
        vcdp->chgBus(c+385,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_9)))) 
                                          + vlTOPp->TransposeFIR__DOT__transposeCore_30__DOT__previous_adder_data))),24);
        vcdp->chgBus(c+393,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_10)))) 
                                          + vlTOPp->TransposeFIR__DOT__transposeCore_31__DOT__previous_adder_data))),24);
        vcdp->chgBus(c+401,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_9)))) 
                                          + vlTOPp->TransposeFIR__DOT__transposeCore_32__DOT__previous_adder_data))),24);
        vcdp->chgBus(c+409,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_8)))) 
                                          + vlTOPp->TransposeFIR__DOT__transposeCore_33__DOT__previous_adder_data))),24);
        vcdp->chgBus(c+417,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_7)))) 
                                          + vlTOPp->TransposeFIR__DOT__transposeCore_34__DOT__previous_adder_data))),24);
        vcdp->chgBus(c+425,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_6)))) 
                                          + vlTOPp->TransposeFIR__DOT__transposeCore_35__DOT__previous_adder_data))),24);
        vcdp->chgBus(c+433,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_5)))) 
                                          + vlTOPp->TransposeFIR__DOT__transposeCore_36__DOT__previous_adder_data))),24);
        vcdp->chgBus(c+441,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_4)))) 
                                          + vlTOPp->TransposeFIR__DOT__transposeCore_37__DOT__previous_adder_data))),24);
        vcdp->chgBus(c+449,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_3)))) 
                                          + vlTOPp->TransposeFIR__DOT__transposeCore_38__DOT__previous_adder_data))),24);
        vcdp->chgBus(c+457,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_2)))) 
                                          + vlTOPp->TransposeFIR__DOT__transposeCore_39__DOT__previous_adder_data))),24);
        vcdp->chgBus(c+465,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_1)))) 
                                          + vlTOPp->TransposeFIR__DOT__transposeCore_40__DOT__previous_adder_data))),24);
        vcdp->chgBus(c+473,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_5)))) 
                                          + vlTOPp->TransposeFIR__DOT__transposeCore_41__DOT__previous_adder_data))),24);
    }
}
