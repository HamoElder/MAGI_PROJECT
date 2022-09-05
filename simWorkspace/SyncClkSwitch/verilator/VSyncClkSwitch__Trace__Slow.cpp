// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSyncClkSwitch__Syms.h"


//======================

void VSyncClkSwitch::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VSyncClkSwitch::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSyncClkSwitch__Syms* __restrict vlSymsp = static_cast<VSyncClkSwitch__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VSyncClkSwitch::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VSyncClkSwitch::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VSyncClkSwitch__Syms* __restrict vlSymsp = static_cast<VSyncClkSwitch__Syms*>(userp);
    VSyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VSyncClkSwitch::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VSyncClkSwitch__Syms* __restrict vlSymsp = static_cast<VSyncClkSwitch__Syms*>(userp);
    VSyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk_in_0", false,-1);
        tracep->declBit(c+2,"clk_in_1", false,-1);
        tracep->declBit(c+3,"clk_rstn", false,-1);
        tracep->declBit(c+4,"select_1", false,-1);
        tracep->declBit(c+5,"clk_out", false,-1);
        tracep->declBit(c+1,"SyncClkSwitch clk_in_0", false,-1);
        tracep->declBit(c+2,"SyncClkSwitch clk_in_1", false,-1);
        tracep->declBit(c+3,"SyncClkSwitch clk_rstn", false,-1);
        tracep->declBit(c+4,"SyncClkSwitch select_1", false,-1);
        tracep->declBit(c+5,"SyncClkSwitch clk_out", false,-1);
        tracep->declBit(c+6,"SyncClkSwitch negClkArea1_clk_sel_1", false,-1);
        tracep->declBit(c+7,"SyncClkSwitch negClkArea0_clk_sel_0", false,-1);
    }
}

void VSyncClkSwitch::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VSyncClkSwitch::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VSyncClkSwitch__Syms* __restrict vlSymsp = static_cast<VSyncClkSwitch__Syms*>(userp);
    VSyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VSyncClkSwitch::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VSyncClkSwitch__Syms* __restrict vlSymsp = static_cast<VSyncClkSwitch__Syms*>(userp);
    VSyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk_in_0));
        tracep->fullBit(oldp+2,(vlTOPp->clk_in_1));
        tracep->fullBit(oldp+3,(vlTOPp->clk_rstn));
        tracep->fullBit(oldp+4,(vlTOPp->select_1));
        tracep->fullBit(oldp+5,(vlTOPp->clk_out));
        tracep->fullBit(oldp+6,(vlTOPp->SyncClkSwitch__DOT__negClkArea1_clk_sel_1));
        tracep->fullBit(oldp+7,(vlTOPp->SyncClkSwitch__DOT__negClkArea0_clk_sel_0));
    }
}
