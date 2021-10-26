// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvEncoder.h for the primary calling header

#include "VConvEncoder.h"
#include "VConvEncoder__Syms.h"

//==========

void VConvEncoder::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VConvEncoder::eval\n"); );
    VConvEncoder__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VConvEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/ConvEncoder.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VConvEncoder::_eval_initial_loop(VConvEncoder__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/ConvEncoder.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VConvEncoder::_sequent__TOP__1(VConvEncoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvEncoder::_sequent__TOP__1\n"); );
    VConvEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->tail_bits_valid) {
        vlTOPp->ConvEncoder__DOT__r_enc_buf = vlTOPp->tail_bits_payload;
    } else {
        if (vlTOPp->ConvEncoder__DOT__raw_data_valid_1) {
            vlTOPp->ConvEncoder__DOT__r_enc_buf = (7U 
                                                   & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_6) 
                                                      >> 1U));
            vlTOPp->ConvEncoder__DOT__coded_data = 
                (((IData)(vlTOPp->ConvEncoder__DOT__code_vec_0) 
                  << 7U) | (IData)(vlTOPp->ConvEncoder__DOT__code_vec_1));
        }
    }
    vlTOPp->ConvEncoder__DOT__raw_data_payload_1 = vlTOPp->raw_data_payload;
    vlTOPp->coded_data_payload = vlTOPp->ConvEncoder__DOT__coded_data;
    vlTOPp->ConvEncoder__DOT___zz_r_enc_0 = ((8U & 
                                              ((IData)(vlTOPp->ConvEncoder__DOT__raw_data_payload_1) 
                                               << 3U)) 
                                             | (IData)(vlTOPp->ConvEncoder__DOT__r_enc_buf));
    vlTOPp->ConvEncoder__DOT___zz_r_enc_1 = ((8U & 
                                              ((IData)(vlTOPp->ConvEncoder__DOT__raw_data_payload_1) 
                                               << 2U)) 
                                             | (7U 
                                                & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_0) 
                                                   >> 1U)));
    vlTOPp->ConvEncoder__DOT___zz_r_enc_2 = ((8U & 
                                              ((IData)(vlTOPp->ConvEncoder__DOT__raw_data_payload_1) 
                                               << 1U)) 
                                             | (7U 
                                                & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_1) 
                                                   >> 1U)));
    vlTOPp->ConvEncoder__DOT___zz_r_enc_3 = ((8U & (IData)(vlTOPp->ConvEncoder__DOT__raw_data_payload_1)) 
                                             | (7U 
                                                & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_2) 
                                                   >> 1U)));
    vlTOPp->ConvEncoder__DOT___zz_r_enc_4 = ((8U & 
                                              ((IData)(vlTOPp->ConvEncoder__DOT__raw_data_payload_1) 
                                               >> 1U)) 
                                             | (7U 
                                                & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_3) 
                                                   >> 1U)));
    vlTOPp->ConvEncoder__DOT___zz_r_enc_5 = ((8U & 
                                              ((IData)(vlTOPp->ConvEncoder__DOT__raw_data_payload_1) 
                                               >> 2U)) 
                                             | (7U 
                                                & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_4) 
                                                   >> 1U)));
    vlTOPp->ConvEncoder__DOT___zz_r_enc_6 = ((8U & 
                                              ((IData)(vlTOPp->ConvEncoder__DOT__raw_data_payload_1) 
                                               >> 3U)) 
                                             | (7U 
                                                & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_5) 
                                                   >> 1U)));
    vlTOPp->ConvEncoder__DOT__code_vec_0 = ((0x7eU 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_0)) 
                                            | (1U & 
                                               ((((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_0) 
                                                  >> 1U) 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_0) 
                                                  >> 2U)) 
                                                ^ ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_0) 
                                                   >> 3U))));
    vlTOPp->ConvEncoder__DOT__code_vec_0 = ((0x7dU 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_0)) 
                                            | (2U & 
                                               (((0xfffffffeU 
                                                  & (IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_1)) 
                                                 ^ 
                                                 (0x7ffffffeU 
                                                  & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_1) 
                                                     >> 1U))) 
                                                ^ (0x3ffffffeU 
                                                   & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_1) 
                                                      >> 2U)))));
    vlTOPp->ConvEncoder__DOT__code_vec_0 = ((0x7bU 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_0)) 
                                            | (4U & 
                                               (((0xfffffffcU 
                                                  & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_2) 
                                                     << 1U)) 
                                                 ^ 
                                                 (0xfffffffcU 
                                                  & (IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_2))) 
                                                ^ (0x7ffffffcU 
                                                   & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_2) 
                                                      >> 1U)))));
    vlTOPp->ConvEncoder__DOT__code_vec_0 = ((0x77U 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_0)) 
                                            | (8U & 
                                               (((0xfffffff8U 
                                                  & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_3) 
                                                     << 2U)) 
                                                 ^ 
                                                 (0xfffffff8U 
                                                  & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_3) 
                                                     << 1U))) 
                                                ^ (0xfffffff8U 
                                                   & (IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_3)))));
    vlTOPp->ConvEncoder__DOT__code_vec_0 = ((0x6fU 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_0)) 
                                            | (0x10U 
                                               & (((0xfffffff0U 
                                                    & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_4) 
                                                       << 3U)) 
                                                   ^ 
                                                   (0xfffffff0U 
                                                    & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_4) 
                                                       << 2U))) 
                                                  ^ 
                                                  (0xfffffff0U 
                                                   & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_4) 
                                                      << 1U)))));
    vlTOPp->ConvEncoder__DOT__code_vec_0 = ((0x5fU 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_0)) 
                                            | (0x20U 
                                               & (((0xffffffe0U 
                                                    & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_5) 
                                                       << 4U)) 
                                                   ^ 
                                                   (0xffffffe0U 
                                                    & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_5) 
                                                       << 3U))) 
                                                  ^ 
                                                  (0xffffffe0U 
                                                   & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_5) 
                                                      << 2U)))));
    vlTOPp->ConvEncoder__DOT__code_vec_0 = ((0x3fU 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_0)) 
                                            | (0x40U 
                                               & (((0xffffffc0U 
                                                    & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_6) 
                                                       << 5U)) 
                                                   ^ 
                                                   (0xffffffc0U 
                                                    & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_6) 
                                                       << 4U))) 
                                                  ^ 
                                                  (0xffffffc0U 
                                                   & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_6) 
                                                      << 3U)))));
    vlTOPp->ConvEncoder__DOT__code_vec_1 = ((0x7eU 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_1)) 
                                            | (1U & 
                                               ((((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_0) 
                                                  >> 1U) 
                                                 ^ 
                                                 (2U 
                                                  & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_0) 
                                                     >> 2U))) 
                                                ^ (1U 
                                                   & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_0) 
                                                      >> 3U)))));
    vlTOPp->ConvEncoder__DOT__code_vec_1 = ((0x7dU 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_1)) 
                                            | (2U & 
                                               (((0xfffffffeU 
                                                  & (IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_1)) 
                                                 ^ 
                                                 (4U 
                                                  & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_1) 
                                                     >> 1U))) 
                                                ^ (2U 
                                                   & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_1) 
                                                      >> 2U)))));
    vlTOPp->ConvEncoder__DOT__code_vec_1 = ((0x7bU 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_1)) 
                                            | (4U & 
                                               (((0xfffffffcU 
                                                  & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_2) 
                                                     << 1U)) 
                                                 ^ 
                                                 (8U 
                                                  & (IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_2))) 
                                                ^ (4U 
                                                   & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_2) 
                                                      >> 1U)))));
    vlTOPp->ConvEncoder__DOT__code_vec_1 = ((0x77U 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_1)) 
                                            | (8U & 
                                               (((0xfffffff8U 
                                                  & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_3) 
                                                     << 2U)) 
                                                 ^ 
                                                 (0x10U 
                                                  & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_3) 
                                                     << 1U))) 
                                                ^ (8U 
                                                   & (IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_3)))));
    vlTOPp->ConvEncoder__DOT__code_vec_1 = ((0x6fU 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_1)) 
                                            | (0x10U 
                                               & (((0xfffffff0U 
                                                    & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_4) 
                                                       << 3U)) 
                                                   ^ 
                                                   (0x20U 
                                                    & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_4) 
                                                       << 2U))) 
                                                  ^ 
                                                  (0x10U 
                                                   & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_4) 
                                                      << 1U)))));
    vlTOPp->ConvEncoder__DOT__code_vec_1 = ((0x5fU 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_1)) 
                                            | (0x20U 
                                               & (((0xffffffe0U 
                                                    & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_5) 
                                                       << 4U)) 
                                                   ^ 
                                                   (0x40U 
                                                    & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_5) 
                                                       << 3U))) 
                                                  ^ 
                                                  (0x20U 
                                                   & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_5) 
                                                      << 2U)))));
    vlTOPp->ConvEncoder__DOT__code_vec_1 = ((0x3fU 
                                             & (IData)(vlTOPp->ConvEncoder__DOT__code_vec_1)) 
                                            | (0x40U 
                                               & (((0xffffffc0U 
                                                    & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_6) 
                                                       << 5U)) 
                                                   ^ 
                                                   (0x80U 
                                                    & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_6) 
                                                       << 4U))) 
                                                  ^ 
                                                  (0x40U 
                                                   & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_6) 
                                                      << 3U)))));
}

