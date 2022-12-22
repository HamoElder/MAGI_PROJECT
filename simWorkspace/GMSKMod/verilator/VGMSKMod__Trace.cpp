// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VGMSKMod__Syms.h"


//======================

void VGMSKMod::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VGMSKMod* t = (VGMSKMod*)userthis;
    VGMSKMod__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VGMSKMod::traceChgThis(VGMSKMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGMSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VGMSKMod::traceChgThis__2(VGMSKMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGMSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->GMSKMod__DOT__sum_value),12);
        vcdp->chgBit(c+9,(VL_LTS_III(1,12,12, 0x648U, (IData)(vlTOPp->GMSKMod__DOT__sum_value))));
        vcdp->chgBit(c+17,(VL_GTS_III(1,12,12, 0U, (IData)(vlTOPp->GMSKMod__DOT__sum_value))));
    }
}

void VGMSKMod::traceChgThis__3(VGMSKMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGMSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+25,(vlTOPp->GMSKMod__DOT__mod_valid_next));
        vcdp->chgBit(c+33,(vlTOPp->GMSKMod__DOT__mod_valid_next_regNext));
    }
}

void VGMSKMod::traceChgThis__4(VGMSKMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGMSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+41,(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__raw_valid_next_regNext));
        vcdp->chgBit(c+49,(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__raw_last_next_regNext));
        vcdp->chgBus(c+57,(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__filtered_data),12);
        vcdp->chgBus(c+65,(vlTOPp->GMSKMod__DOT__phi_integral),12);
        vcdp->chgBit(c+73,(vlTOPp->GMSKMod__DOT__mod_last_next));
        vcdp->chgBus(c+81,((0xfffU & VL_SHIFTRS_III(12,12,32, (IData)(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__filtered_data), 3U))),12);
        vcdp->chgBit(c+89,(vlTOPp->GMSKMod__DOT__mod_last_next_regNext));
        vcdp->chgBit(c+97,(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__raw_valid_next));
        vcdp->chgBit(c+105,(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__raw_last_next));
        vcdp->chgBus(c+113,(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_0),2);
        vcdp->chgBus(c+121,(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_1),2);
        vcdp->chgBus(c+129,(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_2),2);
        vcdp->chgBus(c+137,(((1U == (IData)(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_0))
                              ? 0x35U : ((2U == (IData)(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_0))
                                          ? 0xfcbU : 0U))),12);
        vcdp->chgBus(c+145,(((1U == (IData)(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_1))
                              ? 0x2b8U : ((2U == (IData)(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_1))
                                           ? 0xd48U
                                           : 0U))),12);
        vcdp->chgBus(c+153,(((1U == (IData)(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_2))
                              ? 0x35U : ((2U == (IData)(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__data_buf_2))
                                          ? 0xfcbU : 0U))),12);
    }
}

void VGMSKMod::traceChgThis__5(VGMSKMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGMSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+161,(vlTOPp->unit_data_valid));
        vcdp->chgBit(c+169,(vlTOPp->unit_data_payload_last));
        vcdp->chgBit(c+177,(vlTOPp->unit_data_payload_fragment));
        vcdp->chgBit(c+185,(vlTOPp->mod_iq_valid));
        vcdp->chgBit(c+193,(vlTOPp->mod_iq_payload_last));
        vcdp->chgBus(c+201,(vlTOPp->mod_iq_payload_fragment_cha_i),16);
        vcdp->chgBus(c+209,(vlTOPp->mod_iq_payload_fragment_cha_q),16);
        vcdp->chgBit(c+217,(vlTOPp->clk));
        vcdp->chgBit(c+225,(vlTOPp->reset));
    }
}
