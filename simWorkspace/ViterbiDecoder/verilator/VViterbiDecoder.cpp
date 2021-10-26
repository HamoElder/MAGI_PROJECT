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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/ViterbiDecoder.v", 16, "",
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/ViterbiDecoder.v", 16, "",
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
    // Body
    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_sel 
        = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_sel;
    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_in 
        = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_in;
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_7 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->_zz_in_b) 
                              >> 1U))) + (1U & (IData)(vlTOPp->_zz_in_b))));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_6 
        = (3U & ((1U & ((IData)(vlTOPp->_zz_in_b) >> 1U)) 
                 + (1U & (~ (IData)(vlTOPp->_zz_in_b)))));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_1 
        = (3U & ((1U & (~ ((IData)(vlTOPp->_zz_in_b) 
                           >> 1U))) + (1U & (~ (IData)(vlTOPp->_zz_in_b)))));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_0 
        = (3U & ((1U & ((IData)(vlTOPp->_zz_in_b) >> 1U)) 
                 + (1U & (IData)(vlTOPp->_zz_in_b))));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_2 
        = (3U & ((1U & (1U ^ ((IData)(vlTOPp->_zz_in_b) 
                              >> 1U))) + (1U & (IData)(vlTOPp->_zz_in_b))));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_5 
        = (3U & ((1U & ((IData)(vlTOPp->_zz_in_b) >> 1U)) 
                 + (1U & (IData)(vlTOPp->_zz_in_b))));
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__3(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__3\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_3 
        = (3U & ((1U & ((IData)(vlTOPp->_zz_in_b) >> 1U)) 
                 + (1U & (~ (IData)(vlTOPp->_zz_in_b)))));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_4 
        = (3U & ((1U & (~ ((IData)(vlTOPp->_zz_in_b) 
                           >> 1U))) + (1U & (~ (IData)(vlTOPp->_zz_in_b)))));
    if (vlTOPp->clc) {
        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_sel = 0U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid) {
            if ((7U <= (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_in))) {
                vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_sel 
                    = (1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_sel)));
            }
        }
    }
    if (vlTOPp->clc) {
        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_in = 0U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid) {
            vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_in 
                = ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l32)
                    ? 0U : (0xffU & ((IData)(1U) + (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_in))));
        }
    }
    if (vlTOPp->clc) {
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0 = 0U;
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path = 0U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0 
                = ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1));
            vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path 
                = ((0xeU & (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path)) 
                   | (1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17))));
        }
    }
    if (vlTOPp->clc) {
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1 = 0U;
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path = 0U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1 
                = ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1));
            vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path 
                = ((0xdU & (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path)) 
                   | (2U & ((~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17)) 
                            << 1U)));
        }
    }
    if (vlTOPp->clc) {
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2 = 0U;
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path = 0U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2 
                = ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1));
            vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path 
                = ((0xbU & (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path)) 
                   | (4U & ((~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17)) 
                            << 2U)));
        }
    }
    if (vlTOPp->clc) {
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3 = 0U;
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path = 0U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3 
                = ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1));
            vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path 
                = ((7U & (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path)) 
                   | (8U & ((~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17)) 
                            << 3U)));
        }
    }
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_sel 
        = vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_sel;
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_in 
        = vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_in;
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l32 
        = (7U <= (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_in));
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
    if (vlTOPp->reset) {
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid = 0U;
    } else {
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid 
            = ((~ (IData)(vlTOPp->clc)) & (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next));
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid 
            = ((~ (IData)(vlTOPp->clc)) & (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next));
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid 
            = ((~ (IData)(vlTOPp->clc)) & (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next));
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid 
            = ((~ (IData)(vlTOPp->clc)) & (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next));
    }
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext));
    vlTOPp->__Vtableidx1 = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg;
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg_string[0U] 
        = vlTOPp->__Vtable1_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg_string
        [vlTOPp->__Vtableidx1][0U];
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg_string[1U] 
        = vlTOPp->__Vtable1_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg_string
        [vlTOPp->__Vtableidx1][1U];
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg_string[2U] 
        = vlTOPp->__Vtable1_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg_string
        [vlTOPp->__Vtableidx1][2U];
    vlTOPp->__Vtableidx3 = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg;
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_wantStart 
        = vlTOPp->__Vtable3_ViterbiDecoder__DOT__tbu_core__DOT__fsm_wantStart
        [vlTOPp->__Vtableidx3];
    vlTOPp->__Vtableidx4 = (((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_wantStart) 
                             << 5U) | (((0x54U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_in)) 
                                        << 4U) | ((
                                                   (0x54U 
                                                    == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_in)) 
                                                   << 3U) 
                                                  | (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg))));
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext 
        = vlTOPp->__Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext
        [vlTOPp->__Vtableidx4];
    vlTOPp->__Vtableidx2 = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext;
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext_string[0U] 
        = vlTOPp->__Vtable2_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext_string
        [vlTOPp->__Vtableidx2][0U];
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext_string[1U] 
        = vlTOPp->__Vtable2_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext_string
        [vlTOPp->__Vtableidx2][1U];
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext_string[2U] 
        = vlTOPp->__Vtable2_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext_string
        [vlTOPp->__Vtableidx2][2U];
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__6(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__6\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next 
        = vlTOPp->raw_data_valid;
}

void VViterbiDecoder::_eval(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_eval\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
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
    if (VL_UNLIKELY((_zz_in_b & 0xfcU))) {
        Verilated::overWidthError("_zz_in_b");}
    if (VL_UNLIKELY((clc & 0xfeU))) {
        Verilated::overWidthError("clc");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
