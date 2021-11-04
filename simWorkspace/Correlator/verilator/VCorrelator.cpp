// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCorrelator.h for the primary calling header

#include "VCorrelator.h"
#include "VCorrelator__Syms.h"

//==========

void VCorrelator::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCorrelator::eval\n"); );
    VCorrelator__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/Correlator.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VCorrelator::_eval_initial_loop(VCorrelator__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/Correlator.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VCorrelator::_sequent__TOP__1(VCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCorrelator::_sequent__TOP__1\n"); );
    VCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->Correlator__DOT__corr_val_i = 0U;
        vlTOPp->Correlator__DOT__corr_val_q = 0U;
        vlTOPp->Correlator__DOT__corr_result_valid_1 = 0U;
    } else {
        if (vlTOPp->Correlator__DOT__mul_data_valid) {
            vlTOPp->Correlator__DOT__corr_result_valid_1 = 1U;
            vlTOPp->Correlator__DOT__corr_val_i = (vlTOPp->Correlator__DOT___zz_corr_val_i 
                                                   + vlTOPp->Correlator__DOT__mul_i);
            vlTOPp->Correlator__DOT__corr_val_q = (vlTOPp->Correlator__DOT___zz_corr_val_q 
                                                   + vlTOPp->Correlator__DOT__mul_q);
        } else {
            vlTOPp->Correlator__DOT__corr_result_valid_1 = 0U;
        }
    }
    vlTOPp->Correlator__DOT__shiftRegisterE_3__DOT__shift_reg_3 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->Correlator__DOT__mul_data_valid)
                                           ? vlTOPp->Correlator__DOT__shiftRegisterE_3__DOT__shift_reg_2
                                           : 0U));
    vlTOPp->Correlator__DOT__shiftRegisterE_2__DOT__shift_reg_3 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->Correlator__DOT__mul_data_valid)
                                           ? vlTOPp->Correlator__DOT__shiftRegisterE_2__DOT__shift_reg_2
                                           : 0U));
    vlTOPp->corr_result_valid = vlTOPp->Correlator__DOT__corr_result_valid_1;
    vlTOPp->corr_result_payload_cha_i = vlTOPp->Correlator__DOT__corr_val_i;
    vlTOPp->corr_result_payload_cha_q = vlTOPp->Correlator__DOT__corr_val_q;
    vlTOPp->Correlator__DOT___zz_corr_val_q = (vlTOPp->Correlator__DOT__corr_val_q 
                                               - vlTOPp->Correlator__DOT__shiftRegisterE_3__DOT__shift_reg_3);
    vlTOPp->Correlator__DOT__shiftRegisterE_3__DOT__shift_reg_2 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->Correlator__DOT__mul_data_valid)
                                           ? vlTOPp->Correlator__DOT__shiftRegisterE_3__DOT__shift_reg_1
                                           : 0U));
    vlTOPp->Correlator__DOT___zz_corr_val_i = (vlTOPp->Correlator__DOT__corr_val_i 
                                               - vlTOPp->Correlator__DOT__shiftRegisterE_2__DOT__shift_reg_3);
    vlTOPp->Correlator__DOT__shiftRegisterE_2__DOT__shift_reg_2 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->Correlator__DOT__mul_data_valid)
                                           ? vlTOPp->Correlator__DOT__shiftRegisterE_2__DOT__shift_reg_1
                                           : 0U));
    vlTOPp->Correlator__DOT__shiftRegisterE_3__DOT__shift_reg_1 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->Correlator__DOT__mul_data_valid)
                                           ? vlTOPp->Correlator__DOT__shiftRegisterE_3__DOT__shift_reg_0
                                           : 0U));
    vlTOPp->Correlator__DOT__shiftRegisterE_2__DOT__shift_reg_1 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->Correlator__DOT__mul_data_valid)
                                           ? vlTOPp->Correlator__DOT__shiftRegisterE_2__DOT__shift_reg_0
                                           : 0U));
    vlTOPp->Correlator__DOT__shiftRegisterE_3__DOT__shift_reg_0 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->Correlator__DOT__mul_data_valid)
                                           ? vlTOPp->Correlator__DOT__mul_q
                                           : 0U));
    vlTOPp->Correlator__DOT__shiftRegisterE_2__DOT__shift_reg_0 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->Correlator__DOT__mul_data_valid)
                                           ? vlTOPp->Correlator__DOT__mul_i
                                           : 0U));
    vlTOPp->Correlator__DOT__mul_q = ((IData)(vlTOPp->reset)
                                       ? 0U : (vlTOPp->Correlator__DOT__k1 
                                               - VL_MULS_III(32,32,32, 
                                                             VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_0_payload_cha_i)), 
                                                             VL_EXTENDS_II(32,16, 
                                                                           (0xffffU 
                                                                            & ((IData)(vlTOPp->raw_data_1_payload_cha_q) 
                                                                               + (IData)(vlTOPp->raw_data_1_payload_cha_i)))))));
    vlTOPp->Correlator__DOT__mul_data_valid = ((~ (IData)(vlTOPp->reset)) 
                                               & ((IData)(vlTOPp->raw_data_0_valid) 
                                                  & (IData)(vlTOPp->raw_data_1_valid)));
    vlTOPp->Correlator__DOT__mul_i = ((IData)(vlTOPp->reset)
                                       ? 0U : (vlTOPp->Correlator__DOT__k1 
                                               - VL_MULS_III(32,32,32, 
                                                             VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_0_payload_cha_q)), 
                                                             VL_EXTENDS_II(32,16, 
                                                                           (0xffffU 
                                                                            & ((IData)(vlTOPp->raw_data_1_payload_cha_i) 
                                                                               - (IData)(vlTOPp->raw_data_1_payload_cha_q)))))));
}

VL_INLINE_OPT void VCorrelator::_combo__TOP__3(VCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCorrelator::_combo__TOP__3\n"); );
    VCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Correlator__DOT__k1 = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_1_payload_cha_i)), 
                                              VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & ((IData)(vlTOPp->raw_data_0_payload_cha_i) 
                                                                + (IData)(vlTOPp->raw_data_0_payload_cha_q)))));
}

void VCorrelator::_eval(VCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCorrelator::_eval\n"); );
    VCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VCorrelator::_change_request(VCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCorrelator::_change_request\n"); );
    VCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VCorrelator::_change_request_1(VCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCorrelator::_change_request_1\n"); );
    VCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VCorrelator::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCorrelator::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((raw_data_0_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_0_valid");}
    if (VL_UNLIKELY((raw_data_1_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_1_valid");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
