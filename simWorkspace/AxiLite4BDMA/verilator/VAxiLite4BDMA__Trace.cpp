// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxiLite4BDMA__Syms.h"


//======================

void VAxiLite4BDMA::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxiLite4BDMA* t = (VAxiLite4BDMA*)userthis;
    VAxiLite4BDMA__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VAxiLite4BDMA::traceChgThis(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
                                  >> 3U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 1U) | (vlTOPp->__Vm_traceActivity 
                                          >> 4U))))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAxiLite4BDMA::traceChgThis__2(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core_dma_aw_valid));
        vcdp->chgBit(c+9,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core_dma_ar_valid));
        vcdp->chgBit(c+17,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core_dma_r_ready));
        vcdp->chgBit(c+25,((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+33,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo_io_pop_valid));
        vcdp->chgBus(c+41,(vlTOPp->AxiLite4BDMA__DOT__readRsp_data),32);
        vcdp->chgQuad(c+49,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__indicatorS2M_string),56);
        vcdp->chgBit(c+65,((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+73,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo_io_pop_valid));
        vcdp->chgBus(c+81,(((((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy) 
                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ptrMatch)) 
                             << 3U) | (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_value))))),4);
        vcdp->chgBus(c+89,(((((~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy)) 
                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ptrMatch)) 
                             << 3U) | (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value))))),4);
        vcdp->chgBit(c+97,((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+105,((1U & ((~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
                                       & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))) 
                                   & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT___zz_io_pop_valid) 
                                         & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_full))))))));
        vcdp->chgBus(c+113,(((((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ptrMatch)) 
                              << 3U) | (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
                                              - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_value))))),4);
        vcdp->chgBus(c+121,(((((~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ptrMatch)) 
                              << 3U) | (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_value) 
                                              - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value))))),4);
        vcdp->chgBit(c+129,((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+137,((1U & ((~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
                                       & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))) 
                                   & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT___zz_io_pop_valid) 
                                         & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_full))))))));
        vcdp->chgBus(c+145,(((((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch)) 
                              << 3U) | (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
                                              - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value))))),4);
        vcdp->chgBus(c+153,(((((~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch)) 
                              << 3U) | (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value) 
                                              - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))))),4);
        vcdp->chgBit(c+161,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_valid));
        vcdp->chgBus(c+169,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_occupancy),5);
        vcdp->chgBus(c+177,(((((~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ptrMatch)) 
                              << 4U) | (0xfU & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_value) 
                                                - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_value))))),5);
        vcdp->chgBit(c+185,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_fire));
        vcdp->chgBit(c+193,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+201,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valid) 
                             & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+209,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_finish));
        vcdp->chgBit(c+217,(((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state)) 
                             & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_finish))));
        vcdp->chgQuad(c+225,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_state_string),56);
        vcdp->chgArray(c+241,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state_string),72);
        vcdp->chgQuad(c+265,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state_string),56);
        vcdp->chgBit(c+281,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+289,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+297,(((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+305,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+313,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+321,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_full));
        vcdp->chgBit(c+329,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+337,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+345,(((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+353,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+361,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+369,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+377,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_full));
        vcdp->chgBit(c+385,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+393,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+401,(((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+409,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+417,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+425,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+433,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_full));
        vcdp->chgBit(c+441,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+449,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+457,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_full));
        vcdp->chgBit(c+465,((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+473,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_pop_valid));
        vcdp->chgBus(c+481,(((((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ptrMatch)) 
                              << 3U) | (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
                                              - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_value))))),4);
        vcdp->chgBus(c+489,(((((~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ptrMatch)) 
                              << 3U) | (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_value) 
                                              - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value))))),4);
        vcdp->chgBit(c+497,((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+505,((1U & ((~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
                                       & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))) 
                                   & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT___zz_io_pop_valid) 
                                         & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_full))))))));
        vcdp->chgBus(c+513,(((((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ptrMatch)) 
                              << 3U) | (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
                                              - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_value))))),4);
        vcdp->chgBus(c+521,(((((~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ptrMatch)) 
                              << 3U) | (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_value) 
                                              - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value))))),4);
        vcdp->chgBit(c+529,((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+537,((1U & ((~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
                                       & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))) 
                                   & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT___zz_io_pop_valid) 
                                         & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_full))))))));
        vcdp->chgBus(c+545,(((((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch)) 
                              << 3U) | (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
                                              - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value))))),4);
        vcdp->chgBus(c+553,(((((~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch)) 
                              << 3U) | (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value) 
                                              - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))))),4);
        vcdp->chgBit(c+561,((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_full)))));
        vcdp->chgBus(c+569,(((((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_value))))),6);
        vcdp->chgBus(c+577,(((((~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_value))))),6);
        vcdp->chgBit(c+585,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_fire));
        vcdp->chgBit(c+593,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_push_fire));
        vcdp->chgBit(c+601,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valid) 
                             & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_full)))));
        vcdp->chgArray(c+609,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state_string),72);
        vcdp->chgBit(c+633,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+641,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+649,(((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+657,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+665,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+673,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_full));
        vcdp->chgBit(c+681,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+689,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+697,(((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+705,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+713,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+721,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+729,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_full));
        vcdp->chgBit(c+737,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+745,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+753,(((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+761,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+769,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+777,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+785,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_full));
        vcdp->chgBit(c+793,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+801,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+809,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_full));
    }
}

void VAxiLite4BDMA::traceChgThis__3(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+817,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_valid) 
                             & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_ready))));
        vcdp->chgBit(c+825,(((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+833,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+841,(((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+849,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+857,(((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+865,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+873,(((0xfU == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+881,(((0xfU == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+889,(((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+897,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_push_fire) 
                             != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+905,(((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+913,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+921,(((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+929,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+937,(((0x1fU == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+945,(((0x1fU == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement))));
    }
}

void VAxiLite4BDMA::traceChgThis__4(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+953,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_last) 
                             | (((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_valid) 
                                 & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_ready)) 
                                & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
                                           >> 0x2cU))))));
    }
}

void VAxiLite4BDMA::traceChgThis__5(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+961,(((0xffU & ((IData)(1U) 
                                       + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len))) 
                             <= (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_occupancy))));
        vcdp->chgBit(c+969,((((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_len)) 
                              & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_pop_valid))) 
                             & (3U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state)))));
    }
}

void VAxiLite4BDMA::traceChgThis__7(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+977,(vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_valid));
        vcdp->chgBit(c+985,(vlTOPp->AxiLite4BDMA__DOT___zz_writeJoinEvent_translated_ready));
        vcdp->chgBit(c+993,(vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_fire));
        vcdp->chgBit(c+1001,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_ready));
        vcdp->chgBit(c+1009,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__dma_aw_fire_2));
        vcdp->chgBit(c+1017,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__dma_w_fire_1));
        vcdp->chgBit(c+1025,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popping));
        vcdp->chgBit(c+1033,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+1041,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+1049,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popping));
        vcdp->chgBit(c+1057,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+1065,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+1073,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popping));
        vcdp->chgBit(c+1081,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+1089,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+1097,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popping));
        vcdp->chgBit(c+1105,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+1113,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_valueNext),4);
        vcdp->chgBit(c+1121,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+1129,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_valueNext),4);
        vcdp->chgBit(c+1137,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+1145,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+1153,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__dma_ar_fire_2));
        vcdp->chgBit(c+1161,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__dma_r_fire));
        vcdp->chgBit(c+1169,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+1177,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+1185,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popping));
        vcdp->chgBit(c+1193,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+1201,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+1209,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popping));
        vcdp->chgBit(c+1217,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+1225,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+1233,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popping));
        vcdp->chgBit(c+1241,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+1249,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_valueNext),5);
        vcdp->chgBit(c+1257,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+1265,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext),5);
        vcdp->chgBit(c+1273,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+1281,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popping));
        vcdp->chgBit(c+1289,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popping))));
    }
}

