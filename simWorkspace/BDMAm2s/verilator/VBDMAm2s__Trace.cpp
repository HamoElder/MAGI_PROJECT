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
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 1U) | (vlTOPp->__Vm_traceActivity 
                                          >> 3U))))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x20U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
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
        vcdp->chgBit(c+129,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+137,((1U & ((~ ((IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_ptrMatch) 
                                       & (~ (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_risingOccupancy)))) 
                                   & (~ ((IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT___zz_io_pop_valid) 
                                         & (~ (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_full))))))));
        vcdp->chgBus(c+145,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0xcU : 0U)
                                      : (((IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value))
                                          : ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value) 
                                                - (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value))))))),4);
        vcdp->chgBus(c+153,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0U : 0xcU)
                                      : (((IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value) 
                                                - (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value)))
                                          : ((IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value)))))),4);
        vcdp->chgBit(c+161,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+169,(vlTOPp->BDMAm2s__DOT__len_pending_fifo_io_pop_valid));
        vcdp->chgBus(c+177,(vlTOPp->BDMAm2s__DOT__len_pending_fifo_io_occupancy),4);
        vcdp->chgBus(c+185,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0U : 0xcU)
                                      : (((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_value) 
                                                - (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_value)))
                                          : ((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_value)))))),4);
        vcdp->chgBit(c+193,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+201,((1U & ((~ ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ptrMatch) 
                                       & (~ (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_risingOccupancy)))) 
                                   & (~ ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT___zz_io_pop_valid) 
                                         & (~ (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_full))))))));
        vcdp->chgBus(c+209,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0xcU : 0U)
                                      : (((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popPtr_value))
                                          : ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushPtr_value) 
                                                - (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popPtr_value))))))),4);
        vcdp->chgBus(c+217,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0U : 0xcU)
                                      : (((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popPtr_value) 
                                                - (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushPtr_value)))
                                          : ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushPtr_value)))))),4);
        vcdp->chgBit(c+225,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+233,((1U & ((~ ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ptrMatch) 
                                       & (~ (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_risingOccupancy)))) 
                                   & (~ ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT___zz_io_pop_valid) 
                                         & (~ (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_full))))))));
        vcdp->chgBus(c+241,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0xcU : 0U)
                                      : (((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popPtr_value))
                                          : ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushPtr_value) 
                                                - (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popPtr_value))))))),4);
        vcdp->chgBus(c+249,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0U : 0xcU)
                                      : (((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popPtr_value) 
                                                - (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushPtr_value)))
                                          : ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushPtr_value)))))),4);
        vcdp->chgBit(c+257,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+265,((1U & ((~ ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ptrMatch) 
                                       & (~ (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_risingOccupancy)))) 
                                   & (~ ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT___zz_io_pop_valid) 
                                         & (~ (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_full))))))));
        vcdp->chgBus(c+273,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0xcU : 0U)
                                      : (((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value))
                                          : ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value) 
                                                - (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value))))))),4);
        vcdp->chgBus(c+281,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0U : 0xcU)
                                      : (((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value) 
                                                - (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value)))
                                          : ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value)))))),4);
        vcdp->chgBit(c+289,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+297,(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo_io_pop_valid));
        vcdp->chgBus(c+305,(((((IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_ptrMatch)) 
                              << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_pushPtr_value) 
                                              - (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_popPtr_value))))),4);
        vcdp->chgBus(c+313,(((((~ (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_ptrMatch)) 
                              << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_popPtr_value) 
                                              - (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_pushPtr_value))))),4);
        vcdp->chgBit(c+321,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+329,(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo_io_pop_valid));
        vcdp->chgBus(c+337,(((((IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_ptrMatch)) 
                              << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_pushPtr_value) 
                                              - (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_popPtr_value))))),4);
        vcdp->chgBus(c+345,(((((~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_ptrMatch)) 
                              << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_popPtr_value) 
                                              - (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_pushPtr_value))))),4);
        vcdp->chgBit(c+353,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire));
        vcdp->chgBit(c+361,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_valid) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+369,(vlTOPp->BDMAm2s__DOT__len_pending_fifo_io_pop_fire));
        vcdp->chgBit(c+377,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popping));
        vcdp->chgArray(c+385,(vlTOPp->BDMAm2s__DOT__m2s_cch_state_string),72);
        vcdp->chgBit(c+409,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+417,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+425,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+433,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+441,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+449,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full));
        vcdp->chgBit(c+457,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+465,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+473,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+481,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+489,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+497,(((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+505,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_full));
        vcdp->chgBit(c+513,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+521,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+529,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+537,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+545,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+553,(((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+561,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_full));
        vcdp->chgBit(c+569,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBit(c+577,(((0x1fU == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+585,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+593,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+601,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_full));
        vcdp->chgBit(c+609,(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+617,(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_valueNext),4);
        vcdp->chgBit(c+625,(((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+633,(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+641,(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_valueNext),4);
        vcdp->chgBit(c+649,(((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_willIncrement))));
    }
}

void VBDMAm2s::traceChgThis__4(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+657,(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+665,(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+673,(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_popping));
        vcdp->chgBit(c+681,(((IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+689,(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_full));
        vcdp->chgBit(c+697,(((IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+705,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+713,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_valueNext),4);
        vcdp->chgBit(c+721,(((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+729,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+737,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_valueNext),4);
        vcdp->chgBit(c+745,(((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+753,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+761,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+769,(((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+777,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_full));
        vcdp->chgBit(c+785,(((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo_io_pop_fire))));
        vcdp->chgBus(c+793,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ptrDif),4);
        vcdp->chgBit(c+801,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+809,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushPtr_valueNext),4);
        vcdp->chgBit(c+817,(((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+825,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+833,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popPtr_valueNext),4);
        vcdp->chgBit(c+841,(((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+849,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+857,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+865,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popping));
        vcdp->chgBit(c+873,(((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+881,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_full));
        vcdp->chgBit(c+889,(((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+897,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+905,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushPtr_valueNext),4);
        vcdp->chgBit(c+913,(((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+921,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+929,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popPtr_valueNext),4);
        vcdp->chgBit(c+937,(((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+945,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+953,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+961,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popping));
        vcdp->chgBit(c+969,(((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+977,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_full));
        vcdp->chgBit(c+985,(((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+993,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+1001,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_valueNext),4);
        vcdp->chgBit(c+1009,(((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+1017,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+1025,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_valueNext),4);
        vcdp->chgBit(c+1033,(((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+1041,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+1049,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+1057,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popping));
        vcdp->chgBit(c+1065,(((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+1073,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_full));
        vcdp->chgBit(c+1081,(((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+1089,(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+1097,(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+1105,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+1113,(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBit(c+1121,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+1129,(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+1137,(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+1145,(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_popping));
        vcdp->chgBit(c+1153,(((IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+1161,(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_full));
        vcdp->chgBit(c+1169,(((IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+1177,(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+1185,(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+1193,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+1201,(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+1209,(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+1217,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+1225,(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_full));
    }
}

void VBDMAm2s::traceChgThis__5(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1233,((((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_r_len)) 
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
        vcdp->chgBit(c+1241,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+1249,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire) 
                              != (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+1257,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+1265,(((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+1273,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+1281,(((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+1289,(((0x1fU == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+1297,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+1305,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+1313,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_popping))));
    }
}

void VBDMAm2s::traceChgThis__7(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1321,(vlTOPp->BDMAm2s__DOT__m2s_cch_fire));
        vcdp->chgBit(c+1329,(vlTOPp->BDMAm2s__DOT__dma_ar_fire_2));
        vcdp->chgBit(c+1337,(vlTOPp->BDMAm2s__DOT__dma_r_fire));
        vcdp->chgBit(c+1345,(vlTOPp->BDMAm2s__DOT__when_BDMAm2s_l351));
        vcdp->chgBit(c+1353,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+1361,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+1369,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popping));
        vcdp->chgBit(c+1377,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+1385,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+1393,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popping));
        vcdp->chgBit(c+1401,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+1409,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+1417,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popping));
        vcdp->chgBit(c+1425,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+1433,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_valueNext),5);
        vcdp->chgBit(c+1441,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+1449,(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+1457,(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+1465,(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_popping));
    }
}

void VBDMAm2s::traceChgThis__8(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1473,(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo_io_pop_fire));
        vcdp->chgBus(c+1481,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext),5);
        vcdp->chgBus(c+1489,(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_popPtr_valueNext),3);
    }
}

void VBDMAm2s::traceChgThis__9(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1497,((3U & vlTOPp->BDMAm2s__DOT__cch_address)),2);
        vcdp->chgBus(c+1505,((3U & ((IData)(1U) + (~ 
                                                   (vlTOPp->BDMAm2s__DOT__trans_bytes_cnt 
                                                    + vlTOPp->BDMAm2s__DOT__cch_address))))),2);
        vcdp->chgBus(c+1513,((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->chgBus(c+1521,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x20U)))),4);
        vcdp->chgBus(c+1529,((0xffU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                               >> 0x24U)))),8);
        vcdp->chgBus(c+1537,((7U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2cU)))),3);
        vcdp->chgBus(c+1545,((3U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2fU)))),2);
        vcdp->chgBus(c+1553,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_logic_ram_port0),2);
        vcdp->chgBus(c+1561,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0),2);
        vcdp->chgBus(c+1569,(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT___zz_logic_ram_port0),2);
        vcdp->chgBus(c+1577,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT___zz_logic_ram_port0),8);
        vcdp->chgBus(c+1585,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT___zz_logic_ram_port0),4);
        vcdp->chgBus(c+1593,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT___zz_logic_ram_port0),4);
        vcdp->chgBus(c+1601,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT___zz_logic_ram_port0),4);
        vcdp->chgBus(c+1609,(vlTOPp->BDMAm2s__DOT__cch_address),32);
        vcdp->chgBus(c+1617,(vlTOPp->BDMAm2s__DOT__cch_burst_type),2);
        vcdp->chgBus(c+1625,(vlTOPp->BDMAm2s__DOT__cch_id),4);
        vcdp->chgBus(c+1633,(vlTOPp->BDMAm2s__DOT__trans_bytes_cnt),30);
        vcdp->chgBus(c+1641,(vlTOPp->BDMAm2s__DOT__m2s_ar_len),8);
        vcdp->chgBus(c+1649,((0xfffffffcU & vlTOPp->BDMAm2s__DOT__cch_address)),32);
        vcdp->chgBit(c+1657,((0U != (0xfffffU & (((IData)(0x40U) 
                                                  + 
                                                  (0xfffU 
                                                   & vlTOPp->BDMAm2s__DOT__cch_address)) 
                                                 >> 0xcU)))));
        vcdp->chgBus(c+1665,(vlTOPp->BDMAm2s__DOT__bytes_shift_pending),2);
        vcdp->chgBus(c+1673,(vlTOPp->BDMAm2s__DOT__len_pending),8);
        vcdp->chgBus(c+1681,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending),4);
        vcdp->chgBus(c+1689,(vlTOPp->BDMAm2s__DOT__id_pending),4);
        vcdp->chgBus(c+1697,(vlTOPp->BDMAm2s__DOT__keep_strb_pending),4);
        vcdp->chgBus(c+1705,(vlTOPp->BDMAm2s__DOT__bytes_shift_reg),2);
        vcdp->chgBus(c+1713,(vlTOPp->BDMAm2s__DOT__m2s_r_id),4);
        vcdp->chgBus(c+1721,(vlTOPp->BDMAm2s__DOT__m2s_r_strb_keep),4);
        vcdp->chgBus(c+1729,(vlTOPp->BDMAm2s__DOT__keep_strb_mask),4);
        vcdp->chgBus(c+1737,(vlTOPp->BDMAm2s__DOT__m2s_axis_id),4);
        vcdp->chgBus(c+1745,(vlTOPp->BDMAm2s__DOT__m2s_axis_strb_keep),4);
        vcdp->chgBus(c+1753,(vlTOPp->BDMAm2s__DOT__m2s_axis_residual_strb_keep),4);
        vcdp->chgBus(c+1761,(vlTOPp->BDMAm2s__DOT__m2s_axis_data),32);
        vcdp->chgBus(c+1769,(vlTOPp->BDMAm2s__DOT__m2s_axis_residual_data),32);
        vcdp->chgQuad(c+1777,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[0]),49);
        vcdp->chgQuad(c+1779,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[1]),49);
        vcdp->chgQuad(c+1781,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[2]),49);
        vcdp->chgQuad(c+1783,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[3]),49);
        vcdp->chgQuad(c+1785,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[4]),49);
        vcdp->chgQuad(c+1787,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[5]),49);
        vcdp->chgQuad(c+1789,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[6]),49);
        vcdp->chgQuad(c+1791,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[7]),49);
        vcdp->chgBus(c+1905,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[0]),2);
        vcdp->chgBus(c+1906,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[1]),2);
        vcdp->chgBus(c+1907,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[2]),2);
        vcdp->chgBus(c+1908,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[3]),2);
        vcdp->chgBus(c+1909,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[4]),2);
        vcdp->chgBus(c+1910,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[5]),2);
        vcdp->chgBus(c+1911,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[6]),2);
        vcdp->chgBus(c+1912,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[7]),2);
        vcdp->chgBus(c+1969,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[0]),2);
        vcdp->chgBus(c+1970,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[1]),2);
        vcdp->chgBus(c+1971,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[2]),2);
        vcdp->chgBus(c+1972,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[3]),2);
        vcdp->chgBus(c+1973,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[4]),2);
        vcdp->chgBus(c+1974,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[5]),2);
        vcdp->chgBus(c+1975,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[6]),2);
        vcdp->chgBus(c+1976,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[7]),2);
        vcdp->chgBus(c+2033,(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_ram[0]),2);
        vcdp->chgBus(c+2034,(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_ram[1]),2);
        vcdp->chgBus(c+2035,(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_ram[2]),2);
        vcdp->chgBus(c+2036,(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_ram[3]),2);
        vcdp->chgBus(c+2037,(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_ram[4]),2);
        vcdp->chgBus(c+2038,(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_ram[5]),2);
        vcdp->chgBus(c+2039,(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_ram[6]),2);
        vcdp->chgBus(c+2040,(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_ram[7]),2);
        vcdp->chgBus(c+2041,(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_ram[8]),2);
        vcdp->chgBus(c+2042,(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_ram[9]),2);
        vcdp->chgBus(c+2043,(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_ram[10]),2);
        vcdp->chgBus(c+2044,(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_ram[11]),2);
        vcdp->chgBus(c+2129,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[0]),8);
        vcdp->chgBus(c+2130,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[1]),8);
        vcdp->chgBus(c+2131,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[2]),8);
        vcdp->chgBus(c+2132,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[3]),8);
        vcdp->chgBus(c+2133,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[4]),8);
        vcdp->chgBus(c+2134,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[5]),8);
        vcdp->chgBus(c+2135,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[6]),8);
        vcdp->chgBus(c+2136,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[7]),8);
        vcdp->chgBus(c+2137,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[8]),8);
        vcdp->chgBus(c+2138,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[9]),8);
        vcdp->chgBus(c+2139,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[10]),8);
        vcdp->chgBus(c+2140,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[11]),8);
        vcdp->chgBus(c+2225,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ram[0]),4);
        vcdp->chgBus(c+2226,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ram[1]),4);
        vcdp->chgBus(c+2227,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ram[2]),4);
        vcdp->chgBus(c+2228,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ram[3]),4);
        vcdp->chgBus(c+2229,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ram[4]),4);
        vcdp->chgBus(c+2230,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ram[5]),4);
        vcdp->chgBus(c+2231,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ram[6]),4);
        vcdp->chgBus(c+2232,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ram[7]),4);
        vcdp->chgBus(c+2233,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ram[8]),4);
        vcdp->chgBus(c+2234,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ram[9]),4);
        vcdp->chgBus(c+2235,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ram[10]),4);
        vcdp->chgBus(c+2236,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_ram[11]),4);
        vcdp->chgBus(c+2321,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ram[0]),4);
        vcdp->chgBus(c+2322,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ram[1]),4);
        vcdp->chgBus(c+2323,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ram[2]),4);
        vcdp->chgBus(c+2324,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ram[3]),4);
        vcdp->chgBus(c+2325,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ram[4]),4);
        vcdp->chgBus(c+2326,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ram[5]),4);
        vcdp->chgBus(c+2327,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ram[6]),4);
        vcdp->chgBus(c+2328,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ram[7]),4);
        vcdp->chgBus(c+2329,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ram[8]),4);
        vcdp->chgBus(c+2330,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ram[9]),4);
        vcdp->chgBus(c+2331,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ram[10]),4);
        vcdp->chgBus(c+2332,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_ram[11]),4);
        vcdp->chgBus(c+2417,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[0]),4);
        vcdp->chgBus(c+2418,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[1]),4);
        vcdp->chgBus(c+2419,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[2]),4);
        vcdp->chgBus(c+2420,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[3]),4);
        vcdp->chgBus(c+2421,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[4]),4);
        vcdp->chgBus(c+2422,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[5]),4);
        vcdp->chgBus(c+2423,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[6]),4);
        vcdp->chgBus(c+2424,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[7]),4);
        vcdp->chgBus(c+2425,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[8]),4);
        vcdp->chgBus(c+2426,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[9]),4);
        vcdp->chgBus(c+2427,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[10]),4);
        vcdp->chgBus(c+2428,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[11]),4);
    }
}

