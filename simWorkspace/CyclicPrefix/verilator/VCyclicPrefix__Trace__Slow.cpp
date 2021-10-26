// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCyclicPrefix__Syms.h"


//======================

void VCyclicPrefix::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VCyclicPrefix::traceInit, &VCyclicPrefix::traceFull, &VCyclicPrefix::traceChg, this);
}
void VCyclicPrefix::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VCyclicPrefix* t = (VCyclicPrefix*)userthis;
    VCyclicPrefix__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VCyclicPrefix::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCyclicPrefix* t = (VCyclicPrefix*)userthis;
    VCyclicPrefix__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VCyclicPrefix::traceInitThis(VCyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VCyclicPrefix::traceFullThis(VCyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCyclicPrefix::traceInitThis__1(VCyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+441,"cp_len", false,-1, 1,0);
        vcdp->declBus(c+449,"data_len", false,-1, 3,0);
        vcdp->declBit(c+457,"raw_data_valid", false,-1);
        vcdp->declBit(c+465,"raw_data_ready", false,-1);
        vcdp->declBit(c+473,"raw_data_payload_last", false,-1);
        vcdp->declBus(c+481,"raw_data_payload_fragment_cha_i", false,-1, 31,0);
        vcdp->declBus(c+489,"raw_data_payload_fragment_cha_q", false,-1, 31,0);
        vcdp->declBit(c+497,"result_valid", false,-1);
        vcdp->declBit(c+505,"result_payload_last", false,-1);
        vcdp->declBus(c+513,"result_payload_fragment_cha_i", false,-1, 31,0);
        vcdp->declBus(c+521,"result_payload_fragment_cha_q", false,-1, 31,0);
        vcdp->declBit(c+529,"clk", false,-1);
        vcdp->declBit(c+537,"reset", false,-1);
        vcdp->declBus(c+441,"CyclicPrefix cp_len", false,-1, 1,0);
        vcdp->declBus(c+449,"CyclicPrefix data_len", false,-1, 3,0);
        vcdp->declBit(c+457,"CyclicPrefix raw_data_valid", false,-1);
        vcdp->declBit(c+465,"CyclicPrefix raw_data_ready", false,-1);
        vcdp->declBit(c+473,"CyclicPrefix raw_data_payload_last", false,-1);
        vcdp->declBus(c+481,"CyclicPrefix raw_data_payload_fragment_cha_i", false,-1, 31,0);
        vcdp->declBus(c+489,"CyclicPrefix raw_data_payload_fragment_cha_q", false,-1, 31,0);
        vcdp->declBit(c+497,"CyclicPrefix result_valid", false,-1);
        vcdp->declBit(c+505,"CyclicPrefix result_payload_last", false,-1);
        vcdp->declBus(c+513,"CyclicPrefix result_payload_fragment_cha_i", false,-1, 31,0);
        vcdp->declBus(c+521,"CyclicPrefix result_payload_fragment_cha_q", false,-1, 31,0);
        vcdp->declBit(c+529,"CyclicPrefix clk", false,-1);
        vcdp->declBit(c+537,"CyclicPrefix reset", false,-1);
        vcdp->declBit(c+1,"CyclicPrefix raw_dataFifo_io_push_ready", false,-1);
        vcdp->declBit(c+9,"CyclicPrefix raw_dataFifo_io_pop_valid", false,-1);
        vcdp->declBit(c+225,"CyclicPrefix raw_dataFifo_io_pop_payload_last", false,-1);
        vcdp->declBus(c+233,"CyclicPrefix raw_dataFifo_io_pop_payload_fragment_cha_i", false,-1, 31,0);
        vcdp->declBus(c+241,"CyclicPrefix raw_dataFifo_io_pop_payload_fragment_cha_q", false,-1, 31,0);
        vcdp->declBus(c+17,"CyclicPrefix raw_dataFifo_io_occupancy", false,-1, 3,0);
        vcdp->declBus(c+25,"CyclicPrefix raw_dataFifo_io_availability", false,-1, 3,0);
        vcdp->declBit(c+137,"CyclicPrefix cp_en", false,-1);
        vcdp->declBit(c+145,"CyclicPrefix fifo_pop_en", false,-1);
        vcdp->declBit(c+545,"CyclicPrefix raw_data_fire", false,-1);
        vcdp->declBus(c+153,"CyclicPrefix cp_state", false,-1, 1,0);
        vcdp->declBit(c+33,"CyclicPrefix when_CyclicPrefix_l54", false,-1);
        vcdp->declBit(c+553,"CyclicPrefix when_CyclicPrefix_l61", false,-1);
        vcdp->declQuad(c+161,"CyclicPrefix cp_state_string", false,-1, 55,0);
        vcdp->declBit(c+457,"CyclicPrefix raw_dataFifo io_push_valid", false,-1);
        vcdp->declBit(c+1,"CyclicPrefix raw_dataFifo io_push_ready", false,-1);
        vcdp->declBit(c+473,"CyclicPrefix raw_dataFifo io_push_payload_last", false,-1);
        vcdp->declBus(c+481,"CyclicPrefix raw_dataFifo io_push_payload_fragment_cha_i", false,-1, 31,0);
        vcdp->declBus(c+489,"CyclicPrefix raw_dataFifo io_push_payload_fragment_cha_q", false,-1, 31,0);
        vcdp->declBit(c+9,"CyclicPrefix raw_dataFifo io_pop_valid", false,-1);
        vcdp->declBit(c+145,"CyclicPrefix raw_dataFifo io_pop_ready", false,-1);
        vcdp->declBit(c+225,"CyclicPrefix raw_dataFifo io_pop_payload_last", false,-1);
        vcdp->declBus(c+233,"CyclicPrefix raw_dataFifo io_pop_payload_fragment_cha_i", false,-1, 31,0);
        vcdp->declBus(c+241,"CyclicPrefix raw_dataFifo io_pop_payload_fragment_cha_q", false,-1, 31,0);
        vcdp->declBit(c+561,"CyclicPrefix raw_dataFifo io_flush", false,-1);
        vcdp->declBus(c+17,"CyclicPrefix raw_dataFifo io_occupancy", false,-1, 3,0);
        vcdp->declBus(c+25,"CyclicPrefix raw_dataFifo io_availability", false,-1, 3,0);
        vcdp->declBit(c+529,"CyclicPrefix raw_dataFifo clk", false,-1);
        vcdp->declBit(c+537,"CyclicPrefix raw_dataFifo reset", false,-1);
        vcdp->declBit(c+105,"CyclicPrefix raw_dataFifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+561,"CyclicPrefix raw_dataFifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+113,"CyclicPrefix raw_dataFifo logic_pushPtr_valueNext", false,-1, 2,0);
        vcdp->declBus(c+177,"CyclicPrefix raw_dataFifo logic_pushPtr_value", false,-1, 2,0);
        vcdp->declBit(c+185,"CyclicPrefix raw_dataFifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+89,"CyclicPrefix raw_dataFifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+41,"CyclicPrefix raw_dataFifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+561,"CyclicPrefix raw_dataFifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+129,"CyclicPrefix raw_dataFifo logic_popPtr_valueNext", false,-1, 2,0);
        vcdp->declBus(c+193,"CyclicPrefix raw_dataFifo logic_popPtr_value", false,-1, 2,0);
        vcdp->declBit(c+201,"CyclicPrefix raw_dataFifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+49,"CyclicPrefix raw_dataFifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+57,"CyclicPrefix raw_dataFifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+209,"CyclicPrefix raw_dataFifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+121,"CyclicPrefix raw_dataFifo logic_pushing", false,-1);
        vcdp->declBit(c+65,"CyclicPrefix raw_dataFifo logic_popping", false,-1);
        vcdp->declBit(c+73,"CyclicPrefix raw_dataFifo logic_empty", false,-1);
        vcdp->declBit(c+81,"CyclicPrefix raw_dataFifo logic_full", false,-1);
        vcdp->declBit(c+97,"CyclicPrefix raw_dataFifo when_Stream_l933", false,-1);
        vcdp->declBus(c+217,"CyclicPrefix raw_dataFifo logic_ptrDif", false,-1, 2,0);
        {int i; for (i=0; i<8; i++) {
                vcdp->declArray(c+249+i*3,"CyclicPrefix raw_dataFifo logic_ram", true,(i+0), 64,0);}}
    }
}