void VAxiLite4BDMA::traceChgThis__8(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1297,((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->chgBus(c+1305,((0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x20U)))),4);
        vcdp->chgBus(c+1313,((0xffU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                               >> 0x24U)))),8);
        vcdp->chgBus(c+1321,((7U & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2cU)))),3);
        vcdp->chgBus(c+1329,((3U & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2fU)))),2);
        vcdp->chgBus(c+1337,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_data),32);
        vcdp->chgBus(c+1345,((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->chgBus(c+1353,((0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x20U)))),4);
        vcdp->chgBus(c+1361,((0xffU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                               >> 0x24U)))),8);
        vcdp->chgBus(c+1369,((7U & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2cU)))),3);
        vcdp->chgBus(c+1377,((3U & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2fU)))),2);
        vcdp->chgBus(c+1385,(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr),8);
        vcdp->chgBus(c+1393,(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_prot),3);
        vcdp->chgBus(c+1401,((3U & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address)),2);
        vcdp->chgBus(c+1409,((3U & ((IData)(1U) + (~ 
                                                   (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__trans_bytes_cnt 
                                                    + vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address))))),2);
        vcdp->chgBus(c+1417,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT___zz_logic_ram_port0),2);
        vcdp->chgBus(c+1425,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0),2);
        vcdp->chgBus(c+1433,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address),32);
        vcdp->chgBus(c+1441,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_burst_type),2);
        vcdp->chgBus(c+1449,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_id),4);
        vcdp->chgBus(c+1457,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__trans_bytes_cnt),30);
        vcdp->chgBus(c+1465,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_len),8);
        vcdp->chgBus(c+1473,((0xfffffffcU & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address)),32);
        vcdp->chgBit(c+1481,((0U != (0xfffffU & (((IData)(0x40U) 
                                                  + 
                                                  (0xfffU 
                                                   & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address)) 
                                                 >> 0xcU)))));
        vcdp->chgBus(c+1489,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_strb),4);
        vcdp->chgBus(c+1497,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__w_residual_data),32);
        vcdp->chgBus(c+1505,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__strb_mask),4);
        vcdp->chgBus(c+1513,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__bytes_shift),2);
        vcdp->chgBit(c+1521,((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__bytes_shift))));
        vcdp->chgQuad(c+1529,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram[0]),49);
        vcdp->chgQuad(c+1531,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram[1]),49);
        vcdp->chgQuad(c+1533,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram[2]),49);
        vcdp->chgQuad(c+1535,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram[3]),49);
        vcdp->chgQuad(c+1537,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram[4]),49);
        vcdp->chgQuad(c+1539,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram[5]),49);
        vcdp->chgQuad(c+1541,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram[6]),49);
        vcdp->chgQuad(c+1543,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram[7]),49);
        vcdp->chgBus(c+1657,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram[0]),2);
        vcdp->chgBus(c+1658,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram[1]),2);
        vcdp->chgBus(c+1659,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram[2]),2);
        vcdp->chgBus(c+1660,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram[3]),2);
        vcdp->chgBus(c+1661,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram[4]),2);
        vcdp->chgBus(c+1662,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram[5]),2);
        vcdp->chgBus(c+1663,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram[6]),2);
        vcdp->chgBus(c+1664,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram[7]),2);
        vcdp->chgBus(c+1721,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram[0]),2);
        vcdp->chgBus(c+1722,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram[1]),2);
        vcdp->chgBus(c+1723,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram[2]),2);
        vcdp->chgBus(c+1724,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram[3]),2);
        vcdp->chgBus(c+1725,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram[4]),2);
        vcdp->chgBus(c+1726,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram[5]),2);
        vcdp->chgBus(c+1727,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram[6]),2);
        vcdp->chgBus(c+1728,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram[7]),2);
        vcdp->chgBus(c+1785,((3U & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address)),2);
        vcdp->chgBus(c+1793,((3U & ((IData)(1U) + (~ 
                                                   (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__trans_bytes_cnt 
                                                    + vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address))))),2);
        vcdp->chgBus(c+1801,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT___zz_logic_ram_port0),2);
        vcdp->chgBus(c+1809,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0),2);
        vcdp->chgBus(c+1817,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address),32);
        vcdp->chgBus(c+1825,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_burst_type),2);
        vcdp->chgBus(c+1833,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_id),4);
        vcdp->chgBus(c+1841,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__trans_bytes_cnt),30);
        vcdp->chgBus(c+1849,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_len),8);
        vcdp->chgBus(c+1857,((0xfffffffcU & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address)),32);
        vcdp->chgBit(c+1865,((0U != (0xfffffU & (((IData)(0x40U) 
                                                  + 
                                                  (0xfffU 
                                                   & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address)) 
                                                 >> 0xcU)))));
        vcdp->chgBus(c+1873,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_id),4);
        vcdp->chgBus(c+1881,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_strb),4);
        vcdp->chgBus(c+1889,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_keep),4);
        vcdp->chgBus(c+1897,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__keep_strb_mask),4);
        vcdp->chgQuad(c+1905,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram[0]),49);
        vcdp->chgQuad(c+1907,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram[1]),49);
        vcdp->chgQuad(c+1909,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram[2]),49);
        vcdp->chgQuad(c+1911,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram[3]),49);
        vcdp->chgQuad(c+1913,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram[4]),49);
        vcdp->chgQuad(c+1915,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram[5]),49);
        vcdp->chgQuad(c+1917,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram[6]),49);
        vcdp->chgQuad(c+1919,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram[7]),49);
        vcdp->chgBus(c+2033,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram[0]),2);
        vcdp->chgBus(c+2034,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram[1]),2);
        vcdp->chgBus(c+2035,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram[2]),2);
        vcdp->chgBus(c+2036,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram[3]),2);
        vcdp->chgBus(c+2037,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram[4]),2);
        vcdp->chgBus(c+2038,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram[5]),2);
        vcdp->chgBus(c+2039,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram[6]),2);
        vcdp->chgBus(c+2040,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram[7]),2);
        vcdp->chgBus(c+2097,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram[0]),2);
        vcdp->chgBus(c+2098,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram[1]),2);
        vcdp->chgBus(c+2099,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram[2]),2);
        vcdp->chgBus(c+2100,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram[3]),2);
        vcdp->chgBus(c+2101,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram[4]),2);
        vcdp->chgBus(c+2102,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram[5]),2);
        vcdp->chgBus(c+2103,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram[6]),2);
        vcdp->chgBus(c+2104,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram[7]),2);
    }
}

