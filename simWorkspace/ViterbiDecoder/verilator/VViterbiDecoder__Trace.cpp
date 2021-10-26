// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VViterbiDecoder__Syms.h"


//======================

void VViterbiDecoder::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VViterbiDecoder* t = (VViterbiDecoder*)userthis;
    VViterbiDecoder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VViterbiDecoder::traceChgThis(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VViterbiDecoder::traceChgThis__2(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17)
                            ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0)
                            : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1))),16);
        vcdp->chgBit(c+9,((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+17,(((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17)
                             ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0)
                             : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1))),16);
        vcdp->chgBit(c+25,((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+33,(((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17)
                             ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0)
                             : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1))),16);
        vcdp->chgBit(c+41,((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+49,(((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17)
                             ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0)
                             : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1))),16);
        vcdp->chgBit(c+57,((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+65,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0),16);
        vcdp->chgBus(c+73,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1),16);
        vcdp->chgBit(c+81,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+89,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0),16);
        vcdp->chgBus(c+97,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1),16);
        vcdp->chgBit(c+105,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+113,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0),16);
        vcdp->chgBus(c+121,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1),16);
        vcdp->chgBit(c+129,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+137,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0),16);
        vcdp->chgBus(c+145,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1),16);
        vcdp->chgBit(c+153,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17));
    }
}

void VViterbiDecoder::traceChgThis__3(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+161,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_wantStart));
        vcdp->chgBus(c+169,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext),3);
        vcdp->chgArray(c+177,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg_string),96);
        vcdp->chgArray(c+201,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext_string),96);
    }
}

void VViterbiDecoder::traceChgThis__4(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+225,((((((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0) 
                                <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1))
                                ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0)
                                : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1)) 
                              <= (((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2) 
                                   <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3))
                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2)
                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3)))
                              ? (((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0) 
                                  <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1))
                                  ? 0U : 1U) : (((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2) 
                                                 <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3))
                                                 ? 2U
                                                 : 3U))),2);
        vcdp->chgBus(c+233,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path),4);
        vcdp->chgBus(c+241,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_0),16);
        vcdp->chgBus(c+249,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_1),16);
        vcdp->chgBus(c+257,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_2),16);
        vcdp->chgBus(c+265,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_3),16);
        vcdp->chgBus(c+273,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_4),16);
        vcdp->chgBus(c+281,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_5),16);
        vcdp->chgBus(c+289,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_6),16);
        vcdp->chgBus(c+297,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_7),16);
        vcdp->chgBus(c+305,((((((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0) 
                                <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1))
                                ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0)
                                : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1)) 
                              <= (((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2) 
                                   <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3))
                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2)
                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3)))
                              ? (((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0) 
                                  <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1))
                                  ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0)
                                  : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1))
                              : (((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2) 
                                  <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3))
                                  ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2)
                                  : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3)))),16);
        vcdp->chgBus(c+313,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0),16);
        vcdp->chgBus(c+321,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1),16);
        vcdp->chgBus(c+329,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2),16);
        vcdp->chgBus(c+337,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3),16);
        vcdp->chgBus(c+345,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_0),2);
        vcdp->chgBus(c+353,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_1),2);
        vcdp->chgBus(c+361,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_2),2);
        vcdp->chgBus(c+369,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_3),2);
        vcdp->chgBus(c+377,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_4),2);
        vcdp->chgBus(c+385,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_5),2);
        vcdp->chgBus(c+393,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_6),2);
        vcdp->chgBus(c+401,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_7),2);
        vcdp->chgBus(c+409,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_in),8);
        vcdp->chgBit(c+417,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_sel));
        vcdp->chgBit(c+425,((7U <= (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_in))));
        vcdp->chgBit(c+433,((0x54U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_in))));
    }
}

void VViterbiDecoder::traceChgThis__5(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+441,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid));
        vcdp->chgBus(c+449,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg),3);
    }
}

void VViterbiDecoder::traceChgThis__6(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+457,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next));
    }
}

void VViterbiDecoder::traceChgThis__7(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+465,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+473,(vlTOPp->raw_data_ready));
        vcdp->chgBit(c+481,(vlTOPp->clc));
        vcdp->chgBit(c+489,(vlTOPp->clk));
        vcdp->chgBit(c+497,(vlTOPp->reset));
        vcdp->chgBus(c+505,((3U & ((1U & ((IData)(vlTOPp->_zz_in_b) 
                                          >> 1U)) + 
                                   (1U & (IData)(vlTOPp->_zz_in_b))))),2);
        vcdp->chgBus(c+513,((3U & ((1U & (~ ((IData)(vlTOPp->_zz_in_b) 
                                             >> 1U))) 
                                   + (1U & (~ (IData)(vlTOPp->_zz_in_b)))))),2);
        vcdp->chgBus(c+521,((3U & ((1U & (1U ^ ((IData)(vlTOPp->_zz_in_b) 
                                                >> 1U))) 
                                   + (1U & (IData)(vlTOPp->_zz_in_b))))),2);
        vcdp->chgBus(c+529,((3U & ((1U & ((IData)(vlTOPp->_zz_in_b) 
                                          >> 1U)) + 
                                   (1U & (~ (IData)(vlTOPp->_zz_in_b)))))),2);
        vcdp->chgBus(c+537,(vlTOPp->_zz_in_b),2);
        vcdp->chgBus(c+545,((3U & (~ (IData)(vlTOPp->_zz_in_b)))),2);
        vcdp->chgBus(c+553,((2U ^ (IData)(vlTOPp->_zz_in_b))),2);
        vcdp->chgBus(c+561,((1U ^ (IData)(vlTOPp->_zz_in_b))),2);
    }
}
