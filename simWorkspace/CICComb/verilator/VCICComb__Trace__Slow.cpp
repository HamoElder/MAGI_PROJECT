// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCICComb__Syms.h"


//======================

void VCICComb::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VCICComb::traceInit, &VCICComb::traceFull, &VCICComb::traceChg, this);
}
void VCICComb::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VCICComb* t=(VCICComb*)userthis;
    VCICComb__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VCICComb::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCICComb* t=(VCICComb*)userthis;
    VCICComb__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VCICComb::traceInitThis(VCICComb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICComb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VCICComb::traceFullThis(VCICComb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICComb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCICComb::traceInitThis__1(VCICComb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICComb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+12,"raw_data_valid",-1);
	vcdp->declBus  (c+13,"raw_data_payload",-1,20,0);
	vcdp->declBit  (c+14,"result_data_valid",-1);
	vcdp->declBus  (c+15,"result_data_payload",-1,16,0);
	vcdp->declBit  (c+16,"clk",-1);
	vcdp->declBit  (c+17,"reset",-1);
	vcdp->declBit  (c+12,"CICComb raw_data_valid",-1);
	vcdp->declBus  (c+13,"CICComb raw_data_payload",-1,20,0);
	vcdp->declBit  (c+14,"CICComb result_data_valid",-1);
	vcdp->declBus  (c+15,"CICComb result_data_payload",-1,16,0);
	vcdp->declBit  (c+16,"CICComb clk",-1);
	vcdp->declBit  (c+17,"CICComb reset",-1);
	vcdp->declBus  (c+1,"CICComb internal_data_vec_0",-1,16,0);
	vcdp->declBus  (c+2,"CICComb internal_data_vec_1",-1,16,0);
	vcdp->declBus  (c+3,"CICComb internal_data_vec_2",-1,16,0);
	vcdp->declBus  (c+4,"CICComb delay_data_vec_0",-1,16,0);
	vcdp->declBus  (c+5,"CICComb delay_data_vec_1",-1,16,0);
	vcdp->declBus  (c+6,"CICComb delay_data_vec_2",-1,16,0);
	vcdp->declBus  (c+7,"CICComb pipe_data_vec_0",-1,16,0);
	vcdp->declBus  (c+8,"CICComb pipe_data_vec_1",-1,16,0);
	vcdp->declBus  (c+9,"CICComb pipe_data_vec_2",-1,16,0);
	vcdp->declBus  (c+10,"CICComb result_data_payload_1",-1,16,0);
	vcdp->declBit  (c+11,"CICComb result_data_valid_1",-1);
    }
}

void VCICComb::traceFullThis__1(VCICComb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICComb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,((0x1ffffU & (vlTOPp->CICComb__DOT__pipe_data_vec_0 
					  - vlTOPp->CICComb__DOT__delay_data_vec_0))),17);
	vcdp->fullBus  (c+2,((0x1ffffU & (vlTOPp->CICComb__DOT__pipe_data_vec_1 
					  - vlTOPp->CICComb__DOT__delay_data_vec_1))),17);
	vcdp->fullBus  (c+3,((0x1ffffU & (vlTOPp->CICComb__DOT__pipe_data_vec_2 
					  - vlTOPp->CICComb__DOT__delay_data_vec_2))),17);
	vcdp->fullBus  (c+4,(vlTOPp->CICComb__DOT__delay_data_vec_0),17);
	vcdp->fullBus  (c+5,(vlTOPp->CICComb__DOT__delay_data_vec_1),17);
	vcdp->fullBus  (c+6,(vlTOPp->CICComb__DOT__delay_data_vec_2),17);
	vcdp->fullBus  (c+7,(vlTOPp->CICComb__DOT__pipe_data_vec_0),17);
	vcdp->fullBus  (c+8,(vlTOPp->CICComb__DOT__pipe_data_vec_1),17);
	vcdp->fullBus  (c+9,(vlTOPp->CICComb__DOT__pipe_data_vec_2),17);
	vcdp->fullBus  (c+10,(vlTOPp->CICComb__DOT__result_data_payload_1),17);
	vcdp->fullBit  (c+11,(vlTOPp->CICComb__DOT__result_data_valid_1));
	vcdp->fullBit  (c+12,(vlTOPp->raw_data_valid));
	vcdp->fullBus  (c+13,(vlTOPp->raw_data_payload),21);
	vcdp->fullBit  (c+14,(vlTOPp->result_data_valid));
	vcdp->fullBus  (c+15,(vlTOPp->result_data_payload),17);
	vcdp->fullBit  (c+16,(vlTOPp->clk));
	vcdp->fullBit  (c+17,(vlTOPp->reset));
    }
}
