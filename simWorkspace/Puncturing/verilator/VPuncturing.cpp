// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPuncturing.h for the primary calling header

#include "VPuncturing.h"
#include "VPuncturing__Syms.h"

//==========

void VPuncturing::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPuncturing::eval\n"); );
    VPuncturing__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VPuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/Puncturing.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VPuncturing::_eval_initial_loop(VPuncturing__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/Puncturing.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VPuncturing::_sequent__TOP__2(VPuncturing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPuncturing::_sequent__TOP__2\n"); );
    VPuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Puncturing__DOT__raw_data_fragment = vlTOPp->raw_data_payload_fragment;
    vlTOPp->punched_data_payload_fragment = ((0x8000U 
                                              & (IData)(vlTOPp->Puncturing__DOT__raw_data_fragment)) 
                                             | ((0x4000U 
                                                 & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                    << 7U)) 
                                                | ((0x2000U 
                                                    & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                       >> 1U)) 
                                                   | ((0x1000U 
                                                       & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                          << 6U)) 
                                                      | ((0x800U 
                                                          & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                             >> 2U)) 
                                                         | ((0x400U 
                                                             & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                                << 5U)) 
                                                            | ((0x200U 
                                                                & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                                   >> 3U)) 
                                                               | ((0x100U 
                                                                   & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                                      << 4U)) 
                                                                  | ((0x80U 
                                                                      & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                                         >> 4U)) 
                                                                     | ((0x40U 
                                                                         & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                                            << 3U)) 
                                                                        | ((0x20U 
                                                                            & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                                               >> 5U)) 
                                                                           | ((0x10U 
                                                                               & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                                                << 2U)) 
                                                                              | ((8U 
                                                                                & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                                                >> 6U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlTOPp->Puncturing__DOT__raw_data_fragment) 
                                                                                >> 7U)) 
                                                                                | (1U 
                                                                                & (IData)(vlTOPp->Puncturing__DOT__raw_data_fragment)))))))))))))))));
}

VL_INLINE_OPT void VPuncturing::_sequent__TOP__3(VPuncturing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPuncturing::_sequent__TOP__3\n"); );
    VPuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Puncturing__DOT__raw_data_last = ((~ (IData)(vlTOPp->reset)) 
                                              & (IData)(vlTOPp->raw_data_payload_last));
    vlTOPp->Puncturing__DOT__raw_data_valid_1 = ((~ (IData)(vlTOPp->reset)) 
                                                 & (IData)(vlTOPp->raw_data_valid));
    vlTOPp->punched_data_payload_last = vlTOPp->Puncturing__DOT__raw_data_last;
    vlTOPp->punched_data_valid = vlTOPp->Puncturing__DOT__raw_data_valid_1;
}

void VPuncturing::_eval(VPuncturing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPuncturing::_eval\n"); );
    VPuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VPuncturing::_change_request(VPuncturing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPuncturing::_change_request\n"); );
    VPuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VPuncturing::_change_request_1(VPuncturing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPuncturing::_change_request_1\n"); );
    VPuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VPuncturing::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPuncturing::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((raw_data_payload_last & 0xfeU))) {
        Verilated::overWidthError("raw_data_payload_last");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
