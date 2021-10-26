// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VStreamPayloadUnite__Syms.h"


//======================

void VStreamPayloadUnite::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VStreamPayloadUnite::traceInit, &VStreamPayloadUnite::traceFull, &VStreamPayloadUnite::traceChg, this);
}
void VStreamPayloadUnite::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VStreamPayloadUnite* t = (VStreamPayloadUnite*)userthis;
    VStreamPayloadUnite__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VStreamPayloadUnite::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VStreamPayloadUnite* t = (VStreamPayloadUnite*)userthis;
    VStreamPayloadUnite__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VStreamPayloadUnite::traceInitThis(VStreamPayloadUnite__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPayloadUnite* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VStreamPayloadUnite::traceFullThis(VStreamPayloadUnite__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPayloadUnite* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VStreamPayloadUnite::traceInitThis__1(VStreamPayloadUnite__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPayloadUnite* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+25,"raw_data_valid", false,-1);
        vcdp->declBit(c+33,"raw_data_ready", false,-1);
        vcdp->declBus(c+41,"raw_data_payload", false,-1, 7,0);
        vcdp->declBit(c+49,"unite_data_valid", false,-1);
        vcdp->declBit(c+57,"unite_data_ready", false,-1);
        vcdp->declBus(c+65,"unite_data_payload", false,-1, 31,0);
        vcdp->declBit(c+73,"clk", false,-1);
        vcdp->declBit(c+81,"reset", false,-1);
        vcdp->declBit(c+25,"StreamPayloadUnite raw_data_valid", false,-1);
        vcdp->declBit(c+33,"StreamPayloadUnite raw_data_ready", false,-1);
        vcdp->declBus(c+41,"StreamPayloadUnite raw_data_payload", false,-1, 7,0);
        vcdp->declBit(c+49,"StreamPayloadUnite unite_data_valid", false,-1);
        vcdp->declBit(c+57,"StreamPayloadUnite unite_data_ready", false,-1);
        vcdp->declBus(c+65,"StreamPayloadUnite unite_data_payload", false,-1, 31,0);
        vcdp->declBit(c+73,"StreamPayloadUnite clk", false,-1);
        vcdp->declBit(c+81,"StreamPayloadUnite reset", false,-1);
        vcdp->declBus(c+17,"StreamPayloadUnite cnt", false,-1, 2,0);
        vcdp->declBus(c+9,"StreamPayloadUnite data_buf", false,-1, 31,0);
        vcdp->declBit(c+1,"StreamPayloadUnite raw_data_fire", false,-1);
        vcdp->declBit(c+89,"StreamPayloadUnite unite_data_fire", false,-1);
    }
}

void VStreamPayloadUnite::traceFullThis__1(VStreamPayloadUnite__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPayloadUnite* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->StreamPayloadUnite__DOT__raw_data_fire));
        vcdp->fullBus(c+9,(vlTOPp->StreamPayloadUnite__DOT__data_buf),32);
        vcdp->fullBus(c+17,(vlTOPp->StreamPayloadUnite__DOT__cnt),3);
        vcdp->fullBit(c+25,(vlTOPp->raw_data_valid));
        vcdp->fullBit(c+33,(vlTOPp->raw_data_ready));
        vcdp->fullBus(c+41,(vlTOPp->raw_data_payload),8);
        vcdp->fullBit(c+49,(vlTOPp->unite_data_valid));
        vcdp->fullBit(c+57,(vlTOPp->unite_data_ready));
        vcdp->fullBus(c+65,(vlTOPp->unite_data_payload),32);
        vcdp->fullBit(c+73,(vlTOPp->clk));
        vcdp->fullBit(c+81,(vlTOPp->reset));
        vcdp->fullBit(c+89,(((IData)(vlTOPp->unite_data_valid) 
                             & (IData)(vlTOPp->unite_data_ready))));
    }
}
