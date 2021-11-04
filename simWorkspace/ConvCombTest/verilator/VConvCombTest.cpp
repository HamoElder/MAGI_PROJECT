// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

//==========

void VConvCombTest::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VConvCombTest::eval\n"); );
    VConvCombTest__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/ConvCombTest.v", 19, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VConvCombTest::_eval_initial_loop(VConvCombTest__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/ConvCombTest.v", 19, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__6(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__6\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt;
    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select;
    vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0 = 0U;
    vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0 = 0U;
    vlTOPp->__Vdlyvset__ConvCombTest__DOT__encoded_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_payload 
        = vlTOPp->raw_data_payload_fragment;
    if ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt)));
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt = 0U;
            }
        }
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_0_port1 
        = ((0xa7U >= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))
            ? vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0
           [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read]
            : vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT____Vxrand2);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port2 
        = ((0xa7U >= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))
            ? vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1
           [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read]
            : vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT____Vxrand5);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port1 
        = ((0xa7U >= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))
            ? vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1
           [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read]
            : vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT____Vxrand4);
    if (vlTOPp->tail_bits_valid) {
        vlTOPp->ConvCombTest__DOT__encoder__DOT__r_enc_buf 
            = vlTOPp->tail_bits_payload;
    } else {
        if (vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_valid_1) {
            vlTOPp->ConvCombTest__DOT__encoder__DOT__r_enc_buf 
                = (0x7fU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                            >> 1U));
        }
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__7(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__7\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data 
            = (1U & (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo[
                     ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor) 
                      >> 5U)] >> (0x1fU & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor))));
    }
    if ((4U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((0xa7U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))) {
                vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select 
                    = ((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select))
                        ? 2U : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_decoded_ram_select_2));
            }
        } else {
            if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select = 1U;
            } else {
                if ((0xa7U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))) {
                    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat) {
                        vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select 
                            = ((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select))
                                ? 2U : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_decoded_ram_select));
                    }
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                if ((7U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt))) {
                    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail) {
                        vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select 
                            = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select;
                    }
                }
            } else {
                if ((0xa7U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))) {
                    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select 
                        = ((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select))
                            ? 2U : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_decoded_ram_select_2));
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                if ((0xa7U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))) {
                    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select 
                        = ((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select))
                            ? 2U : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_decoded_ram_select_1));
                }
            }
        }
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_126 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_124 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_122 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                             >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_120 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & (~ 
                                                   ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                    >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_118 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (3U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_116 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_114 
        = (3U & ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                           >> 3U))) + ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 2U))) 
                                       + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_112 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_110 
        = (3U & ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                           >> 3U))) + ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 2U))) 
                                       + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_108 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_106 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (3U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__8(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__8\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_104 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_102 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                             >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_100 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & (~ 
                                                   ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                    >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_98 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_96 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_94 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_92 
        = (3U & ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                           >> 3U))) + ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 2U))) 
                                       + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_90 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_88 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (3U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_86 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & (~ 
                                                   ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                    >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_84 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                             >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_82 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_127 
        = (3U & ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                           >> 3U))) + ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 2U))) 
                                       + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_80 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 1U)))));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__9(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__9\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_125 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_105 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & (~ 
                                                   ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                    >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_103 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (3U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_101 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_99 
        = (3U & ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                           >> 3U))) + ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 2U))) 
                                       + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_97 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_95 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_93 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_23 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & (~ 
                                                   ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                    >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_89 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                             >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_21 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                             >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_87 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_19 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_9 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                             >> 1U))))));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__10(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__10\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_29 
        = (3U & ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                           >> 3U))) + ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 2U))) 
                                       + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_27 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_5 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (3U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_37 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & (~ 
                                                   ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                    >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_83 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_36 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_15 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_38 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (3U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_17 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_25 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (3U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_113 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_34 
        = (3U & ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                           >> 3U))) + ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 2U))) 
                                       + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_13 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_11 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & (~ 
                                                   ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                    >> 1U))))));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__11(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__11\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_3 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_35 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_81 
        = (3U & ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                           >> 3U))) + ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 2U))) 
                                       + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_7 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_85 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (3U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_91 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & (~ 
                                                   ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                    >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_0 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_33 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_31 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_39 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                             >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_107 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                             >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_40 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & (~ 
                                                   ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                    >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_41 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_109 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__12(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__12\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_42 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                             >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_43 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (3U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_111 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_44 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_45 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_1 
        = (3U & ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                           >> 3U))) + ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 2U))) 
                                       + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_46 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_47 
        = (3U & ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                           >> 3U))) + ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 2U))) 
                                       + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_115 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_2 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_48 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_49 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_117 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & (~ 
                                                   ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                    >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_4 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                             >> 1U))))));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__13(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__13\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_50 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_51 
        = (3U & ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                           >> 3U))) + ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 2U))) 
                                       + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_119 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                             >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_6 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & (~ 
                                                   ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                    >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_52 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & (~ 
                                                   ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                    >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_53 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_121 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_8 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (3U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_54 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                             >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_55 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (3U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_123 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (3U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_10 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_56 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_57 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & (~ 
                                                   ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                    >> 1U))))));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__14(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__14\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_12 
        = (3U & ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                           >> 3U))) + ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 2U))) 
                                       + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_58 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (3U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_59 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                             >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_14 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_60 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_61 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_16 
        = (3U & ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                           >> 3U))) + ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 2U))) 
                                       + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_62 
        = (3U & ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                           >> 3U))) + ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 2U))) 
                                       + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_63 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_18 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_64 
        = (3U & ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                           >> 3U))) + ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 2U))) 
                                       + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_65 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_20 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (3U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_66 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 1U))))));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__15(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__15\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_67 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_22 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_68 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (3U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_69 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                             >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_24 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                             >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_70 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_71 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & (~ 
                                                   ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                    >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_26 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & (~ 
                                                   ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                    >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_72 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                             >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_73 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (3U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_28 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_74 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & (~ 
                                                   ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                    >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_75 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__16(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__16\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_30 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_76 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 2U)) + 
                                   (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_77 
        = (3U & ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                           >> 3U))) + ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 2U))) 
                                       + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_32 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 1U))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_78 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U))) + ((1U & (2U 
                                                 ^ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                          + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_79 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 3U)) + ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                   + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 1U))))));
    if ((4U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pipe_halt = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pipe_halt = 1U;
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pipe_halt = 0U;
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pipe_halt = 0U;
                if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l104) {
                    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pipe_halt = 1U;
                }
            }
        }
    }
    if (((1U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select)) 
         & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_valid))) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT____Vlvbound3 
            = vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path;
        if ((0xa7U >= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write))) {
            vlTOPp->__Vdlyvval__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0 
                = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT____Vlvbound3;
            vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0 = 1U;
            vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0 
                = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write;
        }
    }
    if (((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select)) 
         & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_valid))) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT____Vlvbound1 
            = vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path;
        if ((0xa7U >= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write))) {
            vlTOPp->__Vdlyvval__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0 
                = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT____Vlvbound1;
            vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0 = 1U;
            vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0 
                = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write;
        }
    }
    if (vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__ConvCombTest__DOT__encoded_fifo__DOT__logic_ram__v0 
            = (((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data) 
                << 1U) | (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_last_regNext));
        vlTOPp->__Vdlyvset__ConvCombTest__DOT__encoded_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__encoded_fifo__DOT__logic_ram__v0 
            = vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0 
            = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) 
                << 2U) | (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_data) 
                           << 1U) | (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_last)));
        vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0 
            = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value;
    }
    if ((4U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor 
                = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom
                [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor];
        } else {
            if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor 
                    = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom
                    [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor];
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                if ((7U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt))) {
                    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail) {
                        vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor 
                            = vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_62;
                    }
                }
            } else {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor 
                    = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom
                    [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor];
            }
        } else {
            if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor 
                    = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom
                    [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor];
            }
        }
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__17(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__17\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0] 
            = vlTOPp->__Vdlyvval__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0;
    }
    if (vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0] 
            = vlTOPp->__Vdlyvval__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0;
    }
    vlTOPp->decoded_data_payload_fragment = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data;
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo[((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x1fU & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor)))) 
                    & vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo[
                    ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor) 
                     >> 5U)]) | ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                                        >> 1U)) << 
                                 (0x1fU & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor))));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffffe) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | (IData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__when_AddCompareSelect_l17))))));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffffd) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__when_AddCompareSelect_l17))))) 
                      << 1U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffffb) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__when_AddCompareSelect_l17))))) 
                      << 2U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffff7) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__when_AddCompareSelect_l17))))) 
                      << 3U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffffef) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__when_AddCompareSelect_l17))))) 
                      << 4U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffffdf) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__when_AddCompareSelect_l17))))) 
                      << 5U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffffbf) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__when_AddCompareSelect_l17))))) 
                      << 6U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffff7f) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__when_AddCompareSelect_l17))))) 
                      << 7U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffeff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__when_AddCompareSelect_l17))))) 
                      << 8U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffdff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__when_AddCompareSelect_l17))))) 
                      << 9U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffbff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__when_AddCompareSelect_l17))))) 
                      << 0xaU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffff7ff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__when_AddCompareSelect_l17))))) 
                      << 0xbU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffefff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__when_AddCompareSelect_l17))))) 
                      << 0xcU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffdfff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__when_AddCompareSelect_l17))))) 
                      << 0xdU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffbfff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__when_AddCompareSelect_l17))))) 
                      << 0xeU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffff7fff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__when_AddCompareSelect_l17))))) 
                      << 0xfU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffeffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__when_AddCompareSelect_l17))))) 
                      << 0x10U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffdffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__when_AddCompareSelect_l17))))) 
                      << 0x11U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffbffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__when_AddCompareSelect_l17))))) 
                      << 0x12U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffff7ffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__when_AddCompareSelect_l17))))) 
                      << 0x13U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffefffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__when_AddCompareSelect_l17))))) 
                      << 0x14U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffdfffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__when_AddCompareSelect_l17))))) 
                      << 0x15U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffbfffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__when_AddCompareSelect_l17))))) 
                      << 0x16U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffff7fffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__when_AddCompareSelect_l17))))) 
                      << 0x17U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffeffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__when_AddCompareSelect_l17))))) 
                      << 0x18U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffdffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__when_AddCompareSelect_l17))))) 
                      << 0x19U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffbffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__when_AddCompareSelect_l17))))) 
                      << 0x1aU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffff7ffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__when_AddCompareSelect_l17))))) 
                      << 0x1bU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffefffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__when_AddCompareSelect_l17))))) 
                      << 0x1cU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffdfffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__when_AddCompareSelect_l17))))) 
                      << 0x1dU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffbfffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__when_AddCompareSelect_l17))))) 
                      << 0x1eU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffff7fffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__when_AddCompareSelect_l17))))) 
                      << 0x1fU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffeffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__when_AddCompareSelect_l17))))) 
                      << 0x20U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffdffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__when_AddCompareSelect_l17))))) 
                      << 0x21U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffbffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__when_AddCompareSelect_l17))))) 
                      << 0x22U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffff7ffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__when_AddCompareSelect_l17))))) 
                      << 0x23U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffefffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__when_AddCompareSelect_l17))))) 
                      << 0x24U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffdfffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__when_AddCompareSelect_l17))))) 
                      << 0x25U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffbfffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__when_AddCompareSelect_l17))))) 
                      << 0x26U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffff7fffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__when_AddCompareSelect_l17))))) 
                      << 0x27U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffeffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__when_AddCompareSelect_l17))))) 
                      << 0x28U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffdffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__when_AddCompareSelect_l17))))) 
                      << 0x29U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffbffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__when_AddCompareSelect_l17))))) 
                      << 0x2aU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffff7ffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__when_AddCompareSelect_l17))))) 
                      << 0x2bU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffefffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__when_AddCompareSelect_l17))))) 
                      << 0x2cU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffdfffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__when_AddCompareSelect_l17))))) 
                      << 0x2dU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffbfffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__when_AddCompareSelect_l17))))) 
                      << 0x2eU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffff7fffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__when_AddCompareSelect_l17))))) 
                      << 0x2fU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffeffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__when_AddCompareSelect_l17))))) 
                      << 0x30U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffdffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__when_AddCompareSelect_l17))))) 
                      << 0x31U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffbffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__when_AddCompareSelect_l17))))) 
                      << 0x32U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfff7ffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__when_AddCompareSelect_l17))))) 
                      << 0x33U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffefffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__when_AddCompareSelect_l17))))) 
                      << 0x34U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffdfffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__when_AddCompareSelect_l17))))) 
                      << 0x35U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffbfffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__when_AddCompareSelect_l17))))) 
                      << 0x36U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xff7fffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__when_AddCompareSelect_l17))))) 
                      << 0x37U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfeffffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__when_AddCompareSelect_l17))))) 
                      << 0x38U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfdffffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__when_AddCompareSelect_l17))))) 
                      << 0x39U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfbffffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__when_AddCompareSelect_l17))))) 
                      << 0x3aU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xf7ffffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__when_AddCompareSelect_l17))))) 
                      << 0x3bU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xefffffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__when_AddCompareSelect_l17))))) 
                      << 0x3cU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xdfffffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__when_AddCompareSelect_l17))))) 
                      << 0x3dU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xbfffffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__when_AddCompareSelect_l17))))) 
                      << 0x3eU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0x7fffffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__when_AddCompareSelect_l17))))) 
                      << 0x3fU));
        }
    }
}
