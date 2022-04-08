// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VZeroForcing__Syms.h"


//======================

void VZeroForcing::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VZeroForcing::traceInit, &VZeroForcing::traceFull, &VZeroForcing::traceChg, this);
}
void VZeroForcing::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VZeroForcing* t = (VZeroForcing*)userthis;
    VZeroForcing__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VZeroForcing::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VZeroForcing* t = (VZeroForcing*)userthis;
    VZeroForcing__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VZeroForcing::traceInitThis(VZeroForcing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VZeroForcing::traceFullThis(VZeroForcing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VZeroForcing::traceInitThis__1(VZeroForcing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+185,"raw_data_valid", false,-1);
        vcdp->declBit(c+193,"raw_data_ready", false,-1);
        vcdp->declBus(c+201,"raw_data_payload", false,-1, 15,0);
        vcdp->declBus(c+209,"scale", false,-1, 15,0);
        vcdp->declBus(c+217,"ref_data", false,-1, 15,0);
        vcdp->declBit(c+225,"train_en", false,-1);
        vcdp->declBit(c+233,"result_data_valid", false,-1);
        vcdp->declBus(c+241,"result_data_payload", false,-1, 15,0);
        vcdp->declBit(c+249,"clk", false,-1);
        vcdp->declBit(c+257,"reset", false,-1);
        vcdp->declBit(c+185,"ZeroForcing raw_data_valid", false,-1);
        vcdp->declBit(c+193,"ZeroForcing raw_data_ready", false,-1);
        vcdp->declBus(c+201,"ZeroForcing raw_data_payload", false,-1, 15,0);
        vcdp->declBus(c+209,"ZeroForcing scale", false,-1, 15,0);
        vcdp->declBus(c+217,"ZeroForcing ref_data", false,-1, 15,0);
        vcdp->declBit(c+225,"ZeroForcing train_en", false,-1);
        vcdp->declBit(c+233,"ZeroForcing result_data_valid", false,-1);
        vcdp->declBus(c+241,"ZeroForcing result_data_payload", false,-1, 15,0);
        vcdp->declBit(c+249,"ZeroForcing clk", false,-1);
        vcdp->declBit(c+257,"ZeroForcing reset", false,-1);
        vcdp->declBit(c+265,"ZeroForcing cal_core_rotate_mode", false,-1);
        vcdp->declBus(c+273,"ZeroForcing cal_core_raw_data_payload_x", false,-1, 15,0);
        vcdp->declBus(c+281,"ZeroForcing cal_core_raw_data_payload_y", false,-1, 15,0);
        vcdp->declBus(c+289,"ZeroForcing cal_core_raw_data_payload_z", false,-1, 15,0);
        vcdp->declBit(c+297,"ZeroForcing cal_core_raw_data_ready", false,-1);
        vcdp->declBit(c+177,"ZeroForcing cal_core_result_valid", false,-1);
        vcdp->declBus(c+1,"ZeroForcing cal_core_result_payload_x", false,-1, 15,0);
        vcdp->declBus(c+9,"ZeroForcing cal_core_result_payload_y", false,-1, 15,0);
        vcdp->declBus(c+17,"ZeroForcing cal_core_result_payload_z", false,-1, 15,0);
        vcdp->declBit(c+25,"ZeroForcing x_sign", false,-1);
        vcdp->declBus(c+33,"ZeroForcing mul_result", false,-1, 15,0);
        vcdp->declBus(c+41,"ZeroForcing div_result", false,-1, 15,0);
        vcdp->declBit(c+49,"ZeroForcing train_en_delay_1", false,-1);
        vcdp->declBit(c+57,"ZeroForcing train_en_delay_2", false,-1);
        vcdp->declBit(c+65,"ZeroForcing train_en_delay_3", false,-1);
        vcdp->declBit(c+73,"ZeroForcing train_en_delay_4", false,-1);
        vcdp->declBit(c+81,"ZeroForcing train_en_delay_5", false,-1);
        vcdp->declBit(c+89,"ZeroForcing train_en_delay_6", false,-1);
        vcdp->declBit(c+97,"ZeroForcing train_en_delay_7", false,-1);
        vcdp->declBit(c+105,"ZeroForcing train_en_delay_8", false,-1);
        vcdp->declBit(c+113,"ZeroForcing train_en_delay_9", false,-1);
        vcdp->declBit(c+121,"ZeroForcing train_en_delay_10", false,-1);
        vcdp->declBit(c+129,"ZeroForcing train_en_delay_11", false,-1);
        vcdp->declBit(c+137,"ZeroForcing train_en_delay_12", false,-1);
        vcdp->declBit(c+145,"ZeroForcing train_en_delay_13", false,-1);
        vcdp->declBit(c+153,"ZeroForcing train_en_delay_14", false,-1);
        vcdp->declBit(c+161,"ZeroForcing train_en_delay_15", false,-1);
        vcdp->declBit(c+169,"ZeroForcing train_en_delay_16", false,-1);
        vcdp->declBit(c+265,"ZeroForcing cal_core rotate_mode", false,-1);
        vcdp->declBus(c+305,"ZeroForcing cal_core x_u", false,-1, 1,0);
        vcdp->declBit(c+185,"ZeroForcing cal_core raw_data_valid", false,-1);
        vcdp->declBit(c+297,"ZeroForcing cal_core raw_data_ready", false,-1);
        vcdp->declBus(c+273,"ZeroForcing cal_core raw_data_payload_x", false,-1, 15,0);
        vcdp->declBus(c+281,"ZeroForcing cal_core raw_data_payload_y", false,-1, 15,0);
        vcdp->declBus(c+289,"ZeroForcing cal_core raw_data_payload_z", false,-1, 15,0);
        vcdp->declBit(c+177,"ZeroForcing cal_core result_valid", false,-1);
        vcdp->declBus(c+1,"ZeroForcing cal_core result_payload_x", false,-1, 15,0);
        vcdp->declBus(c+9,"ZeroForcing cal_core result_payload_y", false,-1, 15,0);
        vcdp->declBus(c+17,"ZeroForcing cal_core result_payload_z", false,-1, 15,0);
        vcdp->declBit(c+249,"ZeroForcing cal_core clk", false,-1);
        vcdp->declBit(c+257,"ZeroForcing cal_core reset", false,-1);
        vcdp->declBit(c+185,"ZeroForcing cal_core raw_data_fire", false,-1);
    }
}

