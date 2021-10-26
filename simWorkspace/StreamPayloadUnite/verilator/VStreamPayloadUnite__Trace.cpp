// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VStreamPayloadUnite__Syms.h"


//======================

void VStreamPayloadUnite::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VStreamPayloadUnite* t = (VStreamPayloadUnite*)userthis;
    VStreamPayloadUnite__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VStreamPayloadUnite::traceChgThis(VStreamPayloadUnite__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPayloadUnite* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VStreamPayloadUnite::traceChgThis__2(VStreamPayloadUnite__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPayloadUnite* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->StreamPayloadUnite__DOT__raw_data_fire));
    }
}

void VStreamPayloadUnite::traceChgThis__3(VStreamPayloadUnite__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPayloadUnite* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+9,(vlTOPp->StreamPayloadUnite__DOT__data_buf),32);
    }
}

void VStreamPayloadUnite::traceChgThis__4(VStreamPayloadUnite__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPayloadUnite* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+17,(vlTOPp->StreamPayloadUnite__DOT__cnt),3);
    }
}

void VStreamPayloadUnite::traceChgThis__5(VStreamPayloadUnite__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPayloadUnite* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+25,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+33,(vlTOPp->raw_data_ready));
        vcdp->chgBus(c+41,(vlTOPp->raw_data_payload),8);
        vcdp->chgBit(c+49,(vlTOPp->unite_data_valid));
        vcdp->chgBit(c+57,(vlTOPp->unite_data_ready));
        vcdp->chgBus(c+65,(vlTOPp->unite_data_payload),32);
        vcdp->chgBit(c+73,(vlTOPp->clk));
        vcdp->chgBit(c+81,(vlTOPp->reset));
        vcdp->chgBit(c+89,(((IData)(vlTOPp->unite_data_valid) 
                            & (IData)(vlTOPp->unite_data_ready))));
    }
}
