// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCICIntegrator__Syms.h"


//======================

void VCICIntegrator::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCICIntegrator* t=(VCICIntegrator*)userthis;
    VCICIntegrator__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VCICIntegrator::traceChgThis(VCICIntegrator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICIntegrator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VCICIntegrator::traceChgThis__2(VCICIntegrator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICIntegrator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->CICIntegrator__DOT__internal_data_vec_0),21);
	vcdp->chgBus  (c+2,(vlTOPp->CICIntegrator__DOT__internal_data_vec_1),21);
	vcdp->chgBus  (c+3,(vlTOPp->CICIntegrator__DOT__internal_data_vec_2),21);
	vcdp->chgBus  (c+4,(vlTOPp->CICIntegrator__DOT__internal_en),4);
	vcdp->chgBit  (c+5,((1U & (IData)(vlTOPp->CICIntegrator__DOT__internal_en))));
	vcdp->chgBit  (c+6,((1U & ((IData)(vlTOPp->CICIntegrator__DOT__internal_en) 
				   >> 1U))));
	vcdp->chgBit  (c+7,((1U & ((IData)(vlTOPp->CICIntegrator__DOT__internal_en) 
				   >> 2U))));
    }
}

void VCICIntegrator::traceChgThis__3(VCICIntegrator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICIntegrator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+8,(vlTOPp->CICIntegrator__DOT__raw_data_buf),12);
    }
}

void VCICIntegrator::traceChgThis__4(VCICIntegrator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICIntegrator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+9,(vlTOPp->raw_data_valid));
	vcdp->chgBus  (c+10,(vlTOPp->raw_data_payload),12);
	vcdp->chgBit  (c+11,(vlTOPp->filtered_data_valid));
	vcdp->chgBus  (c+12,(vlTOPp->filtered_data_payload),21);
	vcdp->chgBit  (c+13,(vlTOPp->clk));
	vcdp->chgBit  (c+14,(vlTOPp->reset));
    }
}