void VCyclicPrefix::traceFullThis__1(VCyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,((1U & (~ (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_full)))));
        vcdp->fullBit(c+9,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo_io_pop_valid));
        vcdp->fullBus(c+17,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo_io_occupancy),4);
        vcdp->fullBus(c+25,(((((~ (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ptrMatch)) 
                              << 3U) | (7U & ((IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_value) 
                                              - (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_value))))),4);
        vcdp->fullBit(c+33,((0U != (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo_io_occupancy))));
        vcdp->fullBit(c+41,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBit(c+49,(((7U == (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+57,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+65,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popping));
        vcdp->fullBit(c+73,(((IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+81,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_full));
        vcdp->fullBit(c+89,(((7U == (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+97,(((IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popping))));
        vcdp->fullBit(c+105,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+113,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->fullBit(c+121,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushing));
        vcdp->fullBus(c+129,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_valueNext),3);
        vcdp->fullBit(c+137,(vlTOPp->CyclicPrefix__DOT__cp_en));
        vcdp->fullBit(c+145,(vlTOPp->CyclicPrefix__DOT__fifo_pop_en));
        vcdp->fullBus(c+153,(vlTOPp->CyclicPrefix__DOT__cp_state),2);
        vcdp->fullQuad(c+161,(((2U & (IData)(vlTOPp->CyclicPrefix__DOT__cp_state))
                                ? ((1U & (IData)(vlTOPp->CyclicPrefix__DOT__cp_state))
                                    ? VL_ULL(0x44415441202020)
                                    : VL_ULL(0x43502020202020))
                                : ((1U & (IData)(vlTOPp->CyclicPrefix__DOT__cp_state))
                                    ? VL_ULL(0x43415054555245)
                                    : VL_ULL(0x49444c45202020)))),56);
        vcdp->fullBus(c+177,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_value),3);
        vcdp->fullBit(c+185,((7U == (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+193,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_value),3);
        vcdp->fullBit(c+201,((7U == (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+209,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+217,((7U & ((IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_value)))),3);
        vcdp->fullBit(c+225,((1U & vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT___zz_logic_ram_port0[0U])));
        vcdp->fullBus(c+233,(((vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT___zz_logic_ram_port0[1U] 
                               << 0x1fU) | (vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT___zz_logic_ram_port0[0U] 
                                            >> 1U))),32);
        vcdp->fullBus(c+241,(((vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT___zz_logic_ram_port0[2U] 
                               << 0x1fU) | (vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT___zz_logic_ram_port0[1U] 
                                            >> 1U))),32);
        vcdp->fullArray(c+249,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram[0]),65);
        vcdp->fullArray(c+252,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram[1]),65);
        vcdp->fullArray(c+255,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram[2]),65);
        vcdp->fullArray(c+258,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram[3]),65);
        vcdp->fullArray(c+261,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram[4]),65);
        vcdp->fullArray(c+264,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram[5]),65);
        vcdp->fullArray(c+267,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram[6]),65);
        vcdp->fullArray(c+270,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram[7]),65);
        vcdp->fullBus(c+441,(vlTOPp->cp_len),2);
        vcdp->fullBus(c+449,(vlTOPp->data_len),4);
        vcdp->fullBit(c+457,(vlTOPp->raw_data_valid));
        vcdp->fullBit(c+465,(vlTOPp->raw_data_ready));
        vcdp->fullBit(c+473,(vlTOPp->raw_data_payload_last));
        vcdp->fullBus(c+481,(vlTOPp->raw_data_payload_fragment_cha_i),32);
        vcdp->fullBus(c+489,(vlTOPp->raw_data_payload_fragment_cha_q),32);
        vcdp->fullBit(c+497,(vlTOPp->result_valid));
        vcdp->fullBit(c+505,(vlTOPp->result_payload_last));
        vcdp->fullBus(c+513,(vlTOPp->result_payload_fragment_cha_i),32);
        vcdp->fullBus(c+521,(vlTOPp->result_payload_fragment_cha_q),32);
        vcdp->fullBit(c+529,(vlTOPp->clk));
        vcdp->fullBit(c+537,(vlTOPp->reset));
        vcdp->fullBit(c+545,(((IData)(vlTOPp->raw_data_valid) 
                              & (IData)(vlTOPp->raw_data_ready))));
        vcdp->fullBit(c+553,(((0xfU & (((IData)(vlTOPp->data_len) 
                                        - (IData)(vlTOPp->cp_len)) 
                                       - (IData)(1U))) 
                              <= (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo_io_occupancy))));
        vcdp->fullBit(c+561,(0U));
    }
}
