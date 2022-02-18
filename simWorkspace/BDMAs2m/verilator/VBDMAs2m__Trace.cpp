// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBDMAs2m__Syms.h"


//======================

void VBDMAs2m::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VBDMAs2m* t = (VBDMAs2m*)userthis;
    VBDMAs2m__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VBDMAs2m::traceChgThis(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity 
                                 | (vlTOPp->__Vm_traceActivity 
                                    >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                               >> 3U)) 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 4U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 1U) | (vlTOPp->__Vm_traceActivity 
                                          >> 3U))))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VBDMAs2m::traceChgThis__2(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+9,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid));
        vcdp->chgBus(c+17,(((((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy) 
                              & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch)) 
                             << 3U) | (7U & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value))))),4);
        vcdp->chgBus(c+25,(((((~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy)) 
                              & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch)) 
                             << 3U) | (7U & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value))))),4);
        vcdp->chgBit(c+33,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+41,((1U & ((~ ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
                                      & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))) 
                                  & (~ ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_io_pop_valid) 
                                        & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_full))))))));
        vcdp->chgBus(c+49,(((((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy) 
                              & (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch)) 
                             << 3U) | (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value))))),4);
        vcdp->chgBus(c+57,(((((~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy)) 
                              & (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch)) 
                             << 3U) | (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value))))),4);
        vcdp->chgBit(c+65,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+73,((1U & ((~ ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
                                      & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))) 
                                  & (~ ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_io_pop_valid) 
                                        & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full))))))));
        vcdp->chgBus(c+81,(((((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy) 
                              & (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch)) 
                             << 3U) | (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value))))),4);
        vcdp->chgBus(c+89,(((((~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)) 
                              & (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch)) 
                             << 3U) | (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))))),4);
        vcdp->chgBit(c+97,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+105,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo_io_pop_valid));
        vcdp->chgBus(c+113,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo_io_occupancy),5);
        vcdp->chgBus(c+121,(((((~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ptrMatch)) 
                              << 4U) | (0xfU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_value) 
                                                - (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_value))))),5);
        vcdp->chgBit(c+129,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+137,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valid) 
                             & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+145,(vlTOPp->BDMAs2m__DOT__s2m_aw_finish));
        vcdp->chgBit(c+153,(((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_finish))));
        vcdp->chgArray(c+161,(vlTOPp->BDMAs2m__DOT__s2m_cch_state_string),72);
        vcdp->chgQuad(c+185,(vlTOPp->BDMAs2m__DOT__s2m_w_state_string),56);
        vcdp->chgBit(c+201,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+209,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+217,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+225,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+233,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+241,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full));
        vcdp->chgBit(c+249,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+257,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+265,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+273,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+281,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+289,(((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+297,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_full));
        vcdp->chgBit(c+305,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+313,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+321,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+329,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+337,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+345,(((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+353,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full));
        vcdp->chgBit(c+361,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+369,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+377,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_full));
    }
}

void VBDMAs2m::traceChgThis__3(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+385,(((0xffU & ((IData)(1U) 
                                       + (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len))) 
                             <= (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo_io_occupancy))));
    }
}

void VBDMAs2m::traceChgThis__4(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+393,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_last) 
                             | (((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo_io_pop_valid) 
                                 & (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo_io_pop_ready)) 
                                & (IData)((vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
                                           >> 0x2cU))))));
    }
}

void VBDMAs2m::traceChgThis__5(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+401,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo_io_pop_valid) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo_io_pop_ready))));
        vcdp->chgBit(c+409,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+417,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+425,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+433,(((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+441,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+449,(((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+457,(((0xfU == (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+465,(((0xfU == (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_willIncrement))));
    }
}

void VBDMAs2m::traceChgThis__6(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+473,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo_io_pop_ready));
        vcdp->chgBit(c+481,(vlTOPp->BDMAs2m__DOT__s2m_cch_fire));
        vcdp->chgBit(c+489,(vlTOPp->BDMAs2m__DOT__dma_aw_fire_2));
        vcdp->chgBit(c+497,(vlTOPp->BDMAs2m__DOT__dma_w_fire));
        vcdp->chgBit(c+505,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popping));
        vcdp->chgBit(c+513,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+521,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+529,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping));
        vcdp->chgBit(c+537,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+545,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+553,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popping));
        vcdp->chgBit(c+561,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+569,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+577,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popping));
        vcdp->chgBit(c+585,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+593,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_valueNext),4);
        vcdp->chgBit(c+601,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+609,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_valueNext),4);
        vcdp->chgBit(c+617,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+625,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popping))));
    }
}