void VAxiLite4BDMA::traceChgThis__9(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2161,(((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len))
                               ? ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__strb_mask) 
                                  & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_strb))
                               : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_strb))),4);
        vcdp->chgBit(c+2169,((0x40U >= (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes 
                                        + (3U & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address)))));
        vcdp->chgBit(c+2177,((0U != (0xfffffU & (((0xfffU 
                                                   & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address) 
                                                  + 
                                                  (0xfffU 
                                                   & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes)) 
                                                 >> 0xcU)))));
        vcdp->chgBus(c+2185,(((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_len))
                               ? ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__keep_strb_mask) 
                                  & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_strb))
                               : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_strb))),4);
        vcdp->chgBus(c+2193,(((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_len))
                               ? ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__keep_strb_mask) 
                                  & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_keep))
                               : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_keep))),4);
        vcdp->chgBit(c+2201,((0x40U >= (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes 
                                        + (3U & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address)))));
        vcdp->chgBit(c+2209,((0U != (0xfffffU & (((0xfffU 
                                                   & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address) 
                                                  + 
                                                  (0xfffU 
                                                   & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes)) 
                                                 >> 0xcU)))));
    }
}

void VAxiLite4BDMA::traceChgThis__10(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2217,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_valid));
        vcdp->chgBit(c+2225,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_b_ready));
        vcdp->chgBit(c+2233,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_ready));
        vcdp->chgBit(c+2241,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_ready));
        vcdp->chgBus(c+2249,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state),3);
        vcdp->chgBit(c+2257,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state));
        vcdp->chgBit(c+2265,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cycle_finished));
        vcdp->chgBit(c+2273,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cycle_finished));
        vcdp->chgBit(c+2281,((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT___zz_axil4Ctrl_bvalid_2)))));
        vcdp->chgBit(c+2289,(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rValid));
        vcdp->chgBit(c+2297,((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rValid)))));
        vcdp->chgBit(c+2305,(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_valid_driver));
        vcdp->chgBus(c+2313,(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_start_addr_driver),32);
        vcdp->chgBus(c+2321,(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_total_bytes_driver),30);
        vcdp->chgBus(c+2329,(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_burst_driver),2);
        vcdp->chgBus(c+2337,(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_id_driver),4);
        vcdp->chgBit(c+2345,(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_reset_driver));
        vcdp->chgBit(c+2353,(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_valid_driver));
        vcdp->chgBus(c+2361,(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_start_addr_driver),32);
        vcdp->chgBus(c+2369,(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_total_bytes_driver),30);
        vcdp->chgBus(c+2377,(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_burst_driver),2);
        vcdp->chgBus(c+2385,(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_id_driver),4);
        vcdp->chgBit(c+2393,(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_reset_driver));
        vcdp->chgQuad(c+2401,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state)
                                ? ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state)
                                    ? VL_ULL(0x4255525354)
                                    : VL_ULL(0x3f3f3f3f3f))
                                : VL_ULL(0x49444c4520))),40);
        vcdp->chgBus(c+2417,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state),2);
        vcdp->chgBit(c+2425,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valve));
        vcdp->chgBit(c+2433,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_valve));
        vcdp->chgBit(c+2441,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valid));
        vcdp->chgBit(c+2449,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_halt_exec));
        vcdp->chgBit(c+2457,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_reset_driver) 
                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cycle_finished))));
        vcdp->chgBus(c+2465,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__w_residual_strb),4);
        vcdp->chgBit(c+2473,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_last));
        vcdp->chgBit(c+2481,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_leak));
        vcdp->chgBit(c+2489,((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state))));
        vcdp->chgBus(c+2497,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+2505,((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2513,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+2521,((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2529,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2537,((7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+2545,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+2553,((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2561,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+2569,((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2577,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2585,((7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+2593,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+2601,((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2609,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+2617,((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2625,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2633,((7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+2641,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+2649,((0xfU == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2657,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+2665,((0xfU == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2673,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2681,((0xfU & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_value) 
                                      - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_value)))),4);
        vcdp->chgBus(c+2689,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state),2);
        vcdp->chgBit(c+2697,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valve));
        vcdp->chgBit(c+2705,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valid));
        vcdp->chgBit(c+2713,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_halt_exec));
        vcdp->chgBit(c+2721,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_reset_driver) 
                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cycle_finished))));
        vcdp->chgBit(c+2729,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_valve));
        vcdp->chgBit(c+2737,((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state))));
        vcdp->chgQuad(c+2745,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state)
                                ? ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state)
                                    ? VL_ULL(0x4255525354)
                                    : VL_ULL(0x3f3f3f3f3f))
                                : VL_ULL(0x49444c4520))),40);
        vcdp->chgBus(c+2761,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+2769,((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2777,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+2785,((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2793,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2801,((7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+2809,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+2817,((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2825,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+2833,((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2841,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2849,((7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+2857,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+2865,((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2873,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+2881,((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2889,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2897,((7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+2905,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_value),5);
        vcdp->chgBit(c+2913,((0x1fU == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2921,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_value),5);
        vcdp->chgBit(c+2929,((0x1fU == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2937,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2945,((0x1fU & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_value)))),5);
    }
}

void VAxiLite4BDMA::traceChgThis__12(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2953,((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len))));
        vcdp->chgBus(c+2961,((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->chgBus(c+2969,((0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x20U)))),4);
        vcdp->chgBus(c+2977,((0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x24U)))),4);
        vcdp->chgBus(c+2985,((0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x28U)))),4);
        vcdp->chgBit(c+2993,((1U & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2cU)))));
        vcdp->chgBus(c+3001,((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->chgBus(c+3009,((0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x20U)))),4);
        vcdp->chgBus(c+3017,((0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x24U)))),4);
        vcdp->chgBus(c+3025,((0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x28U)))),4);
        vcdp->chgBit(c+3033,((1U & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2cU)))));
        vcdp->chgBus(c+3041,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes),30);
        vcdp->chgBit(c+3049,((0U == vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes)));
        vcdp->chgBus(c+3057,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len),8);
        vcdp->chgQuad(c+3065,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[0]),45);
        vcdp->chgQuad(c+3067,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[1]),45);
        vcdp->chgQuad(c+3069,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[2]),45);
        vcdp->chgQuad(c+3071,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[3]),45);
        vcdp->chgQuad(c+3073,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[4]),45);
        vcdp->chgQuad(c+3075,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[5]),45);
        vcdp->chgQuad(c+3077,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[6]),45);
        vcdp->chgQuad(c+3079,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[7]),45);
        vcdp->chgQuad(c+3081,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[8]),45);
        vcdp->chgQuad(c+3083,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[9]),45);
        vcdp->chgQuad(c+3085,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[10]),45);
        vcdp->chgQuad(c+3087,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[11]),45);
        vcdp->chgQuad(c+3089,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[12]),45);
        vcdp->chgQuad(c+3091,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[13]),45);
        vcdp->chgQuad(c+3093,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[14]),45);
        vcdp->chgQuad(c+3095,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[15]),45);
        vcdp->chgBus(c+3321,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes),30);
        vcdp->chgBit(c+3329,((0U == vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes)));
        vcdp->chgBus(c+3337,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_len),8);
        vcdp->chgBit(c+3345,((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_len))));
        vcdp->chgQuad(c+3353,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[0]),45);
        vcdp->chgQuad(c+3355,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[1]),45);
        vcdp->chgQuad(c+3357,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[2]),45);
        vcdp->chgQuad(c+3359,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[3]),45);
        vcdp->chgQuad(c+3361,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[4]),45);
        vcdp->chgQuad(c+3363,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[5]),45);
        vcdp->chgQuad(c+3365,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[6]),45);
        vcdp->chgQuad(c+3367,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[7]),45);
        vcdp->chgQuad(c+3369,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[8]),45);
        vcdp->chgQuad(c+3371,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[9]),45);
        vcdp->chgQuad(c+3373,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[10]),45);
        vcdp->chgQuad(c+3375,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[11]),45);
        vcdp->chgQuad(c+3377,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[12]),45);
        vcdp->chgQuad(c+3379,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[13]),45);
        vcdp->chgQuad(c+3381,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[14]),45);
        vcdp->chgQuad(c+3383,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[15]),45);
        vcdp->chgQuad(c+3385,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[16]),45);
        vcdp->chgQuad(c+3387,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[17]),45);
        vcdp->chgQuad(c+3389,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[18]),45);
        vcdp->chgQuad(c+3391,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[19]),45);
        vcdp->chgQuad(c+3393,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[20]),45);
        vcdp->chgQuad(c+3395,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[21]),45);
        vcdp->chgQuad(c+3397,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[22]),45);
        vcdp->chgQuad(c+3399,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[23]),45);
        vcdp->chgQuad(c+3401,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[24]),45);
        vcdp->chgQuad(c+3403,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[25]),45);
        vcdp->chgQuad(c+3405,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[26]),45);
        vcdp->chgQuad(c+3407,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[27]),45);
        vcdp->chgQuad(c+3409,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[28]),45);
        vcdp->chgQuad(c+3411,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[29]),45);
        vcdp->chgQuad(c+3413,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[30]),45);
        vcdp->chgQuad(c+3415,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[31]),45);
    }
}

