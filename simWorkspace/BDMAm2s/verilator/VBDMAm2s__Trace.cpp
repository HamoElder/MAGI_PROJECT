// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBDMAm2s__Syms.h"


//======================

void VBDMAm2s::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VBDMAm2s* t = (VBDMAm2s*)userthis;
    VBDMAm2s__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VBDMAm2s::traceChgThis(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
                                              >> 3U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 4U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 1U) | (vlTOPp->__Vm_traceActivity 
                                          >> 3U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VBDMAm2s::traceChgThis__2(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+9,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_pop_valid));
        vcdp->chgBus(c+17,(((((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch)) 
                             << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value))))),4);
        vcdp->chgBus(c+25,(((((~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy)) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch)) 
                             << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value))))),4);
        vcdp->chgBit(c+33,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+41,((1U & ((~ ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
                                      & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))) 
                                  & (~ ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_io_pop_valid) 
                                        & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_full))))))));
        vcdp->chgBus(c+49,(((((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch)) 
                             << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value))))),4);
        vcdp->chgBus(c+57,(((((~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy)) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch)) 
                             << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value))))),4);
        vcdp->chgBit(c+65,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+73,((1U & ((~ ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
                                      & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))) 
                                  & (~ ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT___zz_io_pop_valid) 
                                        & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_full))))))));
        vcdp->chgBus(c+81,(((((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch)) 
                             << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value))))),4);
        vcdp->chgBus(c+89,(((((~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch)) 
                             << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))))),4);
        vcdp->chgBit(c+97,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+105,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid));
        vcdp->chgBus(c+113,(((((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value))))),6);
        vcdp->chgBus(c+121,(((((~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value))))),6);
        vcdp->chgBit(c+129,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire));
        vcdp->chgBit(c+137,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_valid) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full)))));
        vcdp->chgArray(c+145,(vlTOPp->BDMAm2s__DOT__m2s_cch_state_string),72);
        vcdp->chgBit(c+169,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+177,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+185,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+193,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+201,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+209,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full));
        vcdp->chgBit(c+217,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+225,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+233,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+241,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+249,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+257,(((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+265,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_full));
        vcdp->chgBit(c+273,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+281,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+289,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+297,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+305,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+313,(((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+321,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_full));
        vcdp->chgBit(c+329,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+337,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+345,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_full));
    }
}

void VBDMAm2s::traceChgThis__3(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+353,((((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len)) 
                              & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_pop_valid))) 
                             & (3U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state)))));
    }
}

void VBDMAm2s::traceChgThis__4(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+361,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+369,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire) 
                             != (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+377,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+385,(((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+393,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+401,(((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+409,(((0x1fU == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+417,(((0x1fU == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement))));
    }
}

void VBDMAm2s::traceChgThis__5(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+425,(vlTOPp->BDMAm2s__DOT__m2s_cch_fire));
        vcdp->chgBit(c+433,(vlTOPp->BDMAm2s__DOT__dma_ar_fire_2));
        vcdp->chgBit(c+441,(vlTOPp->BDMAm2s__DOT__dma_r_fire));
        vcdp->chgBit(c+449,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+457,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+465,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popping));
        vcdp->chgBit(c+473,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+481,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+489,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popping));
        vcdp->chgBit(c+497,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+505,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+513,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popping));
        vcdp->chgBit(c+521,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+529,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_valueNext),5);
        vcdp->chgBit(c+537,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+545,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext),5);
        vcdp->chgBit(c+553,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+561,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popping));
        vcdp->chgBit(c+569,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popping))));
    }
}