void VBDMAs2m::traceChgThis__7(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+633,((3U & vlTOPp->BDMAs2m__DOT__cch_address)),2);
        vcdp->chgBus(c+641,((3U & ((IData)(1U) + (~ 
                                                  (vlTOPp->BDMAs2m__DOT__trans_bytes_cnt 
                                                   + vlTOPp->BDMAs2m__DOT__cch_address))))),2);
        vcdp->chgBus(c+649,((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->chgBus(c+657,((0xfU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                             >> 0x20U)))),4);
        vcdp->chgBus(c+665,((0xffU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x24U)))),8);
        vcdp->chgBus(c+673,((7U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                           >> 0x2cU)))),3);
        vcdp->chgBus(c+681,((3U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                           >> 0x2fU)))),2);
        vcdp->chgBus(c+689,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_logic_ram_port0),2);
        vcdp->chgBus(c+697,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0),2);
        vcdp->chgBus(c+705,(vlTOPp->BDMAs2m__DOT__cch_address),32);
        vcdp->chgBus(c+713,(vlTOPp->BDMAs2m__DOT__cch_burst_type),2);
        vcdp->chgBus(c+721,(vlTOPp->BDMAs2m__DOT__cch_id),4);
        vcdp->chgBus(c+729,(vlTOPp->BDMAs2m__DOT__trans_bytes_cnt),30);
        vcdp->chgBus(c+737,(vlTOPp->BDMAs2m__DOT__s2m_aw_len),8);
        vcdp->chgBus(c+745,((0xfffffffcU & vlTOPp->BDMAs2m__DOT__cch_address)),32);
        vcdp->chgBit(c+753,((0U != (0xfffffU & (((IData)(0x40U) 
                                                 + 
                                                 (0xfffU 
                                                  & vlTOPp->BDMAs2m__DOT__cch_address)) 
                                                >> 0xcU)))));
        vcdp->chgBus(c+761,(vlTOPp->BDMAs2m__DOT__s2m_w_data),32);
        vcdp->chgBus(c+769,(vlTOPp->BDMAs2m__DOT__s2m_w_strb),4);
        vcdp->chgBus(c+777,(vlTOPp->BDMAs2m__DOT__w_residual_data),32);
        vcdp->chgBus(c+785,(vlTOPp->BDMAs2m__DOT__strb_mask),4);
        vcdp->chgBus(c+793,(vlTOPp->BDMAs2m__DOT__bytes_shift),2);
        vcdp->chgQuad(c+801,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[0]),49);
        vcdp->chgQuad(c+803,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[1]),49);
        vcdp->chgQuad(c+805,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[2]),49);
        vcdp->chgQuad(c+807,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[3]),49);
        vcdp->chgQuad(c+809,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[4]),49);
        vcdp->chgQuad(c+811,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[5]),49);
        vcdp->chgQuad(c+813,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[6]),49);
        vcdp->chgQuad(c+815,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[7]),49);
        vcdp->chgBus(c+929,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[0]),2);
        vcdp->chgBus(c+930,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[1]),2);
        vcdp->chgBus(c+931,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[2]),2);
        vcdp->chgBus(c+932,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[3]),2);
        vcdp->chgBus(c+933,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[4]),2);
        vcdp->chgBus(c+934,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[5]),2);
        vcdp->chgBus(c+935,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[6]),2);
        vcdp->chgBus(c+936,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[7]),2);
        vcdp->chgBus(c+993,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[0]),2);
        vcdp->chgBus(c+994,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[1]),2);
        vcdp->chgBus(c+995,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[2]),2);
        vcdp->chgBus(c+996,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[3]),2);
        vcdp->chgBus(c+997,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[4]),2);
        vcdp->chgBus(c+998,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[5]),2);
        vcdp->chgBus(c+999,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[6]),2);
        vcdp->chgBus(c+1000,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[7]),2);
    }
}

