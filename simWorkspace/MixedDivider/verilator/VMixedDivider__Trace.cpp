// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMixedDivider__Syms.h"


//======================

void VMixedDivider::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VMixedDivider* t=(VMixedDivider*)userthis;
    VMixedDivider__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VMixedDivider::traceChgThis(VMixedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 5U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VMixedDivider::traceChgThis__2(VMixedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->MixedDivider__DOT__divider_cmd_payload_context),2);
	vcdp->chgBit  (c+2,(vlTOPp->MixedDivider__DOT__divider__DOT__cmd_fire));
    }
}

void VMixedDivider::traceChgThis__3(VMixedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+3,((1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_4 
				      >> 0x10U)))));
    }
}

void VMixedDivider::traceChgThis__4(VMixedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+4,(vlTOPp->MixedDivider__DOT__divider__DOT___zz_cmd_ready));
	vcdp->chgBit  (c+5,(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid));
    }
}

void VMixedDivider::traceChgThis__5(VMixedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+6,(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient),16);
	vcdp->chgBus  (c+7,(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_2),16);
	vcdp->chgBit  (c+8,((0U == (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_1))));
	vcdp->chgBus  (c+9,(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context),2);
    }
}

void VMixedDivider::traceChgThis__6(VMixedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+10,(vlTOPp->MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92),2);
    }
}

void VMixedDivider::traceChgThis__7(VMixedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+11,(vlTOPp->flush));
	vcdp->chgBit  (c+12,(vlTOPp->cmd_valid));
	vcdp->chgBit  (c+13,(vlTOPp->cmd_ready));
	vcdp->chgBus  (c+14,(vlTOPp->cmd_payload_numerator),16);
	vcdp->chgBus  (c+15,(vlTOPp->cmd_payload_denominator),16);
	vcdp->chgBit  (c+16,(vlTOPp->cmd_payload_signed));
	vcdp->chgBit  (c+17,(vlTOPp->rsp_valid));
	vcdp->chgBit  (c+18,(vlTOPp->rsp_ready));
	vcdp->chgBus  (c+19,(vlTOPp->rsp_payload_quotient),16);
	vcdp->chgBus  (c+20,(vlTOPp->rsp_payload_remainder),16);
	vcdp->chgBit  (c+21,(vlTOPp->rsp_payload_error));
	vcdp->chgBit  (c+22,(vlTOPp->clk));
	vcdp->chgBit  (c+23,(vlTOPp->reset));
	vcdp->chgBus  (c+24,((0xffffU & (((((IData)(vlTOPp->cmd_payload_numerator) 
					    >> 0xfU) 
					   & (IData)(vlTOPp->cmd_payload_signed))
					   ? (~ (IData)(vlTOPp->cmd_payload_numerator))
					   : (IData)(vlTOPp->cmd_payload_numerator)) 
					 + (((IData)(vlTOPp->cmd_payload_numerator) 
					     >> 0xfU) 
					    & (IData)(vlTOPp->cmd_payload_signed))))),16);
	vcdp->chgBus  (c+25,((0xffffU & (((((IData)(vlTOPp->cmd_payload_denominator) 
					    >> 0xfU) 
					   & (IData)(vlTOPp->cmd_payload_signed))
					   ? (~ (IData)(vlTOPp->cmd_payload_denominator))
					   : (IData)(vlTOPp->cmd_payload_denominator)) 
					 + (((IData)(vlTOPp->cmd_payload_denominator) 
					     >> 0xfU) 
					    & (IData)(vlTOPp->cmd_payload_signed))))),16);
	vcdp->chgBit  (c+26,(((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid) 
			      & (IData)(vlTOPp->rsp_ready))));
    }
}
