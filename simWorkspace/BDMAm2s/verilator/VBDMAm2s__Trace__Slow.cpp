// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBDMAm2s__Syms.h"


//======================

void VBDMAm2s::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VBDMAm2s::traceInit, &VBDMAm2s::traceFull, &VBDMAm2s::traceChg, this);
}
void VBDMAm2s::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VBDMAm2s* t = (VBDMAm2s*)userthis;
    VBDMAm2s__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VBDMAm2s::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VBDMAm2s* t = (VBDMAm2s*)userthis;
    VBDMAm2s__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VBDMAm2s::traceInitThis(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VBDMAm2s::traceFullThis(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
        vlTOPp->traceFullThis__9(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VBDMAm2s::traceInitThis__1(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+1889,"dma_ar_valid", false,-1);
        vcdp->declBit(c+1897,"dma_ar_ready", false,-1);
        vcdp->declBus(c+1905,"dma_ar_payload_addr", false,-1, 31,0);
        vcdp->declBus(c+1913,"dma_ar_payload_id", false,-1, 3,0);
        vcdp->declBus(c+1921,"dma_ar_payload_len", false,-1, 7,0);
        vcdp->declBus(c+1929,"dma_ar_payload_size", false,-1, 2,0);
        vcdp->declBus(c+1937,"dma_ar_payload_burst", false,-1, 1,0);
        vcdp->declBit(c+1945,"dma_r_valid", false,-1);
        vcdp->declBit(c+1953,"dma_r_ready", false,-1);
        vcdp->declBus(c+1961,"dma_r_payload_data", false,-1, 31,0);
        vcdp->declBus(c+1969,"dma_r_payload_id", false,-1, 3,0);
        vcdp->declBus(c+1977,"dma_r_payload_resp", false,-1, 1,0);
        vcdp->declBit(c+1985,"dma_r_payload_last", false,-1);
        vcdp->declBit(c+1993,"m2s_data_stream_valid", false,-1);
        vcdp->declBit(c+2001,"m2s_data_stream_ready", false,-1);
        vcdp->declBus(c+2009,"m2s_data_stream_payload_data", false,-1, 31,0);
        vcdp->declBus(c+2017,"m2s_data_stream_payload_id", false,-1, 3,0);
        vcdp->declBus(c+2025,"m2s_data_stream_payload_strb", false,-1, 3,0);
        vcdp->declBus(c+2033,"m2s_data_stream_payload_keep_", false,-1, 3,0);
        vcdp->declBit(c+2041,"m2s_data_stream_payload_last", false,-1);
        vcdp->declBus(c+2049,"m2s_state", false,-1, 0,0);
        vcdp->declBit(c+2057,"m2s_cch_valid", false,-1);
        vcdp->declBit(c+2065,"m2s_cch_ready", false,-1);
        vcdp->declBus(c+2073,"m2s_cch_payload_desc_start_addr", false,-1, 31,0);
        vcdp->declBus(c+2081,"m2s_cch_payload_desc_total_bytes", false,-1, 29,0);
        vcdp->declBus(c+2089,"m2s_cch_payload_desc_burst", false,-1, 1,0);
        vcdp->declBus(c+2097,"m2s_cch_payload_desc_id", false,-1, 3,0);
        vcdp->declBit(c+2105,"m2s_cch_payload_desc_reset", false,-1);
        vcdp->declBit(c+2113,"m2s_intr", false,-1);
        vcdp->declBit(c+2121,"clk", false,-1);
        vcdp->declBit(c+2129,"reset", false,-1);
        vcdp->declBit(c+1889,"BDMAm2s dma_ar_valid", false,-1);
        vcdp->declBit(c+1897,"BDMAm2s dma_ar_ready", false,-1);
        vcdp->declBus(c+1905,"BDMAm2s dma_ar_payload_addr", false,-1, 31,0);
        vcdp->declBus(c+1913,"BDMAm2s dma_ar_payload_id", false,-1, 3,0);
        vcdp->declBus(c+1921,"BDMAm2s dma_ar_payload_len", false,-1, 7,0);
        vcdp->declBus(c+1929,"BDMAm2s dma_ar_payload_size", false,-1, 2,0);
        vcdp->declBus(c+1937,"BDMAm2s dma_ar_payload_burst", false,-1, 1,0);
        vcdp->declBit(c+1945,"BDMAm2s dma_r_valid", false,-1);
        vcdp->declBit(c+1953,"BDMAm2s dma_r_ready", false,-1);
        vcdp->declBus(c+1961,"BDMAm2s dma_r_payload_data", false,-1, 31,0);
        vcdp->declBus(c+1969,"BDMAm2s dma_r_payload_id", false,-1, 3,0);
        vcdp->declBus(c+1977,"BDMAm2s dma_r_payload_resp", false,-1, 1,0);
        vcdp->declBit(c+1985,"BDMAm2s dma_r_payload_last", false,-1);
        vcdp->declBit(c+1993,"BDMAm2s m2s_data_stream_valid", false,-1);
        vcdp->declBit(c+2001,"BDMAm2s m2s_data_stream_ready", false,-1);
        vcdp->declBus(c+2009,"BDMAm2s m2s_data_stream_payload_data", false,-1, 31,0);
        vcdp->declBus(c+2017,"BDMAm2s m2s_data_stream_payload_id", false,-1, 3,0);
        vcdp->declBus(c+2025,"BDMAm2s m2s_data_stream_payload_strb", false,-1, 3,0);
        vcdp->declBus(c+2033,"BDMAm2s m2s_data_stream_payload_keep_", false,-1, 3,0);
        vcdp->declBit(c+2041,"BDMAm2s m2s_data_stream_payload_last", false,-1);
        vcdp->declBus(c+2049,"BDMAm2s m2s_state", false,-1, 0,0);
        vcdp->declBit(c+2057,"BDMAm2s m2s_cch_valid", false,-1);
        vcdp->declBit(c+2065,"BDMAm2s m2s_cch_ready", false,-1);
        vcdp->declBus(c+2073,"BDMAm2s m2s_cch_payload_desc_start_addr", false,-1, 31,0);
        vcdp->declBus(c+2081,"BDMAm2s m2s_cch_payload_desc_total_bytes", false,-1, 29,0);
        vcdp->declBus(c+2089,"BDMAm2s m2s_cch_payload_desc_burst", false,-1, 1,0);
        vcdp->declBus(c+2097,"BDMAm2s m2s_cch_payload_desc_id", false,-1, 3,0);
        vcdp->declBit(c+2105,"BDMAm2s m2s_cch_payload_desc_reset", false,-1);
        vcdp->declBit(c+2113,"BDMAm2s m2s_intr", false,-1);
        vcdp->declBit(c+2121,"BDMAm2s clk", false,-1);
        vcdp->declBit(c+2129,"BDMAm2s reset", false,-1);
        vcdp->declBit(c+2137,"BDMAm2s m2s_ar_fifo_io_pop_ready", false,-1);
        vcdp->declBus(c+577,"BDMAm2s low_addr_fifo_io_push_payload", false,-1, 1,0);
        vcdp->declBus(c+585,"BDMAm2s low_bytes_fifo_io_push_payload", false,-1, 1,0);
        vcdp->declBit(c+2145,"BDMAm2s m2s_data_fifo_io_push_valid", false,-1);
        vcdp->declBus(c+993,"BDMAm2s m2s_data_fifo_io_push_payload_strb", false,-1, 3,0);
        vcdp->declBus(c+1001,"BDMAm2s m2s_data_fifo_io_push_payload_keep_", false,-1, 3,0);
        vcdp->declBit(c+353,"BDMAm2s m2s_data_fifo_io_push_payload_last", false,-1);
        vcdp->declBit(c+1,"BDMAm2s m2s_ar_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+9,"BDMAm2s m2s_ar_fifo_io_pop_valid", false,-1);
        vcdp->declBus(c+593,"BDMAm2s m2s_ar_fifo_io_pop_payload_addr", false,-1, 31,0);
        vcdp->declBus(c+601,"BDMAm2s m2s_ar_fifo_io_pop_payload_id", false,-1, 3,0);
        vcdp->declBus(c+609,"BDMAm2s m2s_ar_fifo_io_pop_payload_len", false,-1, 7,0);
        vcdp->declBus(c+617,"BDMAm2s m2s_ar_fifo_io_pop_payload_size", false,-1, 2,0);
        vcdp->declBus(c+625,"BDMAm2s m2s_ar_fifo_io_pop_payload_burst", false,-1, 1,0);
        vcdp->declBus(c+17,"BDMAm2s m2s_ar_fifo_io_occupancy", false,-1, 3,0);
        vcdp->declBus(c+25,"BDMAm2s m2s_ar_fifo_io_availability", false,-1, 3,0);
        vcdp->declBit(c+33,"BDMAm2s low_addr_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+41,"BDMAm2s low_addr_fifo_io_pop_valid", false,-1);
        vcdp->declBus(c+633,"BDMAm2s low_addr_fifo_io_pop_payload", false,-1, 1,0);
        vcdp->declBus(c+49,"BDMAm2s low_addr_fifo_io_occupancy", false,-1, 3,0);
        vcdp->declBus(c+57,"BDMAm2s low_addr_fifo_io_availability", false,-1, 3,0);
        vcdp->declBit(c+65,"BDMAm2s low_bytes_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+73,"BDMAm2s low_bytes_fifo_io_pop_valid", false,-1);
        vcdp->declBus(c+641,"BDMAm2s low_bytes_fifo_io_pop_payload", false,-1, 1,0);
        vcdp->declBus(c+81,"BDMAm2s low_bytes_fifo_io_occupancy", false,-1, 3,0);
        vcdp->declBus(c+89,"BDMAm2s low_bytes_fifo_io_availability", false,-1, 3,0);
        vcdp->declBit(c+97,"BDMAm2s m2s_data_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+105,"BDMAm2s m2s_data_fifo_io_pop_valid", false,-1);
        vcdp->declBus(c+1305,"BDMAm2s m2s_data_fifo_io_pop_payload_data", false,-1, 31,0);
        vcdp->declBus(c+1313,"BDMAm2s m2s_data_fifo_io_pop_payload_id", false,-1, 3,0);
        vcdp->declBus(c+1321,"BDMAm2s m2s_data_fifo_io_pop_payload_strb", false,-1, 3,0);
        vcdp->declBus(c+1329,"BDMAm2s m2s_data_fifo_io_pop_payload_keep_", false,-1, 3,0);
        vcdp->declBit(c+1337,"BDMAm2s m2s_data_fifo_io_pop_payload_last", false,-1);
        vcdp->declBus(c+113,"BDMAm2s m2s_data_fifo_io_occupancy", false,-1, 5,0);
        vcdp->declBus(c+121,"BDMAm2s m2s_data_fifo_io_availability", false,-1, 5,0);
        vcdp->declBus(c+1025,"BDMAm2s m2s_cch_state", false,-1, 1,0);
        vcdp->declBus(c+1033,"BDMAm2s m2s_r_state", false,-1, 0,0);
        vcdp->declBit(c+1041,"BDMAm2s m2s_ar_valve", false,-1);
        vcdp->declBit(c+1049,"BDMAm2s cch_ready", false,-1);
        vcdp->declBus(c+1345,"BDMAm2s cch_total_bytes", false,-1, 29,0);
        vcdp->declBus(c+649,"BDMAm2s cch_address", false,-1, 31,0);
        vcdp->declBus(c+657,"BDMAm2s cch_burst_type", false,-1, 1,0);
        vcdp->declBus(c+665,"BDMAm2s cch_id", false,-1, 3,0);
        vcdp->declBus(c+673,"BDMAm2s trans_bytes_cnt", false,-1, 29,0);
        vcdp->declBus(c+681,"BDMAm2s m2s_ar_len", false,-1, 7,0);
        vcdp->declBit(c+1057,"BDMAm2s m2s_ar_valid", false,-1);
        vcdp->declBit(c+1065,"BDMAm2s m2s_ar_halt_exec", false,-1);
        vcdp->declBus(c+689,"BDMAm2s aligned_address", false,-1, 31,0);
        vcdp->declBit(c+1073,"BDMAm2s cycle_finished", false,-1);
        vcdp->declBit(c+425,"BDMAm2s m2s_cch_fire", false,-1);
        vcdp->declBit(c+1353,"BDMAm2s when_BDMAm2s_l85", false,-1);
        vcdp->declBit(c+129,"BDMAm2s m2s_ar_fifo_io_push_fire", false,-1);
        vcdp->declBit(c+137,"BDMAm2s m2s_ar_fifo_io_push_fire_1", false,-1);
        vcdp->declBit(c+1009,"BDMAm2s when_BDMAm2s_l101", false,-1);
        vcdp->declBit(c+1353,"BDMAm2s when_BDMAm2s_l115", false,-1);
        vcdp->declBit(c+129,"BDMAm2s m2s_ar_fifo_io_push_fire_2", false,-1);
        vcdp->declBit(c+137,"BDMAm2s m2s_ar_fifo_io_push_fire_3", false,-1);
        vcdp->declBit(c+1009,"BDMAm2s when_BDMAm2s_l132", false,-1);
        vcdp->declBit(c+1017,"BDMAm2s when_BDMAm2s_l136", false,-1);
        vcdp->declBit(c+697,"BDMAm2s when_BDMAm2s_l148", false,-1);
        vcdp->declBit(c+2153,"BDMAm2s when_BDMAm2s_l160", false,-1);
        vcdp->declBit(c+2161,"BDMAm2s dma_ar_fire", false,-1);
        vcdp->declBit(c+2161,"BDMAm2s dma_ar_fire_1", false,-1);
        vcdp->declBit(c+1081,"BDMAm2s m2s_r_valve", false,-1);
        vcdp->declBus(c+1361,"BDMAm2s m2s_axis_len", false,-1, 7,0);
        vcdp->declBus(c+705,"BDMAm2s m2s_axis_id", false,-1, 3,0);
        vcdp->declBus(c+713,"BDMAm2s m2s_axis_strb", false,-1, 3,0);
        vcdp->declBus(c+721,"BDMAm2s m2s_axis_keep", false,-1, 3,0);
        vcdp->declBus(c+729,"BDMAm2s keep_strb_mask", false,-1, 3,0);
        vcdp->declBus(c+2201,"BDMAm2s keep_strb_full", false,-1, 3,0);
        vcdp->declBit(c+433,"BDMAm2s dma_ar_fire_2", false,-1);
        vcdp->declBit(c+441,"BDMAm2s dma_r_fire", false,-1);
        vcdp->declBit(c+1369,"BDMAm2s when_BDMAm2s_l242", false,-1);
        vcdp->declBit(c+1089,"BDMAm2s when_BDMAm2s_l259", false,-1);
        vcdp->declBit(c+2169,"BDMAm2s m2s_data_fifo_io_pop_fire", false,-1);
        vcdp->declBit(c+2177,"BDMAm2s when_BDMAm2s_l261", false,-1);
        vcdp->declQuad(c+2185,"BDMAm2s m2s_state_string", false,-1, 39,0);
        vcdp->declArray(c+145,"BDMAm2s m2s_cch_state_string", false,-1, 71,0);
        vcdp->declQuad(c+1097,"BDMAm2s m2s_r_state_string", false,-1, 39,0);
        vcdp->declBit(c+1057,"BDMAm2s m2s_ar_fifo io_push_valid", false,-1);
        vcdp->declBit(c+1,"BDMAm2s m2s_ar_fifo io_push_ready", false,-1);
        vcdp->declBus(c+689,"BDMAm2s m2s_ar_fifo io_push_payload_addr", false,-1, 31,0);
        vcdp->declBus(c+665,"BDMAm2s m2s_ar_fifo io_push_payload_id", false,-1, 3,0);
        vcdp->declBus(c+681,"BDMAm2s m2s_ar_fifo io_push_payload_len", false,-1, 7,0);
        vcdp->declBus(c+2209,"BDMAm2s m2s_ar_fifo io_push_payload_size", false,-1, 2,0);
        vcdp->declBus(c+657,"BDMAm2s m2s_ar_fifo io_push_payload_burst", false,-1, 1,0);
        vcdp->declBit(c+9,"BDMAm2s m2s_ar_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+2137,"BDMAm2s m2s_ar_fifo io_pop_ready", false,-1);
        vcdp->declBus(c+593,"BDMAm2s m2s_ar_fifo io_pop_payload_addr", false,-1, 31,0);
        vcdp->declBus(c+601,"BDMAm2s m2s_ar_fifo io_pop_payload_id", false,-1, 3,0);
        vcdp->declBus(c+609,"BDMAm2s m2s_ar_fifo io_pop_payload_len", false,-1, 7,0);
        vcdp->declBus(c+617,"BDMAm2s m2s_ar_fifo io_pop_payload_size", false,-1, 2,0);
        vcdp->declBus(c+625,"BDMAm2s m2s_ar_fifo io_pop_payload_burst", false,-1, 1,0);
        vcdp->declBit(c+2217,"BDMAm2s m2s_ar_fifo io_flush", false,-1);
        vcdp->declBus(c+17,"BDMAm2s m2s_ar_fifo io_occupancy", false,-1, 3,0);
        vcdp->declBus(c+25,"BDMAm2s m2s_ar_fifo io_availability", false,-1, 3,0);
        vcdp->declBit(c+2121,"BDMAm2s m2s_ar_fifo clk", false,-1);
        vcdp->declBit(c+2129,"BDMAm2s m2s_ar_fifo reset", false,-1);
        vcdp->declBit(c+169,"BDMAm2s m2s_ar_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+2217,"BDMAm2s m2s_ar_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+177,"BDMAm2s m2s_ar_fifo logic_pushPtr_valueNext", false,-1, 2,0);
        vcdp->declBus(c+1113,"BDMAm2s m2s_ar_fifo logic_pushPtr_value", false,-1, 2,0);
        vcdp->declBit(c+1121,"BDMAm2s m2s_ar_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+185,"BDMAm2s m2s_ar_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+449,"BDMAm2s m2s_ar_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+2217,"BDMAm2s m2s_ar_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+457,"BDMAm2s m2s_ar_fifo logic_popPtr_valueNext", false,-1, 2,0);
        vcdp->declBus(c+1129,"BDMAm2s m2s_ar_fifo logic_popPtr_value", false,-1, 2,0);
        vcdp->declBit(c+1137,"BDMAm2s m2s_ar_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+361,"BDMAm2s m2s_ar_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+193,"BDMAm2s m2s_ar_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+1145,"BDMAm2s m2s_ar_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+129,"BDMAm2s m2s_ar_fifo logic_pushing", false,-1);
        vcdp->declBit(c+465,"BDMAm2s m2s_ar_fifo logic_popping", false,-1);
        vcdp->declBit(c+201,"BDMAm2s m2s_ar_fifo logic_empty", false,-1);
        vcdp->declBit(c+209,"BDMAm2s m2s_ar_fifo logic_full", false,-1);
        vcdp->declBit(c+369,"BDMAm2s m2s_ar_fifo when_Stream_l933", false,-1);
        vcdp->declBus(c+1153,"BDMAm2s m2s_ar_fifo logic_ptrDif", false,-1, 2,0);
        {int i; for (i=0; i<8; i++) {
                vcdp->declQuad(c+737+i*2,"BDMAm2s m2s_ar_fifo logic_ram", true,(i+0), 48,0);}}
        vcdp->declBit(c+1057,"BDMAm2s low_addr_fifo io_push_valid", false,-1);
        vcdp->declBit(c+33,"BDMAm2s low_addr_fifo io_push_ready", false,-1);
        vcdp->declBus(c+577,"BDMAm2s low_addr_fifo io_push_payload", false,-1, 1,0);
        vcdp->declBit(c+41,"BDMAm2s low_addr_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+2161,"BDMAm2s low_addr_fifo io_pop_ready", false,-1);
        vcdp->declBus(c+633,"BDMAm2s low_addr_fifo io_pop_payload", false,-1, 1,0);
        vcdp->declBit(c+2217,"BDMAm2s low_addr_fifo io_flush", false,-1);
        vcdp->declBus(c+49,"BDMAm2s low_addr_fifo io_occupancy", false,-1, 3,0);
        vcdp->declBus(c+57,"BDMAm2s low_addr_fifo io_availability", false,-1, 3,0);
        vcdp->declBit(c+2121,"BDMAm2s low_addr_fifo clk", false,-1);
        vcdp->declBit(c+2129,"BDMAm2s low_addr_fifo reset", false,-1);
        vcdp->declBit(c+217,"BDMAm2s low_addr_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+2217,"BDMAm2s low_addr_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+225,"BDMAm2s low_addr_fifo logic_pushPtr_valueNext", false,-1, 2,0);
        vcdp->declBus(c+1161,"BDMAm2s low_addr_fifo logic_pushPtr_value", false,-1, 2,0);
        vcdp->declBit(c+1169,"BDMAm2s low_addr_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+233,"BDMAm2s low_addr_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+473,"BDMAm2s low_addr_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+2217,"BDMAm2s low_addr_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+481,"BDMAm2s low_addr_fifo logic_popPtr_valueNext", false,-1, 2,0);
        vcdp->declBus(c+1177,"BDMAm2s low_addr_fifo logic_popPtr_value", false,-1, 2,0);
        vcdp->declBit(c+1185,"BDMAm2s low_addr_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+377,"BDMAm2s low_addr_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+241,"BDMAm2s low_addr_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+1193,"BDMAm2s low_addr_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+249,"BDMAm2s low_addr_fifo logic_pushing", false,-1);
        vcdp->declBit(c+489,"BDMAm2s low_addr_fifo logic_popping", false,-1);
        vcdp->declBit(c+257,"BDMAm2s low_addr_fifo logic_empty", false,-1);
        vcdp->declBit(c+265,"BDMAm2s low_addr_fifo logic_full", false,-1);
        vcdp->declBit(c+385,"BDMAm2s low_addr_fifo when_Stream_l933", false,-1);
        vcdp->declBus(c+1201,"BDMAm2s low_addr_fifo logic_ptrDif", false,-1, 2,0);
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+865+i*1,"BDMAm2s low_addr_fifo logic_ram", true,(i+0), 1,0);}}
        vcdp->declBit(c+1057,"BDMAm2s low_bytes_fifo io_push_valid", false,-1);
        vcdp->declBit(c+65,"BDMAm2s low_bytes_fifo io_push_ready", false,-1);
        vcdp->declBus(c+585,"BDMAm2s low_bytes_fifo io_push_payload", false,-1, 1,0);
        vcdp->declBit(c+73,"BDMAm2s low_bytes_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+2161,"BDMAm2s low_bytes_fifo io_pop_ready", false,-1);
        vcdp->declBus(c+641,"BDMAm2s low_bytes_fifo io_pop_payload", false,-1, 1,0);
        vcdp->declBit(c+2217,"BDMAm2s low_bytes_fifo io_flush", false,-1);
        vcdp->declBus(c+81,"BDMAm2s low_bytes_fifo io_occupancy", false,-1, 3,0);
        vcdp->declBus(c+89,"BDMAm2s low_bytes_fifo io_availability", false,-1, 3,0);
        vcdp->declBit(c+2121,"BDMAm2s low_bytes_fifo clk", false,-1);
        vcdp->declBit(c+2129,"BDMAm2s low_bytes_fifo reset", false,-1);
        vcdp->declBit(c+273,"BDMAm2s low_bytes_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+2217,"BDMAm2s low_bytes_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+281,"BDMAm2s low_bytes_fifo logic_pushPtr_valueNext", false,-1, 2,0);
        vcdp->declBus(c+1209,"BDMAm2s low_bytes_fifo logic_pushPtr_value", false,-1, 2,0);
        vcdp->declBit(c+1217,"BDMAm2s low_bytes_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+289,"BDMAm2s low_bytes_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+497,"BDMAm2s low_bytes_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+2217,"BDMAm2s low_bytes_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+505,"BDMAm2s low_bytes_fifo logic_popPtr_valueNext", false,-1, 2,0);
        vcdp->declBus(c+1225,"BDMAm2s low_bytes_fifo logic_popPtr_value", false,-1, 2,0);
        vcdp->declBit(c+1233,"BDMAm2s low_bytes_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+393,"BDMAm2s low_bytes_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+297,"BDMAm2s low_bytes_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+1241,"BDMAm2s low_bytes_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+305,"BDMAm2s low_bytes_fifo logic_pushing", false,-1);
        vcdp->declBit(c+513,"BDMAm2s low_bytes_fifo logic_popping", false,-1);
        vcdp->declBit(c+313,"BDMAm2s low_bytes_fifo logic_empty", false,-1);
        vcdp->declBit(c+321,"BDMAm2s low_bytes_fifo logic_full", false,-1);
        vcdp->declBit(c+401,"BDMAm2s low_bytes_fifo when_Stream_l933", false,-1);
        vcdp->declBus(c+1249,"BDMAm2s low_bytes_fifo logic_ptrDif", false,-1, 2,0);
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+929+i*1,"BDMAm2s low_bytes_fifo logic_ram", true,(i+0), 1,0);}}
        vcdp->declBit(c+2145,"BDMAm2s m2s_data_fifo io_push_valid", false,-1);
        vcdp->declBit(c+97,"BDMAm2s m2s_data_fifo io_push_ready", false,-1);
        vcdp->declBus(c+1961,"BDMAm2s m2s_data_fifo io_push_payload_data", false,-1, 31,0);
        vcdp->declBus(c+705,"BDMAm2s m2s_data_fifo io_push_payload_id", false,-1, 3,0);
        vcdp->declBus(c+993,"BDMAm2s m2s_data_fifo io_push_payload_strb", false,-1, 3,0);
        vcdp->declBus(c+1001,"BDMAm2s m2s_data_fifo io_push_payload_keep_", false,-1, 3,0);
        vcdp->declBit(c+353,"BDMAm2s m2s_data_fifo io_push_payload_last", false,-1);
        vcdp->declBit(c+105,"BDMAm2s m2s_data_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+2001,"BDMAm2s m2s_data_fifo io_pop_ready", false,-1);
        vcdp->declBus(c+1305,"BDMAm2s m2s_data_fifo io_pop_payload_data", false,-1, 31,0);
        vcdp->declBus(c+1313,"BDMAm2s m2s_data_fifo io_pop_payload_id", false,-1, 3,0);
        vcdp->declBus(c+1321,"BDMAm2s m2s_data_fifo io_pop_payload_strb", false,-1, 3,0);
        vcdp->declBus(c+1329,"BDMAm2s m2s_data_fifo io_pop_payload_keep_", false,-1, 3,0);
        vcdp->declBit(c+1337,"BDMAm2s m2s_data_fifo io_pop_payload_last", false,-1);
        vcdp->declBit(c+2217,"BDMAm2s m2s_data_fifo io_flush", false,-1);
        vcdp->declBus(c+113,"BDMAm2s m2s_data_fifo io_occupancy", false,-1, 5,0);
        vcdp->declBus(c+121,"BDMAm2s m2s_data_fifo io_availability", false,-1, 5,0);
        vcdp->declBit(c+2121,"BDMAm2s m2s_data_fifo clk", false,-1);
        vcdp->declBit(c+2129,"BDMAm2s m2s_data_fifo reset", false,-1);
        vcdp->declBit(c+521,"BDMAm2s m2s_data_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+2217,"BDMAm2s m2s_data_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+529,"BDMAm2s m2s_data_fifo logic_pushPtr_valueNext", false,-1, 4,0);
        vcdp->declBus(c+1257,"BDMAm2s m2s_data_fifo logic_pushPtr_value", false,-1, 4,0);
        vcdp->declBit(c+1265,"BDMAm2s m2s_data_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+409,"BDMAm2s m2s_data_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+537,"BDMAm2s m2s_data_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+2217,"BDMAm2s m2s_data_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+545,"BDMAm2s m2s_data_fifo logic_popPtr_valueNext", false,-1, 4,0);
        vcdp->declBus(c+1273,"BDMAm2s m2s_data_fifo logic_popPtr_value", false,-1, 4,0);
        vcdp->declBit(c+1281,"BDMAm2s m2s_data_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+417,"BDMAm2s m2s_data_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+329,"BDMAm2s m2s_data_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+1289,"BDMAm2s m2s_data_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+553,"BDMAm2s m2s_data_fifo logic_pushing", false,-1);
        vcdp->declBit(c+561,"BDMAm2s m2s_data_fifo logic_popping", false,-1);
        vcdp->declBit(c+337,"BDMAm2s m2s_data_fifo logic_empty", false,-1);
        vcdp->declBit(c+345,"BDMAm2s m2s_data_fifo logic_full", false,-1);
        vcdp->declBit(c+569,"BDMAm2s m2s_data_fifo when_Stream_l933", false,-1);
        vcdp->declBus(c+1297,"BDMAm2s m2s_data_fifo logic_ptrDif", false,-1, 4,0);
        {int i; for (i=0; i<32; i++) {
                vcdp->declQuad(c+1377+i*2,"BDMAm2s m2s_data_fifo logic_ram", true,(i+0), 44,0);}}
    }
}

void VBDMAm2s::traceFullThis__1(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+9,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_pop_valid));
        vcdp->fullBus(c+17,(((((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch)) 
                              << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
                                              - (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value))))),4);
        vcdp->fullBus(c+25,(((((~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch)) 
                              << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value) 
                                              - (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value))))),4);
        vcdp->fullBit(c+33,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+41,((1U & ((~ ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
                                       & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))) 
                                   & (~ ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_io_pop_valid) 
                                         & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_full))))))));
        vcdp->fullBus(c+49,(((((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch)) 
                              << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
                                              - (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value))))),4);
        vcdp->fullBus(c+57,(((((~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch)) 
                              << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value) 
                                              - (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value))))),4);
        vcdp->fullBit(c+65,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+73,((1U & ((~ ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
                                       & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))) 
                                   & (~ ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT___zz_io_pop_valid) 
                                         & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_full))))))));
        vcdp->fullBus(c+81,(((((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch)) 
                              << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
                                              - (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value))))),4);
        vcdp->fullBus(c+89,(((((~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch)) 
                              << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value) 
                                              - (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))))),4);
        vcdp->fullBit(c+97,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+105,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid));
        vcdp->fullBus(c+113,(((((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy) 
                                & (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch)) 
                               << 5U) | (0x1fU & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value) 
                                                  - (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value))))),6);
        vcdp->fullBus(c+121,(((((~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy)) 
                                & (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch)) 
                               << 5U) | (0x1fU & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value) 
                                                  - (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value))))),6);
        vcdp->fullBit(c+129,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire));
        vcdp->fullBit(c+137,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_valid) 
                              & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full)))));
        vcdp->fullArray(c+145,(vlTOPp->BDMAm2s__DOT__m2s_cch_state_string),72);
        vcdp->fullBit(c+169,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+177,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->fullBit(c+185,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+193,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+201,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+209,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full));
        vcdp->fullBit(c+217,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+225,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->fullBit(c+233,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+241,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+249,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushing));
        vcdp->fullBit(c+257,(((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+265,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_full));
        vcdp->fullBit(c+273,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+281,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->fullBit(c+289,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+297,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+305,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushing));
        vcdp->fullBit(c+313,(((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+321,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_full));
        vcdp->fullBit(c+329,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+337,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+345,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_full));
        vcdp->fullBit(c+353,((((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len)) 
                               & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_pop_valid))) 
                              & (3U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state)))));
        vcdp->fullBit(c+361,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+369,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire) 
                              != (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popping))));
        vcdp->fullBit(c+377,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+385,(((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popping))));
        vcdp->fullBit(c+393,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+401,(((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popping))));
        vcdp->fullBit(c+409,(((0x1fU == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+417,(((0x1fU == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+425,(vlTOPp->BDMAm2s__DOT__m2s_cch_fire));
        vcdp->fullBit(c+433,(vlTOPp->BDMAm2s__DOT__dma_ar_fire_2));
        vcdp->fullBit(c+441,(vlTOPp->BDMAm2s__DOT__dma_r_fire));
        vcdp->fullBit(c+449,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+457,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->fullBit(c+465,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popping));
        vcdp->fullBit(c+473,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+481,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->fullBit(c+489,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popping));
        vcdp->fullBit(c+497,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+505,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->fullBit(c+513,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popping));
        vcdp->fullBit(c+521,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+529,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_valueNext),5);
        vcdp->fullBit(c+537,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+545,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext),5);
        vcdp->fullBit(c+553,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing));
        vcdp->fullBit(c+561,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popping));
        vcdp->fullBit(c+569,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popping))));
        vcdp->fullBus(c+577,((3U & vlTOPp->BDMAm2s__DOT__cch_address)),2);
        vcdp->fullBus(c+585,((3U & ((IData)(1U) + (~ 
                                                   (vlTOPp->BDMAm2s__DOT__trans_bytes_cnt 
                                                    + vlTOPp->BDMAm2s__DOT__cch_address))))),2);
        vcdp->fullBus(c+593,((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->fullBus(c+601,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x20U)))),4);
        vcdp->fullBus(c+609,((0xffU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                               >> 0x24U)))),8);
        vcdp->fullBus(c+617,((7U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2cU)))),3);
        vcdp->fullBus(c+625,((3U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2fU)))),2);
        vcdp->fullBus(c+633,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_logic_ram_port0),2);
        vcdp->fullBus(c+641,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0),2);
        vcdp->fullBus(c+649,(vlTOPp->BDMAm2s__DOT__cch_address),32);
        vcdp->fullBus(c+657,(vlTOPp->BDMAm2s__DOT__cch_burst_type),2);
        vcdp->fullBus(c+665,(vlTOPp->BDMAm2s__DOT__cch_id),4);
        vcdp->fullBus(c+673,(vlTOPp->BDMAm2s__DOT__trans_bytes_cnt),30);
        vcdp->fullBus(c+681,(vlTOPp->BDMAm2s__DOT__m2s_ar_len),8);
        vcdp->fullBus(c+689,((0xfffffffcU & vlTOPp->BDMAm2s__DOT__cch_address)),32);
        vcdp->fullBit(c+697,((0U != (0xfffffU & (((IData)(0x40U) 
                                                  + 
                                                  (0xfffU 
                                                   & vlTOPp->BDMAm2s__DOT__cch_address)) 
                                                 >> 0xcU)))));
        vcdp->fullBus(c+705,(vlTOPp->BDMAm2s__DOT__m2s_axis_id),4);
        vcdp->fullBus(c+713,(vlTOPp->BDMAm2s__DOT__m2s_axis_strb),4);
        vcdp->fullBus(c+721,(vlTOPp->BDMAm2s__DOT__m2s_axis_keep),4);
        vcdp->fullBus(c+729,(vlTOPp->BDMAm2s__DOT__keep_strb_mask),4);
        vcdp->fullQuad(c+737,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[0]),49);
        vcdp->fullQuad(c+739,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[1]),49);
        vcdp->fullQuad(c+741,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[2]),49);
        vcdp->fullQuad(c+743,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[3]),49);
        vcdp->fullQuad(c+745,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[4]),49);
        vcdp->fullQuad(c+747,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[5]),49);
        vcdp->fullQuad(c+749,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[6]),49);
        vcdp->fullQuad(c+751,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[7]),49);
        vcdp->fullBus(c+865,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[0]),2);
        vcdp->fullBus(c+866,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[1]),2);
        vcdp->fullBus(c+867,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[2]),2);
        vcdp->fullBus(c+868,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[3]),2);
        vcdp->fullBus(c+869,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[4]),2);
        vcdp->fullBus(c+870,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[5]),2);
        vcdp->fullBus(c+871,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[6]),2);
        vcdp->fullBus(c+872,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[7]),2);
        vcdp->fullBus(c+929,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[0]),2);
        vcdp->fullBus(c+930,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[1]),2);
        vcdp->fullBus(c+931,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[2]),2);
        vcdp->fullBus(c+932,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[3]),2);
        vcdp->fullBus(c+933,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[4]),2);
        vcdp->fullBus(c+934,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[5]),2);
        vcdp->fullBus(c+935,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[6]),2);
        vcdp->fullBus(c+936,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[7]),2);
        vcdp->fullBus(c+993,(((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len))
                               ? ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask) 
                                  & (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_strb))
                               : (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_strb))),4);
        vcdp->fullBus(c+1001,(((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len))
                                ? ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask) 
                                   & (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_keep))
                                : (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_keep))),4);
        vcdp->fullBit(c+1009,((0x40U >= (vlTOPp->BDMAm2s__DOT__cch_total_bytes 
                                         + (3U & vlTOPp->BDMAm2s__DOT__cch_address)))));
        vcdp->fullBit(c+1017,((0U != (0xfffffU & ((
                                                   (0xfffU 
                                                    & vlTOPp->BDMAm2s__DOT__cch_address) 
                                                   + 
                                                   (0xfffU 
                                                    & vlTOPp->BDMAm2s__DOT__cch_total_bytes)) 
                                                  >> 0xcU)))));
        vcdp->fullBus(c+1025,(vlTOPp->BDMAm2s__DOT__m2s_cch_state),2);
        vcdp->fullBit(c+1033,(vlTOPp->BDMAm2s__DOT__m2s_r_state));
        vcdp->fullBit(c+1041,(vlTOPp->BDMAm2s__DOT__m2s_ar_valve));
        vcdp->fullBit(c+1049,(vlTOPp->BDMAm2s__DOT__cch_ready));
        vcdp->fullBit(c+1057,(vlTOPp->BDMAm2s__DOT__m2s_ar_valid));
        vcdp->fullBit(c+1065,(vlTOPp->BDMAm2s__DOT__m2s_ar_halt_exec));
        vcdp->fullBit(c+1073,(vlTOPp->BDMAm2s__DOT__cycle_finished));
        vcdp->fullBit(c+1081,(vlTOPp->BDMAm2s__DOT__m2s_r_valve));
        vcdp->fullBit(c+1089,((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))));
        vcdp->fullQuad(c+1097,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_r_state)
                                 ? ((IData)(vlTOPp->BDMAm2s__DOT__m2s_r_state)
                                     ? VL_ULL(0x4255525354)
                                     : VL_ULL(0x3f3f3f3f3f))
                                 : VL_ULL(0x49444c4520))),40);
        vcdp->fullBus(c+1113,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value),3);
        vcdp->fullBit(c+1121,((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+1129,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value),3);
        vcdp->fullBit(c+1137,((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+1145,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+1153,((7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
                                     - (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->fullBus(c+1161,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value),3);
        vcdp->fullBit(c+1169,((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+1177,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value),3);
        vcdp->fullBit(c+1185,((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+1193,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+1201,((7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
                                     - (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->fullBus(c+1209,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value),3);
        vcdp->fullBit(c+1217,((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+1225,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value),3);
        vcdp->fullBit(c+1233,((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+1241,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+1249,((7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
                                     - (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->fullBus(c+1257,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value),5);
        vcdp->fullBit(c+1265,((0x1fU == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+1273,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value),5);
        vcdp->fullBit(c+1281,((0x1fU == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value))));
    }
}

void VBDMAm2s::traceFullThis__9(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1289,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+1297,((0x1fU & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value) 
                                        - (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value)))),5);
        vcdp->fullBus(c+1305,((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->fullBus(c+1313,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                               >> 0x20U)))),4);
        vcdp->fullBus(c+1321,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                               >> 0x24U)))),4);
        vcdp->fullBus(c+1329,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                               >> 0x28U)))),4);
        vcdp->fullBit(c+1337,((1U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                             >> 0x2cU)))));
        vcdp->fullBus(c+1345,(vlTOPp->BDMAm2s__DOT__cch_total_bytes),30);
        vcdp->fullBit(c+1353,((0U == vlTOPp->BDMAm2s__DOT__cch_total_bytes)));
        vcdp->fullBus(c+1361,(vlTOPp->BDMAm2s__DOT__m2s_axis_len),8);
        vcdp->fullBit(c+1369,((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len))));
        vcdp->fullQuad(c+1377,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[0]),45);
        vcdp->fullQuad(c+1379,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[1]),45);
        vcdp->fullQuad(c+1381,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[2]),45);
        vcdp->fullQuad(c+1383,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[3]),45);
        vcdp->fullQuad(c+1385,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[4]),45);
        vcdp->fullQuad(c+1387,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[5]),45);
        vcdp->fullQuad(c+1389,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[6]),45);
        vcdp->fullQuad(c+1391,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[7]),45);
        vcdp->fullQuad(c+1393,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[8]),45);
        vcdp->fullQuad(c+1395,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[9]),45);
        vcdp->fullQuad(c+1397,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[10]),45);
        vcdp->fullQuad(c+1399,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[11]),45);
        vcdp->fullQuad(c+1401,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[12]),45);
        vcdp->fullQuad(c+1403,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[13]),45);
        vcdp->fullQuad(c+1405,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[14]),45);
        vcdp->fullQuad(c+1407,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[15]),45);
        vcdp->fullQuad(c+1409,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[16]),45);
        vcdp->fullQuad(c+1411,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[17]),45);
        vcdp->fullQuad(c+1413,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[18]),45);
        vcdp->fullQuad(c+1415,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[19]),45);
        vcdp->fullQuad(c+1417,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[20]),45);
        vcdp->fullQuad(c+1419,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[21]),45);
        vcdp->fullQuad(c+1421,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[22]),45);
        vcdp->fullQuad(c+1423,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[23]),45);
        vcdp->fullQuad(c+1425,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[24]),45);
        vcdp->fullQuad(c+1427,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[25]),45);
        vcdp->fullQuad(c+1429,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[26]),45);
        vcdp->fullQuad(c+1431,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[27]),45);
        vcdp->fullQuad(c+1433,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[28]),45);
        vcdp->fullQuad(c+1435,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[29]),45);
        vcdp->fullQuad(c+1437,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[30]),45);
        vcdp->fullQuad(c+1439,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[31]),45);
        vcdp->fullBit(c+1889,(vlTOPp->dma_ar_valid));
        vcdp->fullBit(c+1897,(vlTOPp->dma_ar_ready));
        vcdp->fullBus(c+1905,(vlTOPp->dma_ar_payload_addr),32);
        vcdp->fullBus(c+1913,(vlTOPp->dma_ar_payload_id),4);
        vcdp->fullBus(c+1921,(vlTOPp->dma_ar_payload_len),8);
        vcdp->fullBus(c+1929,(vlTOPp->dma_ar_payload_size),3);
        vcdp->fullBus(c+1937,(vlTOPp->dma_ar_payload_burst),2);
        vcdp->fullBit(c+1945,(vlTOPp->dma_r_valid));
        vcdp->fullBit(c+1953,(vlTOPp->dma_r_ready));
        vcdp->fullBus(c+1961,(vlTOPp->dma_r_payload_data),32);
        vcdp->fullBus(c+1969,(vlTOPp->dma_r_payload_id),4);
        vcdp->fullBus(c+1977,(vlTOPp->dma_r_payload_resp),2);
        vcdp->fullBit(c+1985,(vlTOPp->dma_r_payload_last));
        vcdp->fullBit(c+1993,(vlTOPp->m2s_data_stream_valid));
        vcdp->fullBit(c+2001,(vlTOPp->m2s_data_stream_ready));
        vcdp->fullBus(c+2009,(vlTOPp->m2s_data_stream_payload_data),32);
        vcdp->fullBus(c+2017,(vlTOPp->m2s_data_stream_payload_id),4);
        vcdp->fullBus(c+2025,(vlTOPp->m2s_data_stream_payload_strb),4);
        vcdp->fullBus(c+2033,(vlTOPp->m2s_data_stream_payload_keep_),4);
        vcdp->fullBit(c+2041,(vlTOPp->m2s_data_stream_payload_last));
        vcdp->fullBit(c+2049,(vlTOPp->m2s_state));
        vcdp->fullBit(c+2057,(vlTOPp->m2s_cch_valid));
        vcdp->fullBit(c+2065,(vlTOPp->m2s_cch_ready));
        vcdp->fullBus(c+2073,(vlTOPp->m2s_cch_payload_desc_start_addr),32);
        vcdp->fullBus(c+2081,(vlTOPp->m2s_cch_payload_desc_total_bytes),30);
        vcdp->fullBus(c+2089,(vlTOPp->m2s_cch_payload_desc_burst),2);
        vcdp->fullBus(c+2097,(vlTOPp->m2s_cch_payload_desc_id),4);
        vcdp->fullBit(c+2105,(vlTOPp->m2s_cch_payload_desc_reset));
        vcdp->fullBit(c+2113,(vlTOPp->m2s_intr));
        vcdp->fullBit(c+2121,(vlTOPp->clk));
        vcdp->fullBit(c+2129,(vlTOPp->reset));
        vcdp->fullBit(c+2137,(((IData)(vlTOPp->dma_ar_ready) 
                               & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_valve))));
        vcdp->fullBit(c+2145,(((IData)(vlTOPp->dma_r_valid) 
                               & (IData)(vlTOPp->BDMAm2s__DOT__m2s_r_valve))));
        vcdp->fullBit(c+2153,(((IData)(vlTOPp->m2s_cch_payload_desc_reset) 
                               & (IData)(vlTOPp->BDMAm2s__DOT__cycle_finished))));
        vcdp->fullBit(c+2161,(((IData)(vlTOPp->dma_ar_valid) 
                               & (IData)(vlTOPp->dma_ar_ready))));
        vcdp->fullBit(c+2169,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid) 
                               & (IData)(vlTOPp->m2s_data_stream_ready))));
        vcdp->fullBit(c+2177,(((IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                        >> 0x2cU)) 
                               & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid) 
                                  & (IData)(vlTOPp->m2s_data_stream_ready)))));
        vcdp->fullQuad(c+2185,(((IData)(vlTOPp->m2s_state)
                                 ? ((IData)(vlTOPp->m2s_state)
                                     ? VL_ULL(0x4255525354)
                                     : VL_ULL(0x3f3f3f3f3f))
                                 : VL_ULL(0x49444c4520))),40);
        vcdp->fullBus(c+2201,(0xfU),4);
        vcdp->fullBus(c+2209,(2U),3);
        vcdp->fullBit(c+2217,(0U));
    }
}
