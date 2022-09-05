// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAsyncClkSwitch__Syms.h"


void VAsyncClkSwitch::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VAsyncClkSwitch__Syms* __restrict vlSymsp = static_cast<VAsyncClkSwitch__Syms*>(userp);
    VAsyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VAsyncClkSwitch::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VAsyncClkSwitch__Syms* __restrict vlSymsp = static_cast<VAsyncClkSwitch__Syms*>(userp);
    VAsyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk_in_0));
        tracep->chgBit(oldp+1,(vlTOPp->clk_in_1));
        tracep->chgBit(oldp+2,(vlTOPp->clk_rstn));
        tracep->chgBit(oldp+3,(vlTOPp->select_1));
        tracep->chgBit(oldp+4,(vlTOPp->clk_out));
        tracep->chgBit(oldp+5,(vlTOPp->AsyncClkSwitch__DOT__posClkArea1_clk_sel_1));
        tracep->chgBit(oldp+6,(vlTOPp->AsyncClkSwitch__DOT__posClkArea0_clk_sel_0));
        tracep->chgBit(oldp+7,(vlTOPp->AsyncClkSwitch__DOT__negClkArea0_clk_sel_0_buf));
        tracep->chgBit(oldp+8,(vlTOPp->AsyncClkSwitch__DOT__negClkArea1_clk_sel_1_buf));
    }
}

void VAsyncClkSwitch::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VAsyncClkSwitch__Syms* __restrict vlSymsp = static_cast<VAsyncClkSwitch__Syms*>(userp);
    VAsyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
