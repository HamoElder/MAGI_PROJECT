// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIQDemixer__Syms.h"


//======================

void VIQDemixer::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VIQDemixer* t = (VIQDemixer*)userthis;
    VIQDemixer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VIQDemixer::traceChgThis(VIQDemixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VIQDemixer::traceChgThis__2(VIQDemixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,((1U & (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data 
                                 >> 0x1fU))));
        vcdp->chgBit(c+9,((0U != (0xffffU & vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data))));
        vcdp->chgBit(c+17,((0U != (0xffffU & vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data))));
        vcdp->chgBit(c+25,((1U & (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data_1 
                                  >> 0x10U))));
        vcdp->chgBit(c+33,((3U != (3U & (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data_1 
                                         >> 0xfU)))));
        vcdp->chgBit(c+41,((1U & (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_i_data_1 
                                  >> 0xfU))));
        vcdp->chgBit(c+49,((1U & (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data 
                                  >> 0x1fU))));
        vcdp->chgBit(c+57,((0U != (0xffffU & vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data))));
        vcdp->chgBit(c+65,((0U != (0xffffU & vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data))));
        vcdp->chgBit(c+73,((1U & (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data_1 
                                  >> 0x10U))));
        vcdp->chgBit(c+81,((3U != (3U & (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data_1 
                                         >> 0xfU)))));
        vcdp->chgBit(c+89,((1U & (vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT___zz_base_q_data_1 
                                  >> 0xfU))));
    }
}

void VIQDemixer::traceChgThis__3(VIQDemixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+97,(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__base_iq_valid_1));
        vcdp->chgBus(c+105,(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__base_i_data),16);
        vcdp->chgBus(c+113,(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__base_q_data),16);
        vcdp->chgBus(c+121,(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__if_iq_data),16);
        vcdp->chgBus(c+129,(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__carries_i_data),16);
        vcdp->chgBus(c+137,(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__carries_q_data),16);
        vcdp->chgBit(c+145,(vlTOPp->IQDemixer__DOT__iQDemixerCore_1__DOT__iq_en));
    }
}

void VIQDemixer::traceChgThis__4(VIQDemixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+153,(vlTOPp->if_iq_0_valid));
        vcdp->chgBus(c+161,(vlTOPp->if_iq_0_payload),16);
        vcdp->chgBit(c+169,(vlTOPp->carries_iq_valid));
        vcdp->chgBus(c+177,(vlTOPp->carries_iq_payload_cha_i),16);
        vcdp->chgBus(c+185,(vlTOPp->carries_iq_payload_cha_q),16);
        vcdp->chgBit(c+193,(vlTOPp->base_iq_0_valid));
        vcdp->chgBus(c+201,(vlTOPp->base_iq_0_payload_cha_i),16);
        vcdp->chgBus(c+209,(vlTOPp->base_iq_0_payload_cha_q),16);
        vcdp->chgBit(c+217,(vlTOPp->clk));
        vcdp->chgBit(c+225,(vlTOPp->reset));
    }
}
