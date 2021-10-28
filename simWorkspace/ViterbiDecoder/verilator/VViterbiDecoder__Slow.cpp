// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VViterbiDecoder.h for the primary calling header

#include "VViterbiDecoder.h"
#include "VViterbiDecoder__Syms.h"

//==========
CData/*0:0*/ VViterbiDecoder::__Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[64];
CData/*0:0*/ VViterbiDecoder::__Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[64];
CData/*0:0*/ VViterbiDecoder::__Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[64];
CData/*0:0*/ VViterbiDecoder::__Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[64];
CData/*0:0*/ VViterbiDecoder::__Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[64];
CData/*1:0*/ VViterbiDecoder::__Vtable2_ViterbiDecoder__DOT__tbu_core__DOT___zz_min_cursor_next[8];
CData/*0:0*/ VViterbiDecoder::__Vtable2_ViterbiDecoder__DOT__tbu_core__DOT___zz_tb_node_data_next[8];
WData/*87:0*/ VViterbiDecoder::__Vtable3_ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string[8][3];

VL_CTOR_IMP(VViterbiDecoder) {
    VViterbiDecoder__Syms* __restrict vlSymsp = __VlSymsp = new VViterbiDecoder__Syms(this, name());
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VViterbiDecoder::__Vconfigure(VViterbiDecoder__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VViterbiDecoder::~VViterbiDecoder() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VViterbiDecoder::_initial__TOP__6(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_initial__TOP__6\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT____Vxrand4 
        = VL_RAND_RESET_I(4);
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT____Vxrand2 
        = VL_RAND_RESET_I(4);
}

void VViterbiDecoder::_settle__TOP__7(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_settle__TOP__7\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l46 
        = (0x2fU <= (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write));
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
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l95 
        = (((0x10U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write)) 
            & ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_sel) 
               == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_select))) 
           | (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pkg_tail));
    vlTOPp->raw_data_ready = ((~ (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pipe_halt)) 
                              & (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0) 
                      + (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_0)));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1) 
                      + (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_1)));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2) 
                      + (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_2)));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3) 
                      + (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_3)));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0) 
                      + (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_4)));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1) 
                      + (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_5)));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2) 
                      + (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_6)));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3) 
                      + (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_7)));
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
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1));
}

void VViterbiDecoder::_eval_initial(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_eval_initial\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->_initial__TOP__6(vlSymsp);
}

