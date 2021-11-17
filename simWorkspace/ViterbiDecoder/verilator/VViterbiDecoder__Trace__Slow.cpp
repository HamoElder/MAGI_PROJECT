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
        vlTOPp->traceInitThis__2(vlSymsp, vcdp, code);
    }
}

void VViterbiDecoder::traceFullThis(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
        vlTOPp->traceFullThis__9(vlSymsp, vcdp, code);
        vlTOPp->traceFullThis__17(vlSymsp, vcdp, code);
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
        vcdp->declBit(c+4241,"raw_data_valid", false,-1);
        vcdp->declBit(c+4249,"raw_data_ready", false,-1);
        vcdp->declBit(c+4257,"raw_data_payload_last", false,-1);
        vcdp->declBit(c+4265,"decoded_data_valid", false,-1);
        vcdp->declBit(c+4273,"decoded_data_payload_last", false,-1);
        vcdp->declBus(c+4281,"decoded_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+4289,"clk", false,-1);
        vcdp->declBit(c+4297,"reset", false,-1);
        vcdp->declBit(c+4241,"ViterbiDecoder raw_data_valid", false,-1);
        vcdp->declBit(c+4249,"ViterbiDecoder raw_data_ready", false,-1);
        vcdp->declBit(c+4257,"ViterbiDecoder raw_data_payload_last", false,-1);
        vcdp->declBit(c+4265,"ViterbiDecoder decoded_data_valid", false,-1);
        vcdp->declBit(c+4273,"ViterbiDecoder decoded_data_payload_last", false,-1);
        vcdp->declBus(c+4281,"ViterbiDecoder decoded_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+4289,"ViterbiDecoder clk", false,-1);
        vcdp->declBit(c+4297,"ViterbiDecoder reset", false,-1);
        vcdp->declBit(c+3713,"ViterbiDecoder pmu_core_raw_data_ready", false,-1);
        vcdp->declBus(c+657,"ViterbiDecoder pmu_core_min_idx", false,-1, 1,0);
        vcdp->declBit(c+3721,"ViterbiDecoder pmu_core_s_path_valid", false,-1);
        vcdp->declBit(c+3729,"ViterbiDecoder pmu_core_s_path_payload_last", false,-1);
        vcdp->declBus(c+665,"ViterbiDecoder pmu_core_s_path_payload_fragment", false,-1, 3,0);
        vcdp->declBit(c+3737,"ViterbiDecoder tbu_core_tb_node_valid", false,-1);
        vcdp->declBit(c+3745,"ViterbiDecoder tbu_core_tb_node_payload_last", false,-1);
        vcdp->declBus(c+3705,"ViterbiDecoder tbu_core_tb_node_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+673,"ViterbiDecoder tbu_core_halt", false,-1);
        vcdp->declBit(c+4001,"ViterbiDecoder tbu_core_finished", false,-1);
        vcdp->declBit(c+3753,"ViterbiDecoder lifo_core_decoded_data_valid", false,-1);
        vcdp->declBit(c+3761,"ViterbiDecoder lifo_core_decoded_data_payload_last", false,-1);
        vcdp->declBus(c+681,"ViterbiDecoder lifo_core_decoded_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+609,"ViterbiDecoder raw_data_fire", false,-1);
        vcdp->declBit(c+609,"ViterbiDecoder pmu_core raw_data_valid", false,-1);
        vcdp->declBit(c+3713,"ViterbiDecoder pmu_core raw_data_ready", false,-1);
        vcdp->declBit(c+4257,"ViterbiDecoder pmu_core raw_data_payload_last", false,-1);
        vcdp->declBit(c+4001,"ViterbiDecoder pmu_core tbu_finished", false,-1);
        vcdp->declBus(c+657,"ViterbiDecoder pmu_core min_idx", false,-1, 1,0);
        vcdp->declBit(c+3721,"ViterbiDecoder pmu_core s_path_valid", false,-1);
        vcdp->declBit(c+3729,"ViterbiDecoder pmu_core s_path_payload_last", false,-1);
        vcdp->declBus(c+665,"ViterbiDecoder pmu_core s_path_payload_fragment", false,-1, 3,0);
        vcdp->declBit(c+4289,"ViterbiDecoder pmu_core clk", false,-1);
        vcdp->declBit(c+4297,"ViterbiDecoder pmu_core reset", false,-1);
        vcdp->declBus(c+689,"ViterbiDecoder pmu_core addCompareSelect_4_dist_0", false,-1, 7,0);
        vcdp->declBus(c+697,"ViterbiDecoder pmu_core addCompareSelect_4_dist_1", false,-1, 7,0);
        vcdp->declBus(c+705,"ViterbiDecoder pmu_core addCompareSelect_5_dist_0", false,-1, 7,0);
        vcdp->declBus(c+713,"ViterbiDecoder pmu_core addCompareSelect_5_dist_1", false,-1, 7,0);
        vcdp->declBus(c+721,"ViterbiDecoder pmu_core addCompareSelect_6_dist_0", false,-1, 7,0);
        vcdp->declBus(c+729,"ViterbiDecoder pmu_core addCompareSelect_6_dist_1", false,-1, 7,0);
        vcdp->declBus(c+737,"ViterbiDecoder pmu_core addCompareSelect_7_dist_0", false,-1, 7,0);
        vcdp->declBus(c+745,"ViterbiDecoder pmu_core addCompareSelect_7_dist_1", false,-1, 7,0);
        vcdp->declBus(c+4305,"ViterbiDecoder pmu_core branchMetric_4_dist_0", false,-1, 1,0);
        vcdp->declBus(c+4313,"ViterbiDecoder pmu_core branchMetric_4_dist_1", false,-1, 1,0);
        vcdp->declBus(c+129,"ViterbiDecoder pmu_core addCompareSelect_4_state_weight", false,-1, 7,0);
        vcdp->declBit(c+137,"ViterbiDecoder pmu_core addCompareSelect_4_decision", false,-1);
        vcdp->declBus(c+4321,"ViterbiDecoder pmu_core branchMetric_5_dist_0", false,-1, 1,0);
        vcdp->declBus(c+4329,"ViterbiDecoder pmu_core branchMetric_5_dist_1", false,-1, 1,0);
        vcdp->declBus(c+145,"ViterbiDecoder pmu_core addCompareSelect_5_state_weight", false,-1, 7,0);
        vcdp->declBit(c+153,"ViterbiDecoder pmu_core addCompareSelect_5_decision", false,-1);
        vcdp->declBus(c+4313,"ViterbiDecoder pmu_core branchMetric_6_dist_0", false,-1, 1,0);
        vcdp->declBus(c+4305,"ViterbiDecoder pmu_core branchMetric_6_dist_1", false,-1, 1,0);
        vcdp->declBus(c+161,"ViterbiDecoder pmu_core addCompareSelect_6_state_weight", false,-1, 7,0);
        vcdp->declBit(c+169,"ViterbiDecoder pmu_core addCompareSelect_6_decision", false,-1);
        vcdp->declBus(c+4329,"ViterbiDecoder pmu_core branchMetric_7_dist_0", false,-1, 1,0);
        vcdp->declBus(c+4321,"ViterbiDecoder pmu_core branchMetric_7_dist_1", false,-1, 1,0);
        vcdp->declBus(c+177,"ViterbiDecoder pmu_core addCompareSelect_7_state_weight", false,-1, 7,0);
        vcdp->declBit(c+185,"ViterbiDecoder pmu_core addCompareSelect_7_decision", false,-1);
        vcdp->declBus(c+753,"ViterbiDecoder pmu_core minVal_1_min_val", false,-1, 7,0);
        vcdp->declBus(c+657,"ViterbiDecoder pmu_core minVal_1_min_idx", false,-1, 1,0);
        vcdp->declBus(c+761,"ViterbiDecoder pmu_core node_weight_0", false,-1, 7,0);
        vcdp->declBus(c+769,"ViterbiDecoder pmu_core node_weight_1", false,-1, 7,0);
        vcdp->declBus(c+777,"ViterbiDecoder pmu_core node_weight_2", false,-1, 7,0);
        vcdp->declBus(c+785,"ViterbiDecoder pmu_core node_weight_3", false,-1, 7,0);
        vcdp->declBus(c+793,"ViterbiDecoder pmu_core candidate_branches_0", false,-1, 1,0);
        vcdp->declBus(c+801,"ViterbiDecoder pmu_core candidate_branches_1", false,-1, 1,0);
        vcdp->declBus(c+809,"ViterbiDecoder pmu_core candidate_branches_2", false,-1, 1,0);
        vcdp->declBus(c+817,"ViterbiDecoder pmu_core candidate_branches_3", false,-1, 1,0);
        vcdp->declBus(c+825,"ViterbiDecoder pmu_core candidate_branches_4", false,-1, 1,0);
        vcdp->declBus(c+833,"ViterbiDecoder pmu_core candidate_branches_5", false,-1, 1,0);
        vcdp->declBus(c+841,"ViterbiDecoder pmu_core candidate_branches_6", false,-1, 1,0);
        vcdp->declBus(c+849,"ViterbiDecoder pmu_core candidate_branches_7", false,-1, 1,0);
        vcdp->declBus(c+665,"ViterbiDecoder pmu_core survival_path", false,-1, 3,0);
        vcdp->declBit(c+3769,"ViterbiDecoder pmu_core raw_data_next", false,-1);
        vcdp->declBit(c+3777,"ViterbiDecoder pmu_core raw_data_last_next", false,-1);
        vcdp->declBit(c+3721,"ViterbiDecoder pmu_core survival_path_valid", false,-1);
        vcdp->declBit(c+3729,"ViterbiDecoder pmu_core survival_path_last", false,-1);
        vcdp->declBit(c+3713,"ViterbiDecoder pmu_core raw_data_ready_1", false,-1);
        vcdp->declBit(c+4337,"ViterbiDecoder pmu_core when_PathMetric_l29", false,-1);
        vcdp->declBus(c+4305,"ViterbiDecoder pmu_core branchMetric_4 dist_0", false,-1, 1,0);
        vcdp->declBus(c+4313,"ViterbiDecoder pmu_core branchMetric_4 dist_1", false,-1, 1,0);
        vcdp->declBus(c+4305,"ViterbiDecoder pmu_core branchMetric_4 hammingDistance_8_distance", false,-1, 1,0);
        vcdp->declBus(c+4313,"ViterbiDecoder pmu_core branchMetric_4 hammingDistance_9_distance", false,-1, 1,0);
        vcdp->declBus(c+4377,"ViterbiDecoder pmu_core branchMetric_4 hammingDistance_8 in_a", false,-1, 1,0);
        vcdp->declBus(c+4345,"ViterbiDecoder pmu_core branchMetric_4 hammingDistance_8 in_b", false,-1, 1,0);
        vcdp->declBus(c+4305,"ViterbiDecoder pmu_core branchMetric_4 hammingDistance_8 distance", false,-1, 1,0);
        vcdp->declBus(c+4345,"ViterbiDecoder pmu_core branchMetric_4 hammingDistance_8 xorResult", false,-1, 1,0);
        vcdp->declBus(c+4385,"ViterbiDecoder pmu_core branchMetric_4 hammingDistance_9 in_a", false,-1, 1,0);
        vcdp->declBus(c+4345,"ViterbiDecoder pmu_core branchMetric_4 hammingDistance_9 in_b", false,-1, 1,0);
        vcdp->declBus(c+4313,"ViterbiDecoder pmu_core branchMetric_4 hammingDistance_9 distance", false,-1, 1,0);
        vcdp->declBus(c+4353,"ViterbiDecoder pmu_core branchMetric_4 hammingDistance_9 xorResult", false,-1, 1,0);
        vcdp->declBus(c+761,"ViterbiDecoder pmu_core addCompareSelect_4 last_state_weight_0", false,-1, 7,0);
        vcdp->declBus(c+769,"ViterbiDecoder pmu_core addCompareSelect_4 last_state_weight_1", false,-1, 7,0);
        vcdp->declBus(c+689,"ViterbiDecoder pmu_core addCompareSelect_4 dist_0", false,-1, 7,0);
        vcdp->declBus(c+697,"ViterbiDecoder pmu_core addCompareSelect_4 dist_1", false,-1, 7,0);
        vcdp->declBus(c+129,"ViterbiDecoder pmu_core addCompareSelect_4 state_weight", false,-1, 7,0);
        vcdp->declBit(c+137,"ViterbiDecoder pmu_core addCompareSelect_4 decision", false,-1);
        vcdp->declBus(c+193,"ViterbiDecoder pmu_core addCompareSelect_4 branch_weight_0", false,-1, 7,0);
        vcdp->declBus(c+201,"ViterbiDecoder pmu_core addCompareSelect_4 branch_weight_1", false,-1, 7,0);
        vcdp->declBit(c+209,"ViterbiDecoder pmu_core addCompareSelect_4 when_AddCompareSelect_l17", false,-1);
        vcdp->declBus(c+4321,"ViterbiDecoder pmu_core branchMetric_5 dist_0", false,-1, 1,0);
        vcdp->declBus(c+4329,"ViterbiDecoder pmu_core branchMetric_5 dist_1", false,-1, 1,0);
        vcdp->declBus(c+4321,"ViterbiDecoder pmu_core branchMetric_5 hammingDistance_8_distance", false,-1, 1,0);
        vcdp->declBus(c+4329,"ViterbiDecoder pmu_core branchMetric_5 hammingDistance_9_distance", false,-1, 1,0);
        vcdp->declBus(c+4393,"ViterbiDecoder pmu_core branchMetric_5 hammingDistance_8 in_a", false,-1, 1,0);
        vcdp->declBus(c+4345,"ViterbiDecoder pmu_core branchMetric_5 hammingDistance_8 in_b", false,-1, 1,0);
        vcdp->declBus(c+4321,"ViterbiDecoder pmu_core branchMetric_5 hammingDistance_8 distance", false,-1, 1,0);
        vcdp->declBus(c+4361,"ViterbiDecoder pmu_core branchMetric_5 hammingDistance_8 xorResult", false,-1, 1,0);
        vcdp->declBus(c+4401,"ViterbiDecoder pmu_core branchMetric_5 hammingDistance_9 in_a", false,-1, 1,0);
        vcdp->declBus(c+4345,"ViterbiDecoder pmu_core branchMetric_5 hammingDistance_9 in_b", false,-1, 1,0);
        vcdp->declBus(c+4329,"ViterbiDecoder pmu_core branchMetric_5 hammingDistance_9 distance", false,-1, 1,0);
        vcdp->declBus(c+4369,"ViterbiDecoder pmu_core branchMetric_5 hammingDistance_9 xorResult", false,-1, 1,0);
        vcdp->declBus(c+777,"ViterbiDecoder pmu_core addCompareSelect_5 last_state_weight_0", false,-1, 7,0);
        vcdp->declBus(c+785,"ViterbiDecoder pmu_core addCompareSelect_5 last_state_weight_1", false,-1, 7,0);
        vcdp->declBus(c+705,"ViterbiDecoder pmu_core addCompareSelect_5 dist_0", false,-1, 7,0);
        vcdp->declBus(c+713,"ViterbiDecoder pmu_core addCompareSelect_5 dist_1", false,-1, 7,0);
        vcdp->declBus(c+145,"ViterbiDecoder pmu_core addCompareSelect_5 state_weight", false,-1, 7,0);
        vcdp->declBit(c+153,"ViterbiDecoder pmu_core addCompareSelect_5 decision", false,-1);
        vcdp->declBus(c+217,"ViterbiDecoder pmu_core addCompareSelect_5 branch_weight_0", false,-1, 7,0);
        vcdp->declBus(c+225,"ViterbiDecoder pmu_core addCompareSelect_5 branch_weight_1", false,-1, 7,0);
        vcdp->declBit(c+233,"ViterbiDecoder pmu_core addCompareSelect_5 when_AddCompareSelect_l17", false,-1);
        vcdp->declBus(c+4313,"ViterbiDecoder pmu_core branchMetric_6 dist_0", false,-1, 1,0);
        vcdp->declBus(c+4305,"ViterbiDecoder pmu_core branchMetric_6 dist_1", false,-1, 1,0);
        vcdp->declBus(c+4313,"ViterbiDecoder pmu_core branchMetric_6 hammingDistance_8_distance", false,-1, 1,0);
        vcdp->declBus(c+4305,"ViterbiDecoder pmu_core branchMetric_6 hammingDistance_9_distance", false,-1, 1,0);
        vcdp->declBus(c+4385,"ViterbiDecoder pmu_core branchMetric_6 hammingDistance_8 in_a", false,-1, 1,0);
        vcdp->declBus(c+4345,"ViterbiDecoder pmu_core branchMetric_6 hammingDistance_8 in_b", false,-1, 1,0);
        vcdp->declBus(c+4313,"ViterbiDecoder pmu_core branchMetric_6 hammingDistance_8 distance", false,-1, 1,0);
        vcdp->declBus(c+4353,"ViterbiDecoder pmu_core branchMetric_6 hammingDistance_8 xorResult", false,-1, 1,0);
        vcdp->declBus(c+4377,"ViterbiDecoder pmu_core branchMetric_6 hammingDistance_9 in_a", false,-1, 1,0);
        vcdp->declBus(c+4345,"ViterbiDecoder pmu_core branchMetric_6 hammingDistance_9 in_b", false,-1, 1,0);
        vcdp->declBus(c+4305,"ViterbiDecoder pmu_core branchMetric_6 hammingDistance_9 distance", false,-1, 1,0);
        vcdp->declBus(c+4345,"ViterbiDecoder pmu_core branchMetric_6 hammingDistance_9 xorResult", false,-1, 1,0);
        vcdp->declBus(c+761,"ViterbiDecoder pmu_core addCompareSelect_6 last_state_weight_0", false,-1, 7,0);
        vcdp->declBus(c+769,"ViterbiDecoder pmu_core addCompareSelect_6 last_state_weight_1", false,-1, 7,0);
        vcdp->declBus(c+721,"ViterbiDecoder pmu_core addCompareSelect_6 dist_0", false,-1, 7,0);
        vcdp->declBus(c+729,"ViterbiDecoder pmu_core addCompareSelect_6 dist_1", false,-1, 7,0);
        vcdp->declBus(c+161,"ViterbiDecoder pmu_core addCompareSelect_6 state_weight", false,-1, 7,0);
        vcdp->declBit(c+169,"ViterbiDecoder pmu_core addCompareSelect_6 decision", false,-1);
        vcdp->declBus(c+241,"ViterbiDecoder pmu_core addCompareSelect_6 branch_weight_0", false,-1, 7,0);
        vcdp->declBus(c+249,"ViterbiDecoder pmu_core addCompareSelect_6 branch_weight_1", false,-1, 7,0);
        vcdp->declBit(c+257,"ViterbiDecoder pmu_core addCompareSelect_6 when_AddCompareSelect_l17", false,-1);
        vcdp->declBus(c+4329,"ViterbiDecoder pmu_core branchMetric_7 dist_0", false,-1, 1,0);
        vcdp->declBus(c+4321,"ViterbiDecoder pmu_core branchMetric_7 dist_1", false,-1, 1,0);
        vcdp->declBus(c+4329,"ViterbiDecoder pmu_core branchMetric_7 hammingDistance_8_distance", false,-1, 1,0);
        vcdp->declBus(c+4321,"ViterbiDecoder pmu_core branchMetric_7 hammingDistance_9_distance", false,-1, 1,0);
        vcdp->declBus(c+4401,"ViterbiDecoder pmu_core branchMetric_7 hammingDistance_8 in_a", false,-1, 1,0);
        vcdp->declBus(c+4345,"ViterbiDecoder pmu_core branchMetric_7 hammingDistance_8 in_b", false,-1, 1,0);
        vcdp->declBus(c+4329,"ViterbiDecoder pmu_core branchMetric_7 hammingDistance_8 distance", false,-1, 1,0);
        vcdp->declBus(c+4369,"ViterbiDecoder pmu_core branchMetric_7 hammingDistance_8 xorResult", false,-1, 1,0);
        vcdp->declBus(c+4393,"ViterbiDecoder pmu_core branchMetric_7 hammingDistance_9 in_a", false,-1, 1,0);
        vcdp->declBus(c+4345,"ViterbiDecoder pmu_core branchMetric_7 hammingDistance_9 in_b", false,-1, 1,0);
        vcdp->declBus(c+4321,"ViterbiDecoder pmu_core branchMetric_7 hammingDistance_9 distance", false,-1, 1,0);
        vcdp->declBus(c+4361,"ViterbiDecoder pmu_core branchMetric_7 hammingDistance_9 xorResult", false,-1, 1,0);
        vcdp->declBus(c+777,"ViterbiDecoder pmu_core addCompareSelect_7 last_state_weight_0", false,-1, 7,0);
        vcdp->declBus(c+785,"ViterbiDecoder pmu_core addCompareSelect_7 last_state_weight_1", false,-1, 7,0);
        vcdp->declBus(c+737,"ViterbiDecoder pmu_core addCompareSelect_7 dist_0", false,-1, 7,0);
        vcdp->declBus(c+745,"ViterbiDecoder pmu_core addCompareSelect_7 dist_1", false,-1, 7,0);
        vcdp->declBus(c+177,"ViterbiDecoder pmu_core addCompareSelect_7 state_weight", false,-1, 7,0);
        vcdp->declBit(c+185,"ViterbiDecoder pmu_core addCompareSelect_7 decision", false,-1);
        vcdp->declBus(c+265,"ViterbiDecoder pmu_core addCompareSelect_7 branch_weight_0", false,-1, 7,0);
        vcdp->declBus(c+273,"ViterbiDecoder pmu_core addCompareSelect_7 branch_weight_1", false,-1, 7,0);
        vcdp->declBit(c+281,"ViterbiDecoder pmu_core addCompareSelect_7 when_AddCompareSelect_l17", false,-1);
        vcdp->declBus(c+761,"ViterbiDecoder pmu_core minVal_1 data_0", false,-1, 7,0);
        vcdp->declBus(c+769,"ViterbiDecoder pmu_core minVal_1 data_1", false,-1, 7,0);
        vcdp->declBus(c+777,"ViterbiDecoder pmu_core minVal_1 data_2", false,-1, 7,0);
        vcdp->declBus(c+785,"ViterbiDecoder pmu_core minVal_1 data_3", false,-1, 7,0);
        vcdp->declBus(c+753,"ViterbiDecoder pmu_core minVal_1 min_val", false,-1, 7,0);
        vcdp->declBus(c+657,"ViterbiDecoder pmu_core minVal_1 min_idx", false,-1, 1,0);
        vcdp->declBit(c+4289,"ViterbiDecoder pmu_core minVal_1 clk", false,-1);
        vcdp->declBit(c+4297,"ViterbiDecoder pmu_core minVal_1 reset", false,-1);
        vcdp->declBus(c+657,"ViterbiDecoder tbu_core min_idx", false,-1, 1,0);
        vcdp->declBit(c+3721,"ViterbiDecoder tbu_core s_path_valid", false,-1);
        vcdp->declBit(c+3729,"ViterbiDecoder tbu_core s_path_payload_last", false,-1);
        vcdp->declBus(c+665,"ViterbiDecoder tbu_core s_path_payload_fragment", false,-1, 3,0);
        vcdp->declBit(c+3737,"ViterbiDecoder tbu_core tb_node_valid", false,-1);
        vcdp->declBit(c+3745,"ViterbiDecoder tbu_core tb_node_payload_last", false,-1);
        vcdp->declBus(c+3705,"ViterbiDecoder tbu_core tb_node_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+673,"ViterbiDecoder tbu_core halt", false,-1);
        vcdp->declBit(c+4001,"ViterbiDecoder tbu_core finished", false,-1);
        vcdp->declBit(c+4289,"ViterbiDecoder tbu_core clk", false,-1);
        vcdp->declBit(c+4297,"ViterbiDecoder tbu_core reset", false,-1);
        vcdp->declBus(c+3785,"ViterbiDecoder tbu_core ram_select", false,-1, 1,0);
        vcdp->declBus(c+3793,"ViterbiDecoder tbu_core ram_addr_write", false,-1, 4,0);
        vcdp->declBit(c+3801,"ViterbiDecoder tbu_core pkg_tail", false,-1);
        vcdp->declBit(c+4001,"ViterbiDecoder tbu_core tb_finish", false,-1);
        vcdp->declBit(c+3809,"ViterbiDecoder tbu_core when_Traceback_l48", false,-1);
        vcdp->declBus(c+4009,"ViterbiDecoder tbu_core decoded_ram_select", false,-1, 1,0);
        vcdp->declBus(c+4209,"ViterbiDecoder tbu_core ram_addr_read", false,-1, 4,0);
        vcdp->declBit(c+673,"ViterbiDecoder tbu_core pipe_halt", false,-1);
        vcdp->declBus(c+857,"ViterbiDecoder tbu_core ram_0_value", false,-1, 3,0);
        vcdp->declBus(c+865,"ViterbiDecoder tbu_core ram_1_value", false,-1, 3,0);
        vcdp->declBus(c+865,"ViterbiDecoder tbu_core ram_2_value", false,-1, 3,0);
        vcdp->declBus(c+873,"ViterbiDecoder tbu_core min_cursor", false,-1, 1,0);
        vcdp->declBus(c+585,"ViterbiDecoder tbu_core cursor", false,-1, 2,0);
        vcdp->declBus(c+593,"ViterbiDecoder tbu_core min_cursor_next", false,-1, 1,0);
        vcdp->declBus(c+601,"ViterbiDecoder tbu_core tb_node_data_next", false,-1, 0,0);
        vcdp->declBus(c+881,"ViterbiDecoder tbu_core tb_node_data", false,-1, 0,0);
        vcdp->declBit(c+3737,"ViterbiDecoder tbu_core tb_node_valid_1", false,-1);
        vcdp->declBit(c+3745,"ViterbiDecoder tbu_core tb_node_last", false,-1);
        vcdp->declBit(c+4217,"ViterbiDecoder tbu_core tail_repeat", false,-1);
        vcdp->declBit(c+3817,"ViterbiDecoder tbu_core goto_tail", false,-1);
        vcdp->declBus(c+4017,"ViterbiDecoder tbu_core halt_cnt", false,-1, 1,0);
        vcdp->declBus(c+4225,"ViterbiDecoder tbu_core traceback_state", false,-1, 2,0);
        vcdp->declBit(c+617,"ViterbiDecoder tbu_core when_Traceback_l104", false,-1);
        vcdp->declBit(c+4025,"ViterbiDecoder tbu_core when_Traceback_l113", false,-1);
        vcdp->declBit(c+4233,"ViterbiDecoder tbu_core when_Traceback_l126", false,-1);
        vcdp->declBit(c+4233,"ViterbiDecoder tbu_core when_Traceback_l144", false,-1);
        vcdp->declBit(c+4233,"ViterbiDecoder tbu_core when_Traceback_l153", false,-1);
        vcdp->declArray(c+625,"ViterbiDecoder tbu_core traceback_state_string", false,-1, 87,0);
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+1+i*1,"ViterbiDecoder tbu_core states_shift_rom", true,(i+0), 1,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+65+i*1,"ViterbiDecoder tbu_core in_data_rom", true,(i+0), 0,0);}}
        {int i; for (i=0; i<32; i++) {
                vcdp->declBus(c+889+i*1,"ViterbiDecoder tbu_core survival_path_ram_0", true,(i+0), 3,0);}}
        {int i; for (i=0; i<32; i++) {
                vcdp->declBus(c+1145+i*1,"ViterbiDecoder tbu_core survival_path_ram_1", true,(i+0), 3,0);}}
        {int i; for (i=0; i<32; i++) {
                vcdp->declBus(c+1401+i*1,"ViterbiDecoder tbu_core survival_path_ram_2", true,(i+0), 3,0);}}
        vcdp->declBit(c+3737,"ViterbiDecoder lifo_core inverted_order_valid", false,-1);
        vcdp->declBit(c+3745,"ViterbiDecoder lifo_core inverted_order_payload_last", false,-1);
        vcdp->declBus(c+3705,"ViterbiDecoder lifo_core inverted_order_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+3753,"ViterbiDecoder lifo_core decoded_data_valid", false,-1);
        vcdp->declBit(c+3761,"ViterbiDecoder lifo_core decoded_data_payload_last", false,-1);
        vcdp->declBus(c+681,"ViterbiDecoder lifo_core decoded_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+4289,"ViterbiDecoder lifo_core clk", false,-1);
        vcdp->declBit(c+4297,"ViterbiDecoder lifo_core reset", false,-1);
        vcdp->declBit(c+289,"ViterbiDecoder lifo_core inverted_order_fifo_io_pop_ready", false,-1);
        vcdp->declBit(c+3825,"ViterbiDecoder lifo_core decoded_lifo_0_push_method", false,-1);
        vcdp->declBit(c+3833,"ViterbiDecoder lifo_core decoded_lifo_1_push_method", false,-1);
        vcdp->declBit(c+297,"ViterbiDecoder lifo_core lifo_demux_input_valid", false,-1);
        vcdp->declBit(c+4033,"ViterbiDecoder lifo_core lifo_demux_input_payload_last", false,-1);
        vcdp->declBus(c+4041,"ViterbiDecoder lifo_core lifo_demux_input_payload_fragment", false,-1, 0,0);
        vcdp->declBus(c+3825,"ViterbiDecoder lifo_core lifo_mux_io_select", false,-1, 0,0);
        vcdp->declBit(c+305,"ViterbiDecoder lifo_core inverted_order_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+313,"ViterbiDecoder lifo_core inverted_order_fifo_io_pop_valid", false,-1);
        vcdp->declBit(c+4049,"ViterbiDecoder lifo_core inverted_order_fifo_io_pop_payload_last", false,-1);
        vcdp->declBus(c+4057,"ViterbiDecoder lifo_core inverted_order_fifo_io_pop_payload_fragment", false,-1, 1,0);
        vcdp->declBus(c+321,"ViterbiDecoder lifo_core inverted_order_fifo_io_occupancy", false,-1, 4,0);
        vcdp->declBus(c+329,"ViterbiDecoder lifo_core inverted_order_fifo_io_availability", false,-1, 4,0);
        vcdp->declBit(c+337,"ViterbiDecoder lifo_core decoded_lifo_0_push_ready", false,-1);
        vcdp->declBit(c+345,"ViterbiDecoder lifo_core decoded_lifo_0_pop_valid", false,-1);
        vcdp->declBit(c+3977,"ViterbiDecoder lifo_core decoded_lifo_0_pop_payload_last", false,-1);
        vcdp->declBus(c+353,"ViterbiDecoder lifo_core decoded_lifo_0_pop_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+3841,"ViterbiDecoder lifo_core decoded_lifo_0_empty", false,-1);
        vcdp->declBit(c+3849,"ViterbiDecoder lifo_core decoded_lifo_0_full", false,-1);
        vcdp->declBit(c+361,"ViterbiDecoder lifo_core decoded_lifo_1_push_ready", false,-1);
        vcdp->declBit(c+369,"ViterbiDecoder lifo_core decoded_lifo_1_pop_valid", false,-1);
        vcdp->declBit(c+3985,"ViterbiDecoder lifo_core decoded_lifo_1_pop_payload_last", false,-1);
        vcdp->declBus(c+377,"ViterbiDecoder lifo_core decoded_lifo_1_pop_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+3857,"ViterbiDecoder lifo_core decoded_lifo_1_empty", false,-1);
        vcdp->declBit(c+3865,"ViterbiDecoder lifo_core decoded_lifo_1_full", false,-1);
        vcdp->declBit(c+385,"ViterbiDecoder lifo_core lifo_demux_input_ready", false,-1);
        vcdp->declBit(c+393,"ViterbiDecoder lifo_core lifo_demux_outputs_0_valid", false,-1);
        vcdp->declBit(c+4033,"ViterbiDecoder lifo_core lifo_demux_outputs_0_payload_last", false,-1);
        vcdp->declBus(c+4041,"ViterbiDecoder lifo_core lifo_demux_outputs_0_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+401,"ViterbiDecoder lifo_core lifo_demux_outputs_1_valid", false,-1);
        vcdp->declBit(c+4033,"ViterbiDecoder lifo_core lifo_demux_outputs_1_payload_last", false,-1);
        vcdp->declBus(c+4041,"ViterbiDecoder lifo_core lifo_demux_outputs_1_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+3833,"ViterbiDecoder lifo_core lifo_mux_io_inputs_0_ready", false,-1);
        vcdp->declBit(c+3825,"ViterbiDecoder lifo_core lifo_mux_io_inputs_1_ready", false,-1);
        vcdp->declBit(c+409,"ViterbiDecoder lifo_core lifo_mux_io_output_valid", false,-1);
        vcdp->declBit(c+3993,"ViterbiDecoder lifo_core lifo_mux_io_output_payload_last", false,-1);
        vcdp->declBus(c+417,"ViterbiDecoder lifo_core lifo_mux_io_output_payload_fragment", false,-1, 0,0);
        vcdp->declBus(c+3833,"ViterbiDecoder lifo_core reorder_state", false,-1, 0,0);
        vcdp->declBus(c+3833,"ViterbiDecoder lifo_core lifo_push_sel", false,-1, 0,0);
        vcdp->declBit(c+3873,"ViterbiDecoder lifo_core fifo_pop_valve", false,-1);
        vcdp->declBit(c+3881,"ViterbiDecoder lifo_core when_ReorderLifo_l40", false,-1);
        vcdp->declBit(c+425,"ViterbiDecoder lifo_core inverted_order_fifo_io_pop_fire", false,-1);
        vcdp->declBit(c+3881,"ViterbiDecoder lifo_core when_ReorderLifo_l52", false,-1);
        vcdp->declBit(c+425,"ViterbiDecoder lifo_core inverted_order_fifo_io_pop_fire_1", false,-1);
        vcdp->declBit(c+3753,"ViterbiDecoder lifo_core lifo_mux_io_output_valid_regNext", false,-1);
        vcdp->declBit(c+3761,"ViterbiDecoder lifo_core lifo_mux_io_output_payload_last_regNext", false,-1);
        vcdp->declBus(c+681,"ViterbiDecoder lifo_core lifo_mux_io_output_payload_fragment_regNext", false,-1, 0,0);
        vcdp->declArray(c+3889,"ViterbiDecoder lifo_core reorder_state_string", false,-1, 71,0);
        vcdp->declBit(c+3737,"ViterbiDecoder lifo_core inverted_order_fifo io_push_valid", false,-1);
        vcdp->declBit(c+305,"ViterbiDecoder lifo_core inverted_order_fifo io_push_ready", false,-1);
        vcdp->declBit(c+3745,"ViterbiDecoder lifo_core inverted_order_fifo io_push_payload_last", false,-1);
        vcdp->declBus(c+3705,"ViterbiDecoder lifo_core inverted_order_fifo io_push_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+313,"ViterbiDecoder lifo_core inverted_order_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+289,"ViterbiDecoder lifo_core inverted_order_fifo io_pop_ready", false,-1);
        vcdp->declBit(c+4049,"ViterbiDecoder lifo_core inverted_order_fifo io_pop_payload_last", false,-1);
        vcdp->declBus(c+4057,"ViterbiDecoder lifo_core inverted_order_fifo io_pop_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+4409,"ViterbiDecoder lifo_core inverted_order_fifo io_flush", false,-1);
        vcdp->declBus(c+321,"ViterbiDecoder lifo_core inverted_order_fifo io_occupancy", false,-1, 4,0);
        vcdp->declBus(c+329,"ViterbiDecoder lifo_core inverted_order_fifo io_availability", false,-1, 4,0);
        vcdp->declBit(c+4289,"ViterbiDecoder lifo_core inverted_order_fifo clk", false,-1);
        vcdp->declBit(c+4297,"ViterbiDecoder lifo_core inverted_order_fifo reset", false,-1);
        vcdp->declBit(c+433,"ViterbiDecoder lifo_core inverted_order_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+4409,"ViterbiDecoder lifo_core inverted_order_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+441,"ViterbiDecoder lifo_core inverted_order_fifo logic_pushPtr_valueNext", false,-1, 3,0);
        vcdp->declBus(c+3913,"ViterbiDecoder lifo_core inverted_order_fifo logic_pushPtr_value", false,-1, 3,0);
        vcdp->declBit(c+3921,"ViterbiDecoder lifo_core inverted_order_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+449,"ViterbiDecoder lifo_core inverted_order_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+457,"ViterbiDecoder lifo_core inverted_order_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+4409,"ViterbiDecoder lifo_core inverted_order_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+649,"ViterbiDecoder lifo_core inverted_order_fifo logic_popPtr_valueNext", false,-1, 3,0);
        vcdp->declBus(c+3929,"ViterbiDecoder lifo_core inverted_order_fifo logic_popPtr_value", false,-1, 3,0);
        vcdp->declBit(c+3937,"ViterbiDecoder lifo_core inverted_order_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+465,"ViterbiDecoder lifo_core inverted_order_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+473,"ViterbiDecoder lifo_core inverted_order_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+3945,"ViterbiDecoder lifo_core inverted_order_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+481,"ViterbiDecoder lifo_core inverted_order_fifo logic_pushing", false,-1);
        vcdp->declBit(c+489,"ViterbiDecoder lifo_core inverted_order_fifo logic_popping", false,-1);
        vcdp->declBit(c+497,"ViterbiDecoder lifo_core inverted_order_fifo logic_empty", false,-1);
        vcdp->declBit(c+505,"ViterbiDecoder lifo_core inverted_order_fifo logic_full", false,-1);
        vcdp->declBit(c+513,"ViterbiDecoder lifo_core inverted_order_fifo when_Stream_l933", false,-1);
        vcdp->declBus(c+3953,"ViterbiDecoder lifo_core inverted_order_fifo logic_ptrDif", false,-1, 3,0);
        {int i; for (i=0; i<16; i++) {
                vcdp->declBus(c+4065+i*1,"ViterbiDecoder lifo_core inverted_order_fifo logic_ram", true,(i+0), 2,0);}}
        vcdp->declBit(c+393,"ViterbiDecoder lifo_core decoded_lifo_0 push_valid", false,-1);
        vcdp->declBit(c+337,"ViterbiDecoder lifo_core decoded_lifo_0 push_ready", false,-1);
        vcdp->declBit(c+4033,"ViterbiDecoder lifo_core decoded_lifo_0 push_payload_last", false,-1);
        vcdp->declBus(c+4041,"ViterbiDecoder lifo_core decoded_lifo_0 push_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+345,"ViterbiDecoder lifo_core decoded_lifo_0 pop_valid", false,-1);
        vcdp->declBit(c+3833,"ViterbiDecoder lifo_core decoded_lifo_0 pop_ready", false,-1);
        vcdp->declBit(c+3977,"ViterbiDecoder lifo_core decoded_lifo_0 pop_payload_last", false,-1);
        vcdp->declBus(c+353,"ViterbiDecoder lifo_core decoded_lifo_0 pop_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+3825,"ViterbiDecoder lifo_core decoded_lifo_0 push_method", false,-1);
        vcdp->declBit(c+3841,"ViterbiDecoder lifo_core decoded_lifo_0 empty", false,-1);
        vcdp->declBit(c+3849,"ViterbiDecoder lifo_core decoded_lifo_0 full", false,-1);
        vcdp->declBit(c+4289,"ViterbiDecoder lifo_core decoded_lifo_0 clk", false,-1);
        vcdp->declBit(c+4297,"ViterbiDecoder lifo_core decoded_lifo_0 reset", false,-1);
        vcdp->declBus(c+1657,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_0", false,-1, 0,0);
        vcdp->declBus(c+1665,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_1", false,-1, 0,0);
        vcdp->declBus(c+1673,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_2", false,-1, 0,0);
        vcdp->declBus(c+1681,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_3", false,-1, 0,0);
        vcdp->declBus(c+1689,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_4", false,-1, 0,0);
        vcdp->declBus(c+1697,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_5", false,-1, 0,0);
        vcdp->declBus(c+1705,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_6", false,-1, 0,0);
        vcdp->declBus(c+1713,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_7", false,-1, 0,0);
        vcdp->declBus(c+1721,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_8", false,-1, 0,0);
        vcdp->declBus(c+1729,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_9", false,-1, 0,0);
        vcdp->declBus(c+1737,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_10", false,-1, 0,0);
        vcdp->declBus(c+1745,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_11", false,-1, 0,0);
        vcdp->declBus(c+1753,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_12", false,-1, 0,0);
        vcdp->declBus(c+1761,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_13", false,-1, 0,0);
        vcdp->declBus(c+1769,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_14", false,-1, 0,0);
        vcdp->declBus(c+1777,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_15", false,-1, 0,0);
        vcdp->declBus(c+1785,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_16", false,-1, 0,0);
        vcdp->declBus(c+1793,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_17", false,-1, 0,0);
        vcdp->declBus(c+1801,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_18", false,-1, 0,0);
        vcdp->declBus(c+1809,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_19", false,-1, 0,0);
        vcdp->declBus(c+1817,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_20", false,-1, 0,0);
        vcdp->declBus(c+1825,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_21", false,-1, 0,0);
        vcdp->declBus(c+1833,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_22", false,-1, 0,0);
        vcdp->declBus(c+1841,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_23", false,-1, 0,0);
        vcdp->declBus(c+1849,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_24", false,-1, 0,0);
        vcdp->declBus(c+1857,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_25", false,-1, 0,0);
        vcdp->declBus(c+1865,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_26", false,-1, 0,0);
        vcdp->declBus(c+1873,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_27", false,-1, 0,0);
        vcdp->declBus(c+1881,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_28", false,-1, 0,0);
        vcdp->declBus(c+1889,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_29", false,-1, 0,0);
        vcdp->declBus(c+1897,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_30", false,-1, 0,0);
        vcdp->declBus(c+1905,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_31", false,-1, 0,0);
        vcdp->declBus(c+1913,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_32", false,-1, 0,0);
        vcdp->declBus(c+1921,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_33", false,-1, 0,0);
        vcdp->declBus(c+1929,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_34", false,-1, 0,0);
        vcdp->declBus(c+1937,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_35", false,-1, 0,0);
        vcdp->declBus(c+1945,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_36", false,-1, 0,0);
        vcdp->declBus(c+1953,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_37", false,-1, 0,0);
        vcdp->declBus(c+1961,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_38", false,-1, 0,0);
        vcdp->declBus(c+1969,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_39", false,-1, 0,0);
        vcdp->declBus(c+1977,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_40", false,-1, 0,0);
        vcdp->declBus(c+1985,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_41", false,-1, 0,0);
        vcdp->declBus(c+1993,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_42", false,-1, 0,0);
        vcdp->declBus(c+2001,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_43", false,-1, 0,0);
        vcdp->declBus(c+2009,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_44", false,-1, 0,0);
        vcdp->declBus(c+2017,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_45", false,-1, 0,0);
        vcdp->declBus(c+2025,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_46", false,-1, 0,0);
        vcdp->declBus(c+2033,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_47", false,-1, 0,0);
        vcdp->declBus(c+2041,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_48", false,-1, 0,0);
        vcdp->declBus(c+2049,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_49", false,-1, 0,0);
        vcdp->declBus(c+2057,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_50", false,-1, 0,0);
        vcdp->declBus(c+2065,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_51", false,-1, 0,0);
        vcdp->declBus(c+2073,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_52", false,-1, 0,0);
        vcdp->declBus(c+2081,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_53", false,-1, 0,0);
        vcdp->declBus(c+2089,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_54", false,-1, 0,0);
        vcdp->declBus(c+2097,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_55", false,-1, 0,0);
        vcdp->declBus(c+2105,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_56", false,-1, 0,0);
        vcdp->declBus(c+2113,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_57", false,-1, 0,0);
        vcdp->declBus(c+2121,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_58", false,-1, 0,0);
        vcdp->declBus(c+2129,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_59", false,-1, 0,0);
        vcdp->declBus(c+2137,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_60", false,-1, 0,0);
        vcdp->declBus(c+2145,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_61", false,-1, 0,0);
        vcdp->declBus(c+2153,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_62", false,-1, 0,0);
        vcdp->declBus(c+2161,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_63", false,-1, 0,0);
        vcdp->declBit(c+2169,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_0", false,-1);
        vcdp->declBit(c+2177,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_1", false,-1);
        vcdp->declBit(c+2185,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_2", false,-1);
        vcdp->declBit(c+2193,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_3", false,-1);
        vcdp->declBit(c+2201,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_4", false,-1);
        vcdp->declBit(c+2209,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_5", false,-1);
        vcdp->declBit(c+2217,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_6", false,-1);
        vcdp->declBit(c+2225,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_7", false,-1);
        vcdp->declBit(c+2233,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_8", false,-1);
        vcdp->declBit(c+2241,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_9", false,-1);
        vcdp->declBit(c+2249,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_10", false,-1);
        vcdp->declBit(c+2257,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_11", false,-1);
        vcdp->declBit(c+2265,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_12", false,-1);
        vcdp->declBit(c+2273,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_13", false,-1);
        vcdp->declBit(c+2281,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_14", false,-1);
        vcdp->declBit(c+2289,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_15", false,-1);
        vcdp->declBit(c+2297,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_16", false,-1);
        vcdp->declBit(c+2305,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_17", false,-1);
        vcdp->declBit(c+2313,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_18", false,-1);
        vcdp->declBit(c+2321,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_19", false,-1);
        vcdp->declBit(c+2329,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_20", false,-1);
        vcdp->declBit(c+2337,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_21", false,-1);
        vcdp->declBit(c+2345,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_22", false,-1);
        vcdp->declBit(c+2353,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_23", false,-1);
        vcdp->declBit(c+2361,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_24", false,-1);
        vcdp->declBit(c+2369,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_25", false,-1);
        vcdp->declBit(c+2377,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_26", false,-1);
        vcdp->declBit(c+2385,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_27", false,-1);
        vcdp->declBit(c+2393,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_28", false,-1);
        vcdp->declBit(c+2401,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_29", false,-1);
        vcdp->declBit(c+2409,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_30", false,-1);
        vcdp->declBit(c+2417,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_31", false,-1);
        vcdp->declBit(c+2425,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_32", false,-1);
        vcdp->declBit(c+2433,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_33", false,-1);
        vcdp->declBit(c+2441,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_34", false,-1);
        vcdp->declBit(c+2449,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_35", false,-1);
        vcdp->declBit(c+2457,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_36", false,-1);
        vcdp->declBit(c+2465,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_37", false,-1);
        vcdp->declBit(c+2473,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_38", false,-1);
        vcdp->declBit(c+2481,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_39", false,-1);
        vcdp->declBit(c+2489,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_40", false,-1);
        vcdp->declBit(c+2497,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_41", false,-1);
        vcdp->declBit(c+2505,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_42", false,-1);
        vcdp->declBit(c+2513,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_43", false,-1);
        vcdp->declBit(c+2521,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_44", false,-1);
        vcdp->declBit(c+2529,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_45", false,-1);
        vcdp->declBit(c+2537,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_46", false,-1);
        vcdp->declBit(c+2545,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_47", false,-1);
        vcdp->declBit(c+2553,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_48", false,-1);
        vcdp->declBit(c+2561,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_49", false,-1);
        vcdp->declBit(c+2569,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_50", false,-1);
        vcdp->declBit(c+2577,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_51", false,-1);
        vcdp->declBit(c+2585,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_52", false,-1);
        vcdp->declBit(c+2593,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_53", false,-1);
        vcdp->declBit(c+2601,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_54", false,-1);
        vcdp->declBit(c+2609,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_55", false,-1);
        vcdp->declBit(c+2617,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_56", false,-1);
        vcdp->declBit(c+2625,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_57", false,-1);
        vcdp->declBit(c+2633,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_58", false,-1);
        vcdp->declBit(c+2641,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_59", false,-1);
        vcdp->declBit(c+2649,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_60", false,-1);
        vcdp->declBit(c+2657,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_61", false,-1);
        vcdp->declBit(c+2665,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_62", false,-1);
        vcdp->declBit(c+2673,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_data_last_63", false,-1);
        vcdp->declBus(c+3961,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_head_cursor", false,-1, 5,0);
        vcdp->declBit(c+4193,"ViterbiDecoder lifo_core decoded_lifo_0 lifo_last", false,-1);
        vcdp->declBit(c+521,"ViterbiDecoder lifo_core decoded_lifo_0 push_fire", false,-1);
        vcdp->declBit(c+529,"ViterbiDecoder lifo_core decoded_lifo_0 when_SISOLifo_l25", false,-1);
        vcdp->declBit(c+537,"ViterbiDecoder lifo_core decoded_lifo_0 pop_fire", false,-1);
        vcdp->declBit(c+545,"ViterbiDecoder lifo_core decoded_lifo_0 when_SISOLifo_l32", false,-1);
        vcdp->declBit(c+401,"ViterbiDecoder lifo_core decoded_lifo_1 push_valid", false,-1);
        vcdp->declBit(c+361,"ViterbiDecoder lifo_core decoded_lifo_1 push_ready", false,-1);
        vcdp->declBit(c+4033,"ViterbiDecoder lifo_core decoded_lifo_1 push_payload_last", false,-1);
        vcdp->declBus(c+4041,"ViterbiDecoder lifo_core decoded_lifo_1 push_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+369,"ViterbiDecoder lifo_core decoded_lifo_1 pop_valid", false,-1);
        vcdp->declBit(c+3825,"ViterbiDecoder lifo_core decoded_lifo_1 pop_ready", false,-1);
        vcdp->declBit(c+3985,"ViterbiDecoder lifo_core decoded_lifo_1 pop_payload_last", false,-1);
        vcdp->declBus(c+377,"ViterbiDecoder lifo_core decoded_lifo_1 pop_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+3833,"ViterbiDecoder lifo_core decoded_lifo_1 push_method", false,-1);
        vcdp->declBit(c+3857,"ViterbiDecoder lifo_core decoded_lifo_1 empty", false,-1);
        vcdp->declBit(c+3865,"ViterbiDecoder lifo_core decoded_lifo_1 full", false,-1);
        vcdp->declBit(c+4289,"ViterbiDecoder lifo_core decoded_lifo_1 clk", false,-1);
        vcdp->declBit(c+4297,"ViterbiDecoder lifo_core decoded_lifo_1 reset", false,-1);
        vcdp->declBus(c+2681,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_0", false,-1, 0,0);
        vcdp->declBus(c+2689,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_1", false,-1, 0,0);
        vcdp->declBus(c+2697,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_2", false,-1, 0,0);
        vcdp->declBus(c+2705,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_3", false,-1, 0,0);
        vcdp->declBus(c+2713,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_4", false,-1, 0,0);
        vcdp->declBus(c+2721,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_5", false,-1, 0,0);
        vcdp->declBus(c+2729,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_6", false,-1, 0,0);
        vcdp->declBus(c+2737,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_7", false,-1, 0,0);
        vcdp->declBus(c+2745,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_8", false,-1, 0,0);
        vcdp->declBus(c+2753,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_9", false,-1, 0,0);
        vcdp->declBus(c+2761,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_10", false,-1, 0,0);
        vcdp->declBus(c+2769,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_11", false,-1, 0,0);
        vcdp->declBus(c+2777,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_12", false,-1, 0,0);
        vcdp->declBus(c+2785,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_13", false,-1, 0,0);
        vcdp->declBus(c+2793,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_14", false,-1, 0,0);
        vcdp->declBus(c+2801,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_15", false,-1, 0,0);
        vcdp->declBus(c+2809,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_16", false,-1, 0,0);
        vcdp->declBus(c+2817,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_17", false,-1, 0,0);
        vcdp->declBus(c+2825,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_18", false,-1, 0,0);
        vcdp->declBus(c+2833,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_19", false,-1, 0,0);
        vcdp->declBus(c+2841,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_20", false,-1, 0,0);
        vcdp->declBus(c+2849,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_21", false,-1, 0,0);
        vcdp->declBus(c+2857,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_22", false,-1, 0,0);
        vcdp->declBus(c+2865,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_23", false,-1, 0,0);
        vcdp->declBus(c+2873,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_24", false,-1, 0,0);
        vcdp->declBus(c+2881,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_25", false,-1, 0,0);
        vcdp->declBus(c+2889,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_26", false,-1, 0,0);
        vcdp->declBus(c+2897,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_27", false,-1, 0,0);
        vcdp->declBus(c+2905,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_28", false,-1, 0,0);
        vcdp->declBus(c+2913,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_29", false,-1, 0,0);
    }
}

void VViterbiDecoder::traceInitThis__2(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+2921,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_30", false,-1, 0,0);
        vcdp->declBus(c+2929,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_31", false,-1, 0,0);
        vcdp->declBus(c+2937,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_32", false,-1, 0,0);
        vcdp->declBus(c+2945,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_33", false,-1, 0,0);
        vcdp->declBus(c+2953,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_34", false,-1, 0,0);
        vcdp->declBus(c+2961,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_35", false,-1, 0,0);
        vcdp->declBus(c+2969,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_36", false,-1, 0,0);
        vcdp->declBus(c+2977,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_37", false,-1, 0,0);
        vcdp->declBus(c+2985,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_38", false,-1, 0,0);
        vcdp->declBus(c+2993,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_39", false,-1, 0,0);
        vcdp->declBus(c+3001,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_40", false,-1, 0,0);
        vcdp->declBus(c+3009,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_41", false,-1, 0,0);
        vcdp->declBus(c+3017,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_42", false,-1, 0,0);
        vcdp->declBus(c+3025,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_43", false,-1, 0,0);
        vcdp->declBus(c+3033,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_44", false,-1, 0,0);
        vcdp->declBus(c+3041,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_45", false,-1, 0,0);
        vcdp->declBus(c+3049,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_46", false,-1, 0,0);
        vcdp->declBus(c+3057,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_47", false,-1, 0,0);
        vcdp->declBus(c+3065,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_48", false,-1, 0,0);
        vcdp->declBus(c+3073,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_49", false,-1, 0,0);
        vcdp->declBus(c+3081,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_50", false,-1, 0,0);
        vcdp->declBus(c+3089,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_51", false,-1, 0,0);
        vcdp->declBus(c+3097,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_52", false,-1, 0,0);
        vcdp->declBus(c+3105,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_53", false,-1, 0,0);
        vcdp->declBus(c+3113,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_54", false,-1, 0,0);
        vcdp->declBus(c+3121,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_55", false,-1, 0,0);
        vcdp->declBus(c+3129,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_56", false,-1, 0,0);
        vcdp->declBus(c+3137,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_57", false,-1, 0,0);
        vcdp->declBus(c+3145,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_58", false,-1, 0,0);
        vcdp->declBus(c+3153,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_59", false,-1, 0,0);
        vcdp->declBus(c+3161,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_60", false,-1, 0,0);
        vcdp->declBus(c+3169,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_61", false,-1, 0,0);
        vcdp->declBus(c+3177,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_62", false,-1, 0,0);
        vcdp->declBus(c+3185,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_63", false,-1, 0,0);
        vcdp->declBit(c+3193,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_0", false,-1);
        vcdp->declBit(c+3201,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_1", false,-1);
        vcdp->declBit(c+3209,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_2", false,-1);
        vcdp->declBit(c+3217,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_3", false,-1);
        vcdp->declBit(c+3225,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_4", false,-1);
        vcdp->declBit(c+3233,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_5", false,-1);
        vcdp->declBit(c+3241,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_6", false,-1);
        vcdp->declBit(c+3249,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_7", false,-1);
        vcdp->declBit(c+3257,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_8", false,-1);
        vcdp->declBit(c+3265,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_9", false,-1);
        vcdp->declBit(c+3273,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_10", false,-1);
        vcdp->declBit(c+3281,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_11", false,-1);
        vcdp->declBit(c+3289,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_12", false,-1);
        vcdp->declBit(c+3297,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_13", false,-1);
        vcdp->declBit(c+3305,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_14", false,-1);
        vcdp->declBit(c+3313,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_15", false,-1);
        vcdp->declBit(c+3321,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_16", false,-1);
        vcdp->declBit(c+3329,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_17", false,-1);
        vcdp->declBit(c+3337,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_18", false,-1);
        vcdp->declBit(c+3345,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_19", false,-1);
        vcdp->declBit(c+3353,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_20", false,-1);
        vcdp->declBit(c+3361,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_21", false,-1);
        vcdp->declBit(c+3369,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_22", false,-1);
        vcdp->declBit(c+3377,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_23", false,-1);
        vcdp->declBit(c+3385,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_24", false,-1);
        vcdp->declBit(c+3393,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_25", false,-1);
        vcdp->declBit(c+3401,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_26", false,-1);
        vcdp->declBit(c+3409,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_27", false,-1);
        vcdp->declBit(c+3417,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_28", false,-1);
        vcdp->declBit(c+3425,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_29", false,-1);
        vcdp->declBit(c+3433,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_30", false,-1);
        vcdp->declBit(c+3441,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_31", false,-1);
        vcdp->declBit(c+3449,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_32", false,-1);
        vcdp->declBit(c+3457,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_33", false,-1);
        vcdp->declBit(c+3465,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_34", false,-1);
        vcdp->declBit(c+3473,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_35", false,-1);
        vcdp->declBit(c+3481,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_36", false,-1);
        vcdp->declBit(c+3489,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_37", false,-1);
        vcdp->declBit(c+3497,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_38", false,-1);
        vcdp->declBit(c+3505,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_39", false,-1);
        vcdp->declBit(c+3513,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_40", false,-1);
        vcdp->declBit(c+3521,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_41", false,-1);
        vcdp->declBit(c+3529,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_42", false,-1);
        vcdp->declBit(c+3537,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_43", false,-1);
        vcdp->declBit(c+3545,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_44", false,-1);
        vcdp->declBit(c+3553,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_45", false,-1);
        vcdp->declBit(c+3561,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_46", false,-1);
        vcdp->declBit(c+3569,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_47", false,-1);
        vcdp->declBit(c+3577,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_48", false,-1);
        vcdp->declBit(c+3585,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_49", false,-1);
        vcdp->declBit(c+3593,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_50", false,-1);
        vcdp->declBit(c+3601,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_51", false,-1);
        vcdp->declBit(c+3609,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_52", false,-1);
        vcdp->declBit(c+3617,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_53", false,-1);
        vcdp->declBit(c+3625,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_54", false,-1);
        vcdp->declBit(c+3633,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_55", false,-1);
        vcdp->declBit(c+3641,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_56", false,-1);
        vcdp->declBit(c+3649,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_57", false,-1);
        vcdp->declBit(c+3657,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_58", false,-1);
        vcdp->declBit(c+3665,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_59", false,-1);
        vcdp->declBit(c+3673,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_60", false,-1);
        vcdp->declBit(c+3681,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_61", false,-1);
        vcdp->declBit(c+3689,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_62", false,-1);
        vcdp->declBit(c+3697,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_data_last_63", false,-1);
        vcdp->declBus(c+3969,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_head_cursor", false,-1, 5,0);
        vcdp->declBit(c+4201,"ViterbiDecoder lifo_core decoded_lifo_1 lifo_last", false,-1);
        vcdp->declBit(c+553,"ViterbiDecoder lifo_core decoded_lifo_1 push_fire", false,-1);
        vcdp->declBit(c+561,"ViterbiDecoder lifo_core decoded_lifo_1 when_SISOLifo_l25", false,-1);
        vcdp->declBit(c+569,"ViterbiDecoder lifo_core decoded_lifo_1 pop_fire", false,-1);
        vcdp->declBit(c+577,"ViterbiDecoder lifo_core decoded_lifo_1 when_SISOLifo_l32", false,-1);
        vcdp->declBus(c+3833,"ViterbiDecoder lifo_core lifo_demux select_1", false,-1, 0,0);
        vcdp->declBit(c+297,"ViterbiDecoder lifo_core lifo_demux input_valid", false,-1);
        vcdp->declBit(c+385,"ViterbiDecoder lifo_core lifo_demux input_ready", false,-1);
        vcdp->declBit(c+4033,"ViterbiDecoder lifo_core lifo_demux input_payload_last", false,-1);
        vcdp->declBus(c+4041,"ViterbiDecoder lifo_core lifo_demux input_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+393,"ViterbiDecoder lifo_core lifo_demux outputs_0_valid", false,-1);
        vcdp->declBit(c+337,"ViterbiDecoder lifo_core lifo_demux outputs_0_ready", false,-1);
        vcdp->declBit(c+4033,"ViterbiDecoder lifo_core lifo_demux outputs_0_payload_last", false,-1);
        vcdp->declBus(c+4041,"ViterbiDecoder lifo_core lifo_demux outputs_0_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+401,"ViterbiDecoder lifo_core lifo_demux outputs_1_valid", false,-1);
        vcdp->declBit(c+361,"ViterbiDecoder lifo_core lifo_demux outputs_1_ready", false,-1);
        vcdp->declBit(c+4033,"ViterbiDecoder lifo_core lifo_demux outputs_1_payload_last", false,-1);
        vcdp->declBus(c+4041,"ViterbiDecoder lifo_core lifo_demux outputs_1_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+3833,"ViterbiDecoder lifo_core lifo_demux when_SISOLifo_l57", false,-1);
        vcdp->declBit(c+3825,"ViterbiDecoder lifo_core lifo_demux when_SISOLifo_l57_1", false,-1);
        vcdp->declBus(c+3825,"ViterbiDecoder lifo_core lifo_mux io_select", false,-1, 0,0);
        vcdp->declBit(c+345,"ViterbiDecoder lifo_core lifo_mux io_inputs_0_valid", false,-1);
        vcdp->declBit(c+3833,"ViterbiDecoder lifo_core lifo_mux io_inputs_0_ready", false,-1);
        vcdp->declBit(c+3977,"ViterbiDecoder lifo_core lifo_mux io_inputs_0_payload_last", false,-1);
        vcdp->declBus(c+353,"ViterbiDecoder lifo_core lifo_mux io_inputs_0_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+369,"ViterbiDecoder lifo_core lifo_mux io_inputs_1_valid", false,-1);
        vcdp->declBit(c+3825,"ViterbiDecoder lifo_core lifo_mux io_inputs_1_ready", false,-1);
        vcdp->declBit(c+3985,"ViterbiDecoder lifo_core lifo_mux io_inputs_1_payload_last", false,-1);
        vcdp->declBus(c+377,"ViterbiDecoder lifo_core lifo_mux io_inputs_1_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+409,"ViterbiDecoder lifo_core lifo_mux io_output_valid", false,-1);
        vcdp->declBit(c+4417,"ViterbiDecoder lifo_core lifo_mux io_output_ready", false,-1);
        vcdp->declBit(c+3993,"ViterbiDecoder lifo_core lifo_mux io_output_payload_last", false,-1);
        vcdp->declBus(c+417,"ViterbiDecoder lifo_core lifo_mux io_output_payload_fragment", false,-1, 0,0);
    }
}

void VViterbiDecoder::traceFullThis__1(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom[0]),2);
        vcdp->fullBus(c+2,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom[1]),2);
        vcdp->fullBus(c+3,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom[2]),2);
        vcdp->fullBus(c+4,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom[3]),2);
        vcdp->fullBus(c+5,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom[4]),2);
        vcdp->fullBus(c+6,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom[5]),2);
        vcdp->fullBus(c+7,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom[6]),2);
        vcdp->fullBus(c+8,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom[7]),2);
        vcdp->fullBit(c+65,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom[0]));
        vcdp->fullBit(c+66,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom[1]));
        vcdp->fullBit(c+67,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom[2]));
        vcdp->fullBit(c+68,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom[3]));
        vcdp->fullBit(c+69,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom[4]));
        vcdp->fullBit(c+70,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom[5]));
        vcdp->fullBit(c+71,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom[6]));
        vcdp->fullBit(c+72,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom[7]));
        vcdp->fullBus(c+129,(((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17)
                               ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0)
                               : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1))),8);
        vcdp->fullBit(c+137,((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17)))));
        vcdp->fullBus(c+145,(((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17)
                               ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0)
                               : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1))),8);
        vcdp->fullBit(c+153,((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17)))));
        vcdp->fullBus(c+161,(((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17)
                               ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0)
                               : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1))),8);
        vcdp->fullBit(c+169,((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17)))));
        vcdp->fullBus(c+177,(((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17)
                               ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0)
                               : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1))),8);
        vcdp->fullBit(c+185,((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17)))));
        vcdp->fullBus(c+193,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0),8);
        vcdp->fullBus(c+201,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1),8);
        vcdp->fullBit(c+209,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17));
        vcdp->fullBus(c+217,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0),8);
        vcdp->fullBus(c+225,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1),8);
        vcdp->fullBit(c+233,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17));
        vcdp->fullBus(c+241,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0),8);
        vcdp->fullBus(c+249,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1),8);
        vcdp->fullBit(c+257,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17));
        vcdp->fullBus(c+265,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0),8);
        vcdp->fullBus(c+273,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1),8);
        vcdp->fullBit(c+281,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17));
        vcdp->fullBit(c+289,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_ready));
        vcdp->fullBit(c+297,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_demux_input_valid));
        vcdp->fullBit(c+305,((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+313,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid));
        vcdp->fullBus(c+321,(((((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy) 
                                & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch)) 
                               << 4U) | (0xfU & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value))))),5);
        vcdp->fullBus(c+329,(((((~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy)) 
                                & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch)) 
                               << 4U) | (0xfU & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value))))),5);
        vcdp->fullBit(c+337,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0_push_ready));
        vcdp->fullBit(c+345,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0_pop_valid));
        vcdp->fullBit(c+353,(((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) 
                              & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT___zz_pop_payload_fragment))));
        vcdp->fullBit(c+361,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1_push_ready));
        vcdp->fullBit(c+369,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1_pop_valid));
        vcdp->fullBit(c+377,(((~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)) 
                              & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT___zz_pop_payload_fragment))));
        vcdp->fullBit(c+385,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_demux_input_ready));
        vcdp->fullBit(c+393,(((~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)) 
                              & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_demux_input_valid))));
        vcdp->fullBit(c+401,(((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) 
                              & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_demux_input_valid))));
        vcdp->fullBit(c+409,(((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)
                               ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0_pop_valid)
                               : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1_pop_valid))));
        vcdp->fullBit(c+417,(((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)
                               ? ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) 
                                  & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT___zz_pop_payload_fragment))
                               : ((~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)) 
                                  & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT___zz_pop_payload_fragment)))));
        vcdp->fullBit(c+425,(((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid) 
                              & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_ready))));
        vcdp->fullBit(c+433,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+441,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_valueNext),4);
        vcdp->fullBit(c+449,(((0xfU == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+457,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBit(c+465,(((0xfU == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+473,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+481,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing));
        vcdp->fullBit(c+489,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping));
        vcdp->fullBit(c+497,(((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+505,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full));
        vcdp->fullBit(c+513,(((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping))));
        vcdp->fullBit(c+521,((((~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)) 
                               & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_demux_input_valid)) 
                              & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0_push_ready))));
        vcdp->fullBit(c+529,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25));
        vcdp->fullBit(c+537,(((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0_pop_valid) 
                              & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state))));
        vcdp->fullBit(c+545,((((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0_pop_valid) 
                               & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)) 
                              & (0U != (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)))));
        vcdp->fullBit(c+553,((((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) 
                               & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_demux_input_valid)) 
                              & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1_push_ready))));
        vcdp->fullBit(c+561,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25));
        vcdp->fullBit(c+569,(((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1_pop_valid) 
                              & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))));
        vcdp->fullBit(c+577,((((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1_pop_valid) 
                               & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state))) 
                              & (0U != (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)))));
        vcdp->fullBus(c+585,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__cursor),3);
        vcdp->fullBus(c+593,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom
                             [vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__cursor]),2);
        vcdp->fullBit(c+601,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom
                             [vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__cursor]));
        vcdp->fullBit(c+609,(vlTOPp->ViterbiDecoder__DOT__raw_data_fire));
        vcdp->fullBit(c+617,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l104));
        vcdp->fullArray(c+625,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string),88);
        vcdp->fullBus(c+649,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_valueNext),4);
        vcdp->fullBus(c+657,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_2),2);
        vcdp->fullBus(c+665,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path),4);
        vcdp->fullBit(c+673,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pipe_halt));
        vcdp->fullBit(c+681,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_mux_io_output_payload_fragment_regNext));
        vcdp->fullBus(c+689,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_0),8);
        vcdp->fullBus(c+697,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_1),8);
        vcdp->fullBus(c+705,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_2),8);
        vcdp->fullBus(c+713,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_3),8);
        vcdp->fullBus(c+721,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_4),8);
        vcdp->fullBus(c+729,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_5),8);
        vcdp->fullBus(c+737,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_6),8);
        vcdp->fullBus(c+745,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_7),8);
        vcdp->fullBus(c+753,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_2),8);
        vcdp->fullBus(c+761,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0),8);
        vcdp->fullBus(c+769,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1),8);
        vcdp->fullBus(c+777,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2),8);
        vcdp->fullBus(c+785,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3),8);
        vcdp->fullBus(c+793,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_0),2);
        vcdp->fullBus(c+801,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_1),2);
        vcdp->fullBus(c+809,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_2),2);
        vcdp->fullBus(c+817,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_3),2);
        vcdp->fullBus(c+825,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_4),2);
        vcdp->fullBus(c+833,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_5),2);
        vcdp->fullBus(c+841,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_6),2);
        vcdp->fullBus(c+849,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_7),2);
        vcdp->fullBus(c+857,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_survival_path_ram_0_port1),4);
        vcdp->fullBus(c+865,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port1),4);
        vcdp->fullBus(c+873,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__min_cursor),2);
        vcdp->fullBit(c+881,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_data));
        vcdp->fullBus(c+889,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[0]),4);
        vcdp->fullBus(c+890,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[1]),4);
        vcdp->fullBus(c+891,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[2]),4);
        vcdp->fullBus(c+892,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[3]),4);
        vcdp->fullBus(c+893,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[4]),4);
        vcdp->fullBus(c+894,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[5]),4);
        vcdp->fullBus(c+895,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[6]),4);
        vcdp->fullBus(c+896,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[7]),4);
        vcdp->fullBus(c+897,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[8]),4);
        vcdp->fullBus(c+898,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[9]),4);
        vcdp->fullBus(c+899,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[10]),4);
        vcdp->fullBus(c+900,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[11]),4);
        vcdp->fullBus(c+901,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[12]),4);
        vcdp->fullBus(c+902,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[13]),4);
        vcdp->fullBus(c+903,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[14]),4);
        vcdp->fullBus(c+904,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[15]),4);
        vcdp->fullBus(c+905,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[16]),4);
        vcdp->fullBus(c+906,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[17]),4);
        vcdp->fullBus(c+907,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[18]),4);
        vcdp->fullBus(c+908,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[19]),4);
        vcdp->fullBus(c+909,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[20]),4);
        vcdp->fullBus(c+910,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[21]),4);
        vcdp->fullBus(c+911,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[22]),4);
        vcdp->fullBus(c+912,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[23]),4);
        vcdp->fullBus(c+913,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[24]),4);
        vcdp->fullBus(c+914,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[25]),4);
        vcdp->fullBus(c+915,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[26]),4);
        vcdp->fullBus(c+916,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[27]),4);
        vcdp->fullBus(c+917,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[28]),4);
        vcdp->fullBus(c+918,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[29]),4);
        vcdp->fullBus(c+919,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[30]),4);
        vcdp->fullBus(c+920,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[31]),4);
        vcdp->fullBus(c+1145,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[0]),4);
        vcdp->fullBus(c+1146,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[1]),4);
        vcdp->fullBus(c+1147,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[2]),4);
        vcdp->fullBus(c+1148,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[3]),4);
        vcdp->fullBus(c+1149,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[4]),4);
        vcdp->fullBus(c+1150,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[5]),4);
        vcdp->fullBus(c+1151,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[6]),4);
        vcdp->fullBus(c+1152,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[7]),4);
        vcdp->fullBus(c+1153,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[8]),4);
        vcdp->fullBus(c+1154,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[9]),4);
        vcdp->fullBus(c+1155,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[10]),4);
        vcdp->fullBus(c+1156,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[11]),4);
        vcdp->fullBus(c+1157,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[12]),4);
        vcdp->fullBus(c+1158,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[13]),4);
        vcdp->fullBus(c+1159,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[14]),4);
        vcdp->fullBus(c+1160,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[15]),4);
        vcdp->fullBus(c+1161,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[16]),4);
        vcdp->fullBus(c+1162,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[17]),4);
        vcdp->fullBus(c+1163,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[18]),4);
        vcdp->fullBus(c+1164,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[19]),4);
        vcdp->fullBus(c+1165,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[20]),4);
        vcdp->fullBus(c+1166,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[21]),4);
        vcdp->fullBus(c+1167,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[22]),4);
        vcdp->fullBus(c+1168,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[23]),4);
        vcdp->fullBus(c+1169,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[24]),4);
        vcdp->fullBus(c+1170,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[25]),4);
        vcdp->fullBus(c+1171,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[26]),4);
        vcdp->fullBus(c+1172,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[27]),4);
        vcdp->fullBus(c+1173,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[28]),4);
        vcdp->fullBus(c+1174,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[29]),4);
        vcdp->fullBus(c+1175,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[30]),4);
        vcdp->fullBus(c+1176,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[31]),4);
        vcdp->fullBus(c+1401,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[0]),4);
        vcdp->fullBus(c+1402,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[1]),4);
        vcdp->fullBus(c+1403,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[2]),4);
        vcdp->fullBus(c+1404,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[3]),4);
        vcdp->fullBus(c+1405,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[4]),4);
        vcdp->fullBus(c+1406,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[5]),4);
        vcdp->fullBus(c+1407,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[6]),4);
        vcdp->fullBus(c+1408,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[7]),4);
        vcdp->fullBus(c+1409,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[8]),4);
        vcdp->fullBus(c+1410,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[9]),4);
        vcdp->fullBus(c+1411,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[10]),4);
        vcdp->fullBus(c+1412,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[11]),4);
        vcdp->fullBus(c+1413,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[12]),4);
        vcdp->fullBus(c+1414,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[13]),4);
        vcdp->fullBus(c+1415,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[14]),4);
        vcdp->fullBus(c+1416,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[15]),4);
        vcdp->fullBus(c+1417,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[16]),4);
        vcdp->fullBus(c+1418,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[17]),4);
        vcdp->fullBus(c+1419,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[18]),4);
        vcdp->fullBus(c+1420,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[19]),4);
        vcdp->fullBus(c+1421,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[20]),4);
        vcdp->fullBus(c+1422,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[21]),4);
        vcdp->fullBus(c+1423,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[22]),4);
        vcdp->fullBus(c+1424,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[23]),4);
        vcdp->fullBus(c+1425,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[24]),4);
        vcdp->fullBus(c+1426,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[25]),4);
        vcdp->fullBus(c+1427,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[26]),4);
        vcdp->fullBus(c+1428,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[27]),4);
        vcdp->fullBus(c+1429,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[28]),4);
        vcdp->fullBus(c+1430,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[29]),4);
        vcdp->fullBus(c+1431,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[30]),4);
        vcdp->fullBus(c+1432,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[31]),4);
        vcdp->fullBit(c+1657,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_0));
        vcdp->fullBit(c+1665,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_1));
        vcdp->fullBit(c+1673,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_2));
        vcdp->fullBit(c+1681,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_3));
        vcdp->fullBit(c+1689,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_4));
        vcdp->fullBit(c+1697,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_5));
        vcdp->fullBit(c+1705,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_6));
        vcdp->fullBit(c+1713,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_7));
        vcdp->fullBit(c+1721,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_8));
        vcdp->fullBit(c+1729,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_9));
        vcdp->fullBit(c+1737,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_10));
        vcdp->fullBit(c+1745,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_11));
        vcdp->fullBit(c+1753,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_12));
        vcdp->fullBit(c+1761,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_13));
        vcdp->fullBit(c+1769,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_14));
        vcdp->fullBit(c+1777,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_15));
        vcdp->fullBit(c+1785,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_16));
        vcdp->fullBit(c+1793,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_17));
        vcdp->fullBit(c+1801,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_18));
        vcdp->fullBit(c+1809,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_19));
        vcdp->fullBit(c+1817,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_20));
        vcdp->fullBit(c+1825,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_21));
        vcdp->fullBit(c+1833,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_22));
        vcdp->fullBit(c+1841,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_23));
        vcdp->fullBit(c+1849,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_24));
        vcdp->fullBit(c+1857,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_25));
        vcdp->fullBit(c+1865,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_26));
        vcdp->fullBit(c+1873,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_27));
        vcdp->fullBit(c+1881,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_28));
        vcdp->fullBit(c+1889,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_29));
        vcdp->fullBit(c+1897,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_30));
        vcdp->fullBit(c+1905,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_31));
        vcdp->fullBit(c+1913,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_32));
        vcdp->fullBit(c+1921,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_33));
        vcdp->fullBit(c+1929,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_34));
        vcdp->fullBit(c+1937,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_35));
        vcdp->fullBit(c+1945,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_36));
        vcdp->fullBit(c+1953,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_37));
        vcdp->fullBit(c+1961,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_38));
        vcdp->fullBit(c+1969,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_39));
        vcdp->fullBit(c+1977,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_40));
        vcdp->fullBit(c+1985,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_41));
        vcdp->fullBit(c+1993,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_42));
        vcdp->fullBit(c+2001,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_43));
        vcdp->fullBit(c+2009,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_44));
        vcdp->fullBit(c+2017,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_45));
        vcdp->fullBit(c+2025,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_46));
        vcdp->fullBit(c+2033,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_47));
        vcdp->fullBit(c+2041,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_48));
        vcdp->fullBit(c+2049,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_49));
        vcdp->fullBit(c+2057,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_50));
        vcdp->fullBit(c+2065,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_51));
        vcdp->fullBit(c+2073,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_52));
        vcdp->fullBit(c+2081,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_53));
        vcdp->fullBit(c+2089,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_54));
        vcdp->fullBit(c+2097,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_55));
        vcdp->fullBit(c+2105,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_56));
        vcdp->fullBit(c+2113,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_57));
        vcdp->fullBit(c+2121,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_58));
        vcdp->fullBit(c+2129,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_59));
        vcdp->fullBit(c+2137,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_60));
        vcdp->fullBit(c+2145,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_61));
        vcdp->fullBit(c+2153,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_62));
        vcdp->fullBit(c+2161,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_63));
        vcdp->fullBit(c+2169,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_0));
        vcdp->fullBit(c+2177,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_1));
        vcdp->fullBit(c+2185,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_2));
        vcdp->fullBit(c+2193,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_3));
        vcdp->fullBit(c+2201,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_4));
        vcdp->fullBit(c+2209,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_5));
        vcdp->fullBit(c+2217,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_6));
        vcdp->fullBit(c+2225,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_7));
        vcdp->fullBit(c+2233,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_8));
        vcdp->fullBit(c+2241,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_9));
        vcdp->fullBit(c+2249,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_10));
        vcdp->fullBit(c+2257,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_11));
        vcdp->fullBit(c+2265,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_12));
        vcdp->fullBit(c+2273,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_13));
        vcdp->fullBit(c+2281,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_14));
        vcdp->fullBit(c+2289,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_15));
        vcdp->fullBit(c+2297,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_16));
        vcdp->fullBit(c+2305,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_17));
        vcdp->fullBit(c+2313,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_18));
        vcdp->fullBit(c+2321,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_19));
        vcdp->fullBit(c+2329,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_20));
        vcdp->fullBit(c+2337,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_21));
        vcdp->fullBit(c+2345,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_22));
        vcdp->fullBit(c+2353,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_23));
        vcdp->fullBit(c+2361,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_24));
        vcdp->fullBit(c+2369,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_25));
        vcdp->fullBit(c+2377,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_26));
        vcdp->fullBit(c+2385,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_27));
        vcdp->fullBit(c+2393,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_28));
        vcdp->fullBit(c+2401,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_29));
        vcdp->fullBit(c+2409,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_30));
        vcdp->fullBit(c+2417,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_31));
        vcdp->fullBit(c+2425,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_32));
        vcdp->fullBit(c+2433,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_33));
        vcdp->fullBit(c+2441,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_34));
        vcdp->fullBit(c+2449,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_35));
    }
}

