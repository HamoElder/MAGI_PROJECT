// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VConvCombTest__Syms.h"


//======================

void VConvCombTest::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VConvCombTest::traceInit, &VConvCombTest::traceFull, &VConvCombTest::traceChg, this);
}
void VConvCombTest::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VConvCombTest* t = (VConvCombTest*)userthis;
    VConvCombTest__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VConvCombTest::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VConvCombTest* t = (VConvCombTest*)userthis;
    VConvCombTest__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VConvCombTest::traceInitThis(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VConvCombTest::traceFullThis(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
        vlTOPp->traceFullThis__13(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VConvCombTest::traceInitThis__1(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+2153,"tail_bits_valid", false,-1);
        vcdp->declBus(c+2161,"tail_bits_payload", false,-1, 2,0);
        vcdp->declBit(c+2169,"raw_data_valid", false,-1);
        vcdp->declBit(c+2177,"raw_data_payload_last", false,-1);
        vcdp->declBus(c+2185,"raw_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+2193,"decoded_data_valid", false,-1);
        vcdp->declBit(c+2201,"decoded_data_payload_last", false,-1);
        vcdp->declBus(c+2209,"decoded_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+2217,"clk", false,-1);
        vcdp->declBit(c+2225,"reset", false,-1);
        vcdp->declBit(c+2153,"ConvCombTest tail_bits_valid", false,-1);
        vcdp->declBus(c+2161,"ConvCombTest tail_bits_payload", false,-1, 2,0);
        vcdp->declBit(c+2169,"ConvCombTest raw_data_valid", false,-1);
        vcdp->declBit(c+2177,"ConvCombTest raw_data_payload_last", false,-1);
        vcdp->declBus(c+2185,"ConvCombTest raw_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+2193,"ConvCombTest decoded_data_valid", false,-1);
        vcdp->declBit(c+2201,"ConvCombTest decoded_data_payload_last", false,-1);
        vcdp->declBus(c+2209,"ConvCombTest decoded_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+2217,"ConvCombTest clk", false,-1);
        vcdp->declBit(c+2225,"ConvCombTest reset", false,-1);
        vcdp->declBit(c+1697,"ConvCombTest encoder_coded_data_valid", false,-1);
        vcdp->declBit(c+1705,"ConvCombTest encoder_coded_data_payload_last", false,-1);
        vcdp->declBus(c+649,"ConvCombTest encoder_coded_data_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+313,"ConvCombTest encoded_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+321,"ConvCombTest encoded_fifo_io_pop_valid", false,-1);
        vcdp->declBit(c+1953,"ConvCombTest encoded_fifo_io_pop_payload_last", false,-1);
        vcdp->declBus(c+1961,"ConvCombTest encoded_fifo_io_pop_payload_fragment", false,-1, 1,0);
        vcdp->declBus(c+329,"ConvCombTest encoded_fifo_io_occupancy", false,-1, 10,0);
        vcdp->declBus(c+337,"ConvCombTest encoded_fifo_io_availability", false,-1, 10,0);
        vcdp->declBit(c+345,"ConvCombTest decoder_raw_data_ready", false,-1);
        vcdp->declBit(c+1713,"ConvCombTest decoder_decoded_data_valid", false,-1);
        vcdp->declBit(c+1721,"ConvCombTest decoder_decoded_data_payload_last", false,-1);
        vcdp->declBus(c+657,"ConvCombTest decoder_decoded_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+2153,"ConvCombTest encoder tail_bits_valid", false,-1);
        vcdp->declBus(c+2161,"ConvCombTest encoder tail_bits_payload", false,-1, 2,0);
        vcdp->declBit(c+2169,"ConvCombTest encoder raw_data_valid", false,-1);
        vcdp->declBit(c+2177,"ConvCombTest encoder raw_data_payload_last", false,-1);
        vcdp->declBus(c+2185,"ConvCombTest encoder raw_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+1697,"ConvCombTest encoder coded_data_valid", false,-1);
        vcdp->declBit(c+1705,"ConvCombTest encoder coded_data_payload_last", false,-1);
        vcdp->declBus(c+649,"ConvCombTest encoder coded_data_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+2217,"ConvCombTest encoder clk", false,-1);
        vcdp->declBit(c+2225,"ConvCombTest encoder reset", false,-1);
        vcdp->declBus(c+665,"ConvCombTest encoder raw_data_payload", false,-1, 0,0);
        vcdp->declBit(c+1729,"ConvCombTest encoder raw_data_valid_1", false,-1);
        vcdp->declBit(c+1737,"ConvCombTest encoder raw_data_last", false,-1);
        vcdp->declBus(c+649,"ConvCombTest encoder coded_data", false,-1, 1,0);
        vcdp->declBit(c+1697,"ConvCombTest encoder coded_data_valid_1", false,-1);
        vcdp->declBus(c+673,"ConvCombTest encoder r_enc_buf", false,-1, 2,0);
        vcdp->declBus(c+129,"ConvCombTest encoder r_enc_0", false,-1, 2,0);
        vcdp->declBus(c+137,"ConvCombTest encoder code_vec_0", false,-1, 0,0);
        vcdp->declBus(c+145,"ConvCombTest encoder code_vec_1", false,-1, 0,0);
        vcdp->declBit(c+1705,"ConvCombTest encoder raw_data_last_regNext", false,-1);
        vcdp->declBit(c+1697,"ConvCombTest encoded_fifo io_push_valid", false,-1);
        vcdp->declBit(c+313,"ConvCombTest encoded_fifo io_push_ready", false,-1);
        vcdp->declBit(c+1705,"ConvCombTest encoded_fifo io_push_payload_last", false,-1);
        vcdp->declBus(c+649,"ConvCombTest encoded_fifo io_push_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+321,"ConvCombTest encoded_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+345,"ConvCombTest encoded_fifo io_pop_ready", false,-1);
        vcdp->declBit(c+1953,"ConvCombTest encoded_fifo io_pop_payload_last", false,-1);
        vcdp->declBus(c+1961,"ConvCombTest encoded_fifo io_pop_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+2233,"ConvCombTest encoded_fifo io_flush", false,-1);
        vcdp->declBus(c+329,"ConvCombTest encoded_fifo io_occupancy", false,-1, 10,0);
        vcdp->declBus(c+337,"ConvCombTest encoded_fifo io_availability", false,-1, 10,0);
        vcdp->declBit(c+2217,"ConvCombTest encoded_fifo clk", false,-1);
        vcdp->declBit(c+2225,"ConvCombTest encoded_fifo reset", false,-1);
        vcdp->declBit(c+353,"ConvCombTest encoded_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+2233,"ConvCombTest encoded_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+361,"ConvCombTest encoded_fifo logic_pushPtr_valueNext", false,-1, 9,0);
        vcdp->declBus(c+1745,"ConvCombTest encoded_fifo logic_pushPtr_value", false,-1, 9,0);
        vcdp->declBit(c+1753,"ConvCombTest encoded_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+369,"ConvCombTest encoded_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+377,"ConvCombTest encoded_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+2233,"ConvCombTest encoded_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+585,"ConvCombTest encoded_fifo logic_popPtr_valueNext", false,-1, 9,0);
        vcdp->declBus(c+1761,"ConvCombTest encoded_fifo logic_popPtr_value", false,-1, 9,0);
        vcdp->declBit(c+1769,"ConvCombTest encoded_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+385,"ConvCombTest encoded_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+393,"ConvCombTest encoded_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+1777,"ConvCombTest encoded_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+401,"ConvCombTest encoded_fifo logic_pushing", false,-1);
        vcdp->declBit(c+409,"ConvCombTest encoded_fifo logic_popping", false,-1);
        vcdp->declBit(c+417,"ConvCombTest encoded_fifo logic_empty", false,-1);
        vcdp->declBit(c+425,"ConvCombTest encoded_fifo logic_full", false,-1);
        vcdp->declBit(c+433,"ConvCombTest encoded_fifo when_Stream_l933", false,-1);
        vcdp->declBus(c+1785,"ConvCombTest encoded_fifo logic_ptrDif", false,-1, 9,0);
        vcdp->declBit(c+321,"ConvCombTest decoder raw_data_valid", false,-1);
        vcdp->declBit(c+345,"ConvCombTest decoder raw_data_ready", false,-1);
        vcdp->declBit(c+1953,"ConvCombTest decoder raw_data_payload_last", false,-1);
        vcdp->declBit(c+1713,"ConvCombTest decoder decoded_data_valid", false,-1);
        vcdp->declBit(c+1721,"ConvCombTest decoder decoded_data_payload_last", false,-1);
        vcdp->declBus(c+657,"ConvCombTest decoder decoded_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+2217,"ConvCombTest decoder clk", false,-1);
        vcdp->declBit(c+2225,"ConvCombTest decoder reset", false,-1);
        vcdp->declBit(c+1793,"ConvCombTest decoder pmu_core_raw_data_ready", false,-1);
        vcdp->declBus(c+681,"ConvCombTest decoder pmu_core_min_idx", false,-1, 1,0);
        vcdp->declBit(c+1801,"ConvCombTest decoder pmu_core_s_path_valid", false,-1);
        vcdp->declBit(c+1809,"ConvCombTest decoder pmu_core_s_path_payload_last", false,-1);
        vcdp->declBus(c+689,"ConvCombTest decoder pmu_core_s_path_payload_fragment", false,-1, 3,0);
        vcdp->declBit(c+1817,"ConvCombTest decoder tbu_core_tb_node_valid", false,-1);
        vcdp->declBit(c+1825,"ConvCombTest decoder tbu_core_tb_node_payload_last", false,-1);
        vcdp->declBus(c+1689,"ConvCombTest decoder tbu_core_tb_node_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+697,"ConvCombTest decoder tbu_core_halt", false,-1);
        vcdp->declBit(c+1969,"ConvCombTest decoder tbu_core_finished", false,-1);
        vcdp->declBit(c+1713,"ConvCombTest decoder lifo_core_decoded_data_valid", false,-1);
        vcdp->declBit(c+1721,"ConvCombTest decoder lifo_core_decoded_data_payload_last", false,-1);
        vcdp->declBus(c+657,"ConvCombTest decoder lifo_core_decoded_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+441,"ConvCombTest decoder raw_data_fire", false,-1);
        vcdp->declBit(c+441,"ConvCombTest decoder pmu_core raw_data_valid", false,-1);
        vcdp->declBit(c+1793,"ConvCombTest decoder pmu_core raw_data_ready", false,-1);
        vcdp->declBit(c+1953,"ConvCombTest decoder pmu_core raw_data_payload_last", false,-1);
        vcdp->declBit(c+1969,"ConvCombTest decoder pmu_core tbu_finished", false,-1);
        vcdp->declBus(c+681,"ConvCombTest decoder pmu_core min_idx", false,-1, 1,0);
        vcdp->declBit(c+1801,"ConvCombTest decoder pmu_core s_path_valid", false,-1);
        vcdp->declBit(c+1809,"ConvCombTest decoder pmu_core s_path_payload_last", false,-1);
        vcdp->declBus(c+689,"ConvCombTest decoder pmu_core s_path_payload_fragment", false,-1, 3,0);
        vcdp->declBit(c+2217,"ConvCombTest decoder pmu_core clk", false,-1);
        vcdp->declBit(c+2225,"ConvCombTest decoder pmu_core reset", false,-1);
        vcdp->declBus(c+705,"ConvCombTest decoder pmu_core addCompareSelect_4_dist_0", false,-1, 15,0);
        vcdp->declBus(c+713,"ConvCombTest decoder pmu_core addCompareSelect_4_dist_1", false,-1, 15,0);
        vcdp->declBus(c+721,"ConvCombTest decoder pmu_core addCompareSelect_5_dist_0", false,-1, 15,0);
        vcdp->declBus(c+729,"ConvCombTest decoder pmu_core addCompareSelect_5_dist_1", false,-1, 15,0);
        vcdp->declBus(c+737,"ConvCombTest decoder pmu_core addCompareSelect_6_dist_0", false,-1, 15,0);
        vcdp->declBus(c+745,"ConvCombTest decoder pmu_core addCompareSelect_6_dist_1", false,-1, 15,0);
        vcdp->declBus(c+753,"ConvCombTest decoder pmu_core addCompareSelect_7_dist_0", false,-1, 15,0);
        vcdp->declBus(c+761,"ConvCombTest decoder pmu_core addCompareSelect_7_dist_1", false,-1, 15,0);
        vcdp->declBus(c+1977,"ConvCombTest decoder pmu_core branchMetric_4_dist_0", false,-1, 1,0);
        vcdp->declBus(c+1985,"ConvCombTest decoder pmu_core branchMetric_4_dist_1", false,-1, 1,0);
        vcdp->declBus(c+153,"ConvCombTest decoder pmu_core addCompareSelect_4_state_weight", false,-1, 15,0);
        vcdp->declBit(c+161,"ConvCombTest decoder pmu_core addCompareSelect_4_decision", false,-1);
        vcdp->declBus(c+1993,"ConvCombTest decoder pmu_core branchMetric_5_dist_0", false,-1, 1,0);
        vcdp->declBus(c+2001,"ConvCombTest decoder pmu_core branchMetric_5_dist_1", false,-1, 1,0);
        vcdp->declBus(c+169,"ConvCombTest decoder pmu_core addCompareSelect_5_state_weight", false,-1, 15,0);
        vcdp->declBit(c+177,"ConvCombTest decoder pmu_core addCompareSelect_5_decision", false,-1);
        vcdp->declBus(c+1985,"ConvCombTest decoder pmu_core branchMetric_6_dist_0", false,-1, 1,0);
        vcdp->declBus(c+1977,"ConvCombTest decoder pmu_core branchMetric_6_dist_1", false,-1, 1,0);
        vcdp->declBus(c+185,"ConvCombTest decoder pmu_core addCompareSelect_6_state_weight", false,-1, 15,0);
        vcdp->declBit(c+193,"ConvCombTest decoder pmu_core addCompareSelect_6_decision", false,-1);
        vcdp->declBus(c+2001,"ConvCombTest decoder pmu_core branchMetric_7_dist_0", false,-1, 1,0);
        vcdp->declBus(c+1993,"ConvCombTest decoder pmu_core branchMetric_7_dist_1", false,-1, 1,0);
        vcdp->declBus(c+201,"ConvCombTest decoder pmu_core addCompareSelect_7_state_weight", false,-1, 15,0);
        vcdp->declBit(c+209,"ConvCombTest decoder pmu_core addCompareSelect_7_decision", false,-1);
        vcdp->declBus(c+769,"ConvCombTest decoder pmu_core minVal_1_min_val", false,-1, 15,0);
        vcdp->declBus(c+681,"ConvCombTest decoder pmu_core minVal_1_min_idx", false,-1, 1,0);
        vcdp->declBus(c+777,"ConvCombTest decoder pmu_core node_weight_0", false,-1, 15,0);
        vcdp->declBus(c+785,"ConvCombTest decoder pmu_core node_weight_1", false,-1, 15,0);
        vcdp->declBus(c+793,"ConvCombTest decoder pmu_core node_weight_2", false,-1, 15,0);
        vcdp->declBus(c+801,"ConvCombTest decoder pmu_core node_weight_3", false,-1, 15,0);
        vcdp->declBus(c+809,"ConvCombTest decoder pmu_core candidate_branches_0", false,-1, 1,0);
        vcdp->declBus(c+817,"ConvCombTest decoder pmu_core candidate_branches_1", false,-1, 1,0);
        vcdp->declBus(c+825,"ConvCombTest decoder pmu_core candidate_branches_2", false,-1, 1,0);
        vcdp->declBus(c+833,"ConvCombTest decoder pmu_core candidate_branches_3", false,-1, 1,0);
        vcdp->declBus(c+841,"ConvCombTest decoder pmu_core candidate_branches_4", false,-1, 1,0);
        vcdp->declBus(c+849,"ConvCombTest decoder pmu_core candidate_branches_5", false,-1, 1,0);
        vcdp->declBus(c+857,"ConvCombTest decoder pmu_core candidate_branches_6", false,-1, 1,0);
        vcdp->declBus(c+865,"ConvCombTest decoder pmu_core candidate_branches_7", false,-1, 1,0);
        vcdp->declBus(c+689,"ConvCombTest decoder pmu_core survival_path", false,-1, 3,0);
        vcdp->declBit(c+1833,"ConvCombTest decoder pmu_core raw_data_next", false,-1);
        vcdp->declBit(c+1841,"ConvCombTest decoder pmu_core raw_data_last_next", false,-1);
        vcdp->declBit(c+1801,"ConvCombTest decoder pmu_core survival_path_valid", false,-1);
        vcdp->declBit(c+1809,"ConvCombTest decoder pmu_core survival_path_last", false,-1);
        vcdp->declBit(c+1793,"ConvCombTest decoder pmu_core raw_data_ready_1", false,-1);
        vcdp->declBit(c+537,"ConvCombTest decoder pmu_core when_PathMetric_l29", false,-1);
        vcdp->declBus(c+1977,"ConvCombTest decoder pmu_core branchMetric_4 dist_0", false,-1, 1,0);
        vcdp->declBus(c+1985,"ConvCombTest decoder pmu_core branchMetric_4 dist_1", false,-1, 1,0);
        vcdp->declBus(c+1977,"ConvCombTest decoder pmu_core branchMetric_4 hammingDistance_8_distance", false,-1, 1,0);
        vcdp->declBus(c+1985,"ConvCombTest decoder pmu_core branchMetric_4 hammingDistance_9_distance", false,-1, 1,0);
        vcdp->declBus(c+2241,"ConvCombTest decoder pmu_core branchMetric_4 hammingDistance_8 in_a", false,-1, 1,0);
        vcdp->declBus(c+1961,"ConvCombTest decoder pmu_core branchMetric_4 hammingDistance_8 in_b", false,-1, 1,0);
        vcdp->declBus(c+1977,"ConvCombTest decoder pmu_core branchMetric_4 hammingDistance_8 distance", false,-1, 1,0);
        vcdp->declBus(c+1961,"ConvCombTest decoder pmu_core branchMetric_4 hammingDistance_8 xorResult", false,-1, 1,0);
        vcdp->declBus(c+2249,"ConvCombTest decoder pmu_core branchMetric_4 hammingDistance_9 in_a", false,-1, 1,0);
        vcdp->declBus(c+1961,"ConvCombTest decoder pmu_core branchMetric_4 hammingDistance_9 in_b", false,-1, 1,0);
        vcdp->declBus(c+1985,"ConvCombTest decoder pmu_core branchMetric_4 hammingDistance_9 distance", false,-1, 1,0);
        vcdp->declBus(c+2009,"ConvCombTest decoder pmu_core branchMetric_4 hammingDistance_9 xorResult", false,-1, 1,0);
        vcdp->declBus(c+777,"ConvCombTest decoder pmu_core addCompareSelect_4 last_state_weight_0", false,-1, 15,0);
        vcdp->declBus(c+785,"ConvCombTest decoder pmu_core addCompareSelect_4 last_state_weight_1", false,-1, 15,0);
        vcdp->declBus(c+705,"ConvCombTest decoder pmu_core addCompareSelect_4 dist_0", false,-1, 15,0);
        vcdp->declBus(c+713,"ConvCombTest decoder pmu_core addCompareSelect_4 dist_1", false,-1, 15,0);
        vcdp->declBus(c+153,"ConvCombTest decoder pmu_core addCompareSelect_4 state_weight", false,-1, 15,0);
        vcdp->declBit(c+161,"ConvCombTest decoder pmu_core addCompareSelect_4 decision", false,-1);
        vcdp->declBus(c+217,"ConvCombTest decoder pmu_core addCompareSelect_4 branch_weight_0", false,-1, 15,0);
        vcdp->declBus(c+225,"ConvCombTest decoder pmu_core addCompareSelect_4 branch_weight_1", false,-1, 15,0);
        vcdp->declBit(c+233,"ConvCombTest decoder pmu_core addCompareSelect_4 when_AddCompareSelect_l17", false,-1);
        vcdp->declBus(c+1993,"ConvCombTest decoder pmu_core branchMetric_5 dist_0", false,-1, 1,0);
        vcdp->declBus(c+2001,"ConvCombTest decoder pmu_core branchMetric_5 dist_1", false,-1, 1,0);
        vcdp->declBus(c+1993,"ConvCombTest decoder pmu_core branchMetric_5 hammingDistance_8_distance", false,-1, 1,0);
        vcdp->declBus(c+2001,"ConvCombTest decoder pmu_core branchMetric_5 hammingDistance_9_distance", false,-1, 1,0);
        vcdp->declBus(c+2257,"ConvCombTest decoder pmu_core branchMetric_5 hammingDistance_8 in_a", false,-1, 1,0);
        vcdp->declBus(c+1961,"ConvCombTest decoder pmu_core branchMetric_5 hammingDistance_8 in_b", false,-1, 1,0);
        vcdp->declBus(c+1993,"ConvCombTest decoder pmu_core branchMetric_5 hammingDistance_8 distance", false,-1, 1,0);
        vcdp->declBus(c+2017,"ConvCombTest decoder pmu_core branchMetric_5 hammingDistance_8 xorResult", false,-1, 1,0);
        vcdp->declBus(c+2265,"ConvCombTest decoder pmu_core branchMetric_5 hammingDistance_9 in_a", false,-1, 1,0);
        vcdp->declBus(c+1961,"ConvCombTest decoder pmu_core branchMetric_5 hammingDistance_9 in_b", false,-1, 1,0);
        vcdp->declBus(c+2001,"ConvCombTest decoder pmu_core branchMetric_5 hammingDistance_9 distance", false,-1, 1,0);
        vcdp->declBus(c+2025,"ConvCombTest decoder pmu_core branchMetric_5 hammingDistance_9 xorResult", false,-1, 1,0);
        vcdp->declBus(c+793,"ConvCombTest decoder pmu_core addCompareSelect_5 last_state_weight_0", false,-1, 15,0);
        vcdp->declBus(c+801,"ConvCombTest decoder pmu_core addCompareSelect_5 last_state_weight_1", false,-1, 15,0);
        vcdp->declBus(c+721,"ConvCombTest decoder pmu_core addCompareSelect_5 dist_0", false,-1, 15,0);
        vcdp->declBus(c+729,"ConvCombTest decoder pmu_core addCompareSelect_5 dist_1", false,-1, 15,0);
        vcdp->declBus(c+169,"ConvCombTest decoder pmu_core addCompareSelect_5 state_weight", false,-1, 15,0);
        vcdp->declBit(c+177,"ConvCombTest decoder pmu_core addCompareSelect_5 decision", false,-1);
        vcdp->declBus(c+241,"ConvCombTest decoder pmu_core addCompareSelect_5 branch_weight_0", false,-1, 15,0);
        vcdp->declBus(c+249,"ConvCombTest decoder pmu_core addCompareSelect_5 branch_weight_1", false,-1, 15,0);
        vcdp->declBit(c+257,"ConvCombTest decoder pmu_core addCompareSelect_5 when_AddCompareSelect_l17", false,-1);
        vcdp->declBus(c+1985,"ConvCombTest decoder pmu_core branchMetric_6 dist_0", false,-1, 1,0);
        vcdp->declBus(c+1977,"ConvCombTest decoder pmu_core branchMetric_6 dist_1", false,-1, 1,0);
        vcdp->declBus(c+1985,"ConvCombTest decoder pmu_core branchMetric_6 hammingDistance_8_distance", false,-1, 1,0);
        vcdp->declBus(c+1977,"ConvCombTest decoder pmu_core branchMetric_6 hammingDistance_9_distance", false,-1, 1,0);
        vcdp->declBus(c+2249,"ConvCombTest decoder pmu_core branchMetric_6 hammingDistance_8 in_a", false,-1, 1,0);
        vcdp->declBus(c+1961,"ConvCombTest decoder pmu_core branchMetric_6 hammingDistance_8 in_b", false,-1, 1,0);
        vcdp->declBus(c+1985,"ConvCombTest decoder pmu_core branchMetric_6 hammingDistance_8 distance", false,-1, 1,0);
        vcdp->declBus(c+2009,"ConvCombTest decoder pmu_core branchMetric_6 hammingDistance_8 xorResult", false,-1, 1,0);
        vcdp->declBus(c+2241,"ConvCombTest decoder pmu_core branchMetric_6 hammingDistance_9 in_a", false,-1, 1,0);
        vcdp->declBus(c+1961,"ConvCombTest decoder pmu_core branchMetric_6 hammingDistance_9 in_b", false,-1, 1,0);
        vcdp->declBus(c+1977,"ConvCombTest decoder pmu_core branchMetric_6 hammingDistance_9 distance", false,-1, 1,0);
        vcdp->declBus(c+1961,"ConvCombTest decoder pmu_core branchMetric_6 hammingDistance_9 xorResult", false,-1, 1,0);
        vcdp->declBus(c+777,"ConvCombTest decoder pmu_core addCompareSelect_6 last_state_weight_0", false,-1, 15,0);
        vcdp->declBus(c+785,"ConvCombTest decoder pmu_core addCompareSelect_6 last_state_weight_1", false,-1, 15,0);
        vcdp->declBus(c+737,"ConvCombTest decoder pmu_core addCompareSelect_6 dist_0", false,-1, 15,0);
        vcdp->declBus(c+745,"ConvCombTest decoder pmu_core addCompareSelect_6 dist_1", false,-1, 15,0);
        vcdp->declBus(c+185,"ConvCombTest decoder pmu_core addCompareSelect_6 state_weight", false,-1, 15,0);
        vcdp->declBit(c+193,"ConvCombTest decoder pmu_core addCompareSelect_6 decision", false,-1);
        vcdp->declBus(c+265,"ConvCombTest decoder pmu_core addCompareSelect_6 branch_weight_0", false,-1, 15,0);
        vcdp->declBus(c+273,"ConvCombTest decoder pmu_core addCompareSelect_6 branch_weight_1", false,-1, 15,0);
        vcdp->declBit(c+281,"ConvCombTest decoder pmu_core addCompareSelect_6 when_AddCompareSelect_l17", false,-1);
        vcdp->declBus(c+2001,"ConvCombTest decoder pmu_core branchMetric_7 dist_0", false,-1, 1,0);
        vcdp->declBus(c+1993,"ConvCombTest decoder pmu_core branchMetric_7 dist_1", false,-1, 1,0);
        vcdp->declBus(c+2001,"ConvCombTest decoder pmu_core branchMetric_7 hammingDistance_8_distance", false,-1, 1,0);
        vcdp->declBus(c+1993,"ConvCombTest decoder pmu_core branchMetric_7 hammingDistance_9_distance", false,-1, 1,0);
        vcdp->declBus(c+2265,"ConvCombTest decoder pmu_core branchMetric_7 hammingDistance_8 in_a", false,-1, 1,0);
        vcdp->declBus(c+1961,"ConvCombTest decoder pmu_core branchMetric_7 hammingDistance_8 in_b", false,-1, 1,0);
        vcdp->declBus(c+2001,"ConvCombTest decoder pmu_core branchMetric_7 hammingDistance_8 distance", false,-1, 1,0);
        vcdp->declBus(c+2025,"ConvCombTest decoder pmu_core branchMetric_7 hammingDistance_8 xorResult", false,-1, 1,0);
        vcdp->declBus(c+2257,"ConvCombTest decoder pmu_core branchMetric_7 hammingDistance_9 in_a", false,-1, 1,0);
        vcdp->declBus(c+1961,"ConvCombTest decoder pmu_core branchMetric_7 hammingDistance_9 in_b", false,-1, 1,0);
        vcdp->declBus(c+1993,"ConvCombTest decoder pmu_core branchMetric_7 hammingDistance_9 distance", false,-1, 1,0);
        vcdp->declBus(c+2017,"ConvCombTest decoder pmu_core branchMetric_7 hammingDistance_9 xorResult", false,-1, 1,0);
        vcdp->declBus(c+793,"ConvCombTest decoder pmu_core addCompareSelect_7 last_state_weight_0", false,-1, 15,0);
        vcdp->declBus(c+801,"ConvCombTest decoder pmu_core addCompareSelect_7 last_state_weight_1", false,-1, 15,0);
        vcdp->declBus(c+753,"ConvCombTest decoder pmu_core addCompareSelect_7 dist_0", false,-1, 15,0);
        vcdp->declBus(c+761,"ConvCombTest decoder pmu_core addCompareSelect_7 dist_1", false,-1, 15,0);
        vcdp->declBus(c+201,"ConvCombTest decoder pmu_core addCompareSelect_7 state_weight", false,-1, 15,0);
        vcdp->declBit(c+209,"ConvCombTest decoder pmu_core addCompareSelect_7 decision", false,-1);
        vcdp->declBus(c+289,"ConvCombTest decoder pmu_core addCompareSelect_7 branch_weight_0", false,-1, 15,0);
        vcdp->declBus(c+297,"ConvCombTest decoder pmu_core addCompareSelect_7 branch_weight_1", false,-1, 15,0);
        vcdp->declBit(c+305,"ConvCombTest decoder pmu_core addCompareSelect_7 when_AddCompareSelect_l17", false,-1);
        vcdp->declBus(c+777,"ConvCombTest decoder pmu_core minVal_1 data_0", false,-1, 15,0);
        vcdp->declBus(c+785,"ConvCombTest decoder pmu_core minVal_1 data_1", false,-1, 15,0);
        vcdp->declBus(c+793,"ConvCombTest decoder pmu_core minVal_1 data_2", false,-1, 15,0);
        vcdp->declBus(c+801,"ConvCombTest decoder pmu_core minVal_1 data_3", false,-1, 15,0);
        vcdp->declBus(c+769,"ConvCombTest decoder pmu_core minVal_1 min_val", false,-1, 15,0);
        vcdp->declBus(c+681,"ConvCombTest decoder pmu_core minVal_1 min_idx", false,-1, 1,0);
        vcdp->declBit(c+2217,"ConvCombTest decoder pmu_core minVal_1 clk", false,-1);
        vcdp->declBit(c+2225,"ConvCombTest decoder pmu_core minVal_1 reset", false,-1);
        vcdp->declBus(c+681,"ConvCombTest decoder tbu_core min_idx", false,-1, 1,0);
        vcdp->declBit(c+1801,"ConvCombTest decoder tbu_core s_path_valid", false,-1);
        vcdp->declBit(c+1809,"ConvCombTest decoder tbu_core s_path_payload_last", false,-1);
        vcdp->declBus(c+689,"ConvCombTest decoder tbu_core s_path_payload_fragment", false,-1, 3,0);
        vcdp->declBit(c+1817,"ConvCombTest decoder tbu_core tb_node_valid", false,-1);
        vcdp->declBit(c+1825,"ConvCombTest decoder tbu_core tb_node_payload_last", false,-1);
        vcdp->declBus(c+1689,"ConvCombTest decoder tbu_core tb_node_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+697,"ConvCombTest decoder tbu_core halt", false,-1);
        vcdp->declBit(c+1969,"ConvCombTest decoder tbu_core finished", false,-1);
        vcdp->declBit(c+2217,"ConvCombTest decoder tbu_core clk", false,-1);
        vcdp->declBit(c+2225,"ConvCombTest decoder tbu_core reset", false,-1);
        vcdp->declBus(c+1849,"ConvCombTest decoder tbu_core ram_select", false,-1, 1,0);
        vcdp->declBus(c+1857,"ConvCombTest decoder tbu_core ram_addr_write", false,-1, 4,0);
        vcdp->declBit(c+1865,"ConvCombTest decoder tbu_core pkg_tail", false,-1);
        vcdp->declBit(c+1969,"ConvCombTest decoder tbu_core tb_finish", false,-1);
        vcdp->declBit(c+1873,"ConvCombTest decoder tbu_core when_Traceback_l48", false,-1);
        vcdp->declBus(c+2033,"ConvCombTest decoder tbu_core decoded_ram_select", false,-1, 1,0);
        vcdp->declBus(c+2089,"ConvCombTest decoder tbu_core ram_addr_read", false,-1, 4,0);
        vcdp->declBit(c+697,"ConvCombTest decoder tbu_core pipe_halt", false,-1);
        vcdp->declBus(c+873,"ConvCombTest decoder tbu_core ram_0_value", false,-1, 3,0);
        vcdp->declBus(c+881,"ConvCombTest decoder tbu_core ram_1_value", false,-1, 3,0);
        vcdp->declBus(c+881,"ConvCombTest decoder tbu_core ram_2_value", false,-1, 3,0);
        vcdp->declBus(c+889,"ConvCombTest decoder tbu_core min_cursor", false,-1, 1,0);
        vcdp->declBus(c+561,"ConvCombTest decoder tbu_core cursor", false,-1, 2,0);
        vcdp->declBus(c+569,"ConvCombTest decoder tbu_core min_cursor_next", false,-1, 1,0);
        vcdp->declBus(c+577,"ConvCombTest decoder tbu_core tb_node_data_next", false,-1, 0,0);
        vcdp->declBus(c+897,"ConvCombTest decoder tbu_core tb_node_data", false,-1, 0,0);
        vcdp->declBit(c+1817,"ConvCombTest decoder tbu_core tb_node_valid_1", false,-1);
        vcdp->declBit(c+1825,"ConvCombTest decoder tbu_core tb_node_last", false,-1);
        vcdp->declBit(c+2097,"ConvCombTest decoder tbu_core tail_repeat", false,-1);
        vcdp->declBit(c+1881,"ConvCombTest decoder tbu_core goto_tail", false,-1);
        vcdp->declBus(c+2041,"ConvCombTest decoder tbu_core halt_cnt", false,-1, 1,0);
        vcdp->declBus(c+2105,"ConvCombTest decoder tbu_core traceback_state", false,-1, 2,0);
        vcdp->declBit(c+593,"ConvCombTest decoder tbu_core when_Traceback_l104", false,-1);
        vcdp->declBit(c+2049,"ConvCombTest decoder tbu_core when_Traceback_l113", false,-1);
        vcdp->declBit(c+2113,"ConvCombTest decoder tbu_core when_Traceback_l126", false,-1);
        vcdp->declBit(c+2113,"ConvCombTest decoder tbu_core when_Traceback_l144", false,-1);
        vcdp->declBit(c+2113,"ConvCombTest decoder tbu_core when_Traceback_l153", false,-1);
        vcdp->declArray(c+601,"ConvCombTest decoder tbu_core traceback_state_string", false,-1, 87,0);
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+1+i*1,"ConvCombTest decoder tbu_core states_shift_rom", true,(i+0), 1,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+65+i*1,"ConvCombTest decoder tbu_core in_data_rom", true,(i+0), 0,0);}}
        {int i; for (i=0; i<32; i++) {
                vcdp->declBus(c+905+i*1,"ConvCombTest decoder tbu_core survival_path_ram_0", true,(i+0), 3,0);}}
        {int i; for (i=0; i<32; i++) {
                vcdp->declBus(c+1161+i*1,"ConvCombTest decoder tbu_core survival_path_ram_1", true,(i+0), 3,0);}}
        {int i; for (i=0; i<32; i++) {
                vcdp->declBus(c+1417+i*1,"ConvCombTest decoder tbu_core survival_path_ram_2", true,(i+0), 3,0);}}
        vcdp->declBit(c+1817,"ConvCombTest decoder lifo_core inverted_order_valid", false,-1);
        vcdp->declBit(c+1825,"ConvCombTest decoder lifo_core inverted_order_payload_last", false,-1);
        vcdp->declBus(c+1689,"ConvCombTest decoder lifo_core inverted_order_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+1713,"ConvCombTest decoder lifo_core decoded_data_valid", false,-1);
        vcdp->declBit(c+1721,"ConvCombTest decoder lifo_core decoded_data_payload_last", false,-1);
        vcdp->declBus(c+657,"ConvCombTest decoder lifo_core decoded_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+2217,"ConvCombTest decoder lifo_core clk", false,-1);
        vcdp->declBit(c+2225,"ConvCombTest decoder lifo_core reset", false,-1);
        vcdp->declBit(c+449,"ConvCombTest decoder lifo_core inverted_order_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+457,"ConvCombTest decoder lifo_core inverted_order_fifo_io_pop_valid", false,-1);
        vcdp->declBit(c+2057,"ConvCombTest decoder lifo_core inverted_order_fifo_io_pop_payload_last", false,-1);
        vcdp->declBus(c+2065,"ConvCombTest decoder lifo_core inverted_order_fifo_io_pop_payload_fragment", false,-1, 1,0);
        vcdp->declBus(c+465,"ConvCombTest decoder lifo_core inverted_order_fifo_io_occupancy", false,-1, 6,0);
        vcdp->declBus(c+473,"ConvCombTest decoder lifo_core inverted_order_fifo_io_availability", false,-1, 6,0);
        vcdp->declQuad(c+1673,"ConvCombTest decoder lifo_core decoded_lifo", false,-1, 63,0);
        vcdp->declQuad(c+2073,"ConvCombTest decoder lifo_core decoded_last_lifo", false,-1, 63,0);
        vcdp->declBus(c+2121,"ConvCombTest decoder lifo_core lifo_head_cursor", false,-1, 5,0);
        vcdp->declBit(c+1889,"ConvCombTest decoder lifo_core fifo_pop_ready", false,-1);
        vcdp->declBit(c+1713,"ConvCombTest decoder lifo_core decoded_data_valid_1", false,-1);
        vcdp->declBit(c+1897,"ConvCombTest decoder lifo_core data_last", false,-1);
        vcdp->declBit(c+1721,"ConvCombTest decoder lifo_core decoded_data_last", false,-1);
        vcdp->declBus(c+657,"ConvCombTest decoder lifo_core decoded_data", false,-1, 0,0);
        vcdp->declBus(c+2129,"ConvCombTest decoder lifo_core reorder_state", false,-1, 0,0);
        vcdp->declBit(c+625,"ConvCombTest decoder lifo_core inverted_order_fifo_io_pop_fire", false,-1);
        vcdp->declBit(c+2137,"ConvCombTest decoder lifo_core when_ReorderLifo_l54", false,-1);
        vcdp->declBus(c+2145,"ConvCombTest decoder lifo_core reorder_state_string", false,-1, 31,0);
        vcdp->declBit(c+1817,"ConvCombTest decoder lifo_core inverted_order_fifo io_push_valid", false,-1);
        vcdp->declBit(c+449,"ConvCombTest decoder lifo_core inverted_order_fifo io_push_ready", false,-1);
        vcdp->declBit(c+1825,"ConvCombTest decoder lifo_core inverted_order_fifo io_push_payload_last", false,-1);
        vcdp->declBus(c+1689,"ConvCombTest decoder lifo_core inverted_order_fifo io_push_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+457,"ConvCombTest decoder lifo_core inverted_order_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+1889,"ConvCombTest decoder lifo_core inverted_order_fifo io_pop_ready", false,-1);
        vcdp->declBit(c+2057,"ConvCombTest decoder lifo_core inverted_order_fifo io_pop_payload_last", false,-1);
        vcdp->declBus(c+2065,"ConvCombTest decoder lifo_core inverted_order_fifo io_pop_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+2233,"ConvCombTest decoder lifo_core inverted_order_fifo io_flush", false,-1);
        vcdp->declBus(c+465,"ConvCombTest decoder lifo_core inverted_order_fifo io_occupancy", false,-1, 6,0);
        vcdp->declBus(c+473,"ConvCombTest decoder lifo_core inverted_order_fifo io_availability", false,-1, 6,0);
        vcdp->declBit(c+2217,"ConvCombTest decoder lifo_core inverted_order_fifo clk", false,-1);
        vcdp->declBit(c+2225,"ConvCombTest decoder lifo_core inverted_order_fifo reset", false,-1);
        vcdp->declBit(c+481,"ConvCombTest decoder lifo_core inverted_order_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+2233,"ConvCombTest decoder lifo_core inverted_order_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+489,"ConvCombTest decoder lifo_core inverted_order_fifo logic_pushPtr_valueNext", false,-1, 5,0);
        vcdp->declBus(c+1905,"ConvCombTest decoder lifo_core inverted_order_fifo logic_pushPtr_value", false,-1, 5,0);
        vcdp->declBit(c+1913,"ConvCombTest decoder lifo_core inverted_order_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+497,"ConvCombTest decoder lifo_core inverted_order_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+633,"ConvCombTest decoder lifo_core inverted_order_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+2233,"ConvCombTest decoder lifo_core inverted_order_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+641,"ConvCombTest decoder lifo_core inverted_order_fifo logic_popPtr_valueNext", false,-1, 5,0);
        vcdp->declBus(c+1921,"ConvCombTest decoder lifo_core inverted_order_fifo logic_popPtr_value", false,-1, 5,0);
        vcdp->declBit(c+1929,"ConvCombTest decoder lifo_core inverted_order_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+545,"ConvCombTest decoder lifo_core inverted_order_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+505,"ConvCombTest decoder lifo_core inverted_order_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+1937,"ConvCombTest decoder lifo_core inverted_order_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+513,"ConvCombTest decoder lifo_core inverted_order_fifo logic_pushing", false,-1);
        vcdp->declBit(c+625,"ConvCombTest decoder lifo_core inverted_order_fifo logic_popping", false,-1);
        vcdp->declBit(c+521,"ConvCombTest decoder lifo_core inverted_order_fifo logic_empty", false,-1);
        vcdp->declBit(c+529,"ConvCombTest decoder lifo_core inverted_order_fifo logic_full", false,-1);
        vcdp->declBit(c+553,"ConvCombTest decoder lifo_core inverted_order_fifo when_Stream_l933", false,-1);
        vcdp->declBus(c+1945,"ConvCombTest decoder lifo_core inverted_order_fifo logic_ptrDif", false,-1, 5,0);
    }
}

void VConvCombTest::traceFullThis__1(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom[0]),2);
        vcdp->fullBus(c+2,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom[1]),2);
        vcdp->fullBus(c+3,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom[2]),2);
        vcdp->fullBus(c+4,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom[3]),2);
        vcdp->fullBus(c+5,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom[4]),2);
        vcdp->fullBus(c+6,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom[5]),2);
        vcdp->fullBus(c+7,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom[6]),2);
        vcdp->fullBus(c+8,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom[7]),2);
        vcdp->fullBit(c+65,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom[0]));
        vcdp->fullBit(c+66,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom[1]));
        vcdp->fullBit(c+67,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom[2]));
        vcdp->fullBit(c+68,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom[3]));
        vcdp->fullBit(c+69,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom[4]));
        vcdp->fullBit(c+70,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom[5]));
        vcdp->fullBit(c+71,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom[6]));
        vcdp->fullBit(c+72,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom[7]));
        vcdp->fullBus(c+129,((7U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                    >> 1U))),3);
        vcdp->fullBit(c+137,((1U & ((((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                      >> 1U) ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                >> 2U)) 
                                    ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                       >> 3U)))));
        vcdp->fullBit(c+145,((1U & ((((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                      >> 1U) ^ (2U 
                                                & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                   >> 2U))) 
                                    ^ (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                             >> 3U))))));
        vcdp->fullBus(c+153,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17)
                               ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0)
                               : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1))),16);
        vcdp->fullBit(c+161,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17)))));
        vcdp->fullBus(c+169,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17)
                               ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0)
                               : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1))),16);
        vcdp->fullBit(c+177,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17)))));
        vcdp->fullBus(c+185,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17)
                               ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0)
                               : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1))),16);
        vcdp->fullBit(c+193,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17)))));
        vcdp->fullBus(c+201,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17)
                               ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0)
                               : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1))),16);
        vcdp->fullBit(c+209,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17)))));
        vcdp->fullBus(c+217,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0),16);
        vcdp->fullBus(c+225,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1),16);
        vcdp->fullBit(c+233,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17));
        vcdp->fullBus(c+241,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0),16);
        vcdp->fullBus(c+249,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1),16);
        vcdp->fullBit(c+257,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17));
        vcdp->fullBus(c+265,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0),16);
        vcdp->fullBus(c+273,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1),16);
        vcdp->fullBit(c+281,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17));
        vcdp->fullBus(c+289,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0),16);
        vcdp->fullBus(c+297,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1),16);
        vcdp->fullBit(c+305,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17));
        vcdp->fullBit(c+313,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+321,(vlTOPp->ConvCombTest__DOT__encoded_fifo_io_pop_valid));
        vcdp->fullBus(c+329,(((((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy) 
                                & (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch)) 
                               << 0xaU) | (0x3ffU & 
                                           ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value) 
                                            - (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value))))),11);
        vcdp->fullBus(c+337,(((((~ (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy)) 
                                & (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch)) 
                               << 0xaU) | (0x3ffU & 
                                           ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value) 
                                            - (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value))))),11);
        vcdp->fullBit(c+345,(vlTOPp->ConvCombTest__DOT__decoder_raw_data_ready));
        vcdp->fullBit(c+353,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+361,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_valueNext),10);
        vcdp->fullBit(c+369,(((0x3ffU == (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+377,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBit(c+385,(((0x3ffU == (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+393,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+401,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushing));
        vcdp->fullBit(c+409,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popping));
        vcdp->fullBit(c+417,(((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+425,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_full));
        vcdp->fullBit(c+433,(((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popping))));
        vcdp->fullBit(c+441,(vlTOPp->ConvCombTest__DOT__decoder__DOT__raw_data_fire));
        vcdp->fullBit(c+449,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+457,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid));
        vcdp->fullBus(c+465,(((((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy) 
                                & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch)) 
                               << 6U) | (0x3fU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
                                                  - (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value))))),7);
        vcdp->fullBus(c+473,(((((~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy)) 
                                & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch)) 
                               << 6U) | (0x3fU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value) 
                                                  - (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value))))),7);
        vcdp->fullBit(c+481,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+489,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_valueNext),6);
        vcdp->fullBit(c+497,(((0x3fU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+505,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+513,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing));
        vcdp->fullBit(c+521,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+529,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full));
        vcdp->fullBit(c+537,(((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__raw_data_fire))));
        vcdp->fullBit(c+545,(((0x3fU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+553,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping))));
        vcdp->fullBus(c+561,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor),3);
        vcdp->fullBus(c+569,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom
                             [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor]),2);
        vcdp->fullBit(c+577,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom
                             [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor]));
        vcdp->fullBus(c+585,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_valueNext),10);
        vcdp->fullBit(c+593,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l104));
        vcdp->fullArray(c+601,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string),88);
        vcdp->fullBit(c+625,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping));
        vcdp->fullBit(c+633,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+641,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_valueNext),6);
        vcdp->fullBus(c+649,(vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data),2);
        vcdp->fullBit(c+657,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data));
        vcdp->fullBit(c+665,(vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_payload));
        vcdp->fullBus(c+673,(vlTOPp->ConvCombTest__DOT__encoder__DOT__r_enc_buf),3);
        vcdp->fullBus(c+681,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_2),2);
        vcdp->fullBus(c+689,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path),4);
        vcdp->fullBit(c+697,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pipe_halt));
        vcdp->fullBus(c+705,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_0),16);
        vcdp->fullBus(c+713,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_1),16);
        vcdp->fullBus(c+721,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_2),16);
        vcdp->fullBus(c+729,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_3),16);
        vcdp->fullBus(c+737,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_4),16);
        vcdp->fullBus(c+745,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_5),16);
        vcdp->fullBus(c+753,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_6),16);
        vcdp->fullBus(c+761,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_7),16);
        vcdp->fullBus(c+769,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_2),16);
        vcdp->fullBus(c+777,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0),16);
        vcdp->fullBus(c+785,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1),16);
        vcdp->fullBus(c+793,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2),16);
        vcdp->fullBus(c+801,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3),16);
        vcdp->fullBus(c+809,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_0),2);
        vcdp->fullBus(c+817,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_1),2);
        vcdp->fullBus(c+825,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_2),2);
        vcdp->fullBus(c+833,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_3),2);
        vcdp->fullBus(c+841,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_4),2);
        vcdp->fullBus(c+849,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_5),2);
        vcdp->fullBus(c+857,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_6),2);
        vcdp->fullBus(c+865,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_7),2);
        vcdp->fullBus(c+873,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_0_port1),4);
        vcdp->fullBus(c+881,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port1),4);
        vcdp->fullBus(c+889,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor),2);
        vcdp->fullBit(c+897,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_data));
        vcdp->fullBus(c+905,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[0]),4);
        vcdp->fullBus(c+906,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[1]),4);
        vcdp->fullBus(c+907,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[2]),4);
        vcdp->fullBus(c+908,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[3]),4);
        vcdp->fullBus(c+909,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[4]),4);
        vcdp->fullBus(c+910,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[5]),4);
        vcdp->fullBus(c+911,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[6]),4);
        vcdp->fullBus(c+912,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[7]),4);
        vcdp->fullBus(c+913,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[8]),4);
        vcdp->fullBus(c+914,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[9]),4);
        vcdp->fullBus(c+915,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[10]),4);
        vcdp->fullBus(c+916,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[11]),4);
        vcdp->fullBus(c+917,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[12]),4);
        vcdp->fullBus(c+918,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[13]),4);
        vcdp->fullBus(c+919,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[14]),4);
        vcdp->fullBus(c+920,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[15]),4);
        vcdp->fullBus(c+921,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[16]),4);
        vcdp->fullBus(c+922,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[17]),4);
        vcdp->fullBus(c+923,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[18]),4);
        vcdp->fullBus(c+924,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[19]),4);
        vcdp->fullBus(c+925,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[20]),4);
        vcdp->fullBus(c+926,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[21]),4);
        vcdp->fullBus(c+927,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[22]),4);
        vcdp->fullBus(c+928,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[23]),4);
        vcdp->fullBus(c+929,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[24]),4);
        vcdp->fullBus(c+930,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[25]),4);
        vcdp->fullBus(c+931,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[26]),4);
        vcdp->fullBus(c+932,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[27]),4);
        vcdp->fullBus(c+933,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[28]),4);
        vcdp->fullBus(c+934,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[29]),4);
        vcdp->fullBus(c+935,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[30]),4);
        vcdp->fullBus(c+936,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[31]),4);
        vcdp->fullBus(c+1161,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[0]),4);
        vcdp->fullBus(c+1162,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[1]),4);
        vcdp->fullBus(c+1163,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[2]),4);
        vcdp->fullBus(c+1164,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[3]),4);
        vcdp->fullBus(c+1165,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[4]),4);
        vcdp->fullBus(c+1166,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[5]),4);
        vcdp->fullBus(c+1167,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[6]),4);
        vcdp->fullBus(c+1168,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[7]),4);
        vcdp->fullBus(c+1169,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[8]),4);
        vcdp->fullBus(c+1170,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[9]),4);
        vcdp->fullBus(c+1171,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[10]),4);
        vcdp->fullBus(c+1172,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[11]),4);
        vcdp->fullBus(c+1173,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[12]),4);
        vcdp->fullBus(c+1174,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[13]),4);
        vcdp->fullBus(c+1175,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[14]),4);
        vcdp->fullBus(c+1176,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[15]),4);
        vcdp->fullBus(c+1177,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[16]),4);
        vcdp->fullBus(c+1178,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[17]),4);
        vcdp->fullBus(c+1179,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[18]),4);
        vcdp->fullBus(c+1180,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[19]),4);
        vcdp->fullBus(c+1181,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[20]),4);
        vcdp->fullBus(c+1182,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[21]),4);
        vcdp->fullBus(c+1183,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[22]),4);
        vcdp->fullBus(c+1184,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[23]),4);
        vcdp->fullBus(c+1185,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[24]),4);
        vcdp->fullBus(c+1186,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[25]),4);
        vcdp->fullBus(c+1187,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[26]),4);
        vcdp->fullBus(c+1188,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[27]),4);
        vcdp->fullBus(c+1189,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[28]),4);
        vcdp->fullBus(c+1190,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[29]),4);
        vcdp->fullBus(c+1191,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[30]),4);
        vcdp->fullBus(c+1192,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[31]),4);
        vcdp->fullBus(c+1417,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[0]),4);
        vcdp->fullBus(c+1418,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[1]),4);
        vcdp->fullBus(c+1419,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[2]),4);
        vcdp->fullBus(c+1420,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[3]),4);
        vcdp->fullBus(c+1421,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[4]),4);
        vcdp->fullBus(c+1422,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[5]),4);
        vcdp->fullBus(c+1423,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[6]),4);
        vcdp->fullBus(c+1424,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[7]),4);
        vcdp->fullBus(c+1425,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[8]),4);
        vcdp->fullBus(c+1426,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[9]),4);
        vcdp->fullBus(c+1427,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[10]),4);
        vcdp->fullBus(c+1428,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[11]),4);
        vcdp->fullBus(c+1429,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[12]),4);
        vcdp->fullBus(c+1430,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[13]),4);
        vcdp->fullBus(c+1431,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[14]),4);
        vcdp->fullBus(c+1432,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[15]),4);
        vcdp->fullBus(c+1433,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[16]),4);
        vcdp->fullBus(c+1434,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[17]),4);
        vcdp->fullBus(c+1435,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[18]),4);
        vcdp->fullBus(c+1436,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[19]),4);
        vcdp->fullBus(c+1437,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[20]),4);
        vcdp->fullBus(c+1438,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[21]),4);
        vcdp->fullBus(c+1439,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[22]),4);
        vcdp->fullBus(c+1440,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[23]),4);
        vcdp->fullBus(c+1441,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[24]),4);
        vcdp->fullBus(c+1442,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[25]),4);
        vcdp->fullBus(c+1443,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[26]),4);
        vcdp->fullBus(c+1444,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[27]),4);
        vcdp->fullBus(c+1445,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[28]),4);
        vcdp->fullBus(c+1446,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[29]),4);
        vcdp->fullBus(c+1447,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[30]),4);
        vcdp->fullBus(c+1448,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[31]),4);
        vcdp->fullQuad(c+1673,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo),64);
        vcdp->fullBus(c+1689,((((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) 
                                << 1U) | (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_data))),2);
        vcdp->fullBit(c+1697,(vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data_valid_1));
        vcdp->fullBit(c+1705,(vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_last_regNext));
        vcdp->fullBit(c+1713,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data_valid_1));
        vcdp->fullBit(c+1721,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data_last));
        vcdp->fullBit(c+1729,(vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_valid_1));
        vcdp->fullBit(c+1737,(vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_last));
        vcdp->fullBus(c+1745,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value),10);
        vcdp->fullBit(c+1753,((0x3ffU == (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+1761,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value),10);
        vcdp->fullBit(c+1769,((0x3ffU == (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+1777,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+1785,((0x3ffU & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value) 
                                         - (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value)))),10);
        vcdp->fullBit(c+1793,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_ready_1));
        vcdp->fullBit(c+1801,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_valid));
        vcdp->fullBit(c+1809,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_last));
        vcdp->fullBit(c+1817,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_valid_1));
        vcdp->fullBit(c+1825,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_last));
        vcdp->fullBit(c+1833,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next));
        vcdp->fullBit(c+1841,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_last_next));
        vcdp->fullBus(c+1849,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select),2);
        vcdp->fullBus(c+1857,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write),5);
        vcdp->fullBit(c+1865,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pkg_tail));
        vcdp->fullBit(c+1873,((0x1fU <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write))));
        vcdp->fullBit(c+1881,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail));
        vcdp->fullBit(c+1889,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__fifo_pop_ready));
        vcdp->fullBit(c+1897,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__data_last));
        vcdp->fullBus(c+1905,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value),6);
        vcdp->fullBit(c+1913,((0x3fU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+1921,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value),6);
        vcdp->fullBit(c+1929,((0x3fU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+1937,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+1945,((0x3fU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
                                        - (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value)))),6);
        vcdp->fullBit(c+1953,((1U & (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0))));
        vcdp->fullBus(c+1961,((3U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                     >> 1U))),2);
        vcdp->fullBit(c+1969,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish));
        vcdp->fullBus(c+1977,((3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 2U)) 
                                     + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                              >> 1U))))),2);
        vcdp->fullBus(c+1985,((3U & ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U))) 
                                     + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 1U)))))),2);
        vcdp->fullBus(c+1993,((3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                     + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                              >> 1U))))),2);
        vcdp->fullBus(c+2001,((3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 2U)) 
                                     + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 1U)))))),2);
        vcdp->fullBus(c+2009,((3U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                        >> 1U)))),2);
        vcdp->fullBus(c+2017,((3U & (2U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                           >> 1U)))),2);
        vcdp->fullBus(c+2025,((3U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                           >> 1U)))),2);
    }
}

