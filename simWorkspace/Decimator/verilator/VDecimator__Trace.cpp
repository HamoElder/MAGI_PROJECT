// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDecimator__Syms.h"


//======================

void VDecimator::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VDecimator* t=(VDecimator*)userthis;
    VDecimator__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VDecimator::traceChgThis(VDecimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VDecimator::traceChgThis__2(VDecimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->Decimator__DOT__out_data),12);
    }
}

void VDecimator::traceChgThis__3(VDecimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+2,(vlTOPp->Decimator__DOT__cnt),3);
	vcdp->chgBit  (c+3,(vlTOPp->Decimator__DOT__out_valid_1));
	vcdp->chgBit  (c+4,((4U == (IData)(vlTOPp->Decimator__DOT__cnt))));
    }
}

void VDecimator::traceChgThis__4(VDecimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+5,(vlTOPp->in_valid));
	vcdp->chgBus  (c+6,(vlTOPp->in_payload),12);
	vcdp->chgBit  (c+7,(vlTOPp->out_valid));
	vcdp->chgBus  (c+8,(vlTOPp->out_payload),12);
	vcdp->chgBit  (c+9,(vlTOPp->clk));
	vcdp->chgBit  (c+10,(vlTOPp->reset));
    }
}
