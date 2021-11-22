// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDePuncturing__Syms.h"


//======================

void VDePuncturing::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VDePuncturing* t = (VDePuncturing*)userthis;
    VDePuncturing__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VDePuncturing::traceChgThis(VDePuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDePuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VDePuncturing::traceChgThis__2(VDePuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDePuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->DePuncturing__DOT__when_DePuncturing_l43));
    }
}

void VDePuncturing::traceChgThis__3(VDePuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDePuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+9,(vlTOPp->DePuncturing__DOT__raw_data_fire));
        vcdp->chgBit(c+17,(vlTOPp->DePuncturing__DOT__de_punched_data_fire));
    }
}

void VDePuncturing::traceChgThis__4(VDePuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDePuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+25,(vlTOPp->DePuncturing__DOT__raw_data_fragment),16);
    }
}

void VDePuncturing::traceChgThis__5(VDePuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDePuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+33,(vlTOPp->DePuncturing__DOT__mask_cnt));
        vcdp->chgBus(c+41,(vlTOPp->DePuncturing__DOT__cnt),4);
        vcdp->chgBit(c+49,(vlTOPp->DePuncturing__DOT__raw_data_last));
    }
}

void VDePuncturing::traceChgThis__6(VDePuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDePuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+57,(vlTOPp->dummy_bits));
        vcdp->chgBit(c+65,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+73,(vlTOPp->raw_data_ready));
        vcdp->chgBit(c+81,(vlTOPp->raw_data_payload_last));
        vcdp->chgBus(c+89,(vlTOPp->raw_data_payload_fragment),16);
        vcdp->chgBit(c+97,(vlTOPp->de_punched_data_valid));
        vcdp->chgBit(c+105,(vlTOPp->de_punched_data_ready));
        vcdp->chgBit(c+113,(vlTOPp->de_punched_data_payload_last));
        vcdp->chgBus(c+121,(vlTOPp->de_punched_data_payload_fragment),2);
        vcdp->chgBit(c+129,(vlTOPp->clk));
        vcdp->chgBit(c+137,(vlTOPp->reset));
    }
}
