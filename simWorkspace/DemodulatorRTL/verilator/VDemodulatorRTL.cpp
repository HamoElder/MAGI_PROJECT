// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDemodulatorRTL.h for the primary calling header

#include "VDemodulatorRTL.h"
#include "VDemodulatorRTL__Syms.h"

//==========

void VDemodulatorRTL::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDemodulatorRTL::eval\n"); );
    VDemodulatorRTL__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VDemodulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/DemodulatorRTL.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VDemodulatorRTL::_eval_initial_loop(VDemodulatorRTL__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/DemodulatorRTL.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VDemodulatorRTL::_sequent__TOP__1(VDemodulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDemodulatorRTL::_sequent__TOP__1\n"); );
    VDemodulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__demod_data_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((2U != (IData)(vlTOPp->select_1))
                                           ? 0U : (IData)(vlTOPp->data_flow_mod_iq_payload_cha_q)));
    vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__demod_data_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((2U != (IData)(vlTOPp->select_1))
                                           ? 0U : (IData)(vlTOPp->data_flow_mod_iq_payload_cha_i)));
    vlTOPp->DemodulatorRTL__DOT__demod__DOT__unit_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->DemodulatorRTL__DOT__demod__DOT__demod_valid));
    vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__unit_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__demod_valid));
    vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__unit_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__demod_valid));
}

VL_INLINE_OPT void VDemodulatorRTL::_sequent__TOP__2(VDemodulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDemodulatorRTL::_sequent__TOP__2\n"); );
    VDemodulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx1;
    // Body
    vlTOPp->DemodulatorRTL__DOT__demod__DOT__unit_data_i 
        = ((IData)(vlTOPp->DemodulatorRTL__DOT__demod__DOT__demod_valid) 
           & (IData)(vlTOPp->DemodulatorRTL__DOT__demod__DOT__compTable_i));
    vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__unit_data_q 
        = ((IData)(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__demod_valid) 
           & (IData)(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__codeTable_q));
    vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__unit_data_i 
        = ((IData)(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__demod_valid) 
           & (IData)(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__compTable_i));
    __Vtableidx1 = (((IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__codeTable_q) 
                     << 4U) | (((IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__compTable_i) 
                                << 1U) | (IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__demod_valid)));
    if ((1U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__unit_data_i 
            = vlTOPp->__Vtable1_DemodulatorRTL__DOT__demod_2__DOT__unit_data_i
            [__Vtableidx1];
    }
    if ((2U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__unit_data_q 
            = vlTOPp->__Vtable1_DemodulatorRTL__DOT__demod_2__DOT__unit_data_q
            [__Vtableidx1];
    }
    vlTOPp->DemodulatorRTL__DOT__demod__DOT__demod_valid 
        = vlTOPp->DemodulatorRTL__DOT__demod__DOT__demod_valid_i;
}

VL_INLINE_OPT void VDemodulatorRTL::_combo__TOP__4(VDemodulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDemodulatorRTL::_combo__TOP__4\n"); );
    VDemodulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->data_flow_unit_data_valid = ((0U == (IData)(vlTOPp->select_1))
                                          ? (IData)(vlTOPp->DemodulatorRTL__DOT__demod__DOT__unit_valid)
                                          : ((1U == (IData)(vlTOPp->select_1))
                                              ? (IData)(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__unit_valid)
                                              : (IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__unit_valid)));
    vlTOPp->data_flow_unit_data_payload = ((0U == (IData)(vlTOPp->select_1))
                                            ? (IData)(vlTOPp->DemodulatorRTL__DOT__demod__DOT__unit_data_i)
                                            : ((1U 
                                                == (IData)(vlTOPp->select_1))
                                                ? (
                                                   ((IData)(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__unit_data_i) 
                                                    << 1U) 
                                                   | (IData)(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__unit_data_q))
                                                : (
                                                   ((IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__unit_data_i) 
                                                    << 2U) 
                                                   | (IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__unit_data_q))));
}

VL_INLINE_OPT void VDemodulatorRTL::_sequent__TOP__5(VDemodulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDemodulatorRTL::_sequent__TOP__5\n"); );
    VDemodulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->DemodulatorRTL__DOT__demod__DOT__compTable_i 
        = ((~ (IData)(vlTOPp->reset)) & VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->DemodulatorRTL__DOT__demod__DOT__demod_data_i)));
    vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__codeTable_q 
        = ((~ (IData)(vlTOPp->reset)) & VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__demod_data_q)));
    vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__compTable_i 
        = ((~ (IData)(vlTOPp->reset)) & VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__demod_data_i)));
    vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__demod_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__demod_valid_i) 
                                         & (IData)(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__demod_valid_q)));
    vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__codeTable_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__comp_cmp_q));
    vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__compTable_i 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__comp_cmp_i));
    vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__demod_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__demod_valid_i) 
                                         & (IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__demod_valid_q)));
    vlTOPp->DemodulatorRTL__DOT__demod__DOT__demod_valid_i 
        = ((~ (IData)(vlTOPp->reset)) & ((0U == (IData)(vlTOPp->select_1)) 
                                         & (IData)(vlTOPp->data_flow_mod_iq_valid)));
    vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__comp_cmp_q 
        = ((6U & (IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__comp_cmp_q)) 
           | VL_LTS_III(32,12,12, 0xd78U, (IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__demod_data_q)));
    vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__comp_cmp_q 
        = ((5U & (IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__comp_cmp_q)) 
           | (VL_LTS_III(1,12,12, 0xfffU, (IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__demod_data_q)) 
              << 1U));
    vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__comp_cmp_q 
        = ((3U & (IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__comp_cmp_q)) 
           | (VL_LTS_III(1,12,12, 0x286U, (IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__demod_data_q)) 
              << 2U));
    vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__comp_cmp_i 
        = ((6U & (IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__comp_cmp_i)) 
           | VL_LTS_III(32,12,12, 0xd78U, (IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__demod_data_i)));
    vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__comp_cmp_i 
        = ((5U & (IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__comp_cmp_i)) 
           | (VL_LTS_III(1,12,12, 0xfffU, (IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__demod_data_i)) 
              << 1U));
    vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__comp_cmp_i 
        = ((3U & (IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__comp_cmp_i)) 
           | (VL_LTS_III(1,12,12, 0x286U, (IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__demod_data_i)) 
              << 2U));
    vlTOPp->DemodulatorRTL__DOT__demod__DOT__demod_data_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((0U != (IData)(vlTOPp->select_1))
                                           ? 0U : (IData)(vlTOPp->data_flow_mod_iq_payload_cha_i)));
    vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__demod_data_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((1U != (IData)(vlTOPp->select_1))
                                           ? 0U : (IData)(vlTOPp->data_flow_mod_iq_payload_cha_q)));
    vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__demod_data_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((1U != (IData)(vlTOPp->select_1))
                                           ? 0U : (IData)(vlTOPp->data_flow_mod_iq_payload_cha_i)));
    vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__demod_valid_i 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->DemodulatorRTL__DOT__flowDeMux_1_outputs_1_valid));
    vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__demod_valid_q 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->DemodulatorRTL__DOT__flowDeMux_1_outputs_1_valid));
    vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__demod_valid_i 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->DemodulatorRTL__DOT__flowDeMux_1_outputs_2_valid));
    vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__demod_valid_q 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->DemodulatorRTL__DOT__flowDeMux_1_outputs_2_valid));
}

