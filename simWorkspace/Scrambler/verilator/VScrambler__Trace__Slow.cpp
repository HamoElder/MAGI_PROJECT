// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VScrambler__Syms.h"


//======================

void VScrambler::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VScrambler::traceInit, &VScrambler::traceFull, &VScrambler::traceChg, this);
}
void VScrambler::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VScrambler* t = (VScrambler*)userthis;
    VScrambler__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VScrambler::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VScrambler* t = (VScrambler*)userthis;
    VScrambler__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VScrambler::traceInitThis(VScrambler__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VScrambler* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VScrambler::traceFullThis(VScrambler__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VScrambler* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VScrambler::traceInitThis__1(VScrambler__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VScrambler* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+153,"init_state_valid", false,-1);
        vcdp->declBus(c+161,"init_state_payload", false,-1, 6,0);
        vcdp->declBit(c+169,"scram_data_valid", false,-1);
        vcdp->declBit(c+177,"scram_data_ready", false,-1);
        vcdp->declBus(c+185,"scram_data_payload", false,-1, 7,0);
        vcdp->declBit(c+193,"clk", false,-1);
        vcdp->declBit(c+201,"reset", false,-1);
        vcdp->declBit(c+153,"Scrambler init_state_valid", false,-1);
        vcdp->declBus(c+161,"Scrambler init_state_payload", false,-1, 6,0);
        vcdp->declBit(c+169,"Scrambler scram_data_valid", false,-1);
        vcdp->declBit(c+177,"Scrambler scram_data_ready", false,-1);
        vcdp->declBus(c+185,"Scrambler scram_data_payload", false,-1, 7,0);
        vcdp->declBit(c+193,"Scrambler clk", false,-1);
        vcdp->declBit(c+201,"Scrambler reset", false,-1);
        vcdp->declBus(c+137,"Scrambler scram_state", false,-1, 6,0);
        vcdp->declBus(c+1,"Scrambler r_scr_0", false,-1, 6,0);
        vcdp->declBus(c+9,"Scrambler r_scr_1", false,-1, 6,0);
        vcdp->declBus(c+17,"Scrambler r_scr_2", false,-1, 6,0);
        vcdp->declBus(c+25,"Scrambler r_scr_3", false,-1, 6,0);
        vcdp->declBus(c+33,"Scrambler r_scr_4", false,-1, 6,0);
        vcdp->declBus(c+41,"Scrambler r_scr_5", false,-1, 6,0);
        vcdp->declBus(c+49,"Scrambler r_scr_6", false,-1, 6,0);
        vcdp->declBus(c+57,"Scrambler r_scr_7", false,-1, 6,0);
        vcdp->declBit(c+65,"Scrambler feed_back_0", false,-1);
        vcdp->declBit(c+73,"Scrambler feed_back_1", false,-1);
        vcdp->declBit(c+81,"Scrambler feed_back_2", false,-1);
        vcdp->declBit(c+89,"Scrambler feed_back_3", false,-1);
        vcdp->declBit(c+97,"Scrambler feed_back_4", false,-1);
        vcdp->declBit(c+105,"Scrambler feed_back_5", false,-1);
        vcdp->declBit(c+113,"Scrambler feed_back_6", false,-1);
        vcdp->declBit(c+121,"Scrambler feed_back_7", false,-1);
        vcdp->declBit(c+129,"Scrambler scram_valid", false,-1);
        vcdp->declBus(c+145,"Scrambler scram_data", false,-1, 7,0);
    }
}

void VScrambler::traceFullThis__1(VScrambler__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VScrambler* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,((0x7fU & (IData)(vlTOPp->Scrambler__DOT___zz_r_scr_0))),7);
        vcdp->fullBus(c+9,((0x7fU & (IData)(vlTOPp->Scrambler__DOT___zz_r_scr_1))),7);
        vcdp->fullBus(c+17,((0x7fU & (IData)(vlTOPp->Scrambler__DOT___zz_r_scr_2))),7);
        vcdp->fullBus(c+25,((0x7fU & (IData)(vlTOPp->Scrambler__DOT___zz_r_scr_3))),7);
        vcdp->fullBus(c+33,((0x7fU & (IData)(vlTOPp->Scrambler__DOT___zz_r_scr_4))),7);
        vcdp->fullBus(c+41,((0x7fU & (IData)(vlTOPp->Scrambler__DOT___zz_r_scr_5))),7);
        vcdp->fullBus(c+49,((0x7fU & (IData)(vlTOPp->Scrambler__DOT___zz_r_scr_6))),7);
        vcdp->fullBus(c+57,(((0x7eU & ((IData)(vlTOPp->Scrambler__DOT___zz_r_scr_6) 
                                       << 1U)) | (IData)(vlTOPp->Scrambler__DOT__feed_back_7))),7);
        vcdp->fullBit(c+65,(vlTOPp->Scrambler__DOT__feed_back_0));
        vcdp->fullBit(c+73,(vlTOPp->Scrambler__DOT__feed_back_1));
        vcdp->fullBit(c+81,(vlTOPp->Scrambler__DOT__feed_back_2));
        vcdp->fullBit(c+89,(vlTOPp->Scrambler__DOT__feed_back_3));
        vcdp->fullBit(c+97,(vlTOPp->Scrambler__DOT__feed_back_4));
        vcdp->fullBit(c+105,(vlTOPp->Scrambler__DOT__feed_back_5));
        vcdp->fullBit(c+113,(vlTOPp->Scrambler__DOT__feed_back_6));
        vcdp->fullBit(c+121,(vlTOPp->Scrambler__DOT__feed_back_7));
        vcdp->fullBit(c+129,(vlTOPp->Scrambler__DOT__scram_valid));
        vcdp->fullBus(c+137,(vlTOPp->Scrambler__DOT__scram_state),7);
        vcdp->fullBus(c+145,(vlTOPp->Scrambler__DOT__scram_data),8);
        vcdp->fullBit(c+153,(vlTOPp->init_state_valid));
        vcdp->fullBus(c+161,(vlTOPp->init_state_payload),7);
        vcdp->fullBit(c+169,(vlTOPp->scram_data_valid));
        vcdp->fullBit(c+177,(vlTOPp->scram_data_ready));
        vcdp->fullBus(c+185,(vlTOPp->scram_data_payload),8);
        vcdp->fullBit(c+193,(vlTOPp->clk));
        vcdp->fullBit(c+201,(vlTOPp->reset));
    }
}
