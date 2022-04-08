// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VZeroForcing__Syms.h"


//======================

void VZeroForcing::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VZeroForcing* t = (VZeroForcing*)userthis;
    VZeroForcing__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VZeroForcing::traceChgThis(VZeroForcing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VZeroForcing::traceChgThis__2(VZeroForcing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_15),16);
        vcdp->chgBus(c+9,(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_y),16);
        vcdp->chgBus(c+17,(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_z),16);
        vcdp->chgBit(c+25,(vlTOPp->ZeroForcing__DOT__x_sign));
        vcdp->chgBus(c+33,((0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__x_sign)
                                        ? VL_NEGATE_I((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_y))
                                        : (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_y)))),16);
        vcdp->chgBus(c+41,((0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__x_sign)
                                        ? VL_NEGATE_I((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_z))
                                        : (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_z)))),16);
        vcdp->chgBit(c+49,(vlTOPp->ZeroForcing__DOT__train_en_delay_1));
        vcdp->chgBit(c+57,(vlTOPp->ZeroForcing__DOT__train_en_delay_2));
        vcdp->chgBit(c+65,(vlTOPp->ZeroForcing__DOT__train_en_delay_3));
        vcdp->chgBit(c+73,(vlTOPp->ZeroForcing__DOT__train_en_delay_4));
        vcdp->chgBit(c+81,(vlTOPp->ZeroForcing__DOT__train_en_delay_5));
        vcdp->chgBit(c+89,(vlTOPp->ZeroForcing__DOT__train_en_delay_6));
        vcdp->chgBit(c+97,(vlTOPp->ZeroForcing__DOT__train_en_delay_7));
        vcdp->chgBit(c+105,(vlTOPp->ZeroForcing__DOT__train_en_delay_8));
        vcdp->chgBit(c+113,(vlTOPp->ZeroForcing__DOT__train_en_delay_9));
        vcdp->chgBit(c+121,(vlTOPp->ZeroForcing__DOT__train_en_delay_10));
        vcdp->chgBit(c+129,(vlTOPp->ZeroForcing__DOT__train_en_delay_11));
        vcdp->chgBit(c+137,(vlTOPp->ZeroForcing__DOT__train_en_delay_12));
        vcdp->chgBit(c+145,(vlTOPp->ZeroForcing__DOT__train_en_delay_13));
        vcdp->chgBit(c+153,(vlTOPp->ZeroForcing__DOT__train_en_delay_14));
        vcdp->chgBit(c+161,(vlTOPp->ZeroForcing__DOT__train_en_delay_15));
        vcdp->chgBit(c+169,(vlTOPp->ZeroForcing__DOT__train_en_delay_16));
    }
}

void VZeroForcing::traceChgThis__3(VZeroForcing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+177,(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_15));
    }
}

void VZeroForcing::traceChgThis__4(VZeroForcing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+185,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+193,(vlTOPp->raw_data_ready));
        vcdp->chgBus(c+201,(vlTOPp->raw_data_payload),16);
        vcdp->chgBus(c+209,(vlTOPp->scale),16);
        vcdp->chgBus(c+217,(vlTOPp->ref_data),16);
        vcdp->chgBit(c+225,(vlTOPp->train_en));
        vcdp->chgBit(c+233,(vlTOPp->result_data_valid));
        vcdp->chgBus(c+241,(vlTOPp->result_data_payload),16);
        vcdp->chgBit(c+249,(vlTOPp->clk));
        vcdp->chgBit(c+257,(vlTOPp->reset));
        vcdp->chgBit(c+265,((1U & (~ (IData)(vlTOPp->train_en)))));
        vcdp->chgBus(c+273,((0xffffU & (((0x8000U & (IData)(vlTOPp->raw_data_payload))
                                          ? (~ (IData)(vlTOPp->raw_data_payload))
                                          : (IData)(vlTOPp->raw_data_payload)) 
                                        + (1U & ((IData)(vlTOPp->raw_data_payload) 
                                                 >> 0xfU))))),16);
        vcdp->chgBus(c+281,(((IData)(vlTOPp->train_en)
                              ? (IData)(vlTOPp->ref_data)
                              : 0U)),16);
        vcdp->chgBus(c+289,(((IData)(vlTOPp->train_en)
                              ? 0U : (IData)(vlTOPp->scale))),16);
    }
}
