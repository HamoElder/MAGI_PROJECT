// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTransposeFIR__Syms.h"


//======================

void VTransposeFIR::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTransposeFIR* t=(VTransposeFIR*)userthis;
    VTransposeFIR__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VTransposeFIR::traceChgThis(VTransposeFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
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
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->TransposeFIR__DOT__transposeCore_21__DOT__previous_adder_data),24);
	vcdp->chgBus  (c+2,(vlTOPp->TransposeFIR__DOT__transposeCore_22__DOT__previous_adder_data),24);
	vcdp->chgBus  (c+3,(vlTOPp->TransposeFIR__DOT__transposeCore_23__DOT__previous_adder_data),24);
	vcdp->chgBus  (c+4,(vlTOPp->TransposeFIR__DOT__transposeCore_24__DOT__previous_adder_data),24);
	vcdp->chgBus  (c+5,(vlTOPp->TransposeFIR__DOT__transposeCore_25__DOT__previous_adder_data),24);
	vcdp->chgBus  (c+6,(vlTOPp->TransposeFIR__DOT__transposeCore_26__DOT__previous_adder_data),24);
	vcdp->chgBus  (c+7,(vlTOPp->TransposeFIR__DOT__transposeCore_27__DOT__previous_adder_data),24);
	vcdp->chgBus  (c+8,(vlTOPp->TransposeFIR__DOT__transposeCore_28__DOT__previous_adder_data),24);
	vcdp->chgBus  (c+9,(vlTOPp->TransposeFIR__DOT__transposeCore_29__DOT__previous_adder_data),24);
	vcdp->chgBus  (c+10,(vlTOPp->TransposeFIR__DOT__transposeCore_30__DOT__previous_adder_data),24);
	vcdp->chgBus  (c+11,(vlTOPp->TransposeFIR__DOT__transposeCore_31__DOT__previous_adder_data),24);
	vcdp->chgBus  (c+12,(vlTOPp->TransposeFIR__DOT__transposeCore_32__DOT__previous_adder_data),24);
	vcdp->chgBus  (c+13,(vlTOPp->TransposeFIR__DOT__transposeCore_33__DOT__previous_adder_data),24);
	vcdp->chgBus  (c+14,(vlTOPp->TransposeFIR__DOT__transposeCore_34__DOT__previous_adder_data),24);
	vcdp->chgBus  (c+15,(vlTOPp->TransposeFIR__DOT__transposeCore_35__DOT__previous_adder_data),24);
	vcdp->chgBus  (c+16,(vlTOPp->TransposeFIR__DOT__transposeCore_36__DOT__previous_adder_data),24);
	vcdp->chgBus  (c+17,(vlTOPp->TransposeFIR__DOT__transposeCore_37__DOT__previous_adder_data),24);
	vcdp->chgBus  (c+18,(vlTOPp->TransposeFIR__DOT__transposeCore_38__DOT__previous_adder_data),24);
	vcdp->chgBus  (c+19,(vlTOPp->TransposeFIR__DOT__transposeCore_39__DOT__previous_adder_data),24);
	vcdp->chgBus  (c+20,(vlTOPp->TransposeFIR__DOT__transposeCore_40__DOT__previous_adder_data),24);
	vcdp->chgBus  (c+21,(vlTOPp->TransposeFIR__DOT__transposeCore_41__DOT__previous_adder_data),24);
    }
}

