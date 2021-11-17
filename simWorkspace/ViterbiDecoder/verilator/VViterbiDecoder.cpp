// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VViterbiDecoder.h for the primary calling header

#include "VViterbiDecoder.h"
#include "VViterbiDecoder__Syms.h"

//==========

void VViterbiDecoder::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VViterbiDecoder::eval\n"); );
    VViterbiDecoder__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/ViterbiDecoder.v", 19, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VViterbiDecoder::_eval_initial_loop(VViterbiDecoder__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/ViterbiDecoder.v", 19, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__6(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__6\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt 
        = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt;
    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_select 
        = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_select;
    vlTOPp->__Vdlyvset__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2__v0 = 0U;
    vlTOPp->__Vdlyvset__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1__v0 = 0U;
    vlTOPp->__Vdlyvset__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0__v0 = 0U;
    vlTOPp->__Vdly__ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last 
        = vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last;
    vlTOPp->__Vdly__ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last 
        = vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last;
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__7(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__7\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0 = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((1U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt)));
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt = 0U;
            }
        }
    }
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port1 
        = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1
        [vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read];
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_survival_path_ram_0_port1 
        = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0
        [vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read];
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_5 
        = (3U & ((1U & ((IData)(vlTOPp->_zz_in_b) >> 1U)) 
                 + (1U & (IData)(vlTOPp->_zz_in_b))));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_4 
        = (3U & ((1U & (~ ((IData)(vlTOPp->_zz_in_b) 
                           >> 1U))) + (1U & (~ (IData)(vlTOPp->_zz_in_b)))));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_6 
        = (3U & ((1U & ((IData)(vlTOPp->_zz_in_b) >> 1U)) 
                 + (1U & (~ (IData)(vlTOPp->_zz_in_b)))));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_0 
        = (3U & ((1U & ((IData)(vlTOPp->_zz_in_b) >> 1U)) 
                 + (1U & (IData)(vlTOPp->_zz_in_b))));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_2 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->_zz_in_b) 
                              >> 1U))) + (1U & (IData)(vlTOPp->_zz_in_b))));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_1 
        = (3U & ((1U & (~ ((IData)(vlTOPp->_zz_in_b) 
                           >> 1U))) + (1U & (~ (IData)(vlTOPp->_zz_in_b)))));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_3 
        = (3U & ((1U & ((IData)(vlTOPp->_zz_in_b) >> 1U)) 
                 + (1U & (~ (IData)(vlTOPp->_zz_in_b)))));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_7 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->_zz_in_b) 
                              >> 1U))) + (1U & (IData)(vlTOPp->_zz_in_b))));
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__8(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__8\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((4U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((2U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
            vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pipe_halt = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pipe_halt = 1U;
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pipe_halt = 0U;
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pipe_halt = 0U;
                if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l104) {
                    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pipe_halt = 1U;
                }
            }
        }
    }
    if ((4U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((2U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((0x1fU == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read))) {
                vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_select 
                    = ((0U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_select))
                        ? 2U : (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_decoded_ram_select_2));
            }
        } else {
            if ((1U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_select = 1U;
            } else {
                if ((0x1fU == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read))) {
                    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat) {
                        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_select 
                            = ((0U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_select))
                                ? 2U : (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_decoded_ram_select_2));
                    }
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((1U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
                if ((3U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt))) {
                    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__goto_tail) {
                        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_select 
                            = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_select;
                    }
                }
            } else {
                if ((0x1fU == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read))) {
                    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_select 
                        = ((0U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_select))
                            ? 2U : (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_decoded_ram_select_2));
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
                if ((0x1fU == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read))) {
                    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_select 
                        = ((0U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_select))
                            ? 2U : (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_decoded_ram_select_2));
                }
            }
        }
    }
    if (((2U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_select)) 
         & (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid))) {
        vlTOPp->__Vdlyvval__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2__v0 
            = vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path;
        vlTOPp->__Vdlyvset__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2__v0 = 1U;
        vlTOPp->__Vdlyvdim0__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2__v0 
            = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write;
    }
    if (((1U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_select)) 
         & (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid))) {
        vlTOPp->__Vdlyvval__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1__v0 
            = vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path;
        vlTOPp->__Vdlyvset__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1__v0 = 1U;
        vlTOPp->__Vdlyvdim0__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1__v0 
            = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write;
    }
    if (((0U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_select)) 
         & (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid))) {
        vlTOPp->__Vdlyvval__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0__v0 
            = vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path;
        vlTOPp->__Vdlyvset__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0__v0 = 1U;
        vlTOPp->__Vdlyvdim0__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0__v0 
            = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write;
    }
    vlTOPp->__Vdly__ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last 
        = ((~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)) 
           & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last) 
              | (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT___zz_lifo_last)));
    vlTOPp->__Vdly__ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last 
        = ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) 
           & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last) 
              | (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT___zz_lifo_last)));
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_mux_io_output_payload_fragment_regNext 
        = ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)
            ? ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) 
               & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT___zz_pop_payload_fragment))
            : ((~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)) 
               & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT___zz_pop_payload_fragment)));
    if ((4U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((2U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
            vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__min_cursor 
                = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom
                [vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__cursor];
        } else {
            if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__min_cursor 
                    = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom
                    [vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__cursor];
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((1U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
                if ((3U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt))) {
                    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__goto_tail) {
                        vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__min_cursor 
                            = vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_2;
                    }
                }
            } else {
                vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__min_cursor 
                    = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom
                    [vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__cursor];
            }
        } else {
            if ((1U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__min_cursor 
                    = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom
                    [vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__cursor];
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x3fU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_63 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x3eU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_62 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x3dU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_61 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x3cU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_60 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x3bU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_59 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x3aU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_58 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x39U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_57 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x38U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_56 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x37U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_55 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x36U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_54 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x35U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_53 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x34U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_52 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x33U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_51 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__9(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__9\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x32U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_50 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x31U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_49 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x30U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_48 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x2fU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_47 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x2eU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_46 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x2dU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_45 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x2cU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_44 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x2bU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_43 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x2aU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_42 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x29U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_41 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x28U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_40 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x27U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_39 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x26U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_38 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x23U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_35 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x22U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_34 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x1fU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_31 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x1eU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_30 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x1dU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_29 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x1cU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_28 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x1bU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_27 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x1aU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_26 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x19U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_25 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x18U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_24 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x17U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_23 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x16U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_22 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x15U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_21 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x14U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_20 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x13U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_19 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__10(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__10\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x12U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_18 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x11U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_17 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x10U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_16 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0xfU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_15 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0xeU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_14 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0xdU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_13 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0xcU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_12 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0xbU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_11 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0xaU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_10 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 9U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_9 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 8U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_8 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x16U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_22 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 9U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_9 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x2dU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_45 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 6U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_6 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 8U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_8 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x2cU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_44 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 5U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_5 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 7U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_7 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x2bU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_43 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 4U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_4 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 6U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_6 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x2aU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_42 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 3U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_3 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x1eU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_30 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x1dU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_29 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x18U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_24 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor))))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_0 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__11(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__11\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 5U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_5 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x29U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_41 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 2U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_2 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x25U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_37 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x31U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_49 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0xbU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_11 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x20U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_32 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 2U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_2 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x26U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_38 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x19U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_25 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x22U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_34 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 4U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_4 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x28U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_40 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 1U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_1 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x20U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_32 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x24U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_36 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x30U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_48 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0xaU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_10 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x2eU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_46 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 7U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_7 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x1fU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_31 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 1U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_1 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x25U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_37 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x1cU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_28 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x17U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_23 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x1aU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_26 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x1bU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_27 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x21U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_33 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__12(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__12\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 3U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_3 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x27U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_39 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x23U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_35 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x24U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_36 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0xcU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_12 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0xdU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_13 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0xeU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_14 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0xfU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_15 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x10U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_16 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x11U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_17 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x12U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_18 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x13U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_19 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x14U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_20 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x15U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_21 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x2fU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_47 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x21U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_33 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x32U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_50 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x33U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_51 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x34U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_52 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x35U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_53 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x36U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_54 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x37U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_55 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x38U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_56 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x39U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_57 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x3aU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_58 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x3bU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_59 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x3cU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_60 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x3dU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_61 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__13(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__13\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x3eU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_62 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)) 
                               >> 0x3fU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_63 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor))))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_0 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x3fU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_63 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x3eU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_62 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x3dU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_61 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x3cU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_60 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x3bU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_59 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x3aU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_58 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x39U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_57 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x38U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_56 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x37U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_55 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x36U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_54 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x35U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_53 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x34U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_52 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x33U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_51 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x32U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_50 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x31U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_49 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x30U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_48 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x2fU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_47 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x2eU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_46 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x2dU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_45 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x2cU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_44 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x2bU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_43 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x2aU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_42 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x29U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_41 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x28U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_40 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__14(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__14\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x27U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_39 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x26U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_38 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x23U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_35 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x22U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_34 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x1fU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_31 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x1eU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_30 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x1dU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_29 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x1cU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_28 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x1bU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_27 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x1aU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_26 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x19U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_25 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x18U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_24 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x17U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_23 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x16U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_22 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x15U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_21 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x14U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_20 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x13U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_19 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x12U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_18 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x11U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_17 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x10U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_16 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0xfU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_15 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0xeU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_14 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0xdU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_13 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0xcU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_12 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0xbU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_11 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0xaU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_10 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 9U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_9 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
}
