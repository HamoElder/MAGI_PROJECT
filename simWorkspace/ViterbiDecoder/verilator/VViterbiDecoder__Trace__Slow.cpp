// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VViterbiDecoder__Syms.h"


//======================

void VViterbiDecoder::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VViterbiDecoder::traceInit, &VViterbiDecoder::traceFull, &VViterbiDecoder::traceChg, this);
}
void VViterbiDecoder::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VViterbiDecoder* t = (VViterbiDecoder*)userthis;
    VViterbiDecoder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VViterbiDecoder::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VViterbiDecoder* t = (VViterbiDecoder*)userthis;
    VViterbiDecoder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VViterbiDecoder::traceInitThis(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VViterbiDecoder::traceFullThis(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VViterbiDecoder::traceInitThis__1(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+465,"raw_data_valid", false,-1);
        vcdp->declBit(c+473,"raw_data_ready", false,-1);
        vcdp->declBit(c+481,"clc", false,-1);
        vcdp->declBit(c+489,"clk", false,-1);
        vcdp->declBit(c+497,"reset", false,-1);
        vcdp->declBit(c+465,"ViterbiDecoder raw_data_valid", false,-1);
        vcdp->declBit(c+473,"ViterbiDecoder raw_data_ready", false,-1);
        vcdp->declBit(c+481,"ViterbiDecoder clc", false,-1);
        vcdp->declBit(c+489,"ViterbiDecoder clk", false,-1);
        vcdp->declBit(c+497,"ViterbiDecoder reset", false,-1);
        vcdp->declBus(c+225,"ViterbiDecoder pmu_core_min_idx", false,-1, 1,0);
        vcdp->declBit(c+441,"ViterbiDecoder pmu_core_s_path_valid", false,-1);
        vcdp->declBus(c+233,"ViterbiDecoder pmu_core_s_path_payload", false,-1, 3,0);
        vcdp->declBit(c+465,"ViterbiDecoder pmu_core raw_data_valid", false,-1);
        vcdp->declBit(c+481,"ViterbiDecoder pmu_core clc", false,-1);
        vcdp->declBus(c+225,"ViterbiDecoder pmu_core min_idx", false,-1, 1,0);
        vcdp->declBit(c+441,"ViterbiDecoder pmu_core s_path_valid", false,-1);
        vcdp->declBus(c+233,"ViterbiDecoder pmu_core s_path_payload", false,-1, 3,0);
        vcdp->declBit(c+489,"ViterbiDecoder pmu_core clk", false,-1);
        vcdp->declBit(c+497,"ViterbiDecoder pmu_core reset", false,-1);
        vcdp->declBus(c+241,"ViterbiDecoder pmu_core addCompareSelect_4_dist_0", false,-1, 15,0);
        vcdp->declBus(c+249,"ViterbiDecoder pmu_core addCompareSelect_4_dist_1", false,-1, 15,0);
        vcdp->declBus(c+257,"ViterbiDecoder pmu_core addCompareSelect_5_dist_0", false,-1, 15,0);
        vcdp->declBus(c+265,"ViterbiDecoder pmu_core addCompareSelect_5_dist_1", false,-1, 15,0);
        vcdp->declBus(c+273,"ViterbiDecoder pmu_core addCompareSelect_6_dist_0", false,-1, 15,0);
        vcdp->declBus(c+281,"ViterbiDecoder pmu_core addCompareSelect_6_dist_1", false,-1, 15,0);
        vcdp->declBus(c+289,"ViterbiDecoder pmu_core addCompareSelect_7_dist_0", false,-1, 15,0);
        vcdp->declBus(c+297,"ViterbiDecoder pmu_core addCompareSelect_7_dist_1", false,-1, 15,0);
        vcdp->declBus(c+505,"ViterbiDecoder pmu_core branchMetric_4_dist_0", false,-1, 1,0);
        vcdp->declBus(c+513,"ViterbiDecoder pmu_core branchMetric_4_dist_1", false,-1, 1,0);
        vcdp->declBus(c+1,"ViterbiDecoder pmu_core addCompareSelect_4_state_weight", false,-1, 15,0);
        vcdp->declBit(c+9,"ViterbiDecoder pmu_core addCompareSelect_4_decision", false,-1);
        vcdp->declBus(c+521,"ViterbiDecoder pmu_core branchMetric_5_dist_0", false,-1, 1,0);
        vcdp->declBus(c+529,"ViterbiDecoder pmu_core branchMetric_5_dist_1", false,-1, 1,0);
        vcdp->declBus(c+17,"ViterbiDecoder pmu_core addCompareSelect_5_state_weight", false,-1, 15,0);
        vcdp->declBit(c+25,"ViterbiDecoder pmu_core addCompareSelect_5_decision", false,-1);
        vcdp->declBus(c+513,"ViterbiDecoder pmu_core branchMetric_6_dist_0", false,-1, 1,0);
        vcdp->declBus(c+505,"ViterbiDecoder pmu_core branchMetric_6_dist_1", false,-1, 1,0);
        vcdp->declBus(c+33,"ViterbiDecoder pmu_core addCompareSelect_6_state_weight", false,-1, 15,0);
        vcdp->declBit(c+41,"ViterbiDecoder pmu_core addCompareSelect_6_decision", false,-1);
        vcdp->declBus(c+529,"ViterbiDecoder pmu_core branchMetric_7_dist_0", false,-1, 1,0);
        vcdp->declBus(c+521,"ViterbiDecoder pmu_core branchMetric_7_dist_1", false,-1, 1,0);
        vcdp->declBus(c+49,"ViterbiDecoder pmu_core addCompareSelect_7_state_weight", false,-1, 15,0);
        vcdp->declBit(c+57,"ViterbiDecoder pmu_core addCompareSelect_7_decision", false,-1);
        vcdp->declBus(c+305,"ViterbiDecoder pmu_core minVal_1_min_val", false,-1, 15,0);
        vcdp->declBus(c+225,"ViterbiDecoder pmu_core minVal_1_min_idx", false,-1, 1,0);
        vcdp->declBus(c+313,"ViterbiDecoder pmu_core node_weight_0", false,-1, 15,0);
        vcdp->declBus(c+321,"ViterbiDecoder pmu_core node_weight_1", false,-1, 15,0);
        vcdp->declBus(c+329,"ViterbiDecoder pmu_core node_weight_2", false,-1, 15,0);
        vcdp->declBus(c+337,"ViterbiDecoder pmu_core node_weight_3", false,-1, 15,0);
        vcdp->declBus(c+345,"ViterbiDecoder pmu_core candidate_branches_0", false,-1, 1,0);
        vcdp->declBus(c+353,"ViterbiDecoder pmu_core candidate_branches_1", false,-1, 1,0);
        vcdp->declBus(c+361,"ViterbiDecoder pmu_core candidate_branches_2", false,-1, 1,0);
        vcdp->declBus(c+369,"ViterbiDecoder pmu_core candidate_branches_3", false,-1, 1,0);
        vcdp->declBus(c+377,"ViterbiDecoder pmu_core candidate_branches_4", false,-1, 1,0);
        vcdp->declBus(c+385,"ViterbiDecoder pmu_core candidate_branches_5", false,-1, 1,0);
        vcdp->declBus(c+393,"ViterbiDecoder pmu_core candidate_branches_6", false,-1, 1,0);
        vcdp->declBus(c+401,"ViterbiDecoder pmu_core candidate_branches_7", false,-1, 1,0);
        vcdp->declBus(c+233,"ViterbiDecoder pmu_core survival_path", false,-1, 3,0);
        vcdp->declBit(c+457,"ViterbiDecoder pmu_core raw_data_next", false,-1);
        vcdp->declBit(c+441,"ViterbiDecoder pmu_core survival_path_valid", false,-1);
        vcdp->declBus(c+505,"ViterbiDecoder pmu_core branchMetric_4 dist_0", false,-1, 1,0);
        vcdp->declBus(c+513,"ViterbiDecoder pmu_core branchMetric_4 dist_1", false,-1, 1,0);
        vcdp->declBus(c+505,"ViterbiDecoder pmu_core branchMetric_4 hammingDistance_8_distance", false,-1, 1,0);
        vcdp->declBus(c+513,"ViterbiDecoder pmu_core branchMetric_4 hammingDistance_9_distance", false,-1, 1,0);
        vcdp->declBus(c+569,"ViterbiDecoder pmu_core branchMetric_4 hammingDistance_8 in_a", false,-1, 1,0);
        vcdp->declBus(c+537,"ViterbiDecoder pmu_core branchMetric_4 hammingDistance_8 in_b", false,-1, 1,0);
        vcdp->declBus(c+505,"ViterbiDecoder pmu_core branchMetric_4 hammingDistance_8 distance", false,-1, 1,0);
        vcdp->declBus(c+537,"ViterbiDecoder pmu_core branchMetric_4 hammingDistance_8 xorResult", false,-1, 1,0);
        vcdp->declBus(c+577,"ViterbiDecoder pmu_core branchMetric_4 hammingDistance_9 in_a", false,-1, 1,0);
        vcdp->declBus(c+537,"ViterbiDecoder pmu_core branchMetric_4 hammingDistance_9 in_b", false,-1, 1,0);
        vcdp->declBus(c+513,"ViterbiDecoder pmu_core branchMetric_4 hammingDistance_9 distance", false,-1, 1,0);
        vcdp->declBus(c+545,"ViterbiDecoder pmu_core branchMetric_4 hammingDistance_9 xorResult", false,-1, 1,0);
        vcdp->declBus(c+313,"ViterbiDecoder pmu_core addCompareSelect_4 last_state_weight_0", false,-1, 15,0);
        vcdp->declBus(c+321,"ViterbiDecoder pmu_core addCompareSelect_4 last_state_weight_1", false,-1, 15,0);
        vcdp->declBus(c+241,"ViterbiDecoder pmu_core addCompareSelect_4 dist_0", false,-1, 15,0);
        vcdp->declBus(c+249,"ViterbiDecoder pmu_core addCompareSelect_4 dist_1", false,-1, 15,0);
        vcdp->declBus(c+1,"ViterbiDecoder pmu_core addCompareSelect_4 state_weight", false,-1, 15,0);
        vcdp->declBit(c+9,"ViterbiDecoder pmu_core addCompareSelect_4 decision", false,-1);
        vcdp->declBus(c+65,"ViterbiDecoder pmu_core addCompareSelect_4 branch_weight_0", false,-1, 15,0);
        vcdp->declBus(c+73,"ViterbiDecoder pmu_core addCompareSelect_4 branch_weight_1", false,-1, 15,0);
        vcdp->declBit(c+81,"ViterbiDecoder pmu_core addCompareSelect_4 when_AddCompareSelect_l17", false,-1);
        vcdp->declBus(c+521,"ViterbiDecoder pmu_core branchMetric_5 dist_0", false,-1, 1,0);
        vcdp->declBus(c+529,"ViterbiDecoder pmu_core branchMetric_5 dist_1", false,-1, 1,0);
        vcdp->declBus(c+521,"ViterbiDecoder pmu_core branchMetric_5 hammingDistance_8_distance", false,-1, 1,0);
        vcdp->declBus(c+529,"ViterbiDecoder pmu_core branchMetric_5 hammingDistance_9_distance", false,-1, 1,0);
        vcdp->declBus(c+585,"ViterbiDecoder pmu_core branchMetric_5 hammingDistance_8 in_a", false,-1, 1,0);
        vcdp->declBus(c+537,"ViterbiDecoder pmu_core branchMetric_5 hammingDistance_8 in_b", false,-1, 1,0);
        vcdp->declBus(c+521,"ViterbiDecoder pmu_core branchMetric_5 hammingDistance_8 distance", false,-1, 1,0);
        vcdp->declBus(c+553,"ViterbiDecoder pmu_core branchMetric_5 hammingDistance_8 xorResult", false,-1, 1,0);
        vcdp->declBus(c+593,"ViterbiDecoder pmu_core branchMetric_5 hammingDistance_9 in_a", false,-1, 1,0);
        vcdp->declBus(c+537,"ViterbiDecoder pmu_core branchMetric_5 hammingDistance_9 in_b", false,-1, 1,0);
        vcdp->declBus(c+529,"ViterbiDecoder pmu_core branchMetric_5 hammingDistance_9 distance", false,-1, 1,0);
        vcdp->declBus(c+561,"ViterbiDecoder pmu_core branchMetric_5 hammingDistance_9 xorResult", false,-1, 1,0);
        vcdp->declBus(c+329,"ViterbiDecoder pmu_core addCompareSelect_5 last_state_weight_0", false,-1, 15,0);
        vcdp->declBus(c+337,"ViterbiDecoder pmu_core addCompareSelect_5 last_state_weight_1", false,-1, 15,0);
        vcdp->declBus(c+257,"ViterbiDecoder pmu_core addCompareSelect_5 dist_0", false,-1, 15,0);
        vcdp->declBus(c+265,"ViterbiDecoder pmu_core addCompareSelect_5 dist_1", false,-1, 15,0);
        vcdp->declBus(c+17,"ViterbiDecoder pmu_core addCompareSelect_5 state_weight", false,-1, 15,0);
        vcdp->declBit(c+25,"ViterbiDecoder pmu_core addCompareSelect_5 decision", false,-1);
        vcdp->declBus(c+89,"ViterbiDecoder pmu_core addCompareSelect_5 branch_weight_0", false,-1, 15,0);
        vcdp->declBus(c+97,"ViterbiDecoder pmu_core addCompareSelect_5 branch_weight_1", false,-1, 15,0);
        vcdp->declBit(c+105,"ViterbiDecoder pmu_core addCompareSelect_5 when_AddCompareSelect_l17", false,-1);
        vcdp->declBus(c+513,"ViterbiDecoder pmu_core branchMetric_6 dist_0", false,-1, 1,0);
        vcdp->declBus(c+505,"ViterbiDecoder pmu_core branchMetric_6 dist_1", false,-1, 1,0);
        vcdp->declBus(c+513,"ViterbiDecoder pmu_core branchMetric_6 hammingDistance_8_distance", false,-1, 1,0);
        vcdp->declBus(c+505,"ViterbiDecoder pmu_core branchMetric_6 hammingDistance_9_distance", false,-1, 1,0);
        vcdp->declBus(c+577,"ViterbiDecoder pmu_core branchMetric_6 hammingDistance_8 in_a", false,-1, 1,0);
        vcdp->declBus(c+537,"ViterbiDecoder pmu_core branchMetric_6 hammingDistance_8 in_b", false,-1, 1,0);
        vcdp->declBus(c+513,"ViterbiDecoder pmu_core branchMetric_6 hammingDistance_8 distance", false,-1, 1,0);
        vcdp->declBus(c+545,"ViterbiDecoder pmu_core branchMetric_6 hammingDistance_8 xorResult", false,-1, 1,0);
        vcdp->declBus(c+569,"ViterbiDecoder pmu_core branchMetric_6 hammingDistance_9 in_a", false,-1, 1,0);
        vcdp->declBus(c+537,"ViterbiDecoder pmu_core branchMetric_6 hammingDistance_9 in_b", false,-1, 1,0);
        vcdp->declBus(c+505,"ViterbiDecoder pmu_core branchMetric_6 hammingDistance_9 distance", false,-1, 1,0);
        vcdp->declBus(c+537,"ViterbiDecoder pmu_core branchMetric_6 hammingDistance_9 xorResult", false,-1, 1,0);
        vcdp->declBus(c+313,"ViterbiDecoder pmu_core addCompareSelect_6 last_state_weight_0", false,-1, 15,0);
        vcdp->declBus(c+321,"ViterbiDecoder pmu_core addCompareSelect_6 last_state_weight_1", false,-1, 15,0);
        vcdp->declBus(c+273,"ViterbiDecoder pmu_core addCompareSelect_6 dist_0", false,-1, 15,0);
        vcdp->declBus(c+281,"ViterbiDecoder pmu_core addCompareSelect_6 dist_1", false,-1, 15,0);
        vcdp->declBus(c+33,"ViterbiDecoder pmu_core addCompareSelect_6 state_weight", false,-1, 15,0);
        vcdp->declBit(c+41,"ViterbiDecoder pmu_core addCompareSelect_6 decision", false,-1);
        vcdp->declBus(c+113,"ViterbiDecoder pmu_core addCompareSelect_6 branch_weight_0", false,-1, 15,0);
        vcdp->declBus(c+121,"ViterbiDecoder pmu_core addCompareSelect_6 branch_weight_1", false,-1, 15,0);
        vcdp->declBit(c+129,"ViterbiDecoder pmu_core addCompareSelect_6 when_AddCompareSelect_l17", false,-1);
        vcdp->declBus(c+529,"ViterbiDecoder pmu_core branchMetric_7 dist_0", false,-1, 1,0);
        vcdp->declBus(c+521,"ViterbiDecoder pmu_core branchMetric_7 dist_1", false,-1, 1,0);
        vcdp->declBus(c+529,"ViterbiDecoder pmu_core branchMetric_7 hammingDistance_8_distance", false,-1, 1,0);
        vcdp->declBus(c+521,"ViterbiDecoder pmu_core branchMetric_7 hammingDistance_9_distance", false,-1, 1,0);
        vcdp->declBus(c+593,"ViterbiDecoder pmu_core branchMetric_7 hammingDistance_8 in_a", false,-1, 1,0);
        vcdp->declBus(c+537,"ViterbiDecoder pmu_core branchMetric_7 hammingDistance_8 in_b", false,-1, 1,0);
        vcdp->declBus(c+529,"ViterbiDecoder pmu_core branchMetric_7 hammingDistance_8 distance", false,-1, 1,0);
        vcdp->declBus(c+561,"ViterbiDecoder pmu_core branchMetric_7 hammingDistance_8 xorResult", false,-1, 1,0);
        vcdp->declBus(c+585,"ViterbiDecoder pmu_core branchMetric_7 hammingDistance_9 in_a", false,-1, 1,0);
        vcdp->declBus(c+537,"ViterbiDecoder pmu_core branchMetric_7 hammingDistance_9 in_b", false,-1, 1,0);
        vcdp->declBus(c+521,"ViterbiDecoder pmu_core branchMetric_7 hammingDistance_9 distance", false,-1, 1,0);
        vcdp->declBus(c+553,"ViterbiDecoder pmu_core branchMetric_7 hammingDistance_9 xorResult", false,-1, 1,0);
        vcdp->declBus(c+329,"ViterbiDecoder pmu_core addCompareSelect_7 last_state_weight_0", false,-1, 15,0);
        vcdp->declBus(c+337,"ViterbiDecoder pmu_core addCompareSelect_7 last_state_weight_1", false,-1, 15,0);
        vcdp->declBus(c+289,"ViterbiDecoder pmu_core addCompareSelect_7 dist_0", false,-1, 15,0);
        vcdp->declBus(c+297,"ViterbiDecoder pmu_core addCompareSelect_7 dist_1", false,-1, 15,0);
        vcdp->declBus(c+49,"ViterbiDecoder pmu_core addCompareSelect_7 state_weight", false,-1, 15,0);
        vcdp->declBit(c+57,"ViterbiDecoder pmu_core addCompareSelect_7 decision", false,-1);
        vcdp->declBus(c+137,"ViterbiDecoder pmu_core addCompareSelect_7 branch_weight_0", false,-1, 15,0);
        vcdp->declBus(c+145,"ViterbiDecoder pmu_core addCompareSelect_7 branch_weight_1", false,-1, 15,0);
        vcdp->declBit(c+153,"ViterbiDecoder pmu_core addCompareSelect_7 when_AddCompareSelect_l17", false,-1);
        vcdp->declBus(c+313,"ViterbiDecoder pmu_core minVal_1 data_0", false,-1, 15,0);
        vcdp->declBus(c+321,"ViterbiDecoder pmu_core minVal_1 data_1", false,-1, 15,0);
        vcdp->declBus(c+329,"ViterbiDecoder pmu_core minVal_1 data_2", false,-1, 15,0);
        vcdp->declBus(c+337,"ViterbiDecoder pmu_core minVal_1 data_3", false,-1, 15,0);
        vcdp->declBus(c+305,"ViterbiDecoder pmu_core minVal_1 min_val", false,-1, 15,0);
        vcdp->declBus(c+225,"ViterbiDecoder pmu_core minVal_1 min_idx", false,-1, 1,0);
        vcdp->declBus(c+225,"ViterbiDecoder tbu_core min_idx", false,-1, 1,0);
        vcdp->declBit(c+441,"ViterbiDecoder tbu_core s_path_valid", false,-1);
        vcdp->declBus(c+233,"ViterbiDecoder tbu_core s_path_payload", false,-1, 3,0);
        vcdp->declBit(c+481,"ViterbiDecoder tbu_core clc", false,-1);
        vcdp->declBit(c+489,"ViterbiDecoder tbu_core clk", false,-1);
        vcdp->declBit(c+497,"ViterbiDecoder tbu_core reset", false,-1);
        vcdp->declBus(c+409,"ViterbiDecoder tbu_core ram_addr_in", false,-1, 7,0);
        vcdp->declBit(c+417,"ViterbiDecoder tbu_core ram_sel", false,-1);
        vcdp->declBit(c+425,"ViterbiDecoder tbu_core when_Traceback_l32", false,-1);
        vcdp->declBus(c+601,"ViterbiDecoder tbu_core ram_addr_out", false,-1, 7,0);
        vcdp->declArray(c+609,"ViterbiDecoder tbu_core decoded_lifo_0", false,-1, 167,0);
        vcdp->declArray(c+657,"ViterbiDecoder tbu_core decoded_lifo_1", false,-1, 167,0);
        vcdp->declBit(c+705,"ViterbiDecoder tbu_core fsm_wantExit", false,-1);
        vcdp->declBit(c+161,"ViterbiDecoder tbu_core fsm_wantStart", false,-1);
        vcdp->declBit(c+705,"ViterbiDecoder tbu_core fsm_wantKill", false,-1);
        vcdp->declBus(c+449,"ViterbiDecoder tbu_core fsm_stateReg", false,-1, 2,0);
        vcdp->declBus(c+169,"ViterbiDecoder tbu_core fsm_stateNext", false,-1, 2,0);
        vcdp->declBit(c+433,"ViterbiDecoder tbu_core when_Traceback_l50", false,-1);
        vcdp->declBit(c+433,"ViterbiDecoder tbu_core when_Traceback_l69", false,-1);
        vcdp->declArray(c+177,"ViterbiDecoder tbu_core fsm_stateReg_string", false,-1, 95,0);
        vcdp->declArray(c+201,"ViterbiDecoder tbu_core fsm_stateNext_string", false,-1, 95,0);
    }
}

