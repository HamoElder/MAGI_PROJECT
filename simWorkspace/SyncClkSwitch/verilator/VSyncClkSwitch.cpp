// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSyncClkSwitch.h for the primary calling header

#include "VSyncClkSwitch.h"
#include "VSyncClkSwitch__Syms.h"

//==========

void VSyncClkSwitch::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSyncClkSwitch::eval\n"); );
    VSyncClkSwitch__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VSyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/mnt/BackUp/IdeaProjects/MAGI_PROJECT/tmp/job_1/SyncClkSwitch.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VSyncClkSwitch::_eval_initial_loop(VSyncClkSwitch__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/mnt/BackUp/IdeaProjects/MAGI_PROJECT/tmp/job_1/SyncClkSwitch.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VSyncClkSwitch::_sequent__TOP__2(VSyncClkSwitch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncClkSwitch::_sequent__TOP__2\n"); );
    VSyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__SyncClkSwitch__DOT__negClkArea0_clk_sel_0 
        = vlTOPp->SyncClkSwitch__DOT__negClkArea0_clk_sel_0;
    vlTOPp->__Vdly__SyncClkSwitch__DOT__negClkArea0_clk_sel_0 
        = ((IData)(vlTOPp->clk_rstn) & ((~ (IData)(vlTOPp->select_1)) 
                                        & (~ (IData)(vlTOPp->SyncClkSwitch__DOT__negClkArea1_clk_sel_1))));
}

VL_INLINE_OPT void VSyncClkSwitch::_settle__TOP__3(VSyncClkSwitch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncClkSwitch::_settle__TOP__3\n"); );
    VSyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->clk_out = (((IData)(vlTOPp->clk_in_0) & (IData)(vlTOPp->SyncClkSwitch__DOT__negClkArea0_clk_sel_0)) 
                       | ((IData)(vlTOPp->clk_in_1) 
                          & (IData)(vlTOPp->SyncClkSwitch__DOT__negClkArea1_clk_sel_1)));
}

VL_INLINE_OPT void VSyncClkSwitch::_sequent__TOP__4(VSyncClkSwitch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncClkSwitch::_sequent__TOP__4\n"); );
    VSyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SyncClkSwitch__DOT__negClkArea1_clk_sel_1 
        = ((IData)(vlTOPp->clk_rstn) & ((IData)(vlTOPp->select_1) 
                                        & (~ (IData)(vlTOPp->SyncClkSwitch__DOT__negClkArea0_clk_sel_0))));
}

VL_INLINE_OPT void VSyncClkSwitch::_sequent__TOP__5(VSyncClkSwitch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncClkSwitch::_sequent__TOP__5\n"); );
    VSyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SyncClkSwitch__DOT__negClkArea0_clk_sel_0 
        = vlTOPp->__Vdly__SyncClkSwitch__DOT__negClkArea0_clk_sel_0;
}

void VSyncClkSwitch::_eval(VSyncClkSwitch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncClkSwitch::_eval\n"); );
    VSyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((~ (IData)(vlTOPp->clk_in_0)) & (IData)(vlTOPp->__Vclklast__TOP__clk_in_0)) 
         | ((~ (IData)(vlTOPp->clk_rstn)) & (IData)(vlTOPp->__Vclklast__TOP__clk_rstn)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->clk_in_1)) & (IData)(vlTOPp->__Vclklast__TOP__clk_in_1)) 
         | ((~ (IData)(vlTOPp->clk_rstn)) & (IData)(vlTOPp->__Vclklast__TOP__clk_rstn)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->clk_in_0)) & (IData)(vlTOPp->__Vclklast__TOP__clk_in_0)) 
         | ((~ (IData)(vlTOPp->clk_rstn)) & (IData)(vlTOPp->__Vclklast__TOP__clk_rstn)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    vlTOPp->_settle__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk_in_1 = vlTOPp->clk_in_1;
    vlTOPp->__Vclklast__TOP__clk_rstn = vlTOPp->clk_rstn;
    vlTOPp->__Vclklast__TOP__clk_in_0 = vlTOPp->clk_in_0;
}

VL_INLINE_OPT QData VSyncClkSwitch::_change_request(VSyncClkSwitch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncClkSwitch::_change_request\n"); );
    VSyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VSyncClkSwitch::_change_request_1(VSyncClkSwitch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncClkSwitch::_change_request_1\n"); );
    VSyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VSyncClkSwitch::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncClkSwitch::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_in_0 & 0xfeU))) {
        Verilated::overWidthError("clk_in_0");}
    if (VL_UNLIKELY((clk_in_1 & 0xfeU))) {
        Verilated::overWidthError("clk_in_1");}
    if (VL_UNLIKELY((clk_rstn & 0xfeU))) {
        Verilated::overWidthError("clk_rstn");}
    if (VL_UNLIKELY((select_1 & 0xfeU))) {
        Verilated::overWidthError("select_1");}
}
#endif  // VL_DEBUG
