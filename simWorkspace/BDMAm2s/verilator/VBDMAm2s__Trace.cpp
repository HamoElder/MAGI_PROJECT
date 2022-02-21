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
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 3U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 4U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 1U) | (vlTOPp->__Vm_traceActivity 
                                          >> 3U))))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
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
        vcdp->chgBit(c+129,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+137,(vlTOPp->BDMAm2s__DOT__len_pending_fifo_io_pop_valid));
        vcdp->chgBus(c+145,(vlTOPp->BDMAm2s__DOT__len_pending_fifo_io_occupancy),4);
        vcdp->chgBus(c+153,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0U : 0xcU)
                                      : (((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_value) 
                                                - (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_value)))
                                          : ((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_value)))))),4);
        vcdp->chgBit(c+161,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+169,((1U & ((~ ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ptrMatch) 
                                       & (~ (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_risingOccupancy)))) 
                                   & (~ ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT___zz_io_pop_valid) 
                                         & (~ (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_full))))))));
        vcdp->chgBus(c+177,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0xcU : 0U)
                                      : (((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popPtr_value))
                                          : ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushPtr_value) 
                                                - (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popPtr_value))))))),4);
        vcdp->chgBus(c+185,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0U : 0xcU)
                                      : (((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popPtr_value) 
                                                - (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushPtr_value)))
                                          : ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushPtr_value)))))),4);
        vcdp->chgBit(c+193,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+201,((1U & ((~ ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ptrMatch) 
                                       & (~ (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_risingOccupancy)))) 
                                   & (~ ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT___zz_io_pop_valid) 
                                         & (~ (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_full))))))));
        vcdp->chgBus(c+209,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0xcU : 0U)
                                      : (((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popPtr_value))
                                          : ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushPtr_value) 
                                                - (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popPtr_value))))))),4);
        vcdp->chgBus(c+217,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0U : 0xcU)
                                      : (((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popPtr_value) 
                                                - (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushPtr_value)))
                                          : ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushPtr_value)))))),4);
        vcdp->chgBit(c+225,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+233,((1U & ((~ ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ptrMatch) 
                                       & (~ (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_risingOccupancy)))) 
                                   & (~ ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT___zz_io_pop_valid) 
                                         & (~ (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_full))))))));
        vcdp->chgBus(c+241,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0xcU : 0U)
                                      : (((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value))
                                          : ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value) 
                                                - (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value))))))),4);
        vcdp->chgBus(c+249,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0U : 0xcU)
                                      : (((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value) 
                                                - (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value)))
                                          : ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value)))))),4);
        vcdp->chgBit(c+257,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire));
        vcdp->chgBit(c+265,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_valid) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+273,(vlTOPp->BDMAm2s__DOT__len_pending_fifo_io_pop_fire));
        vcdp->chgArray(c+281,(vlTOPp->BDMAm2s__DOT__m2s_cch_state_string),72);
        vcdp->chgBit(c+305,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+313,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+321,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+329,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+337,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+345,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full));
        vcdp->chgBit(c+353,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+361,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+369,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+377,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+385,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+393,(((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+401,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_full));
        vcdp->chgBit(c+409,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+417,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+425,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+433,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+441,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+449,(((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+457,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_full));
        vcdp->chgBit(c+465,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+473,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+481,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_full));
        vcdp->chgBit(c+489,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+497,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_valueNext),4);
        vcdp->chgBit(c+505,(((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+513,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+521,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_valueNext),4);
        vcdp->chgBit(c+529,(((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+537,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+545,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+553,(((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+561,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_full));
        vcdp->chgBit(c+569,(((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo_io_pop_fire))));
        vcdp->chgBus(c+577,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ptrDif),4);
        vcdp->chgBit(c+585,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+593,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushPtr_valueNext),4);
        vcdp->chgBit(c+601,(((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+609,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+617,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popPtr_valueNext),4);
        vcdp->chgBit(c+625,(((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+633,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+641,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+649,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popping));
        vcdp->chgBit(c+657,(((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+665,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_full));
        vcdp->chgBit(c+673,(((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+681,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+689,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushPtr_valueNext),4);
        vcdp->chgBit(c+697,(((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+705,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+713,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popPtr_valueNext),4);
        vcdp->chgBit(c+721,(((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+729,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+737,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+745,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popping));
        vcdp->chgBit(c+753,(((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+761,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_full));
        vcdp->chgBit(c+769,(((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+777,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+785,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_valueNext),4);
        vcdp->chgBit(c+793,(((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+801,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+809,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_valueNext),4);
        vcdp->chgBit(c+817,(((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_willIncrement))));
    }
}

void VBDMAm2s::traceChgThis__4(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+825,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+833,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+841,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popping));
        vcdp->chgBit(c+849,(((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+857,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_full));
        vcdp->chgBit(c+865,(((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popping))));
    }
}

void VBDMAm2s::traceChgThis__5(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+873,((((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len)) 
                              & (~ (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo_io_pop_valid))) 
                             & (3U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state)))));
    }
}

void VBDMAm2s::traceChgThis__6(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+881,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+889,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire) 
                             != (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+897,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+905,(((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+913,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+921,(((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+929,(((0x1fU == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+937,(((0x1fU == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement))));
    }
}

void VBDMAm2s::traceChgThis__7(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+945,(vlTOPp->BDMAm2s__DOT__m2s_cch_fire));
        vcdp->chgBit(c+953,(vlTOPp->BDMAm2s__DOT__dma_ar_fire_2));
        vcdp->chgBit(c+961,(vlTOPp->BDMAm2s__DOT__dma_r_fire));
        vcdp->chgBit(c+969,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+977,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+985,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popping));
        vcdp->chgBit(c+993,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+1001,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+1009,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popping));
        vcdp->chgBit(c+1017,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+1025,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+1033,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popping));
        vcdp->chgBit(c+1041,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+1049,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_valueNext),5);
        vcdp->chgBit(c+1057,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+1065,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext),5);
        vcdp->chgBit(c+1073,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+1081,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popping));
        vcdp->chgBit(c+1089,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popping))));
    }
}

void VBDMAm2s::traceChgThis__8(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1097,((3U & vlTOPp->BDMAm2s__DOT__cch_address)),2);
        vcdp->chgBus(c+1105,((3U & ((IData)(1U) + (~ 
                                                   (vlTOPp->BDMAm2s__DOT__trans_bytes_cnt 
                                                    + vlTOPp->BDMAm2s__DOT__cch_address))))),2);
        vcdp->chgBus(c+1113,((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->chgBus(c+1121,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x20U)))),4);
        vcdp->chgBus(c+1129,((0xffU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                               >> 0x24U)))),8);
        vcdp->chgBus(c+1137,((7U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2cU)))),3);
        vcdp->chgBus(c+1145,((3U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2fU)))),2);
        vcdp->chgBus(c+1153,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_logic_ram_port0),2);
        vcdp->chgBus(c+1161,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0),2);
        vcdp->chgBus(c+1169,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT___zz_logic_ram_port0),8);
        vcdp->chgBus(c+1177,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT___zz_logic_ram_port0),4);
        vcdp->chgBus(c+1185,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT___zz_logic_ram_port0),4);
        vcdp->chgBus(c+1193,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT___zz_logic_ram_port0),4);
        vcdp->chgBus(c+1201,(vlTOPp->BDMAm2s__DOT__cch_address),32);
        vcdp->chgBus(c+1209,(vlTOPp->BDMAm2s__DOT__cch_burst_type),2);
        vcdp->chgBus(c+1217,(vlTOPp->BDMAm2s__DOT__cch_id),4);
        vcdp->chgBus(c+1225,(vlTOPp->BDMAm2s__DOT__trans_bytes_cnt),30);
        vcdp->chgBus(c+1233,(vlTOPp->BDMAm2s__DOT__m2s_ar_len),8);
        vcdp->chgBus(c+1241,((0xfffffffcU & vlTOPp->BDMAm2s__DOT__cch_address)),32);
        vcdp->chgBit(c+1249,((0U != (0xfffffU & (((IData)(0x40U) 
                                                  + 
                                                  (0xfffU 
                                                   & vlTOPp->BDMAm2s__DOT__cch_address)) 
                                                 >> 0xcU)))));
        vcdp->chgBus(c+1257,(vlTOPp->BDMAm2s__DOT__len_pending),8);
        vcdp->chgBus(c+1265,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending),4);
        vcdp->chgBus(c+1273,(vlTOPp->BDMAm2s__DOT__id_pending),4);
        vcdp->chgBus(c+1281,(vlTOPp->BDMAm2s__DOT__keep_strb_pending),4);
        vcdp->chgBus(c+1289,(vlTOPp->BDMAm2s__DOT__m2s_axis_id),4);
        vcdp->chgBus(c+1297,(vlTOPp->BDMAm2s__DOT__m2s_axis_strb_keep),4);
        vcdp->chgBus(c+1305,(vlTOPp->BDMAm2s__DOT__keep_strb_mask),4);
        vcdp->chgQuad(c+1313,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[0]),49);
        vcdp->chgQuad(c+1315,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[1]),49);
        vcdp->chgQuad(c+1317,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[2]),49);
        vcdp->chgQuad(c+1319,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[3]),49);
        vcdp->chgQuad(c+1321,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[4]),49);
        vcdp->chgQuad(c+1323,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[5]),49);
        vcdp->chgQuad(c+1325,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[6]),49);
        vcdp->chgQuad(c+1327,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[7]),49);
        vcdp->chgBus(c+1441,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[0]),2);
        vcdp->chgBus(c+1442,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[1]),2);
        vcdp->chgBus(c+1443,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[2]),2);
        vcdp->chgBus(c+1444,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[3]),2);
        vcdp->chgBus(c+1445,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[4]),2);
        vcdp->chgBus(c+1446,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[5]),2);
        vcdp->chgBus(c+1447,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[6]),2);
        vcdp->chgBus(c+1448,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[7]),2);
        vcdp->chgBus(c+1505,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[0]),2);
        vcdp->chgBus(c+1506,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[1]),2);
        vcdp->chgBus(c+1507,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[2]),2);
        vcdp->chgBus(c+1508,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[3]),2);
        vcdp->chgBus(c+1509,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[4]),2);
        vcdp->chgBus(c+1510,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[5]),2);
        vcdp->chgBus(c+1511,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[6]),2);
        vcdp->chgBus(c+1512,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[7]),2);
        vcdp->chgBus(c+1569,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[0]),8);
        vcdp->chgBus(c+1570,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[1]),8);
        vcdp->chgBus(c+1571,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[2]),8);
        vcdp->chgBus(c+1572,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[3]),8);
        vcdp->chgBus(c+1573,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[4]),8);
        vcdp->chgBus(c+1574,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[5]),8);
        vcdp->chgBus(c+1575,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[6]),8);
        vcdp->chgBus(c+1576,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[7]),8);
        vcdp->chgBus(c+1577,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[8]),8);
        vcdp->chgBus(c+1578,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[9]),8);
        vcdp->chgBus(c+1579,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[10]),8);
        vcdp->chgBus(c+1580,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[11]),8);
        vcdp->chgBus(c+1665,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ram[0]),4);
        vcdp->chgBus(c+1666,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ram[1]),4);
        vcdp->chgBus(c+1667,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ram[2]),4);
        vcdp->chgBus(c+1668,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ram[3]),4);
        vcdp->chgBus(c+1669,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ram[4]),4);
        vcdp->chgBus(c+1670,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ram[5]),4);
        vcdp->chgBus(c+1671,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ram[6]),4);
        vcdp->chgBus(c+1672,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ram[7]),4);
        vcdp->chgBus(c+1673,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ram[8]),4);
        vcdp->chgBus(c+1674,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ram[9]),4);
        vcdp->chgBus(c+1675,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ram[10]),4);
        vcdp->chgBus(c+1676,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ram[11]),4);
        vcdp->chgBus(c+1761,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ram[0]),4);
        vcdp->chgBus(c+1762,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ram[1]),4);
        vcdp->chgBus(c+1763,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ram[2]),4);
        vcdp->chgBus(c+1764,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ram[3]),4);
        vcdp->chgBus(c+1765,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ram[4]),4);
        vcdp->chgBus(c+1766,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ram[5]),4);
        vcdp->chgBus(c+1767,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ram[6]),4);
        vcdp->chgBus(c+1768,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ram[7]),4);
        vcdp->chgBus(c+1769,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ram[8]),4);
        vcdp->chgBus(c+1770,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ram[9]),4);
        vcdp->chgBus(c+1771,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ram[10]),4);
        vcdp->chgBus(c+1772,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ram[11]),4);
        vcdp->chgBus(c+1857,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[0]),4);
        vcdp->chgBus(c+1858,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[1]),4);
        vcdp->chgBus(c+1859,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[2]),4);
        vcdp->chgBus(c+1860,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[3]),4);
        vcdp->chgBus(c+1861,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[4]),4);
        vcdp->chgBus(c+1862,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[5]),4);
        vcdp->chgBus(c+1863,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[6]),4);
        vcdp->chgBus(c+1864,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[7]),4);
        vcdp->chgBus(c+1865,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[8]),4);
        vcdp->chgBus(c+1866,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[9]),4);
        vcdp->chgBus(c+1867,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[10]),4);
        vcdp->chgBus(c+1868,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[11]),4);
    }
}

