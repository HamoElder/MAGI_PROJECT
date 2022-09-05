// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSyncClkSwitch__Syms.h"


void VSyncClkSwitch::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VSyncClkSwitch__Syms* __restrict vlSymsp = static_cast<VSyncClkSwitch__Syms*>(userp);
    VSyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VSyncClkSwitch::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VSyncClkSwitch__Syms* __restrict vlSymsp = static_cast<VSyncClkSwitch__Syms*>(userp);
    VSyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk_in_0));
        tracep->chgBit(oldp+1,(vlTOPp->clk_in_1));
        tracep->chgBit(oldp+2,(vlTOPp->clk_rstn));
        tracep->chgBit(oldp+3,(vlTOPp->select_1));
        tracep->chgBit(oldp+4,(vlTOPp->clk_out));
        tracep->chgBit(oldp+5,(vlTOPp->SyncClkSwitch__DOT__negClkArea1_clk_sel_1));
        tracep->chgBit(oldp+6,(vlTOPp->SyncClkSwitch__DOT__negClkArea0_clk_sel_0));
    }
}

void VSyncClkSwitch::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VSyncClkSwitch__Syms* __restrict vlSymsp = static_cast<VSyncClkSwitch__Syms*>(userp);
    VSyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
