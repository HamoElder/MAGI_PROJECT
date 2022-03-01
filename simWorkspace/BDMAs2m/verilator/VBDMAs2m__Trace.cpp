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
                                              >> 4U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
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
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
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
        vcdp->chgBit(c+97,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+105,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo_io_pop_valid));
        vcdp->chgBus(c+113,(((((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_value))))),6);
        vcdp->chgBus(c+121,(((((~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_value))))),6);
        vcdp->chgBit(c+129,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+137,((1U & ((~ ((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ptrMatch) 
                                       & (~ (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_risingOccupancy)))) 
                                   & (~ ((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT___zz_io_pop_valid) 
                                         & (~ (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_full))))))));
        vcdp->chgBus(c+145,((0xfU & ((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0xcU : 0U)
                                      : (((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value))
                                          : ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value) 
                                                - (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value))))))),4);
        vcdp->chgBus(c+153,((0xfU & ((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0U : 0xcU)
                                      : (((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value) 
                                                - (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value)))
                                          : ((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value)))))),4);
        vcdp->chgBit(c+161,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+169,((1U & ((~ ((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ptrMatch) 
                                       & (~ (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_risingOccupancy)))) 
                                   & (~ ((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT___zz_io_pop_valid) 
                                         & (~ (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_full))))))));
        vcdp->chgBus(c+177,((0xfU & ((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0xcU : 0U)
                                      : (((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_value))
                                          : ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_value) 
                                                - (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_value))))))),4);
        vcdp->chgBus(c+185,((0xfU & ((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0U : 0xcU)
                                      : (((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_value) 
                                                - (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_value)))
                                          : ((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_value)))))),4);
        vcdp->chgBit(c+193,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+201,(vlTOPp->BDMAs2m__DOT__len_pending_fifo_io_pop_valid));
        vcdp->chgBus(c+209,(vlTOPp->BDMAs2m__DOT__len_pending_fifo_io_occupancy),4);
        vcdp->chgBus(c+217,((0xfU & ((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0U : 0xcU)
                                      : (((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_value) 
                                                - (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_value)))
                                          : ((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_value)))))),4);
        vcdp->chgBit(c+225,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire));
        vcdp->chgBit(c+233,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valid) 
                             & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+241,(vlTOPp->BDMAs2m__DOT__s2m_aw_finish));
        vcdp->chgBit(c+249,(vlTOPp->BDMAs2m__DOT__len_pending_fifo_io_pop_fire));
        vcdp->chgBit(c+257,(vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l264));
        vcdp->chgBit(c+265,(((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_finish))));
        vcdp->chgArray(c+273,(vlTOPp->BDMAs2m__DOT__s2m_cch_state_string),72);
        vcdp->chgBit(c+297,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+305,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+313,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+321,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+329,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+337,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full));
        vcdp->chgBit(c+345,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+353,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+361,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+369,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+377,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+385,(((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+393,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_full));
        vcdp->chgBit(c+401,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+409,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+417,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+425,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+433,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+441,(((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+449,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full));
        vcdp->chgBit(c+457,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+465,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_valueNext),5);
        vcdp->chgBit(c+473,(((0x1fU == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+481,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+489,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+497,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+505,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_full));
        vcdp->chgBit(c+513,(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+521,(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_valueNext),4);
        vcdp->chgBit(c+529,(((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+537,(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+545,(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_valueNext),4);
        vcdp->chgBit(c+553,(((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+561,(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+569,(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+577,(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popping));
        vcdp->chgBit(c+585,(((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+593,(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_full));
        vcdp->chgBit(c+601,(((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+609,(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+617,(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_valueNext),4);
        vcdp->chgBit(c+625,(((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+633,(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+641,(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_valueNext),4);
        vcdp->chgBit(c+649,(((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+657,(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+665,(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+673,(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popping));
        vcdp->chgBit(c+681,(((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+689,(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_full));
        vcdp->chgBit(c+697,(((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+705,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+713,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_valueNext),4);
        vcdp->chgBit(c+721,(((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+729,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+737,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_valueNext),4);
        vcdp->chgBit(c+745,(((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+753,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+761,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+769,(((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+777,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_full));
        vcdp->chgBit(c+785,(((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo_io_pop_fire))));
        vcdp->chgBus(c+793,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ptrDif),4);
    }
}

void VBDMAs2m::traceChgThis__3(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+801,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+809,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire) 
                             != (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+817,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+825,(((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+833,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+841,(((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+849,(((0x1fU == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+857,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popping))));
    }
}

void VBDMAs2m::traceChgThis__4(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+865,(vlTOPp->BDMAs2m__DOT__s2m_cch_fire));
        vcdp->chgBit(c+873,(vlTOPp->BDMAs2m__DOT__dma_aw_fire_2));
        vcdp->chgBit(c+881,(vlTOPp->BDMAs2m__DOT__s2m_data_stream_fire));
        vcdp->chgBit(c+889,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+897,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+905,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping));
        vcdp->chgBit(c+913,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+921,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+929,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popping));
        vcdp->chgBit(c+937,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+945,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+953,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popping));
        vcdp->chgBit(c+961,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+969,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_valueNext),5);
        vcdp->chgBit(c+977,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popping));
    }
}

void VBDMAs2m::traceChgThis__6(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+985,((3U & vlTOPp->BDMAs2m__DOT__cch_address)),2);
        vcdp->chgBus(c+993,((3U & ((IData)(1U) + (~ 
                                                  (vlTOPp->BDMAs2m__DOT__trans_bytes_cnt 
                                                   + vlTOPp->BDMAs2m__DOT__cch_address))))),2);
        vcdp->chgBus(c+1001,((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->chgBus(c+1009,((0xfU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x20U)))),4);
        vcdp->chgBus(c+1017,((0xffU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                               >> 0x24U)))),8);
        vcdp->chgBus(c+1025,((7U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2cU)))),3);
        vcdp->chgBus(c+1033,((3U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2fU)))),2);
        vcdp->chgBus(c+1041,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_logic_ram_port0),2);
        vcdp->chgBus(c+1049,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0),2);
        vcdp->chgBus(c+1057,((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->chgBus(c+1065,((0xfU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x20U)))),4);
        vcdp->chgBit(c+1073,((1U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x24U)))));
        vcdp->chgBus(c+1081,(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT___zz_logic_ram_port0),2);
        vcdp->chgBus(c+1089,(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT___zz_logic_ram_port0),4);
        vcdp->chgBus(c+1097,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT___zz_logic_ram_port0),8);
        vcdp->chgBus(c+1105,(vlTOPp->BDMAs2m__DOT__cch_address),32);
        vcdp->chgBus(c+1113,(vlTOPp->BDMAs2m__DOT__cch_burst_type),2);
        vcdp->chgBus(c+1121,(vlTOPp->BDMAs2m__DOT__cch_id),4);
        vcdp->chgBus(c+1129,(vlTOPp->BDMAs2m__DOT__trans_bytes_cnt),30);
        vcdp->chgBus(c+1137,(vlTOPp->BDMAs2m__DOT__s2m_aw_len),8);
        vcdp->chgBus(c+1145,((0xfffffffcU & vlTOPp->BDMAs2m__DOT__cch_address)),32);
        vcdp->chgBit(c+1153,((0U != (0xfffffU & (((IData)(0x40U) 
                                                  + 
                                                  (0xfffU 
                                                   & vlTOPp->BDMAs2m__DOT__cch_address)) 
                                                 >> 0xcU)))));
        vcdp->chgBus(c+1161,(vlTOPp->BDMAs2m__DOT__bytes_shift_pending),2);
        vcdp->chgBus(c+1169,(vlTOPp->BDMAs2m__DOT__strb_mask_pending),4);
        vcdp->chgBus(c+1177,(vlTOPp->BDMAs2m__DOT__len_pending),8);
        vcdp->chgBus(c+1185,(vlTOPp->BDMAs2m__DOT__s2m_strb_mask),4);
        vcdp->chgBus(c+1193,(vlTOPp->BDMAs2m__DOT__s2m_bytes_shift),2);
        vcdp->chgBus(c+1201,(vlTOPp->BDMAs2m__DOT__w_residual_data),32);
        vcdp->chgBus(c+1209,(vlTOPp->BDMAs2m__DOT__s2m_w_data),32);
        vcdp->chgBus(c+1217,(vlTOPp->BDMAs2m__DOT__s2m_w_strb),4);
        vcdp->chgQuad(c+1225,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[0]),49);
        vcdp->chgQuad(c+1227,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[1]),49);
        vcdp->chgQuad(c+1229,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[2]),49);
        vcdp->chgQuad(c+1231,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[3]),49);
        vcdp->chgQuad(c+1233,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[4]),49);
        vcdp->chgQuad(c+1235,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[5]),49);
        vcdp->chgQuad(c+1237,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[6]),49);
        vcdp->chgQuad(c+1239,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[7]),49);
        vcdp->chgBus(c+1353,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[0]),2);
        vcdp->chgBus(c+1354,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[1]),2);
        vcdp->chgBus(c+1355,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[2]),2);
        vcdp->chgBus(c+1356,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[3]),2);
        vcdp->chgBus(c+1357,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[4]),2);
        vcdp->chgBus(c+1358,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[5]),2);
        vcdp->chgBus(c+1359,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[6]),2);
        vcdp->chgBus(c+1360,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[7]),2);
        vcdp->chgBus(c+1417,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[0]),2);
        vcdp->chgBus(c+1418,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[1]),2);
        vcdp->chgBus(c+1419,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[2]),2);
        vcdp->chgBus(c+1420,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[3]),2);
        vcdp->chgBus(c+1421,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[4]),2);
        vcdp->chgBus(c+1422,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[5]),2);
        vcdp->chgBus(c+1423,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[6]),2);
        vcdp->chgBus(c+1424,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[7]),2);
        vcdp->chgQuad(c+1481,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[0]),37);
        vcdp->chgQuad(c+1483,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[1]),37);
        vcdp->chgQuad(c+1485,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[2]),37);
        vcdp->chgQuad(c+1487,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[3]),37);
        vcdp->chgQuad(c+1489,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[4]),37);
        vcdp->chgQuad(c+1491,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[5]),37);
        vcdp->chgQuad(c+1493,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[6]),37);
        vcdp->chgQuad(c+1495,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[7]),37);
        vcdp->chgQuad(c+1497,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[8]),37);
        vcdp->chgQuad(c+1499,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[9]),37);
        vcdp->chgQuad(c+1501,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[10]),37);
        vcdp->chgQuad(c+1503,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[11]),37);
        vcdp->chgQuad(c+1505,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[12]),37);
        vcdp->chgQuad(c+1507,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[13]),37);
        vcdp->chgQuad(c+1509,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[14]),37);
        vcdp->chgQuad(c+1511,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[15]),37);
        vcdp->chgQuad(c+1513,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[16]),37);
        vcdp->chgQuad(c+1515,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[17]),37);
        vcdp->chgQuad(c+1517,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[18]),37);
        vcdp->chgQuad(c+1519,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[19]),37);
        vcdp->chgQuad(c+1521,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[20]),37);
        vcdp->chgQuad(c+1523,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[21]),37);
        vcdp->chgQuad(c+1525,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[22]),37);
        vcdp->chgQuad(c+1527,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[23]),37);
        vcdp->chgQuad(c+1529,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[24]),37);
        vcdp->chgQuad(c+1531,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[25]),37);
        vcdp->chgQuad(c+1533,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[26]),37);
        vcdp->chgQuad(c+1535,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[27]),37);
        vcdp->chgQuad(c+1537,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[28]),37);
        vcdp->chgQuad(c+1539,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[29]),37);
        vcdp->chgQuad(c+1541,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[30]),37);
        vcdp->chgQuad(c+1543,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[31]),37);
        vcdp->chgBus(c+1993,(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram[0]),2);
        vcdp->chgBus(c+1994,(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram[1]),2);
        vcdp->chgBus(c+1995,(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram[2]),2);
        vcdp->chgBus(c+1996,(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram[3]),2);
        vcdp->chgBus(c+1997,(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram[4]),2);
        vcdp->chgBus(c+1998,(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram[5]),2);
        vcdp->chgBus(c+1999,(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram[6]),2);
        vcdp->chgBus(c+2000,(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram[7]),2);
        vcdp->chgBus(c+2001,(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram[8]),2);
        vcdp->chgBus(c+2002,(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram[9]),2);
        vcdp->chgBus(c+2003,(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram[10]),2);
        vcdp->chgBus(c+2004,(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram[11]),2);
        vcdp->chgBus(c+2089,(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram[0]),4);
        vcdp->chgBus(c+2090,(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram[1]),4);
        vcdp->chgBus(c+2091,(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram[2]),4);
        vcdp->chgBus(c+2092,(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram[3]),4);
        vcdp->chgBus(c+2093,(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram[4]),4);
        vcdp->chgBus(c+2094,(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram[5]),4);
        vcdp->chgBus(c+2095,(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram[6]),4);
        vcdp->chgBus(c+2096,(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram[7]),4);
        vcdp->chgBus(c+2097,(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram[8]),4);
        vcdp->chgBus(c+2098,(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram[9]),4);
        vcdp->chgBus(c+2099,(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram[10]),4);
        vcdp->chgBus(c+2100,(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram[11]),4);
        vcdp->chgBus(c+2185,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[0]),8);
        vcdp->chgBus(c+2186,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[1]),8);
        vcdp->chgBus(c+2187,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[2]),8);
        vcdp->chgBus(c+2188,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[3]),8);
        vcdp->chgBus(c+2189,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[4]),8);
        vcdp->chgBus(c+2190,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[5]),8);
        vcdp->chgBus(c+2191,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[6]),8);
        vcdp->chgBus(c+2192,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[7]),8);
        vcdp->chgBus(c+2193,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[8]),8);
        vcdp->chgBus(c+2194,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[9]),8);
        vcdp->chgBus(c+2195,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[10]),8);
        vcdp->chgBus(c+2196,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[11]),8);
    }
}

