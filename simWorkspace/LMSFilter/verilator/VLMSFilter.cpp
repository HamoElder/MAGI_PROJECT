// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLMSFilter.h for the primary calling header

#include "VLMSFilter.h"
#include "VLMSFilter__Syms.h"

//==========

void VLMSFilter::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VLMSFilter::eval\n"); );
    VLMSFilter__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/LMSFilter.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VLMSFilter::_eval_initial_loop(VLMSFilter__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/LMSFilter.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VLMSFilter::_sequent__TOP__1(VLMSFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLMSFilter::_sequent__TOP__1\n"); );
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LMSFilter__DOT___zz_ref_mem_port0 = vlTOPp->LMSFilter__DOT__ref_mem
        [vlTOPp->LMSFilter__DOT__cnt];
}

VL_INLINE_OPT void VLMSFilter::_sequent__TOP__3(VLMSFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLMSFilter::_sequent__TOP__3\n"); );
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__LMSFilter__DOT__cnt = vlTOPp->LMSFilter__DOT__cnt;
    vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_0 = vlTOPp->LMSFilter__DOT__coff_mem_0;
    vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_1 = vlTOPp->LMSFilter__DOT__coff_mem_1;
    vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_2 = vlTOPp->LMSFilter__DOT__coff_mem_2;
    vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_3 = vlTOPp->LMSFilter__DOT__coff_mem_3;
    vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_4 = vlTOPp->LMSFilter__DOT__coff_mem_4;
    vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_5 = vlTOPp->LMSFilter__DOT__coff_mem_5;
    vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_6 = vlTOPp->LMSFilter__DOT__coff_mem_6;
    vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_7 = vlTOPp->LMSFilter__DOT__coff_mem_7;
    vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_8 = vlTOPp->LMSFilter__DOT__coff_mem_8;
    vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_9 = vlTOPp->LMSFilter__DOT__coff_mem_9;
    vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_10 = vlTOPp->LMSFilter__DOT__coff_mem_10;
    vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_11 = vlTOPp->LMSFilter__DOT__coff_mem_11;
    vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_12 = vlTOPp->LMSFilter__DOT__coff_mem_12;
    vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_13 = vlTOPp->LMSFilter__DOT__coff_mem_13;
    vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_14 = vlTOPp->LMSFilter__DOT__coff_mem_14;
    vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_15 = vlTOPp->LMSFilter__DOT__coff_mem_15;
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LMSFilter__DOT__cnt = 0U;
    } else {
        if (vlTOPp->train_en) {
            if (vlTOPp->filtered_data_valid) {
                vlTOPp->__Vdly__LMSFilter__DOT__cnt 
                    = ((0x1fU == (IData)(vlTOPp->LMSFilter__DOT__cnt))
                        ? 0U : (IData)(vlTOPp->LMSFilter__DOT___zz_cnt));
            }
        } else {
            if (vlTOPp->LMSFilter__DOT__when_LMSFilter_l78) {
                vlTOPp->__Vdly__LMSFilter__DOT__cnt = 0U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_0 = 0U;
    } else {
        if (vlTOPp->train_en) {
            if (vlTOPp->filtered_data_valid) {
                vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_0 
                    = (0x7ffffU & (vlTOPp->LMSFilter__DOT__coff_mem_0 
                                   + ((0x7c000U & (
                                                   VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (VL_MULS_III(29,29,29, 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_0))), 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                                                           >> 0x1cU)))) 
                                                   << 0xeU)) 
                                      | (0x3fffU & 
                                         (VL_MULS_III(29,29,29, 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_0))), 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                          >> 0xfU)))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->LMSFilter__DOT__raw_data_ready_1 = 0U;
    } else {
        if (vlTOPp->train_en) {
            if (vlTOPp->filtered_data_valid) {
                vlTOPp->LMSFilter__DOT__raw_data_ready_1 = 1U;
            } else {
                if (((IData)(vlTOPp->raw_data_valid) 
                     & (IData)(vlTOPp->raw_data_ready))) {
                    vlTOPp->LMSFilter__DOT__raw_data_ready_1 = 0U;
                }
            }
        } else {
            vlTOPp->LMSFilter__DOT__raw_data_ready_1 
                = (1U & (~ (IData)(vlTOPp->LMSFilter__DOT__when_LMSFilter_l78)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_1 = 0U;
    } else {
        if (vlTOPp->train_en) {
            if (vlTOPp->filtered_data_valid) {
                vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_1 
                    = (0x7ffffU & (vlTOPp->LMSFilter__DOT__coff_mem_1 
                                   + ((0x7c000U & (
                                                   VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (VL_MULS_III(29,29,29, 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_1))), 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                                                           >> 0x1cU)))) 
                                                   << 0xeU)) 
                                      | (0x3fffU & 
                                         (VL_MULS_III(29,29,29, 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_1))), 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                          >> 0xfU)))));
            }
        }
    }
    vlTOPp->LMSFilter__DOT__raw_data_payload_last_delay_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LMSFilter__DOT__raw_data_payload_last_delay_2));
    vlTOPp->LMSFilter__DOT__raw_data_fire_1_delay_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LMSFilter__DOT__raw_data_fire_1_delay_2));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_2 = 0U;
    } else {
        if (vlTOPp->train_en) {
            if (vlTOPp->filtered_data_valid) {
                vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_2 
                    = (0x7ffffU & (vlTOPp->LMSFilter__DOT__coff_mem_2 
                                   + ((0x7c000U & (
                                                   VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (VL_MULS_III(29,29,29, 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_2))), 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                                                           >> 0x1cU)))) 
                                                   << 0xeU)) 
                                      | (0x3fffU & 
                                         (VL_MULS_III(29,29,29, 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_2))), 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                          >> 0xfU)))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_3 = 0U;
    } else {
        if (vlTOPp->train_en) {
            if (vlTOPp->filtered_data_valid) {
                vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_3 
                    = (0x7ffffU & (vlTOPp->LMSFilter__DOT__coff_mem_3 
                                   + ((0x7c000U & (
                                                   VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (VL_MULS_III(29,29,29, 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_3))), 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                                                           >> 0x1cU)))) 
                                                   << 0xeU)) 
                                      | (0x3fffU & 
                                         (VL_MULS_III(29,29,29, 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_3))), 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                          >> 0xfU)))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_4 = 0U;
    } else {
        if (vlTOPp->train_en) {
            if (vlTOPp->filtered_data_valid) {
                vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_4 
                    = (0x7ffffU & (vlTOPp->LMSFilter__DOT__coff_mem_4 
                                   + ((0x7c000U & (
                                                   VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (VL_MULS_III(29,29,29, 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_4))), 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                                                           >> 0x1cU)))) 
                                                   << 0xeU)) 
                                      | (0x3fffU & 
                                         (VL_MULS_III(29,29,29, 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_4))), 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                          >> 0xfU)))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_5 = 0U;
    } else {
        if (vlTOPp->train_en) {
            if (vlTOPp->filtered_data_valid) {
                vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_5 
                    = (0x7ffffU & (vlTOPp->LMSFilter__DOT__coff_mem_5 
                                   + ((0x7c000U & (
                                                   VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (VL_MULS_III(29,29,29, 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_5))), 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                                                           >> 0x1cU)))) 
                                                   << 0xeU)) 
                                      | (0x3fffU & 
                                         (VL_MULS_III(29,29,29, 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_5))), 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                          >> 0xfU)))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_6 = 0U;
    } else {
        if (vlTOPp->train_en) {
            if (vlTOPp->filtered_data_valid) {
                vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_6 
                    = (0x7ffffU & (vlTOPp->LMSFilter__DOT__coff_mem_6 
                                   + ((0x7c000U & (
                                                   VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (VL_MULS_III(29,29,29, 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_6))), 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                                                           >> 0x1cU)))) 
                                                   << 0xeU)) 
                                      | (0x3fffU & 
                                         (VL_MULS_III(29,29,29, 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_6))), 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                          >> 0xfU)))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_7 = 0U;
    } else {
        if (vlTOPp->train_en) {
            if (vlTOPp->filtered_data_valid) {
                vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_7 
                    = (0x7ffffU & (vlTOPp->LMSFilter__DOT__coff_mem_7 
                                   + ((0x7c000U & (
                                                   VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (VL_MULS_III(29,29,29, 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_7))), 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                                                           >> 0x1cU)))) 
                                                   << 0xeU)) 
                                      | (0x3fffU & 
                                         (VL_MULS_III(29,29,29, 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_7))), 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                          >> 0xfU)))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_8 = 0U;
    } else {
        if (vlTOPp->train_en) {
            if (vlTOPp->filtered_data_valid) {
                vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_8 
                    = (0x7ffffU & (vlTOPp->LMSFilter__DOT__coff_mem_8 
                                   + ((0x7c000U & (
                                                   VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (VL_MULS_III(29,29,29, 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_8))), 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                                                           >> 0x1cU)))) 
                                                   << 0xeU)) 
                                      | (0x3fffU & 
                                         (VL_MULS_III(29,29,29, 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_8))), 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                          >> 0xfU)))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_9 = 0U;
    } else {
        if (vlTOPp->train_en) {
            if (vlTOPp->filtered_data_valid) {
                vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_9 
                    = (0x7ffffU & (vlTOPp->LMSFilter__DOT__coff_mem_9 
                                   + ((0x7c000U & (
                                                   VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (VL_MULS_III(29,29,29, 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_9))), 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                                                           >> 0x1cU)))) 
                                                   << 0xeU)) 
                                      | (0x3fffU & 
                                         (VL_MULS_III(29,29,29, 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_9))), 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                          >> 0xfU)))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_10 = 0U;
    } else {
        if (vlTOPp->train_en) {
            if (vlTOPp->filtered_data_valid) {
                vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_10 
                    = (0x7ffffU & (vlTOPp->LMSFilter__DOT__coff_mem_10 
                                   + ((0x7c000U & (
                                                   VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (VL_MULS_III(29,29,29, 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_10))), 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                                                           >> 0x1cU)))) 
                                                   << 0xeU)) 
                                      | (0x3fffU & 
                                         (VL_MULS_III(29,29,29, 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_10))), 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                          >> 0xfU)))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_11 = 0U;
    } else {
        if (vlTOPp->train_en) {
            if (vlTOPp->filtered_data_valid) {
                vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_11 
                    = (0x7ffffU & (vlTOPp->LMSFilter__DOT__coff_mem_11 
                                   + ((0x7c000U & (
                                                   VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (VL_MULS_III(29,29,29, 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_11))), 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                                                           >> 0x1cU)))) 
                                                   << 0xeU)) 
                                      | (0x3fffU & 
                                         (VL_MULS_III(29,29,29, 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_11))), 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                          >> 0xfU)))));
            }
        }
    }
}

