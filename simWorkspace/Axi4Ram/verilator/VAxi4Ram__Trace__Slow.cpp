// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxi4Ram__Syms.h"


//======================

void VAxi4Ram::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VAxi4Ram::traceInit, &VAxi4Ram::traceFull, &VAxi4Ram::traceChg, this);
}
void VAxi4Ram::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VAxi4Ram* t = (VAxi4Ram*)userthis;
    VAxi4Ram__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VAxi4Ram::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxi4Ram* t = (VAxi4Ram*)userthis;
    VAxi4Ram__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VAxi4Ram::traceInitThis(VAxi4Ram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VAxi4Ram::traceFullThis(VAxi4Ram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VAxi4Ram::traceInitThis__1(VAxi4Ram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+1193,"axi4_awvalid", false,-1);
        vcdp->declBit(c+1201,"axi4_awready", false,-1);
        vcdp->declBus(c+1209,"axi4_awaddr", false,-1, 12,0);
        vcdp->declBus(c+1217,"axi4_awid", false,-1, 7,0);
        vcdp->declBus(c+1225,"axi4_awlen", false,-1, 7,0);
        vcdp->declBus(c+1233,"axi4_awsize", false,-1, 2,0);
        vcdp->declBus(c+1241,"axi4_awburst", false,-1, 1,0);
        vcdp->declBit(c+1249,"axi4_wvalid", false,-1);
        vcdp->declBit(c+1257,"axi4_wready", false,-1);
        vcdp->declBus(c+1265,"axi4_wdata", false,-1, 31,0);
        vcdp->declBus(c+1273,"axi4_wstrb", false,-1, 3,0);
        vcdp->declBit(c+1281,"axi4_wlast", false,-1);
        vcdp->declBit(c+1289,"axi4_bvalid", false,-1);
        vcdp->declBit(c+1297,"axi4_bready", false,-1);
        vcdp->declBus(c+1305,"axi4_bid", false,-1, 7,0);
        vcdp->declBus(c+1313,"axi4_bresp", false,-1, 1,0);
        vcdp->declBit(c+1321,"axi4_arvalid", false,-1);
        vcdp->declBit(c+1329,"axi4_arready", false,-1);
        vcdp->declBus(c+1337,"axi4_araddr", false,-1, 12,0);
        vcdp->declBus(c+1345,"axi4_arid", false,-1, 7,0);
        vcdp->declBus(c+1353,"axi4_arlen", false,-1, 7,0);
        vcdp->declBus(c+1361,"axi4_arsize", false,-1, 2,0);
        vcdp->declBus(c+1369,"axi4_arburst", false,-1, 1,0);
        vcdp->declBit(c+1377,"axi4_rvalid", false,-1);
        vcdp->declBit(c+1385,"axi4_rready", false,-1);
        vcdp->declBus(c+1393,"axi4_rdata", false,-1, 31,0);
        vcdp->declBus(c+1401,"axi4_rid", false,-1, 7,0);
        vcdp->declBus(c+1409,"axi4_rresp", false,-1, 1,0);
        vcdp->declBit(c+1417,"axi4_rlast", false,-1);
        vcdp->declBit(c+1425,"clk", false,-1);
        vcdp->declBit(c+1433,"reset", false,-1);
        vcdp->declBit(c+1193,"Axi4Ram axi4_awvalid", false,-1);
        vcdp->declBit(c+1201,"Axi4Ram axi4_awready", false,-1);
        vcdp->declBus(c+1209,"Axi4Ram axi4_awaddr", false,-1, 12,0);
        vcdp->declBus(c+1217,"Axi4Ram axi4_awid", false,-1, 7,0);
        vcdp->declBus(c+1225,"Axi4Ram axi4_awlen", false,-1, 7,0);
        vcdp->declBus(c+1233,"Axi4Ram axi4_awsize", false,-1, 2,0);
        vcdp->declBus(c+1241,"Axi4Ram axi4_awburst", false,-1, 1,0);
        vcdp->declBit(c+1249,"Axi4Ram axi4_wvalid", false,-1);
        vcdp->declBit(c+1257,"Axi4Ram axi4_wready", false,-1);
        vcdp->declBus(c+1265,"Axi4Ram axi4_wdata", false,-1, 31,0);
        vcdp->declBus(c+1273,"Axi4Ram axi4_wstrb", false,-1, 3,0);
        vcdp->declBit(c+1281,"Axi4Ram axi4_wlast", false,-1);
        vcdp->declBit(c+1289,"Axi4Ram axi4_bvalid", false,-1);
        vcdp->declBit(c+1297,"Axi4Ram axi4_bready", false,-1);
        vcdp->declBus(c+1305,"Axi4Ram axi4_bid", false,-1, 7,0);
        vcdp->declBus(c+1313,"Axi4Ram axi4_bresp", false,-1, 1,0);
        vcdp->declBit(c+1321,"Axi4Ram axi4_arvalid", false,-1);
        vcdp->declBit(c+1329,"Axi4Ram axi4_arready", false,-1);
        vcdp->declBus(c+1337,"Axi4Ram axi4_araddr", false,-1, 12,0);
        vcdp->declBus(c+1345,"Axi4Ram axi4_arid", false,-1, 7,0);
        vcdp->declBus(c+1353,"Axi4Ram axi4_arlen", false,-1, 7,0);
        vcdp->declBus(c+1361,"Axi4Ram axi4_arsize", false,-1, 2,0);
        vcdp->declBus(c+1369,"Axi4Ram axi4_arburst", false,-1, 1,0);
        vcdp->declBit(c+1377,"Axi4Ram axi4_rvalid", false,-1);
        vcdp->declBit(c+1385,"Axi4Ram axi4_rready", false,-1);
        vcdp->declBus(c+1393,"Axi4Ram axi4_rdata", false,-1, 31,0);
        vcdp->declBus(c+1401,"Axi4Ram axi4_rid", false,-1, 7,0);
        vcdp->declBus(c+1409,"Axi4Ram axi4_rresp", false,-1, 1,0);
        vcdp->declBit(c+1417,"Axi4Ram axi4_rlast", false,-1);
        vcdp->declBit(c+1425,"Axi4Ram clk", false,-1);
        vcdp->declBit(c+1433,"Axi4Ram reset", false,-1);
        vcdp->declBit(c+905,"Axi4Ram ar_fifo_io_pop_ready", false,-1);
        vcdp->declBit(c+913,"Axi4Ram aw_fifo_io_pop_ready", false,-1);
        vcdp->declBus(c+529,"Axi4Ram r_fifo_io_push_payload_data", false,-1, 31,0);
        vcdp->declBit(c+1,"Axi4Ram ar_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+9,"Axi4Ram ar_fifo_io_pop_valid", false,-1);
        vcdp->declBus(c+537,"Axi4Ram ar_fifo_io_pop_payload_addr", false,-1, 12,0);
        vcdp->declBus(c+545,"Axi4Ram ar_fifo_io_pop_payload_id", false,-1, 7,0);
        vcdp->declBus(c+553,"Axi4Ram ar_fifo_io_pop_payload_len", false,-1, 7,0);
        vcdp->declBus(c+561,"Axi4Ram ar_fifo_io_pop_payload_size", false,-1, 2,0);
        vcdp->declBus(c+569,"Axi4Ram ar_fifo_io_pop_payload_burst", false,-1, 1,0);
        vcdp->declBus(c+17,"Axi4Ram ar_fifo_io_occupancy", false,-1, 2,0);
        vcdp->declBus(c+25,"Axi4Ram ar_fifo_io_availability", false,-1, 2,0);
        vcdp->declBit(c+33,"Axi4Ram aw_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+41,"Axi4Ram aw_fifo_io_pop_valid", false,-1);
        vcdp->declBus(c+577,"Axi4Ram aw_fifo_io_pop_payload_addr", false,-1, 12,0);
        vcdp->declBus(c+585,"Axi4Ram aw_fifo_io_pop_payload_id", false,-1, 7,0);
        vcdp->declBus(c+593,"Axi4Ram aw_fifo_io_pop_payload_len", false,-1, 7,0);
        vcdp->declBus(c+601,"Axi4Ram aw_fifo_io_pop_payload_size", false,-1, 2,0);
        vcdp->declBus(c+609,"Axi4Ram aw_fifo_io_pop_payload_burst", false,-1, 1,0);
        vcdp->declBus(c+49,"Axi4Ram aw_fifo_io_occupancy", false,-1, 2,0);
        vcdp->declBus(c+57,"Axi4Ram aw_fifo_io_availability", false,-1, 2,0);
        vcdp->declBit(c+65,"Axi4Ram b_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+73,"Axi4Ram b_fifo_io_pop_valid", false,-1);
        vcdp->declBus(c+617,"Axi4Ram b_fifo_io_pop_payload_id", false,-1, 7,0);
        vcdp->declBus(c+625,"Axi4Ram b_fifo_io_pop_payload_resp", false,-1, 1,0);
        vcdp->declBus(c+81,"Axi4Ram b_fifo_io_occupancy", false,-1, 2,0);
        vcdp->declBus(c+89,"Axi4Ram b_fifo_io_availability", false,-1, 2,0);
        vcdp->declBit(c+97,"Axi4Ram r_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+105,"Axi4Ram r_fifo_io_pop_valid", false,-1);
        vcdp->declBus(c+633,"Axi4Ram r_fifo_io_pop_payload_data", false,-1, 31,0);
        vcdp->declBus(c+641,"Axi4Ram r_fifo_io_pop_payload_id", false,-1, 7,0);
        vcdp->declBus(c+649,"Axi4Ram r_fifo_io_pop_payload_resp", false,-1, 1,0);
        vcdp->declBit(c+657,"Axi4Ram r_fifo_io_pop_payload_last", false,-1);
        vcdp->declBus(c+113,"Axi4Ram r_fifo_io_occupancy", false,-1, 8,0);
        vcdp->declBus(c+121,"Axi4Ram r_fifo_io_availability", false,-1, 8,0);
        vcdp->declBus(c+921,"Axi4Ram axi4_r_state", false,-1, 1,0);
        vcdp->declBus(c+1169,"Axi4Ram rd_cnt", false,-1, 7,0);
        vcdp->declBus(c+665,"Axi4Ram rd_addr", false,-1, 12,0);
        vcdp->declBus(c+673,"Axi4Ram rd_id", false,-1, 7,0);
        vcdp->declBus(c+681,"Axi4Ram rd_size", false,-1, 2,0);
        vcdp->declBus(c+689,"Axi4Ram rd_burst", false,-1, 1,0);
        vcdp->declBit(c+1177,"Axi4Ram when_Axi4Ram_l111", false,-1);
        vcdp->declBus(c+929,"Axi4Ram axi4_w_state", false,-1, 1,0);
        vcdp->declBus(c+697,"Axi4Ram wr_addr", false,-1, 12,0);
        vcdp->declBit(c+417,"Axi4Ram axi4_w_fire", false,-1);
        vcdp->declBus(c+1185,"Axi4Ram wr_cnt", false,-1, 7,0);
        vcdp->declBit(c+1441,"Axi4Ram axi4_w_fire_1", false,-1);
        vcdp->declBit(c+1449,"Axi4Ram when_Axi4Ram_l148", false,-1);
        vcdp->declBus(c+705,"Axi4Ram wr_size", false,-1, 2,0);
        vcdp->declBus(c+713,"Axi4Ram wr_burst", false,-1, 1,0);
        vcdp->declBit(c+937,"Axi4Ram b_valid", false,-1);
        vcdp->declBus(c+721,"Axi4Ram b_id", false,-1, 7,0);
        vcdp->declBit(c+425,"Axi4Ram axi4_w_fire_2", false,-1);
        vcdp->declQuad(c+945,"Axi4Ram axi4_r_state_string", false,-1, 39,0);
        vcdp->declQuad(c+961,"Axi4Ram axi4_w_state_string", false,-1, 39,0);
        vcdp->declBit(c+1321,"Axi4Ram ar_fifo io_push_valid", false,-1);
        vcdp->declBit(c+1,"Axi4Ram ar_fifo io_push_ready", false,-1);
        vcdp->declBus(c+1337,"Axi4Ram ar_fifo io_push_payload_addr", false,-1, 12,0);
        vcdp->declBus(c+1345,"Axi4Ram ar_fifo io_push_payload_id", false,-1, 7,0);
        vcdp->declBus(c+1353,"Axi4Ram ar_fifo io_push_payload_len", false,-1, 7,0);
        vcdp->declBus(c+1361,"Axi4Ram ar_fifo io_push_payload_size", false,-1, 2,0);
        vcdp->declBus(c+1369,"Axi4Ram ar_fifo io_push_payload_burst", false,-1, 1,0);
        vcdp->declBit(c+9,"Axi4Ram ar_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+905,"Axi4Ram ar_fifo io_pop_ready", false,-1);
        vcdp->declBus(c+537,"Axi4Ram ar_fifo io_pop_payload_addr", false,-1, 12,0);
        vcdp->declBus(c+545,"Axi4Ram ar_fifo io_pop_payload_id", false,-1, 7,0);
        vcdp->declBus(c+553,"Axi4Ram ar_fifo io_pop_payload_len", false,-1, 7,0);
        vcdp->declBus(c+561,"Axi4Ram ar_fifo io_pop_payload_size", false,-1, 2,0);
        vcdp->declBus(c+569,"Axi4Ram ar_fifo io_pop_payload_burst", false,-1, 1,0);
        vcdp->declBit(c+1457,"Axi4Ram ar_fifo io_flush", false,-1);
        vcdp->declBus(c+17,"Axi4Ram ar_fifo io_occupancy", false,-1, 2,0);
        vcdp->declBus(c+25,"Axi4Ram ar_fifo io_availability", false,-1, 2,0);
        vcdp->declBit(c+1425,"Axi4Ram ar_fifo clk", false,-1);
        vcdp->declBit(c+1433,"Axi4Ram ar_fifo reset", false,-1);
        vcdp->declBit(c+433,"Axi4Ram ar_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+1457,"Axi4Ram ar_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+441,"Axi4Ram ar_fifo logic_pushPtr_valueNext", false,-1, 1,0);
        vcdp->declBus(c+977,"Axi4Ram ar_fifo logic_pushPtr_value", false,-1, 1,0);
        vcdp->declBit(c+985,"Axi4Ram ar_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+353,"Axi4Ram ar_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+129,"Axi4Ram ar_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+1457,"Axi4Ram ar_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+137,"Axi4Ram ar_fifo logic_popPtr_valueNext", false,-1, 1,0);
        vcdp->declBus(c+993,"Axi4Ram ar_fifo logic_popPtr_value", false,-1, 1,0);
        vcdp->declBit(c+1001,"Axi4Ram ar_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+145,"Axi4Ram ar_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+153,"Axi4Ram ar_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+1009,"Axi4Ram ar_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+449,"Axi4Ram ar_fifo logic_pushing", false,-1);
        vcdp->declBit(c+161,"Axi4Ram ar_fifo logic_popping", false,-1);
        vcdp->declBit(c+169,"Axi4Ram ar_fifo logic_empty", false,-1);
        vcdp->declBit(c+177,"Axi4Ram ar_fifo logic_full", false,-1);
        vcdp->declBit(c+361,"Axi4Ram ar_fifo when_Stream_l933", false,-1);
        vcdp->declBus(c+1017,"Axi4Ram ar_fifo logic_ptrDif", false,-1, 1,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declQuad(c+729+i*2,"Axi4Ram ar_fifo logic_ram", true,(i+0), 33,0);}}
        vcdp->declBit(c+1193,"Axi4Ram aw_fifo io_push_valid", false,-1);
        vcdp->declBit(c+33,"Axi4Ram aw_fifo io_push_ready", false,-1);
        vcdp->declBus(c+1209,"Axi4Ram aw_fifo io_push_payload_addr", false,-1, 12,0);
        vcdp->declBus(c+1217,"Axi4Ram aw_fifo io_push_payload_id", false,-1, 7,0);
        vcdp->declBus(c+1225,"Axi4Ram aw_fifo io_push_payload_len", false,-1, 7,0);
        vcdp->declBus(c+1233,"Axi4Ram aw_fifo io_push_payload_size", false,-1, 2,0);
        vcdp->declBus(c+1241,"Axi4Ram aw_fifo io_push_payload_burst", false,-1, 1,0);
        vcdp->declBit(c+41,"Axi4Ram aw_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+913,"Axi4Ram aw_fifo io_pop_ready", false,-1);
        vcdp->declBus(c+577,"Axi4Ram aw_fifo io_pop_payload_addr", false,-1, 12,0);
        vcdp->declBus(c+585,"Axi4Ram aw_fifo io_pop_payload_id", false,-1, 7,0);
        vcdp->declBus(c+593,"Axi4Ram aw_fifo io_pop_payload_len", false,-1, 7,0);
        vcdp->declBus(c+601,"Axi4Ram aw_fifo io_pop_payload_size", false,-1, 2,0);
        vcdp->declBus(c+609,"Axi4Ram aw_fifo io_pop_payload_burst", false,-1, 1,0);
        vcdp->declBit(c+1457,"Axi4Ram aw_fifo io_flush", false,-1);
        vcdp->declBus(c+49,"Axi4Ram aw_fifo io_occupancy", false,-1, 2,0);
        vcdp->declBus(c+57,"Axi4Ram aw_fifo io_availability", false,-1, 2,0);
        vcdp->declBit(c+1425,"Axi4Ram aw_fifo clk", false,-1);
        vcdp->declBit(c+1433,"Axi4Ram aw_fifo reset", false,-1);
        vcdp->declBit(c+457,"Axi4Ram aw_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+1457,"Axi4Ram aw_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+465,"Axi4Ram aw_fifo logic_pushPtr_valueNext", false,-1, 1,0);
        vcdp->declBus(c+1025,"Axi4Ram aw_fifo logic_pushPtr_value", false,-1, 1,0);
        vcdp->declBit(c+1033,"Axi4Ram aw_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+369,"Axi4Ram aw_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+185,"Axi4Ram aw_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+1457,"Axi4Ram aw_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+193,"Axi4Ram aw_fifo logic_popPtr_valueNext", false,-1, 1,0);
        vcdp->declBus(c+1041,"Axi4Ram aw_fifo logic_popPtr_value", false,-1, 1,0);
        vcdp->declBit(c+1049,"Axi4Ram aw_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+201,"Axi4Ram aw_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+209,"Axi4Ram aw_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+1057,"Axi4Ram aw_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+473,"Axi4Ram aw_fifo logic_pushing", false,-1);
        vcdp->declBit(c+217,"Axi4Ram aw_fifo logic_popping", false,-1);
        vcdp->declBit(c+225,"Axi4Ram aw_fifo logic_empty", false,-1);
        vcdp->declBit(c+233,"Axi4Ram aw_fifo logic_full", false,-1);
        vcdp->declBit(c+377,"Axi4Ram aw_fifo when_Stream_l933", false,-1);
        vcdp->declBus(c+1065,"Axi4Ram aw_fifo logic_ptrDif", false,-1, 1,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declQuad(c+793+i*2,"Axi4Ram aw_fifo logic_ram", true,(i+0), 33,0);}}
        vcdp->declBit(c+937,"Axi4Ram b_fifo io_push_valid", false,-1);
        vcdp->declBit(c+65,"Axi4Ram b_fifo io_push_ready", false,-1);
        vcdp->declBus(c+721,"Axi4Ram b_fifo io_push_payload_id", false,-1, 7,0);
        vcdp->declBus(c+1465,"Axi4Ram b_fifo io_push_payload_resp", false,-1, 1,0);
        vcdp->declBit(c+73,"Axi4Ram b_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+1297,"Axi4Ram b_fifo io_pop_ready", false,-1);
        vcdp->declBus(c+617,"Axi4Ram b_fifo io_pop_payload_id", false,-1, 7,0);
        vcdp->declBus(c+625,"Axi4Ram b_fifo io_pop_payload_resp", false,-1, 1,0);
        vcdp->declBit(c+1457,"Axi4Ram b_fifo io_flush", false,-1);
        vcdp->declBus(c+81,"Axi4Ram b_fifo io_occupancy", false,-1, 2,0);
        vcdp->declBus(c+89,"Axi4Ram b_fifo io_availability", false,-1, 2,0);
        vcdp->declBit(c+1425,"Axi4Ram b_fifo clk", false,-1);
        vcdp->declBit(c+1433,"Axi4Ram b_fifo reset", false,-1);
        vcdp->declBit(c+241,"Axi4Ram b_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+1457,"Axi4Ram b_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+249,"Axi4Ram b_fifo logic_pushPtr_valueNext", false,-1, 1,0);
        vcdp->declBus(c+1073,"Axi4Ram b_fifo logic_pushPtr_value", false,-1, 1,0);
        vcdp->declBit(c+1081,"Axi4Ram b_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+257,"Axi4Ram b_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+481,"Axi4Ram b_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+1457,"Axi4Ram b_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+489,"Axi4Ram b_fifo logic_popPtr_valueNext", false,-1, 1,0);
        vcdp->declBus(c+1089,"Axi4Ram b_fifo logic_popPtr_value", false,-1, 1,0);
        vcdp->declBit(c+1097,"Axi4Ram b_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+385,"Axi4Ram b_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+265,"Axi4Ram b_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+1105,"Axi4Ram b_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+273,"Axi4Ram b_fifo logic_pushing", false,-1);
        vcdp->declBit(c+497,"Axi4Ram b_fifo logic_popping", false,-1);
        vcdp->declBit(c+281,"Axi4Ram b_fifo logic_empty", false,-1);
        vcdp->declBit(c+289,"Axi4Ram b_fifo logic_full", false,-1);
        vcdp->declBit(c+393,"Axi4Ram b_fifo when_Stream_l933", false,-1);
        vcdp->declBus(c+1113,"Axi4Ram b_fifo logic_ptrDif", false,-1, 1,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+857+i*1,"Axi4Ram b_fifo logic_ram", true,(i+0), 9,0);}}
        vcdp->declBit(c+889,"Axi4Ram r_fifo io_push_valid", false,-1);
        vcdp->declBit(c+97,"Axi4Ram r_fifo io_push_ready", false,-1);
        vcdp->declBus(c+529,"Axi4Ram r_fifo io_push_payload_data", false,-1, 31,0);
        vcdp->declBus(c+673,"Axi4Ram r_fifo io_push_payload_id", false,-1, 7,0);
        vcdp->declBus(c+1465,"Axi4Ram r_fifo io_push_payload_resp", false,-1, 1,0);
        vcdp->declBit(c+897,"Axi4Ram r_fifo io_push_payload_last", false,-1);
        vcdp->declBit(c+105,"Axi4Ram r_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+1385,"Axi4Ram r_fifo io_pop_ready", false,-1);
        vcdp->declBus(c+633,"Axi4Ram r_fifo io_pop_payload_data", false,-1, 31,0);
        vcdp->declBus(c+641,"Axi4Ram r_fifo io_pop_payload_id", false,-1, 7,0);
        vcdp->declBus(c+649,"Axi4Ram r_fifo io_pop_payload_resp", false,-1, 1,0);
        vcdp->declBit(c+657,"Axi4Ram r_fifo io_pop_payload_last", false,-1);
        vcdp->declBit(c+1457,"Axi4Ram r_fifo io_flush", false,-1);
        vcdp->declBus(c+113,"Axi4Ram r_fifo io_occupancy", false,-1, 8,0);
        vcdp->declBus(c+121,"Axi4Ram r_fifo io_availability", false,-1, 8,0);
        vcdp->declBit(c+1425,"Axi4Ram r_fifo clk", false,-1);
        vcdp->declBit(c+1433,"Axi4Ram r_fifo reset", false,-1);
        vcdp->declBit(c+297,"Axi4Ram r_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+1457,"Axi4Ram r_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+305,"Axi4Ram r_fifo logic_pushPtr_valueNext", false,-1, 7,0);
        vcdp->declBus(c+1121,"Axi4Ram r_fifo logic_pushPtr_value", false,-1, 7,0);
        vcdp->declBit(c+1129,"Axi4Ram r_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+313,"Axi4Ram r_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+505,"Axi4Ram r_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+1457,"Axi4Ram r_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+513,"Axi4Ram r_fifo logic_popPtr_valueNext", false,-1, 7,0);
        vcdp->declBus(c+1137,"Axi4Ram r_fifo logic_popPtr_value", false,-1, 7,0);
        vcdp->declBit(c+1145,"Axi4Ram r_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+401,"Axi4Ram r_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+321,"Axi4Ram r_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+1153,"Axi4Ram r_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+329,"Axi4Ram r_fifo logic_pushing", false,-1);
        vcdp->declBit(c+521,"Axi4Ram r_fifo logic_popping", false,-1);
        vcdp->declBit(c+337,"Axi4Ram r_fifo logic_empty", false,-1);
        vcdp->declBit(c+345,"Axi4Ram r_fifo logic_full", false,-1);
        vcdp->declBit(c+409,"Axi4Ram r_fifo when_Stream_l933", false,-1);
        vcdp->declBus(c+1161,"Axi4Ram r_fifo logic_ptrDif", false,-1, 7,0);
    }
}

void VAxi4Ram::traceFullThis__1(VAxi4Ram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,((1U & (~ (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+9,(vlTOPp->Axi4Ram__DOT__ar_fifo_io_pop_valid));
        vcdp->fullBus(c+17,(((((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_ptrMatch)) 
                              << 2U) | (3U & ((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_value) 
                                              - (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_value))))),3);
        vcdp->fullBus(c+25,(((((~ (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_ptrMatch)) 
                              << 2U) | (3U & ((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_value) 
                                              - (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_value))))),3);
        vcdp->fullBit(c+33,((1U & (~ (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+41,(vlTOPp->Axi4Ram__DOT__aw_fifo_io_pop_valid));
        vcdp->fullBus(c+49,(((((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_ptrMatch)) 
                              << 2U) | (3U & ((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_value) 
                                              - (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_value))))),3);
        vcdp->fullBus(c+57,(((((~ (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_ptrMatch)) 
                              << 2U) | (3U & ((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_value) 
                                              - (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_value))))),3);
        vcdp->fullBit(c+65,((1U & (~ (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+73,(vlTOPp->Axi4Ram__DOT__b_fifo_io_pop_valid));
        vcdp->fullBus(c+81,(((((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_ptrMatch)) 
                              << 2U) | (3U & ((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_value) 
                                              - (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_value))))),3);
        vcdp->fullBus(c+89,(((((~ (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_ptrMatch)) 
                              << 2U) | (3U & ((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_value) 
                                              - (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_value))))),3);
        vcdp->fullBit(c+97,((1U & (~ (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+105,(vlTOPp->Axi4Ram__DOT__r_fifo_io_pop_valid));
        vcdp->fullBus(c+113,(((((IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_risingOccupancy) 
                                & (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_ptrMatch)) 
                               << 8U) | (0xffU & ((IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_value) 
                                                  - (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_value))))),9);
        vcdp->fullBus(c+121,(((((~ (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_risingOccupancy)) 
                                & (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_ptrMatch)) 
                               << 8U) | (0xffU & ((IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_value) 
                                                  - (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_value))))),9);
        vcdp->fullBit(c+129,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+137,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_valueNext),2);
        vcdp->fullBit(c+145,(((3U == (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+153,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+161,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popping));
        vcdp->fullBit(c+169,(((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+177,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_full));
        vcdp->fullBit(c+185,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+193,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_valueNext),2);
        vcdp->fullBit(c+201,(((3U == (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+209,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+217,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popping));
        vcdp->fullBit(c+225,(((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+233,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_full));
        vcdp->fullBit(c+241,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+249,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_valueNext),2);
        vcdp->fullBit(c+257,(((3U == (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+265,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+273,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushing));
        vcdp->fullBit(c+281,(((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+289,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_full));
        vcdp->fullBit(c+297,(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+305,(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_valueNext),8);
        vcdp->fullBit(c+313,(((0xffU == (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+321,(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+329,(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushing));
        vcdp->fullBit(c+337,(((IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+345,(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_full));
        vcdp->fullBit(c+353,(((3U == (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+361,(((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popping))));
        vcdp->fullBit(c+369,(((3U == (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+377,(((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popping))));
        vcdp->fullBit(c+385,(((3U == (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+393,(((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popping))));
        vcdp->fullBit(c+401,(((0xffU == (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+409,(((IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popping))));
        vcdp->fullBit(c+417,(vlTOPp->Axi4Ram__DOT__axi4_w_fire));
        vcdp->fullBit(c+425,(vlTOPp->Axi4Ram__DOT__axi4_w_fire_2));
        vcdp->fullBit(c+433,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+441,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_valueNext),2);
        vcdp->fullBit(c+449,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushing));
        vcdp->fullBit(c+457,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+465,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_valueNext),2);
        vcdp->fullBit(c+473,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushing));
        vcdp->fullBit(c+481,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+489,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_valueNext),2);
        vcdp->fullBit(c+497,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popping));
        vcdp->fullBit(c+505,(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+513,(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_valueNext),8);
        vcdp->fullBit(c+521,(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popping));
        vcdp->fullBus(c+529,((((IData)(vlTOPp->Axi4Ram__DOT___zz_ramsymbol_read_3) 
                               << 0x18U) | (((IData)(vlTOPp->Axi4Ram__DOT___zz_ramsymbol_read_2) 
                                             << 0x10U) 
                                            | (((IData)(vlTOPp->Axi4Ram__DOT___zz_ramsymbol_read_1) 
                                                << 8U) 
                                               | (IData)(vlTOPp->Axi4Ram__DOT___zz_ramsymbol_read))))),32);
        vcdp->fullBus(c+537,((0x1fffU & (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT___zz_logic_ram_port0))),13);
        vcdp->fullBus(c+545,((0xffU & (IData)((vlTOPp->Axi4Ram__DOT__ar_fifo__DOT___zz_logic_ram_port0 
                                               >> 0xdU)))),8);
        vcdp->fullBus(c+553,((0xffU & (IData)((vlTOPp->Axi4Ram__DOT__ar_fifo__DOT___zz_logic_ram_port0 
                                               >> 0x15U)))),8);
        vcdp->fullBus(c+561,((7U & (IData)((vlTOPp->Axi4Ram__DOT__ar_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x1dU)))),3);
        vcdp->fullBus(c+569,((3U & (IData)((vlTOPp->Axi4Ram__DOT__ar_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x20U)))),2);
        vcdp->fullBus(c+577,((0x1fffU & (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT___zz_logic_ram_port0))),13);
        vcdp->fullBus(c+585,((0xffU & (IData)((vlTOPp->Axi4Ram__DOT__aw_fifo__DOT___zz_logic_ram_port0 
                                               >> 0xdU)))),8);
        vcdp->fullBus(c+593,((0xffU & (IData)((vlTOPp->Axi4Ram__DOT__aw_fifo__DOT___zz_logic_ram_port0 
                                               >> 0x15U)))),8);
        vcdp->fullBus(c+601,((7U & (IData)((vlTOPp->Axi4Ram__DOT__aw_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x1dU)))),3);
        vcdp->fullBus(c+609,((3U & (IData)((vlTOPp->Axi4Ram__DOT__aw_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x20U)))),2);
        vcdp->fullBus(c+617,((0xffU & (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT___zz_logic_ram_port0))),8);
        vcdp->fullBus(c+625,((3U & ((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT___zz_logic_ram_port0) 
                                    >> 8U))),2);
        vcdp->fullBus(c+633,((IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->fullBus(c+641,((0xffU & (IData)((vlTOPp->Axi4Ram__DOT__r_fifo__DOT___zz_logic_ram_port0 
                                               >> 0x20U)))),8);
        vcdp->fullBus(c+649,((3U & (IData)((vlTOPp->Axi4Ram__DOT__r_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x28U)))),2);
        vcdp->fullBit(c+657,((1U & (IData)((vlTOPp->Axi4Ram__DOT__r_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2aU)))));
        vcdp->fullBus(c+665,(vlTOPp->Axi4Ram__DOT__rd_addr),13);
        vcdp->fullBus(c+673,(vlTOPp->Axi4Ram__DOT__rd_id),8);
        vcdp->fullBus(c+681,(vlTOPp->Axi4Ram__DOT__rd_size),3);
        vcdp->fullBus(c+689,(vlTOPp->Axi4Ram__DOT__rd_burst),2);
        vcdp->fullBus(c+697,(vlTOPp->Axi4Ram__DOT__wr_addr),13);
        vcdp->fullBus(c+705,(vlTOPp->Axi4Ram__DOT__wr_size),3);
        vcdp->fullBus(c+713,(vlTOPp->Axi4Ram__DOT__wr_burst),2);
        vcdp->fullBus(c+721,(vlTOPp->Axi4Ram__DOT__b_id),8);
        vcdp->fullQuad(c+729,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_ram[0]),34);
        vcdp->fullQuad(c+731,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_ram[1]),34);
        vcdp->fullQuad(c+733,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_ram[2]),34);
        vcdp->fullQuad(c+735,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_ram[3]),34);
        vcdp->fullQuad(c+793,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_ram[0]),34);
        vcdp->fullQuad(c+795,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_ram[1]),34);
        vcdp->fullQuad(c+797,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_ram[2]),34);
        vcdp->fullQuad(c+799,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_ram[3]),34);
        vcdp->fullBus(c+857,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_ram[0]),10);
        vcdp->fullBus(c+858,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_ram[1]),10);
        vcdp->fullBus(c+859,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_ram[2]),10);
        vcdp->fullBus(c+860,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_ram[3]),10);
        vcdp->fullBit(c+889,(vlTOPp->Axi4Ram__DOT___zz_io_push_valid));
        vcdp->fullBit(c+897,(vlTOPp->Axi4Ram__DOT___zz_io_push_payload_last));
        vcdp->fullBit(c+905,((0U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_r_state))));
        vcdp->fullBit(c+913,((0U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_state))));
        vcdp->fullBus(c+921,(vlTOPp->Axi4Ram__DOT__axi4_r_state),2);
        vcdp->fullBus(c+929,(vlTOPp->Axi4Ram__DOT__axi4_w_state),2);
        vcdp->fullBit(c+937,(vlTOPp->Axi4Ram__DOT__b_valid));
        vcdp->fullQuad(c+945,(((0U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_r_state))
                                ? VL_ULL(0x49444c4520)
                                : ((1U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_r_state))
                                    ? VL_ULL(0x4255525354)
                                    : ((2U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_r_state))
                                        ? VL_ULL(0x5245535020)
                                        : VL_ULL(0x3f3f3f3f3f))))),40);
        vcdp->fullQuad(c+961,(((0U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_state))
                                ? VL_ULL(0x49444c4520)
                                : ((1U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_state))
                                    ? VL_ULL(0x4255525354)
                                    : ((2U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_state))
                                        ? VL_ULL(0x5245535020)
                                        : VL_ULL(0x3f3f3f3f3f))))),40);
        vcdp->fullBus(c+977,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_value),2);
        vcdp->fullBit(c+985,((3U == (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+993,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_value),2);
        vcdp->fullBit(c+1001,((3U == (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+1009,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+1017,((3U & ((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_value) 
                                     - (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_value)))),2);
        vcdp->fullBus(c+1025,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_value),2);
        vcdp->fullBit(c+1033,((3U == (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+1041,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_value),2);
        vcdp->fullBit(c+1049,((3U == (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+1057,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+1065,((3U & ((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_value) 
                                     - (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_value)))),2);
        vcdp->fullBus(c+1073,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_value),2);
        vcdp->fullBit(c+1081,((3U == (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+1089,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_value),2);
        vcdp->fullBit(c+1097,((3U == (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+1105,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+1113,((3U & ((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_value) 
                                     - (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_value)))),2);
        vcdp->fullBus(c+1121,(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_value),8);
        vcdp->fullBit(c+1129,((0xffU == (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+1137,(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_value),8);
        vcdp->fullBit(c+1145,((0xffU == (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+1153,(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+1161,((0xffU & ((IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_value) 
                                        - (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_value)))),8);
        vcdp->fullBus(c+1169,(vlTOPp->Axi4Ram__DOT__rd_cnt),8);
        vcdp->fullBit(c+1177,((0U == (IData)(vlTOPp->Axi4Ram__DOT__rd_cnt))));
        vcdp->fullBus(c+1185,(vlTOPp->Axi4Ram__DOT__wr_cnt),8);
        vcdp->fullBit(c+1193,(vlTOPp->axi4_awvalid));
        vcdp->fullBit(c+1201,(vlTOPp->axi4_awready));
        vcdp->fullBus(c+1209,(vlTOPp->axi4_awaddr),13);
        vcdp->fullBus(c+1217,(vlTOPp->axi4_awid),8);
        vcdp->fullBus(c+1225,(vlTOPp->axi4_awlen),8);
        vcdp->fullBus(c+1233,(vlTOPp->axi4_awsize),3);
        vcdp->fullBus(c+1241,(vlTOPp->axi4_awburst),2);
        vcdp->fullBit(c+1249,(vlTOPp->axi4_wvalid));
        vcdp->fullBit(c+1257,(vlTOPp->axi4_wready));
        vcdp->fullBus(c+1265,(vlTOPp->axi4_wdata),32);
    }
}

void VAxi4Ram::traceFullThis__9(VAxi4Ram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1273,(vlTOPp->axi4_wstrb),4);
        vcdp->fullBit(c+1281,(vlTOPp->axi4_wlast));
        vcdp->fullBit(c+1289,(vlTOPp->axi4_bvalid));
        vcdp->fullBit(c+1297,(vlTOPp->axi4_bready));
        vcdp->fullBus(c+1305,(vlTOPp->axi4_bid),8);
        vcdp->fullBus(c+1313,(vlTOPp->axi4_bresp),2);
        vcdp->fullBit(c+1321,(vlTOPp->axi4_arvalid));
        vcdp->fullBit(c+1329,(vlTOPp->axi4_arready));
        vcdp->fullBus(c+1337,(vlTOPp->axi4_araddr),13);
        vcdp->fullBus(c+1345,(vlTOPp->axi4_arid),8);
        vcdp->fullBus(c+1353,(vlTOPp->axi4_arlen),8);
        vcdp->fullBus(c+1361,(vlTOPp->axi4_arsize),3);
        vcdp->fullBus(c+1369,(vlTOPp->axi4_arburst),2);
        vcdp->fullBit(c+1377,(vlTOPp->axi4_rvalid));
        vcdp->fullBit(c+1385,(vlTOPp->axi4_rready));
        vcdp->fullBus(c+1393,(vlTOPp->axi4_rdata),32);
        vcdp->fullBus(c+1401,(vlTOPp->axi4_rid),8);
        vcdp->fullBus(c+1409,(vlTOPp->axi4_rresp),2);
        vcdp->fullBit(c+1417,(vlTOPp->axi4_rlast));
        vcdp->fullBit(c+1425,(vlTOPp->clk));
        vcdp->fullBit(c+1433,(vlTOPp->reset));
        vcdp->fullBit(c+1441,(((IData)(vlTOPp->axi4_wvalid) 
                               & (IData)(vlTOPp->axi4_wready))));
        vcdp->fullBit(c+1449,(((0U == (IData)(vlTOPp->Axi4Ram__DOT__wr_cnt)) 
                               & ((IData)(vlTOPp->axi4_wvalid) 
                                  & (IData)(vlTOPp->axi4_wready)))));
        vcdp->fullBit(c+1457,(0U));
        vcdp->fullBus(c+1465,(0U),2);
    }
}
