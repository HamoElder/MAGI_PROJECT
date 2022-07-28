// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VClockDivider__Syms.h"


//======================

void VClockDivider::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VClockDivider* t = (VClockDivider*)userthis;
    VClockDivider__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VClockDivider::traceChgThis(VClockDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VClockDivider::traceChgThis__2(VClockDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->ClockDivider__DOT__when_ClockDivider_l101));
    }
}

void VClockDivider::traceChgThis__3(VClockDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+9,(vlTOPp->enable));
        vcdp->chgBit(c+17,(vlTOPp->clk_out));
        vcdp->chgBit(c+25,(vlTOPp->clk));
        vcdp->chgBit(c+33,(vlTOPp->reset));
    }
}
