// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIQDemod__Syms.h"


//======================

void VIQDemod::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VIQDemod::traceInit, &VIQDemod::traceFull, &VIQDemod::traceChg, this);
}
void VIQDemod::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VIQDemod* t = (VIQDemod*)userthis;
    VIQDemod__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VIQDemod::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VIQDemod* t = (VIQDemod*)userthis;
    VIQDemod__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VIQDemod::traceInitThis(VIQDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIQDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VIQDemod::traceFullThis(VIQDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIQDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VIQDemod::traceInitThis__1(VIQDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIQDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+97,"unit_data_valid", false,-1);
        vcdp->declBus(c+105,"unit_data_payload", false,-1, 7,0);
        vcdp->declBit(c+113,"mod_iq_valid", false,-1);
        vcdp->declBus(c+121,"mod_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+129,"mod_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+137,"clk", false,-1);
        vcdp->declBit(c+145,"reset", false,-1);
        vcdp->declBit(c+97,"IQDemod unit_data_valid", false,-1);
        vcdp->declBus(c+105,"IQDemod unit_data_payload", false,-1, 7,0);
        vcdp->declBit(c+113,"IQDemod mod_iq_valid", false,-1);
        vcdp->declBus(c+121,"IQDemod mod_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+129,"IQDemod mod_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+137,"IQDemod clk", false,-1);
        vcdp->declBit(c+145,"IQDemod reset", false,-1);
        vcdp->declBus(c+25,"IQDemod demod_data_i", false,-1, 15,0);
        vcdp->declBit(c+33,"IQDemod demod_valid_i", false,-1);
        vcdp->declBus(c+41,"IQDemod demod_data_q", false,-1, 15,0);
        vcdp->declBit(c+49,"IQDemod demod_valid_q", false,-1);
        vcdp->declBus(c+57,"IQDemod comp_cmp_i", false,-1, 0,0);
        vcdp->declBus(c+65,"IQDemod comp_cmp_q", false,-1, 0,0);
        vcdp->declBus(c+73,"IQDemod compTable_i", false,-1, 0,0);
        vcdp->declBus(c+81,"IQDemod codeTable_q", false,-1, 0,0);
        vcdp->declBit(c+89,"IQDemod demod_valid", false,-1);
        vcdp->declBus(c+9,"IQDemod unit_data_i", false,-1, 0,0);
        vcdp->declBus(c+17,"IQDemod unit_data_q", false,-1, 0,0);
        vcdp->declBit(c+1,"IQDemod unit_valid", false,-1);
    }
}

void VIQDemod::traceFullThis__1(VIQDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIQDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->IQDemod__DOT__unit_valid));
        vcdp->fullBit(c+9,(vlTOPp->IQDemod__DOT__unit_data_i));
        vcdp->fullBit(c+17,(vlTOPp->IQDemod__DOT__unit_data_q));
        vcdp->fullBus(c+25,(vlTOPp->IQDemod__DOT__demod_data_i),16);
        vcdp->fullBit(c+33,(vlTOPp->IQDemod__DOT__demod_valid_i));
        vcdp->fullBus(c+41,(vlTOPp->IQDemod__DOT__demod_data_q),16);
        vcdp->fullBit(c+49,(vlTOPp->IQDemod__DOT__demod_valid_q));
        vcdp->fullBit(c+57,(VL_LTS_III(1,16,16, 0U, (IData)(vlTOPp->IQDemod__DOT__demod_data_i))));
        vcdp->fullBit(c+65,(VL_LTS_III(1,16,16, 0U, (IData)(vlTOPp->IQDemod__DOT__demod_data_q))));
        vcdp->fullBit(c+73,(vlTOPp->IQDemod__DOT__compTable_i));
        vcdp->fullBit(c+81,(vlTOPp->IQDemod__DOT__codeTable_q));
        vcdp->fullBit(c+89,(vlTOPp->IQDemod__DOT__demod_valid));
        vcdp->fullBit(c+97,(vlTOPp->unit_data_valid));
        vcdp->fullBus(c+105,(vlTOPp->unit_data_payload),8);
        vcdp->fullBit(c+113,(vlTOPp->mod_iq_valid));
        vcdp->fullBus(c+121,(vlTOPp->mod_iq_payload_cha_i),16);
        vcdp->fullBus(c+129,(vlTOPp->mod_iq_payload_cha_q),16);
        vcdp->fullBit(c+137,(vlTOPp->clk));
        vcdp->fullBit(c+145,(vlTOPp->reset));
    }
}