VL_INLINE_OPT void VLMSFilter::_sequent__TOP__4(VLMSFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLMSFilter::_sequent__TOP__4\n"); );
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_12 = 0U;
    } else {
        if (vlTOPp->train_en) {
            if (vlTOPp->filtered_data_valid) {
                vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_12 
                    = (0x7ffffU & (vlTOPp->LMSFilter__DOT__coff_mem_12 
                                   + ((0x7c000U & (
                                                   VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (VL_MULS_III(29,29,29, 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_12))), 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                                                           >> 0x1cU)))) 
                                                   << 0xeU)) 
                                      | (0x3fffU & 
                                         (VL_MULS_III(29,29,29, 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_12))), 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                          >> 0xfU)))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_13 = 0U;
    } else {
        if (vlTOPp->train_en) {
            if (vlTOPp->filtered_data_valid) {
                vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_13 
                    = (0x7ffffU & (vlTOPp->LMSFilter__DOT__coff_mem_13 
                                   + ((0x7c000U & (
                                                   VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (VL_MULS_III(29,29,29, 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_13))), 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                                                           >> 0x1cU)))) 
                                                   << 0xeU)) 
                                      | (0x3fffU & 
                                         (VL_MULS_III(29,29,29, 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_13))), 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                          >> 0xfU)))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_14 = 0U;
    } else {
        if (vlTOPp->train_en) {
            if (vlTOPp->filtered_data_valid) {
                vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_14 
                    = (0x7ffffU & (vlTOPp->LMSFilter__DOT__coff_mem_14 
                                   + ((0x7c000U & (
                                                   VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (VL_MULS_III(29,29,29, 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_14))), 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                                                           >> 0x1cU)))) 
                                                   << 0xeU)) 
                                      | (0x3fffU & 
                                         (VL_MULS_III(29,29,29, 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_14))), 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                          >> 0xfU)))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_15 = 0U;
    } else {
        if (vlTOPp->train_en) {
            if (vlTOPp->filtered_data_valid) {
                vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_15 
                    = (0x7ffffU & (vlTOPp->LMSFilter__DOT__coff_mem_15 
                                   + ((0x7c000U & (
                                                   VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (VL_MULS_III(29,29,29, 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_15))), 
                                                                                (0x1fffffffU 
                                                                                & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                                                           >> 0x1cU)))) 
                                                   << 0xeU)) 
                                      | (0x3fffU & 
                                         (VL_MULS_III(29,29,29, 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_15))), 
                                                      (0x1fffffffU 
                                                       & VL_EXTENDS_II(29,20, vlTOPp->LMSFilter__DOT__error_measured))) 
                                          >> 0xfU)))));
            }
        }
    }
    vlTOPp->LMSFilter__DOT__sum_result = ((IData)(vlTOPp->reset)
                                           ? 0U : (0xfffffU 
                                                   & ((((vlTOPp->LMSFilter__DOT__mult_data_vec_0 
                                                         + vlTOPp->LMSFilter__DOT__mult_data_vec_1) 
                                                        + 
                                                        (vlTOPp->LMSFilter__DOT__mult_data_vec_2 
                                                         + vlTOPp->LMSFilter__DOT__mult_data_vec_3)) 
                                                       + 
                                                       ((vlTOPp->LMSFilter__DOT__mult_data_vec_4 
                                                         + vlTOPp->LMSFilter__DOT__mult_data_vec_5) 
                                                        + 
                                                        (vlTOPp->LMSFilter__DOT__mult_data_vec_6 
                                                         + vlTOPp->LMSFilter__DOT__mult_data_vec_7))) 
                                                      + 
                                                      (((vlTOPp->LMSFilter__DOT__mult_data_vec_8 
                                                         + vlTOPp->LMSFilter__DOT__mult_data_vec_9) 
                                                        + 
                                                        (vlTOPp->LMSFilter__DOT__mult_data_vec_10 
                                                         + vlTOPp->LMSFilter__DOT__mult_data_vec_11)) 
                                                       + 
                                                       ((vlTOPp->LMSFilter__DOT__mult_data_vec_12 
                                                         + vlTOPp->LMSFilter__DOT__mult_data_vec_13) 
                                                        + 
                                                        (vlTOPp->LMSFilter__DOT__mult_data_vec_14 
                                                         + vlTOPp->LMSFilter__DOT__mult_data_vec_15))))));
    vlTOPp->LMSFilter__DOT__cnt = vlTOPp->__Vdly__LMSFilter__DOT__cnt;
    vlTOPp->LMSFilter__DOT___zz_cnt = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlTOPp->LMSFilter__DOT__cnt)));
    vlTOPp->filtered_data_payload_last = vlTOPp->LMSFilter__DOT__raw_data_payload_last_delay_3;
    vlTOPp->LMSFilter__DOT__raw_data_payload_last_delay_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LMSFilter__DOT__raw_data_payload_last_delay_1));
    vlTOPp->filtered_data_valid = vlTOPp->LMSFilter__DOT__raw_data_fire_1_delay_3;
    vlTOPp->LMSFilter__DOT__raw_data_fire_1_delay_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LMSFilter__DOT__raw_data_fire_1_delay_1));
    vlTOPp->filtered_data_payload_fragment = vlTOPp->LMSFilter__DOT__sum_result;
    vlTOPp->LMSFilter__DOT__error_measured = (0xfffffU 
                                              & (vlTOPp->LMSFilter__DOT___zz_ref_mem_port0 
                                                 - vlTOPp->LMSFilter__DOT__sum_result));
    vlTOPp->LMSFilter__DOT__mult_data_vec_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0xfffffU 
                                                   & (VL_MULS_III(28,28,28, 
                                                                  (0xfffffffU 
                                                                   & VL_EXTENDS_II(28,19, vlTOPp->LMSFilter__DOT__coff_mem_0)), 
                                                                  (0xfffffffU 
                                                                   & VL_EXTENDS_II(28,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_0)))) 
                                                      >> 8U)));
    vlTOPp->LMSFilter__DOT__mult_data_vec_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0xfffffU 
                                                   & (VL_MULS_III(28,28,28, 
                                                                  (0xfffffffU 
                                                                   & VL_EXTENDS_II(28,19, vlTOPp->LMSFilter__DOT__coff_mem_1)), 
                                                                  (0xfffffffU 
                                                                   & VL_EXTENDS_II(28,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_1)))) 
                                                      >> 8U)));
    vlTOPp->LMSFilter__DOT__mult_data_vec_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0xfffffU 
                                                   & (VL_MULS_III(28,28,28, 
                                                                  (0xfffffffU 
                                                                   & VL_EXTENDS_II(28,19, vlTOPp->LMSFilter__DOT__coff_mem_2)), 
                                                                  (0xfffffffU 
                                                                   & VL_EXTENDS_II(28,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_2)))) 
                                                      >> 8U)));
    vlTOPp->LMSFilter__DOT__mult_data_vec_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0xfffffU 
                                                   & (VL_MULS_III(28,28,28, 
                                                                  (0xfffffffU 
                                                                   & VL_EXTENDS_II(28,19, vlTOPp->LMSFilter__DOT__coff_mem_3)), 
                                                                  (0xfffffffU 
                                                                   & VL_EXTENDS_II(28,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_3)))) 
                                                      >> 8U)));
    vlTOPp->LMSFilter__DOT__mult_data_vec_4 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0xfffffU 
                                                   & (VL_MULS_III(28,28,28, 
                                                                  (0xfffffffU 
                                                                   & VL_EXTENDS_II(28,19, vlTOPp->LMSFilter__DOT__coff_mem_4)), 
                                                                  (0xfffffffU 
                                                                   & VL_EXTENDS_II(28,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_4)))) 
                                                      >> 8U)));
    vlTOPp->LMSFilter__DOT__mult_data_vec_5 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0xfffffU 
                                                   & (VL_MULS_III(28,28,28, 
                                                                  (0xfffffffU 
                                                                   & VL_EXTENDS_II(28,19, vlTOPp->LMSFilter__DOT__coff_mem_5)), 
                                                                  (0xfffffffU 
                                                                   & VL_EXTENDS_II(28,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_5)))) 
                                                      >> 8U)));
    vlTOPp->LMSFilter__DOT__mult_data_vec_6 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0xfffffU 
                                                   & (VL_MULS_III(28,28,28, 
                                                                  (0xfffffffU 
                                                                   & VL_EXTENDS_II(28,19, vlTOPp->LMSFilter__DOT__coff_mem_6)), 
                                                                  (0xfffffffU 
                                                                   & VL_EXTENDS_II(28,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_6)))) 
                                                      >> 8U)));
    vlTOPp->LMSFilter__DOT__mult_data_vec_7 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0xfffffU 
                                                   & (VL_MULS_III(28,28,28, 
                                                                  (0xfffffffU 
                                                                   & VL_EXTENDS_II(28,19, vlTOPp->LMSFilter__DOT__coff_mem_7)), 
                                                                  (0xfffffffU 
                                                                   & VL_EXTENDS_II(28,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_7)))) 
                                                      >> 8U)));
    vlTOPp->LMSFilter__DOT__mult_data_vec_8 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0xfffffU 
                                                   & (VL_MULS_III(28,28,28, 
                                                                  (0xfffffffU 
                                                                   & VL_EXTENDS_II(28,19, vlTOPp->LMSFilter__DOT__coff_mem_8)), 
                                                                  (0xfffffffU 
                                                                   & VL_EXTENDS_II(28,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_8)))) 
                                                      >> 8U)));
    vlTOPp->LMSFilter__DOT__mult_data_vec_9 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0xfffffU 
                                                   & (VL_MULS_III(28,28,28, 
                                                                  (0xfffffffU 
                                                                   & VL_EXTENDS_II(28,19, vlTOPp->LMSFilter__DOT__coff_mem_9)), 
                                                                  (0xfffffffU 
                                                                   & VL_EXTENDS_II(28,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_9)))) 
                                                      >> 8U)));
    vlTOPp->LMSFilter__DOT__mult_data_vec_10 = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                (0xfffffU 
                                                 & (VL_MULS_III(28,28,28, 
                                                                (0xfffffffU 
                                                                 & VL_EXTENDS_II(28,19, vlTOPp->LMSFilter__DOT__coff_mem_10)), 
                                                                (0xfffffffU 
                                                                 & VL_EXTENDS_II(28,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_10)))) 
                                                    >> 8U)));
    vlTOPp->LMSFilter__DOT__mult_data_vec_11 = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                (0xfffffU 
                                                 & (VL_MULS_III(28,28,28, 
                                                                (0xfffffffU 
                                                                 & VL_EXTENDS_II(28,19, vlTOPp->LMSFilter__DOT__coff_mem_11)), 
                                                                (0xfffffffU 
                                                                 & VL_EXTENDS_II(28,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_11)))) 
                                                    >> 8U)));
    vlTOPp->LMSFilter__DOT__mult_data_vec_12 = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                (0xfffffU 
                                                 & (VL_MULS_III(28,28,28, 
                                                                (0xfffffffU 
                                                                 & VL_EXTENDS_II(28,19, vlTOPp->LMSFilter__DOT__coff_mem_12)), 
                                                                (0xfffffffU 
                                                                 & VL_EXTENDS_II(28,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_12)))) 
                                                    >> 8U)));
    vlTOPp->LMSFilter__DOT__mult_data_vec_13 = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                (0xfffffU 
                                                 & (VL_MULS_III(28,28,28, 
                                                                (0xfffffffU 
                                                                 & VL_EXTENDS_II(28,19, vlTOPp->LMSFilter__DOT__coff_mem_13)), 
                                                                (0xfffffffU 
                                                                 & VL_EXTENDS_II(28,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_13)))) 
                                                    >> 8U)));
    vlTOPp->LMSFilter__DOT__mult_data_vec_14 = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                (0xfffffU 
                                                 & (VL_MULS_III(28,28,28, 
                                                                (0xfffffffU 
                                                                 & VL_EXTENDS_II(28,19, vlTOPp->LMSFilter__DOT__coff_mem_14)), 
                                                                (0xfffffffU 
                                                                 & VL_EXTENDS_II(28,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_14)))) 
                                                    >> 8U)));
    vlTOPp->LMSFilter__DOT__mult_data_vec_15 = ((IData)(vlTOPp->reset)
                                                 ? 0U
                                                 : 
                                                (0xfffffU 
                                                 & (VL_MULS_III(28,28,28, 
                                                                (0xfffffffU 
                                                                 & VL_EXTENDS_II(28,19, vlTOPp->LMSFilter__DOT__coff_mem_15)), 
                                                                (0xfffffffU 
                                                                 & VL_EXTENDS_II(28,9, (IData)(vlTOPp->LMSFilter__DOT__raw_data_vec_15)))) 
                                                    >> 8U)));
}

