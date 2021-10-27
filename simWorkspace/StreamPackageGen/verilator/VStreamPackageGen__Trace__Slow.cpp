// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VStreamPackageGen__Syms.h"


//======================

void VStreamPackageGen::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VStreamPackageGen::traceInit, &VStreamPackageGen::traceFull, &VStreamPackageGen::traceChg, this);
}
void VStreamPackageGen::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VStreamPackageGen* t = (VStreamPackageGen*)userthis;
    VStreamPackageGen__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VStreamPackageGen::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VStreamPackageGen* t = (VStreamPackageGen*)userthis;
    VStreamPackageGen__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VStreamPackageGen::traceInitThis(VStreamPackageGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPackageGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VStreamPackageGen::traceFullThis(VStreamPackageGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPackageGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VStreamPackageGen::traceInitThis__1(VStreamPackageGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPackageGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+73,"raw_data_valid", false,-1);
        vcdp->declBit(c+81,"raw_data_ready", false,-1);
        vcdp->declBus(c+89,"raw_data_payload_data", false,-1, 31,0);
        vcdp->declBus(c+97,"raw_data_payload_strb", false,-1, 3,0);
        vcdp->declBit(c+105,"pkg_data_valid", false,-1);
        vcdp->declBit(c+113,"pkg_data_ready", false,-1);
        vcdp->declBus(c+121,"pkg_data_payload", false,-1, 7,0);
        vcdp->declBit(c+129,"clk", false,-1);
        vcdp->declBit(c+137,"reset", false,-1);
        vcdp->declBit(c+73,"StreamPackageGen raw_data_valid", false,-1);
        vcdp->declBit(c+81,"StreamPackageGen raw_data_ready", false,-1);
        vcdp->declBus(c+89,"StreamPackageGen raw_data_payload_data", false,-1, 31,0);
        vcdp->declBus(c+97,"StreamPackageGen raw_data_payload_strb", false,-1, 3,0);
        vcdp->declBit(c+105,"StreamPackageGen pkg_data_valid", false,-1);
        vcdp->declBit(c+113,"StreamPackageGen pkg_data_ready", false,-1);
        vcdp->declBus(c+121,"StreamPackageGen pkg_data_payload", false,-1, 7,0);
        vcdp->declBit(c+129,"StreamPackageGen clk", false,-1);
        vcdp->declBit(c+137,"StreamPackageGen reset", false,-1);
        vcdp->declBit(c+49,"StreamPackageGen split_core_raw_data_ready", false,-1);
        vcdp->declBit(c+57,"StreamPackageGen split_core_split_data_valid", false,-1);
        vcdp->declBus(c+17,"StreamPackageGen split_core_split_data_payload", false,-1, 7,0);
        vcdp->declBus(c+25,"StreamPackageGen strb_buf", false,-1, 3,0);
        vcdp->declBit(c+33,"StreamPackageGen bit_valid", false,-1);
        vcdp->declBit(c+145,"StreamPackageGen raw_data_fire", false,-1);
        vcdp->declBit(c+153,"StreamPackageGen split_core_split_data_fire", false,-1);
        vcdp->declBit(c+73,"StreamPackageGen split_core raw_data_valid", false,-1);
        vcdp->declBit(c+49,"StreamPackageGen split_core raw_data_ready", false,-1);
        vcdp->declBus(c+89,"StreamPackageGen split_core raw_data_payload", false,-1, 31,0);
        vcdp->declBit(c+57,"StreamPackageGen split_core split_data_valid", false,-1);
        vcdp->declBit(c+113,"StreamPackageGen split_core split_data_ready", false,-1);
        vcdp->declBus(c+17,"StreamPackageGen split_core split_data_payload", false,-1, 7,0);
        vcdp->declBit(c+129,"StreamPackageGen split_core clk", false,-1);
        vcdp->declBit(c+137,"StreamPackageGen split_core reset", false,-1);
        vcdp->declBus(c+65,"StreamPackageGen split_core cnt", false,-1, 2,0);
        vcdp->declBus(c+41,"StreamPackageGen split_core data_buf", false,-1, 31,0);
        vcdp->declBit(c+1,"StreamPackageGen split_core raw_data_fire", false,-1);
        vcdp->declBit(c+9,"StreamPackageGen split_core split_data_fire", false,-1);
    }
}

void VStreamPackageGen::traceFullThis__1(VStreamPackageGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPackageGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->StreamPackageGen__DOT__split_core__DOT__raw_data_fire));
        vcdp->fullBit(c+9,(vlTOPp->StreamPackageGen__DOT__split_core__DOT__split_data_fire));
        vcdp->fullBus(c+17,((0xffU & (vlTOPp->StreamPackageGen__DOT__split_core__DOT__data_buf 
                                      >> 0x18U))),8);
        vcdp->fullBus(c+25,(vlTOPp->StreamPackageGen__DOT__strb_buf),4);
        vcdp->fullBit(c+33,((1U & ((IData)(vlTOPp->StreamPackageGen__DOT__strb_buf) 
                                   >> 3U))));
        vcdp->fullBus(c+41,(vlTOPp->StreamPackageGen__DOT__split_core__DOT__data_buf),32);
        vcdp->fullBit(c+49,((0U == (IData)(vlTOPp->StreamPackageGen__DOT__split_core__DOT__cnt))));
        vcdp->fullBit(c+57,((0U != (IData)(vlTOPp->StreamPackageGen__DOT__split_core__DOT__cnt))));
        vcdp->fullBus(c+65,(vlTOPp->StreamPackageGen__DOT__split_core__DOT__cnt),3);
        vcdp->fullBit(c+73,(vlTOPp->raw_data_valid));
        vcdp->fullBit(c+81,(vlTOPp->raw_data_ready));
        vcdp->fullBus(c+89,(vlTOPp->raw_data_payload_data),32);
        vcdp->fullBus(c+97,(vlTOPp->raw_data_payload_strb),4);
        vcdp->fullBit(c+105,(vlTOPp->pkg_data_valid));
        vcdp->fullBit(c+113,(vlTOPp->pkg_data_ready));
        vcdp->fullBus(c+121,(vlTOPp->pkg_data_payload),8);
        vcdp->fullBit(c+129,(vlTOPp->clk));
        vcdp->fullBit(c+137,(vlTOPp->reset));
        vcdp->fullBit(c+145,(((IData)(vlTOPp->raw_data_valid) 
                              & (IData)(vlTOPp->raw_data_ready))));
        vcdp->fullBit(c+153,(((0U != (IData)(vlTOPp->StreamPackageGen__DOT__split_core__DOT__cnt)) 
                              & (IData)(vlTOPp->pkg_data_ready))));
    }
}