void VTransposeFIR::traceChgThis__3(VTransposeFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+22,(vlTOPp->TransposeFIR__DOT__coff_mem_0),8);
	vcdp->chgBus  (c+23,(vlTOPp->TransposeFIR__DOT__coff_mem_1),8);
	vcdp->chgBus  (c+24,(vlTOPp->TransposeFIR__DOT__coff_mem_2),8);
	vcdp->chgBus  (c+25,(vlTOPp->TransposeFIR__DOT__coff_mem_3),8);
	vcdp->chgBus  (c+26,(vlTOPp->TransposeFIR__DOT__coff_mem_4),8);
	vcdp->chgBus  (c+27,(vlTOPp->TransposeFIR__DOT__coff_mem_5),8);
	vcdp->chgBus  (c+28,(vlTOPp->TransposeFIR__DOT__coff_mem_6),8);
	vcdp->chgBus  (c+29,(vlTOPp->TransposeFIR__DOT__coff_mem_7),8);
	vcdp->chgBus  (c+30,(vlTOPp->TransposeFIR__DOT__coff_mem_8),8);
	vcdp->chgBus  (c+31,(vlTOPp->TransposeFIR__DOT__coff_mem_9),8);
	vcdp->chgBus  (c+32,(vlTOPp->TransposeFIR__DOT__coff_mem_10),8);
    }
}