void VConvCombTest::traceFullThis__13(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+2033,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select),2);
        vcdp->fullBus(c+2041,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt),2);
        vcdp->fullBit(c+2049,((3U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt))));
        vcdp->fullBit(c+2057,((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0))));
        vcdp->fullBus(c+2065,((3U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                                     >> 1U))),2);
        vcdp->fullQuad(c+2073,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_last_lifo),64);
        vcdp->fullBus(c+2089,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read),5);
        vcdp->fullBit(c+2097,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat));
        vcdp->fullBus(c+2105,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state),3);
        vcdp->fullBit(c+2113,((0x1fU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))));
        vcdp->fullBus(c+2121,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor),6);
        vcdp->fullBit(c+2129,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state));
        vcdp->fullBit(c+2137,((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor))));
        vcdp->fullBus(c+2145,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                                ? ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                                    ? 0x504f5020U : 0x3f3f3f3fU)
                                : 0x50555348U)),32);
        vcdp->fullBit(c+2153,(vlTOPp->tail_bits_valid));
        vcdp->fullBus(c+2161,(vlTOPp->tail_bits_payload),3);
        vcdp->fullBit(c+2169,(vlTOPp->raw_data_valid));
        vcdp->fullBit(c+2177,(vlTOPp->raw_data_payload_last));
        vcdp->fullBit(c+2185,(vlTOPp->raw_data_payload_fragment));
        vcdp->fullBit(c+2193,(vlTOPp->decoded_data_valid));
        vcdp->fullBit(c+2201,(vlTOPp->decoded_data_payload_last));
        vcdp->fullBit(c+2209,(vlTOPp->decoded_data_payload_fragment));
        vcdp->fullBit(c+2217,(vlTOPp->clk));
        vcdp->fullBit(c+2225,(vlTOPp->reset));
        vcdp->fullBit(c+2233,(0U));
        vcdp->fullBus(c+2241,(0U),2);
        vcdp->fullBus(c+2249,(3U),2);
        vcdp->fullBus(c+2257,(2U),2);
        vcdp->fullBus(c+2265,(1U),2);
    }
}
