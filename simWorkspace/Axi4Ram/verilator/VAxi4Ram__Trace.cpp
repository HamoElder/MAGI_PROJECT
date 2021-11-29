// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxi4Ram__Syms.h"


//======================

void VAxi4Ram::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxi4Ram* t = (VAxi4Ram*)userthis;
    VAxi4Ram__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VAxi4Ram::traceChgThis(VAxi4Ram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 4U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAxi4Ram::traceChgThis__2(VAxi4Ram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,((1U & (~ (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+9,(vlTOPp->Axi4Ram__DOT__ar_fifo_io_pop_valid));
        vcdp->chgBus(c+17,(((((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_risingOccupancy) 
                              & (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_ptrMatch)) 
                             << 2U) | (3U & ((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_value))))),3);
        vcdp->chgBus(c+25,(((((~ (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_risingOccupancy)) 
                              & (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_ptrMatch)) 
                             << 2U) | (3U & ((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_value))))),3);
        vcdp->chgBit(c+33,((1U & (~ (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+41,(vlTOPp->Axi4Ram__DOT__aw_fifo_io_pop_valid));
        vcdp->chgBus(c+49,(((((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_risingOccupancy) 
                              & (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_ptrMatch)) 
                             << 2U) | (3U & ((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_value))))),3);
        vcdp->chgBus(c+57,(((((~ (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_risingOccupancy)) 
                              & (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_ptrMatch)) 
                             << 2U) | (3U & ((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_value))))),3);
        vcdp->chgBit(c+65,((1U & (~ (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+73,(vlTOPp->Axi4Ram__DOT__b_fifo_io_pop_valid));
        vcdp->chgBus(c+81,(((((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_risingOccupancy) 
                              & (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_ptrMatch)) 
                             << 2U) | (3U & ((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_value))))),3);
        vcdp->chgBus(c+89,(((((~ (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_risingOccupancy)) 
                              & (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_ptrMatch)) 
                             << 2U) | (3U & ((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_value))))),3);
        vcdp->chgBit(c+97,((1U & (~ (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+105,(vlTOPp->Axi4Ram__DOT__r_fifo_io_pop_valid));
        vcdp->chgBus(c+113,(((((IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_ptrMatch)) 
                              << 8U) | (0xffU & ((IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_value))))),9);
        vcdp->chgBus(c+121,(((((~ (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_ptrMatch)) 
                              << 8U) | (0xffU & ((IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_value))))),9);
        vcdp->chgBit(c+129,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+137,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_valueNext),2);
        vcdp->chgBit(c+145,(((3U == (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+153,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+161,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popping));
        vcdp->chgBit(c+169,(((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+177,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_full));
        vcdp->chgBit(c+185,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+193,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_valueNext),2);
        vcdp->chgBit(c+201,(((3U == (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+209,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+217,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popping));
        vcdp->chgBit(c+225,(((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+233,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_full));
        vcdp->chgBit(c+241,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+249,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_valueNext),2);
        vcdp->chgBit(c+257,(((3U == (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+265,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+273,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+281,(((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+289,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_full));
        vcdp->chgBit(c+297,(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+305,(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_valueNext),8);
        vcdp->chgBit(c+313,(((0xffU == (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+321,(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+329,(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+337,(((IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+345,(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_full));
    }
}

void VAxi4Ram::traceChgThis__3(VAxi4Ram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+353,(((3U == (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+361,(((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+369,(((3U == (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+377,(((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+385,(((3U == (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+393,(((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+401,(((0xffU == (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+409,(((IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popping))));
    }
}

void VAxi4Ram::traceChgThis__4(VAxi4Ram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+417,(vlTOPp->Axi4Ram__DOT__axi4_w_fire));
        vcdp->chgBit(c+425,(vlTOPp->Axi4Ram__DOT__axi4_w_fire_2));
        vcdp->chgBit(c+433,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+441,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_valueNext),2);
        vcdp->chgBit(c+449,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+457,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+465,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_valueNext),2);
        vcdp->chgBit(c+473,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+481,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+489,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_valueNext),2);
        vcdp->chgBit(c+497,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popping));
        vcdp->chgBit(c+505,(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+513,(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_valueNext),8);
        vcdp->chgBit(c+521,(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popping));
    }
}

void VAxi4Ram::traceChgThis__5(VAxi4Ram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+529,((((IData)(vlTOPp->Axi4Ram__DOT___zz_ramsymbol_read_3) 
                              << 0x18U) | (((IData)(vlTOPp->Axi4Ram__DOT___zz_ramsymbol_read_2) 
                                            << 0x10U) 
                                           | (((IData)(vlTOPp->Axi4Ram__DOT___zz_ramsymbol_read_1) 
                                               << 8U) 
                                              | (IData)(vlTOPp->Axi4Ram__DOT___zz_ramsymbol_read))))),32);
        vcdp->chgBus(c+537,((0x1fffU & (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT___zz_logic_ram_port0))),13);
        vcdp->chgBus(c+545,((0xffU & (IData)((vlTOPp->Axi4Ram__DOT__ar_fifo__DOT___zz_logic_ram_port0 
                                              >> 0xdU)))),8);
        vcdp->chgBus(c+553,((0xffU & (IData)((vlTOPp->Axi4Ram__DOT__ar_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x15U)))),8);
        vcdp->chgBus(c+561,((7U & (IData)((vlTOPp->Axi4Ram__DOT__ar_fifo__DOT___zz_logic_ram_port0 
                                           >> 0x1dU)))),3);
        vcdp->chgBus(c+569,((3U & (IData)((vlTOPp->Axi4Ram__DOT__ar_fifo__DOT___zz_logic_ram_port0 
                                           >> 0x20U)))),2);
        vcdp->chgBus(c+577,((0x1fffU & (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT___zz_logic_ram_port0))),13);
        vcdp->chgBus(c+585,((0xffU & (IData)((vlTOPp->Axi4Ram__DOT__aw_fifo__DOT___zz_logic_ram_port0 
                                              >> 0xdU)))),8);
        vcdp->chgBus(c+593,((0xffU & (IData)((vlTOPp->Axi4Ram__DOT__aw_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x15U)))),8);
        vcdp->chgBus(c+601,((7U & (IData)((vlTOPp->Axi4Ram__DOT__aw_fifo__DOT___zz_logic_ram_port0 
                                           >> 0x1dU)))),3);
        vcdp->chgBus(c+609,((3U & (IData)((vlTOPp->Axi4Ram__DOT__aw_fifo__DOT___zz_logic_ram_port0 
                                           >> 0x20U)))),2);
        vcdp->chgBus(c+617,((0xffU & (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT___zz_logic_ram_port0))),8);
        vcdp->chgBus(c+625,((3U & ((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT___zz_logic_ram_port0) 
                                   >> 8U))),2);
        vcdp->chgBus(c+633,((IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->chgBus(c+641,((0xffU & (IData)((vlTOPp->Axi4Ram__DOT__r_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x20U)))),8);
        vcdp->chgBus(c+649,((3U & (IData)((vlTOPp->Axi4Ram__DOT__r_fifo__DOT___zz_logic_ram_port0 
                                           >> 0x28U)))),2);
        vcdp->chgBit(c+657,((1U & (IData)((vlTOPp->Axi4Ram__DOT__r_fifo__DOT___zz_logic_ram_port0 
                                           >> 0x2aU)))));
        vcdp->chgBus(c+665,(vlTOPp->Axi4Ram__DOT__rd_addr),13);
        vcdp->chgBus(c+673,(vlTOPp->Axi4Ram__DOT__rd_id),8);
        vcdp->chgBus(c+681,(vlTOPp->Axi4Ram__DOT__rd_size),3);
        vcdp->chgBus(c+689,(vlTOPp->Axi4Ram__DOT__rd_burst),2);
        vcdp->chgBus(c+697,(vlTOPp->Axi4Ram__DOT__wr_addr),13);
        vcdp->chgBus(c+705,(vlTOPp->Axi4Ram__DOT__wr_size),3);
        vcdp->chgBus(c+713,(vlTOPp->Axi4Ram__DOT__wr_burst),2);
        vcdp->chgBus(c+721,(vlTOPp->Axi4Ram__DOT__b_id),8);
        vcdp->chgQuad(c+729,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_ram[0]),34);
        vcdp->chgQuad(c+731,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_ram[1]),34);
        vcdp->chgQuad(c+733,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_ram[2]),34);
        vcdp->chgQuad(c+735,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_ram[3]),34);
        vcdp->chgQuad(c+793,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_ram[0]),34);
        vcdp->chgQuad(c+795,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_ram[1]),34);
        vcdp->chgQuad(c+797,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_ram[2]),34);
        vcdp->chgQuad(c+799,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_ram[3]),34);
        vcdp->chgBus(c+857,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_ram[0]),10);
        vcdp->chgBus(c+858,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_ram[1]),10);
        vcdp->chgBus(c+859,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_ram[2]),10);
        vcdp->chgBus(c+860,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_ram[3]),10);
        vcdp->chgBit(c+889,(vlTOPp->Axi4Ram__DOT___zz_io_push_valid));
        vcdp->chgBit(c+897,(vlTOPp->Axi4Ram__DOT___zz_io_push_payload_last));
    }
}

void VAxi4Ram::traceChgThis__6(VAxi4Ram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+905,((0U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_r_state))));
        vcdp->chgBit(c+913,((0U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_state))));
        vcdp->chgBus(c+921,(vlTOPp->Axi4Ram__DOT__axi4_r_state),2);
        vcdp->chgBus(c+929,(vlTOPp->Axi4Ram__DOT__axi4_w_state),2);
        vcdp->chgBit(c+937,(vlTOPp->Axi4Ram__DOT__b_valid));
        vcdp->chgQuad(c+945,(((0U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_r_state))
                               ? VL_ULL(0x49444c4520)
                               : ((1U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_r_state))
                                   ? VL_ULL(0x4255525354)
                                   : ((2U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_r_state))
                                       ? VL_ULL(0x5245535020)
                                       : VL_ULL(0x3f3f3f3f3f))))),40);
        vcdp->chgQuad(c+961,(((0U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_state))
                               ? VL_ULL(0x49444c4520)
                               : ((1U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_state))
                                   ? VL_ULL(0x4255525354)
                                   : ((2U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_state))
                                       ? VL_ULL(0x5245535020)
                                       : VL_ULL(0x3f3f3f3f3f))))),40);
        vcdp->chgBus(c+977,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_value),2);
        vcdp->chgBit(c+985,((3U == (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+993,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_value),2);
        vcdp->chgBit(c+1001,((3U == (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+1009,(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+1017,((3U & ((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_value)))),2);
        vcdp->chgBus(c+1025,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_value),2);
        vcdp->chgBit(c+1033,((3U == (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+1041,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_value),2);
        vcdp->chgBit(c+1049,((3U == (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+1057,(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+1065,((3U & ((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_value)))),2);
        vcdp->chgBus(c+1073,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_value),2);
        vcdp->chgBit(c+1081,((3U == (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+1089,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_value),2);
        vcdp->chgBit(c+1097,((3U == (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+1105,(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+1113,((3U & ((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_value)))),2);
        vcdp->chgBus(c+1121,(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_value),8);
        vcdp->chgBit(c+1129,((0xffU == (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+1137,(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_value),8);
        vcdp->chgBit(c+1145,((0xffU == (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+1153,(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+1161,((0xffU & ((IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_value)))),8);
    }
}

void VAxi4Ram::traceChgThis__7(VAxi4Ram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1169,(vlTOPp->Axi4Ram__DOT__rd_cnt),8);
        vcdp->chgBit(c+1177,((0U == (IData)(vlTOPp->Axi4Ram__DOT__rd_cnt))));
        vcdp->chgBus(c+1185,(vlTOPp->Axi4Ram__DOT__wr_cnt),8);
    }
}

void VAxi4Ram::traceChgThis__8(VAxi4Ram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1193,(vlTOPp->axi4_awvalid));
        vcdp->chgBit(c+1201,(vlTOPp->axi4_awready));
        vcdp->chgBus(c+1209,(vlTOPp->axi4_awaddr),13);
        vcdp->chgBus(c+1217,(vlTOPp->axi4_awid),8);
        vcdp->chgBus(c+1225,(vlTOPp->axi4_awlen),8);
        vcdp->chgBus(c+1233,(vlTOPp->axi4_awsize),3);
        vcdp->chgBus(c+1241,(vlTOPp->axi4_awburst),2);
        vcdp->chgBit(c+1249,(vlTOPp->axi4_wvalid));
        vcdp->chgBit(c+1257,(vlTOPp->axi4_wready));
        vcdp->chgBus(c+1265,(vlTOPp->axi4_wdata),32);
        vcdp->chgBus(c+1273,(vlTOPp->axi4_wstrb),4);
        vcdp->chgBit(c+1281,(vlTOPp->axi4_wlast));
        vcdp->chgBit(c+1289,(vlTOPp->axi4_bvalid));
        vcdp->chgBit(c+1297,(vlTOPp->axi4_bready));
        vcdp->chgBus(c+1305,(vlTOPp->axi4_bid),8);
        vcdp->chgBus(c+1313,(vlTOPp->axi4_bresp),2);
        vcdp->chgBit(c+1321,(vlTOPp->axi4_arvalid));
        vcdp->chgBit(c+1329,(vlTOPp->axi4_arready));
        vcdp->chgBus(c+1337,(vlTOPp->axi4_araddr),13);
        vcdp->chgBus(c+1345,(vlTOPp->axi4_arid),8);
        vcdp->chgBus(c+1353,(vlTOPp->axi4_arlen),8);
        vcdp->chgBus(c+1361,(vlTOPp->axi4_arsize),3);
        vcdp->chgBus(c+1369,(vlTOPp->axi4_arburst),2);
        vcdp->chgBit(c+1377,(vlTOPp->axi4_rvalid));
        vcdp->chgBit(c+1385,(vlTOPp->axi4_rready));
        vcdp->chgBus(c+1393,(vlTOPp->axi4_rdata),32);
        vcdp->chgBus(c+1401,(vlTOPp->axi4_rid),8);
        vcdp->chgBus(c+1409,(vlTOPp->axi4_rresp),2);
        vcdp->chgBit(c+1417,(vlTOPp->axi4_rlast));
        vcdp->chgBit(c+1425,(vlTOPp->clk));
        vcdp->chgBit(c+1433,(vlTOPp->reset));
        vcdp->chgBit(c+1441,(((IData)(vlTOPp->axi4_wvalid) 
                              & (IData)(vlTOPp->axi4_wready))));
        vcdp->chgBit(c+1449,(((0U == (IData)(vlTOPp->Axi4Ram__DOT__wr_cnt)) 
                              & ((IData)(vlTOPp->axi4_wvalid) 
                                 & (IData)(vlTOPp->axi4_wready)))));
    }
}
