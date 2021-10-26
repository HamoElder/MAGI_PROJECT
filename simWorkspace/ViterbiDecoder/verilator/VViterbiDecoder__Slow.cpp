// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VViterbiDecoder.h for the primary calling header

#include "VViterbiDecoder.h"
#include "VViterbiDecoder__Syms.h"

//==========
WData/*95:0*/ VViterbiDecoder::__Vtable1_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg_string[8][3];
WData/*95:0*/ VViterbiDecoder::__Vtable2_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext_string[8][3];
CData/*0:0*/ VViterbiDecoder::__Vtable3_ViterbiDecoder__DOT__tbu_core__DOT__fsm_wantStart[8];
CData/*2:0*/ VViterbiDecoder::__Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[64];

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

void VViterbiDecoder::_initial__TOP__1(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_initial__TOP__1\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->raw_data_ready = 1U;
}

void VViterbiDecoder::_settle__TOP__5(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_settle__TOP__5\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l32 
        = (7U <= (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_in));
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
    vlTOPp->__Vtableidx3 = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg;
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_wantStart 
        = vlTOPp->__Vtable3_ViterbiDecoder__DOT__tbu_core__DOT__fsm_wantStart
        [vlTOPp->__Vtableidx3];
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

void VViterbiDecoder::_eval_initial(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_eval_initial\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
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
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VViterbiDecoder::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_ready = VL_RAND_RESET_I(1);
    _zz_in_b = VL_RAND_RESET_I(2);
    clc = VL_RAND_RESET_I(1);
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
    ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid = VL_RAND_RESET_I(1);
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
    ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_in = VL_RAND_RESET_I(8);
    ViterbiDecoder__DOT__tbu_core__DOT__ram_sel = VL_RAND_RESET_I(1);
    ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l32 = VL_RAND_RESET_I(1);
    ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_out = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(168, ViterbiDecoder__DOT__tbu_core__DOT__decoded_lifo_0);
    VL_RAND_RESET_W(168, ViterbiDecoder__DOT__tbu_core__DOT__decoded_lifo_1);
    ViterbiDecoder__DOT__tbu_core__DOT__fsm_wantStart = VL_RAND_RESET_I(1);
    ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg = VL_RAND_RESET_I(3);
    ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(96, ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg_string);
    VL_RAND_RESET_W(96, ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext_string);
    __Vtableidx1 = 0;
    VL_CONST_W_3X(96,__Vtable1_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg_string[0],0x66736d5f,0x424f4f54,0x20202020);
    VL_CONST_W_3X(96,__Vtable1_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg_string[1],0x66736d5f,0x49444c45,0x20202020);
    VL_CONST_W_3X(96,__Vtable1_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg_string[2],0x66736d5f,0x54423020,0x20202020);
    VL_CONST_W_3X(96,__Vtable1_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg_string[3],0x66736d5f,0x4445434f,0x44455f30);
    VL_CONST_W_3X(96,__Vtable1_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg_string[4],0x66736d5f,0x54423120,0x20202020);
    VL_CONST_W_3X(96,__Vtable1_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg_string[5],0x66736d5f,0x4445434f,0x44455f31);
    VL_CONST_W_3X(96,__Vtable1_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg_string[6],0x66736d5f,0x57414954,0x20202020);
    VL_CONST_W_3X(96,__Vtable1_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg_string[7],0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f);
    __Vtableidx2 = 0;
    VL_CONST_W_3X(96,__Vtable2_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext_string[0],0x66736d5f,0x424f4f54,0x20202020);
    VL_CONST_W_3X(96,__Vtable2_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext_string[1],0x66736d5f,0x49444c45,0x20202020);
    VL_CONST_W_3X(96,__Vtable2_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext_string[2],0x66736d5f,0x54423020,0x20202020);
    VL_CONST_W_3X(96,__Vtable2_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext_string[3],0x66736d5f,0x4445434f,0x44455f30);
    VL_CONST_W_3X(96,__Vtable2_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext_string[4],0x66736d5f,0x54423120,0x20202020);
    VL_CONST_W_3X(96,__Vtable2_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext_string[5],0x66736d5f,0x4445434f,0x44455f31);
    VL_CONST_W_3X(96,__Vtable2_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext_string[6],0x66736d5f,0x57414954,0x20202020);
    VL_CONST_W_3X(96,__Vtable2_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext_string[7],0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f);
    __Vtableidx3 = 0;
    __Vtable3_ViterbiDecoder__DOT__tbu_core__DOT__fsm_wantStart[0] = 1U;
    __Vtable3_ViterbiDecoder__DOT__tbu_core__DOT__fsm_wantStart[1] = 0U;
    __Vtable3_ViterbiDecoder__DOT__tbu_core__DOT__fsm_wantStart[2] = 0U;
    __Vtable3_ViterbiDecoder__DOT__tbu_core__DOT__fsm_wantStart[3] = 0U;
    __Vtable3_ViterbiDecoder__DOT__tbu_core__DOT__fsm_wantStart[4] = 0U;
    __Vtable3_ViterbiDecoder__DOT__tbu_core__DOT__fsm_wantStart[5] = 0U;
    __Vtable3_ViterbiDecoder__DOT__tbu_core__DOT__fsm_wantStart[6] = 0U;
    __Vtable3_ViterbiDecoder__DOT__tbu_core__DOT__fsm_wantStart[7] = 1U;
    __Vtableidx4 = 0;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[0] = 0U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[1] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[2] = 2U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[3] = 3U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[4] = 4U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[5] = 5U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[6] = 6U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[7] = 7U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[8] = 0U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[9] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[10] = 2U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[11] = 3U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[12] = 4U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[13] = 5U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[14] = 2U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[15] = 7U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[16] = 0U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[17] = 6U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[18] = 2U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[19] = 3U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[20] = 4U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[21] = 5U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[22] = 6U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[23] = 7U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[24] = 0U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[25] = 6U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[26] = 2U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[27] = 3U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[28] = 4U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[29] = 5U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[30] = 2U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[31] = 7U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[32] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[33] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[34] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[35] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[36] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[37] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[38] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[39] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[40] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[41] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[42] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[43] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[44] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[45] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[46] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[47] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[48] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[49] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[50] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[51] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[52] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[53] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[54] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[55] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[56] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[57] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[58] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[59] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[60] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[61] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[62] = 1U;
    __Vtable4_ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext[63] = 1U;
    __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_in = VL_RAND_RESET_I(8);
    __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_sel = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