VL_INLINE_OPT void VLMSFilter::_sequent__TOP__5(VLMSFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLMSFilter::_sequent__TOP__5\n"); );
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LMSFilter__DOT__when_LMSFilter_l78 = ((IData)(vlTOPp->filtered_data_valid) 
                                                  & (IData)(vlTOPp->filtered_data_payload_last));
    vlTOPp->LMSFilter__DOT__coff_mem_0 = vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_0;
    vlTOPp->LMSFilter__DOT__coff_mem_1 = vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_1;
    vlTOPp->LMSFilter__DOT__coff_mem_2 = vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_2;
    vlTOPp->LMSFilter__DOT__coff_mem_3 = vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_3;
    vlTOPp->LMSFilter__DOT__coff_mem_4 = vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_4;
    vlTOPp->LMSFilter__DOT__coff_mem_5 = vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_5;
    vlTOPp->LMSFilter__DOT__coff_mem_6 = vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_6;
    vlTOPp->LMSFilter__DOT__coff_mem_7 = vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_7;
    vlTOPp->LMSFilter__DOT__coff_mem_8 = vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_8;
    vlTOPp->LMSFilter__DOT__coff_mem_9 = vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_9;
    vlTOPp->LMSFilter__DOT__coff_mem_10 = vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_10;
    vlTOPp->LMSFilter__DOT__coff_mem_11 = vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_11;
    vlTOPp->LMSFilter__DOT__coff_mem_12 = vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_12;
    vlTOPp->LMSFilter__DOT__coff_mem_13 = vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_13;
    vlTOPp->LMSFilter__DOT__coff_mem_14 = vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_14;
    vlTOPp->LMSFilter__DOT__coff_mem_15 = vlTOPp->__Vdly__LMSFilter__DOT__coff_mem_15;
    vlTOPp->LMSFilter__DOT__raw_data_payload_last_delay_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->raw_data_payload_last));
    vlTOPp->LMSFilter__DOT__raw_data_fire_1_delay_1 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->raw_data_valid) 
                                         & (IData)(vlTOPp->raw_data_ready)));
    vlTOPp->raw_data_ready = vlTOPp->LMSFilter__DOT__raw_data_ready_1;
}

