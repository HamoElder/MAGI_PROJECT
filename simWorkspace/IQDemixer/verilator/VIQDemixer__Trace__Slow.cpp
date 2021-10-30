// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIQDemixer__Syms.h"


//======================

void VIQDemixer::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VIQDemixer::traceInit, &VIQDemixer::traceFull, &VIQDemixer::traceChg, this);
}
void VIQDemixer::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VIQDemixer* t = (VIQDemixer*)userthis;
    VIQDemixer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VIQDemixer::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VIQDemixer* t = (VIQDemixer*)userthis;
    VIQDemixer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VIQDemixer::traceInitThis(VIQDemixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VIQDemixer::traceFullThis(VIQDemixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VIQDemixer::traceInitThis__1(VIQDemixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+153,"if_iq_0_valid", false,-1);
        vcdp->declBus(c+161,"if_iq_0_payload", false,-1, 15,0);
        vcdp->declBit(c+169,"carries_iq_valid", false,-1);
        vcdp->declBus(c+177,"carries_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+185,"carries_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+193,"base_iq_0_valid", false,-1);
        vcdp->declBus(c+201,"base_iq_0_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+209,"base_iq_0_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+217,"clk", false,-1);
        vcdp->declBit(c+225,"reset", false,-1);
        vcdp->declBit(c+153,"IQDemixer if_iq_0_valid", false,-1);
        vcdp->declBus(c+161,"IQDemixer if_iq_0_payload", false,-1, 15,0);
        vcdp->declBit(c+169,"IQDemixer carries_iq_valid", false,-1);
        vcdp->declBus(c+177,"IQDemixer carries_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+185,"IQDemixer carries_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+193,"IQDemixer base_iq_0_valid", false,-1);
        vcdp->declBus(c+201,"IQDemixer base_iq_0_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+209,"IQDemixer base_iq_0_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+217,"IQDemixer clk", false,-1);
        vcdp->declBit(c+225,"IQDemixer reset", false,-1);
        vcdp->declBit(c+97,"IQDemixer iQDemixerCore_1_base_iq_valid", false,-1);
        vcdp->declBus(c+105,"IQDemixer iQDemixerCore_1_base_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+113,"IQDemixer iQDemixerCore_1_base_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+153,"IQDemixer iQDemixerCore_1 if_iq_valid", false,-1);
        vcdp->declBus(c+161,"IQDemixer iQDemixerCore_1 if_iq_payload", false,-1, 15,0);
        vcdp->declBit(c+169,"IQDemixer iQDemixerCore_1 carries_iq_valid", false,-1);
        vcdp->declBus(c+177,"IQDemixer iQDemixerCore_1 carries_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+185,"IQDemixer iQDemixerCore_1 carries_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+97,"IQDemixer iQDemixerCore_1 base_iq_valid", false,-1);
        vcdp->declBus(c+105,"IQDemixer iQDemixerCore_1 base_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+113,"IQDemixer iQDemixerCore_1 base_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+217,"IQDemixer iQDemixerCore_1 clk", false,-1);
        vcdp->declBit(c+225,"IQDemixer iQDemixerCore_1 reset", false,-1);
        vcdp->declBus(c+121,"IQDemixer iQDemixerCore_1 if_iq_data", false,-1, 15,0);
        vcdp->declBus(c+129,"IQDemixer iQDemixerCore_1 carries_i_data", false,-1, 15,0);
        vcdp->declBus(c+137,"IQDemixer iQDemixerCore_1 carries_q_data", false,-1, 15,0);
        vcdp->declBit(c+97,"IQDemixer iQDemixerCore_1 base_iq_valid_1", false,-1);
        vcdp->declBus(c+105,"IQDemixer iQDemixerCore_1 base_i_data", false,-1, 15,0);
        vcdp->declBus(c+113,"IQDemixer iQDemixerCore_1 base_q_data", false,-1, 15,0);
        vcdp->declBit(c+145,"IQDemixer iQDemixerCore_1 iq_en", false,-1);
        vcdp->declBit(c+1,"IQDemixer iQDemixerCore_1 when_SInt_l176", false,-1);
        vcdp->declBit(c+9,"IQDemixer iQDemixerCore_1 when_SInt_l186", false,-1);
        vcdp->declBit(c+17,"IQDemixer iQDemixerCore_1 when_UInt_l155", false,-1);
        vcdp->declBit(c+25,"IQDemixer iQDemixerCore_1 when_SInt_l125", false,-1);
        vcdp->declBit(c+33,"IQDemixer iQDemixerCore_1 when_SInt_l126", false,-1);
        vcdp->declBit(c+41,"IQDemixer iQDemixerCore_1 when_SInt_l132", false,-1);
        vcdp->declBit(c+49,"IQDemixer iQDemixerCore_1 when_SInt_l176_1", false,-1);
        vcdp->declBit(c+57,"IQDemixer iQDemixerCore_1 when_SInt_l186_1", false,-1);
        vcdp->declBit(c+65,"IQDemixer iQDemixerCore_1 when_UInt_l155_1", false,-1);
        vcdp->declBit(c+73,"IQDemixer iQDemixerCore_1 when_SInt_l125_1", false,-1);
        vcdp->declBit(c+81,"IQDemixer iQDemixerCore_1 when_SInt_l126_1", false,-1);
        vcdp->declBit(c+89,"IQDemixer iQDemixerCore_1 when_SInt_l132_1", false,-1);
    }
}

