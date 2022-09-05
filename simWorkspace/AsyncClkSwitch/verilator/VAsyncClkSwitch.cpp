// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncClkSwitch.h for the primary calling header

#include "VAsyncClkSwitch.h"
#include "VAsyncClkSwitch__Syms.h"

//==========

void VAsyncClkSwitch::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAsyncClkSwitch::eval\n"); );
    VAsyncClkSwitch__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAsyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/mnt/BackUp/IdeaProjects/MAGI_PROJECT/tmp/job_1/AsyncClkSwitch.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VAsyncClkSwitch::_eval_initial_loop(VAsyncClkSwitch__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/mnt/BackUp/IdeaProjects/MAGI_PROJECT/tmp/job_1/AsyncClkSwitch.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VAsyncClkSwitch::_sequent__TOP__2(VAsyncClkSwitch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncClkSwitch::_sequent__TOP__2\n"); );
    VAsyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AsyncClkSwitch__DOT__negClkArea0_clk_sel_0_buf 
        = ((IData)(vlTOPp->clk_rstn) & (IData)(vlTOPp->AsyncClkSwitch__DOT__posClkArea0_clk_sel_0));
}

VL_INLINE_OPT void VAsyncClkSwitch::_sequent__TOP__3(VAsyncClkSwitch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncClkSwitch::_sequent__TOP__3\n"); );
    VAsyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__AsyncClkSwitch__DOT__posClkArea0_clk_sel_0 
        = vlTOPp->AsyncClkSwitch__DOT__posClkArea0_clk_sel_0;
    vlTOPp->__Vdly__AsyncClkSwitch__DOT__posClkArea0_clk_sel_0 
        = ((IData)(vlTOPp->clk_rstn) & ((~ (IData)(vlTOPp->select_1)) 
                                        & (~ (IData)(vlTOPp->AsyncClkSwitch__DOT__posClkArea1_clk_sel_1))));
}

VL_INLINE_OPT void VAsyncClkSwitch::_sequent__TOP__4(VAsyncClkSwitch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncClkSwitch::_sequent__TOP__4\n"); );
    VAsyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AsyncClkSwitch__DOT__negClkArea1_clk_sel_1_buf 
        = ((IData)(vlTOPp->clk_rstn) & (IData)(vlTOPp->AsyncClkSwitch__DOT__posClkArea1_clk_sel_1));
}

VL_INLINE_OPT void VAsyncClkSwitch::_settle__TOP__5(VAsyncClkSwitch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncClkSwitch::_settle__TOP__5\n"); );
    VAsyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->clk_out = (((IData)(vlTOPp->clk_in_0) & (IData)(vlTOPp->AsyncClkSwitch__DOT__negClkArea0_clk_sel_0_buf)) 
                       | ((IData)(vlTOPp->clk_in_1) 
                          & (IData)(vlTOPp->AsyncClkSwitch__DOT__negClkArea1_clk_sel_1_buf)));
}

VL_INLINE_OPT void VAsyncClkSwitch::_sequent__TOP__6(VAsyncClkSwitch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncClkSwitch::_sequent__TOP__6\n"); );
    VAsyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AsyncClkSwitch__DOT__posClkArea1_clk_sel_1 
        = ((IData)(vlTOPp->clk_rstn) & ((IData)(vlTOPp->select_1) 
                                        & (~ (IData)(vlTOPp->AsyncClkSwitch__DOT__posClkArea0_clk_sel_0))));
}

VL_INLINE_OPT void VAsyncClkSwitch::_sequent__TOP__8(VAsyncClkSwitch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncClkSwitch::_sequent__TOP__8\n"); );
    VAsyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AsyncClkSwitch__DOT__posClkArea0_clk_sel_0 
        = vlTOPp->__Vdly__AsyncClkSwitch__DOT__posClkArea0_clk_sel_0;
}

void VAsyncClkSwitch::_eval(VAsyncClkSwitch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncClkSwitch::_eval\n"); );
    VAsyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((~ (IData)(vlTOPp->clk_in_0)) & (IData)(vlTOPp->__Vclklast__TOP__clk_in_0)) 
         | ((~ (IData)(vlTOPp->clk_rstn)) & (IData)(vlTOPp->__Vclklast__TOP__clk_rstn)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_in_0) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_in_0))) 
         | ((~ (IData)(vlTOPp->clk_rstn)) & (IData)(vlTOPp->__Vclklast__TOP__clk_rstn)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->clk_in_1)) & (IData)(vlTOPp->__Vclklast__TOP__clk_in_1)) 
         | ((~ (IData)(vlTOPp->clk_rstn)) & (IData)(vlTOPp->__Vclklast__TOP__clk_rstn)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_in_1) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_in_1))) 
         | ((~ (IData)(vlTOPp->clk_rstn)) & (IData)(vlTOPp->__Vclklast__TOP__clk_rstn)))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    vlTOPp->_settle__TOP__5(vlSymsp);
    if ((((IData)(vlTOPp->clk_in_0) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_in_0))) 
         | ((~ (IData)(vlTOPp->clk_rstn)) & (IData)(vlTOPp->__Vclklast__TOP__clk_rstn)))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk_in_1 = vlTOPp->clk_in_1;
    vlTOPp->__Vclklast__TOP__clk_rstn = vlTOPp->clk_rstn;
    vlTOPp->__Vclklast__TOP__clk_in_0 = vlTOPp->clk_in_0;
}

VL_INLINE_OPT QData VAsyncClkSwitch::_change_request(VAsyncClkSwitch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncClkSwitch::_change_request\n"); );
    VAsyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VAsyncClkSwitch::_change_request_1(VAsyncClkSwitch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncClkSwitch::_change_request_1\n"); );
    VAsyncClkSwitch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAsyncClkSwitch::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncClkSwitch::_eval_debug_assertions\n"); );
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
