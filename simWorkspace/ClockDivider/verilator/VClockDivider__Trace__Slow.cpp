// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VClockDivider__Syms.h"


//======================

void VClockDivider::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VClockDivider::traceInit, &VClockDivider::traceFull, &VClockDivider::traceChg, this);
}
void VClockDivider::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VClockDivider* t = (VClockDivider*)userthis;
    VClockDivider__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VClockDivider::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VClockDivider* t = (VClockDivider*)userthis;
    VClockDivider__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VClockDivider::traceInitThis(VClockDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VClockDivider::traceFullThis(VClockDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VClockDivider::traceInitThis__1(VClockDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+9,"enable", false,-1);
        vcdp->declBit(c+17,"clk_out", false,-1);
        vcdp->declBit(c+25,"clk", false,-1);
        vcdp->declBit(c+33,"reset", false,-1);
        vcdp->declBit(c+9,"ClockDivider enable", false,-1);
        vcdp->declBit(c+17,"ClockDivider clk_out", false,-1);
        vcdp->declBit(c+25,"ClockDivider clk", false,-1);
        vcdp->declBit(c+33,"ClockDivider reset", false,-1);
        vcdp->declBit(c+1,"ClockDivider when_ClockDivider_l101", false,-1);
    }
}

void VClockDivider::traceFullThis__1(VClockDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->ClockDivider__DOT__when_ClockDivider_l101));
        vcdp->fullBit(c+9,(vlTOPp->enable));
        vcdp->fullBit(c+17,(vlTOPp->clk_out));
        vcdp->fullBit(c+25,(vlTOPp->clk));
        vcdp->fullBit(c+33,(vlTOPp->reset));
    }
}