void VAxiLite4BDMA::traceChgThis__13(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3865,(vlTOPp->axil4Ctrl_awvalid));
        vcdp->chgBit(c+3873,(vlTOPp->axil4Ctrl_awready));
        vcdp->chgBus(c+3881,(vlTOPp->axil4Ctrl_awaddr),8);
        vcdp->chgBus(c+3889,(vlTOPp->axil4Ctrl_awprot),3);
        vcdp->chgBit(c+3897,(vlTOPp->axil4Ctrl_wvalid));
        vcdp->chgBit(c+3905,(vlTOPp->axil4Ctrl_wready));
        vcdp->chgBus(c+3913,(vlTOPp->axil4Ctrl_wdata),32);
        vcdp->chgBus(c+3921,(vlTOPp->axil4Ctrl_wstrb),4);
        vcdp->chgBit(c+3929,(vlTOPp->axil4Ctrl_bvalid));
        vcdp->chgBit(c+3937,(vlTOPp->axil4Ctrl_bready));
        vcdp->chgBus(c+3945,(vlTOPp->axil4Ctrl_bresp),2);
        vcdp->chgBit(c+3953,(vlTOPp->axil4Ctrl_arvalid));
        vcdp->chgBit(c+3961,(vlTOPp->axil4Ctrl_arready));
        vcdp->chgBus(c+3969,(vlTOPp->axil4Ctrl_araddr),8);
        vcdp->chgBus(c+3977,(vlTOPp->axil4Ctrl_arprot),3);
        vcdp->chgBit(c+3985,(vlTOPp->axil4Ctrl_rvalid));
        vcdp->chgBit(c+3993,(vlTOPp->axil4Ctrl_rready));
        vcdp->chgBus(c+4001,(vlTOPp->axil4Ctrl_rdata),32);
        vcdp->chgBus(c+4009,(vlTOPp->axil4Ctrl_rresp),2);
        vcdp->chgBit(c+4017,(vlTOPp->axi4S2M_awvalid));
        vcdp->chgBit(c+4025,(vlTOPp->axi4S2M_awready));
        vcdp->chgBus(c+4033,(vlTOPp->axi4S2M_awaddr),32);
        vcdp->chgBus(c+4041,(vlTOPp->axi4S2M_awid),4);
        vcdp->chgBus(c+4049,(vlTOPp->axi4S2M_awlen),8);
        vcdp->chgBus(c+4057,(vlTOPp->axi4S2M_awsize),3);
        vcdp->chgBus(c+4065,(vlTOPp->axi4S2M_awburst),2);
        vcdp->chgBit(c+4073,(vlTOPp->axi4S2M_wvalid));
        vcdp->chgBit(c+4081,(vlTOPp->axi4S2M_wready));
        vcdp->chgBus(c+4089,(vlTOPp->axi4S2M_wdata),32);
        vcdp->chgBus(c+4097,(vlTOPp->axi4S2M_wstrb),4);
        vcdp->chgBit(c+4105,(vlTOPp->axi4S2M_wlast));
        vcdp->chgBit(c+4113,(vlTOPp->axi4S2M_bvalid));
        vcdp->chgBit(c+4121,(vlTOPp->axi4S2M_bready));
        vcdp->chgBus(c+4129,(vlTOPp->axi4S2M_bid),4);
        vcdp->chgBus(c+4137,(vlTOPp->axi4S2M_bresp),2);
        vcdp->chgBit(c+4145,(vlTOPp->axi4S2M_arvalid));
        vcdp->chgBit(c+4153,(vlTOPp->axi4S2M_arready));
        vcdp->chgBus(c+4161,(vlTOPp->axi4S2M_araddr),32);
        vcdp->chgBus(c+4169,(vlTOPp->axi4S2M_arid),4);
        vcdp->chgBus(c+4177,(vlTOPp->axi4S2M_arlen),8);
        vcdp->chgBus(c+4185,(vlTOPp->axi4S2M_arsize),3);
        vcdp->chgBus(c+4193,(vlTOPp->axi4S2M_arburst),2);
        vcdp->chgBit(c+4201,(vlTOPp->axi4S2M_rvalid));
        vcdp->chgBit(c+4209,(vlTOPp->axi4S2M_rready));
        vcdp->chgBus(c+4217,(vlTOPp->axi4S2M_rdata),32);
        vcdp->chgBus(c+4225,(vlTOPp->axi4S2M_rid),4);
        vcdp->chgBus(c+4233,(vlTOPp->axi4S2M_rresp),2);
        vcdp->chgBit(c+4241,(vlTOPp->axi4S2M_rlast));
        vcdp->chgBit(c+4249,(vlTOPp->axi4M2S_awvalid));
        vcdp->chgBit(c+4257,(vlTOPp->axi4M2S_awready));
        vcdp->chgBus(c+4265,(vlTOPp->axi4M2S_awaddr),32);
        vcdp->chgBus(c+4273,(vlTOPp->axi4M2S_awid),4);
        vcdp->chgBus(c+4281,(vlTOPp->axi4M2S_awlen),8);
        vcdp->chgBus(c+4289,(vlTOPp->axi4M2S_awsize),3);
        vcdp->chgBus(c+4297,(vlTOPp->axi4M2S_awburst),2);
        vcdp->chgBit(c+4305,(vlTOPp->axi4M2S_wvalid));
        vcdp->chgBit(c+4313,(vlTOPp->axi4M2S_wready));
        vcdp->chgBus(c+4321,(vlTOPp->axi4M2S_wdata),32);
        vcdp->chgBus(c+4329,(vlTOPp->axi4M2S_wstrb),4);
        vcdp->chgBit(c+4337,(vlTOPp->axi4M2S_wlast));
        vcdp->chgBit(c+4345,(vlTOPp->axi4M2S_bvalid));
        vcdp->chgBit(c+4353,(vlTOPp->axi4M2S_bready));
        vcdp->chgBus(c+4361,(vlTOPp->axi4M2S_bid),4);
        vcdp->chgBus(c+4369,(vlTOPp->axi4M2S_bresp),2);
        vcdp->chgBit(c+4377,(vlTOPp->axi4M2S_arvalid));
        vcdp->chgBit(c+4385,(vlTOPp->axi4M2S_arready));
        vcdp->chgBus(c+4393,(vlTOPp->axi4M2S_araddr),32);
        vcdp->chgBus(c+4401,(vlTOPp->axi4M2S_arid),4);
        vcdp->chgBus(c+4409,(vlTOPp->axi4M2S_arlen),8);
        vcdp->chgBus(c+4417,(vlTOPp->axi4M2S_arsize),3);
        vcdp->chgBus(c+4425,(vlTOPp->axi4M2S_arburst),2);
        vcdp->chgBit(c+4433,(vlTOPp->axi4M2S_rvalid));
        vcdp->chgBit(c+4441,(vlTOPp->axi4M2S_rready));
        vcdp->chgBus(c+4449,(vlTOPp->axi4M2S_rdata),32);
        vcdp->chgBus(c+4457,(vlTOPp->axi4M2S_rid),4);
        vcdp->chgBus(c+4465,(vlTOPp->axi4M2S_rresp),2);
        vcdp->chgBit(c+4473,(vlTOPp->axi4M2S_rlast));
        vcdp->chgBit(c+4481,(vlTOPp->dataS2M_tvalid));
        vcdp->chgBit(c+4489,(vlTOPp->dataS2M_tready));
        vcdp->chgBus(c+4497,(vlTOPp->dataS2M_tdata),32);
        vcdp->chgBus(c+4505,(vlTOPp->dataS2M_tid),4);
        vcdp->chgBus(c+4513,(vlTOPp->dataS2M_tstrb),4);
        vcdp->chgBus(c+4521,(vlTOPp->dataS2M_tkeep),4);
        vcdp->chgBit(c+4529,(vlTOPp->dataS2M_tlast));
        vcdp->chgBit(c+4537,(vlTOPp->dataM2S_tvalid));
        vcdp->chgBit(c+4545,(vlTOPp->dataM2S_tready));
        vcdp->chgBus(c+4553,(vlTOPp->dataM2S_tdata),32);
        vcdp->chgBus(c+4561,(vlTOPp->dataM2S_tid),4);
        vcdp->chgBus(c+4569,(vlTOPp->dataM2S_tstrb),4);
        vcdp->chgBus(c+4577,(vlTOPp->dataM2S_tkeep),4);
        vcdp->chgBit(c+4585,(vlTOPp->dataM2S_tlast));
        vcdp->chgBit(c+4593,(vlTOPp->intrS2M));
        vcdp->chgBit(c+4601,(vlTOPp->intrM2S));
        vcdp->chgBit(c+4609,(vlTOPp->clk));
        vcdp->chgBit(c+4617,(vlTOPp->reset));
        vcdp->chgBit(c+4625,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
                              & (IData)(vlTOPp->axil4Ctrl_rready))));
        vcdp->chgBit(c+4633,(((IData)(vlTOPp->axi4S2M_awready) 
                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valve))));
        vcdp->chgBit(c+4641,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core_dma_aw_valid) 
                              & (IData)(vlTOPp->axi4S2M_awready))));
        vcdp->chgBit(c+4649,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_valid) 
                              & (IData)(vlTOPp->axi4S2M_wready))));
        vcdp->chgBit(c+4657,(((IData)(vlTOPp->axi4S2M_bvalid) 
                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_b_ready))));
        vcdp->chgBit(c+4665,(((IData)(vlTOPp->axi4M2S_arready) 
                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valve))));
        vcdp->chgBit(c+4673,(((IData)(vlTOPp->axi4M2S_rvalid) 
                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_valve))));
        vcdp->chgBit(c+4681,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core_dma_ar_valid) 
                              & (IData)(vlTOPp->axi4M2S_arready))));
        vcdp->chgBit(c+4689,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo_io_pop_valid) 
                              & (IData)(vlTOPp->dataM2S_tready))));
        vcdp->chgBit(c+4697,(((IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                       >> 0x2cU)) & 
                              ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo_io_pop_valid) 
                               & (IData)(vlTOPp->dataM2S_tready)))));
    }
}
