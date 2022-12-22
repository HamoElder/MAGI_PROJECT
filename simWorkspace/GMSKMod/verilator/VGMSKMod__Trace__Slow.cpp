// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VGMSKMod__Syms.h"


//======================

void VGMSKMod::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VGMSKMod::traceInit, &VGMSKMod::traceFull, &VGMSKMod::traceChg, this);
}
void VGMSKMod::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VGMSKMod* t = (VGMSKMod*)userthis;
    VGMSKMod__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VGMSKMod::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VGMSKMod* t = (VGMSKMod*)userthis;
    VGMSKMod__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VGMSKMod::traceInitThis(VGMSKMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGMSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VGMSKMod::traceFullThis(VGMSKMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGMSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VGMSKMod::traceInitThis__1(VGMSKMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGMSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+161,"unit_data_valid", false,-1);
        vcdp->declBit(c+169,"unit_data_payload_last", false,-1);
        vcdp->declBus(c+177,"unit_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+185,"mod_iq_valid", false,-1);
        vcdp->declBit(c+193,"mod_iq_payload_last", false,-1);
        vcdp->declBus(c+201,"mod_iq_payload_fragment_cha_i", false,-1, 15,0);
        vcdp->declBus(c+209,"mod_iq_payload_fragment_cha_q", false,-1, 15,0);
        vcdp->declBit(c+217,"clk", false,-1);
        vcdp->declBit(c+225,"reset", false,-1);
        vcdp->declBit(c+161,"GMSKMod unit_data_valid", false,-1);
        vcdp->declBit(c+169,"GMSKMod unit_data_payload_last", false,-1);
        vcdp->declBus(c+177,"GMSKMod unit_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+185,"GMSKMod mod_iq_valid", false,-1);
        vcdp->declBit(c+193,"GMSKMod mod_iq_payload_last", false,-1);
        vcdp->declBus(c+201,"GMSKMod mod_iq_payload_fragment_cha_i", false,-1, 15,0);
        vcdp->declBus(c+209,"GMSKMod mod_iq_payload_fragment_cha_q", false,-1, 15,0);
        vcdp->declBit(c+217,"GMSKMod clk", false,-1);
        vcdp->declBit(c+225,"GMSKMod reset", false,-1);
        vcdp->declBit(c+41,"GMSKMod symbol_filter_result_data_valid", false,-1);
        vcdp->declBit(c+49,"GMSKMod symbol_filter_result_data_payload_last", false,-1);
        vcdp->declBus(c+57,"GMSKMod symbol_filter_result_data_payload_fragment", false,-1, 11,0);
        vcdp->declBus(c+65,"GMSKMod phi_integral", false,-1, 11,0);
        vcdp->declBus(c+233,"GMSKMod CONST_2PI", false,-1, 11,0);
        vcdp->declBit(c+25,"GMSKMod mod_valid_next", false,-1);
        vcdp->declBit(c+73,"GMSKMod mod_last_next", false,-1);
        vcdp->declBus(c+81,"GMSKMod norm_phi", false,-1, 11,0);
        vcdp->declBus(c+1,"GMSKMod sum_value", false,-1, 11,0);
        vcdp->declBit(c+9,"GMSKMod when_GMSKMod_l111", false,-1);
        vcdp->declBit(c+17,"GMSKMod when_GMSKMod_l113", false,-1);
        vcdp->declBit(c+33,"GMSKMod mod_valid_next_regNext", false,-1);
        vcdp->declBit(c+89,"GMSKMod mod_last_next_regNext", false,-1);
        vcdp->declBit(c+161,"GMSKMod symbol_filter raw_data_valid", false,-1);
        vcdp->declBit(c+169,"GMSKMod symbol_filter raw_data_payload_last", false,-1);
        vcdp->declBus(c+177,"GMSKMod symbol_filter raw_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+41,"GMSKMod symbol_filter result_data_valid", false,-1);
        vcdp->declBit(c+49,"GMSKMod symbol_filter result_data_payload_last", false,-1);
        vcdp->declBus(c+57,"GMSKMod symbol_filter result_data_payload_fragment", false,-1, 11,0);
        vcdp->declBit(c+217,"GMSKMod symbol_filter clk", false,-1);
        vcdp->declBit(c+225,"GMSKMod symbol_filter reset", false,-1);
        vcdp->declBit(c+97,"GMSKMod symbol_filter raw_valid_next", false,-1);
        vcdp->declBit(c+105,"GMSKMod symbol_filter raw_last_next", false,-1);
        vcdp->declBus(c+241,"GMSKMod symbol_filter filter_coff_0", false,-1, 11,0);
        vcdp->declBus(c+249,"GMSKMod symbol_filter filter_coff_1", false,-1, 11,0);
        vcdp->declBus(c+241,"GMSKMod symbol_filter filter_coff_2", false,-1, 11,0);
        vcdp->declBus(c+113,"GMSKMod symbol_filter data_buf_0", false,-1, 1,0);
        vcdp->declBus(c+121,"GMSKMod symbol_filter data_buf_1", false,-1, 1,0);
        vcdp->declBus(c+129,"GMSKMod symbol_filter data_buf_2", false,-1, 1,0);
        vcdp->declBus(c+137,"GMSKMod symbol_filter mixer_cell_0", false,-1, 11,0);
        vcdp->declBus(c+145,"GMSKMod symbol_filter mixer_cell_1", false,-1, 11,0);
        vcdp->declBus(c+153,"GMSKMod symbol_filter mixer_cell_2", false,-1, 11,0);
        vcdp->declBus(c+57,"GMSKMod symbol_filter filtered_data", false,-1, 11,0);
        vcdp->declBit(c+41,"GMSKMod symbol_filter raw_valid_next_regNext", false,-1);
        vcdp->declBit(c+49,"GMSKMod symbol_filter raw_last_next_regNext", false,-1);
    }
}

void VGMSKMod::traceFullThis__1(VGMSKMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGMSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->GMSKMod__DOT__sum_value),12);
        vcdp->fullBit(c+9,(VL_LTS_III(1,12,12, 0x648U, (IData)(vlTOPp->GMSKMod__DOT__sum_value))));
        vcdp->fullBit(c+17,(VL_GTS_III(1,12,12, 0U, (IData)(vlTOPp->GMSKMod__DOT__sum_value))));
        vcdp->fullBit(c+25,(vlTOPp->GMSKMod__DOT__mod_valid_next));
        vcdp->fullBit(c+33,(vlTOPp->GMSKMod__DOT__mod_valid_next_regNext));
        vcdp->fullBit(c+41,(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__raw_valid_next_regNext));
        vcdp->fullBit(c+49,(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__raw_last_next_regNext));
        vcdp->fullBus(c+57,(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__filtered_data),12);
        vcdp->fullBus(c+65,(vlTOPp->GMSKMod__DOT__phi_integral),12);
        vcdp->fullBit(c+73,(vlTOPp->GMSKMod__DOT__mod_last_next));
        vcdp->fullBus(c+81,((0xfffU & VL_SHIFTRS_III(12,12,32, (IData)(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__filtered_data), 3U))),12);
        vcdp->fullBit(c+89,(vlTOPp->GMSKMod__DOT__mod_last_next_regNext));
        vcdp->fullBit(c+97,(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__raw_valid_next));
        vcdp->fullBit(c+105,(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__raw_last_next));
        vcdp->fullBus(c+113,(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_0),2);
        vcdp->fullBus(c+121,(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_1),2);
        vcdp->fullBus(c+129,(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_2),2);
        vcdp->fullBus(c+137,(((1U == (IData)(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_0))
                               ? 0x35U : ((2U == (IData)(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_0))
                                           ? 0xfcbU
                                           : 0U))),12);
        vcdp->fullBus(c+145,(((1U == (IData)(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_1))
                               ? 0x2b8U : ((2U == (IData)(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_1))
                                            ? 0xd48U
                                            : 0U))),12);
        vcdp->fullBus(c+153,(((1U == (IData)(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_2))
                               ? 0x35U : ((2U == (IData)(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_2))
                                           ? 0xfcbU
                                           : 0U))),12);
        vcdp->fullBit(c+161,(vlTOPp->unit_data_valid));
        vcdp->fullBit(c+169,(vlTOPp->unit_data_payload_last));
        vcdp->fullBit(c+177,(vlTOPp->unit_data_payload_fragment));
        vcdp->fullBit(c+185,(vlTOPp->mod_iq_valid));
        vcdp->fullBit(c+193,(vlTOPp->mod_iq_payload_last));
        vcdp->fullBus(c+201,(vlTOPp->mod_iq_payload_fragment_cha_i),16);
        vcdp->fullBus(c+209,(vlTOPp->mod_iq_payload_fragment_cha_q),16);
        vcdp->fullBit(c+217,(vlTOPp->clk));
        vcdp->fullBit(c+225,(vlTOPp->reset));
        vcdp->fullBus(c+233,(0x648U),12);
        vcdp->fullBus(c+241,(0x35U),12);
        vcdp->fullBus(c+249,(0x2b8U),12);
    }
}
