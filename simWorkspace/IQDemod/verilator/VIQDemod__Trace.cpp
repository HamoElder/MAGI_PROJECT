// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIQDemod__Syms.h"


//======================

void VIQDemod::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VIQDemod* t = (VIQDemod*)userthis;
    VIQDemod__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VIQDemod::traceChgThis(VIQDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIQDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VIQDemod::traceChgThis__2(VIQDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIQDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->IQDemod__DOT__unit_valid));
    }
}

void VIQDemod::traceChgThis__3(VIQDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIQDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+9,(vlTOPp->IQDemod__DOT__unit_data_i));
        vcdp->chgBit(c+17,(vlTOPp->IQDemod__DOT__unit_data_q));
    }
}

void VIQDemod::traceChgThis__4(VIQDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIQDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+25,(vlTOPp->IQDemod__DOT__demod_data_i),16);
        vcdp->chgBit(c+33,(vlTOPp->IQDemod__DOT__demod_valid_i));
        vcdp->chgBus(c+41,(vlTOPp->IQDemod__DOT__demod_data_q),16);
        vcdp->chgBit(c+49,(vlTOPp->IQDemod__DOT__demod_valid_q));
        vcdp->chgBit(c+57,(VL_LTS_III(1,16,16, 0U, (IData)(vlTOPp->IQDemod__DOT__demod_data_i))));
        vcdp->chgBit(c+65,(VL_LTS_III(1,16,16, 0U, (IData)(vlTOPp->IQDemod__DOT__demod_data_q))));
        vcdp->chgBit(c+73,(vlTOPp->IQDemod__DOT__compTable_i));
        vcdp->chgBit(c+81,(vlTOPp->IQDemod__DOT__codeTable_q));
        vcdp->chgBit(c+89,(vlTOPp->IQDemod__DOT__demod_valid));
    }
}

void VIQDemod::traceChgThis__5(VIQDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIQDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+97,(vlTOPp->unit_data_valid));
        vcdp->chgBus(c+105,(vlTOPp->unit_data_payload),8);
        vcdp->chgBit(c+113,(vlTOPp->mod_iq_valid));
        vcdp->chgBus(c+121,(vlTOPp->mod_iq_payload_cha_i),16);
        vcdp->chgBus(c+129,(vlTOPp->mod_iq_payload_cha_q),16);
        vcdp->chgBit(c+137,(vlTOPp->clk));
        vcdp->chgBit(c+145,(vlTOPp->reset));
    }
}
