// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDecimator__Syms.h"


//======================

void VDecimator::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VDecimator::traceInit, &VDecimator::traceFull, &VDecimator::traceChg, this);
}
void VDecimator::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VDecimator* t=(VDecimator*)userthis;
    VDecimator__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VDecimator::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VDecimator* t=(VDecimator*)userthis;
    VDecimator__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VDecimator::traceInitThis(VDecimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VDecimator::traceFullThis(VDecimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VDecimator::traceInitThis__1(VDecimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+5,"in_valid",-1);
	vcdp->declBus  (c+6,"in_payload",-1,11,0);
	vcdp->declBit  (c+7,"out_valid",-1);
	vcdp->declBus  (c+8,"out_payload",-1,11,0);
	vcdp->declBit  (c+9,"clk",-1);
	vcdp->declBit  (c+10,"reset",-1);
	vcdp->declBit  (c+5,"Decimator in_valid",-1);
	vcdp->declBus  (c+6,"Decimator in_payload",-1,11,0);
	vcdp->declBit  (c+7,"Decimator out_valid",-1);
	vcdp->declBus  (c+8,"Decimator out_payload",-1,11,0);
	vcdp->declBit  (c+9,"Decimator clk",-1);
	vcdp->declBit  (c+10,"Decimator reset",-1);
	// Tracing: Decimator _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/Decimator.v:15
	vcdp->declBus  (c+11,"Decimator cntDataType",-1,2,0);
	vcdp->declBus  (c+2,"Decimator cnt",-1,2,0);
	vcdp->declBus  (c+1,"Decimator out_data",-1,11,0);
	vcdp->declBit  (c+3,"Decimator out_valid_1",-1);
	vcdp->declBit  (c+4,"Decimator when_Decimator_l22",-1);
    }
}

void VDecimator::traceFullThis__1(VDecimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->Decimator__DOT__out_data),12);
	vcdp->fullBus  (c+2,(vlTOPp->Decimator__DOT__cnt),3);
	vcdp->fullBit  (c+3,(vlTOPp->Decimator__DOT__out_valid_1));
	vcdp->fullBit  (c+4,((4U == (IData)(vlTOPp->Decimator__DOT__cnt))));
	vcdp->fullBit  (c+5,(vlTOPp->in_valid));
	vcdp->fullBus  (c+6,(vlTOPp->in_payload),12);
	vcdp->fullBit  (c+7,(vlTOPp->out_valid));
	vcdp->fullBus  (c+8,(vlTOPp->out_payload),12);
	vcdp->fullBit  (c+9,(vlTOPp->clk));
	vcdp->fullBit  (c+10,(vlTOPp->reset));
	vcdp->fullBus  (c+11,(vlTOPp->Decimator__DOT__cntDataType),3);
    }
}