VL_INLINE_OPT void VConvEncoder::_sequent__TOP__2(VConvEncoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvEncoder::_sequent__TOP__2\n"); );
    VConvEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->ConvEncoder__DOT__coded_data_valid_1 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->tail_bits_valid)))) {
            vlTOPp->ConvEncoder__DOT__coded_data_valid_1 
                = vlTOPp->ConvEncoder__DOT__raw_data_valid_1;
        }
    }
    vlTOPp->coded_data_valid = vlTOPp->ConvEncoder__DOT__coded_data_valid_1;
}

VL_INLINE_OPT void VConvEncoder::_sequent__TOP__4(VConvEncoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvEncoder::_sequent__TOP__4\n"); );
    VConvEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvEncoder__DOT__raw_data_valid_1 = vlTOPp->raw_data_valid;
}

void VConvEncoder::_eval(VConvEncoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvEncoder::_eval\n"); );
    VConvEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VConvEncoder::_change_request(VConvEncoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvEncoder::_change_request\n"); );
    VConvEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VConvEncoder::_change_request_1(VConvEncoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvEncoder::_change_request_1\n"); );
    VConvEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VConvEncoder::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvEncoder::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((tail_bits_valid & 0xfeU))) {
        Verilated::overWidthError("tail_bits_valid");}
    if (VL_UNLIKELY((tail_bits_payload & 0xf8U))) {
        Verilated::overWidthError("tail_bits_payload");}
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((raw_data_payload & 0x80U))) {
        Verilated::overWidthError("raw_data_payload");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
