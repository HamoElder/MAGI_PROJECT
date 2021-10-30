// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VmQAMMod__Syms.h"


//======================

void VmQAMMod::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VmQAMMod::traceInit, &VmQAMMod::traceFull, &VmQAMMod::traceChg, this);
}
void VmQAMMod::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VmQAMMod* t = (VmQAMMod*)userthis;
    VmQAMMod__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VmQAMMod::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VmQAMMod* t = (VmQAMMod*)userthis;
    VmQAMMod__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VmQAMMod::traceInitThis(VmQAMMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VmQAMMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VmQAMMod::traceFullThis(VmQAMMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VmQAMMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VmQAMMod::traceInitThis__1(VmQAMMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VmQAMMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+33,"unit_data_valid", false,-1);
        vcdp->declBus(c+41,"unit_data_payload", false,-1, 3,0);
        vcdp->declBit(c+49,"mod_iq_valid", false,-1);
        vcdp->declBus(c+57,"mod_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+65,"mod_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+73,"clk", false,-1);
        vcdp->declBit(c+81,"reset", false,-1);
        vcdp->declBit(c+33,"mQAMMod unit_data_valid", false,-1);
        vcdp->declBus(c+41,"mQAMMod unit_data_payload", false,-1, 3,0);
        vcdp->declBit(c+49,"mQAMMod mod_iq_valid", false,-1);
        vcdp->declBus(c+57,"mQAMMod mod_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+65,"mQAMMod mod_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+73,"mQAMMod clk", false,-1);
        vcdp->declBit(c+81,"mQAMMod reset", false,-1);
        vcdp->declBus(c+89,"mQAMMod codeTableI_0", false,-1, 15,0);
        vcdp->declBus(c+97,"mQAMMod codeTableI_1", false,-1, 15,0);
        vcdp->declBus(c+105,"mQAMMod codeTableI_2", false,-1, 15,0);
        vcdp->declBus(c+113,"mQAMMod codeTableI_3", false,-1, 15,0);
        vcdp->declBus(c+89,"mQAMMod codeTableQ_0", false,-1, 15,0);
        vcdp->declBus(c+97,"mQAMMod codeTableQ_1", false,-1, 15,0);
        vcdp->declBus(c+105,"mQAMMod codeTableQ_2", false,-1, 15,0);
        vcdp->declBus(c+113,"mQAMMod codeTableQ_3", false,-1, 15,0);
        vcdp->declBus(c+1,"mQAMMod unit_data", false,-1, 3,0);
        vcdp->declBit(c+9,"mQAMMod unit_valid", false,-1);
        vcdp->declBus(c+17,"mQAMMod data_div_0", false,-1, 1,0);
        vcdp->declBus(c+25,"mQAMMod data_div_1", false,-1, 1,0);
    }
}

void VmQAMMod::traceFullThis__1(VmQAMMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VmQAMMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->mQAMMod__DOT__unit_data),4);
        vcdp->fullBit(c+9,(vlTOPp->mQAMMod__DOT__unit_valid));
        vcdp->fullBus(c+17,((3U & (IData)(vlTOPp->mQAMMod__DOT__unit_data))),2);
        vcdp->fullBus(c+25,((3U & ((IData)(vlTOPp->mQAMMod__DOT__unit_data) 
                                   >> 2U))),2);
        vcdp->fullBit(c+33,(vlTOPp->unit_data_valid));
        vcdp->fullBus(c+41,(vlTOPp->unit_data_payload),4);
        vcdp->fullBit(c+49,(vlTOPp->mod_iq_valid));
        vcdp->fullBus(c+57,(vlTOPp->mod_iq_payload_cha_i),16);
        vcdp->fullBus(c+65,(vlTOPp->mod_iq_payload_cha_q),16);
        vcdp->fullBit(c+73,(vlTOPp->clk));
        vcdp->fullBit(c+81,(vlTOPp->reset));
        vcdp->fullBus(c+89,(0xc34aU),16);
        vcdp->fullBus(c+97,(0xd4a3U),16);
        vcdp->fullBus(c+105,(0xf754U),16);
        vcdp->fullBus(c+113,(0xe5fbU),16);
    }
}
