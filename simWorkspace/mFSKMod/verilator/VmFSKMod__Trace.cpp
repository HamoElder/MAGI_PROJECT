// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VmFSKMod__Syms.h"


//======================

void VmFSKMod::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VmFSKMod* t = (VmFSKMod*)userthis;
    VmFSKMod__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VmFSKMod::traceChgThis(VmFSKMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VmFSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VmFSKMod::traceChgThis__2(VmFSKMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VmFSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->mFSKMod__DOT__unit_data),2);
        vcdp->chgBit(c+9,(vlTOPp->mFSKMod__DOT__unit_valid));
    }
}

void VmFSKMod::traceChgThis__3(VmFSKMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VmFSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+17,(vlTOPp->unit_data_valid));
        vcdp->chgBus(c+25,(vlTOPp->unit_data_payload),2);
        vcdp->chgBit(c+33,(vlTOPp->mod_iq_valid));
        vcdp->chgBus(c+41,(vlTOPp->mod_iq_payload_cha_i),11);
        vcdp->chgBus(c+49,(vlTOPp->mod_iq_payload_cha_q),11);
        vcdp->chgBit(c+57,(vlTOPp->clk));
        vcdp->chgBit(c+65,(vlTOPp->reset));
    }
}
