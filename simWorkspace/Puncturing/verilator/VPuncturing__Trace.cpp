// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPuncturing__Syms.h"


//======================

void VPuncturing::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VPuncturing* t = (VPuncturing*)userthis;
    VPuncturing__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VPuncturing::traceChgThis(VPuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VPuncturing::traceChgThis__2(VPuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->Puncturing__DOT__raw_data_fragment),16);
    }
}

void VPuncturing::traceChgThis__3(VPuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+9,(vlTOPp->Puncturing__DOT__raw_data_valid_1));
        vcdp->chgBit(c+17,(vlTOPp->Puncturing__DOT__raw_data_last));
    }
}

void VPuncturing::traceChgThis__4(VPuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+25,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+33,(vlTOPp->raw_data_ready));
        vcdp->chgBit(c+41,(vlTOPp->raw_data_payload_last));
        vcdp->chgBus(c+49,(vlTOPp->raw_data_payload_fragment),16);
        vcdp->chgBit(c+57,(vlTOPp->punched_data_valid));
        vcdp->chgBit(c+65,(vlTOPp->punched_data_payload_last));
        vcdp->chgBus(c+73,(vlTOPp->punched_data_payload_fragment),16);
        vcdp->chgBit(c+81,(vlTOPp->clk));
        vcdp->chgBit(c+89,(vlTOPp->reset));
    }
}
