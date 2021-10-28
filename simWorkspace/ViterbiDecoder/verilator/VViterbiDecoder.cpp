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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/ViterbiDecoder.v", 15, "",
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/ViterbiDecoder.v", 15, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__2(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__2\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*5:0*/ __Vdlyvdim0__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1__v0;
    CData/*3:0*/ __Vdlyvval__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1__v0;
    CData/*0:0*/ __Vdlyvset__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1__v0;
    // Body
    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt 
        = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt;
    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_sel 
        = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_sel;
    __Vdlyvset__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1__v0 = 0U;
    vlTOPp->__Vdlyvset__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0__v0 = 0U;
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
    if ((4U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((1U & (~ ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pipe_halt = 1U;
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((1U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pipe_halt = 1U;
            }
        } else {
            vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pipe_halt = 0U;
        }
    }
    if ((4U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((2U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
            vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_data 
                = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_tb_node_data_next;
        } else {
            if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_data 
                    = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_tb_node_data_next;
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_data 
                    = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_tb_node_data_next;
            }
        }
    }
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
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port1 
        = ((0x2fU >= (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read))
            ? vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1
           [vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read]
            : (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT____Vxrand4));
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_survival_path_ram_0_port1 
        = ((0x2fU >= (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read))
            ? vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0
           [vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read]
            : (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT____Vxrand2));
    if ((4U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((1U & (~ ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_sel = 1U;
            } else {
                if ((0x3fU == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read))) {
                    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat) {
                        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_sel 
                            = (1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_sel)));
                    }
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((1U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
                if ((2U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt))) {
                    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_sel 
                        = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_select;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
                if ((0x3fU == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read))) {
                    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_sel 
                        = (1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_sel)));
                }
            }
        }
    }
    if (((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_select) 
         & (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid))) {
        vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT____Vlvbound3 
            = vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path;
        if ((0x2fU >= (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write))) {
            __Vdlyvval__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1__v0 
                = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT____Vlvbound3;
            __Vdlyvset__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1__v0 = 1U;
            __Vdlyvdim0__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1__v0 
                = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write;
        }
    }
    if (((~ (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_select)) 
         & (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid))) {
        vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT____Vlvbound1 
            = vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path;
        if ((0x2fU >= (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write))) {
            vlTOPp->__Vdlyvval__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0__v0 
                = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT____Vlvbound1;
            vlTOPp->__Vdlyvset__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0__v0 = 1U;
            vlTOPp->__Vdlyvdim0__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0__v0 
                = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write;
        }
    }
    if ((4U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((2U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
            vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__min_cursor 
                = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_min_cursor_next;
        } else {
            if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__min_cursor 
                    = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_min_cursor_next;
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((1U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
                if ((2U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt))) {
                    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__min_cursor 
                        = vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_2;
                }
            } else {
                vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__min_cursor 
                    = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_min_cursor_next;
            }
        } else {
            if ((1U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__min_cursor 
                    = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_min_cursor_next;
            }
        }
    }
    if (__Vdlyvset__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1__v0) {
        vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[__Vdlyvdim0__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1__v0] 
            = __Vdlyvval__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1__v0;
    }
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__3(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__3\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0__v0) {
        vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[vlTOPp->__Vdlyvdim0__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0__v0] 
            = vlTOPp->__Vdlyvval__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0__v0;
    }
    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path = 0U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path 
                = ((0xeU & (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path)) 
                   | (1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17))));
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path = 0U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path 
                = ((0xdU & (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path)) 
                   | (2U & ((~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17)) 
                            << 1U)));
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path = 0U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path 
                = ((0xbU & (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path)) 
                   | (4U & ((~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17)) 
                            << 2U)));
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path = 0U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path 
                = ((7U & (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path)) 
                   | (8U & ((~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17)) 
                            << 3U)));
        }
    }
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_2 
        = (((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val) 
            <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1))
            ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val)
            : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_2 
        = (((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val) 
            <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1))
            ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx)
            : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_1));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val 
        = (((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0) 
            <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1))
            ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0)
            : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1 
        = (((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2) 
            <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3))
            ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2)
            : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx 
        = (((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0) 
            <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1))
            ? 0U : 1U);
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_1 
        = (((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2) 
            <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3))
            ? 2U : 3U);
    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0 = 0U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0 
                = ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1 = 0U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1 
                = ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2 = 0U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2 
                = ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3 = 0U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3 
                = ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1));
        }
    }
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0) 
                      + (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_0)));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0) 
                      + (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_4)));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1) 
                      + (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_1)));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1) 
                      + (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_5)));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2) 
                      + (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_2)));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2) 
                      + (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_6)));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3) 
                      + (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_3)));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3) 
                      + (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_7)));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1));
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__4(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__4\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat 
        = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat;
    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read 
        = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read;
    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_select 
        = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_select;
    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__traceback_state 
        = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state;
    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write 
        = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write;
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_select = 0U;
        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write = 0U;
        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read = 0U;
        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat = 0U;
        vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_valid_1 = 0U;
        vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_last = 0U;
        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__traceback_state = 5U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish) {
            vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write = 0U;
            vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_select = 0U;
        } else {
            if (vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid) {
                if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l46) {
                    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_select 
                        = (1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_select)));
                    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write = 0U;
                } else {
                    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write 
                        = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write)));
                }
            }
        }
        if ((4U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((2U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
                if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l114) {
                    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__traceback_state = 0U;
                    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_last = 1U;
                } else {
                    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read 
                        = (0x3fU & ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read) 
                                    - (IData)(1U)));
                }
                vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_valid_1 = 1U;
            } else {
                if ((1U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
                    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_valid_1 = 0U;
                    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_last = 0U;
                    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat = 0U;
                    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__traceback_state = 0U;
                } else {
                    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read 
                        = (0x3fU & ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read) 
                                    - (IData)(1U)));
                    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l114) {
                        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__traceback_state 
                            = ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat)
                                ? 4U : 5U);
                        if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat) {
                            vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat = 0U;
                            vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_last = 0U;
                        } else {
                            vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_last = 1U;
                        }
                    }
                    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_valid_1 = 1U;
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
                if ((1U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
                    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pkg_tail) {
                        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat 
                            = ((0x10U > (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write)) 
                               & ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_sel) 
                                  == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_select)));
                    }
                    if ((2U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt))) {
                        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read 
                            = (0x3fU & ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read) 
                                        - (IData)(1U)));
                        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__traceback_state 
                            = ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pkg_tail)
                                ? 4U : 1U);
                    }
                } else {
                    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l114) {
                        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__traceback_state = 0U;
                        vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_last = 1U;
                    } else {
                        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read 
                            = (0x3fU & ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read) 
                                        - (IData)(1U)));
                    }
                    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_valid_1 = 1U;
                }
            } else {
                if ((1U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
                    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read 
                        = (0x3fU & ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read) 
                                    - (IData)(1U)));
                    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l114) {
                        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__traceback_state = 2U;
                    }
                } else {
                    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_valid_1 = 0U;
                    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_last = 0U;
                    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l95) {
                        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__traceback_state = 3U;
                        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read 
                            = (0x3fU & ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write) 
                                        - (IData)(1U)));
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__5(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__5\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*5:0*/ __Vtableidx1;
    // Body
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_select 
        = vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_select;
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write 
        = vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write;
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l46 
        = (0x2fU <= (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write));
    if (vlTOPp->reset) {
        vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pkg_tail = 0U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish) {
            vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pkg_tail = 0U;
        } else {
            if (vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid) {
                vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pkg_tail 
                    = vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last;
            }
        }
    }
    __Vtableidx1 = (((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next) 
                     << 5U) | (((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next) 
                                << 4U) | (((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish) 
                                           << 3U) | 
                                          (((IData)(vlTOPp->raw_data_payload_last) 
                                            << 2U) 
                                           | ((((IData)(vlTOPp->raw_data_valid) 
                                                & (IData)(vlTOPp->raw_data_ready)) 
                                               << 1U) 
                                              | (IData)(vlTOPp->reset))))));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next 
        = vlTOPp->__Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next
        [__Vtableidx1];
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next 
        = vlTOPp->__Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next
        [__Vtableidx1];
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid 
        = vlTOPp->__Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid
        [__Vtableidx1];
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last 
        = vlTOPp->__Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last
        [__Vtableidx1];
    if ((0x10U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1 
            = vlTOPp->__Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1
            [__Vtableidx1];
    }
    vlTOPp->raw_data_ready = ((~ (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pipe_halt)) 
                              & (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1));
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__8(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__8\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt 
        = vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt;
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_sel 
        = vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_sel;
    vlTOPp->__Vtableidx2 = (7U & ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_sel)
                                   ? (((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__min_cursor) 
                                       << 1U) + (1U 
                                                 & ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port1) 
                                                    >> (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__min_cursor))))
                                   : (((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__min_cursor) 
                                       << 1U) + (1U 
                                                 & ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_survival_path_ram_0_port1) 
                                                    >> (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__min_cursor))))));
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_min_cursor_next 
        = vlTOPp->__Vtable2_ViterbiDecoder__DOT__tbu_core__DOT___zz_min_cursor_next
        [vlTOPp->__Vtableidx2];
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_tb_node_data_next 
        = vlTOPp->__Vtable2_ViterbiDecoder__DOT__tbu_core__DOT___zz_tb_node_data_next
        [vlTOPp->__Vtableidx2];
    if ((4U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((1U & (~ ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish = 1U;
            } else {
                if ((0x3fU == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read))) {
                    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat)))) {
                        vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__9(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__9\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l95 
        = (((0x10U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write)) 
            & ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_sel) 
               == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_select))) 
           | (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pkg_tail));
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat 
        = vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat;
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read 
        = vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read;
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state 
        = vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__traceback_state;
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l114 
        = (0x3fU == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read));
    vlTOPp->__Vtableidx3 = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state;
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string[0U] 
        = vlTOPp->__Vtable3_ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string
        [vlTOPp->__Vtableidx3][0U];
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string[1U] 
        = vlTOPp->__Vtable3_ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string
        [vlTOPp->__Vtableidx3][1U];
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string[2U] 
        = vlTOPp->__Vtable3_ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string
        [vlTOPp->__Vtableidx3][2U];
}

void VViterbiDecoder::_eval(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_eval\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__9(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VViterbiDecoder::_change_request(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_change_request\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VViterbiDecoder::_change_request_1(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_change_request_1\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VViterbiDecoder::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((raw_data_payload_last & 0xfeU))) {
        Verilated::overWidthError("raw_data_payload_last");}
    if (VL_UNLIKELY((_zz_in_b & 0xfcU))) {
        Verilated::overWidthError("_zz_in_b");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
