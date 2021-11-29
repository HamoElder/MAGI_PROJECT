// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxi4Rom__Syms.h"


//======================

void VAxi4Rom::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxi4Rom* t = (VAxi4Rom*)userthis;
    VAxi4Rom__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VAxi4Rom::traceChgThis(VAxi4Rom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VAxi4Rom::traceChgThis__2(VAxi4Rom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,((1U & (~ (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+9,(vlTOPp->Axi4Rom__DOT__ar_fifo_io_pop_valid));
        vcdp->chgBus(c+17,(((((IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_risingOccupancy) 
                              & (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_ptrMatch)) 
                             << 2U) | (3U & ((IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_value))))),3);
        vcdp->chgBus(c+25,(((((~ (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_risingOccupancy)) 
                              & (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_ptrMatch)) 
                             << 2U) | (3U & ((IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_value))))),3);
        vcdp->chgBit(c+33,((1U & (~ (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+41,(vlTOPp->Axi4Rom__DOT__r_fifo_io_pop_valid));
        vcdp->chgBus(c+49,(((((IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_risingOccupancy) 
                              & (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_ptrMatch)) 
                             << 2U) | (3U & ((IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_value))))),3);
        vcdp->chgBus(c+57,(((((~ (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_risingOccupancy)) 
                              & (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_ptrMatch)) 
                             << 2U) | (3U & ((IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_value))))),3);
        vcdp->chgBit(c+65,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+73,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_valueNext),2);
        vcdp->chgBit(c+81,(((3U == (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_value)) 
                            & (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+89,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+97,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popping));
        vcdp->chgBit(c+105,(((IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+113,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_full));
        vcdp->chgBit(c+121,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+129,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_valueNext),2);
        vcdp->chgBit(c+137,(((3U == (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+145,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+153,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+161,(((IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+169,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_full));
    }
}

void VAxi4Rom::traceChgThis__3(VAxi4Rom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+177,(((3U == (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+185,(((IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+193,(((3U == (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+201,(((IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popping))));
    }
}

void VAxi4Rom::traceChgThis__4(VAxi4Rom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+209,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+217,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_valueNext),2);
        vcdp->chgBit(c+225,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+233,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+241,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_valueNext),2);
        vcdp->chgBit(c+249,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popping));
    }
}

void VAxi4Rom::traceChgThis__5(VAxi4Rom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+257,(vlTOPp->Axi4Rom__DOT___zz_rom_port0),32);
        vcdp->chgBus(c+265,((0x1fffU & (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT___zz_logic_ram_port0))),13);
        vcdp->chgBus(c+273,((0xffU & (IData)((vlTOPp->Axi4Rom__DOT__ar_fifo__DOT___zz_logic_ram_port0 
                                              >> 0xdU)))),8);
        vcdp->chgBus(c+281,((0xffU & (IData)((vlTOPp->Axi4Rom__DOT__ar_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x15U)))),8);
        vcdp->chgBus(c+289,((7U & (IData)((vlTOPp->Axi4Rom__DOT__ar_fifo__DOT___zz_logic_ram_port0 
                                           >> 0x1dU)))),3);
        vcdp->chgBus(c+297,((3U & (IData)((vlTOPp->Axi4Rom__DOT__ar_fifo__DOT___zz_logic_ram_port0 
                                           >> 0x20U)))),2);
        vcdp->chgBus(c+305,((IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->chgBus(c+313,((0xffU & (IData)((vlTOPp->Axi4Rom__DOT__r_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x20U)))),8);
        vcdp->chgBus(c+321,((3U & (IData)((vlTOPp->Axi4Rom__DOT__r_fifo__DOT___zz_logic_ram_port0 
                                           >> 0x28U)))),2);
        vcdp->chgBit(c+329,((1U & (IData)((vlTOPp->Axi4Rom__DOT__r_fifo__DOT___zz_logic_ram_port0 
                                           >> 0x2aU)))));
        vcdp->chgBus(c+337,(vlTOPp->Axi4Rom__DOT__rd_addr),13);
        vcdp->chgBus(c+345,(vlTOPp->Axi4Rom__DOT__rd_id),8);
        vcdp->chgBus(c+353,(vlTOPp->Axi4Rom__DOT__rd_size),3);
        vcdp->chgBus(c+361,(vlTOPp->Axi4Rom__DOT__rd_burst),2);
        vcdp->chgQuad(c+369,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_ram[0]),34);
        vcdp->chgQuad(c+371,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_ram[1]),34);
        vcdp->chgQuad(c+373,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_ram[2]),34);
        vcdp->chgQuad(c+375,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_ram[3]),34);
        vcdp->chgBit(c+433,(vlTOPp->Axi4Rom__DOT___zz_io_push_valid));
        vcdp->chgBit(c+441,(vlTOPp->Axi4Rom__DOT___zz_io_push_payload_last));
        vcdp->chgQuad(c+449,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_ram[0]),43);
        vcdp->chgQuad(c+451,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_ram[1]),43);
        vcdp->chgQuad(c+453,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_ram[2]),43);
        vcdp->chgQuad(c+455,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_ram[3]),43);
    }
}

void VAxi4Rom::traceChgThis__6(VAxi4Rom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+513,((1U & (~ (IData)(vlTOPp->Axi4Rom__DOT__axi4_r_state)))));
        vcdp->chgBit(c+521,(vlTOPp->Axi4Rom__DOT__axi4_r_state));
        vcdp->chgQuad(c+529,(((IData)(vlTOPp->Axi4Rom__DOT__axi4_r_state)
                               ? ((IData)(vlTOPp->Axi4Rom__DOT__axi4_r_state)
                                   ? VL_ULL(0x4255525354)
                                   : VL_ULL(0x3f3f3f3f3f))
                               : VL_ULL(0x49444c4520))),40);
        vcdp->chgBus(c+545,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_value),2);
        vcdp->chgBit(c+553,((3U == (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+561,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_value),2);
        vcdp->chgBit(c+569,((3U == (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+577,(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+585,((3U & ((IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_value) 
                                   - (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_value)))),2);
        vcdp->chgBus(c+593,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_value),2);
        vcdp->chgBit(c+601,((3U == (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+609,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_value),2);
        vcdp->chgBit(c+617,((3U == (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+625,(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+633,((3U & ((IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_value) 
                                   - (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_value)))),2);
    }
}

void VAxi4Rom::traceChgThis__7(VAxi4Rom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+641,(vlTOPp->Axi4Rom__DOT__rd_cnt),8);
        vcdp->chgBit(c+649,((0U == (IData)(vlTOPp->Axi4Rom__DOT__rd_cnt))));
    }
}

void VAxi4Rom::traceChgThis__8(VAxi4Rom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+657,(vlTOPp->axi4_arvalid));
        vcdp->chgBit(c+665,(vlTOPp->axi4_arready));
        vcdp->chgBus(c+673,(vlTOPp->axi4_araddr),13);
        vcdp->chgBus(c+681,(vlTOPp->axi4_arid),8);
        vcdp->chgBus(c+689,(vlTOPp->axi4_arlen),8);
        vcdp->chgBus(c+697,(vlTOPp->axi4_arsize),3);
        vcdp->chgBus(c+705,(vlTOPp->axi4_arburst),2);
        vcdp->chgBit(c+713,(vlTOPp->axi4_rvalid));
        vcdp->chgBit(c+721,(vlTOPp->axi4_rready));
        vcdp->chgBus(c+729,(vlTOPp->axi4_rdata),32);
        vcdp->chgBus(c+737,(vlTOPp->axi4_rid),8);
        vcdp->chgBus(c+745,(vlTOPp->axi4_rresp),2);
        vcdp->chgBit(c+753,(vlTOPp->axi4_rlast));
        vcdp->chgBit(c+761,(vlTOPp->clk));
        vcdp->chgBit(c+769,(vlTOPp->reset));
    }
}
