// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDDS.h for the primary calling header

#include "VDDS.h"
#include "VDDS__Syms.h"

//==========

void VDDS::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDDS::eval\n"); );
    VDDS__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VDDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/DDS.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VDDS::_eval_initial_loop(VDDS__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/DDS.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VDDS::_sequent__TOP__1(VDDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDDS::_sequent__TOP__1\n"); );
    VDDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->DDS__DOT__valid_o_buf = ((~ (IData)(vlTOPp->reset)) 
                                     & (IData)(vlTOPp->DDS__DOT__module_en));
    if (vlTOPp->reset) {
        vlTOPp->DDS__DOT___zz_phase_payload = 0U;
    } else {
        if (vlTOPp->DDS__DOT__module_en) {
            vlTOPp->DDS__DOT___zz_phase_payload = vlTOPp->DDS__DOT__phase_cursor;
        }
    }
    vlTOPp->data_valid = vlTOPp->DDS__DOT__valid_o_buf;
    vlTOPp->phase_valid = vlTOPp->DDS__DOT__valid_o_buf;
    vlTOPp->phase_payload = vlTOPp->DDS__DOT___zz_phase_payload;
}

VL_INLINE_OPT void VDDS::_sequent__TOP__2(VDDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDDS::_sequent__TOP__2\n"); );
    VDDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->DDS__DOT___zz_mem_port0 = vlTOPp->DDS__DOT__mem
        [vlTOPp->DDS__DOT__phase_cursor];
    vlTOPp->data_payload = vlTOPp->DDS__DOT___zz_mem_port0;
}

VL_INLINE_OPT void VDDS::_sequent__TOP__5(VDDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDDS::_sequent__TOP__5\n"); );
    VDDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->DDS__DOT__phase_cursor = 0U;
    } else {
        if (vlTOPp->DDS__DOT__module_en) {
            vlTOPp->DDS__DOT__phase_cursor = ((IData)(vlTOPp->DDS__DOT__when_DDS_l53)
                                               ? 0U
                                               : (0x3ffU 
                                                  & ((IData)(vlTOPp->DDS__DOT___zz_phase_cursor) 
                                                     + (IData)(vlTOPp->phase_offset))));
        }
    }
}

VL_INLINE_OPT void VDDS::_combo__TOP__6(VDDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDDS::_combo__TOP__6\n"); );
    VDDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->DDS__DOT__module_en = ((IData)(vlTOPp->sync_en) 
                                   & (IData)(vlTOPp->channel_en));
    vlTOPp->DDS__DOT___zz_phase_cursor = (0x3ffU & 
                                          ((IData)(vlTOPp->DDS__DOT__phase_cursor) 
                                           + (IData)(vlTOPp->phase_inc)));
    vlTOPp->DDS__DOT__when_DDS_l53 = ((IData)(vlTOPp->phase_limit) 
                                      <= (IData)(vlTOPp->DDS__DOT__phase_cursor));
}

void VDDS::_eval(VDDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDDS::_eval\n"); );
    VDDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VDDS::_change_request(VDDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDDS::_change_request\n"); );
    VDDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VDDS::_change_request_1(VDDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDDS::_change_request_1\n"); );
    VDDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VDDS::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDDS::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((channel_en & 0xfeU))) {
        Verilated::overWidthError("channel_en");}
    if (VL_UNLIKELY((sync_en & 0xfeU))) {
        Verilated::overWidthError("sync_en");}
    if (VL_UNLIKELY((phase_limit & 0xfc00U))) {
        Verilated::overWidthError("phase_limit");}
    if (VL_UNLIKELY((phase_offset & 0xfc00U))) {
        Verilated::overWidthError("phase_offset");}
    if (VL_UNLIKELY((phase_inc & 0xfc00U))) {
        Verilated::overWidthError("phase_inc");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
