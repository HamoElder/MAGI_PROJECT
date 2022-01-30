// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VZeroForcing__Syms.h"


//======================

void VZeroForcing::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VZeroForcing* t=(VZeroForcing*)userthis;
    VZeroForcing__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VZeroForcing::traceChgThis(VZeroForcing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VZeroForcing::traceChgThis__2(VZeroForcing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_15),16);
	vcdp->chgBus  (c+2,(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_y),16);
	vcdp->chgBus  (c+3,(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_z),16);
	vcdp->chgBit  (c+4,(vlTOPp->ZeroForcing__DOT__x_sign));
	vcdp->chgBus  (c+5,((0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__x_sign)
					 ? VL_NEGATE_I((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_y))
					 : (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_y)))),16);
	vcdp->chgBus  (c+6,((0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__x_sign)
					 ? VL_NEGATE_I((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_z))
					 : (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_z)))),16);
	vcdp->chgBit  (c+7,(vlTOPp->ZeroForcing__DOT__train_en_delay_1));
	vcdp->chgBit  (c+8,(vlTOPp->ZeroForcing__DOT__train_en_delay_2));
	vcdp->chgBit  (c+9,(vlTOPp->ZeroForcing__DOT__train_en_delay_3));
	vcdp->chgBit  (c+10,(vlTOPp->ZeroForcing__DOT__train_en_delay_4));
	vcdp->chgBit  (c+11,(vlTOPp->ZeroForcing__DOT__train_en_delay_5));
	vcdp->chgBit  (c+12,(vlTOPp->ZeroForcing__DOT__train_en_delay_6));
	vcdp->chgBit  (c+13,(vlTOPp->ZeroForcing__DOT__train_en_delay_7));
	vcdp->chgBit  (c+14,(vlTOPp->ZeroForcing__DOT__train_en_delay_8));
	vcdp->chgBit  (c+15,(vlTOPp->ZeroForcing__DOT__train_en_delay_9));
	vcdp->chgBit  (c+16,(vlTOPp->ZeroForcing__DOT__train_en_delay_10));
	vcdp->chgBit  (c+17,(vlTOPp->ZeroForcing__DOT__train_en_delay_11));
	vcdp->chgBit  (c+18,(vlTOPp->ZeroForcing__DOT__train_en_delay_12));
	vcdp->chgBit  (c+19,(vlTOPp->ZeroForcing__DOT__train_en_delay_13));
	vcdp->chgBit  (c+20,(vlTOPp->ZeroForcing__DOT__train_en_delay_14));
	vcdp->chgBit  (c+21,(vlTOPp->ZeroForcing__DOT__train_en_delay_15));
	vcdp->chgBit  (c+22,(vlTOPp->ZeroForcing__DOT__train_en_delay_16));
    }
}

void VZeroForcing::traceChgThis__3(VZeroForcing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+23,(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_15));
    }
}

void VZeroForcing::traceChgThis__4(VZeroForcing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+24,(vlTOPp->raw_data_valid));
	vcdp->chgBit  (c+25,(vlTOPp->raw_data_ready));
	vcdp->chgBus  (c+26,(vlTOPp->raw_data_payload),16);
	vcdp->chgBus  (c+27,(vlTOPp->scale),16);
	vcdp->chgBus  (c+28,(vlTOPp->ref_data),16);
	vcdp->chgBit  (c+29,(vlTOPp->train_en));
	vcdp->chgBit  (c+30,(vlTOPp->result_data_valid));
	vcdp->chgBus  (c+31,(vlTOPp->result_data_payload),16);
	vcdp->chgBit  (c+32,(vlTOPp->clk));
	vcdp->chgBit  (c+33,(vlTOPp->reset));
	vcdp->chgBit  (c+34,((1U & (~ (IData)(vlTOPp->train_en)))));
	vcdp->chgBus  (c+35,((0xffffU & (((0x8000U 
					   & (IData)(vlTOPp->raw_data_payload))
					   ? (~ (IData)(vlTOPp->raw_data_payload))
					   : (IData)(vlTOPp->raw_data_payload)) 
					 + (1U & ((IData)(vlTOPp->raw_data_payload) 
						  >> 0xfU))))),16);
	vcdp->chgBus  (c+36,(((IData)(vlTOPp->train_en)
			       ? (IData)(vlTOPp->ref_data)
			       : 0U)),16);
	vcdp->chgBus  (c+37,(((IData)(vlTOPp->train_en)
			       ? 0U : (IData)(vlTOPp->scale))),16);
    }
}
