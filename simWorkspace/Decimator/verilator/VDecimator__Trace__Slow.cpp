// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDecimator__Syms.h"


//======================

void VDecimator::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VDecimator::traceInit, &VDecimator::traceFull, &VDecimator::traceChg, this);
}
void VDecimator::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VDecimator* t = (VDecimator*)userthis;
    VDecimator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VDecimator::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VDecimator* t = (VDecimator*)userthis;
    VDecimator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VDecimator::traceInitThis(VDecimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VDecimator::traceFullThis(VDecimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
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
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+33,"in_valid", false,-1);
        vcdp->declBus(c+41,"in_payload", false,-1, 11,0);
        vcdp->declBit(c+49,"out_valid", false,-1);
        vcdp->declBus(c+57,"out_payload", false,-1, 11,0);
        vcdp->declBit(c+65,"clk", false,-1);
        vcdp->declBit(c+73,"reset", false,-1);
        vcdp->declBit(c+33,"Decimator in_valid", false,-1);
        vcdp->declBus(c+41,"Decimator in_payload", false,-1, 11,0);
        vcdp->declBit(c+49,"Decimator out_valid", false,-1);
        vcdp->declBus(c+57,"Decimator out_payload", false,-1, 11,0);
        vcdp->declBit(c+65,"Decimator clk", false,-1);
        vcdp->declBit(c+73,"Decimator reset", false,-1);
        vcdp->declBus(c+9,"Decimator cnt", false,-1, 2,0);
        vcdp->declBus(c+1,"Decimator out_data", false,-1, 11,0);
        vcdp->declBit(c+17,"Decimator out_valid_1", false,-1);
        vcdp->declBit(c+25,"Decimator when_Decimator_l22", false,-1);
    }
}

void VDecimator::traceFullThis__1(VDecimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDecimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->Decimator__DOT__out_data),12);
        vcdp->fullBus(c+9,(vlTOPp->Decimator__DOT__cnt),3);
        vcdp->fullBit(c+17,(vlTOPp->Decimator__DOT__out_valid_1));
        vcdp->fullBit(c+25,((4U == (IData)(vlTOPp->Decimator__DOT__cnt))));
        vcdp->fullBit(c+33,(vlTOPp->in_valid));
        vcdp->fullBus(c+41,(vlTOPp->in_payload),12);
        vcdp->fullBit(c+49,(vlTOPp->out_valid));
        vcdp->fullBus(c+57,(vlTOPp->out_payload),12);
        vcdp->fullBit(c+65,(vlTOPp->clk));
        vcdp->fullBit(c+73,(vlTOPp->reset));
    }
}
