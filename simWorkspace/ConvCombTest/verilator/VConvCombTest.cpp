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

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__2(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__2\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt;
    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select;
    vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2__v0 = 0U;
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
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt)));
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt = 0U;
            }
        }
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port1 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1
        [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read];
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_0_port1 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0
        [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read];
    if (vlTOPp->tail_bits_valid) {
        vlTOPp->ConvCombTest__DOT__encoder__DOT__r_enc_buf 
            = vlTOPp->tail_bits_payload;
    } else {
        if (vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_valid_1) {
            vlTOPp->ConvCombTest__DOT__encoder__DOT__r_enc_buf 
                = (7U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                         >> 1U));
        }
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_5 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_4 
        = (3U & ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_6 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_0 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                         >> 1U))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_2 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_1 
        = (3U & ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                           >> 2U))) + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_3 
        = (3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                        >> 2U)) + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_7 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U))) + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))));
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data 
            = (1U & (IData)((vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo 
                             >> (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor))));
    }
    if ((4U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((0x1fU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))) {
                vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select 
                    = ((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select))
                        ? 2U : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_decoded_ram_select_2));
            }
        } else {
            if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select = 1U;
            } else {
                if ((0x1fU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))) {
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
                if ((3U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt))) {
                    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail) {
                        vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select 
                            = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select;
                    }
                }
            } else {
                if ((0x1fU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))) {
                    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select 
                        = ((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select))
                            ? 2U : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_decoded_ram_select_2));
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                if ((0x1fU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))) {
                    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select 
                        = ((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select))
                            ? 2U : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_decoded_ram_select_1));
                }
            }
        }
    }
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
    if (((2U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select)) 
         & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_valid))) {
        vlTOPp->__Vdlyvval__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2__v0 
            = vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path;
        vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2__v0 = 1U;
        vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2__v0 
            = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write;
    }
    if (((1U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select)) 
         & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_valid))) {
        vlTOPp->__Vdlyvval__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0 
            = vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path;
        vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0 = 1U;
        vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0 
            = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write;
    }
    if (((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select)) 
         & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_valid))) {
        vlTOPp->__Vdlyvval__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0 
            = vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path;
        vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0 = 1U;
        vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0 
            = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write;
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
                if ((3U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt))) {
                    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail) {
                        vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor 
                            = vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_2;
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

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__3(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__3\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    if (vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2__v0) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2__v0] 
            = vlTOPp->__Vdlyvval__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2__v0;
    }
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
            vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo 
                = (((~ (VL_ULL(1) << (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor))) 
                    & vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo) 
                   | ((QData)((IData)((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                                             >> 1U)))) 
                      << (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor)));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((0xeU & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path)) 
                   | (1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17))));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((0xdU & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path)) 
                   | (2U & ((~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17)) 
                            << 1U)));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((0xbU & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path)) 
                   | (4U & ((~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17)) 
                            << 2U)));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((7U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path)) 
                   | (8U & ((~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17)) 
                            << 3U)));
        }
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_2 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_2 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_1));
    if ((1U & (~ (IData)(vlTOPp->tail_bits_valid)))) {
        if (vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_valid_1) {
            vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data 
                = ((2U & (((0xfffffffeU & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0)) 
                           ^ (0x7ffffffeU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                             >> 1U))) 
                          ^ (0x3ffffffeU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                            >> 2U)))) 
                   | (1U & ((((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                              >> 1U) ^ (2U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                              >> 2U))) 
                            ^ (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                     >> 3U)))));
        }
    }
    if ((4U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_data 
                = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom
                [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor];
        } else {
            if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_data 
                    = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom
                    [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor];
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_data 
                    = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom
                    [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor];
            }
        }
    }
    vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0 
        = (((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_payload) 
            << 3U) | (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__r_enc_buf));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1))
            ? 0U : 1U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_1 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3))
            ? 2U : 3U);
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1));
        }
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_0)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_4)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_1)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_5)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_2)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_6)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_3)));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__4(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__4\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_7)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__6(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__6\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select;
    CData/*4:0*/ __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write;
    CData/*0:0*/ __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail;
    CData/*0:0*/ __Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__data_last;
    // Body
    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state;
    __Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__data_last 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__data_last;
    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor;
    __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail;
    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat;
    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state;
    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read;
    __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write;
    __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select;
    vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_last_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_last));
    if (vlTOPp->reset) {
        vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data_valid_1 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->tail_bits_valid)))) {
            vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data_valid_1 
                = vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_valid_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor = 0U;
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__fifo_pop_ready = 0U;
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data_valid_1 = 0U;
        __Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__data_last = 0U;
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data_last = 0U;
        vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
            if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__when_ReorderLifo_l54) {
                vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state = 0U;
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data_last 
                    = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__data_last;
            } else {
                vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor 
                    = (0x3fU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor) 
                                - (IData)(1U)));
            }
            vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data_valid_1 = 1U;
            __Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__data_last 
                = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__data_last) 
                         | (IData)((vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_last_lifo 
                                    >> (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor)))));
        } else {
            if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping) {
                if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0))) {
                    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__fifo_pop_ready = 0U;
                    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state = 1U;
                } else {
                    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor 
                        = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor)));
                    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__fifo_pop_ready = 1U;
                }
            } else {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__fifo_pop_ready = 1U;
            }
            vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data_valid_1 = 0U;
            vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data_last = 0U;
            __Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__data_last = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping))) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popping))) {
            vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select = 0U;
        __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write = 0U;
        vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read = 0U;
        vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_valid_1 = 0U;
        vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_last = 0U;
        vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat = 0U;
        __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail = 0U;
        vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state = 5U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
            __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write = 0U;
            __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select = 0U;
        } else {
            if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_valid) {
                if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l48) {
                    __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select 
                        = ((2U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select))
                            ? 0U : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_ram_select));
                    __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write = 0U;
                } else {
                    __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write 
                        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write)));
                }
            }
        }
        if ((4U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read 
                    = ((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))
                        ? 0x1fU : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_ram_addr_read_2));
                if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l153) {
                    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state = 0U;
                    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_last = 1U;
                }
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_valid_1 = 1U;
            } else {
                if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_valid_1 = 0U;
                    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_last = 0U;
                    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat = 0U;
                    __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail = 0U;
                    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state = 0U;
                } else {
                    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read 
                        = ((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))
                            ? 0x1fU : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_ram_addr_read_2));
                    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l153) {
                        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat) {
                            vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state = 4U;
                            vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat = 0U;
                            vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_last = 0U;
                        } else {
                            vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state = 5U;
                            vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_last = 1U;
                        }
                    }
                    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_valid_1 = 1U;
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                    if ((3U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt))) {
                        vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read 
                            = (0x1fU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read) 
                                        - (IData)(1U)));
                        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail) {
                            vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat 
                                = ((0x10U > (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write)) 
                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select) 
                                      == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select)));
                            vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state = 4U;
                        } else {
                            vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state = 1U;
                        }
                    }
                } else {
                    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read 
                        = ((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))
                            ? 0x1fU : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_ram_addr_read_2));
                    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l153) {
                        vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state = 0U;
                        vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_last = 1U;
                    }
                    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_valid_1 = 1U;
                }
            } else {
                if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read 
                        = ((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))
                            ? 0x1fU : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_ram_addr_read_2));
                    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l153) {
                        vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state = 2U;
                    }
                } else {
                    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_valid_1 = 0U;
                    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_last = 0U;
                    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l104) {
                        vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state = 3U;
                        vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read 
                            = (0x1fU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write) 
                                        - (IData)(1U)));
                        __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail 
                            = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pkg_tail;
                    }
                }
            }
        }
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__data_last 
        = __Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__data_last;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail 
        = __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write 
        = __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select 
        = __Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select;
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__7(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__7\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx1;
    // Body
    vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_last 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->raw_data_payload_last));
    vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->raw_data_valid));
    vlTOPp->decoded_data_valid = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data_valid_1;
    vlTOPp->decoded_data_payload_last = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data_last;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l48 
        = (0x1fU <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_ram_select 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select)));
    if (vlTOPp->reset) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pkg_tail = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pkg_tail = 0U;
        } else {
            if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_valid) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pkg_tail 
                    = vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_last;
            }
        }
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_valueNext));
    __Vtableidx1 = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_last_next) 
                     << 6U) | (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) 
                                << 5U) | ((((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__raw_data_fire)) 
                                           << 4U) | 
                                          (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) 
                                            << 3U) 
                                           | ((4U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                << 2U)) 
                                              | (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__raw_data_fire) 
                                                  << 1U) 
                                                 | (IData)(vlTOPp->reset)))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next 
        = vlTOPp->__Vtable1_ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next
        [__Vtableidx1];
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_last_next 
        = vlTOPp->__Vtable1_ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_last_next
        [__Vtableidx1];
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_valid 
        = vlTOPp->__Vtable1_ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_valid
        [__Vtableidx1];
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_last 
        = vlTOPp->__Vtable1_ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_last
        [__Vtableidx1];
    if ((0x10U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_ready_1 
            = vlTOPp->__Vtable1_ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_ready_1
            [__Vtableidx1];
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy));
    vlTOPp->ConvCombTest__DOT__decoder_raw_data_ready 
        = ((~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pipe_halt)) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_ready_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_valid_1) 
           & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full))))));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data_valid_1) 
           & (~ (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_full)));
    vlTOPp->ConvCombTest__DOT__encoded_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_full))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushing) {
        vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushing) {
        vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__raw_data_fire 
        = ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo_io_pop_valid) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder_raw_data_ready));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo_io_pop_valid) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder_raw_data_ready));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_valueNext 
        = (0x3fU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_valueNext 
        = (0x3ffU & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value) 
                     + (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popping) {
        vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__10(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__10\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt 
        = vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select 
        = vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select;
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_last_lifo 
                = (((~ (VL_ULL(1) << (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor))) 
                    & vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_last_lifo) 
                   | ((QData)((IData)((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                                             >> 2U)))) 
                      << (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor)));
        }
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_decoded_ram_select 
        = (3U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select) 
                 - (IData)(1U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_decoded_ram_select_1 
        = (3U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select) 
                 - (IData)(1U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_decoded_ram_select_2 
        = (3U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select) 
                 - (IData)(1U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor 
        = (7U & ((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select))
                  ? (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor) 
                      << 1U) + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_0_port1) 
                                      >> (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor))))
                  : ((1U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select))
                      ? (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor) 
                          << 1U) + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port1) 
                                          >> (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor))))
                      : ((2U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select))
                          ? (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor) 
                              << 1U) + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port1) 
                                              >> (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor))))
                          : 0U))));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ram
        [vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_valueNext];
    if ((4U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish = 1U;
            } else {
                if ((0x1fU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))) {
                    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat)))) {
                        vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish = 0U;
            }
        }
    }
    if (vlTOPp->__Vdlyvset__ConvCombTest__DOT__encoded_fifo__DOT__logic_ram__v0) {
        vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__encoded_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__ConvCombTest__DOT__encoded_fifo__DOT__logic_ram__v0;
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram
        [vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_valueNext];
    if (vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__11(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__11\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l104 
        = (((0xfU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write)) 
            & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select) 
               == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select))) 
           | (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pkg_tail));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state 
        = vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor 
        = vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__fifo_pop_ready));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_valueNext 
        = (0x3ffU & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value) 
                     + (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat 
        = vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read 
        = vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state 
        = vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__when_ReorderLifo_l54 
        = (0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_ram_addr_read_2 
        = (0x1fU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read) 
                    - (IData)(1U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l153 
        = (0x1fU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read));
    vlTOPp->__Vtableidx2 = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string[0U] 
        = vlTOPp->__Vtable2_ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string
        [vlTOPp->__Vtableidx2][0U];
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string[1U] 
        = vlTOPp->__Vtable2_ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string
        [vlTOPp->__Vtableidx2][1U];
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string[2U] 
        = vlTOPp->__Vtable2_ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string
        [vlTOPp->__Vtableidx2][2U];
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_valueNext 
        = (0x3fU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement)));
}

void VConvCombTest::_eval(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_eval\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__10(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VConvCombTest::_change_request(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_change_request\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VConvCombTest::_change_request_1(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_change_request_1\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VConvCombTest::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((tail_bits_valid & 0xfeU))) {
        Verilated::overWidthError("tail_bits_valid");}
    if (VL_UNLIKELY((tail_bits_payload & 0xf8U))) {
        Verilated::overWidthError("tail_bits_payload");}
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((raw_data_payload_last & 0xfeU))) {
        Verilated::overWidthError("raw_data_payload_last");}
    if (VL_UNLIKELY((raw_data_payload_fragment & 0xfeU))) {
        Verilated::overWidthError("raw_data_payload_fragment");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
