// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VStreamPayloadSplit__Syms.h"


//======================

void VStreamPayloadSplit::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VStreamPayloadSplit* t = (VStreamPayloadSplit*)userthis;
    VStreamPayloadSplit__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VStreamPayloadSplit::traceChgThis(VStreamPayloadSplit__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPayloadSplit* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VStreamPayloadSplit::traceChgThis__2(VStreamPayloadSplit__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPayloadSplit* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->StreamPayloadSplit__DOT__raw_data_fire));
        vcdp->chgBit(c+9,(vlTOPp->StreamPayloadSplit__DOT__split_data_fire));
    }
}

void VStreamPayloadSplit::traceChgThis__3(VStreamPayloadSplit__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPayloadSplit* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+17,(vlTOPp->StreamPayloadSplit__DOT__data_buf),32);
    }
}

void VStreamPayloadSplit::traceChgThis__4(VStreamPayloadSplit__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPayloadSplit* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+25,(vlTOPp->StreamPayloadSplit__DOT__cnt),3);
    }
}

void VStreamPayloadSplit::traceChgThis__5(VStreamPayloadSplit__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPayloadSplit* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+33,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+41,(vlTOPp->raw_data_ready));
        vcdp->chgBus(c+49,(vlTOPp->raw_data_payload),32);
        vcdp->chgBit(c+57,(vlTOPp->split_data_valid));
        vcdp->chgBit(c+65,(vlTOPp->split_data_ready));
        vcdp->chgBus(c+73,(vlTOPp->split_data_payload),8);
        vcdp->chgBit(c+81,(vlTOPp->clk));
        vcdp->chgBit(c+89,(vlTOPp->reset));
    }
}
