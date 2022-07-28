// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDynamicClockDivider__Syms.h"


//======================

void VDynamicClockDivider::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VDynamicClockDivider* t = (VDynamicClockDivider*)userthis;
    VDynamicClockDivider__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VDynamicClockDivider::traceChgThis(VDynamicClockDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDynamicClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VDynamicClockDivider::traceChgThis__2(VDynamicClockDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDynamicClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->DynamicClockDivider__DOT__negEdgeClockArea_clk_neg_buf));
        vcdp->chgBus(c+9,(vlTOPp->DynamicClockDivider__DOT__negEdgeClockArea_neg_cnt),4);
    }
}

void VDynamicClockDivider::traceChgThis__3(VDynamicClockDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDynamicClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+17,(vlTOPp->DynamicClockDivider__DOT__pos_cnt),4);
        vcdp->chgBit(c+25,(vlTOPp->DynamicClockDivider__DOT__clk_out_buf));
        vcdp->chgBit(c+33,(vlTOPp->DynamicClockDivider__DOT__clk_pos_buf));
    }
}

void VDynamicClockDivider::traceChgThis__4(VDynamicClockDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDynamicClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+41,(vlTOPp->enable));
        vcdp->chgBus(c+49,(vlTOPp->divisor),4);
        vcdp->chgBit(c+57,(vlTOPp->clk_out));
        vcdp->chgBit(c+65,(vlTOPp->clk));
        vcdp->chgBit(c+73,(vlTOPp->reset));
        vcdp->chgBit(c+81,((1U & (IData)(vlTOPp->divisor))));
        vcdp->chgBit(c+89,((((IData)(vlTOPp->DynamicClockDivider__DOT__pos_cnt) 
                             == (0xfU & ((IData)(vlTOPp->divisor) 
                                         - (IData)(1U)))) 
                            | ((IData)(vlTOPp->DynamicClockDivider__DOT__pos_cnt) 
                               == (7U & (((IData)(vlTOPp->divisor) 
                                          - (IData)(1U)) 
                                         >> 1U))))));
        vcdp->chgBit(c+97,(((IData)(vlTOPp->DynamicClockDivider__DOT__pos_cnt) 
                            == (7U & (((IData)(vlTOPp->divisor) 
                                       >> 1U) - (IData)(1U))))));
        vcdp->chgBit(c+105,((((IData)(vlTOPp->DynamicClockDivider__DOT__negEdgeClockArea_neg_cnt) 
                              == (0xfU & ((IData)(vlTOPp->divisor) 
                                          - (IData)(1U)))) 
                             | ((IData)(vlTOPp->DynamicClockDivider__DOT__negEdgeClockArea_neg_cnt) 
                                == (7U & (((IData)(vlTOPp->divisor) 
                                           - (IData)(1U)) 
                                          >> 1U))))));
        vcdp->chgBit(c+113,((0U == (IData)(vlTOPp->divisor))));
    }
}
