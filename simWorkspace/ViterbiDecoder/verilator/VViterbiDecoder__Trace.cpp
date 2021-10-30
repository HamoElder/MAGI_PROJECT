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
        if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 2U) | (vlTOPp->__Vm_traceActivity 
                                          >> 3U))))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x20U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
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
        vcdp->chgBus(c+1,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom[0]),2);
        vcdp->chgBus(c+2,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom[1]),2);
        vcdp->chgBus(c+3,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom[2]),2);
        vcdp->chgBus(c+4,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom[3]),2);
        vcdp->chgBus(c+5,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom[4]),2);
        vcdp->chgBus(c+6,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom[5]),2);
        vcdp->chgBus(c+7,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom[6]),2);
        vcdp->chgBus(c+8,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom[7]),2);
        vcdp->chgBit(c+65,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom[0]));
        vcdp->chgBit(c+66,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom[1]));
        vcdp->chgBit(c+67,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom[2]));
        vcdp->chgBit(c+68,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom[3]));
        vcdp->chgBit(c+69,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom[4]));
        vcdp->chgBit(c+70,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom[5]));
        vcdp->chgBit(c+71,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom[6]));
        vcdp->chgBit(c+72,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom[7]));
    }
}

void VViterbiDecoder::traceChgThis__3(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+129,(((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1))),16);
        vcdp->chgBit(c+137,((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+145,(((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1))),16);
        vcdp->chgBit(c+153,((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+161,(((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1))),16);
        vcdp->chgBit(c+169,((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+177,(((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1))),16);
        vcdp->chgBit(c+185,((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+193,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0),16);
        vcdp->chgBus(c+201,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1),16);
        vcdp->chgBit(c+209,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+217,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0),16);
        vcdp->chgBus(c+225,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1),16);
        vcdp->chgBit(c+233,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+241,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0),16);
        vcdp->chgBus(c+249,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1),16);
        vcdp->chgBit(c+257,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+265,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0),16);
        vcdp->chgBus(c+273,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1),16);
        vcdp->chgBit(c+281,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17));
    }
}

void VViterbiDecoder::traceChgThis__4(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+289,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__cursor),3);
        vcdp->chgBus(c+297,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom
                            [vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__cursor]),2);
        vcdp->chgBit(c+305,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom
                            [vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__cursor]));
    }
}

void VViterbiDecoder::traceChgThis__5(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+313,(vlTOPp->ViterbiDecoder__DOT__raw_data_fire));
    }
}

void VViterbiDecoder::traceChgThis__6(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgArray(c+321,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string),88);
    }
}

void VViterbiDecoder::traceChgThis__7(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+345,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_2),2);
        vcdp->chgBus(c+353,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path),4);
        vcdp->chgBit(c+361,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_data));
        vcdp->chgBit(c+369,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pipe_halt));
        vcdp->chgBus(c+377,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_0),16);
        vcdp->chgBus(c+385,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_1),16);
        vcdp->chgBus(c+393,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_2),16);
        vcdp->chgBus(c+401,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_3),16);
        vcdp->chgBus(c+409,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_4),16);
        vcdp->chgBus(c+417,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_5),16);
        vcdp->chgBus(c+425,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_6),16);
        vcdp->chgBus(c+433,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_7),16);
        vcdp->chgBus(c+441,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_2),16);
        vcdp->chgBus(c+449,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0),16);
        vcdp->chgBus(c+457,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1),16);
        vcdp->chgBus(c+465,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2),16);
        vcdp->chgBus(c+473,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3),16);
        vcdp->chgBus(c+481,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_0),2);
        vcdp->chgBus(c+489,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_1),2);
        vcdp->chgBus(c+497,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_2),2);
        vcdp->chgBus(c+505,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_3),2);
        vcdp->chgBus(c+513,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_4),2);
        vcdp->chgBus(c+521,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_5),2);
        vcdp->chgBus(c+529,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_6),2);
        vcdp->chgBus(c+537,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_7),2);
        vcdp->chgBus(c+545,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_survival_path_ram_0_port1),4);
        vcdp->chgBus(c+553,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port1),4);
        vcdp->chgBus(c+561,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__min_cursor),2);
    }
}

void VViterbiDecoder::traceChgThis__8(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+569,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1));
        vcdp->chgBit(c+577,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid));
        vcdp->chgBit(c+585,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last));
        vcdp->chgBit(c+593,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_valid_1));
        vcdp->chgBit(c+601,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_last));
        vcdp->chgBit(c+609,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next));
        vcdp->chgBit(c+617,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next));
        vcdp->chgBit(c+625,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_select));
        vcdp->chgBus(c+633,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write),6);
        vcdp->chgBit(c+641,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pkg_tail));
        vcdp->chgBit(c+649,((0x2fU <= (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write))));
        vcdp->chgBit(c+657,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__goto_tail));
    }
}

void VViterbiDecoder::traceChgThis__9(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+665,((((0x10U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write)) 
                              & ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_sel) 
                                 == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_select))) 
                             | (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pkg_tail))));
    }
}

void VViterbiDecoder::traceChgThis__10(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+673,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish));
        vcdp->chgBit(c+681,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_sel));
        vcdp->chgBus(c+689,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt),2);
        vcdp->chgBit(c+697,((3U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt))));
    }
}

void VViterbiDecoder::traceChgThis__11(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+705,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read),6);
        vcdp->chgBit(c+713,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat));
        vcdp->chgBus(c+721,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state),3);
        vcdp->chgBit(c+729,((0x2fU == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read))));
        vcdp->chgBit(c+737,((0U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read))));
    }
}

void VViterbiDecoder::traceChgThis__12(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+745,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+753,(vlTOPp->raw_data_ready));
        vcdp->chgBit(c+761,(vlTOPp->raw_data_payload_last));
        vcdp->chgBit(c+769,(vlTOPp->clk));
        vcdp->chgBit(c+777,(vlTOPp->reset));
        vcdp->chgBus(c+785,((3U & ((1U & ((IData)(vlTOPp->_zz_in_b) 
                                          >> 1U)) + 
                                   (1U & (IData)(vlTOPp->_zz_in_b))))),2);
        vcdp->chgBus(c+793,((3U & ((1U & (~ ((IData)(vlTOPp->_zz_in_b) 
                                             >> 1U))) 
                                   + (1U & (~ (IData)(vlTOPp->_zz_in_b)))))),2);
        vcdp->chgBus(c+801,((3U & ((1U & (1U ^ ((IData)(vlTOPp->_zz_in_b) 
                                                >> 1U))) 
                                   + (1U & (IData)(vlTOPp->_zz_in_b))))),2);
        vcdp->chgBus(c+809,((3U & ((1U & ((IData)(vlTOPp->_zz_in_b) 
                                          >> 1U)) + 
                                   (1U & (~ (IData)(vlTOPp->_zz_in_b)))))),2);
        vcdp->chgBit(c+817,(((IData)(vlTOPp->raw_data_payload_last) 
                             & (IData)(vlTOPp->ViterbiDecoder__DOT__raw_data_fire))));
        vcdp->chgBus(c+825,(vlTOPp->_zz_in_b),2);
        vcdp->chgBus(c+833,((3U & (~ (IData)(vlTOPp->_zz_in_b)))),2);
        vcdp->chgBus(c+841,((2U ^ (IData)(vlTOPp->_zz_in_b))),2);
        vcdp->chgBus(c+849,((1U ^ (IData)(vlTOPp->_zz_in_b))),2);
    }
}