void VViterbiDecoder::traceFullThis__1(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17)
                             ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0)
                             : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1))),16);
        vcdp->fullBit(c+9,((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17)))));
        vcdp->fullBus(c+17,(((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1))),16);
        vcdp->fullBit(c+25,((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17)))));
        vcdp->fullBus(c+33,(((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1))),16);
        vcdp->fullBit(c+41,((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17)))));
        vcdp->fullBus(c+49,(((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1))),16);
        vcdp->fullBit(c+57,((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17)))));
        vcdp->fullBus(c+65,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0),16);
        vcdp->fullBus(c+73,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1),16);
        vcdp->fullBit(c+81,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17));
        vcdp->fullBus(c+89,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0),16);
        vcdp->fullBus(c+97,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1),16);
        vcdp->fullBit(c+105,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17));
        vcdp->fullBus(c+113,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0),16);
        vcdp->fullBus(c+121,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1),16);
        vcdp->fullBit(c+129,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17));
        vcdp->fullBus(c+137,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0),16);
        vcdp->fullBus(c+145,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1),16);
        vcdp->fullBit(c+153,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17));
        vcdp->fullBit(c+161,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_wantStart));
        vcdp->fullBus(c+169,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext),3);
        vcdp->fullArray(c+177,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg_string),96);
        vcdp->fullArray(c+201,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateNext_string),96);
        vcdp->fullBus(c+225,((((((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0) 
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
        vcdp->fullBus(c+233,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path),4);
        vcdp->fullBus(c+241,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_0),16);
        vcdp->fullBus(c+249,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_1),16);
        vcdp->fullBus(c+257,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_2),16);
        vcdp->fullBus(c+265,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_3),16);
        vcdp->fullBus(c+273,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_4),16);
        vcdp->fullBus(c+281,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_5),16);
        vcdp->fullBus(c+289,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_6),16);
        vcdp->fullBus(c+297,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_7),16);
        vcdp->fullBus(c+305,((((((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0) 
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
        vcdp->fullBus(c+313,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0),16);
        vcdp->fullBus(c+321,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1),16);
        vcdp->fullBus(c+329,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2),16);
        vcdp->fullBus(c+337,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3),16);
        vcdp->fullBus(c+345,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_0),2);
        vcdp->fullBus(c+353,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_1),2);
        vcdp->fullBus(c+361,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_2),2);
        vcdp->fullBus(c+369,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_3),2);
        vcdp->fullBus(c+377,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_4),2);
        vcdp->fullBus(c+385,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_5),2);
        vcdp->fullBus(c+393,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_6),2);
        vcdp->fullBus(c+401,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_7),2);
        vcdp->fullBus(c+409,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_in),8);
        vcdp->fullBit(c+417,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_sel));
        vcdp->fullBit(c+425,((7U <= (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_in))));
        vcdp->fullBit(c+433,((0x54U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_in))));
        vcdp->fullBit(c+441,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid));
        vcdp->fullBus(c+449,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__fsm_stateReg),3);
        vcdp->fullBit(c+457,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next));
        vcdp->fullBit(c+465,(vlTOPp->raw_data_valid));
        vcdp->fullBit(c+473,(vlTOPp->raw_data_ready));
        vcdp->fullBit(c+481,(vlTOPp->clc));
        vcdp->fullBit(c+489,(vlTOPp->clk));
        vcdp->fullBit(c+497,(vlTOPp->reset));
        vcdp->fullBus(c+505,((3U & ((1U & ((IData)(vlTOPp->_zz_in_b) 
                                           >> 1U)) 
                                    + (1U & (IData)(vlTOPp->_zz_in_b))))),2);
        vcdp->fullBus(c+513,((3U & ((1U & (~ ((IData)(vlTOPp->_zz_in_b) 
                                              >> 1U))) 
                                    + (1U & (~ (IData)(vlTOPp->_zz_in_b)))))),2);
        vcdp->fullBus(c+521,((3U & ((1U & (1U ^ ((IData)(vlTOPp->_zz_in_b) 
                                                 >> 1U))) 
                                    + (1U & (IData)(vlTOPp->_zz_in_b))))),2);
        vcdp->fullBus(c+529,((3U & ((1U & ((IData)(vlTOPp->_zz_in_b) 
                                           >> 1U)) 
                                    + (1U & (~ (IData)(vlTOPp->_zz_in_b)))))),2);
        vcdp->fullBus(c+537,(vlTOPp->_zz_in_b),2);
        vcdp->fullBus(c+545,((3U & (~ (IData)(vlTOPp->_zz_in_b)))),2);
        vcdp->fullBus(c+553,((2U ^ (IData)(vlTOPp->_zz_in_b))),2);
        vcdp->fullBus(c+561,((1U ^ (IData)(vlTOPp->_zz_in_b))),2);
        vcdp->fullBus(c+569,(0U),2);
        vcdp->fullBus(c+577,(3U),2);
        vcdp->fullBus(c+585,(2U),2);
        vcdp->fullBus(c+593,(1U),2);
        vcdp->fullBus(c+601,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_out),8);
        vcdp->fullArray(c+609,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__decoded_lifo_0),168);
        vcdp->fullArray(c+657,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__decoded_lifo_1),168);
        vcdp->fullBit(c+705,(0U));
    }
}