void VZeroForcing::traceFullThis__1(VZeroForcing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_15),16);
        vcdp->fullBus(c+9,(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_y),16);
        vcdp->fullBus(c+17,(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_z),16);
        vcdp->fullBit(c+25,(vlTOPp->ZeroForcing__DOT__x_sign));
        vcdp->fullBus(c+33,((0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__x_sign)
                                         ? VL_NEGATE_I((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_y))
                                         : (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_y)))),16);
        vcdp->fullBus(c+41,((0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__x_sign)
                                         ? VL_NEGATE_I((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_z))
                                         : (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_z)))),16);
        vcdp->fullBit(c+49,(vlTOPp->ZeroForcing__DOT__train_en_delay_1));
        vcdp->fullBit(c+57,(vlTOPp->ZeroForcing__DOT__train_en_delay_2));
        vcdp->fullBit(c+65,(vlTOPp->ZeroForcing__DOT__train_en_delay_3));
        vcdp->fullBit(c+73,(vlTOPp->ZeroForcing__DOT__train_en_delay_4));
        vcdp->fullBit(c+81,(vlTOPp->ZeroForcing__DOT__train_en_delay_5));
        vcdp->fullBit(c+89,(vlTOPp->ZeroForcing__DOT__train_en_delay_6));
        vcdp->fullBit(c+97,(vlTOPp->ZeroForcing__DOT__train_en_delay_7));
        vcdp->fullBit(c+105,(vlTOPp->ZeroForcing__DOT__train_en_delay_8));
        vcdp->fullBit(c+113,(vlTOPp->ZeroForcing__DOT__train_en_delay_9));
        vcdp->fullBit(c+121,(vlTOPp->ZeroForcing__DOT__train_en_delay_10));
        vcdp->fullBit(c+129,(vlTOPp->ZeroForcing__DOT__train_en_delay_11));
        vcdp->fullBit(c+137,(vlTOPp->ZeroForcing__DOT__train_en_delay_12));
        vcdp->fullBit(c+145,(vlTOPp->ZeroForcing__DOT__train_en_delay_13));
        vcdp->fullBit(c+153,(vlTOPp->ZeroForcing__DOT__train_en_delay_14));
        vcdp->fullBit(c+161,(vlTOPp->ZeroForcing__DOT__train_en_delay_15));
        vcdp->fullBit(c+169,(vlTOPp->ZeroForcing__DOT__train_en_delay_16));
        vcdp->fullBit(c+177,(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_15));
        vcdp->fullBit(c+185,(vlTOPp->raw_data_valid));
        vcdp->fullBit(c+193,(vlTOPp->raw_data_ready));
        vcdp->fullBus(c+201,(vlTOPp->raw_data_payload),16);
        vcdp->fullBus(c+209,(vlTOPp->scale),16);
        vcdp->fullBus(c+217,(vlTOPp->ref_data),16);
        vcdp->fullBit(c+225,(vlTOPp->train_en));
        vcdp->fullBit(c+233,(vlTOPp->result_data_valid));
        vcdp->fullBus(c+241,(vlTOPp->result_data_payload),16);
        vcdp->fullBit(c+249,(vlTOPp->clk));
        vcdp->fullBit(c+257,(vlTOPp->reset));
        vcdp->fullBit(c+265,((1U & (~ (IData)(vlTOPp->train_en)))));
        vcdp->fullBus(c+273,((0xffffU & (((0x8000U 
                                           & (IData)(vlTOPp->raw_data_payload))
                                           ? (~ (IData)(vlTOPp->raw_data_payload))
                                           : (IData)(vlTOPp->raw_data_payload)) 
                                         + (1U & ((IData)(vlTOPp->raw_data_payload) 
                                                  >> 0xfU))))),16);
        vcdp->fullBus(c+281,(((IData)(vlTOPp->train_en)
                               ? (IData)(vlTOPp->ref_data)
                               : 0U)),16);
        vcdp->fullBus(c+289,(((IData)(vlTOPp->train_en)
                               ? 0U : (IData)(vlTOPp->scale))),16);
        vcdp->fullBit(c+297,(1U));
        vcdp->fullBus(c+305,(1U),2);
    }
}
