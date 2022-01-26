// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCICComb__Syms.h"


//======================

void VCICComb::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCICComb* t=(VCICComb*)userthis;
    VCICComb__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VCICComb::traceChgThis(VCICComb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICComb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCICComb::traceChgThis__2(VCICComb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICComb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,((0x1ffffU & (vlTOPp->CICComb__DOT__pipe_data_vec_0 
					 - vlTOPp->CICComb__DOT__delay_data_vec_0))),17);
	vcdp->chgBus  (c+2,((0x1ffffU & (vlTOPp->CICComb__DOT__pipe_data_vec_1 
					 - vlTOPp->CICComb__DOT__delay_data_vec_1))),17);
	vcdp->chgBus  (c+3,((0x1ffffU & (vlTOPp->CICComb__DOT__pipe_data_vec_2 
					 - vlTOPp->CICComb__DOT__delay_data_vec_2))),17);
	vcdp->chgBus  (c+4,(vlTOPp->CICComb__DOT__delay_data_vec_0),17);
	vcdp->chgBus  (c+5,(vlTOPp->CICComb__DOT__delay_data_vec_1),17);
	vcdp->chgBus  (c+6,(vlTOPp->CICComb__DOT__delay_data_vec_2),17);
	vcdp->chgBus  (c+7,(vlTOPp->CICComb__DOT__pipe_data_vec_0),17);
	vcdp->chgBus  (c+8,(vlTOPp->CICComb__DOT__pipe_data_vec_1),17);
	vcdp->chgBus  (c+9,(vlTOPp->CICComb__DOT__pipe_data_vec_2),17);
	vcdp->chgBus  (c+10,(vlTOPp->CICComb__DOT__result_data_payload_1),17);
	vcdp->chgBit  (c+11,(vlTOPp->CICComb__DOT__result_data_valid_1));
    }
}

void VCICComb::traceChgThis__3(VCICComb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICComb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+12,(vlTOPp->raw_data_valid));
	vcdp->chgBus  (c+13,(vlTOPp->raw_data_payload),21);
	vcdp->chgBit  (c+14,(vlTOPp->result_data_valid));
	vcdp->chgBus  (c+15,(vlTOPp->result_data_payload),17);
	vcdp->chgBit  (c+16,(vlTOPp->clk));
	vcdp->chgBit  (c+17,(vlTOPp->reset));
    }
}
