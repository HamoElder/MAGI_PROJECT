// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDirectFIR__Syms.h"


//======================

void VDirectFIR::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VDirectFIR::traceInit, &VDirectFIR::traceFull, &VDirectFIR::traceChg, this);
}
void VDirectFIR::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VDirectFIR* t = (VDirectFIR*)userthis;
    VDirectFIR__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VDirectFIR::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VDirectFIR* t = (VDirectFIR*)userthis;
    VDirectFIR__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VDirectFIR::traceInitThis(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VDirectFIR::traceFullThis(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VDirectFIR::traceInitThis__1(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+361,"raw_data_valid", false,-1);
        vcdp->declBus(c+369,"raw_data_payload_0", false,-1, 11,0);
        vcdp->declBit(c+377,"filtered_data_valid", false,-1);
        vcdp->declBus(c+385,"filtered_data_payload_0", false,-1, 28,0);
        vcdp->declBit(c+393,"clk", false,-1);
        vcdp->declBit(c+401,"reset", false,-1);
        vcdp->declBit(c+361,"DirectFIR raw_data_valid", false,-1);
        vcdp->declBus(c+369,"DirectFIR raw_data_payload_0", false,-1, 11,0);
        vcdp->declBit(c+377,"DirectFIR filtered_data_valid", false,-1);
        vcdp->declBus(c+385,"DirectFIR filtered_data_payload_0", false,-1, 28,0);
        vcdp->declBit(c+393,"DirectFIR clk", false,-1);
        vcdp->declBit(c+401,"DirectFIR reset", false,-1);
        vcdp->declBit(c+65,"DirectFIR directFIRCore_1_filtered_data_valid", false,-1);
        vcdp->declBus(c+73,"DirectFIR directFIRCore_1_filtered_data_payload", false,-1, 28,0);
        vcdp->declBus(c+1,"DirectFIR coff_mem_0", false,-1, 8,0);
        vcdp->declBus(c+9,"DirectFIR coff_mem_1", false,-1, 8,0);
        vcdp->declBus(c+17,"DirectFIR coff_mem_2", false,-1, 8,0);
        vcdp->declBus(c+25,"DirectFIR coff_mem_3", false,-1, 8,0);
        vcdp->declBus(c+33,"DirectFIR coff_mem_4", false,-1, 8,0);
        vcdp->declBus(c+41,"DirectFIR coff_mem_5", false,-1, 8,0);
        vcdp->declBus(c+49,"DirectFIR coff_mem_6", false,-1, 8,0);
        vcdp->declBus(c+57,"DirectFIR coff_mem_7", false,-1, 8,0);
        vcdp->declBus(c+57,"DirectFIR coff_mem_8", false,-1, 8,0);
        vcdp->declBus(c+49,"DirectFIR coff_mem_9", false,-1, 8,0);
        vcdp->declBus(c+41,"DirectFIR coff_mem_10", false,-1, 8,0);
        vcdp->declBus(c+33,"DirectFIR coff_mem_11", false,-1, 8,0);
        vcdp->declBus(c+25,"DirectFIR coff_mem_12", false,-1, 8,0);
        vcdp->declBus(c+17,"DirectFIR coff_mem_13", false,-1, 8,0);
        vcdp->declBus(c+9,"DirectFIR coff_mem_14", false,-1, 8,0);
        vcdp->declBus(c+1,"DirectFIR coff_mem_15", false,-1, 8,0);
        vcdp->declBit(c+65,"DirectFIR filtered_valid_vec_0", false,-1);
        vcdp->declBit(c+361,"DirectFIR directFIRCore_1 raw_data_valid", false,-1);
        vcdp->declBus(c+369,"DirectFIR directFIRCore_1 raw_data_payload", false,-1, 11,0);
        vcdp->declBus(c+1,"DirectFIR directFIRCore_1 coff_data_0", false,-1, 8,0);
        vcdp->declBus(c+9,"DirectFIR directFIRCore_1 coff_data_1", false,-1, 8,0);
        vcdp->declBus(c+17,"DirectFIR directFIRCore_1 coff_data_2", false,-1, 8,0);
        vcdp->declBus(c+25,"DirectFIR directFIRCore_1 coff_data_3", false,-1, 8,0);
        vcdp->declBus(c+33,"DirectFIR directFIRCore_1 coff_data_4", false,-1, 8,0);
        vcdp->declBus(c+41,"DirectFIR directFIRCore_1 coff_data_5", false,-1, 8,0);
        vcdp->declBus(c+49,"DirectFIR directFIRCore_1 coff_data_6", false,-1, 8,0);
        vcdp->declBus(c+57,"DirectFIR directFIRCore_1 coff_data_7", false,-1, 8,0);
        vcdp->declBus(c+57,"DirectFIR directFIRCore_1 coff_data_8", false,-1, 8,0);
        vcdp->declBus(c+49,"DirectFIR directFIRCore_1 coff_data_9", false,-1, 8,0);
        vcdp->declBus(c+41,"DirectFIR directFIRCore_1 coff_data_10", false,-1, 8,0);
        vcdp->declBus(c+33,"DirectFIR directFIRCore_1 coff_data_11", false,-1, 8,0);
        vcdp->declBus(c+25,"DirectFIR directFIRCore_1 coff_data_12", false,-1, 8,0);
        vcdp->declBus(c+17,"DirectFIR directFIRCore_1 coff_data_13", false,-1, 8,0);
        vcdp->declBus(c+9,"DirectFIR directFIRCore_1 coff_data_14", false,-1, 8,0);
        vcdp->declBus(c+1,"DirectFIR directFIRCore_1 coff_data_15", false,-1, 8,0);
        vcdp->declBit(c+65,"DirectFIR directFIRCore_1 filtered_data_valid", false,-1);
        vcdp->declBus(c+73,"DirectFIR directFIRCore_1 filtered_data_payload", false,-1, 28,0);
        vcdp->declBit(c+393,"DirectFIR directFIRCore_1 clk", false,-1);
        vcdp->declBit(c+401,"DirectFIR directFIRCore_1 reset", false,-1);
        vcdp->declBus(c+81,"DirectFIR directFIRCore_1 internal_en", false,-1, 2,0);
        vcdp->declBus(c+89,"DirectFIR directFIRCore_1 raw_data_vec_0", false,-1, 11,0);
        vcdp->declBus(c+97,"DirectFIR directFIRCore_1 raw_data_vec_1", false,-1, 11,0);
        vcdp->declBus(c+105,"DirectFIR directFIRCore_1 raw_data_vec_2", false,-1, 11,0);
        vcdp->declBus(c+113,"DirectFIR directFIRCore_1 raw_data_vec_3", false,-1, 11,0);
        vcdp->declBus(c+121,"DirectFIR directFIRCore_1 raw_data_vec_4", false,-1, 11,0);
        vcdp->declBus(c+129,"DirectFIR directFIRCore_1 raw_data_vec_5", false,-1, 11,0);
        vcdp->declBus(c+137,"DirectFIR directFIRCore_1 raw_data_vec_6", false,-1, 11,0);
        vcdp->declBus(c+145,"DirectFIR directFIRCore_1 raw_data_vec_7", false,-1, 11,0);
        vcdp->declBus(c+153,"DirectFIR directFIRCore_1 raw_data_vec_8", false,-1, 11,0);
        vcdp->declBus(c+161,"DirectFIR directFIRCore_1 raw_data_vec_9", false,-1, 11,0);
        vcdp->declBus(c+169,"DirectFIR directFIRCore_1 raw_data_vec_10", false,-1, 11,0);
        vcdp->declBus(c+177,"DirectFIR directFIRCore_1 raw_data_vec_11", false,-1, 11,0);
        vcdp->declBus(c+185,"DirectFIR directFIRCore_1 raw_data_vec_12", false,-1, 11,0);
        vcdp->declBus(c+193,"DirectFIR directFIRCore_1 raw_data_vec_13", false,-1, 11,0);
        vcdp->declBus(c+201,"DirectFIR directFIRCore_1 raw_data_vec_14", false,-1, 11,0);
        vcdp->declBus(c+209,"DirectFIR directFIRCore_1 raw_data_vec_15", false,-1, 11,0);
        vcdp->declBus(c+217,"DirectFIR directFIRCore_1 mult_data_vec_0", false,-1, 28,0);
        vcdp->declBus(c+225,"DirectFIR directFIRCore_1 mult_data_vec_1", false,-1, 28,0);
        vcdp->declBus(c+233,"DirectFIR directFIRCore_1 mult_data_vec_2", false,-1, 28,0);
        vcdp->declBus(c+241,"DirectFIR directFIRCore_1 mult_data_vec_3", false,-1, 28,0);
        vcdp->declBus(c+249,"DirectFIR directFIRCore_1 mult_data_vec_4", false,-1, 28,0);
        vcdp->declBus(c+257,"DirectFIR directFIRCore_1 mult_data_vec_5", false,-1, 28,0);
        vcdp->declBus(c+265,"DirectFIR directFIRCore_1 mult_data_vec_6", false,-1, 28,0);
        vcdp->declBus(c+273,"DirectFIR directFIRCore_1 mult_data_vec_7", false,-1, 28,0);
        vcdp->declBus(c+281,"DirectFIR directFIRCore_1 mult_data_vec_8", false,-1, 28,0);
        vcdp->declBus(c+289,"DirectFIR directFIRCore_1 mult_data_vec_9", false,-1, 28,0);
        vcdp->declBus(c+297,"DirectFIR directFIRCore_1 mult_data_vec_10", false,-1, 28,0);
        vcdp->declBus(c+305,"DirectFIR directFIRCore_1 mult_data_vec_11", false,-1, 28,0);
        vcdp->declBus(c+313,"DirectFIR directFIRCore_1 mult_data_vec_12", false,-1, 28,0);
        vcdp->declBus(c+321,"DirectFIR directFIRCore_1 mult_data_vec_13", false,-1, 28,0);
        vcdp->declBus(c+329,"DirectFIR directFIRCore_1 mult_data_vec_14", false,-1, 28,0);
        vcdp->declBus(c+337,"DirectFIR directFIRCore_1 mult_data_vec_15", false,-1, 28,0);
        vcdp->declBit(c+345,"DirectFIR directFIRCore_1 when_DirectFIR_l29", false,-1);
        vcdp->declBus(c+73,"DirectFIR directFIRCore_1 sum_result", false,-1, 28,0);
        vcdp->declBit(c+353,"DirectFIR directFIRCore_1 when_DirectFIR_l35", false,-1);
    }
}

