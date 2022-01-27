// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDirectFIR__Syms.h"


//======================

void VDirectFIR::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VDirectFIR* t=(VDirectFIR*)userthis;
    VDirectFIR__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VDirectFIR::traceChgThis(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VDirectFIR::traceChgThis__2(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->DirectFIR__DOT__coff_mem_0),9);
	vcdp->chgBus  (c+2,(vlTOPp->DirectFIR__DOT__coff_mem_1),9);
	vcdp->chgBus  (c+3,(vlTOPp->DirectFIR__DOT__coff_mem_2),9);
	vcdp->chgBus  (c+4,(vlTOPp->DirectFIR__DOT__coff_mem_3),9);
	vcdp->chgBus  (c+5,(vlTOPp->DirectFIR__DOT__coff_mem_4),9);
	vcdp->chgBus  (c+6,(vlTOPp->DirectFIR__DOT__coff_mem_5),9);
	vcdp->chgBus  (c+7,(vlTOPp->DirectFIR__DOT__coff_mem_6),9);
	vcdp->chgBus  (c+8,(vlTOPp->DirectFIR__DOT__coff_mem_7),9);
    }
}

void VDirectFIR::traceChgThis__3(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+9,((1U & ((IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en) 
				   >> 2U))));
	vcdp->chgBus  (c+10,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__sum_result),29);
	vcdp->chgBus  (c+11,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en),3);
	vcdp->chgBus  (c+12,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_0),12);
	vcdp->chgBus  (c+13,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_1),12);
	vcdp->chgBus  (c+14,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_2),12);
	vcdp->chgBus  (c+15,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_3),12);
	vcdp->chgBus  (c+16,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_4),12);
	vcdp->chgBus  (c+17,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_5),12);
	vcdp->chgBus  (c+18,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_6),12);
	vcdp->chgBus  (c+19,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_7),12);
	vcdp->chgBus  (c+20,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_8),12);
	vcdp->chgBus  (c+21,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_9),12);
	vcdp->chgBus  (c+22,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_10),12);
	vcdp->chgBus  (c+23,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_11),12);
	vcdp->chgBus  (c+24,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_12),12);
	vcdp->chgBus  (c+25,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_13),12);
	vcdp->chgBus  (c+26,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_14),12);
	vcdp->chgBus  (c+27,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_15),12);
	vcdp->chgBus  (c+28,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_0),29);
	vcdp->chgBus  (c+29,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_1),29);
	vcdp->chgBus  (c+30,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_2),29);
	vcdp->chgBus  (c+31,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_3),29);
	vcdp->chgBus  (c+32,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_4),29);
	vcdp->chgBus  (c+33,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_5),29);
	vcdp->chgBus  (c+34,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_6),29);
	vcdp->chgBus  (c+35,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_7),29);
	vcdp->chgBus  (c+36,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_8),29);
	vcdp->chgBus  (c+37,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_9),29);
	vcdp->chgBus  (c+38,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_10),29);
	vcdp->chgBus  (c+39,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_11),29);
	vcdp->chgBus  (c+40,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_12),29);
	vcdp->chgBus  (c+41,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_13),29);
	vcdp->chgBus  (c+42,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_14),29);
	vcdp->chgBus  (c+43,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_15),29);
	vcdp->chgBit  (c+44,((1U & (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en))));
	vcdp->chgBit  (c+45,((1U & ((IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en) 
				    >> 1U))));
    }
}

void VDirectFIR::traceChgThis__4(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+46,(vlTOPp->raw_data_valid));
	vcdp->chgBus  (c+47,(vlTOPp->raw_data_payload_0),12);
	vcdp->chgBit  (c+48,(vlTOPp->filtered_data_valid));
	vcdp->chgBus  (c+49,(vlTOPp->filtered_data_payload_0),29);
	vcdp->chgBit  (c+50,(vlTOPp->clk));
	vcdp->chgBit  (c+51,(vlTOPp->reset));
    }
}
