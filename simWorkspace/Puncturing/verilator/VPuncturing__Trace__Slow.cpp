// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPuncturing__Syms.h"


//======================

void VPuncturing::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VPuncturing::traceInit, &VPuncturing::traceFull, &VPuncturing::traceChg, this);
}
void VPuncturing::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VPuncturing* t = (VPuncturing*)userthis;
    VPuncturing__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VPuncturing::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VPuncturing* t = (VPuncturing*)userthis;
    VPuncturing__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VPuncturing::traceInitThis(VPuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VPuncturing::traceFullThis(VPuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VPuncturing::traceInitThis__1(VPuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+25,"raw_data_valid", false,-1);
        vcdp->declBit(c+33,"raw_data_ready", false,-1);
        vcdp->declBit(c+41,"raw_data_payload_last", false,-1);
        vcdp->declBus(c+49,"raw_data_payload_fragment", false,-1, 15,0);
        vcdp->declBit(c+57,"punched_data_valid", false,-1);
        vcdp->declBit(c+65,"punched_data_payload_last", false,-1);
        vcdp->declBus(c+73,"punched_data_payload_fragment", false,-1, 15,0);
        vcdp->declBit(c+81,"clk", false,-1);
        vcdp->declBit(c+89,"reset", false,-1);
        vcdp->declBit(c+25,"Puncturing raw_data_valid", false,-1);
        vcdp->declBit(c+33,"Puncturing raw_data_ready", false,-1);
        vcdp->declBit(c+41,"Puncturing raw_data_payload_last", false,-1);
        vcdp->declBus(c+49,"Puncturing raw_data_payload_fragment", false,-1, 15,0);
        vcdp->declBit(c+57,"Puncturing punched_data_valid", false,-1);
        vcdp->declBit(c+65,"Puncturing punched_data_payload_last", false,-1);
        vcdp->declBus(c+73,"Puncturing punched_data_payload_fragment", false,-1, 15,0);
        vcdp->declBit(c+81,"Puncturing clk", false,-1);
        vcdp->declBit(c+89,"Puncturing reset", false,-1);
        vcdp->declBus(c+1,"Puncturing raw_data_fragment", false,-1, 15,0);
        vcdp->declBit(c+9,"Puncturing raw_data_valid_1", false,-1);
        vcdp->declBit(c+17,"Puncturing raw_data_last", false,-1);
    }
}

void VPuncturing::traceFullThis__1(VPuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->Puncturing__DOT__raw_data_fragment),16);
        vcdp->fullBit(c+9,(vlTOPp->Puncturing__DOT__raw_data_valid_1));
        vcdp->fullBit(c+17,(vlTOPp->Puncturing__DOT__raw_data_last));
        vcdp->fullBit(c+25,(vlTOPp->raw_data_valid));
        vcdp->fullBit(c+33,(vlTOPp->raw_data_ready));
        vcdp->fullBit(c+41,(vlTOPp->raw_data_payload_last));
        vcdp->fullBus(c+49,(vlTOPp->raw_data_payload_fragment),16);
        vcdp->fullBit(c+57,(vlTOPp->punched_data_valid));
        vcdp->fullBit(c+65,(vlTOPp->punched_data_payload_last));
        vcdp->fullBus(c+73,(vlTOPp->punched_data_payload_fragment),16);
        vcdp->fullBit(c+81,(vlTOPp->clk));
        vcdp->fullBit(c+89,(vlTOPp->reset));
    }
}
