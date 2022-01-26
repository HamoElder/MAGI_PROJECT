// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCICFilter__Syms.h"


//======================

void VCICFilter::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCICFilter* t=(VCICFilter*)userthis;
    VCICFilter__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VCICFilter::traceChgThis(VCICFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCICFilter::traceChgThis__2(VCICFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->CICFilter__DOT__decimator_1__DOT__out_valid_1));
	vcdp->chgBit  (c+2,(vlTOPp->CICFilter__DOT__combor__DOT__result_data_valid_1));
	vcdp->chgBus  (c+3,(vlTOPp->CICFilter__DOT__combor__DOT__result_data_payload_1),17);
	vcdp->chgBus  (c+4,((0x1ffffU & (vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_0 
					 - vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_0))),17);
	vcdp->chgBus  (c+5,((0x1ffffU & (vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_1 
					 - vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_1))),17);
	vcdp->chgBus  (c+6,((0x1ffffU & (vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_2 
					 - vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_2))),17);
	vcdp->chgBus  (c+7,(vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_0),17);
	vcdp->chgBus  (c+8,(vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_1),17);
	vcdp->chgBus  (c+9,(vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_2),17);
	vcdp->chgBus  (c+10,(vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_0),17);
	vcdp->chgBus  (c+11,(vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_1),17);
	vcdp->chgBus  (c+12,(vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_2),17);
    }
}

void VCICFilter::traceChgThis__3(VCICFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+13,(vlTOPp->CICFilter__DOT__decimator_1__DOT__out_data),21);
    }
}

void VCICFilter::traceChgThis__4(VCICFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+14,(((0x1e0000U & (VL_NEGATE_I((IData)(
								(1U 
								 & (vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_2 
								    >> 0x10U)))) 
					    << 0x11U)) 
			      | vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_2)),21);
	vcdp->chgBit  (c+15,((1U & ((IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en) 
				    >> 3U))));
	vcdp->chgBus  (c+16,(vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_2),17);
	vcdp->chgBus  (c+17,(vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_0),17);
	vcdp->chgBus  (c+18,(vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_1),17);
	vcdp->chgBus  (c+19,(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en),4);
	vcdp->chgBit  (c+20,((1U & (IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en))));
	vcdp->chgBit  (c+21,((1U & ((IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en) 
				    >> 1U))));
	vcdp->chgBit  (c+22,((1U & ((IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en) 
				    >> 2U))));
	vcdp->chgBus  (c+23,(vlTOPp->CICFilter__DOT__decimator_1__DOT__cnt),3);
	vcdp->chgBit  (c+24,((4U == (IData)(vlTOPp->CICFilter__DOT__decimator_1__DOT__cnt))));
    }
}

void VCICFilter::traceChgThis__5(VCICFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+25,(vlTOPp->CICFilter__DOT__integrator__DOT__raw_data_buf),16);
    }
}

void VCICFilter::traceChgThis__6(VCICFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+26,(vlTOPp->raw_data_valid));
	vcdp->chgBus  (c+27,(vlTOPp->raw_data_payload),16);
	vcdp->chgBit  (c+28,(vlTOPp->filtered_data_valid));
	vcdp->chgBus  (c+29,(vlTOPp->filtered_data_payload),17);
	vcdp->chgBit  (c+30,(vlTOPp->clk));
	vcdp->chgBit  (c+31,(vlTOPp->reset));
    }
}
