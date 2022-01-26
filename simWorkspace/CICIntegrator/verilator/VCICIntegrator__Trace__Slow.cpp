// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCICIntegrator__Syms.h"


//======================

void VCICIntegrator::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VCICIntegrator::traceInit, &VCICIntegrator::traceFull, &VCICIntegrator::traceChg, this);
}
void VCICIntegrator::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VCICIntegrator* t=(VCICIntegrator*)userthis;
    VCICIntegrator__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VCICIntegrator::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCICIntegrator* t=(VCICIntegrator*)userthis;
    VCICIntegrator__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VCICIntegrator::traceInitThis(VCICIntegrator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICIntegrator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VCICIntegrator::traceFullThis(VCICIntegrator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICIntegrator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCICIntegrator::traceInitThis__1(VCICIntegrator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICIntegrator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+9,"raw_data_valid",-1);
	vcdp->declBus  (c+10,"raw_data_payload",-1,11,0);
	vcdp->declBit  (c+11,"filtered_data_valid",-1);
	vcdp->declBus  (c+12,"filtered_data_payload",-1,20,0);
	vcdp->declBit  (c+13,"clk",-1);
	vcdp->declBit  (c+14,"reset",-1);
	vcdp->declBit  (c+9,"CICIntegrator raw_data_valid",-1);
	vcdp->declBus  (c+10,"CICIntegrator raw_data_payload",-1,11,0);
	vcdp->declBit  (c+11,"CICIntegrator filtered_data_valid",-1);
	vcdp->declBus  (c+12,"CICIntegrator filtered_data_payload",-1,20,0);
	vcdp->declBit  (c+13,"CICIntegrator clk",-1);
	vcdp->declBit  (c+14,"CICIntegrator reset",-1);
	// Tracing: CICIntegrator _zz_internal_en // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CICIntegrator.v:15
	// Tracing: CICIntegrator _zz_internal_data_vec_0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CICIntegrator.v:16
	vcdp->declBus  (c+8,"CICIntegrator raw_data_buf",-1,11,0);
	vcdp->declBus  (c+1,"CICIntegrator internal_data_vec_0",-1,20,0);
	vcdp->declBus  (c+2,"CICIntegrator internal_data_vec_1",-1,20,0);
	vcdp->declBus  (c+3,"CICIntegrator internal_data_vec_2",-1,20,0);
	vcdp->declBus  (c+4,"CICIntegrator internal_en",-1,3,0);
	vcdp->declBit  (c+5,"CICIntegrator when_CICIntegrator_l22",-1);
	vcdp->declBit  (c+6,"CICIntegrator when_CICIntegrator_l27",-1);
	vcdp->declBit  (c+7,"CICIntegrator when_CICIntegrator_l27_1",-1);
    }
}

void VCICIntegrator::traceFullThis__1(VCICIntegrator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICIntegrator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->CICIntegrator__DOT__internal_data_vec_0),21);
	vcdp->fullBus  (c+2,(vlTOPp->CICIntegrator__DOT__internal_data_vec_1),21);
	vcdp->fullBus  (c+3,(vlTOPp->CICIntegrator__DOT__internal_data_vec_2),21);
	vcdp->fullBus  (c+4,(vlTOPp->CICIntegrator__DOT__internal_en),4);
	vcdp->fullBit  (c+5,((1U & (IData)(vlTOPp->CICIntegrator__DOT__internal_en))));
	vcdp->fullBit  (c+6,((1U & ((IData)(vlTOPp->CICIntegrator__DOT__internal_en) 
				    >> 1U))));
	vcdp->fullBit  (c+7,((1U & ((IData)(vlTOPp->CICIntegrator__DOT__internal_en) 
				    >> 2U))));
	vcdp->fullBus  (c+8,(vlTOPp->CICIntegrator__DOT__raw_data_buf),12);
	vcdp->fullBit  (c+9,(vlTOPp->raw_data_valid));
	vcdp->fullBus  (c+10,(vlTOPp->raw_data_payload),12);
	vcdp->fullBit  (c+11,(vlTOPp->filtered_data_valid));
	vcdp->fullBus  (c+12,(vlTOPp->filtered_data_payload),21);
	vcdp->fullBit  (c+13,(vlTOPp->clk));
	vcdp->fullBit  (c+14,(vlTOPp->reset));
    }
}
