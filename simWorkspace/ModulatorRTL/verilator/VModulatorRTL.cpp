// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VModulatorRTL.h for the primary calling header

#include "VModulatorRTL.h"
#include "VModulatorRTL__Syms.h"

//==========

void VModulatorRTL::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VModulatorRTL::eval\n"); );
    VModulatorRTL__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/ModulatorRTL.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VModulatorRTL::_eval_initial_loop(VModulatorRTL__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/ModulatorRTL.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VModulatorRTL::_sequent__TOP__1(VModulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModulatorRTL::_sequent__TOP__1\n"); );
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__ModulatorRTL__DOT__lookup_mod__DOT__code_map__v0;
    SData/*10:0*/ __Vdlyvdim0__ModulatorRTL__DOT__lookup_mod__DOT__code_map__v0;
    IData/*31:0*/ __Vdlyvval__ModulatorRTL__DOT__lookup_mod__DOT__code_map__v0;
    // Body
    __Vdlyvset__ModulatorRTL__DOT__lookup_mod__DOT__code_map__v0 = 0U;
    if (vlTOPp->w_en) {
        __Vdlyvval__ModulatorRTL__DOT__lookup_mod__DOT__code_map__v0 
            = vlTOPp->w_data;
        __Vdlyvset__ModulatorRTL__DOT__lookup_mod__DOT__code_map__v0 = 1U;
        __Vdlyvdim0__ModulatorRTL__DOT__lookup_mod__DOT__code_map__v0 
            = vlTOPp->w_addr;
    }
    if ((1U & (~ (IData)(vlTOPp->w_en)))) {
        vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT___zz_code_map_port1 
            = vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__code_map
            [vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__unit_data];
    }
    if (__Vdlyvset__ModulatorRTL__DOT__lookup_mod__DOT__code_map__v0) {
        vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__code_map[__Vdlyvdim0__ModulatorRTL__DOT__lookup_mod__DOT__code_map__v0] 
            = __Vdlyvval__ModulatorRTL__DOT__lookup_mod__DOT__code_map__v0;
    }
}

VL_INLINE_OPT void VModulatorRTL::_sequent__TOP__2(VModulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModulatorRTL::_sequent__TOP__2\n"); );
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__unit_data 
        = ((IData)(vlTOPp->reset) ? 0U : ((4U != (IData)(vlTOPp->select_1))
                                           ? 0U : (0x7ffU 
                                                   & vlTOPp->data_flow_unit_data_payload)));
    vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data 
        = ((IData)(vlTOPp->reset) ? 0U : ((2U != (IData)(vlTOPp->select_1))
                                           ? 0U : (0xfU 
                                                   & vlTOPp->data_flow_unit_data_payload)));
    vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_data 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((0U 
                                                != (IData)(vlTOPp->select_1))
                                                ? 0U
                                                : vlTOPp->data_flow_unit_data_payload)));
    vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((3U == (IData)(vlTOPp->select_1)) 
                                         & (IData)(vlTOPp->data_flow_unit_data_valid)));
    vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((2U == (IData)(vlTOPp->select_1)) 
                                         & (IData)(vlTOPp->data_flow_unit_data_valid)));
    vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((1U == (IData)(vlTOPp->select_1)) 
                                         & (IData)(vlTOPp->data_flow_unit_data_valid)));
    vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((0U == (IData)(vlTOPp->select_1)) 
                                         & (IData)(vlTOPp->data_flow_unit_data_valid)));
    vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_data 
        = ((IData)(vlTOPp->reset) ? 0U : ((1U != (IData)(vlTOPp->select_1))
                                           ? 0U : (3U 
                                                   & vlTOPp->data_flow_unit_data_payload)));
    vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_data 
        = ((IData)(vlTOPp->reset) ? 0U : ((3U != (IData)(vlTOPp->select_1))
                                           ? 0U : (0x3fU 
                                                   & vlTOPp->data_flow_unit_data_payload)));
    vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__unit_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((4U == (IData)(vlTOPp->select_1)) 
                                         & (IData)(vlTOPp->data_flow_unit_data_valid)));
    vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0 
        = ((0U == (IData)(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_data))
            ? 0xa57ea57eU : ((1U == (IData)(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_data))
                              ? 0xa57e5a82U : ((2U 
                                                == (IData)(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_data))
                                                ? 0x5a82a57eU
                                                : 0x5a825a82U)));
    vlTOPp->__Vtableidx1 = (7U & ((IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_data) 
                                  >> 3U));
    vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i 
        = vlTOPp->__Vtable1_ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i
        [vlTOPp->__Vtableidx1];
    vlTOPp->__Vtableidx2 = (7U & (IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_data));
    vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q 
        = vlTOPp->__Vtable2_ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q
        [vlTOPp->__Vtableidx2];
}

