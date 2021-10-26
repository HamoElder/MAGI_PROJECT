// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VScrambler__Syms.h"


//======================

void VScrambler::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VScrambler* t = (VScrambler*)userthis;
    VScrambler__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VScrambler::traceChgThis(VScrambler__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VScrambler* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
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

void VScrambler::traceChgThis__2(VScrambler__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VScrambler* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,((0x7fU & (IData)(vlTOPp->Scrambler__DOT___zz_r_scr_0))),7);
        vcdp->chgBus(c+9,((0x7fU & (IData)(vlTOPp->Scrambler__DOT___zz_r_scr_1))),7);
        vcdp->chgBus(c+17,((0x7fU & (IData)(vlTOPp->Scrambler__DOT___zz_r_scr_2))),7);
        vcdp->chgBus(c+25,((0x7fU & (IData)(vlTOPp->Scrambler__DOT___zz_r_scr_3))),7);
        vcdp->chgBus(c+33,((0x7fU & (IData)(vlTOPp->Scrambler__DOT___zz_r_scr_4))),7);
        vcdp->chgBus(c+41,((0x7fU & (IData)(vlTOPp->Scrambler__DOT___zz_r_scr_5))),7);
        vcdp->chgBus(c+49,((0x7fU & (IData)(vlTOPp->Scrambler__DOT___zz_r_scr_6))),7);
        vcdp->chgBus(c+57,(((0x7eU & ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_6) 
                                      << 1U)) | (IData)(vlTOPp->Scrambler__DOT__feed_back_7))),7);
        vcdp->chgBit(c+65,(vlTOPp->Scrambler__DOT__feed_back_0));
        vcdp->chgBit(c+73,(vlTOPp->Scrambler__DOT__feed_back_1));
        vcdp->chgBit(c+81,(vlTOPp->Scrambler__DOT__feed_back_2));
        vcdp->chgBit(c+89,(vlTOPp->Scrambler__DOT__feed_back_3));
        vcdp->chgBit(c+97,(vlTOPp->Scrambler__DOT__feed_back_4));
        vcdp->chgBit(c+105,(vlTOPp->Scrambler__DOT__feed_back_5));
        vcdp->chgBit(c+113,(vlTOPp->Scrambler__DOT__feed_back_6));
        vcdp->chgBit(c+121,(vlTOPp->Scrambler__DOT__feed_back_7));
    }
}

void VScrambler::traceChgThis__3(VScrambler__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VScrambler* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+129,(vlTOPp->Scrambler__DOT__scram_valid));
    }
}

void VScrambler::traceChgThis__4(VScrambler__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VScrambler* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+137,(vlTOPp->Scrambler__DOT__scram_state),7);
        vcdp->chgBus(c+145,(vlTOPp->Scrambler__DOT__scram_data),8);
    }
}

void VScrambler::traceChgThis__5(VScrambler__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VScrambler* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+153,(vlTOPp->init_state_valid));
        vcdp->chgBus(c+161,(vlTOPp->init_state_payload),7);
        vcdp->chgBit(c+169,(vlTOPp->scram_data_valid));
        vcdp->chgBit(c+177,(vlTOPp->scram_data_ready));
        vcdp->chgBus(c+185,(vlTOPp->scram_data_payload),8);
        vcdp->chgBit(c+193,(vlTOPp->clk));
        vcdp->chgBit(c+201,(vlTOPp->reset));
    }
}
