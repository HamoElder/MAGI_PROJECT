// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VmPSKMod__Syms.h"


//======================

void VmPSKMod::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VmPSKMod::traceInit, &VmPSKMod::traceFull, &VmPSKMod::traceChg, this);
}
void VmPSKMod::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VmPSKMod* t = (VmPSKMod*)userthis;
    VmPSKMod__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VmPSKMod::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VmPSKMod* t = (VmPSKMod*)userthis;
    VmPSKMod__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VmPSKMod::traceInitThis(VmPSKMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VmPSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VmPSKMod::traceFullThis(VmPSKMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VmPSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VmPSKMod::traceInitThis__1(VmPSKMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VmPSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+33,"unit_data_valid", false,-1);
        vcdp->declBus(c+41,"unit_data_payload", false,-1, 1,0);
        vcdp->declBit(c+49,"mod_iq_valid", false,-1);
        vcdp->declBus(c+57,"mod_iq_payload_cha_i", false,-1, 7,0);
        vcdp->declBus(c+65,"mod_iq_payload_cha_q", false,-1, 7,0);
        vcdp->declBit(c+73,"clk", false,-1);
        vcdp->declBit(c+81,"reset", false,-1);
        vcdp->declBit(c+33,"mPSKMod unit_data_valid", false,-1);
        vcdp->declBus(c+41,"mPSKMod unit_data_payload", false,-1, 1,0);
        vcdp->declBit(c+49,"mPSKMod mod_iq_valid", false,-1);
        vcdp->declBus(c+57,"mPSKMod mod_iq_payload_cha_i", false,-1, 7,0);
        vcdp->declBus(c+65,"mPSKMod mod_iq_payload_cha_q", false,-1, 7,0);
        vcdp->declBit(c+73,"mPSKMod clk", false,-1);
        vcdp->declBit(c+81,"mPSKMod reset", false,-1);
        vcdp->declBus(c+89,"mPSKMod codeTable_0", false,-1, 15,0);
        vcdp->declBus(c+97,"mPSKMod codeTable_1", false,-1, 15,0);
        vcdp->declBus(c+105,"mPSKMod codeTable_2", false,-1, 15,0);
        vcdp->declBus(c+113,"mPSKMod codeTable_3", false,-1, 15,0);
        vcdp->declBus(c+17,"mPSKMod unit_data", false,-1, 1,0);
        vcdp->declBit(c+25,"mPSKMod unit_valid", false,-1);
        vcdp->declBus(c+1,"mPSKMod mod_iq_0", false,-1, 7,0);
        vcdp->declBus(c+9,"mPSKMod mod_iq_1", false,-1, 7,0);
    }
}

void VmPSKMod::traceFullThis__1(VmPSKMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VmPSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,((0xffU & (IData)(vlTOPp->mPSKMod__DOT___zz___05Fzz_mod_iq_0))),8);
        vcdp->fullBus(c+9,((0xffU & ((IData)(vlTOPp->mPSKMod__DOT___zz___05Fzz_mod_iq_0) 
                                     >> 8U))),8);
        vcdp->fullBus(c+17,(vlTOPp->mPSKMod__DOT__unit_data),2);
        vcdp->fullBit(c+25,(vlTOPp->mPSKMod__DOT__unit_valid));
        vcdp->fullBit(c+33,(vlTOPp->unit_data_valid));
        vcdp->fullBus(c+41,(vlTOPp->unit_data_payload),2);
        vcdp->fullBit(c+49,(vlTOPp->mod_iq_valid));
        vcdp->fullBus(c+57,(vlTOPp->mod_iq_payload_cha_i),8);
        vcdp->fullBus(c+65,(vlTOPp->mod_iq_payload_cha_q),8);
        vcdp->fullBit(c+73,(vlTOPp->clk));
        vcdp->fullBit(c+81,(vlTOPp->reset));
        vcdp->fullBus(c+89,(0xa7a7U),16);
        vcdp->fullBus(c+97,(0xa759U),16);
        vcdp->fullBus(c+105,(0x59a7U),16);
        vcdp->fullBus(c+113,(0x5959U),16);
    }
}
