// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxiLite4CyclicPrefix__Syms.h"


//======================

void VAxiLite4CyclicPrefix::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VAxiLite4CyclicPrefix::traceInit, &VAxiLite4CyclicPrefix::traceFull, &VAxiLite4CyclicPrefix::traceChg, this);
}
void VAxiLite4CyclicPrefix::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VAxiLite4CyclicPrefix* t = (VAxiLite4CyclicPrefix*)userthis;
    VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VAxiLite4CyclicPrefix::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxiLite4CyclicPrefix* t = (VAxiLite4CyclicPrefix*)userthis;
    VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VAxiLite4CyclicPrefix::traceInitThis(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VAxiLite4CyclicPrefix::traceFullThis(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAxiLite4CyclicPrefix::traceInitThis__1(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+409,"axil4Ctrl_awvalid", false,-1);
        vcdp->declBit(c+417,"axil4Ctrl_awready", false,-1);
        vcdp->declBus(c+425,"axil4Ctrl_awaddr", false,-1, 7,0);
        vcdp->declBus(c+433,"axil4Ctrl_awprot", false,-1, 2,0);
        vcdp->declBit(c+441,"axil4Ctrl_wvalid", false,-1);
        vcdp->declBit(c+449,"axil4Ctrl_wready", false,-1);
        vcdp->declBus(c+457,"axil4Ctrl_wdata", false,-1, 31,0);
        vcdp->declBus(c+465,"axil4Ctrl_wstrb", false,-1, 3,0);
        vcdp->declBit(c+473,"axil4Ctrl_bvalid", false,-1);
        vcdp->declBit(c+481,"axil4Ctrl_bready", false,-1);
        vcdp->declBus(c+489,"axil4Ctrl_bresp", false,-1, 1,0);
        vcdp->declBit(c+497,"axil4Ctrl_arvalid", false,-1);
        vcdp->declBit(c+505,"axil4Ctrl_arready", false,-1);
        vcdp->declBus(c+513,"axil4Ctrl_araddr", false,-1, 7,0);
        vcdp->declBus(c+521,"axil4Ctrl_arprot", false,-1, 2,0);
        vcdp->declBit(c+529,"axil4Ctrl_rvalid", false,-1);
        vcdp->declBit(c+537,"axil4Ctrl_rready", false,-1);
        vcdp->declBus(c+545,"axil4Ctrl_rdata", false,-1, 31,0);
        vcdp->declBus(c+553,"axil4Ctrl_rresp", false,-1, 1,0);
        vcdp->declBit(c+561,"raw_data_valid", false,-1);
        vcdp->declBit(c+569,"raw_data_ready", false,-1);
        vcdp->declBit(c+577,"raw_data_payload_last", false,-1);
        vcdp->declBus(c+585,"raw_data_payload_fragment_cha_i", false,-1, 15,0);
        vcdp->declBus(c+593,"raw_data_payload_fragment_cha_q", false,-1, 15,0);
        vcdp->declBit(c+601,"result_valid", false,-1);
        vcdp->declBit(c+609,"result_payload_last", false,-1);
        vcdp->declBus(c+617,"result_payload_fragment_cha_i", false,-1, 15,0);
        vcdp->declBus(c+625,"result_payload_fragment_cha_q", false,-1, 15,0);
        vcdp->declBit(c+633,"rf_clk", false,-1);
        vcdp->declBit(c+641,"rf_resetn", false,-1);
        vcdp->declBit(c+649,"clk", false,-1);
        vcdp->declBit(c+657,"reset", false,-1);
        vcdp->declBit(c+409,"AxiLite4CyclicPrefix axil4Ctrl_awvalid", false,-1);
        vcdp->declBit(c+417,"AxiLite4CyclicPrefix axil4Ctrl_awready", false,-1);
        vcdp->declBus(c+425,"AxiLite4CyclicPrefix axil4Ctrl_awaddr", false,-1, 7,0);
        vcdp->declBus(c+433,"AxiLite4CyclicPrefix axil4Ctrl_awprot", false,-1, 2,0);
        vcdp->declBit(c+441,"AxiLite4CyclicPrefix axil4Ctrl_wvalid", false,-1);
        vcdp->declBit(c+449,"AxiLite4CyclicPrefix axil4Ctrl_wready", false,-1);
        vcdp->declBus(c+457,"AxiLite4CyclicPrefix axil4Ctrl_wdata", false,-1, 31,0);
        vcdp->declBus(c+465,"AxiLite4CyclicPrefix axil4Ctrl_wstrb", false,-1, 3,0);
        vcdp->declBit(c+473,"AxiLite4CyclicPrefix axil4Ctrl_bvalid", false,-1);
        vcdp->declBit(c+481,"AxiLite4CyclicPrefix axil4Ctrl_bready", false,-1);
        vcdp->declBus(c+489,"AxiLite4CyclicPrefix axil4Ctrl_bresp", false,-1, 1,0);
        vcdp->declBit(c+497,"AxiLite4CyclicPrefix axil4Ctrl_arvalid", false,-1);
        vcdp->declBit(c+505,"AxiLite4CyclicPrefix axil4Ctrl_arready", false,-1);
        vcdp->declBus(c+513,"AxiLite4CyclicPrefix axil4Ctrl_araddr", false,-1, 7,0);
        vcdp->declBus(c+521,"AxiLite4CyclicPrefix axil4Ctrl_arprot", false,-1, 2,0);
        vcdp->declBit(c+529,"AxiLite4CyclicPrefix axil4Ctrl_rvalid", false,-1);
        vcdp->declBit(c+537,"AxiLite4CyclicPrefix axil4Ctrl_rready", false,-1);
        vcdp->declBus(c+545,"AxiLite4CyclicPrefix axil4Ctrl_rdata", false,-1, 31,0);
        vcdp->declBus(c+553,"AxiLite4CyclicPrefix axil4Ctrl_rresp", false,-1, 1,0);
        vcdp->declBit(c+561,"AxiLite4CyclicPrefix raw_data_valid", false,-1);
        vcdp->declBit(c+569,"AxiLite4CyclicPrefix raw_data_ready", false,-1);
        vcdp->declBit(c+577,"AxiLite4CyclicPrefix raw_data_payload_last", false,-1);
        vcdp->declBus(c+585,"AxiLite4CyclicPrefix raw_data_payload_fragment_cha_i", false,-1, 15,0);
        vcdp->declBus(c+593,"AxiLite4CyclicPrefix raw_data_payload_fragment_cha_q", false,-1, 15,0);
        vcdp->declBit(c+601,"AxiLite4CyclicPrefix result_valid", false,-1);
        vcdp->declBit(c+609,"AxiLite4CyclicPrefix result_payload_last", false,-1);
        vcdp->declBus(c+617,"AxiLite4CyclicPrefix result_payload_fragment_cha_i", false,-1, 15,0);
        vcdp->declBus(c+625,"AxiLite4CyclicPrefix result_payload_fragment_cha_q", false,-1, 15,0);
        vcdp->declBit(c+633,"AxiLite4CyclicPrefix rf_clk", false,-1);
        vcdp->declBit(c+641,"AxiLite4CyclicPrefix rf_resetn", false,-1);
        vcdp->declBit(c+649,"AxiLite4CyclicPrefix clk", false,-1);
        vcdp->declBit(c+657,"AxiLite4CyclicPrefix reset", false,-1);
        vcdp->declBit(c+1,"AxiLite4CyclicPrefix rfClockArea_cp_core_raw_data_ready", false,-1);
        vcdp->declBit(c+129,"AxiLite4CyclicPrefix rfClockArea_cp_core_result_valid", false,-1);
        vcdp->declBit(c+105,"AxiLite4CyclicPrefix rfClockArea_cp_core_result_payload_last", false,-1);
        vcdp->declBus(c+665,"AxiLite4CyclicPrefix rfClockArea_cp_core_result_payload_fragment_cha_i", false,-1, 15,0);
        vcdp->declBus(c+673,"AxiLite4CyclicPrefix rfClockArea_cp_core_result_payload_fragment_cha_q", false,-1, 15,0);
        vcdp->declBus(c+233,"AxiLite4CyclicPrefix clkCrossing_2_dataOut", false,-1, 4,0);
        vcdp->declBus(c+241,"AxiLite4CyclicPrefix clkCrossing_3_dataOut", false,-1, 6,0);
        vcdp->declBit(c+697,"AxiLite4CyclicPrefix readHaltRequest", false,-1);
        vcdp->declBit(c+697,"AxiLite4CyclicPrefix writeHaltRequest", false,-1);
        vcdp->declBit(c+137,"AxiLite4CyclicPrefix writeJoinEvent_valid", false,-1);
        vcdp->declBit(c+145,"AxiLite4CyclicPrefix writeJoinEvent_ready", false,-1);
        vcdp->declBit(c+153,"AxiLite4CyclicPrefix writeJoinEvent_fire", false,-1);
        vcdp->declBus(c+705,"AxiLite4CyclicPrefix writeRsp_resp", false,-1, 1,0);
        vcdp->declBit(c+137,"AxiLite4CyclicPrefix writeJoinEvent_translated_valid", false,-1);
        vcdp->declBit(c+145,"AxiLite4CyclicPrefix writeJoinEvent_translated_ready", false,-1);
        vcdp->declBus(c+705,"AxiLite4CyclicPrefix writeJoinEvent_translated_payload_resp", false,-1, 1,0);
        vcdp->declBit(c+209,"AxiLite4CyclicPrefix when_Stream_l342", false,-1);
        vcdp->declBit(c+217,"AxiLite4CyclicPrefix axil4Ctrl_ar_readDataStage_valid", false,-1);
        vcdp->declBit(c+537,"AxiLite4CyclicPrefix axil4Ctrl_ar_readDataStage_ready", false,-1);
        vcdp->declBus(c+193,"AxiLite4CyclicPrefix axil4Ctrl_ar_readDataStage_payload_addr", false,-1, 7,0);
        vcdp->declBus(c+201,"AxiLite4CyclicPrefix axil4Ctrl_ar_readDataStage_payload_prot", false,-1, 2,0);
        vcdp->declBit(c+217,"AxiLite4CyclicPrefix axil4Ctrl_ar_rValid", false,-1);
        vcdp->declBus(c+193,"AxiLite4CyclicPrefix axil4Ctrl_ar_rData_addr", false,-1, 7,0);
        vcdp->declBus(c+201,"AxiLite4CyclicPrefix axil4Ctrl_ar_rData_prot", false,-1, 2,0);
        vcdp->declBit(c+225,"AxiLite4CyclicPrefix when_Stream_l342_1", false,-1);
        vcdp->declBus(c+185,"AxiLite4CyclicPrefix readRsp_data", false,-1, 31,0);
        vcdp->declBus(c+705,"AxiLite4CyclicPrefix readRsp_resp", false,-1, 1,0);
        vcdp->declBit(c+153,"AxiLite4CyclicPrefix writeOccur", false,-1);
        vcdp->declBit(c+681,"AxiLite4CyclicPrefix readOccur", false,-1);
        vcdp->declBus(c+233,"AxiLite4CyclicPrefix rfClockArea_cp_core cp_len", false,-1, 4,0);
        vcdp->declBus(c+241,"AxiLite4CyclicPrefix rfClockArea_cp_core data_len", false,-1, 6,0);
        vcdp->declBit(c+561,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_data_valid", false,-1);
        vcdp->declBit(c+1,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_data_ready", false,-1);
        vcdp->declBit(c+577,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_data_payload_last", false,-1);
        vcdp->declBus(c+585,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_data_payload_fragment_cha_i", false,-1, 15,0);
        vcdp->declBus(c+593,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_data_payload_fragment_cha_q", false,-1, 15,0);
        vcdp->declBit(c+129,"AxiLite4CyclicPrefix rfClockArea_cp_core result_valid", false,-1);
        vcdp->declBit(c+105,"AxiLite4CyclicPrefix rfClockArea_cp_core result_payload_last", false,-1);
        vcdp->declBus(c+665,"AxiLite4CyclicPrefix rfClockArea_cp_core result_payload_fragment_cha_i", false,-1, 15,0);
        vcdp->declBus(c+673,"AxiLite4CyclicPrefix rfClockArea_cp_core result_payload_fragment_cha_q", false,-1, 15,0);
        vcdp->declBit(c+633,"AxiLite4CyclicPrefix rfClockArea_cp_core rf_clk", false,-1);
        vcdp->declBit(c+641,"AxiLite4CyclicPrefix rfClockArea_cp_core rf_resetn", false,-1);
        vcdp->declBit(c+1,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo_io_push_ready", false,-1);
        vcdp->declBit(c+9,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo_io_pop_valid", false,-1);
        vcdp->declBit(c+249,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo_io_pop_payload_last", false,-1);
        vcdp->declBus(c+257,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo_io_pop_payload_fragment_cha_i", false,-1, 15,0);
        vcdp->declBus(c+265,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo_io_pop_payload_fragment_cha_q", false,-1, 15,0);
        vcdp->declBus(c+17,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo_io_occupancy", false,-1, 6,0);
        vcdp->declBus(c+25,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo_io_availability", false,-1, 6,0);
        vcdp->declBit(c+273,"AxiLite4CyclicPrefix rfClockArea_cp_core cp_en", false,-1);
        vcdp->declBit(c+281,"AxiLite4CyclicPrefix rfClockArea_cp_core fifo_pop_en", false,-1);
        vcdp->declBit(c+689,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_data_fire", false,-1);
        vcdp->declBus(c+289,"AxiLite4CyclicPrefix rfClockArea_cp_core cp_state", false,-1, 1,0);
        vcdp->declBit(c+33,"AxiLite4CyclicPrefix rfClockArea_cp_core when_CyclicPrefix_l54", false,-1);
        vcdp->declBit(c+41,"AxiLite4CyclicPrefix rfClockArea_cp_core when_CyclicPrefix_l61", false,-1);
        vcdp->declQuad(c+297,"AxiLite4CyclicPrefix rfClockArea_cp_core cp_state_string", false,-1, 55,0);
        vcdp->declBit(c+561,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo io_push_valid", false,-1);
        vcdp->declBit(c+1,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo io_push_ready", false,-1);
        vcdp->declBit(c+577,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo io_push_payload_last", false,-1);
        vcdp->declBus(c+585,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo io_push_payload_fragment_cha_i", false,-1, 15,0);
        vcdp->declBus(c+593,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo io_push_payload_fragment_cha_q", false,-1, 15,0);
        vcdp->declBit(c+9,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo io_pop_valid", false,-1);
        vcdp->declBit(c+281,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo io_pop_ready", false,-1);
        vcdp->declBit(c+249,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo io_pop_payload_last", false,-1);
        vcdp->declBus(c+257,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo io_pop_payload_fragment_cha_i", false,-1, 15,0);
        vcdp->declBus(c+265,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo io_pop_payload_fragment_cha_q", false,-1, 15,0);
        vcdp->declBit(c+697,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo io_flush", false,-1);
        vcdp->declBus(c+17,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo io_occupancy", false,-1, 6,0);
        vcdp->declBus(c+25,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo io_availability", false,-1, 6,0);
        vcdp->declBit(c+633,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo rf_clk", false,-1);
        vcdp->declBit(c+641,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo rf_resetn", false,-1);
        vcdp->declBit(c+161,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+697,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+169,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo logic_pushPtr_valueNext", false,-1, 5,0);
        vcdp->declBus(c+313,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo logic_pushPtr_value", false,-1, 5,0);
        vcdp->declBit(c+321,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+113,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+49,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+697,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+57,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo logic_popPtr_valueNext", false,-1, 5,0);
        vcdp->declBus(c+329,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo logic_popPtr_value", false,-1, 5,0);
        vcdp->declBit(c+337,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+65,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+73,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+345,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+177,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo logic_pushing", false,-1);
        vcdp->declBit(c+81,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo logic_popping", false,-1);
        vcdp->declBit(c+89,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo logic_empty", false,-1);
        vcdp->declBit(c+97,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo logic_full", false,-1);
        vcdp->declBit(c+121,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo when_Stream_l933", false,-1);
        vcdp->declBus(c+353,"AxiLite4CyclicPrefix rfClockArea_cp_core raw_dataFifo logic_ptrDif", false,-1, 5,0);
        vcdp->declBus(c+393,"AxiLite4CyclicPrefix clkCrossing_2 dataIn", false,-1, 4,0);
        vcdp->declBus(c+233,"AxiLite4CyclicPrefix clkCrossing_2 dataOut", false,-1, 4,0);
        vcdp->declBit(c+649,"AxiLite4CyclicPrefix clkCrossing_2 clk", false,-1);
        vcdp->declBit(c+657,"AxiLite4CyclicPrefix clkCrossing_2 reset", false,-1);
        vcdp->declBit(c+633,"AxiLite4CyclicPrefix clkCrossing_2 rf_clk", false,-1);
        vcdp->declBit(c+641,"AxiLite4CyclicPrefix clkCrossing_2 rf_resetn", false,-1);
        vcdp->declBus(c+377,"AxiLite4CyclicPrefix clkCrossing_2 area_clkI_reg", false,-1, 4,0);
        vcdp->declBus(c+361,"AxiLite4CyclicPrefix clkCrossing_2 area_clkO_buf0", false,-1, 4,0);
        vcdp->declBus(c+233,"AxiLite4CyclicPrefix clkCrossing_2 area_clkO_buf1", false,-1, 4,0);
        vcdp->declBus(c+401,"AxiLite4CyclicPrefix clkCrossing_3 dataIn", false,-1, 6,0);
        vcdp->declBus(c+241,"AxiLite4CyclicPrefix clkCrossing_3 dataOut", false,-1, 6,0);
        vcdp->declBit(c+649,"AxiLite4CyclicPrefix clkCrossing_3 clk", false,-1);
        vcdp->declBit(c+657,"AxiLite4CyclicPrefix clkCrossing_3 reset", false,-1);
        vcdp->declBit(c+633,"AxiLite4CyclicPrefix clkCrossing_3 rf_clk", false,-1);
        vcdp->declBit(c+641,"AxiLite4CyclicPrefix clkCrossing_3 rf_resetn", false,-1);
        vcdp->declBus(c+385,"AxiLite4CyclicPrefix clkCrossing_3 area_clkI_reg", false,-1, 6,0);
        vcdp->declBus(c+369,"AxiLite4CyclicPrefix clkCrossing_3 area_clkO_buf0", false,-1, 6,0);
        vcdp->declBus(c+241,"AxiLite4CyclicPrefix clkCrossing_3 area_clkO_buf1", false,-1, 6,0);
    }
}

void VAxiLite4CyclicPrefix::traceFullThis__1(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,((1U & (~ (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_full)))));
        vcdp->fullBit(c+9,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo_io_pop_valid));
        vcdp->fullBus(c+17,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo_io_occupancy),7);
        vcdp->fullBus(c+25,(((((~ (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_ptrMatch)) 
                              << 6U) | (0x3fU & ((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_value))))),7);
        vcdp->fullBit(c+33,((0U != (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo_io_occupancy))));
        vcdp->fullBit(c+41,(((0x7fU & (((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_3__DOT__area_clkO_buf1) 
                                        - (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_2__DOT__area_clkO_buf1)) 
                                       - (IData)(1U))) 
                             <= (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo_io_occupancy))));
        vcdp->fullBit(c+49,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+57,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_valueNext),6);
        vcdp->fullBit(c+65,(((0x3fU == (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+73,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+81,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popping));
        vcdp->fullBit(c+89,(((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+97,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_full));
        vcdp->fullBit(c+105,(((~ (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_en)) 
                              & ((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT___zz_logic_ram_port0) 
                                 & (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core_result_valid)))));
        vcdp->fullBit(c+113,(((0x3fU == (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+121,(((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popping))));
        vcdp->fullBit(c+129,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core_result_valid));
        vcdp->fullBit(c+137,(vlTOPp->AxiLite4CyclicPrefix__DOT__writeJoinEvent_valid));
        vcdp->fullBit(c+145,(vlTOPp->AxiLite4CyclicPrefix__DOT___zz_writeJoinEvent_translated_ready));
        vcdp->fullBit(c+153,(vlTOPp->AxiLite4CyclicPrefix__DOT__writeJoinEvent_fire));
        vcdp->fullBit(c+161,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+169,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_valueNext),6);
        vcdp->fullBit(c+177,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushing));
        vcdp->fullBus(c+185,(vlTOPp->AxiLite4CyclicPrefix__DOT__readRsp_data),32);
        vcdp->fullBus(c+193,(vlTOPp->AxiLite4CyclicPrefix__DOT__axil4Ctrl_ar_rData_addr),8);
        vcdp->fullBus(c+201,(vlTOPp->AxiLite4CyclicPrefix__DOT__axil4Ctrl_ar_rData_prot),3);
        vcdp->fullBit(c+209,((1U & (~ (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT___zz_axil4Ctrl_bvalid_2)))));
        vcdp->fullBit(c+217,(vlTOPp->AxiLite4CyclicPrefix__DOT__axil4Ctrl_ar_rValid));
        vcdp->fullBit(c+225,((1U & (~ (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__axil4Ctrl_ar_rValid)))));
        vcdp->fullBus(c+233,(vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_2__DOT__area_clkO_buf1),5);
        vcdp->fullBus(c+241,(vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_3__DOT__area_clkO_buf1),7);
        vcdp->fullBit(c+249,((1U & (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT___zz_logic_ram_port0))));
        vcdp->fullBus(c+257,((0xffffU & (IData)((vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT___zz_logic_ram_port0 
                                                 >> 1U)))),16);
        vcdp->fullBus(c+265,((0xffffU & (IData)((vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT___zz_logic_ram_port0 
                                                 >> 0x11U)))),16);
        vcdp->fullBit(c+273,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_en));
        vcdp->fullBit(c+281,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__fifo_pop_en));
        vcdp->fullBus(c+289,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_state),2);
        vcdp->fullQuad(c+297,(((2U & (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_state))
                                ? ((1U & (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_state))
                                    ? VL_ULL(0x44415441202020)
                                    : VL_ULL(0x43502020202020))
                                : ((1U & (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_state))
                                    ? VL_ULL(0x43415054555245)
                                    : VL_ULL(0x49444c45202020)))),56);
        vcdp->fullBus(c+313,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_value),6);
        vcdp->fullBit(c+321,((0x3fU == (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+329,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_value),6);
        vcdp->fullBit(c+337,((0x3fU == (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+345,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+353,((0x3fU & ((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_value)))),6);
        vcdp->fullBus(c+361,(vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_2__DOT__area_clkO_buf0),5);
        vcdp->fullBus(c+369,(vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_3__DOT__area_clkO_buf0),7);
        vcdp->fullBus(c+377,(vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_2__DOT__area_clkI_reg),5);
        vcdp->fullBus(c+385,(vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_3__DOT__area_clkI_reg),7);
        vcdp->fullBus(c+393,(vlTOPp->AxiLite4CyclicPrefix__DOT_____05Fcp_len_driver),5);
        vcdp->fullBus(c+401,(vlTOPp->AxiLite4CyclicPrefix__DOT_____05Fdata_len_driver),7);
        vcdp->fullBit(c+409,(vlTOPp->axil4Ctrl_awvalid));
        vcdp->fullBit(c+417,(vlTOPp->axil4Ctrl_awready));
        vcdp->fullBus(c+425,(vlTOPp->axil4Ctrl_awaddr),8);
        vcdp->fullBus(c+433,(vlTOPp->axil4Ctrl_awprot),3);
        vcdp->fullBit(c+441,(vlTOPp->axil4Ctrl_wvalid));
        vcdp->fullBit(c+449,(vlTOPp->axil4Ctrl_wready));
        vcdp->fullBus(c+457,(vlTOPp->axil4Ctrl_wdata),32);
        vcdp->fullBus(c+465,(vlTOPp->axil4Ctrl_wstrb),4);
        vcdp->fullBit(c+473,(vlTOPp->axil4Ctrl_bvalid));
        vcdp->fullBit(c+481,(vlTOPp->axil4Ctrl_bready));
        vcdp->fullBus(c+489,(vlTOPp->axil4Ctrl_bresp),2);
        vcdp->fullBit(c+497,(vlTOPp->axil4Ctrl_arvalid));
        vcdp->fullBit(c+505,(vlTOPp->axil4Ctrl_arready));
        vcdp->fullBus(c+513,(vlTOPp->axil4Ctrl_araddr),8);
        vcdp->fullBus(c+521,(vlTOPp->axil4Ctrl_arprot),3);
        vcdp->fullBit(c+529,(vlTOPp->axil4Ctrl_rvalid));
        vcdp->fullBit(c+537,(vlTOPp->axil4Ctrl_rready));
        vcdp->fullBus(c+545,(vlTOPp->axil4Ctrl_rdata),32);
        vcdp->fullBus(c+553,(vlTOPp->axil4Ctrl_rresp),2);
        vcdp->fullBit(c+561,(vlTOPp->raw_data_valid));
        vcdp->fullBit(c+569,(vlTOPp->raw_data_ready));
        vcdp->fullBit(c+577,(vlTOPp->raw_data_payload_last));
        vcdp->fullBus(c+585,(vlTOPp->raw_data_payload_fragment_cha_i),16);
        vcdp->fullBus(c+593,(vlTOPp->raw_data_payload_fragment_cha_q),16);
        vcdp->fullBit(c+601,(vlTOPp->result_valid));
        vcdp->fullBit(c+609,(vlTOPp->result_payload_last));
        vcdp->fullBus(c+617,(vlTOPp->result_payload_fragment_cha_i),16);
        vcdp->fullBus(c+625,(vlTOPp->result_payload_fragment_cha_q),16);
        vcdp->fullBit(c+633,(vlTOPp->rf_clk));
        vcdp->fullBit(c+641,(vlTOPp->rf_resetn));
        vcdp->fullBit(c+649,(vlTOPp->clk));
        vcdp->fullBit(c+657,(vlTOPp->reset));
        vcdp->fullBus(c+665,((0xffffU & ((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_en)
                                          ? (IData)(vlTOPp->raw_data_payload_fragment_cha_i)
                                          : (IData)(
                                                    (vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT___zz_logic_ram_port0 
                                                     >> 1U))))),16);
        vcdp->fullBus(c+673,((0xffffU & ((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_en)
                                          ? (IData)(vlTOPp->raw_data_payload_fragment_cha_q)
                                          : (IData)(
                                                    (vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT___zz_logic_ram_port0 
                                                     >> 0x11U))))),16);
        vcdp->fullBit(c+681,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
                              & (IData)(vlTOPp->axil4Ctrl_rready))));
        vcdp->fullBit(c+689,(((IData)(vlTOPp->raw_data_valid) 
                              & (~ (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_full)))));
        vcdp->fullBit(c+697,(0U));
        vcdp->fullBus(c+705,(0U),2);
    }
}
