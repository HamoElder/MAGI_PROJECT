// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDePuncturing__Syms.h"


//======================

void VDePuncturing::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VDePuncturing::traceInit, &VDePuncturing::traceFull, &VDePuncturing::traceChg, this);
}
void VDePuncturing::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VDePuncturing* t = (VDePuncturing*)userthis;
    VDePuncturing__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VDePuncturing::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VDePuncturing* t = (VDePuncturing*)userthis;
    VDePuncturing__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VDePuncturing::traceInitThis(VDePuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDePuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VDePuncturing::traceFullThis(VDePuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDePuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VDePuncturing::traceInitThis__1(VDePuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDePuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+57,"dummy_bits", false,-1, 0,0);
        vcdp->declBit(c+65,"raw_data_valid", false,-1);
        vcdp->declBit(c+73,"raw_data_ready", false,-1);
        vcdp->declBit(c+81,"raw_data_payload_last", false,-1);
        vcdp->declBus(c+89,"raw_data_payload_fragment", false,-1, 15,0);
        vcdp->declBit(c+97,"de_punched_data_valid", false,-1);
        vcdp->declBit(c+105,"de_punched_data_ready", false,-1);
        vcdp->declBit(c+113,"de_punched_data_payload_last", false,-1);
        vcdp->declBus(c+121,"de_punched_data_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+129,"clk", false,-1);
        vcdp->declBit(c+137,"reset", false,-1);
        vcdp->declBus(c+57,"DePuncturing dummy_bits", false,-1, 0,0);
        vcdp->declBit(c+65,"DePuncturing raw_data_valid", false,-1);
        vcdp->declBit(c+73,"DePuncturing raw_data_ready", false,-1);
        vcdp->declBit(c+81,"DePuncturing raw_data_payload_last", false,-1);
        vcdp->declBus(c+89,"DePuncturing raw_data_payload_fragment", false,-1, 15,0);
        vcdp->declBit(c+97,"DePuncturing de_punched_data_valid", false,-1);
        vcdp->declBit(c+105,"DePuncturing de_punched_data_ready", false,-1);
        vcdp->declBit(c+113,"DePuncturing de_punched_data_payload_last", false,-1);
        vcdp->declBus(c+121,"DePuncturing de_punched_data_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+129,"DePuncturing clk", false,-1);
        vcdp->declBit(c+137,"DePuncturing reset", false,-1);
        vcdp->declBus(c+145,"DePuncturing mask_rom_0", false,-1, 1,0);
        vcdp->declBus(c+33,"DePuncturing mask_cnt", false,-1, 0,0);
        vcdp->declBus(c+41,"DePuncturing cnt", false,-1, 3,0);
        vcdp->declBus(c+25,"DePuncturing raw_data_fragment", false,-1, 15,0);
        vcdp->declBit(c+49,"DePuncturing raw_data_last", false,-1);
        vcdp->declBit(c+1,"DePuncturing when_DePuncturing_l43", false,-1);
        vcdp->declBus(c+145,"DePuncturing switch_Misc_l200", false,-1, 1,0);
        vcdp->declBit(c+9,"DePuncturing raw_data_fire", false,-1);
        vcdp->declBit(c+17,"DePuncturing de_punched_data_fire", false,-1);
        vcdp->declBus(c+145,"DePuncturing switch_Misc_l200_1", false,-1, 1,0);
    }
}

void VDePuncturing::traceFullThis__1(VDePuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDePuncturing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->DePuncturing__DOT__when_DePuncturing_l43));
        vcdp->fullBit(c+9,(vlTOPp->DePuncturing__DOT__raw_data_fire));
        vcdp->fullBit(c+17,(vlTOPp->DePuncturing__DOT__de_punched_data_fire));
        vcdp->fullBus(c+25,(vlTOPp->DePuncturing__DOT__raw_data_fragment),16);
        vcdp->fullBit(c+33,(vlTOPp->DePuncturing__DOT__mask_cnt));
        vcdp->fullBus(c+41,(vlTOPp->DePuncturing__DOT__cnt),4);
        vcdp->fullBit(c+49,(vlTOPp->DePuncturing__DOT__raw_data_last));
        vcdp->fullBit(c+57,(vlTOPp->dummy_bits));
        vcdp->fullBit(c+65,(vlTOPp->raw_data_valid));
        vcdp->fullBit(c+73,(vlTOPp->raw_data_ready));
        vcdp->fullBit(c+81,(vlTOPp->raw_data_payload_last));
        vcdp->fullBus(c+89,(vlTOPp->raw_data_payload_fragment),16);
        vcdp->fullBit(c+97,(vlTOPp->de_punched_data_valid));
        vcdp->fullBit(c+105,(vlTOPp->de_punched_data_ready));
        vcdp->fullBit(c+113,(vlTOPp->de_punched_data_payload_last));
        vcdp->fullBus(c+121,(vlTOPp->de_punched_data_payload_fragment),2);
        vcdp->fullBit(c+129,(vlTOPp->clk));
        vcdp->fullBit(c+137,(vlTOPp->reset));
        vcdp->fullBus(c+145,(3U),2);
    }
}
