// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoopBackTest.h for the primary calling header

#include "VLoopBackTest.h"
#include "VLoopBackTest__Syms.h"

VL_INLINE_OPT void VLoopBackTest::_combo__TOP__57(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_combo__TOP__57\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LoopBackTest__DOT__writeJoinEvent_fire 
        = ((IData)(vlTOPp->LoopBackTest__DOT__writeJoinEvent_valid) 
           & (IData)(vlTOPp->LoopBackTest__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->axil4Ctrl_awready = vlTOPp->LoopBackTest__DOT__writeJoinEvent_fire;
    vlTOPp->axil4Ctrl_wready = vlTOPp->LoopBackTest__DOT__writeJoinEvent_fire;
}

void VLoopBackTest::_eval(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_eval\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->_sequent__TOP__9(vlSymsp);
        vlTOPp->_sequent__TOP__10(vlSymsp);
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->_sequent__TOP__12(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__20(vlSymsp);
        vlTOPp->_sequent__TOP__21(vlSymsp);
        vlTOPp->_sequent__TOP__22(vlSymsp);
        vlTOPp->_sequent__TOP__23(vlSymsp);
        vlTOPp->_sequent__TOP__24(vlSymsp);
        vlTOPp->_sequent__TOP__25(vlSymsp);
        vlTOPp->_sequent__TOP__26(vlSymsp);
        vlTOPp->_sequent__TOP__27(vlSymsp);
        vlTOPp->_sequent__TOP__28(vlSymsp);
        vlTOPp->_sequent__TOP__29(vlSymsp);
        vlTOPp->_sequent__TOP__30(vlSymsp);
        vlTOPp->_sequent__TOP__31(vlSymsp);
        vlTOPp->_sequent__TOP__32(vlSymsp);
        vlTOPp->_sequent__TOP__33(vlSymsp);
        vlTOPp->_sequent__TOP__34(vlSymsp);
        vlTOPp->_sequent__TOP__35(vlSymsp);
        vlTOPp->_sequent__TOP__36(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__45(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__46(vlSymsp);
        vlTOPp->_sequent__TOP__47(vlSymsp);
    }
    vlTOPp->_combo__TOP__48(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__49(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__50(vlSymsp);
        vlTOPp->_sequent__TOP__51(vlSymsp);
        vlTOPp->_sequent__TOP__52(vlSymsp);
        vlTOPp->_sequent__TOP__53(vlSymsp);
        vlTOPp->_sequent__TOP__54(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__55(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x40U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__56(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x80U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__57(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VLoopBackTest::_change_request(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_change_request\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VLoopBackTest::_change_request_1(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_change_request_1\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VLoopBackTest::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((axil4Ctrl_awvalid & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_awvalid");}
    if (VL_UNLIKELY((axil4Ctrl_awprot & 0xf8U))) {
        Verilated::overWidthError("axil4Ctrl_awprot");}
    if (VL_UNLIKELY((axil4Ctrl_wvalid & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_wvalid");}
    if (VL_UNLIKELY((axil4Ctrl_wstrb & 0xf0U))) {
        Verilated::overWidthError("axil4Ctrl_wstrb");}
    if (VL_UNLIKELY((axil4Ctrl_bready & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_bready");}
    if (VL_UNLIKELY((axil4Ctrl_arvalid & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_arvalid");}
    if (VL_UNLIKELY((axil4Ctrl_arprot & 0xf8U))) {
        Verilated::overWidthError("axil4Ctrl_arprot");}
    if (VL_UNLIKELY((axil4Ctrl_rready & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_rready");}
    if (VL_UNLIKELY((trans_data_tvalid & 0xfeU))) {
        Verilated::overWidthError("trans_data_tvalid");}
    if (VL_UNLIKELY((trans_data_tstrb & 0xf0U))) {
        Verilated::overWidthError("trans_data_tstrb");}
    if (VL_UNLIKELY((trans_data_tkeep & 0xf0U))) {
        Verilated::overWidthError("trans_data_tkeep");}
    if (VL_UNLIKELY((trans_data_tlast & 0xfeU))) {
        Verilated::overWidthError("trans_data_tlast");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