void VBDMAm2s::traceChgThis__6(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+577,((3U & vlTOPp->BDMAm2s__DOT__cch_address)),2);
        vcdp->chgBus(c+585,((3U & ((IData)(1U) + (~ 
                                                  (vlTOPp->BDMAm2s__DOT__trans_bytes_cnt 
                                                   + vlTOPp->BDMAm2s__DOT__cch_address))))),2);
        vcdp->chgBus(c+593,((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->chgBus(c+601,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                             >> 0x20U)))),4);
        vcdp->chgBus(c+609,((0xffU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x24U)))),8);
        vcdp->chgBus(c+617,((7U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                           >> 0x2cU)))),3);
        vcdp->chgBus(c+625,((3U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                           >> 0x2fU)))),2);
        vcdp->chgBus(c+633,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_logic_ram_port0),2);
        vcdp->chgBus(c+641,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0),2);
        vcdp->chgBus(c+649,(vlTOPp->BDMAm2s__DOT__cch_address),32);
        vcdp->chgBus(c+657,(vlTOPp->BDMAm2s__DOT__cch_burst_type),2);
        vcdp->chgBus(c+665,(vlTOPp->BDMAm2s__DOT__cch_id),4);
        vcdp->chgBus(c+673,(vlTOPp->BDMAm2s__DOT__trans_bytes_cnt),30);
        vcdp->chgBus(c+681,(vlTOPp->BDMAm2s__DOT__m2s_ar_len),8);
        vcdp->chgBus(c+689,((0xfffffffcU & vlTOPp->BDMAm2s__DOT__cch_address)),32);
        vcdp->chgBit(c+697,((0U != (0xfffffU & (((IData)(0x40U) 
                                                 + 
                                                 (0xfffU 
                                                  & vlTOPp->BDMAm2s__DOT__cch_address)) 
                                                >> 0xcU)))));
        vcdp->chgBus(c+705,(vlTOPp->BDMAm2s__DOT__m2s_axis_id),4);
        vcdp->chgBus(c+713,(vlTOPp->BDMAm2s__DOT__m2s_axis_strb),4);
        vcdp->chgBus(c+721,(vlTOPp->BDMAm2s__DOT__m2s_axis_keep),4);
        vcdp->chgBus(c+729,(vlTOPp->BDMAm2s__DOT__keep_strb_mask),4);
        vcdp->chgQuad(c+737,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[0]),49);
        vcdp->chgQuad(c+739,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[1]),49);
        vcdp->chgQuad(c+741,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[2]),49);
        vcdp->chgQuad(c+743,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[3]),49);
        vcdp->chgQuad(c+745,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[4]),49);
        vcdp->chgQuad(c+747,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[5]),49);
        vcdp->chgQuad(c+749,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[6]),49);
        vcdp->chgQuad(c+751,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[7]),49);
        vcdp->chgBus(c+865,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[0]),2);
        vcdp->chgBus(c+866,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[1]),2);
        vcdp->chgBus(c+867,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[2]),2);
        vcdp->chgBus(c+868,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[3]),2);
        vcdp->chgBus(c+869,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[4]),2);
        vcdp->chgBus(c+870,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[5]),2);
        vcdp->chgBus(c+871,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[6]),2);
        vcdp->chgBus(c+872,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[7]),2);
        vcdp->chgBus(c+929,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[0]),2);
        vcdp->chgBus(c+930,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[1]),2);
        vcdp->chgBus(c+931,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[2]),2);
        vcdp->chgBus(c+932,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[3]),2);
        vcdp->chgBus(c+933,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[4]),2);
        vcdp->chgBus(c+934,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[5]),2);
        vcdp->chgBus(c+935,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[6]),2);
        vcdp->chgBus(c+936,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[7]),2);
    }
}

void VBDMAm2s::traceChgThis__7(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+993,(((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len))
                              ? ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask) 
                                 & (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_strb))
                              : (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_strb))),4);
        vcdp->chgBus(c+1001,(((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len))
                               ? ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask) 
                                  & (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_keep))
                               : (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_keep))),4);
        vcdp->chgBit(c+1009,((0x40U >= (vlTOPp->BDMAm2s__DOT__cch_total_bytes 
                                        + (3U & vlTOPp->BDMAm2s__DOT__cch_address)))));
        vcdp->chgBit(c+1017,((0U != (0xfffffU & (((0xfffU 
                                                   & vlTOPp->BDMAm2s__DOT__cch_address) 
                                                  + 
                                                  (0xfffU 
                                                   & vlTOPp->BDMAm2s__DOT__cch_total_bytes)) 
                                                 >> 0xcU)))));
    }
}

