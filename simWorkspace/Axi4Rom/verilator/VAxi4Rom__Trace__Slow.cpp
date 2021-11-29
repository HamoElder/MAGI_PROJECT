// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxi4Rom__Syms.h"


//======================

void VAxi4Rom::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VAxi4Rom::traceInit, &VAxi4Rom::traceFull, &VAxi4Rom::traceChg, this);
}
void VAxi4Rom::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VAxi4Rom* t = (VAxi4Rom*)userthis;
    VAxi4Rom__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VAxi4Rom::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxi4Rom* t = (VAxi4Rom*)userthis;
    VAxi4Rom__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VAxi4Rom::traceInitThis(VAxi4Rom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VAxi4Rom::traceFullThis(VAxi4Rom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAxi4Rom::traceInitThis__1(VAxi4Rom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+657,"axi4_arvalid", false,-1);
        vcdp->declBit(c+665,"axi4_arready", false,-1);
        vcdp->declBus(c+673,"axi4_araddr", false,-1, 12,0);
        vcdp->declBus(c+681,"axi4_arid", false,-1, 7,0);
        vcdp->declBus(c+689,"axi4_arlen", false,-1, 7,0);
        vcdp->declBus(c+697,"axi4_arsize", false,-1, 2,0);
        vcdp->declBus(c+705,"axi4_arburst", false,-1, 1,0);
        vcdp->declBit(c+713,"axi4_rvalid", false,-1);
        vcdp->declBit(c+721,"axi4_rready", false,-1);
        vcdp->declBus(c+729,"axi4_rdata", false,-1, 31,0);
        vcdp->declBus(c+737,"axi4_rid", false,-1, 7,0);
        vcdp->declBus(c+745,"axi4_rresp", false,-1, 1,0);
        vcdp->declBit(c+753,"axi4_rlast", false,-1);
        vcdp->declBit(c+761,"clk", false,-1);
        vcdp->declBit(c+769,"reset", false,-1);
        vcdp->declBit(c+657,"Axi4Rom axi4_arvalid", false,-1);
        vcdp->declBit(c+665,"Axi4Rom axi4_arready", false,-1);
        vcdp->declBus(c+673,"Axi4Rom axi4_araddr", false,-1, 12,0);
        vcdp->declBus(c+681,"Axi4Rom axi4_arid", false,-1, 7,0);
        vcdp->declBus(c+689,"Axi4Rom axi4_arlen", false,-1, 7,0);
        vcdp->declBus(c+697,"Axi4Rom axi4_arsize", false,-1, 2,0);
        vcdp->declBus(c+705,"Axi4Rom axi4_arburst", false,-1, 1,0);
        vcdp->declBit(c+713,"Axi4Rom axi4_rvalid", false,-1);
        vcdp->declBit(c+721,"Axi4Rom axi4_rready", false,-1);
        vcdp->declBus(c+729,"Axi4Rom axi4_rdata", false,-1, 31,0);
        vcdp->declBus(c+737,"Axi4Rom axi4_rid", false,-1, 7,0);
        vcdp->declBus(c+745,"Axi4Rom axi4_rresp", false,-1, 1,0);
        vcdp->declBit(c+753,"Axi4Rom axi4_rlast", false,-1);
        vcdp->declBit(c+761,"Axi4Rom clk", false,-1);
        vcdp->declBit(c+769,"Axi4Rom reset", false,-1);
        vcdp->declBit(c+513,"Axi4Rom ar_fifo_io_pop_ready", false,-1);
        vcdp->declBus(c+257,"Axi4Rom r_fifo_io_push_payload_data", false,-1, 31,0);
        vcdp->declBit(c+1,"Axi4Rom ar_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+9,"Axi4Rom ar_fifo_io_pop_valid", false,-1);
        vcdp->declBus(c+265,"Axi4Rom ar_fifo_io_pop_payload_addr", false,-1, 12,0);
        vcdp->declBus(c+273,"Axi4Rom ar_fifo_io_pop_payload_id", false,-1, 7,0);
        vcdp->declBus(c+281,"Axi4Rom ar_fifo_io_pop_payload_len", false,-1, 7,0);
        vcdp->declBus(c+289,"Axi4Rom ar_fifo_io_pop_payload_size", false,-1, 2,0);
        vcdp->declBus(c+297,"Axi4Rom ar_fifo_io_pop_payload_burst", false,-1, 1,0);
        vcdp->declBus(c+17,"Axi4Rom ar_fifo_io_occupancy", false,-1, 2,0);
        vcdp->declBus(c+25,"Axi4Rom ar_fifo_io_availability", false,-1, 2,0);
        vcdp->declBit(c+33,"Axi4Rom r_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+41,"Axi4Rom r_fifo_io_pop_valid", false,-1);
        vcdp->declBus(c+305,"Axi4Rom r_fifo_io_pop_payload_data", false,-1, 31,0);
        vcdp->declBus(c+313,"Axi4Rom r_fifo_io_pop_payload_id", false,-1, 7,0);
        vcdp->declBus(c+321,"Axi4Rom r_fifo_io_pop_payload_resp", false,-1, 1,0);
        vcdp->declBit(c+329,"Axi4Rom r_fifo_io_pop_payload_last", false,-1);
        vcdp->declBus(c+49,"Axi4Rom r_fifo_io_occupancy", false,-1, 2,0);
        vcdp->declBus(c+57,"Axi4Rom r_fifo_io_availability", false,-1, 2,0);
        vcdp->declBus(c+521,"Axi4Rom axi4_r_state", false,-1, 0,0);
        vcdp->declBus(c+641,"Axi4Rom rd_cnt", false,-1, 7,0);
        vcdp->declBus(c+337,"Axi4Rom rd_addr", false,-1, 12,0);
        vcdp->declBus(c+345,"Axi4Rom rd_id", false,-1, 7,0);
        vcdp->declBus(c+353,"Axi4Rom rd_size", false,-1, 2,0);
        vcdp->declBus(c+361,"Axi4Rom rd_burst", false,-1, 1,0);
        vcdp->declBit(c+649,"Axi4Rom when_Axi4Rom_l89", false,-1);
        vcdp->declQuad(c+529,"Axi4Rom axi4_r_state_string", false,-1, 39,0);
        vcdp->declBit(c+657,"Axi4Rom ar_fifo io_push_valid", false,-1);
        vcdp->declBit(c+1,"Axi4Rom ar_fifo io_push_ready", false,-1);
        vcdp->declBus(c+673,"Axi4Rom ar_fifo io_push_payload_addr", false,-1, 12,0);
        vcdp->declBus(c+681,"Axi4Rom ar_fifo io_push_payload_id", false,-1, 7,0);
        vcdp->declBus(c+689,"Axi4Rom ar_fifo io_push_payload_len", false,-1, 7,0);
        vcdp->declBus(c+697,"Axi4Rom ar_fifo io_push_payload_size", false,-1, 2,0);
        vcdp->declBus(c+705,"Axi4Rom ar_fifo io_push_payload_burst", false,-1, 1,0);
        vcdp->declBit(c+9,"Axi4Rom ar_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+513,"Axi4Rom ar_fifo io_pop_ready", false,-1);
        vcdp->declBus(c+265,"Axi4Rom ar_fifo io_pop_payload_addr", false,-1, 12,0);
        vcdp->declBus(c+273,"Axi4Rom ar_fifo io_pop_payload_id", false,-1, 7,0);
        vcdp->declBus(c+281,"Axi4Rom ar_fifo io_pop_payload_len", false,-1, 7,0);
        vcdp->declBus(c+289,"Axi4Rom ar_fifo io_pop_payload_size", false,-1, 2,0);
        vcdp->declBus(c+297,"Axi4Rom ar_fifo io_pop_payload_burst", false,-1, 1,0);
        vcdp->declBit(c+777,"Axi4Rom ar_fifo io_flush", false,-1);
        vcdp->declBus(c+17,"Axi4Rom ar_fifo io_occupancy", false,-1, 2,0);
        vcdp->declBus(c+25,"Axi4Rom ar_fifo io_availability", false,-1, 2,0);
        vcdp->declBit(c+761,"Axi4Rom ar_fifo clk", false,-1);
        vcdp->declBit(c+769,"Axi4Rom ar_fifo reset", false,-1);
        vcdp->declBit(c+209,"Axi4Rom ar_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+777,"Axi4Rom ar_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+217,"Axi4Rom ar_fifo logic_pushPtr_valueNext", false,-1, 1,0);
        vcdp->declBus(c+545,"Axi4Rom ar_fifo logic_pushPtr_value", false,-1, 1,0);
        vcdp->declBit(c+553,"Axi4Rom ar_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+177,"Axi4Rom ar_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+65,"Axi4Rom ar_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+777,"Axi4Rom ar_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+73,"Axi4Rom ar_fifo logic_popPtr_valueNext", false,-1, 1,0);
        vcdp->declBus(c+561,"Axi4Rom ar_fifo logic_popPtr_value", false,-1, 1,0);
        vcdp->declBit(c+569,"Axi4Rom ar_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+81,"Axi4Rom ar_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+89,"Axi4Rom ar_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+577,"Axi4Rom ar_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+225,"Axi4Rom ar_fifo logic_pushing", false,-1);
        vcdp->declBit(c+97,"Axi4Rom ar_fifo logic_popping", false,-1);
        vcdp->declBit(c+105,"Axi4Rom ar_fifo logic_empty", false,-1);
        vcdp->declBit(c+113,"Axi4Rom ar_fifo logic_full", false,-1);
        vcdp->declBit(c+185,"Axi4Rom ar_fifo when_Stream_l933", false,-1);
        vcdp->declBus(c+585,"Axi4Rom ar_fifo logic_ptrDif", false,-1, 1,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declQuad(c+369+i*2,"Axi4Rom ar_fifo logic_ram", true,(i+0), 33,0);}}
        vcdp->declBit(c+433,"Axi4Rom r_fifo io_push_valid", false,-1);
        vcdp->declBit(c+33,"Axi4Rom r_fifo io_push_ready", false,-1);
        vcdp->declBus(c+257,"Axi4Rom r_fifo io_push_payload_data", false,-1, 31,0);
        vcdp->declBus(c+345,"Axi4Rom r_fifo io_push_payload_id", false,-1, 7,0);
        vcdp->declBus(c+785,"Axi4Rom r_fifo io_push_payload_resp", false,-1, 1,0);
        vcdp->declBit(c+441,"Axi4Rom r_fifo io_push_payload_last", false,-1);
        vcdp->declBit(c+41,"Axi4Rom r_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+721,"Axi4Rom r_fifo io_pop_ready", false,-1);
        vcdp->declBus(c+305,"Axi4Rom r_fifo io_pop_payload_data", false,-1, 31,0);
        vcdp->declBus(c+313,"Axi4Rom r_fifo io_pop_payload_id", false,-1, 7,0);
        vcdp->declBus(c+321,"Axi4Rom r_fifo io_pop_payload_resp", false,-1, 1,0);
        vcdp->declBit(c+329,"Axi4Rom r_fifo io_pop_payload_last", false,-1);
        vcdp->declBit(c+777,"Axi4Rom r_fifo io_flush", false,-1);
        vcdp->declBus(c+49,"Axi4Rom r_fifo io_occupancy", false,-1, 2,0);
        vcdp->declBus(c+57,"Axi4Rom r_fifo io_availability", false,-1, 2,0);
        vcdp->declBit(c+761,"Axi4Rom r_fifo clk", false,-1);
        vcdp->declBit(c+769,"Axi4Rom r_fifo reset", false,-1);
        vcdp->declBit(c+121,"Axi4Rom r_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+777,"Axi4Rom r_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+129,"Axi4Rom r_fifo logic_pushPtr_valueNext", false,-1, 1,0);
        vcdp->declBus(c+593,"Axi4Rom r_fifo logic_pushPtr_value", false,-1, 1,0);
        vcdp->declBit(c+601,"Axi4Rom r_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+137,"Axi4Rom r_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+233,"Axi4Rom r_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+777,"Axi4Rom r_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+241,"Axi4Rom r_fifo logic_popPtr_valueNext", false,-1, 1,0);
        vcdp->declBus(c+609,"Axi4Rom r_fifo logic_popPtr_value", false,-1, 1,0);
        vcdp->declBit(c+617,"Axi4Rom r_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+193,"Axi4Rom r_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+145,"Axi4Rom r_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+625,"Axi4Rom r_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+153,"Axi4Rom r_fifo logic_pushing", false,-1);
        vcdp->declBit(c+249,"Axi4Rom r_fifo logic_popping", false,-1);
        vcdp->declBit(c+161,"Axi4Rom r_fifo logic_empty", false,-1);
        vcdp->declBit(c+169,"Axi4Rom r_fifo logic_full", false,-1);
        vcdp->declBit(c+201,"Axi4Rom r_fifo when_Stream_l933", false,-1);
        vcdp->declBus(c+633,"Axi4Rom r_fifo logic_ptrDif", false,-1, 1,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declQuad(c+449+i*2,"Axi4Rom r_fifo logic_ram", true,(i+0), 42,0);}}
    }
}

void VAxi4Rom::traceFullThis__1(VAxi4Rom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,((1U & (~ (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+9,(vlTOPp->Axi4Rom__DOT__ar_fifo_io_pop_valid));
        vcdp->fullBus(c+17,(((((IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_ptrMatch)) 
                              << 2U) | (3U & ((IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_value) 
                                              - (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_value))))),3);
        vcdp->fullBus(c+25,(((((~ (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_ptrMatch)) 
                              << 2U) | (3U & ((IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_value) 
                                              - (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_value))))),3);
        vcdp->fullBit(c+33,((1U & (~ (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+41,(vlTOPp->Axi4Rom__DOT__r_fifo_io_pop_valid));
        vcdp->fullBus(c+49,(((((IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_ptrMatch)) 
                              << 2U) | (3U & ((IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_value) 
                                              - (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_value))))),3);
        vcdp->fullBus(c+57,(((((~ (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_ptrMatch)) 
                              << 2U) | (3U & ((IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_value) 
                                              - (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_value))))),3);
        vcdp->fullBit(c+65,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+73,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_valueNext),2);
        vcdp->fullBit(c+81,(((3U == (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+89,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+97,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popping));
        vcdp->fullBit(c+105,(((IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+113,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_full));
        vcdp->fullBit(c+121,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+129,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_valueNext),2);
        vcdp->fullBit(c+137,(((3U == (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+145,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+153,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushing));
        vcdp->fullBit(c+161,(((IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+169,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_full));
        vcdp->fullBit(c+177,(((3U == (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+185,(((IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popping))));
        vcdp->fullBit(c+193,(((3U == (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+201,(((IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popping))));
        vcdp->fullBit(c+209,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+217,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_valueNext),2);
        vcdp->fullBit(c+225,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushing));
        vcdp->fullBit(c+233,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+241,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_valueNext),2);
        vcdp->fullBit(c+249,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popping));
        vcdp->fullBus(c+257,(vlTOPp->Axi4Rom__DOT___zz_rom_port0),32);
        vcdp->fullBus(c+265,((0x1fffU & (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT___zz_logic_ram_port0))),13);
        vcdp->fullBus(c+273,((0xffU & (IData)((vlTOPp->Axi4Rom__DOT__ar_fifo__DOT___zz_logic_ram_port0 
                                               >> 0xdU)))),8);
        vcdp->fullBus(c+281,((0xffU & (IData)((vlTOPp->Axi4Rom__DOT__ar_fifo__DOT___zz_logic_ram_port0 
                                               >> 0x15U)))),8);
        vcdp->fullBus(c+289,((7U & (IData)((vlTOPp->Axi4Rom__DOT__ar_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x1dU)))),3);
        vcdp->fullBus(c+297,((3U & (IData)((vlTOPp->Axi4Rom__DOT__ar_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x20U)))),2);
        vcdp->fullBus(c+305,((IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->fullBus(c+313,((0xffU & (IData)((vlTOPp->Axi4Rom__DOT__r_fifo__DOT___zz_logic_ram_port0 
                                               >> 0x20U)))),8);
        vcdp->fullBus(c+321,((3U & (IData)((vlTOPp->Axi4Rom__DOT__r_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x28U)))),2);
        vcdp->fullBit(c+329,((1U & (IData)((vlTOPp->Axi4Rom__DOT__r_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2aU)))));
        vcdp->fullBus(c+337,(vlTOPp->Axi4Rom__DOT__rd_addr),13);
        vcdp->fullBus(c+345,(vlTOPp->Axi4Rom__DOT__rd_id),8);
        vcdp->fullBus(c+353,(vlTOPp->Axi4Rom__DOT__rd_size),3);
        vcdp->fullBus(c+361,(vlTOPp->Axi4Rom__DOT__rd_burst),2);
        vcdp->fullQuad(c+369,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_ram[0]),34);
        vcdp->fullQuad(c+371,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_ram[1]),34);
        vcdp->fullQuad(c+373,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_ram[2]),34);
        vcdp->fullQuad(c+375,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_ram[3]),34);
        vcdp->fullBit(c+433,(vlTOPp->Axi4Rom__DOT___zz_io_push_valid));
        vcdp->fullBit(c+441,(vlTOPp->Axi4Rom__DOT___zz_io_push_payload_last));
        vcdp->fullQuad(c+449,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_ram[0]),43);
        vcdp->fullQuad(c+451,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_ram[1]),43);
        vcdp->fullQuad(c+453,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_ram[2]),43);
        vcdp->fullQuad(c+455,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_ram[3]),43);
        vcdp->fullBit(c+513,((1U & (~ (IData)(vlTOPp->Axi4Rom__DOT__axi4_r_state)))));
        vcdp->fullBit(c+521,(vlTOPp->Axi4Rom__DOT__axi4_r_state));
        vcdp->fullQuad(c+529,(((IData)(vlTOPp->Axi4Rom__DOT__axi4_r_state)
                                ? ((IData)(vlTOPp->Axi4Rom__DOT__axi4_r_state)
                                    ? VL_ULL(0x4255525354)
                                    : VL_ULL(0x3f3f3f3f3f))
                                : VL_ULL(0x49444c4520))),40);
        vcdp->fullBus(c+545,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_value),2);
        vcdp->fullBit(c+553,((3U == (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+561,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_value),2);
        vcdp->fullBit(c+569,((3U == (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+577,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+585,((3U & ((IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_value)))),2);
        vcdp->fullBus(c+593,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_value),2);
        vcdp->fullBit(c+601,((3U == (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+609,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_value),2);
        vcdp->fullBit(c+617,((3U == (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+625,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+633,((3U & ((IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_value)))),2);
        vcdp->fullBus(c+641,(vlTOPp->Axi4Rom__DOT__rd_cnt),8);
        vcdp->fullBit(c+649,((0U == (IData)(vlTOPp->Axi4Rom__DOT__rd_cnt))));
        vcdp->fullBit(c+657,(vlTOPp->axi4_arvalid));
        vcdp->fullBit(c+665,(vlTOPp->axi4_arready));
        vcdp->fullBus(c+673,(vlTOPp->axi4_araddr),13);
        vcdp->fullBus(c+681,(vlTOPp->axi4_arid),8);
        vcdp->fullBus(c+689,(vlTOPp->axi4_arlen),8);
        vcdp->fullBus(c+697,(vlTOPp->axi4_arsize),3);
        vcdp->fullBus(c+705,(vlTOPp->axi4_arburst),2);
        vcdp->fullBit(c+713,(vlTOPp->axi4_rvalid));
        vcdp->fullBit(c+721,(vlTOPp->axi4_rready));
        vcdp->fullBus(c+729,(vlTOPp->axi4_rdata),32);
        vcdp->fullBus(c+737,(vlTOPp->axi4_rid),8);
        vcdp->fullBus(c+745,(vlTOPp->axi4_rresp),2);
        vcdp->fullBit(c+753,(vlTOPp->axi4_rlast));
        vcdp->fullBit(c+761,(vlTOPp->clk));
        vcdp->fullBit(c+769,(vlTOPp->reset));
        vcdp->fullBit(c+777,(0U));
        vcdp->fullBus(c+785,(0U),2);
    }
}
