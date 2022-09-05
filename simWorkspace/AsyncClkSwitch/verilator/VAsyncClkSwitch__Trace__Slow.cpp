// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAsyncClkSwitch__Syms.h"


//======================

void VAsyncClkSwitch::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VAsyncClkSwitch::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAsyncClkSwitch__Syms* __restrict vlSymsp = static_cast<VAsyncClkSwitch__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VAsyncClkSwitch::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VAsyncClkSwitch::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VAsyncClkSwitch__Syms* __restrict vlSymsp = static_cast<VAsyncClkSwitch__Syms*>(userp);
    VAsyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VAsyncClkSwitch::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VAsyncClkSwitch__Syms* __restrict vlSymsp = static_cast<VAsyncClkSwitch__Syms*>(userp);
    VAsyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk_in_0", false,-1);
        tracep->declBit(c+2,"clk_in_1", false,-1);
        tracep->declBit(c+3,"clk_rstn", false,-1);
        tracep->declBit(c+4,"select_1", false,-1);
        tracep->declBit(c+5,"clk_out", false,-1);
        tracep->declBit(c+1,"AsyncClkSwitch clk_in_0", false,-1);
        tracep->declBit(c+2,"AsyncClkSwitch clk_in_1", false,-1);
        tracep->declBit(c+3,"AsyncClkSwitch clk_rstn", false,-1);
        tracep->declBit(c+4,"AsyncClkSwitch select_1", false,-1);
        tracep->declBit(c+5,"AsyncClkSwitch clk_out", false,-1);
        tracep->declBit(c+6,"AsyncClkSwitch posClkArea1_clk_sel_1", false,-1);
        tracep->declBit(c+7,"AsyncClkSwitch posClkArea0_clk_sel_0", false,-1);
        tracep->declBit(c+8,"AsyncClkSwitch negClkArea0_clk_sel_0_buf", false,-1);
        tracep->declBit(c+9,"AsyncClkSwitch negClkArea1_clk_sel_1_buf", false,-1);
    }
}

void VAsyncClkSwitch::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VAsyncClkSwitch::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VAsyncClkSwitch__Syms* __restrict vlSymsp = static_cast<VAsyncClkSwitch__Syms*>(userp);
    VAsyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VAsyncClkSwitch::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VAsyncClkSwitch__Syms* __restrict vlSymsp = static_cast<VAsyncClkSwitch__Syms*>(userp);
    VAsyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk_in_0));
        tracep->fullBit(oldp+2,(vlTOPp->clk_in_1));
        tracep->fullBit(oldp+3,(vlTOPp->clk_rstn));
        tracep->fullBit(oldp+4,(vlTOPp->select_1));
        tracep->fullBit(oldp+5,(vlTOPp->clk_out));
        tracep->fullBit(oldp+6,(vlTOPp->AsyncClkSwitch__DOT__posClkArea1_clk_sel_1));
        tracep->fullBit(oldp+7,(vlTOPp->AsyncClkSwitch__DOT__posClkArea0_clk_sel_0));
        tracep->fullBit(oldp+8,(vlTOPp->AsyncClkSwitch__DOT__negClkArea0_clk_sel_0_buf));
        tracep->fullBit(oldp+9,(vlTOPp->AsyncClkSwitch__DOT__negClkArea1_clk_sel_1_buf));
    }
}
