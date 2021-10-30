// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDDS__Syms.h"


//======================

void VDDS::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VDDS::traceInit, &VDDS::traceFull, &VDDS::traceChg, this);
}
void VDDS::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VDDS* t = (VDDS*)userthis;
    VDDS__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VDDS::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VDDS* t = (VDDS*)userthis;
    VDDS__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VDDS::traceInitThis(VDDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VDDS::traceFullThis(VDDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VDDS::traceInitThis__1(VDDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+25,"data_valid", false,-1);
        vcdp->declBus(c+33,"data_payload", false,-1, 15,0);
        vcdp->declBit(c+41,"phase_valid", false,-1);
        vcdp->declBus(c+49,"phase_payload", false,-1, 9,0);
        vcdp->declBit(c+57,"channel_en", false,-1);
        vcdp->declBit(c+65,"sync_en", false,-1);
        vcdp->declBus(c+73,"phase_limit", false,-1, 9,0);
        vcdp->declBus(c+81,"phase_offset", false,-1, 9,0);
        vcdp->declBus(c+89,"phase_inc", false,-1, 9,0);
        vcdp->declBit(c+97,"clk", false,-1);
        vcdp->declBit(c+105,"reset", false,-1);
        vcdp->declBit(c+25,"DDS data_valid", false,-1);
        vcdp->declBus(c+33,"DDS data_payload", false,-1, 15,0);
        vcdp->declBit(c+41,"DDS phase_valid", false,-1);
        vcdp->declBus(c+49,"DDS phase_payload", false,-1, 9,0);
        vcdp->declBit(c+57,"DDS channel_en", false,-1);
        vcdp->declBit(c+65,"DDS sync_en", false,-1);
        vcdp->declBus(c+73,"DDS phase_limit", false,-1, 9,0);
        vcdp->declBus(c+81,"DDS phase_offset", false,-1, 9,0);
        vcdp->declBus(c+89,"DDS phase_inc", false,-1, 9,0);
        vcdp->declBit(c+97,"DDS clk", false,-1);
        vcdp->declBit(c+105,"DDS reset", false,-1);
        vcdp->declBit(c+1,"DDS module_en", false,-1);
        vcdp->declBus(c+17,"DDS phase_cursor", false,-1, 9,0);
        vcdp->declBit(c+113,"DDS when_DDS_l53", false,-1);
        vcdp->declBit(c+9,"DDS valid_o_buf", false,-1);
    }
}

void VDDS::traceFullThis__1(VDDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->DDS__DOT__module_en));
        vcdp->fullBit(c+9,(vlTOPp->DDS__DOT__valid_o_buf));
        vcdp->fullBus(c+17,(vlTOPp->DDS__DOT__phase_cursor),10);
        vcdp->fullBit(c+25,(vlTOPp->data_valid));
        vcdp->fullBus(c+33,(vlTOPp->data_payload),16);
        vcdp->fullBit(c+41,(vlTOPp->phase_valid));
        vcdp->fullBus(c+49,(vlTOPp->phase_payload),10);
        vcdp->fullBit(c+57,(vlTOPp->channel_en));
        vcdp->fullBit(c+65,(vlTOPp->sync_en));
        vcdp->fullBus(c+73,(vlTOPp->phase_limit),10);
        vcdp->fullBus(c+81,(vlTOPp->phase_offset),10);
        vcdp->fullBus(c+89,(vlTOPp->phase_inc),10);
        vcdp->fullBit(c+97,(vlTOPp->clk));
        vcdp->fullBit(c+105,(vlTOPp->reset));
        vcdp->fullBit(c+113,(((IData)(vlTOPp->phase_limit) 
                              <= (IData)(vlTOPp->DDS__DOT__phase_cursor))));
    }
}
