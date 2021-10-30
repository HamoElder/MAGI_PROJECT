// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIQMixer__Syms.h"


//======================

void VIQMixer::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VIQMixer::traceInit, &VIQMixer::traceFull, &VIQMixer::traceChg, this);
}
void VIQMixer::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VIQMixer* t = (VIQMixer*)userthis;
    VIQMixer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VIQMixer::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VIQMixer* t = (VIQMixer*)userthis;
    VIQMixer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VIQMixer::traceInitThis(VIQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VIQMixer::traceFullThis(VIQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VIQMixer::traceInitThis__1(VIQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+73,"base_iq_0_valid", false,-1);
        vcdp->declBus(c+81,"base_iq_0_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+89,"base_iq_0_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+97,"carries_iq_valid", false,-1);
        vcdp->declBus(c+105,"carries_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+113,"carries_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+121,"if_iq_0_valid", false,-1);
        vcdp->declBus(c+129,"if_iq_0_payload", false,-1, 31,0);
        vcdp->declBit(c+137,"clk", false,-1);
        vcdp->declBit(c+145,"reset", false,-1);
        vcdp->declBit(c+73,"IQMixer base_iq_0_valid", false,-1);
        vcdp->declBus(c+81,"IQMixer base_iq_0_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+89,"IQMixer base_iq_0_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+97,"IQMixer carries_iq_valid", false,-1);
        vcdp->declBus(c+105,"IQMixer carries_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+113,"IQMixer carries_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+121,"IQMixer if_iq_0_valid", false,-1);
        vcdp->declBus(c+129,"IQMixer if_iq_0_payload", false,-1, 31,0);
        vcdp->declBit(c+137,"IQMixer clk", false,-1);
        vcdp->declBit(c+145,"IQMixer reset", false,-1);
        vcdp->declBit(c+1,"IQMixer iQMixerCore_1_if_iq_valid", false,-1);
        vcdp->declBus(c+9,"IQMixer iQMixerCore_1_if_iq_payload", false,-1, 31,0);
        vcdp->declBit(c+73,"IQMixer iQMixerCore_1 base_iq_valid", false,-1);
        vcdp->declBus(c+81,"IQMixer iQMixerCore_1 base_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+89,"IQMixer iQMixerCore_1 base_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+97,"IQMixer iQMixerCore_1 carrier_iq_valid", false,-1);
        vcdp->declBus(c+105,"IQMixer iQMixerCore_1 carrier_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+113,"IQMixer iQMixerCore_1 carrier_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1,"IQMixer iQMixerCore_1 if_iq_valid", false,-1);
        vcdp->declBus(c+9,"IQMixer iQMixerCore_1 if_iq_payload", false,-1, 31,0);
        vcdp->declBit(c+137,"IQMixer iQMixerCore_1 clk", false,-1);
        vcdp->declBit(c+145,"IQMixer iQMixerCore_1 reset", false,-1);
        vcdp->declBus(c+17,"IQMixer iQMixerCore_1 base_i_data", false,-1, 15,0);
        vcdp->declBus(c+25,"IQMixer iQMixerCore_1 base_q_data", false,-1, 15,0);
        vcdp->declBus(c+33,"IQMixer iQMixerCore_1 carrier_i_data", false,-1, 15,0);
        vcdp->declBus(c+41,"IQMixer iQMixerCore_1 carrier_q_data", false,-1, 15,0);
        vcdp->declBit(c+1,"IQMixer iQMixerCore_1 if_iq_valid_1", false,-1);
        vcdp->declBus(c+49,"IQMixer iQMixerCore_1 if_i_data", false,-1, 31,0);
        vcdp->declBus(c+57,"IQMixer iQMixerCore_1 if_q_data", false,-1, 31,0);
        vcdp->declBus(c+9,"IQMixer iQMixerCore_1 if_iq_data", false,-1, 31,0);
        vcdp->declBit(c+65,"IQMixer iQMixerCore_1 iq_en", false,-1);
    }
}

void VIQMixer::traceFullThis__1(VIQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__if_iq_valid_1));
        vcdp->fullBus(c+9,(vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__if_iq_data),32);
        vcdp->fullBus(c+17,(vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__base_i_data),16);
        vcdp->fullBus(c+25,(vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__base_q_data),16);
        vcdp->fullBus(c+33,(vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__carrier_i_data),16);
        vcdp->fullBus(c+41,(vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__carrier_q_data),16);
        vcdp->fullBus(c+49,(vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__if_i_data),32);
        vcdp->fullBus(c+57,(vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__if_q_data),32);
        vcdp->fullBit(c+65,(vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__iq_en));
        vcdp->fullBit(c+73,(vlTOPp->base_iq_0_valid));
        vcdp->fullBus(c+81,(vlTOPp->base_iq_0_payload_cha_i),16);
        vcdp->fullBus(c+89,(vlTOPp->base_iq_0_payload_cha_q),16);
        vcdp->fullBit(c+97,(vlTOPp->carries_iq_valid));
        vcdp->fullBus(c+105,(vlTOPp->carries_iq_payload_cha_i),16);
        vcdp->fullBus(c+113,(vlTOPp->carries_iq_payload_cha_q),16);
        vcdp->fullBit(c+121,(vlTOPp->if_iq_0_valid));
        vcdp->fullBus(c+129,(vlTOPp->if_iq_0_payload),32);
        vcdp->fullBit(c+137,(vlTOPp->clk));
        vcdp->fullBit(c+145,(vlTOPp->reset));
    }
}