void VTransposeFIR::traceChgThis__4(VTransposeFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+33,(vlTOPp->raw_data_valid));
	vcdp->chgBus  (c+34,(vlTOPp->raw_data_payload_0),16);
	vcdp->chgBit  (c+35,(vlTOPp->filtered_data_valid));
	vcdp->chgBus  (c+36,(vlTOPp->filtered_data_payload_0),24);
	vcdp->chgBit  (c+37,(vlTOPp->clc));
	vcdp->chgBit  (c+38,(vlTOPp->clk));
	vcdp->chgBit  (c+39,(vlTOPp->reset));
	vcdp->chgBus  (c+40,((0xffffffU & (VL_MULS_III(24,24,24, 
						       (0xffffffU 
							& VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
						       (0xffffffU 
							& VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_0)))) 
					   + vlTOPp->TransposeFIR__DOT__transposeCore_21__DOT__previous_adder_data))),24);
	vcdp->chgBus  (c+41,((0xffffffU & (VL_MULS_III(24,24,24, 
						       (0xffffffU 
							& VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
						       (0xffffffU 
							& VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_1)))) 
					   + vlTOPp->TransposeFIR__DOT__transposeCore_22__DOT__previous_adder_data))),24);
	vcdp->chgBus  (c+42,((0xffffffU & (VL_MULS_III(24,24,24, 
						       (0xffffffU 
							& VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
						       (0xffffffU 
							& VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_2)))) 
					   + vlTOPp->TransposeFIR__DOT__transposeCore_23__DOT__previous_adder_data))),24);
	vcdp->chgBus  (c+43,((0xffffffU & (VL_MULS_III(24,24,24, 
						       (0xffffffU 
							& VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
						       (0xffffffU 
							& VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_3)))) 
					   + vlTOPp->TransposeFIR__DOT__transposeCore_24__DOT__previous_adder_data))),24);
	vcdp->chgBus  (c+44,((0xffffffU & (VL_MULS_III(24,24,24, 
						       (0xffffffU 
							& VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
						       (0xffffffU 
							& VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_4)))) 
					   + vlTOPp->TransposeFIR__DOT__transposeCore_25__DOT__previous_adder_data))),24);
	vcdp->chgBus  (c+45,((0xffffffU & (VL_MULS_III(24,24,24, 
						       (0xffffffU 
							& VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
						       (0xffffffU 
							& VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_5)))) 
					   + vlTOPp->TransposeFIR__DOT__transposeCore_26__DOT__previous_adder_data))),24);
	vcdp->chgBus  (c+46,((0xffffffU & (VL_MULS_III(24,24,24, 
						       (0xffffffU 
							& VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
						       (0xffffffU 
							& VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_6)))) 
					   + vlTOPp->TransposeFIR__DOT__transposeCore_27__DOT__previous_adder_data))),24);
	vcdp->chgBus  (c+47,((0xffffffU & (VL_MULS_III(24,24,24, 
						       (0xffffffU 
							& VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
						       (0xffffffU 
							& VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_7)))) 
					   + vlTOPp->TransposeFIR__DOT__transposeCore_28__DOT__previous_adder_data))),24);
	vcdp->chgBus  (c+48,((0xffffffU & (VL_MULS_III(24,24,24, 
						       (0xffffffU 
							& VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
						       (0xffffffU 
							& VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_8)))) 
					   + vlTOPp->TransposeFIR__DOT__transposeCore_29__DOT__previous_adder_data))),24);
	vcdp->chgBus  (c+49,((0xffffffU & (VL_MULS_III(24,24,24, 
						       (0xffffffU 
							& VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
						       (0xffffffU 
							& VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_9)))) 
					   + vlTOPp->TransposeFIR__DOT__transposeCore_30__DOT__previous_adder_data))),24);
	vcdp->chgBus  (c+50,((0xffffffU & (VL_MULS_III(24,24,24, 
						       (0xffffffU 
							& VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
						       (0xffffffU 
							& VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_10)))) 
					   + vlTOPp->TransposeFIR__DOT__transposeCore_31__DOT__previous_adder_data))),24);
	vcdp->chgBus  (c+51,((0xffffffU & (VL_MULS_III(24,24,24, 
						       (0xffffffU 
							& VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
						       (0xffffffU 
							& VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_9)))) 
					   + vlTOPp->TransposeFIR__DOT__transposeCore_32__DOT__previous_adder_data))),24);
	vcdp->chgBus  (c+52,((0xffffffU & (VL_MULS_III(24,24,24, 
						       (0xffffffU 
							& VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
						       (0xffffffU 
							& VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_8)))) 
					   + vlTOPp->TransposeFIR__DOT__transposeCore_33__DOT__previous_adder_data))),24);
	vcdp->chgBus  (c+53,((0xffffffU & (VL_MULS_III(24,24,24, 
						       (0xffffffU 
							& VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
						       (0xffffffU 
							& VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_7)))) 
					   + vlTOPp->TransposeFIR__DOT__transposeCore_34__DOT__previous_adder_data))),24);
	vcdp->chgBus  (c+54,((0xffffffU & (VL_MULS_III(24,24,24, 
						       (0xffffffU 
							& VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
						       (0xffffffU 
							& VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_6)))) 
					   + vlTOPp->TransposeFIR__DOT__transposeCore_35__DOT__previous_adder_data))),24);
	vcdp->chgBus  (c+55,((0xffffffU & (VL_MULS_III(24,24,24, 
						       (0xffffffU 
							& VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
						       (0xffffffU 
							& VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_5)))) 
					   + vlTOPp->TransposeFIR__DOT__transposeCore_36__DOT__previous_adder_data))),24);
	vcdp->chgBus  (c+56,((0xffffffU & (VL_MULS_III(24,24,24, 
						       (0xffffffU 
							& VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
						       (0xffffffU 
							& VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_4)))) 
					   + vlTOPp->TransposeFIR__DOT__transposeCore_37__DOT__previous_adder_data))),24);
	vcdp->chgBus  (c+57,((0xffffffU & (VL_MULS_III(24,24,24, 
						       (0xffffffU 
							& VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
						       (0xffffffU 
							& VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_3)))) 
					   + vlTOPp->TransposeFIR__DOT__transposeCore_38__DOT__previous_adder_data))),24);
	vcdp->chgBus  (c+58,((0xffffffU & (VL_MULS_III(24,24,24, 
						       (0xffffffU 
							& VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
						       (0xffffffU 
							& VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_2)))) 
					   + vlTOPp->TransposeFIR__DOT__transposeCore_39__DOT__previous_adder_data))),24);
	vcdp->chgBus  (c+59,((0xffffffU & (VL_MULS_III(24,24,24, 
						       (0xffffffU 
							& VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
						       (0xffffffU 
							& VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_1)))) 
					   + vlTOPp->TransposeFIR__DOT__transposeCore_40__DOT__previous_adder_data))),24);
	vcdp->chgBus  (c+60,((0xffffffU & (VL_MULS_III(24,24,24, 
						       (0xffffffU 
							& VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
						       (0xffffffU 
							& VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_5)))) 
					   + vlTOPp->TransposeFIR__DOT__transposeCore_41__DOT__previous_adder_data))),24);
    }
}