void VBDMAm2s::traceChgThis__9(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1953,(((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len))
                               ? ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask) 
                                  & (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_strb_keep))
                               : (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_strb_keep))),4);
        vcdp->chgBit(c+1961,((0x40U >= (vlTOPp->BDMAm2s__DOT__cch_total_bytes 
                                        + (3U & vlTOPp->BDMAm2s__DOT__cch_address)))));
        vcdp->chgBit(c+1969,((0U != (0xfffffU & (((0xfffU 
                                                   & vlTOPp->BDMAm2s__DOT__cch_address) 
                                                  + 
                                                  (0xfffU 
                                                   & vlTOPp->BDMAm2s__DOT__cch_total_bytes)) 
                                                 >> 0xcU)))));
    }
}

void VBDMAm2s::traceChgThis__10(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1977,(vlTOPp->BDMAm2s__DOT__m2s_cch_state),2);
        vcdp->chgBit(c+1985,(vlTOPp->BDMAm2s__DOT__m2s_r_state));
        vcdp->chgBit(c+1993,(vlTOPp->BDMAm2s__DOT__cch_ready));
        vcdp->chgBit(c+2001,(vlTOPp->BDMAm2s__DOT__m2s_ar_valid));
        vcdp->chgBit(c+2009,(vlTOPp->BDMAm2s__DOT__m2s_ar_halt_exec));
        vcdp->chgBit(c+2017,(vlTOPp->BDMAm2s__DOT__cycle_finished));
        vcdp->chgBit(c+2025,(vlTOPp->BDMAm2s__DOT__pending_valid));
        vcdp->chgBit(c+2033,(vlTOPp->BDMAm2s__DOT__pending_fifo_pop_ready));
        vcdp->chgBit(c+2041,(vlTOPp->BDMAm2s__DOT__m2s_r_valve));
        vcdp->chgBit(c+2049,((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))));
        vcdp->chgQuad(c+2057,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_r_state)
                                ? ((IData)(vlTOPp->BDMAm2s__DOT__m2s_r_state)
                                    ? VL_ULL(0x4255525354)
                                    : VL_ULL(0x3f3f3f3f3f))
                                : VL_ULL(0x49444c4520))),40);
        vcdp->chgBus(c+2073,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+2081,((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2089,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+2097,((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2105,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2113,((7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+2121,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+2129,((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2137,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+2145,((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2153,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2161,((7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+2169,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+2177,((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2185,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+2193,((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2201,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2209,((7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+2217,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value),5);
        vcdp->chgBit(c+2225,((0x1fU == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2233,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value),5);
        vcdp->chgBit(c+2241,((0x1fU == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2249,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2257,((0x1fU & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value)))),5);
        vcdp->chgBus(c+2265,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+2273,((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2281,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+2289,((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2297,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2305,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+2313,((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2321,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+2329,((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2337,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2345,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushPtr_value) 
                                      - (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popPtr_value)))),4);
        vcdp->chgBus(c+2353,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+2361,((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2369,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+2377,((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2385,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2393,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushPtr_value) 
                                      - (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popPtr_value)))),4);
        vcdp->chgBus(c+2401,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+2409,((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2417,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+2425,((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2433,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2441,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value) 
                                      - (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value)))),4);
    }
}

void VBDMAm2s::traceChgThis__11(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2449,((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->chgBus(c+2457,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x20U)))),4);
        vcdp->chgBus(c+2465,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x24U)))),4);
        vcdp->chgBus(c+2473,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x28U)))),4);
        vcdp->chgBit(c+2481,((1U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2cU)))));
        vcdp->chgBus(c+2489,(vlTOPp->BDMAm2s__DOT__cch_total_bytes),30);
        vcdp->chgBit(c+2497,((0U == vlTOPp->BDMAm2s__DOT__cch_total_bytes)));
        vcdp->chgBus(c+2505,(vlTOPp->BDMAm2s__DOT__m2s_axis_len),8);
        vcdp->chgBit(c+2513,((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len))));
        vcdp->chgQuad(c+2521,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[0]),45);
        vcdp->chgQuad(c+2523,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[1]),45);
        vcdp->chgQuad(c+2525,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[2]),45);
        vcdp->chgQuad(c+2527,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[3]),45);
        vcdp->chgQuad(c+2529,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[4]),45);
        vcdp->chgQuad(c+2531,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[5]),45);
        vcdp->chgQuad(c+2533,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[6]),45);
        vcdp->chgQuad(c+2535,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[7]),45);
        vcdp->chgQuad(c+2537,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[8]),45);
        vcdp->chgQuad(c+2539,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[9]),45);
        vcdp->chgQuad(c+2541,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[10]),45);
        vcdp->chgQuad(c+2543,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[11]),45);
        vcdp->chgQuad(c+2545,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[12]),45);
        vcdp->chgQuad(c+2547,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[13]),45);
        vcdp->chgQuad(c+2549,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[14]),45);
        vcdp->chgQuad(c+2551,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[15]),45);
        vcdp->chgQuad(c+2553,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[16]),45);
        vcdp->chgQuad(c+2555,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[17]),45);
        vcdp->chgQuad(c+2557,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[18]),45);
        vcdp->chgQuad(c+2559,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[19]),45);
        vcdp->chgQuad(c+2561,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[20]),45);
        vcdp->chgQuad(c+2563,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[21]),45);
        vcdp->chgQuad(c+2565,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[22]),45);
        vcdp->chgQuad(c+2567,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[23]),45);
        vcdp->chgQuad(c+2569,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[24]),45);
        vcdp->chgQuad(c+2571,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[25]),45);
        vcdp->chgQuad(c+2573,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[26]),45);
        vcdp->chgQuad(c+2575,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[27]),45);
        vcdp->chgQuad(c+2577,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[28]),45);
        vcdp->chgQuad(c+2579,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[29]),45);
        vcdp->chgQuad(c+2581,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[30]),45);
        vcdp->chgQuad(c+2583,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[31]),45);
    }
}

