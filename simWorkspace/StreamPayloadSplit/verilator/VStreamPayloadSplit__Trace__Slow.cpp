// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VStreamPayloadSplit__Syms.h"


//======================

void VStreamPayloadSplit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VStreamPayloadSplit::traceInit, &VStreamPayloadSplit::traceFull, &VStreamPayloadSplit::traceChg, this);
}
void VStreamPayloadSplit::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VStreamPayloadSplit* t = (VStreamPayloadSplit*)userthis;
    VStreamPayloadSplit__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VStreamPayloadSplit::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VStreamPayloadSplit* t = (VStreamPayloadSplit*)userthis;
    VStreamPayloadSplit__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VStreamPayloadSplit::traceInitThis(VStreamPayloadSplit__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPayloadSplit* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VStreamPayloadSplit::traceFullThis(VStreamPayloadSplit__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPayloadSplit* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VStreamPayloadSplit::traceInitThis__1(VStreamPayloadSplit__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPayloadSplit* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+33,"raw_data_valid", false,-1);
        vcdp->declBit(c+41,"raw_data_ready", false,-1);
        vcdp->declBus(c+49,"raw_data_payload", false,-1, 31,0);
        vcdp->declBit(c+57,"split_data_valid", false,-1);
        vcdp->declBit(c+65,"split_data_ready", false,-1);
        vcdp->declBus(c+73,"split_data_payload", false,-1, 7,0);
        vcdp->declBit(c+81,"clk", false,-1);
        vcdp->declBit(c+89,"reset", false,-1);
        vcdp->declBit(c+33,"StreamPayloadSplit raw_data_valid", false,-1);
        vcdp->declBit(c+41,"StreamPayloadSplit raw_data_ready", false,-1);
        vcdp->declBus(c+49,"StreamPayloadSplit raw_data_payload", false,-1, 31,0);
        vcdp->declBit(c+57,"StreamPayloadSplit split_data_valid", false,-1);
        vcdp->declBit(c+65,"StreamPayloadSplit split_data_ready", false,-1);
        vcdp->declBus(c+73,"StreamPayloadSplit split_data_payload", false,-1, 7,0);
        vcdp->declBit(c+81,"StreamPayloadSplit clk", false,-1);
        vcdp->declBit(c+89,"StreamPayloadSplit reset", false,-1);
        vcdp->declBus(c+25,"StreamPayloadSplit cnt", false,-1, 2,0);
        vcdp->declBus(c+17,"StreamPayloadSplit data_buf", false,-1, 31,0);
        vcdp->declBit(c+1,"StreamPayloadSplit raw_data_fire", false,-1);
        vcdp->declBit(c+9,"StreamPayloadSplit split_data_fire", false,-1);
    }
}

void VStreamPayloadSplit::traceFullThis__1(VStreamPayloadSplit__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPayloadSplit* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->StreamPayloadSplit__DOT__raw_data_fire));
        vcdp->fullBit(c+9,(vlTOPp->StreamPayloadSplit__DOT__split_data_fire));
        vcdp->fullBus(c+17,(vlTOPp->StreamPayloadSplit__DOT__data_buf),32);
        vcdp->fullBus(c+25,(vlTOPp->StreamPayloadSplit__DOT__cnt),3);
        vcdp->fullBit(c+33,(vlTOPp->raw_data_valid));
        vcdp->fullBit(c+41,(vlTOPp->raw_data_ready));
        vcdp->fullBus(c+49,(vlTOPp->raw_data_payload),32);
        vcdp->fullBit(c+57,(vlTOPp->split_data_valid));
        vcdp->fullBit(c+65,(vlTOPp->split_data_ready));
        vcdp->fullBus(c+73,(vlTOPp->split_data_payload),8);
        vcdp->fullBit(c+81,(vlTOPp->clk));
        vcdp->fullBit(c+89,(vlTOPp->reset));
    }
}
