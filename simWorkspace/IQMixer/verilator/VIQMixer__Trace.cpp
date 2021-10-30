// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIQMixer__Syms.h"


//======================

void VIQMixer::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VIQMixer* t = (VIQMixer*)userthis;
    VIQMixer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VIQMixer::traceChgThis(VIQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VIQMixer::traceChgThis__2(VIQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__if_iq_valid_1));
        vcdp->chgBus(c+9,(vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__if_iq_data),32);
        vcdp->chgBus(c+17,(vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__base_i_data),16);
        vcdp->chgBus(c+25,(vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__base_q_data),16);
        vcdp->chgBus(c+33,(vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__carrier_i_data),16);
        vcdp->chgBus(c+41,(vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__carrier_q_data),16);
        vcdp->chgBus(c+49,(vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__if_i_data),32);
        vcdp->chgBus(c+57,(vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__if_q_data),32);
        vcdp->chgBit(c+65,(vlTOPp->IQMixer__DOT__iQMixerCore_1__DOT__iq_en));
    }
}

void VIQMixer::traceChgThis__3(VIQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+73,(vlTOPp->base_iq_0_valid));
        vcdp->chgBus(c+81,(vlTOPp->base_iq_0_payload_cha_i),16);
        vcdp->chgBus(c+89,(vlTOPp->base_iq_0_payload_cha_q),16);
        vcdp->chgBit(c+97,(vlTOPp->carries_iq_valid));
        vcdp->chgBus(c+105,(vlTOPp->carries_iq_payload_cha_i),16);
        vcdp->chgBus(c+113,(vlTOPp->carries_iq_payload_cha_q),16);
        vcdp->chgBit(c+121,(vlTOPp->if_iq_0_valid));
        vcdp->chgBus(c+129,(vlTOPp->if_iq_0_payload),32);
        vcdp->chgBit(c+137,(vlTOPp->clk));
        vcdp->chgBit(c+145,(vlTOPp->reset));
    }
}
