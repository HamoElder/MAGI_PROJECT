// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSignedDivider__Syms.h"


//======================

void VSignedDivider::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VSignedDivider* t=(VSignedDivider*)userthis;
    VSignedDivider__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VSignedDivider::traceChgThis(VSignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 4U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VSignedDivider::traceChgThis__2(VSignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->SignedDivider__DOT__divider_cmd_payload_context),2);
    }
}

void VSignedDivider::traceChgThis__3(VSignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+2,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_65 
				      >> 0x10U)))));
	vcdp->chgBit  (c+3,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_66 
				      >> 0x10U)))));
	vcdp->chgBit  (c+4,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_67 
				      >> 0x10U)))));
	vcdp->chgBit  (c+5,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_68 
				      >> 0x10U)))));
	vcdp->chgBit  (c+6,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_69 
				      >> 0x10U)))));
	vcdp->chgBit  (c+7,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_70 
				      >> 0x10U)))));
	vcdp->chgBit  (c+8,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_71 
				      >> 0x10U)))));
	vcdp->chgBit  (c+9,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_72 
				      >> 0x10U)))));
	vcdp->chgBit  (c+10,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_73 
				       >> 0x10U)))));
	vcdp->chgBit  (c+11,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_74 
				       >> 0x10U)))));
	vcdp->chgBit  (c+12,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_75 
				       >> 0x10U)))));
	vcdp->chgBit  (c+13,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_76 
				       >> 0x10U)))));
	vcdp->chgBit  (c+14,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_77 
				       >> 0x10U)))));
	vcdp->chgBit  (c+15,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_78 
				       >> 0x10U)))));
	vcdp->chgBit  (c+16,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_79 
				       >> 0x10U)))));
	vcdp->chgBit  (c+17,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_80 
				       >> 0x10U)))));
    }
}

void VSignedDivider::traceChgThis__4(VSignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+18,(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_16),16);
	vcdp->chgBus  (c+19,(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_remainder),16);
	vcdp->chgBit  (c+20,((0U == (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_error))));
	vcdp->chgBus  (c+21,(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_16),2);
    }
}

void VSignedDivider::traceChgThis__5(VSignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+22,(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_16));
    }
}

void VSignedDivider::traceChgThis__6(VSignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+23,(vlTOPp->flush));
	vcdp->chgBit  (c+24,(vlTOPp->cmd_valid));
	vcdp->chgBit  (c+25,(vlTOPp->cmd_ready));
	vcdp->chgBus  (c+26,(vlTOPp->cmd_payload_numerator),16);
	vcdp->chgBus  (c+27,(vlTOPp->cmd_payload_denominator),16);
	vcdp->chgBit  (c+28,(vlTOPp->rsp_valid));
	vcdp->chgBit  (c+29,(vlTOPp->rsp_ready));
	vcdp->chgBus  (c+30,(vlTOPp->rsp_payload_quotient),16);
	vcdp->chgBus  (c+31,(vlTOPp->rsp_payload_remainder),16);
	vcdp->chgBit  (c+32,(vlTOPp->rsp_payload_error));
	vcdp->chgBit  (c+33,(vlTOPp->clk));
	vcdp->chgBit  (c+34,(vlTOPp->reset));
	vcdp->chgBus  (c+35,((0xffffU & (((0x8000U 
					   & (IData)(vlTOPp->cmd_payload_numerator))
					   ? (~ (IData)(vlTOPp->cmd_payload_numerator))
					   : (IData)(vlTOPp->cmd_payload_numerator)) 
					 + (1U & ((IData)(vlTOPp->cmd_payload_numerator) 
						  >> 0xfU))))),16);
	vcdp->chgBus  (c+36,((0xffffU & (((0x8000U 
					   & (IData)(vlTOPp->cmd_payload_denominator))
					   ? (~ (IData)(vlTOPp->cmd_payload_denominator))
					   : (IData)(vlTOPp->cmd_payload_denominator)) 
					 + (1U & ((IData)(vlTOPp->cmd_payload_denominator) 
						  >> 0xfU))))),16);
	vcdp->chgBit  (c+37,(((IData)(vlTOPp->cmd_valid) 
			      & (IData)(vlTOPp->rsp_ready))));
    }
}
