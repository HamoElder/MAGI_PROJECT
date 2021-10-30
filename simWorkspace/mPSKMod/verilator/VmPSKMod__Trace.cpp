// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VmPSKMod__Syms.h"


//======================

void VmPSKMod::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VmPSKMod* t = (VmPSKMod*)userthis;
    VmPSKMod__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VmPSKMod::traceChgThis(VmPSKMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VmPSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VmPSKMod::traceChgThis__2(VmPSKMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VmPSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,((0xffU & (IData)(vlTOPp->mPSKMod__DOT___zz___05Fzz_mod_iq_0))),8);
        vcdp->chgBus(c+9,((0xffU & ((IData)(vlTOPp->mPSKMod__DOT___zz___05Fzz_mod_iq_0) 
                                    >> 8U))),8);
    }
}

void VmPSKMod::traceChgThis__3(VmPSKMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VmPSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+17,(vlTOPp->mPSKMod__DOT__unit_data),2);
        vcdp->chgBit(c+25,(vlTOPp->mPSKMod__DOT__unit_valid));
    }
}

void VmPSKMod::traceChgThis__4(VmPSKMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VmPSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+33,(vlTOPp->unit_data_valid));
        vcdp->chgBus(c+41,(vlTOPp->unit_data_payload),2);
        vcdp->chgBit(c+49,(vlTOPp->mod_iq_valid));
        vcdp->chgBus(c+57,(vlTOPp->mod_iq_payload_cha_i),8);
        vcdp->chgBus(c+65,(vlTOPp->mod_iq_payload_cha_q),8);
        vcdp->chgBit(c+73,(vlTOPp->clk));
        vcdp->chgBit(c+81,(vlTOPp->reset));
    }
}