void VIQDemixer::traceFullThis__1(VIQDemixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,((1U & (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data 
                                  >> 0x1fU))));
        vcdp->fullBit(c+9,((0U != (0xffffU & vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data))));
        vcdp->fullBit(c+17,((0U != (0xffffU & vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data))));
        vcdp->fullBit(c+25,((1U & (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data_1 
                                   >> 0x10U))));
        vcdp->fullBit(c+33,((3U != (3U & (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data_1 
                                          >> 0xfU)))));
        vcdp->fullBit(c+41,((1U & (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data_1 
                                   >> 0xfU))));
        vcdp->fullBit(c+49,((1U & (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data 
                                   >> 0x1fU))));
        vcdp->fullBit(c+57,((0U != (0xffffU & vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data))));
        vcdp->fullBit(c+65,((0U != (0xffffU & vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data))));
        vcdp->fullBit(c+73,((1U & (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data_1 
                                   >> 0x10U))));
        vcdp->fullBit(c+81,((3U != (3U & (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data_1 
                                          >> 0xfU)))));
        vcdp->fullBit(c+89,((1U & (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data_1 
                                   >> 0xfU))));
        vcdp->fullBit(c+97,(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__base_iq_valid_1));
        vcdp->fullBus(c+105,(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__base_i_data),16);
        vcdp->fullBus(c+113,(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__base_q_data),16);
        vcdp->fullBus(c+121,(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__if_iq_data),16);
        vcdp->fullBus(c+129,(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__carries_i_data),16);
        vcdp->fullBus(c+137,(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__carries_q_data),16);
        vcdp->fullBit(c+145,(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__iq_en));
        vcdp->fullBit(c+153,(vlTOPp->if_iq_0_valid));
        vcdp->fullBus(c+161,(vlTOPp->if_iq_0_payload),16);
        vcdp->fullBit(c+169,(vlTOPp->carries_iq_valid));
        vcdp->fullBus(c+177,(vlTOPp->carries_iq_payload_cha_i),16);
        vcdp->fullBus(c+185,(vlTOPp->carries_iq_payload_cha_q),16);
        vcdp->fullBit(c+193,(vlTOPp->base_iq_0_valid));
        vcdp->fullBus(c+201,(vlTOPp->base_iq_0_payload_cha_i),16);
        vcdp->fullBus(c+209,(vlTOPp->base_iq_0_payload_cha_q),16);
        vcdp->fullBit(c+217,(vlTOPp->clk));
        vcdp->fullBit(c+225,(vlTOPp->reset));
    }
}