VL_INLINE_OPT void VDemodulatorRTL::_combo__TOP__6(VDemodulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDemodulatorRTL::_combo__TOP__6\n"); );
    VDemodulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->DemodulatorRTL__DOT__flowDeMux_1_outputs_1_valid 
        = ((1U == (IData)(vlTOPp->select_1)) & (IData)(vlTOPp->data_flow_mod_iq_valid));
    vlTOPp->DemodulatorRTL__DOT__flowDeMux_1_outputs_2_valid 
        = ((2U == (IData)(vlTOPp->select_1)) & (IData)(vlTOPp->data_flow_mod_iq_valid));
}

void VDemodulatorRTL::_eval(VDemodulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDemodulatorRTL::_eval\n"); );
    VDemodulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VDemodulatorRTL::_change_request(VDemodulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDemodulatorRTL::_change_request\n"); );
    VDemodulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VDemodulatorRTL::_change_request_1(VDemodulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDemodulatorRTL::_change_request_1\n"); );
    VDemodulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VDemodulatorRTL::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDemodulatorRTL::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((select_1 & 0xfcU))) {
        Verilated::overWidthError("select_1");}
    if (VL_UNLIKELY((data_flow_mod_iq_valid & 0xfeU))) {
        Verilated::overWidthError("data_flow_mod_iq_valid");}
    if (VL_UNLIKELY((data_flow_mod_iq_payload_cha_i 
                     & 0xf000U))) {
        Verilated::overWidthError("data_flow_mod_iq_payload_cha_i");}
    if (VL_UNLIKELY((data_flow_mod_iq_payload_cha_q 
                     & 0xf000U))) {
        Verilated::overWidthError("data_flow_mod_iq_payload_cha_q");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