void VBDMAm2s::traceChgThis__12(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3033,(vlTOPp->dma_ar_valid));
        vcdp->chgBit(c+3041,(vlTOPp->dma_ar_ready));
        vcdp->chgBus(c+3049,(vlTOPp->dma_ar_payload_addr),32);
        vcdp->chgBus(c+3057,(vlTOPp->dma_ar_payload_id),4);
        vcdp->chgBus(c+3065,(vlTOPp->dma_ar_payload_len),8);
        vcdp->chgBus(c+3073,(vlTOPp->dma_ar_payload_size),3);
        vcdp->chgBus(c+3081,(vlTOPp->dma_ar_payload_burst),2);
        vcdp->chgBit(c+3089,(vlTOPp->dma_r_valid));
        vcdp->chgBit(c+3097,(vlTOPp->dma_r_ready));
        vcdp->chgBus(c+3105,(vlTOPp->dma_r_payload_data),32);
        vcdp->chgBus(c+3113,(vlTOPp->dma_r_payload_id),4);
        vcdp->chgBus(c+3121,(vlTOPp->dma_r_payload_resp),2);
        vcdp->chgBit(c+3129,(vlTOPp->dma_r_payload_last));
        vcdp->chgBit(c+3137,(vlTOPp->m2s_data_stream_valid));
        vcdp->chgBit(c+3145,(vlTOPp->m2s_data_stream_ready));
        vcdp->chgBus(c+3153,(vlTOPp->m2s_data_stream_payload_data),32);
        vcdp->chgBus(c+3161,(vlTOPp->m2s_data_stream_payload_id),4);
        vcdp->chgBus(c+3169,(vlTOPp->m2s_data_stream_payload_strb),4);
        vcdp->chgBus(c+3177,(vlTOPp->m2s_data_stream_payload_keep_),4);
        vcdp->chgBit(c+3185,(vlTOPp->m2s_data_stream_payload_last));
        vcdp->chgBit(c+3193,(vlTOPp->m2s_state));
        vcdp->chgBit(c+3201,(vlTOPp->m2s_cch_valid));
        vcdp->chgBit(c+3209,(vlTOPp->m2s_cch_ready));
        vcdp->chgBus(c+3217,(vlTOPp->m2s_cch_payload_desc_start_addr),32);
        vcdp->chgBus(c+3225,(vlTOPp->m2s_cch_payload_desc_total_bytes),30);
        vcdp->chgBus(c+3233,(vlTOPp->m2s_cch_payload_desc_burst),2);
        vcdp->chgBus(c+3241,(vlTOPp->m2s_cch_payload_desc_id),4);
        vcdp->chgBit(c+3249,(vlTOPp->m2s_cch_payload_desc_reset));
        vcdp->chgBit(c+3257,(vlTOPp->m2s_intr));
        vcdp->chgBit(c+3265,(vlTOPp->clk));
        vcdp->chgBit(c+3273,(vlTOPp->reset));
        vcdp->chgBit(c+3281,(((IData)(vlTOPp->dma_ar_ready) 
                              & (8U > (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo_io_occupancy)))));
        vcdp->chgBit(c+3289,(((IData)(vlTOPp->dma_r_valid) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__m2s_r_valve))));
        vcdp->chgBit(c+3297,(((IData)(vlTOPp->m2s_cch_payload_desc_reset) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__cycle_finished))));
        vcdp->chgBit(c+3305,(((IData)(vlTOPp->dma_ar_valid) 
                              & (IData)(vlTOPp->dma_ar_ready))));
        vcdp->chgBit(c+3313,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid) 
                              & (IData)(vlTOPp->m2s_data_stream_ready))));
        vcdp->chgBit(c+3321,(((IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                       >> 0x2cU)) & 
                              ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid) 
                               & (IData)(vlTOPp->m2s_data_stream_ready)))));
        vcdp->chgQuad(c+3329,(((IData)(vlTOPp->m2s_state)
                                ? ((IData)(vlTOPp->m2s_state)
                                    ? VL_ULL(0x4255525354)
                                    : VL_ULL(0x3f3f3f3f3f))
                                : VL_ULL(0x49444c4520))),40);
    }
}
