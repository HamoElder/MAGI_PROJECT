// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCordicRotator__Syms.h"


//======================

void VCordicRotator::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCordicRotator* t=(VCordicRotator*)userthis;
    VCordicRotator__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VCordicRotator::traceChgThis(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCordicRotator::traceChgThis__2(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->CordicRotator__DOT__raw_data_fire));
    }
}

void VCordicRotator::traceChgThis__3(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+2,(vlTOPp->rotate_mode));
	vcdp->chgBus  (c+3,(vlTOPp->x_u),2);
	vcdp->chgBit  (c+4,(vlTOPp->w_en));
	vcdp->chgBus  (c+5,(vlTOPp->w_addr),8);
	vcdp->chgBus  (c+6,(vlTOPp->w_data),32);
	vcdp->chgBit  (c+7,(vlTOPp->raw_data_valid));
	vcdp->chgBit  (c+8,(vlTOPp->raw_data_ready));
	vcdp->chgBus  (c+9,(vlTOPp->raw_data_payload_x),32);
	vcdp->chgBus  (c+10,(vlTOPp->raw_data_payload_y),32);
	vcdp->chgBus  (c+11,(vlTOPp->raw_data_payload_z),32);
	vcdp->chgBit  (c+12,(vlTOPp->result_valid));
	vcdp->chgBus  (c+13,(vlTOPp->result_payload_x),32);
	vcdp->chgBus  (c+14,(vlTOPp->result_payload_y),32);
	vcdp->chgBus  (c+15,(vlTOPp->result_payload_z),32);
	vcdp->chgBit  (c+16,(vlTOPp->clk));
	vcdp->chgBit  (c+17,(vlTOPp->reset));
    }
}