void VBDMAs2m::traceChgThis__7(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2281,((0x40U >= (vlTOPp->BDMAs2m__DOT__cch_total_bytes 
                                        + (3U & vlTOPp->BDMAs2m__DOT__cch_address)))));
        vcdp->chgBit(c+2289,((0U != (0xfffffU & (((0xfffU 
                                                   & vlTOPp->BDMAs2m__DOT__cch_address) 
                                                  + 
                                                  (0xfffU 
                                                   & vlTOPp->BDMAs2m__DOT__cch_total_bytes)) 
                                                 >> 0xcU)))));
    }
}

void VBDMAs2m::traceChgThis__8(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2297,(vlTOPp->BDMAs2m__DOT__s2m_cch_state),2);
        vcdp->chgBus(c+2305,(vlTOPp->BDMAs2m__DOT__s2m_w_state),2);
        vcdp->chgBit(c+2313,(vlTOPp->BDMAs2m__DOT__cch_ready));
        vcdp->chgBit(c+2321,(vlTOPp->BDMAs2m__DOT__s2m_aw_valid));
        vcdp->chgBit(c+2329,(vlTOPp->BDMAs2m__DOT__s2m_aw_halt_exec));
        vcdp->chgBit(c+2337,(vlTOPp->BDMAs2m__DOT__cycle_finished));
        vcdp->chgBit(c+2345,(vlTOPp->BDMAs2m__DOT__pending_valid));
        vcdp->chgBit(c+2353,(vlTOPp->BDMAs2m__DOT__s2m_axis_last));
        vcdp->chgBit(c+2361,(vlTOPp->BDMAs2m__DOT__s2m_axis_leak));
        vcdp->chgBus(c+2369,(vlTOPp->BDMAs2m__DOT__w_residual_strb),4);
        vcdp->chgBit(c+2377,(vlTOPp->BDMAs2m__DOT__s2m_w_valid));
        vcdp->chgBit(c+2385,(vlTOPp->BDMAs2m__DOT__s2m_w_last));
        vcdp->chgBit(c+2393,(vlTOPp->BDMAs2m__DOT__s2m_w_final));
        vcdp->chgBit(c+2401,(vlTOPp->BDMAs2m__DOT__pending_fifo_pop_ready));
        vcdp->chgBit(c+2409,(vlTOPp->BDMAs2m__DOT__stream_data_valve));
        vcdp->chgBit(c+2417,((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))));
        vcdp->chgQuad(c+2425,(((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))
                                ? VL_ULL(0x49444c4520)
                                : ((1U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))
                                    ? VL_ULL(0x4255525354)
                                    : ((2U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))
                                        ? VL_ULL(0x44524f5020)
                                        : VL_ULL(0x3f3f3f3f3f))))),40);
        vcdp->chgBus(c+2441,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+2449,((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2457,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+2465,((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2473,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2481,((7U & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+2489,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+2497,((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2505,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+2513,((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2521,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2529,((7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+2537,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+2545,((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2553,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+2561,((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2569,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2577,((7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+2585,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_value),5);
        vcdp->chgBit(c+2593,((0x1fU == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2601,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_value),5);
        vcdp->chgBit(c+2609,((0x1fU == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2617,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2625,((0x1fU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_value)))),5);
        vcdp->chgBus(c+2633,(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+2641,((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2649,(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+2657,((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2665,(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2673,((0xfU & ((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value) 
                                      - (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value)))),4);
        vcdp->chgBus(c+2681,(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+2689,((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2697,(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+2705,((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2713,(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2721,((0xfU & ((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_value) 
                                      - (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_value)))),4);
        vcdp->chgBus(c+2729,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+2737,((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2745,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+2753,((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2761,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_risingOccupancy));
    }
}

void VBDMAs2m::traceChgThis__9(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2769,(vlTOPp->BDMAs2m__DOT__cch_total_bytes),30);
        vcdp->chgBit(c+2777,((0U == vlTOPp->BDMAs2m__DOT__cch_total_bytes)));
        vcdp->chgBus(c+2785,(vlTOPp->BDMAs2m__DOT__s2m_axis_len),8);
        vcdp->chgBit(c+2793,((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len))));
    }
}

void VBDMAs2m::traceChgThis__10(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2801,(vlTOPp->dma_aw_valid));
        vcdp->chgBit(c+2809,(vlTOPp->dma_aw_ready));
        vcdp->chgBus(c+2817,(vlTOPp->dma_aw_payload_addr),32);
        vcdp->chgBus(c+2825,(vlTOPp->dma_aw_payload_id),4);
        vcdp->chgBus(c+2833,(vlTOPp->dma_aw_payload_len),8);
        vcdp->chgBus(c+2841,(vlTOPp->dma_aw_payload_size),3);
        vcdp->chgBus(c+2849,(vlTOPp->dma_aw_payload_burst),2);
        vcdp->chgBit(c+2857,(vlTOPp->dma_w_valid));
        vcdp->chgBit(c+2865,(vlTOPp->dma_w_ready));
        vcdp->chgBus(c+2873,(vlTOPp->dma_w_payload_data),32);
        vcdp->chgBus(c+2881,(vlTOPp->dma_w_payload_strb),4);
        vcdp->chgBit(c+2889,(vlTOPp->dma_w_payload_last));
        vcdp->chgBit(c+2897,(vlTOPp->dma_b_valid));
        vcdp->chgBit(c+2905,(vlTOPp->dma_b_ready));
        vcdp->chgBus(c+2913,(vlTOPp->dma_b_payload_id),4);
        vcdp->chgBus(c+2921,(vlTOPp->dma_b_payload_resp),2);
        vcdp->chgBit(c+2929,(vlTOPp->s2m_data_stream_valid));
        vcdp->chgBit(c+2937,(vlTOPp->s2m_data_stream_ready));
        vcdp->chgBus(c+2945,(vlTOPp->s2m_data_stream_payload_data),32);
        vcdp->chgBus(c+2953,(vlTOPp->s2m_data_stream_payload_id),4);
        vcdp->chgBus(c+2961,(vlTOPp->s2m_data_stream_payload_strb),4);
        vcdp->chgBus(c+2969,(vlTOPp->s2m_data_stream_payload_keep_),4);
        vcdp->chgBit(c+2977,(vlTOPp->s2m_data_stream_payload_last));
        vcdp->chgBus(c+2985,(vlTOPp->s2m_state),2);
        vcdp->chgBit(c+2993,(vlTOPp->s2m_cch_valid));
        vcdp->chgBit(c+3001,(vlTOPp->s2m_cch_ready));
        vcdp->chgBus(c+3009,(vlTOPp->s2m_cch_payload_desc_start_addr),32);
        vcdp->chgBus(c+3017,(vlTOPp->s2m_cch_payload_desc_total_bytes),30);
        vcdp->chgBus(c+3025,(vlTOPp->s2m_cch_payload_desc_burst),2);
        vcdp->chgBus(c+3033,(vlTOPp->s2m_cch_payload_desc_id),4);
        vcdp->chgBit(c+3041,(vlTOPp->s2m_cch_payload_desc_reset));
        vcdp->chgBit(c+3049,(vlTOPp->s2m_intr));
        vcdp->chgBit(c+3057,(vlTOPp->clk));
        vcdp->chgBit(c+3065,(vlTOPp->reset));
        vcdp->chgBit(c+3073,(((IData)(vlTOPp->dma_aw_ready) 
                              & (8U > (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo_io_occupancy)))));
        vcdp->chgBit(c+3081,(((IData)(vlTOPp->s2m_cch_payload_desc_reset) 
                              & (IData)(vlTOPp->BDMAs2m__DOT__cycle_finished))));
        vcdp->chgBit(c+3089,(((IData)(vlTOPp->dma_aw_valid) 
                              & (IData)(vlTOPp->dma_aw_ready))));
        vcdp->chgBit(c+3097,(((IData)(vlTOPp->s2m_data_stream_payload_last) 
                              & (1U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len)))));
        vcdp->chgBit(c+3105,(((IData)(vlTOPp->s2m_data_stream_valid) 
                              & (IData)(vlTOPp->s2m_data_stream_ready))));
        vcdp->chgBit(c+3113,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_last) 
                              | (((IData)(vlTOPp->s2m_data_stream_valid) 
                                  & (IData)(vlTOPp->s2m_data_stream_ready)) 
                                 & (IData)(vlTOPp->s2m_data_stream_payload_last)))));
        vcdp->chgQuad(c+3121,(((0U == (IData)(vlTOPp->s2m_state))
                                ? VL_ULL(0x49444c4520)
                                : ((1U == (IData)(vlTOPp->s2m_state))
                                    ? VL_ULL(0x4255525354)
                                    : ((2U == (IData)(vlTOPp->s2m_state))
                                        ? VL_ULL(0x44524f5020)
                                        : VL_ULL(0x3f3f3f3f3f))))),40);
    }
}