VL_INLINE_OPT void VModulatorRTL::_combo__TOP__4(VModulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModulatorRTL::_combo__TOP__4\n"); );
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__when_lookUpMod_l56 
        = ((IData)(vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__unit_valid) 
           & (~ (IData)(vlTOPp->w_en)));
    vlTOPp->data_flow_mod_iq_valid = ((4U & (IData)(vlTOPp->select_1))
                                       ? (IData)(vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__when_lookUpMod_l56)
                                       : ((2U & (IData)(vlTOPp->select_1))
                                           ? ((1U & (IData)(vlTOPp->select_1))
                                               ? (IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_valid)
                                               : (IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_valid))
                                           : ((1U & (IData)(vlTOPp->select_1))
                                               ? (IData)(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_valid)
                                               : (IData)(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_valid))));
    vlTOPp->data_flow_mod_iq_payload_cha_i = (0xffffU 
                                              & ((4U 
                                                  & (IData)(vlTOPp->select_1))
                                                  ? 
                                                 ((IData)(vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__when_lookUpMod_l56)
                                                   ? 
                                                  (vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT___zz_code_map_port1 
                                                   >> 0x10U)
                                                   : 0U)
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlTOPp->select_1))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->select_1))
                                                    ? 
                                                   ((IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_valid)
                                                     ? (IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i)
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_valid)
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data) 
                                                          >> 2U)))
                                                      ? 0xc349U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data) 
                                                           >> 2U)))
                                                       ? 0xebc3U
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data) 
                                                            >> 2U)))
                                                        ? 0x3cb6U
                                                        : 0x143cU)))
                                                     : 0U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->select_1))
                                                    ? 
                                                   ((IData)(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_valid)
                                                     ? 
                                                    (vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0 
                                                     >> 0x10U)
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_valid)
                                                     ? 
                                                    (((IData)(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_data)
                                                       ? 0x7fff0000U
                                                       : 0x80010000U) 
                                                     >> 0x10U)
                                                     : 0U)))));
    vlTOPp->data_flow_mod_iq_payload_cha_q = (0xffffU 
                                              & ((4U 
                                                  & (IData)(vlTOPp->select_1))
                                                  ? 
                                                 ((IData)(vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__when_lookUpMod_l56)
                                                   ? vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT___zz_code_map_port1
                                                   : 0U)
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlTOPp->select_1))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->select_1))
                                                    ? 
                                                   ((IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_valid)
                                                     ? (IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q)
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_valid)
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data)))
                                                      ? 0xc349U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data)))
                                                       ? 0xebc3U
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data)))
                                                        ? 0x3cb6U
                                                        : 0x143cU)))
                                                     : 0U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->select_1))
                                                    ? 
                                                   ((IData)(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_valid)
                                                     ? vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_valid)
                                                     ? 
                                                    ((IData)(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_data)
                                                      ? 0x7fff0000U
                                                      : 0x80010000U)
                                                     : 0U)))));
}

void VModulatorRTL::_eval(VModulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModulatorRTL::_eval\n"); );
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VModulatorRTL::_change_request(VModulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModulatorRTL::_change_request\n"); );
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VModulatorRTL::_change_request_1(VModulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModulatorRTL::_change_request_1\n"); );
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VModulatorRTL::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModulatorRTL::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((data_flow_unit_data_valid & 0xfeU))) {
        Verilated::overWidthError("data_flow_unit_data_valid");}
    if (VL_UNLIKELY((w_en & 0xfeU))) {
        Verilated::overWidthError("w_en");}
    if (VL_UNLIKELY((w_addr & 0xf800U))) {
        Verilated::overWidthError("w_addr");}
    if (VL_UNLIKELY((select_1 & 0xf8U))) {
        Verilated::overWidthError("select_1");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
