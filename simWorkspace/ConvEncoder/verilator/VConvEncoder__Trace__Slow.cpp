// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VConvEncoder__Syms.h"


//======================

void VConvEncoder::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VConvEncoder::traceInit, &VConvEncoder::traceFull, &VConvEncoder::traceChg, this);
}
void VConvEncoder::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VConvEncoder* t = (VConvEncoder*)userthis;
    VConvEncoder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VConvEncoder::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VConvEncoder* t = (VConvEncoder*)userthis;
    VConvEncoder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VConvEncoder::traceInitThis(VConvEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VConvEncoder::traceFullThis(VConvEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VConvEncoder::traceInitThis__1(VConvEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+121,"tail_bits_valid", false,-1);
        vcdp->declBus(c+129,"tail_bits_payload", false,-1, 2,0);
        vcdp->declBit(c+137,"raw_data_valid", false,-1);
        vcdp->declBit(c+145,"raw_data_payload_last", false,-1);
        vcdp->declBus(c+153,"raw_data_payload_fragment", false,-1, 6,0);
        vcdp->declBit(c+161,"coded_data_valid", false,-1);
        vcdp->declBit(c+169,"coded_data_payload_last", false,-1);
        vcdp->declBus(c+177,"coded_data_payload_fragment", false,-1, 13,0);
        vcdp->declBit(c+185,"clk", false,-1);
        vcdp->declBit(c+193,"reset", false,-1);
        vcdp->declBit(c+121,"ConvEncoder tail_bits_valid", false,-1);
        vcdp->declBus(c+129,"ConvEncoder tail_bits_payload", false,-1, 2,0);
        vcdp->declBit(c+137,"ConvEncoder raw_data_valid", false,-1);
        vcdp->declBit(c+145,"ConvEncoder raw_data_payload_last", false,-1);
        vcdp->declBus(c+153,"ConvEncoder raw_data_payload_fragment", false,-1, 6,0);
        vcdp->declBit(c+161,"ConvEncoder coded_data_valid", false,-1);
        vcdp->declBit(c+169,"ConvEncoder coded_data_payload_last", false,-1);
        vcdp->declBus(c+177,"ConvEncoder coded_data_payload_fragment", false,-1, 13,0);
        vcdp->declBit(c+185,"ConvEncoder clk", false,-1);
        vcdp->declBit(c+193,"ConvEncoder reset", false,-1);
        vcdp->declBus(c+89,"ConvEncoder raw_data_payload", false,-1, 6,0);
        vcdp->declBit(c+113,"ConvEncoder raw_data_valid_1", false,-1);
        vcdp->declBus(c+97,"ConvEncoder coded_data", false,-1, 13,0);
        vcdp->declBit(c+73,"ConvEncoder coded_data_valid_1", false,-1);
        vcdp->declBus(c+105,"ConvEncoder r_enc_buf", false,-1, 2,0);
        vcdp->declBus(c+1,"ConvEncoder r_enc_0", false,-1, 2,0);
        vcdp->declBus(c+9,"ConvEncoder r_enc_1", false,-1, 2,0);
        vcdp->declBus(c+17,"ConvEncoder r_enc_2", false,-1, 2,0);
        vcdp->declBus(c+25,"ConvEncoder r_enc_3", false,-1, 2,0);
        vcdp->declBus(c+33,"ConvEncoder r_enc_4", false,-1, 2,0);
        vcdp->declBus(c+41,"ConvEncoder r_enc_5", false,-1, 2,0);
        vcdp->declBus(c+49,"ConvEncoder r_enc_6", false,-1, 2,0);
        vcdp->declBus(c+57,"ConvEncoder code_vec_0", false,-1, 6,0);
        vcdp->declBus(c+65,"ConvEncoder code_vec_1", false,-1, 6,0);
        vcdp->declBit(c+81,"ConvEncoder raw_data_payload_last_regNext", false,-1);
    }
}

void VConvEncoder::traceFullThis__1(VConvEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,((7U & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_0) 
                                  >> 1U))),3);
        vcdp->fullBus(c+9,((7U & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_1) 
                                  >> 1U))),3);
        vcdp->fullBus(c+17,((7U & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_2) 
                                   >> 1U))),3);
        vcdp->fullBus(c+25,((7U & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_3) 
                                   >> 1U))),3);
        vcdp->fullBus(c+33,((7U & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_4) 
                                   >> 1U))),3);
        vcdp->fullBus(c+41,((7U & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_5) 
                                   >> 1U))),3);
        vcdp->fullBus(c+49,((7U & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_6) 
                                   >> 1U))),3);
        vcdp->fullBus(c+57,(vlTOPp->ConvEncoder__DOT__code_vec_0),7);
        vcdp->fullBus(c+65,(vlTOPp->ConvEncoder__DOT__code_vec_1),7);
        vcdp->fullBit(c+73,(vlTOPp->ConvEncoder__DOT__coded_data_valid_1));
        vcdp->fullBit(c+81,(vlTOPp->ConvEncoder__DOT__raw_data_payload_last_regNext));
        vcdp->fullBus(c+89,(vlTOPp->ConvEncoder__DOT__raw_data_payload),7);
        vcdp->fullBus(c+97,(vlTOPp->ConvEncoder__DOT__coded_data),14);
        vcdp->fullBus(c+105,(vlTOPp->ConvEncoder__DOT__r_enc_buf),3);
        vcdp->fullBit(c+113,(vlTOPp->ConvEncoder__DOT__raw_data_valid_1));
        vcdp->fullBit(c+121,(vlTOPp->tail_bits_valid));
        vcdp->fullBus(c+129,(vlTOPp->tail_bits_payload),3);
        vcdp->fullBit(c+137,(vlTOPp->raw_data_valid));
        vcdp->fullBit(c+145,(vlTOPp->raw_data_payload_last));
        vcdp->fullBus(c+153,(vlTOPp->raw_data_payload_fragment),7);
        vcdp->fullBit(c+161,(vlTOPp->coded_data_valid));
        vcdp->fullBit(c+169,(vlTOPp->coded_data_payload_last));
        vcdp->fullBus(c+177,(vlTOPp->coded_data_payload_fragment),14);
        vcdp->fullBit(c+185,(vlTOPp->clk));
        vcdp->fullBit(c+193,(vlTOPp->reset));
    }
}