void VBDMAs2m::traceChgThis__8(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1057,((0x40U >= (vlTOPp->BDMAs2m__DOT__cch_total_bytes 
                                        + (3U & vlTOPp->BDMAs2m__DOT__cch_address)))));
        vcdp->chgBit(c+1065,((0U != (0xfffffU & (((0xfffU 
                                                   & vlTOPp->BDMAs2m__DOT__cch_address) 
                                                  + 
                                                  (0xfffU 
                                                   & vlTOPp->BDMAs2m__DOT__cch_total_bytes)) 
                                                 >> 0xcU)))));
    }
}

void VBDMAs2m::traceChgThis__9(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1073,(vlTOPp->BDMAs2m__DOT__s2m_cch_state),2);
        vcdp->chgBus(c+1081,(vlTOPp->BDMAs2m__DOT__s2m_w_state),3);
        vcdp->chgBit(c+1089,(vlTOPp->BDMAs2m__DOT__s2m_aw_valve));
        vcdp->chgBit(c+1097,(vlTOPp->BDMAs2m__DOT__s2m_data_valve));
        vcdp->chgBit(c+1105,(vlTOPp->BDMAs2m__DOT__cch_ready));
        vcdp->chgBit(c+1113,(vlTOPp->BDMAs2m__DOT__s2m_aw_valid));
        vcdp->chgBit(c+1121,(vlTOPp->BDMAs2m__DOT__s2m_aw_halt_exec));
        vcdp->chgBit(c+1129,(vlTOPp->BDMAs2m__DOT__cycle_finished));
        vcdp->chgBit(c+1137,(vlTOPp->BDMAs2m__DOT__s2m_w_valid));
        vcdp->chgBit(c+1145,(vlTOPp->BDMAs2m__DOT__s2m_b_ready));
        vcdp->chgBus(c+1153,(vlTOPp->BDMAs2m__DOT__w_residual_strb),4);
        vcdp->chgBit(c+1161,(vlTOPp->BDMAs2m__DOT__s2m_axis_last));
        vcdp->chgBit(c+1169,(vlTOPp->BDMAs2m__DOT__s2m_axis_leak));
        vcdp->chgBit(c+1177,((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))));
        vcdp->chgBus(c+1185,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+1193,((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+1201,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+1209,((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+1217,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+1225,((7U & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+1233,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+1241,((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+1249,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+1257,((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+1265,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+1273,((7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+1281,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+1289,((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+1297,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+1305,((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+1313,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+1321,((7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+1329,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+1337,((0xfU == (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+1345,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+1353,((0xfU == (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+1361,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+1369,((0xfU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_value) 
                                      - (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_value)))),4);
    }
}

void VBDMAs2m::traceChgThis__11(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1377,((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->chgBus(c+1385,((0xfU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x20U)))),4);
        vcdp->chgBus(c+1393,((0xfU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x24U)))),4);
        vcdp->chgBus(c+1401,((0xfU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x28U)))),4);
        vcdp->chgBit(c+1409,((1U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2cU)))));
        vcdp->chgBus(c+1417,(vlTOPp->BDMAs2m__DOT__cch_total_bytes),30);
        vcdp->chgBit(c+1425,((0U == vlTOPp->BDMAs2m__DOT__cch_total_bytes)));
        vcdp->chgBus(c+1433,(vlTOPp->BDMAs2m__DOT__s2m_axis_len),8);
        vcdp->chgBit(c+1441,((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len))));
        vcdp->chgQuad(c+1449,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[0]),45);
        vcdp->chgQuad(c+1451,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[1]),45);
        vcdp->chgQuad(c+1453,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[2]),45);
        vcdp->chgQuad(c+1455,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[3]),45);
        vcdp->chgQuad(c+1457,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[4]),45);
        vcdp->chgQuad(c+1459,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[5]),45);
        vcdp->chgQuad(c+1461,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[6]),45);
        vcdp->chgQuad(c+1463,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[7]),45);
        vcdp->chgQuad(c+1465,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[8]),45);
        vcdp->chgQuad(c+1467,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[9]),45);
        vcdp->chgQuad(c+1469,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[10]),45);
        vcdp->chgQuad(c+1471,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[11]),45);
        vcdp->chgQuad(c+1473,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[12]),45);
        vcdp->chgQuad(c+1475,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[13]),45);
        vcdp->chgQuad(c+1477,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[14]),45);
        vcdp->chgQuad(c+1479,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[15]),45);
    }
}

