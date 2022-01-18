// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIIR_I_Filter__Syms.h"


//======================

void VIIR_I_Filter::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VIIR_I_Filter* t=(VIIR_I_Filter*)userthis;
    VIIR_I_Filter__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VIIR_I_Filter::traceChgThis(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
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
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				>> 2U) | (vlTOPp->__Vm_traceActivity 
					  >> 3U))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				>> 3U) | (vlTOPp->__Vm_traceActivity 
					  >> 4U))))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VIIR_I_Filter::traceChgThis__2(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_10_next_adder_data),19);
    }
}

void VIIR_I_Filter::traceChgThis__3(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+2,(vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__coff_mem_2),2);
    }
}

void VIIR_I_Filter::traceChgThis__4(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+3,((0x1fffffU & (VL_MULS_III(21,21,21, 
						      (0x1fffffU 
						       & VL_EXTENDS_II(21,19, vlTOPp->IIR_I_Filter__DOT___zz_raw_data_payload_0)), 
						      (0x1fffffU 
						       & VL_EXTENDS_II(21,2, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__coff_mem_2)))) 
					  + vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__transposeCore_9__DOT__previous_adder_data))),21);
    }
}

void VIIR_I_Filter::traceChgThis__5(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+4,(vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_7__DOT__previous_adder_data),19);
	vcdp->chgBus  (c+5,(vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_8__DOT__previous_adder_data),19);
	vcdp->chgBus  (c+6,(vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_9__DOT__previous_adder_data),19);
	vcdp->chgBus  (c+7,(vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_10__DOT__previous_adder_data),19);
	vcdp->chgBus  (c+8,(vlTOPp->IIR_I_Filter__DOT___zz_raw_data_payload_0),19);
	vcdp->chgBus  (c+9,(vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__transposeCore_7__DOT__previous_adder_data),21);
	vcdp->chgBus  (c+10,(vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__transposeCore_8__DOT__previous_adder_data),21);
	vcdp->chgBus  (c+11,(vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__transposeCore_9__DOT__previous_adder_data),21);
    }
}

void VIIR_I_Filter::traceChgThis__6(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+12,((0x1fffffU & (VL_MULS_III(21,21,21, 
						       (0x1fffffU 
							& VL_EXTENDS_II(21,19, vlTOPp->IIR_I_Filter__DOT___zz_raw_data_payload_0)), 
						       (0x1fffffU 
							& VL_EXTENDS_II(21,2, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__coff_mem_0)))) 
					   + vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__transposeCore_7__DOT__previous_adder_data))),21);
	vcdp->chgBus  (c+13,((0x1fffffU & (VL_MULS_III(21,21,21, 
						       (0x1fffffU 
							& VL_EXTENDS_II(21,19, vlTOPp->IIR_I_Filter__DOT___zz_raw_data_payload_0)), 
						       (0x1fffffU 
							& VL_EXTENDS_II(21,2, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__coff_mem_1)))) 
					   + vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__transposeCore_8__DOT__previous_adder_data))),21);
    }
}

void VIIR_I_Filter::traceChgThis__7(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+14,(vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__coff_mem_0),3);
	vcdp->chgBus  (c+15,(vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__coff_mem_1),3);
	vcdp->chgBus  (c+16,(vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__coff_mem_0),2);
	vcdp->chgBus  (c+17,(vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__coff_mem_1),2);
    }
}

void VIIR_I_Filter::traceChgThis__8(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+18,(vlTOPp->clc));
	vcdp->chgBit  (c+19,(vlTOPp->raw_data_valid));
	vcdp->chgBus  (c+20,(vlTOPp->raw_data_payload_0),16);
	vcdp->chgBit  (c+21,(vlTOPp->filtered_data_valid));
	vcdp->chgBus  (c+22,(vlTOPp->filtered_data_payload_0),21);
	vcdp->chgBit  (c+23,(vlTOPp->clk));
	vcdp->chgBit  (c+24,(vlTOPp->reset));
	vcdp->chgBus  (c+25,((0x7ffffU & (VL_MULS_III(19,19,19, 
						      (0x7ffffU 
						       & VL_EXTENDS_II(19,16, (IData)(vlTOPp->raw_data_payload_0))), 
						      (0x7ffffU 
						       & VL_EXTENDS_II(19,3, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__coff_mem_0)))) 
					  + vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_7__DOT__previous_adder_data))),19);
	vcdp->chgBus  (c+26,((0x7ffffU & (VL_MULS_III(19,19,19, 
						      (0x7ffffU 
						       & VL_EXTENDS_II(19,16, (IData)(vlTOPp->raw_data_payload_0))), 
						      (0x7ffffU 
						       & VL_EXTENDS_II(19,3, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__coff_mem_1)))) 
					  + vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_8__DOT__previous_adder_data))),19);
	vcdp->chgBus  (c+27,((0x7ffffU & (VL_MULS_III(19,19,19, 
						      (0x7ffffU 
						       & VL_EXTENDS_II(19,16, (IData)(vlTOPp->raw_data_payload_0))), 
						      (0x7ffffU 
						       & VL_EXTENDS_II(19,3, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__coff_mem_1)))) 
					  + vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_9__DOT__previous_adder_data))),19);
    }
}