void VBDMAm2s::traceChgThis__8(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1025,(vlTOPp->BDMAm2s__DOT__m2s_cch_state),2);
        vcdp->chgBit(c+1033,(vlTOPp->BDMAm2s__DOT__m2s_r_state));
        vcdp->chgBit(c+1041,(vlTOPp->BDMAm2s__DOT__m2s_ar_valve));
        vcdp->chgBit(c+1049,(vlTOPp->BDMAm2s__DOT__cch_ready));
        vcdp->chgBit(c+1057,(vlTOPp->BDMAm2s__DOT__m2s_ar_valid));
        vcdp->chgBit(c+1065,(vlTOPp->BDMAm2s__DOT__m2s_ar_halt_exec));
        vcdp->chgBit(c+1073,(vlTOPp->BDMAm2s__DOT__cycle_finished));
        vcdp->chgBit(c+1081,(vlTOPp->BDMAm2s__DOT__m2s_r_valve));
        vcdp->chgBit(c+1089,((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))));
        vcdp->chgQuad(c+1097,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_r_state)
                                ? ((IData)(vlTOPp->BDMAm2s__DOT__m2s_r_state)
                                    ? VL_ULL(0x4255525354)
                                    : VL_ULL(0x3f3f3f3f3f))
                                : VL_ULL(0x49444c4520))),40);
        vcdp->chgBus(c+1113,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+1121,((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+1129,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+1137,((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+1145,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+1153,((7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+1161,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+1169,((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+1177,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+1185,((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+1193,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+1201,((7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+1209,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+1217,((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+1225,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+1233,((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+1241,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+1249,((7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+1257,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value),5);
        vcdp->chgBit(c+1265,((0x1fU == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+1273,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value),5);
        vcdp->chgBit(c+1281,((0x1fU == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+1289,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+1297,((0x1fU & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value)))),5);
    }
}

void VBDMAm2s::traceChgThis__10(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1305,((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->chgBus(c+1313,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x20U)))),4);
        vcdp->chgBus(c+1321,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x24U)))),4);
        vcdp->chgBus(c+1329,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x28U)))),4);
        vcdp->chgBit(c+1337,((1U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2cU)))));
        vcdp->chgBus(c+1345,(vlTOPp->BDMAm2s__DOT__cch_total_bytes),30);
        vcdp->chgBit(c+1353,((0U == vlTOPp->BDMAm2s__DOT__cch_total_bytes)));
        vcdp->chgBus(c+1361,(vlTOPp->BDMAm2s__DOT__m2s_axis_len),8);
        vcdp->chgBit(c+1369,((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len))));
        vcdp->chgQuad(c+1377,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[0]),45);
        vcdp->chgQuad(c+1379,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[1]),45);
        vcdp->chgQuad(c+1381,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[2]),45);
        vcdp->chgQuad(c+1383,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[3]),45);
        vcdp->chgQuad(c+1385,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[4]),45);
        vcdp->chgQuad(c+1387,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[5]),45);
        vcdp->chgQuad(c+1389,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[6]),45);
        vcdp->chgQuad(c+1391,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[7]),45);
        vcdp->chgQuad(c+1393,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[8]),45);
        vcdp->chgQuad(c+1395,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[9]),45);
        vcdp->chgQuad(c+1397,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[10]),45);
        vcdp->chgQuad(c+1399,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[11]),45);
        vcdp->chgQuad(c+1401,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[12]),45);
        vcdp->chgQuad(c+1403,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[13]),45);
        vcdp->chgQuad(c+1405,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[14]),45);
        vcdp->chgQuad(c+1407,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[15]),45);
        vcdp->chgQuad(c+1409,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[16]),45);
        vcdp->chgQuad(c+1411,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[17]),45);
        vcdp->chgQuad(c+1413,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[18]),45);
        vcdp->chgQuad(c+1415,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[19]),45);
        vcdp->chgQuad(c+1417,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[20]),45);
        vcdp->chgQuad(c+1419,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[21]),45);
        vcdp->chgQuad(c+1421,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[22]),45);
        vcdp->chgQuad(c+1423,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[23]),45);
        vcdp->chgQuad(c+1425,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[24]),45);
        vcdp->chgQuad(c+1427,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[25]),45);
        vcdp->chgQuad(c+1429,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[26]),45);
        vcdp->chgQuad(c+1431,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[27]),45);
        vcdp->chgQuad(c+1433,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[28]),45);
        vcdp->chgQuad(c+1435,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[29]),45);
        vcdp->chgQuad(c+1437,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[30]),45);
        vcdp->chgQuad(c+1439,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[31]),45);
    }
}

