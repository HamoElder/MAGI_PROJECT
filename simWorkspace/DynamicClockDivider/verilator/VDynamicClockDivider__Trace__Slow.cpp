// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDynamicClockDivider__Syms.h"


//======================

void VDynamicClockDivider::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VDynamicClockDivider::traceInit, &VDynamicClockDivider::traceFull, &VDynamicClockDivider::traceChg, this);
}
void VDynamicClockDivider::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VDynamicClockDivider* t = (VDynamicClockDivider*)userthis;
    VDynamicClockDivider__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VDynamicClockDivider::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VDynamicClockDivider* t = (VDynamicClockDivider*)userthis;
    VDynamicClockDivider__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VDynamicClockDivider::traceInitThis(VDynamicClockDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDynamicClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VDynamicClockDivider::traceFullThis(VDynamicClockDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDynamicClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VDynamicClockDivider::traceInitThis__1(VDynamicClockDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDynamicClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+41,"enable", false,-1);
        vcdp->declBus(c+49,"divisor", false,-1, 3,0);
        vcdp->declBit(c+57,"clk_out", false,-1);
        vcdp->declBit(c+65,"clk", false,-1);
        vcdp->declBit(c+73,"reset", false,-1);
        vcdp->declBit(c+41,"DynamicClockDivider enable", false,-1);
        vcdp->declBus(c+49,"DynamicClockDivider divisor", false,-1, 3,0);
        vcdp->declBit(c+57,"DynamicClockDivider clk_out", false,-1);
        vcdp->declBit(c+65,"DynamicClockDivider clk", false,-1);
        vcdp->declBit(c+73,"DynamicClockDivider reset", false,-1);
        vcdp->declBus(c+17,"DynamicClockDivider pos_cnt", false,-1, 3,0);
        vcdp->declBit(c+25,"DynamicClockDivider clk_out_buf", false,-1);
        vcdp->declBit(c+33,"DynamicClockDivider clk_pos_buf", false,-1);
        vcdp->declBit(c+81,"DynamicClockDivider when_DynamicClockDivider_l17", false,-1);
        vcdp->declBit(c+89,"DynamicClockDivider when_DynamicClockDivider_l19", false,-1);
        vcdp->declBit(c+97,"DynamicClockDivider when_DynamicClockDivider_l24", false,-1);
        vcdp->declBit(c+1,"DynamicClockDivider negEdgeClockArea_clk_neg_buf", false,-1);
        vcdp->declBus(c+9,"DynamicClockDivider negEdgeClockArea_neg_cnt", false,-1, 3,0);
        vcdp->declBit(c+105,"DynamicClockDivider when_DynamicClockDivider_l47", false,-1);
        vcdp->declBit(c+113,"DynamicClockDivider when_DynamicClockDivider_l55", false,-1);
        vcdp->declBit(c+81,"DynamicClockDivider when_DynamicClockDivider_l57", false,-1);
    }
}

void VDynamicClockDivider::traceFullThis__1(VDynamicClockDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDynamicClockDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->DynamicClockDivider__DOT__negEdgeClockArea_clk_neg_buf));
        vcdp->fullBus(c+9,(vlTOPp->DynamicClockDivider__DOT__negEdgeClockArea_neg_cnt),4);
        vcdp->fullBus(c+17,(vlTOPp->DynamicClockDivider__DOT__pos_cnt),4);
        vcdp->fullBit(c+25,(vlTOPp->DynamicClockDivider__DOT__clk_out_buf));
        vcdp->fullBit(c+33,(vlTOPp->DynamicClockDivider__DOT__clk_pos_buf));
        vcdp->fullBit(c+41,(vlTOPp->enable));
        vcdp->fullBus(c+49,(vlTOPp->divisor),4);
        vcdp->fullBit(c+57,(vlTOPp->clk_out));
        vcdp->fullBit(c+65,(vlTOPp->clk));
        vcdp->fullBit(c+73,(vlTOPp->reset));
        vcdp->fullBit(c+81,((1U & (IData)(vlTOPp->divisor))));
        vcdp->fullBit(c+89,((((IData)(vlTOPp->DynamicClockDivider__DOT__pos_cnt) 
                              == (0xfU & ((IData)(vlTOPp->divisor) 
                                          - (IData)(1U)))) 
                             | ((IData)(vlTOPp->DynamicClockDivider__DOT__pos_cnt) 
                                == (7U & (((IData)(vlTOPp->divisor) 
                                           - (IData)(1U)) 
                                          >> 1U))))));
        vcdp->fullBit(c+97,(((IData)(vlTOPp->DynamicClockDivider__DOT__pos_cnt) 
                             == (7U & (((IData)(vlTOPp->divisor) 
                                        >> 1U) - (IData)(1U))))));
        vcdp->fullBit(c+105,((((IData)(vlTOPp->DynamicClockDivider__DOT__negEdgeClockArea_neg_cnt) 
                               == (0xfU & ((IData)(vlTOPp->divisor) 
                                           - (IData)(1U)))) 
                              | ((IData)(vlTOPp->DynamicClockDivider__DOT__negEdgeClockArea_neg_cnt) 
                                 == (7U & (((IData)(vlTOPp->divisor) 
                                            - (IData)(1U)) 
                                           >> 1U))))));
        vcdp->fullBit(c+113,((0U == (IData)(vlTOPp->divisor))));
    }
}
