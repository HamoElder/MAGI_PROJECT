// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VUnsignedDivider__Syms.h"


//======================

void VUnsignedDivider::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VUnsignedDivider* t=(VUnsignedDivider*)userthis;
    VUnsignedDivider__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VUnsignedDivider::traceChgThis(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUnsignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VUnsignedDivider::traceChgThis__2(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUnsignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_65 
				      >> 0x10U)))));
	vcdp->chgBit  (c+2,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_66 
				      >> 0x10U)))));
	vcdp->chgBit  (c+3,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_67 
				      >> 0x10U)))));
	vcdp->chgBit  (c+4,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_68 
				      >> 0x10U)))));
	vcdp->chgBit  (c+5,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_69 
				      >> 0x10U)))));
	vcdp->chgBit  (c+6,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_70 
				      >> 0x10U)))));
	vcdp->chgBit  (c+7,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_71 
				      >> 0x10U)))));
	vcdp->chgBit  (c+8,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_72 
				      >> 0x10U)))));
	vcdp->chgBit  (c+9,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_73 
				      >> 0x10U)))));
	vcdp->chgBit  (c+10,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_74 
				       >> 0x10U)))));
	vcdp->chgBit  (c+11,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_75 
				       >> 0x10U)))));
	vcdp->chgBit  (c+12,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_76 
				       >> 0x10U)))));
	vcdp->chgBit  (c+13,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_77 
				       >> 0x10U)))));
	vcdp->chgBit  (c+14,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_78 
				       >> 0x10U)))));
	vcdp->chgBit  (c+15,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_79 
				       >> 0x10U)))));
	vcdp->chgBit  (c+16,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_80 
				       >> 0x10U)))));
    }
}

void VUnsignedDivider::traceChgThis__3(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUnsignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+17,(vlTOPp->flush));
	vcdp->chgBit  (c+18,(vlTOPp->cmd_valid));
	vcdp->chgBit  (c+19,(vlTOPp->cmd_ready));
	vcdp->chgBus  (c+20,(vlTOPp->cmd_payload_numerator),16);
	vcdp->chgBus  (c+21,(vlTOPp->cmd_payload_denominator),16);
	vcdp->chgBit  (c+22,(vlTOPp->rsp_valid));
	vcdp->chgBit  (c+23,(vlTOPp->rsp_ready));
	vcdp->chgBus  (c+24,(vlTOPp->rsp_payload_quotient),16);
	vcdp->chgBus  (c+25,(vlTOPp->rsp_payload_remainder),16);
	vcdp->chgBit  (c+26,(vlTOPp->rsp_payload_error));
	vcdp->chgBit  (c+27,(vlTOPp->clk));
	vcdp->chgBit  (c+28,(vlTOPp->reset));
	vcdp->chgBit  (c+29,(((IData)(vlTOPp->cmd_valid) 
			      & (IData)(vlTOPp->cmd_ready))));
    }
}