void VBDMAm2s::traceChgThis__11(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1889,(vlTOPp->dma_ar_valid));
        vcdp->chgBit(c+1897,(vlTOPp->dma_ar_ready));
        vcdp->chgBus(c+1905,(vlTOPp->dma_ar_payload_addr),32);
        vcdp->chgBus(c+1913,(vlTOPp->dma_ar_payload_id),4);
        vcdp->chgBus(c+1921,(vlTOPp->dma_ar_payload_len),8);
        vcdp->chgBus(c+1929,(vlTOPp->dma_ar_payload_size),3);
        vcdp->chgBus(c+1937,(vlTOPp->dma_ar_payload_burst),2);
        vcdp->chgBit(c+1945,(vlTOPp->dma_r_valid));
        vcdp->chgBit(c+1953,(vlTOPp->dma_r_ready));
        vcdp->chgBus(c+1961,(vlTOPp->dma_r_payload_data),32);
        vcdp->chgBus(c+1969,(vlTOPp->dma_r_payload_id),4);
        vcdp->chgBus(c+1977,(vlTOPp->dma_r_payload_resp),2);
        vcdp->chgBit(c+1985,(vlTOPp->dma_r_payload_last));
        vcdp->chgBit(c+1993,(vlTOPp->m2s_data_stream_valid));
        vcdp->chgBit(c+2001,(vlTOPp->m2s_data_stream_ready));
        vcdp->chgBus(c+2009,(vlTOPp->m2s_data_stream_payload_data),32);
        vcdp->chgBus(c+2017,(vlTOPp->m2s_data_stream_payload_id),4);
        vcdp->chgBus(c+2025,(vlTOPp->m2s_data_stream_payload_strb),4);
        vcdp->chgBus(c+2033,(vlTOPp->m2s_data_stream_payload_keep_),4);
        vcdp->chgBit(c+2041,(vlTOPp->m2s_data_stream_payload_last));
        vcdp->chgBit(c+2049,(vlTOPp->m2s_state));
        vcdp->chgBit(c+2057,(vlTOPp->m2s_cch_valid));
        vcdp->chgBit(c+2065,(vlTOPp->m2s_cch_ready));
        vcdp->chgBus(c+2073,(vlTOPp->m2s_cch_payload_desc_start_addr),32);
        vcdp->chgBus(c+2081,(vlTOPp->m2s_cch_payload_desc_total_bytes),30);
        vcdp->chgBus(c+2089,(vlTOPp->m2s_cch_payload_desc_burst),2);
        vcdp->chgBus(c+2097,(vlTOPp->m2s_cch_payload_desc_id),4);
        vcdp->chgBit(c+2105,(vlTOPp->m2s_cch_payload_desc_reset));
        vcdp->chgBit(c+2113,(vlTOPp->m2s_intr));
        vcdp->chgBit(c+2121,(vlTOPp->clk));
        vcdp->chgBit(c+2129,(vlTOPp->reset));
        vcdp->chgBit(c+2137,(((IData)(vlTOPp->dma_ar_ready) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_valve))));
        vcdp->chgBit(c+2145,(((IData)(vlTOPp->dma_r_valid) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__m2s_r_valve))));
        vcdp->chgBit(c+2153,(((IData)(vlTOPp->m2s_cch_payload_desc_reset) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__cycle_finished))));
        vcdp->chgBit(c+2161,(((IData)(vlTOPp->dma_ar_valid) 
                              & (IData)(vlTOPp->dma_ar_ready))));
        vcdp->chgBit(c+2169,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid) 
                              & (IData)(vlTOPp->m2s_data_stream_ready))));
        vcdp->chgBit(c+2177,(((IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                       >> 0x2cU)) & 
                              ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid) 
                               & (IData)(vlTOPp->m2s_data_stream_ready)))));
        vcdp->chgQuad(c+2185,(((IData)(vlTOPp->m2s_state)
                                ? ((IData)(vlTOPp->m2s_state)
                                    ? VL_ULL(0x4255525354)
                                    : VL_ULL(0x3f3f3f3f3f))
                                : VL_ULL(0x49444c4520))),40);
    }
}