void VViterbiDecoder::traceFullThis__9(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp9[3];
    // Body
    {
        vcdp->fullBit(c+2457,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_36));
        vcdp->fullBit(c+2465,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_37));
        vcdp->fullBit(c+2473,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_38));
        vcdp->fullBit(c+2481,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_39));
        vcdp->fullBit(c+2489,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_40));
        vcdp->fullBit(c+2497,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_41));
        vcdp->fullBit(c+2505,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_42));
        vcdp->fullBit(c+2513,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_43));
        vcdp->fullBit(c+2521,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_44));
        vcdp->fullBit(c+2529,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_45));
        vcdp->fullBit(c+2537,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_46));
        vcdp->fullBit(c+2545,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_47));
        vcdp->fullBit(c+2553,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_48));
        vcdp->fullBit(c+2561,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_49));
        vcdp->fullBit(c+2569,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_50));
        vcdp->fullBit(c+2577,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_51));
        vcdp->fullBit(c+2585,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_52));
        vcdp->fullBit(c+2593,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_53));
        vcdp->fullBit(c+2601,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_54));
        vcdp->fullBit(c+2609,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_55));
        vcdp->fullBit(c+2617,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_56));
        vcdp->fullBit(c+2625,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_57));
        vcdp->fullBit(c+2633,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_58));
        vcdp->fullBit(c+2641,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_59));
        vcdp->fullBit(c+2649,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_60));
        vcdp->fullBit(c+2657,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_61));
        vcdp->fullBit(c+2665,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_62));
        vcdp->fullBit(c+2673,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_63));
        vcdp->fullBit(c+2681,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_0));
        vcdp->fullBit(c+2689,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_1));
        vcdp->fullBit(c+2697,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_2));
        vcdp->fullBit(c+2705,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_3));
        vcdp->fullBit(c+2713,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_4));
        vcdp->fullBit(c+2721,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_5));
        vcdp->fullBit(c+2729,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_6));
        vcdp->fullBit(c+2737,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_7));
        vcdp->fullBit(c+2745,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_8));
        vcdp->fullBit(c+2753,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_9));
        vcdp->fullBit(c+2761,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_10));
        vcdp->fullBit(c+2769,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_11));
        vcdp->fullBit(c+2777,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_12));
        vcdp->fullBit(c+2785,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_13));
        vcdp->fullBit(c+2793,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_14));
        vcdp->fullBit(c+2801,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_15));
        vcdp->fullBit(c+2809,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_16));
        vcdp->fullBit(c+2817,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_17));
        vcdp->fullBit(c+2825,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_18));
        vcdp->fullBit(c+2833,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_19));
        vcdp->fullBit(c+2841,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_20));
        vcdp->fullBit(c+2849,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_21));
        vcdp->fullBit(c+2857,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_22));
        vcdp->fullBit(c+2865,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_23));
        vcdp->fullBit(c+2873,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_24));
        vcdp->fullBit(c+2881,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_25));
        vcdp->fullBit(c+2889,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_26));
        vcdp->fullBit(c+2897,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_27));
        vcdp->fullBit(c+2905,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_28));
        vcdp->fullBit(c+2913,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_29));
        vcdp->fullBit(c+2921,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_30));
        vcdp->fullBit(c+2929,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_31));
        vcdp->fullBit(c+2937,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_32));
        vcdp->fullBit(c+2945,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_33));
        vcdp->fullBit(c+2953,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_34));
        vcdp->fullBit(c+2961,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_35));
        vcdp->fullBit(c+2969,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_36));
        vcdp->fullBit(c+2977,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_37));
        vcdp->fullBit(c+2985,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_38));
        vcdp->fullBit(c+2993,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_39));
        vcdp->fullBit(c+3001,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_40));
        vcdp->fullBit(c+3009,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_41));
        vcdp->fullBit(c+3017,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_42));
        vcdp->fullBit(c+3025,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_43));
        vcdp->fullBit(c+3033,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_44));
        vcdp->fullBit(c+3041,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_45));
        vcdp->fullBit(c+3049,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_46));
        vcdp->fullBit(c+3057,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_47));
        vcdp->fullBit(c+3065,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_48));
        vcdp->fullBit(c+3073,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_49));
        vcdp->fullBit(c+3081,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_50));
        vcdp->fullBit(c+3089,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_51));
        vcdp->fullBit(c+3097,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_52));
        vcdp->fullBit(c+3105,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_53));
        vcdp->fullBit(c+3113,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_54));
        vcdp->fullBit(c+3121,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_55));
        vcdp->fullBit(c+3129,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_56));
        vcdp->fullBit(c+3137,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_57));
        vcdp->fullBit(c+3145,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_58));
        vcdp->fullBit(c+3153,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_59));
        vcdp->fullBit(c+3161,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_60));
        vcdp->fullBit(c+3169,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_61));
        vcdp->fullBit(c+3177,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_62));
        vcdp->fullBit(c+3185,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_63));
        vcdp->fullBit(c+3193,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_0));
        vcdp->fullBit(c+3201,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_1));
        vcdp->fullBit(c+3209,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_2));
        vcdp->fullBit(c+3217,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_3));
        vcdp->fullBit(c+3225,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_4));
        vcdp->fullBit(c+3233,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_5));
        vcdp->fullBit(c+3241,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_6));
        vcdp->fullBit(c+3249,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_7));
        vcdp->fullBit(c+3257,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_8));
        vcdp->fullBit(c+3265,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_9));
        vcdp->fullBit(c+3273,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_10));
        vcdp->fullBit(c+3281,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_11));
        vcdp->fullBit(c+3289,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_12));
        vcdp->fullBit(c+3297,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_13));
        vcdp->fullBit(c+3305,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_14));
        vcdp->fullBit(c+3313,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_15));
        vcdp->fullBit(c+3321,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_16));
        vcdp->fullBit(c+3329,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_17));
        vcdp->fullBit(c+3337,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_18));
        vcdp->fullBit(c+3345,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_19));
        vcdp->fullBit(c+3353,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_20));
        vcdp->fullBit(c+3361,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_21));
        vcdp->fullBit(c+3369,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_22));
        vcdp->fullBit(c+3377,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_23));
        vcdp->fullBit(c+3385,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_24));
        vcdp->fullBit(c+3393,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_25));
        vcdp->fullBit(c+3401,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_26));
        vcdp->fullBit(c+3409,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_27));
        vcdp->fullBit(c+3417,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_28));
        vcdp->fullBit(c+3425,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_29));
        vcdp->fullBit(c+3433,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_30));
        vcdp->fullBit(c+3441,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_31));
        vcdp->fullBit(c+3449,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_32));
        vcdp->fullBit(c+3457,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_33));
        vcdp->fullBit(c+3465,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_34));
        vcdp->fullBit(c+3473,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_35));
        vcdp->fullBit(c+3481,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_36));
        vcdp->fullBit(c+3489,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_37));
        vcdp->fullBit(c+3497,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_38));
        vcdp->fullBit(c+3505,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_39));
        vcdp->fullBit(c+3513,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_40));
        vcdp->fullBit(c+3521,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_41));
        vcdp->fullBit(c+3529,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_42));
        vcdp->fullBit(c+3537,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_43));
        vcdp->fullBit(c+3545,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_44));
        vcdp->fullBit(c+3553,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_45));
        vcdp->fullBit(c+3561,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_46));
        vcdp->fullBit(c+3569,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_47));
        vcdp->fullBit(c+3577,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_48));
        vcdp->fullBit(c+3585,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_49));
        vcdp->fullBit(c+3593,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_50));
        vcdp->fullBit(c+3601,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_51));
        vcdp->fullBit(c+3609,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_52));
        vcdp->fullBit(c+3617,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_53));
        vcdp->fullBit(c+3625,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_54));
        vcdp->fullBit(c+3633,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_55));
        vcdp->fullBit(c+3641,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_56));
        vcdp->fullBit(c+3649,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_57));
        vcdp->fullBit(c+3657,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_58));
        vcdp->fullBit(c+3665,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_59));
        vcdp->fullBit(c+3673,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_60));
        vcdp->fullBit(c+3681,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_61));
        vcdp->fullBit(c+3689,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_62));
        vcdp->fullBit(c+3697,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_63));
        vcdp->fullBus(c+3705,((((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish) 
                                << 1U) | (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_data))),2);
        vcdp->fullBit(c+3713,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1));
        vcdp->fullBit(c+3721,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid));
        vcdp->fullBit(c+3729,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last));
        vcdp->fullBit(c+3737,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_valid_1));
        vcdp->fullBit(c+3745,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_last));
        vcdp->fullBit(c+3753,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_mux_io_output_valid_regNext));
        vcdp->fullBit(c+3761,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_mux_io_output_payload_last_regNext));
        vcdp->fullBit(c+3769,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next));
        vcdp->fullBit(c+3777,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next));
        vcdp->fullBus(c+3785,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_select),2);
        vcdp->fullBus(c+3793,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write),5);
        vcdp->fullBit(c+3801,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pkg_tail));
        vcdp->fullBit(c+3809,((0x1fU <= (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write))));
        vcdp->fullBit(c+3817,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__goto_tail));
        vcdp->fullBit(c+3825,((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))));
        vcdp->fullBit(c+3833,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state));
        vcdp->fullBit(c+3841,((0U == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor))));
        vcdp->fullBit(c+3849,((0x3fU == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor))));
        vcdp->fullBit(c+3857,((0U == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor))));
        vcdp->fullBit(c+3865,((0x3fU == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor))));
        vcdp->fullBit(c+3873,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__fifo_pop_valve));
        vcdp->fullBit(c+3881,((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__fifo_pop_valve)))));
        __Vtemp9[0U] = ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)
                         ? ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)
                             ? 0x55534831U : 0x3f3f3f3fU)
                         : 0x504f5031U);
        __Vtemp9[1U] = ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)
                         ? ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)
                             ? 0x4f503050U : 0x3f3f3f3fU)
                         : 0x55534830U);
        __Vtemp9[2U] = ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)
                         ? ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)
                             ? 0x50U : 0x3fU) : 0x50U);
        vcdp->fullArray(c+3889,(__Vtemp9),72);
        vcdp->fullBus(c+3913,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value),4);
        vcdp->fullBit(c+3921,((0xfU == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+3929,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value),4);
        vcdp->fullBit(c+3937,((0xfU == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+3945,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+3953,((0xfU & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value)))),4);
        vcdp->fullBus(c+3961,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor),6);
        vcdp->fullBus(c+3969,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor),6);
        vcdp->fullBit(c+3977,(((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last) 
                               & (1U == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)))));
        vcdp->fullBit(c+3985,(((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last) 
                               & (1U == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)))));
        vcdp->fullBit(c+3993,(((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)
                                ? ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last) 
                                   & (1U == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)))
                                : ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last) 
                                   & (1U == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor))))));
        vcdp->fullBit(c+4001,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish));
        vcdp->fullBus(c+4009,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_select),2);
        vcdp->fullBus(c+4017,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt),2);
        vcdp->fullBit(c+4025,((3U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt))));
        vcdp->fullBit(c+4033,((1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                                     >> 2U))));
        vcdp->fullBit(c+4041,((1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                                     >> 1U))));
        vcdp->fullBit(c+4049,((1U & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0))));
        vcdp->fullBus(c+4057,((3U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                                     >> 1U))),2);
        vcdp->fullBus(c+4065,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[0]),3);
        vcdp->fullBus(c+4066,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[1]),3);
        vcdp->fullBus(c+4067,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[2]),3);
        vcdp->fullBus(c+4068,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[3]),3);
        vcdp->fullBus(c+4069,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[4]),3);
        vcdp->fullBus(c+4070,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[5]),3);
        vcdp->fullBus(c+4071,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[6]),3);
        vcdp->fullBus(c+4072,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[7]),3);
        vcdp->fullBus(c+4073,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[8]),3);
        vcdp->fullBus(c+4074,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[9]),3);
        vcdp->fullBus(c+4075,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[10]),3);
        vcdp->fullBus(c+4076,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[11]),3);
        vcdp->fullBus(c+4077,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[12]),3);
        vcdp->fullBus(c+4078,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[13]),3);
        vcdp->fullBus(c+4079,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[14]),3);
        vcdp->fullBus(c+4080,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[15]),3);
        vcdp->fullBit(c+4193,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last));
        vcdp->fullBit(c+4201,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last));
        vcdp->fullBus(c+4209,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read),5);
        vcdp->fullBit(c+4217,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat));
        vcdp->fullBus(c+4225,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state),3);
        vcdp->fullBit(c+4233,((0x1fU == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read))));
        vcdp->fullBit(c+4241,(vlTOPp->raw_data_valid));
        vcdp->fullBit(c+4249,(vlTOPp->raw_data_ready));
        vcdp->fullBit(c+4257,(vlTOPp->raw_data_payload_last));
        vcdp->fullBit(c+4265,(vlTOPp->decoded_data_valid));
        vcdp->fullBit(c+4273,(vlTOPp->decoded_data_payload_last));
        vcdp->fullBit(c+4281,(vlTOPp->decoded_data_payload_fragment));
        vcdp->fullBit(c+4289,(vlTOPp->clk));
        vcdp->fullBit(c+4297,(vlTOPp->reset));
        vcdp->fullBus(c+4305,((3U & ((1U & ((IData)(vlTOPp->_zz_in_b) 
                                            >> 1U)) 
                                     + (1U & (IData)(vlTOPp->_zz_in_b))))),2);
    }
}