void VBDMAm2s::traceChgThis__10(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2513,(((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_r_len))
                               ? ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask) 
                                  & (IData)(vlTOPp->BDMAm2s__DOT__m2s_r_strb_keep))
                               : (IData)(vlTOPp->BDMAm2s__DOT__m2s_r_strb_keep))),4);
        vcdp->chgBit(c+2521,((0x40U >= (vlTOPp->BDMAm2s__DOT__cch_total_bytes 
                                        + (3U & vlTOPp->BDMAm2s__DOT__cch_address)))));
        vcdp->chgBit(c+2529,((0U != (0xfffffU & (((0xfffU 
                                                   & vlTOPp->BDMAm2s__DOT__cch_address) 
                                                  + 
                                                  (0xfffU 
                                                   & vlTOPp->BDMAm2s__DOT__cch_total_bytes)) 
                                                 >> 0xcU)))));
    }
}

void VBDMAm2s::traceChgThis__11(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2537,(vlTOPp->BDMAm2s__DOT__m2s_cch_state),2);
        vcdp->chgBit(c+2545,(vlTOPp->BDMAm2s__DOT__m2s_r_state));
        vcdp->chgBit(c+2553,(vlTOPp->BDMAm2s__DOT__cch_ready));
        vcdp->chgBit(c+2561,(vlTOPp->BDMAm2s__DOT__m2s_ar_valid));
        vcdp->chgBit(c+2569,(vlTOPp->BDMAm2s__DOT__m2s_ar_halt_exec));
        vcdp->chgBit(c+2577,(vlTOPp->BDMAm2s__DOT__cycle_finished));
        vcdp->chgBit(c+2585,(vlTOPp->BDMAm2s__DOT__pending_valid));
        vcdp->chgBit(c+2593,(vlTOPp->BDMAm2s__DOT__pending_fifo_pop_ready));
        vcdp->chgBit(c+2601,(vlTOPp->BDMAm2s__DOT__m2s_r_valve));
        vcdp->chgBit(c+2609,(vlTOPp->BDMAm2s__DOT__bytes_shift_valid));
        vcdp->chgBit(c+2617,(vlTOPp->BDMAm2s__DOT__m2s_axis_data_fifo_pop_ready));
        vcdp->chgBit(c+2625,(vlTOPp->BDMAm2s__DOT__m2s_axis_shift_fifo_pop_ready));
        vcdp->chgBit(c+2633,(vlTOPp->BDMAm2s__DOT__m2s_axis_valid));
        vcdp->chgBit(c+2641,(vlTOPp->BDMAm2s__DOT__m2s_axis_final));
        vcdp->chgBit(c+2649,(vlTOPp->BDMAm2s__DOT__m2s_axis_last));
        vcdp->chgBit(c+2657,(vlTOPp->BDMAm2s__DOT__m2s_axis_valid_next));
        vcdp->chgBit(c+2665,((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))));
        vcdp->chgQuad(c+2673,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_r_state)
                                ? ((IData)(vlTOPp->BDMAm2s__DOT__m2s_r_state)
                                    ? VL_ULL(0x4255525354)
                                    : VL_ULL(0x3f3f3f3f3f))
                                : VL_ULL(0x49444c4520))),40);
        vcdp->chgBus(c+2689,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+2697,((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2705,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+2713,((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2721,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2729,((7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+2737,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+2745,((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2753,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+2761,((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2769,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2777,((7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+2785,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+2793,((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2801,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+2809,((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2817,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2825,((7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+2833,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value),5);
        vcdp->chgBit(c+2841,((0x1fU == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2849,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value),5);
        vcdp->chgBit(c+2857,((0x1fU == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2865,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2873,((0x1fU & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value)))),5);
        vcdp->chgBus(c+2881,(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+2889,((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2897,(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+2905,((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2913,(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2921,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value) 
                                      - (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value)))),4);
        vcdp->chgBus(c+2929,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+2937,((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2945,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+2953,((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2961,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2969,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+2977,((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2985,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+2993,((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+3001,(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+3009,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_pushPtr_value) 
                                      - (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask_pending_fifo__DOT__logic_popPtr_value)))),4);
        vcdp->chgBus(c+3017,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+3025,((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+3033,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+3041,((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+3049,(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+3057,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_pushPtr_value) 
                                      - (IData)(vlTOPp->BDMAm2s__DOT__keep_strb_pending_fifo__DOT__logic_popPtr_value)))),4);
        vcdp->chgBus(c+3065,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+3073,((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+3081,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+3089,((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+3097,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+3105,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value) 
                                      - (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value)))),4);
        vcdp->chgBus(c+3113,(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+3121,((7U == (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+3129,(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+3137,((7U == (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+3145,(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+3153,((7U & ((IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+3161,(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+3169,((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+3177,(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+3185,((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+3193,(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+3201,((7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_popPtr_value)))),3);
    }
}

void VBDMAm2s::traceChgThis__13(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+3209,((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->chgBus(c+3217,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x20U)))),4);
        vcdp->chgBus(c+3225,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x24U)))),4);
        vcdp->chgBus(c+3233,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x28U)))),4);
        vcdp->chgBit(c+3241,((1U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2cU)))));
        vcdp->chgBus(c+3249,(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT___zz_logic_ram_port0),2);
        vcdp->chgBus(c+3257,((IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->chgBus(c+3265,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x20U)))),4);
        vcdp->chgBus(c+3273,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x24U)))),4);
        vcdp->chgBus(c+3281,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x28U)))),4);
        vcdp->chgBit(c+3289,((1U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2cU)))));
        vcdp->chgBus(c+3297,(vlTOPp->BDMAm2s__DOT__cch_total_bytes),30);
        vcdp->chgBit(c+3305,((0U == vlTOPp->BDMAm2s__DOT__cch_total_bytes)));
        vcdp->chgBus(c+3313,(vlTOPp->BDMAm2s__DOT__m2s_r_len),8);
        vcdp->chgBit(c+3321,((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_r_len))));
        vcdp->chgBus(c+3329,(vlTOPp->BDMAm2s__DOT__m2s_bytes_shift),2);
        vcdp->chgBit(c+3337,((0U == (0xfU & ((0xfU 
                                              & (IData)(
                                                        (vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                                         >> 0x28U))) 
                                             >> (IData)(vlTOPp->BDMAm2s__DOT__m2s_bytes_shift))))));
        vcdp->chgQuad(c+3345,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[0]),45);
        vcdp->chgQuad(c+3347,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[1]),45);
        vcdp->chgQuad(c+3349,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[2]),45);
        vcdp->chgQuad(c+3351,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[3]),45);
        vcdp->chgQuad(c+3353,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[4]),45);
        vcdp->chgQuad(c+3355,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[5]),45);
        vcdp->chgQuad(c+3357,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[6]),45);
        vcdp->chgQuad(c+3359,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[7]),45);
        vcdp->chgQuad(c+3361,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[8]),45);
        vcdp->chgQuad(c+3363,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[9]),45);
        vcdp->chgQuad(c+3365,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[10]),45);
        vcdp->chgQuad(c+3367,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[11]),45);
        vcdp->chgQuad(c+3369,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[12]),45);
        vcdp->chgQuad(c+3371,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[13]),45);
        vcdp->chgQuad(c+3373,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[14]),45);
        vcdp->chgQuad(c+3375,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[15]),45);
        vcdp->chgQuad(c+3377,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[16]),45);
        vcdp->chgQuad(c+3379,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[17]),45);
        vcdp->chgQuad(c+3381,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[18]),45);
        vcdp->chgQuad(c+3383,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[19]),45);
        vcdp->chgQuad(c+3385,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[20]),45);
        vcdp->chgQuad(c+3387,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[21]),45);
        vcdp->chgQuad(c+3389,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[22]),45);
        vcdp->chgQuad(c+3391,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[23]),45);
        vcdp->chgQuad(c+3393,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[24]),45);
        vcdp->chgQuad(c+3395,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[25]),45);
        vcdp->chgQuad(c+3397,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[26]),45);
        vcdp->chgQuad(c+3399,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[27]),45);
        vcdp->chgQuad(c+3401,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[28]),45);
        vcdp->chgQuad(c+3403,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[29]),45);
        vcdp->chgQuad(c+3405,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[30]),45);
        vcdp->chgQuad(c+3407,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[31]),45);
        vcdp->chgBus(c+3857,(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_ram[0]),2);
        vcdp->chgBus(c+3858,(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_ram[1]),2);
        vcdp->chgBus(c+3859,(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_ram[2]),2);
        vcdp->chgBus(c+3860,(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_ram[3]),2);
        vcdp->chgBus(c+3861,(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_ram[4]),2);
        vcdp->chgBus(c+3862,(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_ram[5]),2);
        vcdp->chgBus(c+3863,(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_ram[6]),2);
        vcdp->chgBus(c+3864,(vlTOPp->BDMAm2s__DOT__bytes_shift_fifo__DOT__logic_ram[7]),2);
        vcdp->chgQuad(c+3921,(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_ram[0]),45);
        vcdp->chgQuad(c+3923,(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_ram[1]),45);
        vcdp->chgQuad(c+3925,(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_ram[2]),45);
        vcdp->chgQuad(c+3927,(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_ram[3]),45);
        vcdp->chgQuad(c+3929,(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_ram[4]),45);
        vcdp->chgQuad(c+3931,(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_ram[5]),45);
        vcdp->chgQuad(c+3933,(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_ram[6]),45);
        vcdp->chgQuad(c+3935,(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT__logic_ram[7]),45);
    }
}