void VDirectFIR::traceFullThis__1(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->DirectFIR__DOT__coff_mem_15),9);
        vcdp->fullBus(c+9,(vlTOPp->DirectFIR__DOT__coff_mem_14),9);
        vcdp->fullBus(c+17,(vlTOPp->DirectFIR__DOT__coff_mem_13),9);
        vcdp->fullBus(c+25,(vlTOPp->DirectFIR__DOT__coff_mem_12),9);
        vcdp->fullBus(c+33,(vlTOPp->DirectFIR__DOT__coff_mem_11),9);
        vcdp->fullBus(c+41,(vlTOPp->DirectFIR__DOT__coff_mem_10),9);
        vcdp->fullBus(c+49,(vlTOPp->DirectFIR__DOT__coff_mem_9),9);
        vcdp->fullBus(c+57,(vlTOPp->DirectFIR__DOT__coff_mem_8),9);
        vcdp->fullBit(c+65,((1U & ((IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en) 
                                   >> 2U))));
        vcdp->fullBus(c+73,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__sum_result),29);
        vcdp->fullBus(c+81,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en),3);
        vcdp->fullBus(c+89,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_0),12);
        vcdp->fullBus(c+97,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_1),12);
        vcdp->fullBus(c+105,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_2),12);
        vcdp->fullBus(c+113,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_3),12);
        vcdp->fullBus(c+121,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_4),12);
        vcdp->fullBus(c+129,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_5),12);
        vcdp->fullBus(c+137,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_6),12);
        vcdp->fullBus(c+145,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_7),12);
        vcdp->fullBus(c+153,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_8),12);
        vcdp->fullBus(c+161,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_9),12);
        vcdp->fullBus(c+169,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_10),12);
        vcdp->fullBus(c+177,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_11),12);
        vcdp->fullBus(c+185,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_12),12);
        vcdp->fullBus(c+193,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_13),12);
        vcdp->fullBus(c+201,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_14),12);
        vcdp->fullBus(c+209,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_15),12);
        vcdp->fullBus(c+217,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_0),29);
        vcdp->fullBus(c+225,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_1),29);
        vcdp->fullBus(c+233,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_2),29);
        vcdp->fullBus(c+241,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_3),29);
        vcdp->fullBus(c+249,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_4),29);
        vcdp->fullBus(c+257,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_5),29);
        vcdp->fullBus(c+265,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_6),29);
        vcdp->fullBus(c+273,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_7),29);
        vcdp->fullBus(c+281,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_8),29);
        vcdp->fullBus(c+289,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_9),29);
        vcdp->fullBus(c+297,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_10),29);
        vcdp->fullBus(c+305,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_11),29);
        vcdp->fullBus(c+313,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_12),29);
        vcdp->fullBus(c+321,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_13),29);
        vcdp->fullBus(c+329,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_14),29);
        vcdp->fullBus(c+337,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_15),29);
        vcdp->fullBit(c+345,((1U & (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en))));
        vcdp->fullBit(c+353,((1U & ((IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en) 
                                    >> 1U))));
        vcdp->fullBit(c+361,(vlTOPp->raw_data_valid));
        vcdp->fullBus(c+369,(vlTOPp->raw_data_payload_0),12);
        vcdp->fullBit(c+377,(vlTOPp->filtered_data_valid));
        vcdp->fullBus(c+385,(vlTOPp->filtered_data_payload_0),29);
        vcdp->fullBit(c+393,(vlTOPp->clk));
        vcdp->fullBit(c+401,(vlTOPp->reset));
    }
}
