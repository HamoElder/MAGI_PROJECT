// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VmFSKMod__Syms.h"


//======================

void VmFSKMod::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VmFSKMod::traceInit, &VmFSKMod::traceFull, &VmFSKMod::traceChg, this);
}
void VmFSKMod::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VmFSKMod* t = (VmFSKMod*)userthis;
    VmFSKMod__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VmFSKMod::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VmFSKMod* t = (VmFSKMod*)userthis;
    VmFSKMod__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VmFSKMod::traceInitThis(VmFSKMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VmFSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VmFSKMod::traceFullThis(VmFSKMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VmFSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VmFSKMod::traceInitThis__1(VmFSKMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VmFSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+17,"unit_data_valid", false,-1);
        vcdp->declBus(c+25,"unit_data_payload", false,-1, 1,0);
        vcdp->declBit(c+33,"mod_iq_valid", false,-1);
        vcdp->declBus(c+41,"mod_iq_payload_cha_i", false,-1, 10,0);
        vcdp->declBus(c+49,"mod_iq_payload_cha_q", false,-1, 10,0);
        vcdp->declBit(c+57,"clk", false,-1);
        vcdp->declBit(c+65,"reset", false,-1);
        vcdp->declBit(c+17,"mFSKMod unit_data_valid", false,-1);
        vcdp->declBus(c+25,"mFSKMod unit_data_payload", false,-1, 1,0);
        vcdp->declBit(c+33,"mFSKMod mod_iq_valid", false,-1);
        vcdp->declBus(c+41,"mFSKMod mod_iq_payload_cha_i", false,-1, 10,0);
        vcdp->declBus(c+49,"mFSKMod mod_iq_payload_cha_q", false,-1, 10,0);
        vcdp->declBit(c+57,"mFSKMod clk", false,-1);
        vcdp->declBit(c+65,"mFSKMod reset", false,-1);
        vcdp->declBus(c+73,"mFSKMod codeTableI_0", false,-1, 10,0);
        vcdp->declBus(c+81,"mFSKMod codeTableI_1", false,-1, 10,0);
        vcdp->declBus(c+89,"mFSKMod codeTableI_2", false,-1, 10,0);
        vcdp->declBus(c+97,"mFSKMod codeTableI_3", false,-1, 10,0);
        vcdp->declBus(c+1,"mFSKMod unit_data", false,-1, 1,0);
        vcdp->declBit(c+9,"mFSKMod unit_valid", false,-1);
    }
}

void VmFSKMod::traceFullThis__1(VmFSKMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VmFSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->mFSKMod__DOT__unit_data),2);
        vcdp->fullBit(c+9,(vlTOPp->mFSKMod__DOT__unit_valid));
        vcdp->fullBit(c+17,(vlTOPp->unit_data_valid));
        vcdp->fullBus(c+25,(vlTOPp->unit_data_payload),2);
        vcdp->fullBit(c+33,(vlTOPp->mod_iq_valid));
        vcdp->fullBus(c+41,(vlTOPp->mod_iq_payload_cha_i),11);
        vcdp->fullBus(c+49,(vlTOPp->mod_iq_payload_cha_q),11);
        vcdp->fullBit(c+57,(vlTOPp->clk));
        vcdp->fullBit(c+65,(vlTOPp->reset));
        vcdp->fullBus(c+73,(1U),11);
        vcdp->fullBus(c+81,(2U),11);
        vcdp->fullBus(c+89,(4U),11);
        vcdp->fullBus(c+97,(8U),11);
    }
}