VL_INLINE_OPT void VLMSFilter::_sequent__TOP__8(VLMSFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLMSFilter::_sequent__TOP__8\n"); );
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->LMSFilter__DOT__raw_data_fire) {
        vlTOPp->LMSFilter__DOT__raw_data_vec_15 = vlTOPp->LMSFilter__DOT__raw_data_vec_14;
    }
    if (vlTOPp->LMSFilter__DOT__raw_data_fire) {
        vlTOPp->LMSFilter__DOT__raw_data_vec_14 = vlTOPp->LMSFilter__DOT__raw_data_vec_13;
    }
    if (vlTOPp->LMSFilter__DOT__raw_data_fire) {
        vlTOPp->LMSFilter__DOT__raw_data_vec_13 = vlTOPp->LMSFilter__DOT__raw_data_vec_12;
    }
    if (vlTOPp->LMSFilter__DOT__raw_data_fire) {
        vlTOPp->LMSFilter__DOT__raw_data_vec_12 = vlTOPp->LMSFilter__DOT__raw_data_vec_11;
    }
    if (vlTOPp->LMSFilter__DOT__raw_data_fire) {
        vlTOPp->LMSFilter__DOT__raw_data_vec_11 = vlTOPp->LMSFilter__DOT__raw_data_vec_10;
    }
    if (vlTOPp->LMSFilter__DOT__raw_data_fire) {
        vlTOPp->LMSFilter__DOT__raw_data_vec_10 = vlTOPp->LMSFilter__DOT__raw_data_vec_9;
    }
    if (vlTOPp->LMSFilter__DOT__raw_data_fire) {
        vlTOPp->LMSFilter__DOT__raw_data_vec_9 = vlTOPp->LMSFilter__DOT__raw_data_vec_8;
    }
    if (vlTOPp->LMSFilter__DOT__raw_data_fire) {
        vlTOPp->LMSFilter__DOT__raw_data_vec_8 = vlTOPp->LMSFilter__DOT__raw_data_vec_7;
    }
    if (vlTOPp->LMSFilter__DOT__raw_data_fire) {
        vlTOPp->LMSFilter__DOT__raw_data_vec_7 = vlTOPp->LMSFilter__DOT__raw_data_vec_6;
    }
    if (vlTOPp->LMSFilter__DOT__raw_data_fire) {
        vlTOPp->LMSFilter__DOT__raw_data_vec_6 = vlTOPp->LMSFilter__DOT__raw_data_vec_5;
    }
    if (vlTOPp->LMSFilter__DOT__raw_data_fire) {
        vlTOPp->LMSFilter__DOT__raw_data_vec_5 = vlTOPp->LMSFilter__DOT__raw_data_vec_4;
    }
    if (vlTOPp->LMSFilter__DOT__raw_data_fire) {
        vlTOPp->LMSFilter__DOT__raw_data_vec_4 = vlTOPp->LMSFilter__DOT__raw_data_vec_3;
    }
    if (vlTOPp->LMSFilter__DOT__raw_data_fire) {
        vlTOPp->LMSFilter__DOT__raw_data_vec_3 = vlTOPp->LMSFilter__DOT__raw_data_vec_2;
    }
    if (vlTOPp->LMSFilter__DOT__raw_data_fire) {
        vlTOPp->LMSFilter__DOT__raw_data_vec_2 = vlTOPp->LMSFilter__DOT__raw_data_vec_1;
    }
    if (vlTOPp->LMSFilter__DOT__raw_data_fire) {
        vlTOPp->LMSFilter__DOT__raw_data_vec_1 = vlTOPp->LMSFilter__DOT__raw_data_vec_0;
    }
    if (vlTOPp->LMSFilter__DOT__raw_data_fire) {
        vlTOPp->LMSFilter__DOT__raw_data_vec_0 = vlTOPp->raw_data_payload_fragment;
    }
}

VL_INLINE_OPT void VLMSFilter::_combo__TOP__9(VLMSFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLMSFilter::_combo__TOP__9\n"); );
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LMSFilter__DOT__raw_data_fire = ((IData)(vlTOPp->raw_data_valid) 
                                             & (IData)(vlTOPp->raw_data_ready));
}

void VLMSFilter::_eval(VLMSFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLMSFilter::_eval\n"); );
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__9(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VLMSFilter::_change_request(VLMSFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLMSFilter::_change_request\n"); );
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VLMSFilter::_change_request_1(VLMSFilter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLMSFilter::_change_request_1\n"); );
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VLMSFilter::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLMSFilter::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((raw_data_payload_last & 0xfeU))) {
        Verilated::overWidthError("raw_data_payload_last");}
    if (VL_UNLIKELY((raw_data_payload_fragment & 0xfe00U))) {
        Verilated::overWidthError("raw_data_payload_fragment");}
    if (VL_UNLIKELY((train_en & 0xfeU))) {
        Verilated::overWidthError("train_en");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