void VBDMAm2s::traceChgThis__14(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+4049,(vlTOPp->BDMAm2s__DOT__m2s_axis_state));
        vcdp->chgQuad(c+4057,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_state)
                                ? ((IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_state)
                                    ? VL_ULL(0x4255525354)
                                    : VL_ULL(0x3f3f3f3f3f))
                                : VL_ULL(0x49444c4520))),40);
    }
}

void VBDMAm2s::traceChgThis__15(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+4073,(vlTOPp->dma_ar_valid));
        vcdp->chgBit(c+4081,(vlTOPp->dma_ar_ready));
        vcdp->chgBus(c+4089,(vlTOPp->dma_ar_payload_addr),32);
        vcdp->chgBus(c+4097,(vlTOPp->dma_ar_payload_id),4);
        vcdp->chgBus(c+4105,(vlTOPp->dma_ar_payload_len),8);
        vcdp->chgBus(c+4113,(vlTOPp->dma_ar_payload_size),3);
        vcdp->chgBus(c+4121,(vlTOPp->dma_ar_payload_burst),2);
        vcdp->chgBit(c+4129,(vlTOPp->dma_r_valid));
        vcdp->chgBit(c+4137,(vlTOPp->dma_r_ready));
        vcdp->chgBus(c+4145,(vlTOPp->dma_r_payload_data),32);
        vcdp->chgBus(c+4153,(vlTOPp->dma_r_payload_id),4);
        vcdp->chgBus(c+4161,(vlTOPp->dma_r_payload_resp),2);
        vcdp->chgBit(c+4169,(vlTOPp->dma_r_payload_last));
        vcdp->chgBit(c+4177,(vlTOPp->m2s_data_stream_valid));
        vcdp->chgBit(c+4185,(vlTOPp->m2s_data_stream_ready));
        vcdp->chgBus(c+4193,(vlTOPp->m2s_data_stream_payload_data),32);
        vcdp->chgBus(c+4201,(vlTOPp->m2s_data_stream_payload_id),4);
        vcdp->chgBus(c+4209,(vlTOPp->m2s_data_stream_payload_strb),4);
        vcdp->chgBus(c+4217,(vlTOPp->m2s_data_stream_payload_keep_),4);
        vcdp->chgBit(c+4225,(vlTOPp->m2s_data_stream_payload_last));
        vcdp->chgBit(c+4233,(vlTOPp->m2s_state));
        vcdp->chgBit(c+4241,(vlTOPp->m2s_cch_valid));
        vcdp->chgBit(c+4249,(vlTOPp->m2s_cch_ready));
        vcdp->chgBus(c+4257,(vlTOPp->m2s_cch_payload_desc_start_addr),32);
        vcdp->chgBus(c+4265,(vlTOPp->m2s_cch_payload_desc_total_bytes),30);
        vcdp->chgBus(c+4273,(vlTOPp->m2s_cch_payload_desc_burst),2);
        vcdp->chgBus(c+4281,(vlTOPp->m2s_cch_payload_desc_id),4);
        vcdp->chgBit(c+4289,(vlTOPp->m2s_cch_payload_desc_reset));
        vcdp->chgBit(c+4297,(vlTOPp->m2s_intr));
        vcdp->chgBit(c+4305,(vlTOPp->clk));
        vcdp->chgBit(c+4313,(vlTOPp->reset));
        vcdp->chgBit(c+4321,(((IData)(vlTOPp->dma_ar_ready) 
                              & (8U > (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo_io_occupancy)))));
        vcdp->chgBit(c+4329,(((IData)(vlTOPp->dma_r_valid) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__m2s_r_valve))));
        vcdp->chgBit(c+4337,(((IData)(vlTOPp->m2s_cch_payload_desc_reset) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__cycle_finished))));
        vcdp->chgBit(c+4345,(((IData)(vlTOPp->dma_ar_valid) 
                              & (IData)(vlTOPp->dma_ar_ready))));
        vcdp->chgBit(c+4353,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo_io_pop_valid) 
                              & (IData)(vlTOPp->m2s_data_stream_ready))));
        vcdp->chgBit(c+4361,(((IData)((vlTOPp->BDMAm2s__DOT__m2s_axis_fifo__DOT___zz_logic_ram_port0 
                                       >> 0x2cU)) & 
                              ((IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_fifo_io_pop_valid) 
                               & (IData)(vlTOPp->m2s_data_stream_ready)))));
        vcdp->chgQuad(c+4369,(((IData)(vlTOPp->m2s_state)
                                ? ((IData)(vlTOPp->m2s_state)
                                    ? VL_ULL(0x4255525354)
                                    : VL_ULL(0x3f3f3f3f3f))
                                : VL_ULL(0x49444c4520))),40);
    }
}
