// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDirectFIR.h for the primary calling header

#include "VDirectFIR.h"
#include "VDirectFIR__Syms.h"

//==========

void VDirectFIR::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDirectFIR::eval\n"); );
    VDirectFIR__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/DirectFIR.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VDirectFIR::_eval_initial_loop(VDirectFIR__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/DirectFIR.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VDirectFIR::_sequent__TOP__1(VDirectFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDirectFIR::_sequent__TOP__1\n"); );
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->DirectFIR__DOT__coff_mem_15 = 0xbU;
    vlTOPp->DirectFIR__DOT__coff_mem_14 = 0x1fU;
    vlTOPp->DirectFIR__DOT__coff_mem_13 = 0x3fU;
    vlTOPp->DirectFIR__DOT__coff_mem_12 = 0x68U;
    vlTOPp->DirectFIR__DOT__coff_mem_11 = 0x98U;
    vlTOPp->DirectFIR__DOT__coff_mem_8 = 0xffU;
    vlTOPp->DirectFIR__DOT__coff_mem_9 = 0xebU;
    vlTOPp->DirectFIR__DOT__coff_mem_10 = 0xc6U;
}

VL_INLINE_OPT void VDirectFIR::_sequent__TOP__3(VDirectFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDirectFIR::_sequent__TOP__3\n"); );
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_15 = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_15 
                = vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_14;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__sum_result = 0U;
    } else {
        if ((2U & (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en))) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__sum_result 
                = (0x1fffffffU & (((((((((((((((vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_0 
                                                + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_1) 
                                               + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_2) 
                                              + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_3) 
                                             + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_4) 
                                            + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_5) 
                                           + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_6) 
                                          + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_7) 
                                         + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_8) 
                                        + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_9) 
                                       + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_10) 
                                      + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_11) 
                                     + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_12) 
                                    + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_13) 
                                   + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_14) 
                                  + vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_15));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_14 = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_14 
                = vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_13;
        }
    }
    vlTOPp->filtered_data_payload_0 = vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__sum_result;
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_0 = 0U;
    } else {
        if ((1U & (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en))) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_0 
                = ((0x1fe00000U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_0 
                                                           >> 0x14U)))) 
                                   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_0);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_1 = 0U;
    } else {
        if ((1U & (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en))) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_1 
                = ((0x1fe00000U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_1 
                                                           >> 0x14U)))) 
                                   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_1);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_2 = 0U;
    } else {
        if ((1U & (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en))) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_2 
                = ((0x1fe00000U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_2 
                                                           >> 0x14U)))) 
                                   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_2);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_3 = 0U;
    } else {
        if ((1U & (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en))) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_3 
                = ((0x1fe00000U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_3 
                                                           >> 0x14U)))) 
                                   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_3);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_4 = 0U;
    } else {
        if ((1U & (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en))) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_4 
                = ((0x1fe00000U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_4 
                                                           >> 0x14U)))) 
                                   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_4);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_5 = 0U;
    } else {
        if ((1U & (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en))) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_5 
                = ((0x1fe00000U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_5 
                                                           >> 0x14U)))) 
                                   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_5);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_6 = 0U;
    } else {
        if ((1U & (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en))) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_6 
                = ((0x1fe00000U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_6 
                                                           >> 0x14U)))) 
                                   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_6);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_7 = 0U;
    } else {
        if ((1U & (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en))) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_7 
                = ((0x1fe00000U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_7 
                                                           >> 0x14U)))) 
                                   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_7);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_8 = 0U;
    } else {
        if ((1U & (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en))) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_8 
                = ((0x1fe00000U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_8 
                                                           >> 0x14U)))) 
                                   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_8);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_9 = 0U;
    } else {
        if ((1U & (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en))) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_9 
                = ((0x1fe00000U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_9 
                                                           >> 0x14U)))) 
                                   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_9);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_10 = 0U;
    } else {
        if ((1U & (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en))) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_10 
                = ((0x1fe00000U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_10 
                                                           >> 0x14U)))) 
                                   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_10);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_11 = 0U;
    } else {
        if ((1U & (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en))) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_11 
                = ((0x1fe00000U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_11 
                                                           >> 0x14U)))) 
                                   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_11);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_12 = 0U;
    } else {
        if ((1U & (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en))) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_12 
                = ((0x1fe00000U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_12 
                                                           >> 0x14U)))) 
                                   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_12);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_13 = 0U;
    } else {
        if ((1U & (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en))) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_13 
                = ((0x1fe00000U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_13 
                                                           >> 0x14U)))) 
                                   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_13);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_14 = 0U;
    } else {
        if ((1U & (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en))) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_14 
                = ((0x1fe00000U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_14 
                                                           >> 0x14U)))) 
                                   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_14);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_15 = 0U;
    } else {
        if ((1U & (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en))) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_15 
                = ((0x1fe00000U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & (vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_15 
                                                           >> 0x14U)))) 
                                   << 0x15U)) | vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_15);
        }
    }
}

VL_INLINE_OPT void VDirectFIR::_sequent__TOP__4(VDirectFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDirectFIR::_sequent__TOP__4\n"); );
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_15 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_15))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_15)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_14 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_14))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_14)))));
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_13 = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_13 
                = vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_12;
        }
    }
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en 
        = ((IData)(vlTOPp->reset) ? 0U : (7U & (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_internal_en)));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_13 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_13))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_13)))));
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_12 = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_12 
                = vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_11;
        }
    }
    vlTOPp->filtered_data_valid = (1U & ((IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en) 
                                         >> 2U));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_12 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_12))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_12)))));
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_11 = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_11 
                = vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_10;
        }
    }
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_11 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_11))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_11)))));
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_10 = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_10 
                = vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_9;
        }
    }
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_10 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_10))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_10)))));
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_9 = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_9 
                = vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_8;
        }
    }
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_9 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_9))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_9)))));
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_8 = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_8 
                = vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_7;
        }
    }
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_8 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_8))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_8)))));
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_7 = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_7 
                = vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_6;
        }
    }
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_7 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_8))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_7)))));
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_6 = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_6 
                = vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_5;
        }
    }
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_6 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_9))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_6)))));
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_5 = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_5 
                = vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_4;
        }
    }
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_5 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_10))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_5)))));
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_4 = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_4 
                = vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_3;
        }
    }
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_4 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_11))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_4)))));
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_3 = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_3 
                = vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_2;
        }
    }
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_3 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_12))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_3)))));
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_2 = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_2 
                = vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_1;
        }
    }
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_2 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_13))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_2)))));
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_1 = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_1 
                = vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_0;
        }
    }
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_1 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_14))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_1)))));
    if (vlTOPp->reset) {
        vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_0 = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_0 
                = vlTOPp->raw_data_payload_0;
        }
    }
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_0 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_15))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_0)))));
}

VL_INLINE_OPT void VDirectFIR::_combo__TOP__6(VDirectFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDirectFIR::_combo__TOP__6\n"); );
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_internal_en 
        = (((IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en) 
            << 1U) | (IData)(vlTOPp->raw_data_valid));
}

void VDirectFIR::_eval(VDirectFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDirectFIR::_eval\n"); );
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VDirectFIR::_change_request(VDirectFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDirectFIR::_change_request\n"); );
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VDirectFIR::_change_request_1(VDirectFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDirectFIR::_change_request_1\n"); );
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VDirectFIR::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDirectFIR::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((raw_data_payload_0 & 0xf000U))) {
        Verilated::overWidthError("raw_data_payload_0");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