void VViterbiDecoder::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::final\n"); );
    // Variables
    VViterbiDecoder__Syms* __restrict vlSymsp = this->__VlSymsp;
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VViterbiDecoder::_eval_settle(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_eval_settle\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VViterbiDecoder::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_ready = VL_RAND_RESET_I(1);
    raw_data_payload_last = VL_RAND_RESET_I(1);
    _zz_in_b = VL_RAND_RESET_I(2);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0 = VL_RAND_RESET_I(16);
    ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1 = VL_RAND_RESET_I(16);
    ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2 = VL_RAND_RESET_I(16);
    ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3 = VL_RAND_RESET_I(16);
    ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_0 = VL_RAND_RESET_I(2);
    ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_1 = VL_RAND_RESET_I(2);
    ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_2 = VL_RAND_RESET_I(2);
    ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_3 = VL_RAND_RESET_I(2);
    ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_4 = VL_RAND_RESET_I(2);
    ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_5 = VL_RAND_RESET_I(2);
    ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_6 = VL_RAND_RESET_I(2);
    ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_7 = VL_RAND_RESET_I(2);
    ViterbiDecoder__DOT__pmu_core__DOT__survival_path = VL_RAND_RESET_I(4);
    ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next = VL_RAND_RESET_I(1);
    ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next = VL_RAND_RESET_I(1);
    ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid = VL_RAND_RESET_I(1);
    ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last = VL_RAND_RESET_I(1);
    ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1 = VL_RAND_RESET_I(1);
    ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0 = VL_RAND_RESET_I(16);
    ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1 = VL_RAND_RESET_I(16);
    ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17 = VL_RAND_RESET_I(1);
    ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0 = VL_RAND_RESET_I(16);
    ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1 = VL_RAND_RESET_I(16);
    ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17 = VL_RAND_RESET_I(1);
    ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0 = VL_RAND_RESET_I(16);
    ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1 = VL_RAND_RESET_I(16);
    ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17 = VL_RAND_RESET_I(1);
    ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0 = VL_RAND_RESET_I(16);
    ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1 = VL_RAND_RESET_I(16);
    ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17 = VL_RAND_RESET_I(1);
    ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val = VL_RAND_RESET_I(16);
    ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1 = VL_RAND_RESET_I(16);
    ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx = VL_RAND_RESET_I(2);
    ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_1 = VL_RAND_RESET_I(2);
    ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_2 = VL_RAND_RESET_I(16);
    ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_2 = VL_RAND_RESET_I(2);
    ViterbiDecoder__DOT__tbu_core__DOT____Vxrand4 = VL_RAND_RESET_I(4);
    ViterbiDecoder__DOT__tbu_core__DOT____Vxrand2 = VL_RAND_RESET_I(4);
    ViterbiDecoder__DOT__tbu_core__DOT___zz_survival_path_ram_0_port1 = VL_RAND_RESET_I(4);
    ViterbiDecoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port1 = VL_RAND_RESET_I(4);
    ViterbiDecoder__DOT__tbu_core__DOT___zz_min_cursor_next = VL_RAND_RESET_I(2);
    ViterbiDecoder__DOT__tbu_core__DOT___zz_tb_node_data_next = VL_RAND_RESET_I(1);
    ViterbiDecoder__DOT__tbu_core__DOT__ram_select = VL_RAND_RESET_I(1);
    ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write = VL_RAND_RESET_I(6);
    ViterbiDecoder__DOT__tbu_core__DOT__pkg_tail = VL_RAND_RESET_I(1);
    ViterbiDecoder__DOT__tbu_core__DOT__tb_finish = VL_RAND_RESET_I(1);
    ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l46 = VL_RAND_RESET_I(1);
    ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_sel = VL_RAND_RESET_I(1);
    ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read = VL_RAND_RESET_I(6);
    ViterbiDecoder__DOT__tbu_core__DOT__pipe_halt = VL_RAND_RESET_I(1);
    ViterbiDecoder__DOT__tbu_core__DOT__min_cursor = VL_RAND_RESET_I(2);
    ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat = VL_RAND_RESET_I(1);
    ViterbiDecoder__DOT__tbu_core__DOT__tb_node_data = VL_RAND_RESET_I(1);
    ViterbiDecoder__DOT__tbu_core__DOT__tb_node_valid_1 = VL_RAND_RESET_I(1);
    ViterbiDecoder__DOT__tbu_core__DOT__tb_node_last = VL_RAND_RESET_I(1);
    ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt = VL_RAND_RESET_I(2);
    ViterbiDecoder__DOT__tbu_core__DOT__traceback_state = VL_RAND_RESET_I(3);
    ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l95 = VL_RAND_RESET_I(1);
    ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l114 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(88, ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string);
    { int __Vi0=0; for (; __Vi0<48; ++__Vi0) {
            ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<48; ++__Vi0) {
            ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[__Vi0] = VL_RAND_RESET_I(4);
    }}
    ViterbiDecoder__DOT__tbu_core__DOT____Vlvbound1 = VL_RAND_RESET_I(4);
    ViterbiDecoder__DOT__tbu_core__DOT____Vlvbound3 = VL_RAND_RESET_I(4);
    __Vtablechg1[0] = 0xfU;
    __Vtablechg1[1] = 0x1fU;
    __Vtablechg1[2] = 0xfU;
    __Vtablechg1[3] = 0x1fU;
    __Vtablechg1[4] = 0x1fU;
    __Vtablechg1[5] = 0x1fU;
    __Vtablechg1[6] = 0x1fU;
    __Vtablechg1[7] = 0x1fU;
    __Vtablechg1[8] = 0x1fU;
    __Vtablechg1[9] = 0x1fU;
    __Vtablechg1[10] = 0x1fU;
    __Vtablechg1[11] = 0x1fU;
    __Vtablechg1[12] = 0x1fU;
    __Vtablechg1[13] = 0x1fU;
    __Vtablechg1[14] = 0x1fU;
    __Vtablechg1[15] = 0x1fU;
    __Vtablechg1[16] = 0xfU;
    __Vtablechg1[17] = 0x1fU;
    __Vtablechg1[18] = 0xfU;
    __Vtablechg1[19] = 0x1fU;
    __Vtablechg1[20] = 0x1fU;
    __Vtablechg1[21] = 0x1fU;
    __Vtablechg1[22] = 0x1fU;
    __Vtablechg1[23] = 0x1fU;
    __Vtablechg1[24] = 0x1fU;
    __Vtablechg1[25] = 0x1fU;
    __Vtablechg1[26] = 0x1fU;
    __Vtablechg1[27] = 0x1fU;
    __Vtablechg1[28] = 0x1fU;
    __Vtablechg1[29] = 0x1fU;
    __Vtablechg1[30] = 0x1fU;
    __Vtablechg1[31] = 0x1fU;
    __Vtablechg1[32] = 0xfU;
    __Vtablechg1[33] = 0x1fU;
    __Vtablechg1[34] = 0xfU;
    __Vtablechg1[35] = 0x1fU;
    __Vtablechg1[36] = 0x1fU;
    __Vtablechg1[37] = 0x1fU;
    __Vtablechg1[38] = 0x1fU;
    __Vtablechg1[39] = 0x1fU;
    __Vtablechg1[40] = 0x1fU;
    __Vtablechg1[41] = 0x1fU;
    __Vtablechg1[42] = 0x1fU;
    __Vtablechg1[43] = 0x1fU;
    __Vtablechg1[44] = 0x1fU;
    __Vtablechg1[45] = 0x1fU;
    __Vtablechg1[46] = 0x1fU;
    __Vtablechg1[47] = 0x1fU;
    __Vtablechg1[48] = 0xfU;
    __Vtablechg1[49] = 0x1fU;
    __Vtablechg1[50] = 0xfU;
    __Vtablechg1[51] = 0x1fU;
    __Vtablechg1[52] = 0x1fU;
    __Vtablechg1[53] = 0x1fU;
    __Vtablechg1[54] = 0x1fU;
    __Vtablechg1[55] = 0x1fU;
    __Vtablechg1[56] = 0x1fU;
    __Vtablechg1[57] = 0x1fU;
    __Vtablechg1[58] = 0x1fU;
    __Vtablechg1[59] = 0x1fU;
    __Vtablechg1[60] = 0x1fU;
    __Vtablechg1[61] = 0x1fU;
    __Vtablechg1[62] = 0x1fU;
    __Vtablechg1[63] = 0x1fU;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[0] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[1] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[2] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[3] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[4] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[5] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[6] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[7] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[8] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[9] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[10] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[11] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[12] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[13] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[14] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[15] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[16] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[17] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[18] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[19] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[20] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[21] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[22] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[23] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[24] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[25] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[26] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[27] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[28] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[29] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[30] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[31] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[32] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[33] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[34] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[35] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[36] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[37] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[38] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[39] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[40] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[41] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[42] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[43] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[44] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[45] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[46] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[47] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[48] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[49] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[50] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[51] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[52] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[53] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[54] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[55] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[56] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[57] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[58] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[59] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[60] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[61] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[62] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next[63] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[0] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[1] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[2] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[3] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[4] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[5] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[6] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[7] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[8] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[9] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[10] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[11] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[12] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[13] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[14] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[15] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[16] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[17] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[18] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[19] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[20] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[21] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[22] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[23] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[24] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[25] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[26] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[27] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[28] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[29] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[30] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[31] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[32] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[33] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[34] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[35] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[36] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[37] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[38] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[39] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[40] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[41] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[42] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[43] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[44] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[45] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[46] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[47] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[48] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[49] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[50] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[51] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[52] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[53] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[54] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[55] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[56] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[57] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[58] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[59] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[60] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[61] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[62] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next[63] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[0] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[1] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[2] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[3] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[4] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[5] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[6] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[7] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[8] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[9] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[10] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[11] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[12] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[13] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[14] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[15] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[16] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[17] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[18] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[19] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[20] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[21] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[22] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[23] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[24] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[25] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[26] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[27] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[28] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[29] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[30] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[31] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[32] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[33] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[34] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[35] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[36] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[37] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[38] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[39] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[40] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[41] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[42] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[43] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[44] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[45] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[46] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[47] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[48] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[49] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[50] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[51] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[52] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[53] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[54] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[55] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[56] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[57] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[58] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[59] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[60] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[61] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[62] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid[63] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[0] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[1] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[2] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[3] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[4] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[5] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[6] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[7] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[8] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[9] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[10] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[11] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[12] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[13] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[14] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[15] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[16] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[17] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[18] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[19] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[20] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[21] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[22] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[23] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[24] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[25] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[26] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[27] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[28] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[29] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[30] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[31] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[32] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[33] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[34] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[35] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[36] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[37] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[38] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[39] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[40] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[41] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[42] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[43] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[44] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[45] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[46] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[47] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[48] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[49] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[50] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[51] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[52] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[53] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[54] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[55] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[56] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[57] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[58] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[59] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[60] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[61] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[62] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last[63] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[0] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[1] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[2] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[3] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[4] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[5] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[6] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[7] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[8] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[9] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[10] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[11] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[12] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[13] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[14] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[15] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[16] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[17] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[18] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[19] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[20] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[21] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[22] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[23] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[24] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[25] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[26] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[27] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[28] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[29] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[30] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[31] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[32] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[33] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[34] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[35] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[36] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[37] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[38] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[39] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[40] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[41] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[42] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[43] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[44] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[45] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[46] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[47] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[48] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[49] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[50] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[51] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[52] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[53] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[54] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[55] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[56] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[57] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[58] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[59] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[60] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[61] = 0U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[62] = 1U;
    __Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1[63] = 0U;
    __Vtableidx2 = 0;
    __Vtable2_ViterbiDecoder__DOT__tbu_core__DOT___zz_min_cursor_next[0] = 0U;
    __Vtable2_ViterbiDecoder__DOT__tbu_core__DOT___zz_min_cursor_next[1] = 1U;
    __Vtable2_ViterbiDecoder__DOT__tbu_core__DOT___zz_min_cursor_next[2] = 2U;
    __Vtable2_ViterbiDecoder__DOT__tbu_core__DOT___zz_min_cursor_next[3] = 3U;
    __Vtable2_ViterbiDecoder__DOT__tbu_core__DOT___zz_min_cursor_next[4] = 0U;
    __Vtable2_ViterbiDecoder__DOT__tbu_core__DOT___zz_min_cursor_next[5] = 1U;
    __Vtable2_ViterbiDecoder__DOT__tbu_core__DOT___zz_min_cursor_next[6] = 2U;
    __Vtable2_ViterbiDecoder__DOT__tbu_core__DOT___zz_min_cursor_next[7] = 3U;
    __Vtable2_ViterbiDecoder__DOT__tbu_core__DOT___zz_tb_node_data_next[0] = 0U;
    __Vtable2_ViterbiDecoder__DOT__tbu_core__DOT___zz_tb_node_data_next[1] = 0U;
    __Vtable2_ViterbiDecoder__DOT__tbu_core__DOT___zz_tb_node_data_next[2] = 0U;
    __Vtable2_ViterbiDecoder__DOT__tbu_core__DOT___zz_tb_node_data_next[3] = 0U;
    __Vtable2_ViterbiDecoder__DOT__tbu_core__DOT___zz_tb_node_data_next[4] = 1U;
    __Vtable2_ViterbiDecoder__DOT__tbu_core__DOT___zz_tb_node_data_next[5] = 1U;
    __Vtable2_ViterbiDecoder__DOT__tbu_core__DOT___zz_tb_node_data_next[6] = 1U;
    __Vtable2_ViterbiDecoder__DOT__tbu_core__DOT___zz_tb_node_data_next[7] = 1U;
    __Vtableidx3 = 0;
    VL_CONST_W_3X(88,__Vtable3_ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string[0],0x0049444c,0x45202020,0x20202020);
    VL_CONST_W_3X(88,__Vtable3_ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string[1],0x00544220,0x20202020,0x20202020);
    VL_CONST_W_3X(88,__Vtable3_ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string[2],0x00444543,0x4f444520,0x20202020);
    VL_CONST_W_3X(88,__Vtable3_ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string[3],0x0048414c,0x54202020,0x20202020);
    VL_CONST_W_3X(88,__Vtable3_ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string[4],0x00544149,0x4c5f4445,0x434f4445);
    VL_CONST_W_3X(88,__Vtable3_ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string[5],0x0046494e,0x49534820,0x20202020);
    VL_CONST_W_3X(88,__Vtable3_ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string[6],0x003f3f3f,0x3f3f3f3f,0x3f3f3f3f);
    VL_CONST_W_3X(88,__Vtable3_ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string[7],0x003f3f3f,0x3f3f3f3f,0x3f3f3f3f);
    __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_select = VL_RAND_RESET_I(1);
    __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write = VL_RAND_RESET_I(6);
    __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read = VL_RAND_RESET_I(6);
    __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat = VL_RAND_RESET_I(1);
    __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__traceback_state = VL_RAND_RESET_I(3);
    __Vdlyvdim0__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0__v0 = 0;
    __Vdlyvval__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0__v0 = VL_RAND_RESET_I(4);
    __Vdlyvset__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0__v0 = 0;
    __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_sel = VL_RAND_RESET_I(1);
    __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt = VL_RAND_RESET_I(2);
    __Vm_traceActivity = 0;
}