void VViterbiDecoder::traceFullThis__17(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+4313,((3U & ((1U & (~ ((IData)(vlTOPp->_zz_in_b) 
                                               >> 1U))) 
                                     + (1U & (~ (IData)(vlTOPp->_zz_in_b)))))),2);
        vcdp->fullBus(c+4321,((3U & ((1U & (1U ^ ((IData)(vlTOPp->_zz_in_b) 
                                                  >> 1U))) 
                                     + (1U & (IData)(vlTOPp->_zz_in_b))))),2);
        vcdp->fullBus(c+4329,((3U & ((1U & ((IData)(vlTOPp->_zz_in_b) 
                                            >> 1U)) 
                                     + (1U & (~ (IData)(vlTOPp->_zz_in_b)))))),2);
        vcdp->fullBit(c+4337,(((IData)(vlTOPp->raw_data_payload_last) 
                               & (IData)(vlTOPp->ViterbiDecoder__DOT__raw_data_fire))));
        vcdp->fullBus(c+4345,(vlTOPp->_zz_in_b),2);
        vcdp->fullBus(c+4353,((3U & (~ (IData)(vlTOPp->_zz_in_b)))),2);
        vcdp->fullBus(c+4361,((2U ^ (IData)(vlTOPp->_zz_in_b))),2);
        vcdp->fullBus(c+4369,((1U ^ (IData)(vlTOPp->_zz_in_b))),2);
        vcdp->fullBus(c+4377,(0U),2);
        vcdp->fullBus(c+4385,(3U),2);
        vcdp->fullBus(c+4393,(2U),2);
        vcdp->fullBus(c+4401,(1U),2);
        vcdp->fullBit(c+4409,(0U));
        vcdp->fullBit(c+4417,(1U));
    }
}
