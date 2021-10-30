// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VmQAMMod__Syms.h"


//======================

void VmQAMMod::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VmQAMMod* t = (VmQAMMod*)userthis;
    VmQAMMod__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VmQAMMod::traceChgThis(VmQAMMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VmQAMMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VmQAMMod::traceChgThis__2(VmQAMMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VmQAMMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->mQAMMod__DOT__unit_data),4);
        vcdp->chgBit(c+9,(vlTOPp->mQAMMod__DOT__unit_valid));
        vcdp->chgBus(c+17,((3U & (IData)(vlTOPp->mQAMMod__DOT__unit_data))),2);
        vcdp->chgBus(c+25,((3U & ((IData)(vlTOPp->mQAMMod__DOT__unit_data) 
                                  >> 2U))),2);
    }
}

void VmQAMMod::traceChgThis__3(VmQAMMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VmQAMMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+33,(vlTOPp->unit_data_valid));
        vcdp->chgBus(c+41,(vlTOPp->unit_data_payload),4);
        vcdp->chgBit(c+49,(vlTOPp->mod_iq_valid));
        vcdp->chgBus(c+57,(vlTOPp->mod_iq_payload_cha_i),16);
        vcdp->chgBus(c+65,(vlTOPp->mod_iq_payload_cha_q),16);
        vcdp->chgBit(c+73,(vlTOPp->clk));
        vcdp->chgBit(c+81,(vlTOPp->reset));
    }
}