void VBDMAs2m::traceChgThis__12(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1705,(vlTOPp->dma_aw_valid));
        vcdp->chgBit(c+1713,(vlTOPp->dma_aw_ready));
        vcdp->chgBus(c+1721,(vlTOPp->dma_aw_payload_addr),32);
        vcdp->chgBus(c+1729,(vlTOPp->dma_aw_payload_id),4);
        vcdp->chgBus(c+1737,(vlTOPp->dma_aw_payload_len),8);
        vcdp->chgBus(c+1745,(vlTOPp->dma_aw_payload_size),3);
        vcdp->chgBus(c+1753,(vlTOPp->dma_aw_payload_burst),2);
        vcdp->chgBit(c+1761,(vlTOPp->dma_w_valid));
        vcdp->chgBit(c+1769,(vlTOPp->dma_w_ready));
        vcdp->chgBus(c+1777,(vlTOPp->dma_w_payload_data),32);
        vcdp->chgBus(c+1785,(vlTOPp->dma_w_payload_strb),4);
        vcdp->chgBit(c+1793,(vlTOPp->dma_w_payload_last));
        vcdp->chgBit(c+1801,(vlTOPp->dma_b_valid));
        vcdp->chgBit(c+1809,(vlTOPp->dma_b_ready));
        vcdp->chgBus(c+1817,(vlTOPp->dma_b_payload_id),4);
        vcdp->chgBus(c+1825,(vlTOPp->dma_b_payload_resp),2);
        vcdp->chgBit(c+1833,(vlTOPp->s2m_data_stream_valid));
        vcdp->chgBit(c+1841,(vlTOPp->s2m_data_stream_ready));
        vcdp->chgBus(c+1849,(vlTOPp->s2m_data_stream_payload_data),32);
        vcdp->chgBus(c+1857,(vlTOPp->s2m_data_stream_payload_id),4);
        vcdp->chgBus(c+1865,(vlTOPp->s2m_data_stream_payload_strb),4);
        vcdp->chgBus(c+1873,(vlTOPp->s2m_data_stream_payload_keep_),4);
        vcdp->chgBit(c+1881,(vlTOPp->s2m_data_stream_payload_last));
        vcdp->chgBit(c+1889,(vlTOPp->s2m_cch_valid));
        vcdp->chgBit(c+1897,(vlTOPp->s2m_cch_ready));
        vcdp->chgBus(c+1905,(vlTOPp->s2m_cch_payload_desc_start_addr),32);
        vcdp->chgBus(c+1913,(vlTOPp->s2m_cch_payload_desc_total_bytes),30);
        vcdp->chgBus(c+1921,(vlTOPp->s2m_cch_payload_desc_burst),2);
        vcdp->chgBus(c+1929,(vlTOPp->s2m_cch_payload_desc_id),4);
        vcdp->chgBit(c+1937,(vlTOPp->s2m_cch_payload_desc_reset));
        vcdp->chgBit(c+1945,(vlTOPp->s2m_intr));
        vcdp->chgBit(c+1953,(vlTOPp->clk));
        vcdp->chgBit(c+1961,(vlTOPp->reset));
        vcdp->chgBit(c+1969,(((IData)(vlTOPp->dma_aw_ready) 
                              & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valve))));
        vcdp->chgBit(c+1977,(((IData)(vlTOPp->s2m_cch_payload_desc_reset) 
                              & (IData)(vlTOPp->BDMAs2m__DOT__cycle_finished))));
        vcdp->chgBit(c+1985,(((IData)(vlTOPp->dma_aw_valid) 
                              & (IData)(vlTOPp->dma_aw_ready))));
        vcdp->chgBit(c+1993,(((IData)(vlTOPp->dma_w_valid) 
                              & (IData)(vlTOPp->dma_w_ready))));
        vcdp->chgBit(c+2001,(((IData)(vlTOPp->dma_b_valid) 
                              & (IData)(vlTOPp->dma_b_ready))));
    }
}
