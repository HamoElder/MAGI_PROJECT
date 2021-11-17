// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VStreamPkgGen__Syms.h"


//======================

void VStreamPkgGen::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VStreamPkgGen::traceInit, &VStreamPkgGen::traceFull, &VStreamPkgGen::traceChg, this);
}
void VStreamPkgGen::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VStreamPkgGen* t = (VStreamPkgGen*)userthis;
    VStreamPkgGen__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VStreamPkgGen::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VStreamPkgGen* t = (VStreamPkgGen*)userthis;
    VStreamPkgGen__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VStreamPkgGen::traceInitThis(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VStreamPkgGen::traceFullThis(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VStreamPkgGen::traceInitThis__1(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+89,"slices_limit", false,-1, 11,0);
        vcdp->declBit(c+97,"raw_data_valid", false,-1);
        vcdp->declBit(c+105,"raw_data_ready", false,-1);
        vcdp->declBus(c+113,"raw_data_payload_data", false,-1, 31,0);
        vcdp->declBus(c+121,"raw_data_payload_strb", false,-1, 3,0);
        vcdp->declBit(c+129,"pkg_data_valid", false,-1);
        vcdp->declBit(c+137,"pkg_data_ready", false,-1);
        vcdp->declBit(c+145,"pkg_data_payload_last", false,-1);
        vcdp->declBus(c+153,"pkg_data_payload_fragment", false,-1, 7,0);
        vcdp->declBit(c+161,"clk", false,-1);
        vcdp->declBit(c+169,"reset", false,-1);
        vcdp->declBus(c+89,"StreamPkgGen slices_limit", false,-1, 11,0);
        vcdp->declBit(c+97,"StreamPkgGen raw_data_valid", false,-1);
        vcdp->declBit(c+105,"StreamPkgGen raw_data_ready", false,-1);
        vcdp->declBus(c+113,"StreamPkgGen raw_data_payload_data", false,-1, 31,0);
        vcdp->declBus(c+121,"StreamPkgGen raw_data_payload_strb", false,-1, 3,0);
        vcdp->declBit(c+129,"StreamPkgGen pkg_data_valid", false,-1);
        vcdp->declBit(c+137,"StreamPkgGen pkg_data_ready", false,-1);
        vcdp->declBit(c+145,"StreamPkgGen pkg_data_payload_last", false,-1);
        vcdp->declBus(c+153,"StreamPkgGen pkg_data_payload_fragment", false,-1, 7,0);
        vcdp->declBit(c+161,"StreamPkgGen clk", false,-1);
        vcdp->declBit(c+169,"StreamPkgGen reset", false,-1);
        vcdp->declBit(c+57,"StreamPkgGen split_core_raw_data_ready", false,-1);
        vcdp->declBit(c+65,"StreamPkgGen split_core_split_data_valid", false,-1);
        vcdp->declBus(c+25,"StreamPkgGen split_core_split_data_payload", false,-1, 7,0);
        vcdp->declBus(c+33,"StreamPkgGen strb_buf", false,-1, 3,0);
        vcdp->declBus(c+73,"StreamPkgGen pkg_slices_cnt", false,-1, 11,0);
        vcdp->declBit(c+41,"StreamPkgGen bit_valid", false,-1);
        vcdp->declBit(c+1,"StreamPkgGen raw_data_fire", false,-1);
        vcdp->declBit(c+9,"StreamPkgGen split_core_split_data_fire", false,-1);
        vcdp->declBit(c+97,"StreamPkgGen split_core raw_data_valid", false,-1);
        vcdp->declBit(c+57,"StreamPkgGen split_core raw_data_ready", false,-1);
        vcdp->declBus(c+113,"StreamPkgGen split_core raw_data_payload", false,-1, 31,0);
        vcdp->declBit(c+65,"StreamPkgGen split_core split_data_valid", false,-1);
        vcdp->declBit(c+137,"StreamPkgGen split_core split_data_ready", false,-1);
        vcdp->declBus(c+25,"StreamPkgGen split_core split_data_payload", false,-1, 7,0);
        vcdp->declBit(c+161,"StreamPkgGen split_core clk", false,-1);
        vcdp->declBit(c+169,"StreamPkgGen split_core reset", false,-1);
        vcdp->declBus(c+81,"StreamPkgGen split_core cnt", false,-1, 2,0);
        vcdp->declBus(c+49,"StreamPkgGen split_core data_buf", false,-1, 31,0);
        vcdp->declBit(c+17,"StreamPkgGen split_core raw_data_fire", false,-1);
        vcdp->declBit(c+9,"StreamPkgGen split_core split_data_fire", false,-1);
    }
}

void VStreamPkgGen::traceFullThis__1(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->StreamPkgGen__DOT__raw_data_fire));
        vcdp->fullBit(c+9,(vlTOPp->StreamPkgGen__DOT__split_core__DOT__split_data_fire));
        vcdp->fullBit(c+17,(vlTOPp->StreamPkgGen__DOT__split_core__DOT__raw_data_fire));
        vcdp->fullBus(c+25,((0xffU & vlTOPp->StreamPkgGen__DOT__split_core__DOT__data_buf)),8);
        vcdp->fullBus(c+33,(vlTOPp->StreamPkgGen__DOT__strb_buf),4);
        vcdp->fullBit(c+41,((1U & (IData)(vlTOPp->StreamPkgGen__DOT__strb_buf))));
        vcdp->fullBus(c+49,(vlTOPp->StreamPkgGen__DOT__split_core__DOT__data_buf),32);
        vcdp->fullBit(c+57,((0U == (IData)(vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt))));
        vcdp->fullBit(c+65,((0U != (IData)(vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt))));
        vcdp->fullBus(c+73,(vlTOPp->StreamPkgGen__DOT__pkg_slices_cnt),12);
        vcdp->fullBus(c+81,(vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt),3);
        vcdp->fullBus(c+89,(vlTOPp->slices_limit),12);
        vcdp->fullBit(c+97,(vlTOPp->raw_data_valid));
        vcdp->fullBit(c+105,(vlTOPp->raw_data_ready));
        vcdp->fullBus(c+113,(vlTOPp->raw_data_payload_data),32);
        vcdp->fullBus(c+121,(vlTOPp->raw_data_payload_strb),4);
        vcdp->fullBit(c+129,(vlTOPp->pkg_data_valid));
        vcdp->fullBit(c+137,(vlTOPp->pkg_data_ready));
        vcdp->fullBit(c+145,(vlTOPp->pkg_data_payload_last));
        vcdp->fullBus(c+153,(vlTOPp->pkg_data_payload_fragment),8);
        vcdp->fullBit(c+161,(vlTOPp->clk));
        vcdp->fullBit(c+169,(vlTOPp->reset));
    }
}
