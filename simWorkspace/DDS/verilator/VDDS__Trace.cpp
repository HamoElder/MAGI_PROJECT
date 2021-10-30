// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDDS__Syms.h"


//======================

void VDDS::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VDDS* t = (VDDS*)userthis;
    VDDS__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VDDS::traceChgThis(VDDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VDDS::traceChgThis__2(VDDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->DDS__DOT__module_en));
    }
}

void VDDS::traceChgThis__3(VDDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+9,(vlTOPp->DDS__DOT__valid_o_buf));
    }
}

void VDDS::traceChgThis__4(VDDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+17,(vlTOPp->DDS__DOT__phase_cursor),10);
    }
}

void VDDS::traceChgThis__5(VDDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+25,(vlTOPp->data_valid));
        vcdp->chgBus(c+33,(vlTOPp->data_payload),16);
        vcdp->chgBit(c+41,(vlTOPp->phase_valid));
        vcdp->chgBus(c+49,(vlTOPp->phase_payload),10);
        vcdp->chgBit(c+57,(vlTOPp->channel_en));
        vcdp->chgBit(c+65,(vlTOPp->sync_en));
        vcdp->chgBus(c+73,(vlTOPp->phase_limit),10);
        vcdp->chgBus(c+81,(vlTOPp->phase_offset),10);
        vcdp->chgBus(c+89,(vlTOPp->phase_inc),10);
        vcdp->chgBit(c+97,(vlTOPp->clk));
        vcdp->chgBit(c+105,(vlTOPp->reset));
        vcdp->chgBit(c+113,(((IData)(vlTOPp->phase_limit) 
                             <= (IData)(vlTOPp->DDS__DOT__phase_cursor))));
    }
}
