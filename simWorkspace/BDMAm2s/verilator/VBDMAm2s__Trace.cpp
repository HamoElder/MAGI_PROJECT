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
                                              >> 4U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 1U) | (vlTOPp->__Vm_traceActivity 
                                          >> 3U))))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 2U) | (vlTOPp->__Vm_traceActivity 
                                          >> 3U))))) {
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
        vcdp->chgBit(c+33,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+41,((1U & ((~ ((IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_ptrMatch) 
                                      & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_risingOccupancy)))) 
                                  & (~ ((IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT___zz_io_pop_valid) 
                                        & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_full))))))));
        vcdp->chgBus(c+49,(((((IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_risingOccupancy) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_ptrMatch)) 
                             << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popPtr_value))))),4);
        vcdp->chgBus(c+57,(((((~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_risingOccupancy)) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_ptrMatch)) 
                             << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushPtr_value))))),4);
        vcdp->chgBit(c+65,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+73,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid));
        vcdp->chgBus(c+81,(((((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch)) 
                             << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value))))),4);
        vcdp->chgBus(c+89,(((((~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy)) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch)) 
                             << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value))))),4);
        vcdp->chgBit(c+97,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+105,(vlTOPp->BDMAm2s__DOT__len_pending_fifo_io_pop_valid));
        vcdp->chgBus(c+113,(vlTOPp->BDMAm2s__DOT__len_pending_fifo_io_occupancy),4);
        vcdp->chgBus(c+121,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0U : 0xcU)
                                      : (((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_value) 
                                                - (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_value)))
                                          : ((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_value)))))),4);
        vcdp->chgBit(c+129,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+137,((1U & ((~ ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ptrMatch) 
                                       & (~ (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_risingOccupancy)))) 
                                   & (~ ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT___zz_io_pop_valid) 
                                         & (~ (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_full))))))));
        vcdp->chgBus(c+145,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0xcU : 0U)
                                      : (((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value))
                                          : ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value) 
                                                - (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value))))))),4);
        vcdp->chgBus(c+153,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0U : 0xcU)
                                      : (((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value) 
                                                - (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value)))
                                          : ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value)))))),4);
        vcdp->chgBit(c+161,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+169,((1U & ((~ ((IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ptrMatch) 
                                       & (~ (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_risingOccupancy)))) 
                                   & (~ ((IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT___zz_io_pop_valid) 
                                         & (~ (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_full))))))));
        vcdp->chgBus(c+177,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0xcU : 0U)
                                      : (((IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_value))
                                          : ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_value) 
                                                - (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_value))))))),4);
        vcdp->chgBus(c+185,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0U : 0xcU)
                                      : (((IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_value) 
                                                - (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_value)))
                                          : ((IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_value)))))),4);
        vcdp->chgBit(c+193,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire));
        vcdp->chgBit(c+201,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_valid) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+209,(vlTOPp->BDMAm2s__DOT__ar_finish));
        vcdp->chgBit(c+217,(vlTOPp->BDMAm2s__DOT__len_pending_fifo_io_pop_fire));
        vcdp->chgArray(c+225,(vlTOPp->BDMAm2s__DOT__m2s_cch_state_string),72);
        vcdp->chgBit(c+249,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+257,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+265,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+273,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+281,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+289,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full));
        vcdp->chgBit(c+297,(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+305,(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+313,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+321,(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+329,(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+337,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+345,(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_full));
        vcdp->chgBit(c+353,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+361,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+369,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+377,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+385,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+393,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+401,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_full));
        vcdp->chgBit(c+409,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+417,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_valueNext),4);
        vcdp->chgBit(c+425,(((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+433,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+441,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_valueNext),4);
        vcdp->chgBit(c+449,(((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+457,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+465,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+473,(((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+481,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_full));
        vcdp->chgBit(c+489,(((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo_io_pop_fire))));
        vcdp->chgBus(c+497,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ptrDif),4);
        vcdp->chgBit(c+505,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+513,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_valueNext),4);
        vcdp->chgBit(c+521,(((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+529,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+537,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_valueNext),4);
        vcdp->chgBit(c+545,(((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+553,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+561,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+569,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popping));
        vcdp->chgBit(c+577,(((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+585,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_full));
        vcdp->chgBit(c+593,(((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+601,(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+609,(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_valueNext),4);
        vcdp->chgBit(c+617,(((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+625,(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBit(c+633,(((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+641,(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+649,(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+657,(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popping));
        vcdp->chgBit(c+665,(((IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+673,(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_full));
        vcdp->chgBit(c+681,(((IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popping))));
    }
}

void VBDMAm2s::traceChgThis__3(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+689,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+697,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire) 
                             != (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+705,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+713,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+721,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+729,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popping))));
    }
}

void VBDMAm2s::traceChgThis__4(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+737,(vlTOPp->BDMAm2s__DOT__m2s_cch_fire));
        vcdp->chgBit(c+745,(vlTOPp->BDMAm2s__DOT__dma_ar_fire_1));
        vcdp->chgBit(c+753,(vlTOPp->BDMAm2s__DOT__dma_r_fire));
        vcdp->chgBit(c+761,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+769,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+777,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popping));
        vcdp->chgBit(c+785,(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+793,(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+801,(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popping));
        vcdp->chgBit(c+809,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+817,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+825,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popping));
    }
}

void VBDMAm2s::traceChgThis__5(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+833,(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_valueNext),4);
    }
}

void VBDMAm2s::traceChgThis__6(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+841,((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->chgBus(c+849,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                             >> 0x20U)))),4);
        vcdp->chgBus(c+857,((0xffU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x24U)))),8);
        vcdp->chgBus(c+865,((7U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                           >> 0x2cU)))),3);
        vcdp->chgBus(c+873,((3U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                           >> 0x2fU)))),2);
        vcdp->chgBus(c+881,(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT___zz_logic_ram_port0),30);
        vcdp->chgBus(c+889,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT___zz_logic_ram_port0),8);
        vcdp->chgBus(c+897,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT___zz_logic_ram_port0),4);
        vcdp->chgBus(c+905,(vlTOPp->BDMAm2s__DOT__cch_address),32);
        vcdp->chgBus(c+913,(vlTOPp->BDMAm2s__DOT__cch_burst_type),2);
        vcdp->chgBus(c+921,(vlTOPp->BDMAm2s__DOT__cch_id),4);
        vcdp->chgBus(c+929,(vlTOPp->BDMAm2s__DOT__trans_bytes_cnt),30);
        vcdp->chgBus(c+937,(vlTOPp->BDMAm2s__DOT__m2s_ar_len),8);
        vcdp->chgBus(c+945,((0xfffffffcU & vlTOPp->BDMAm2s__DOT__cch_address)),32);
        vcdp->chgBit(c+953,((0U != (0xfffffU & (((IData)(0x40U) 
                                                 + 
                                                 (0xfffU 
                                                  & vlTOPp->BDMAm2s__DOT__cch_address)) 
                                                >> 0xcU)))));
        vcdp->chgBus(c+961,(vlTOPp->BDMAm2s__DOT__len_pending),8);
        vcdp->chgBus(c+969,(vlTOPp->BDMAm2s__DOT__trans_pending),30);
        vcdp->chgBus(c+977,(vlTOPp->BDMAm2s__DOT__id_pending),4);
        vcdp->chgBus(c+985,(vlTOPp->BDMAm2s__DOT__m2s_r_payload),32);
        vcdp->chgBus(c+993,(vlTOPp->BDMAm2s__DOT__m2s_r_residual_payload),32);
        vcdp->chgBus(c+1001,(vlTOPp->BDMAm2s__DOT__m2s_axis_payload),32);
        vcdp->chgBus(c+1009,(vlTOPp->BDMAm2s__DOT__m2s_axis_strb_keep),4);
        vcdp->chgBus(c+1017,(vlTOPp->BDMAm2s__DOT__m2s_axis_id),4);
        vcdp->chgQuad(c+1025,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[0]),49);
        vcdp->chgQuad(c+1027,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[1]),49);
        vcdp->chgQuad(c+1029,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[2]),49);
        vcdp->chgQuad(c+1031,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[3]),49);
        vcdp->chgQuad(c+1033,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[4]),49);
        vcdp->chgQuad(c+1035,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[5]),49);
        vcdp->chgQuad(c+1037,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[6]),49);
        vcdp->chgQuad(c+1039,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[7]),49);
        vcdp->chgBus(c+1153,(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_ram[0]),30);
        vcdp->chgBus(c+1154,(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_ram[1]),30);
        vcdp->chgBus(c+1155,(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_ram[2]),30);
        vcdp->chgBus(c+1156,(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_ram[3]),30);
        vcdp->chgBus(c+1157,(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_ram[4]),30);
        vcdp->chgBus(c+1158,(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_ram[5]),30);
        vcdp->chgBus(c+1159,(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_ram[6]),30);
        vcdp->chgBus(c+1160,(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_ram[7]),30);
        vcdp->chgBus(c+1217,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[0]),8);
        vcdp->chgBus(c+1218,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[1]),8);
        vcdp->chgBus(c+1219,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[2]),8);
        vcdp->chgBus(c+1220,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[3]),8);
        vcdp->chgBus(c+1221,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[4]),8);
        vcdp->chgBus(c+1222,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[5]),8);
        vcdp->chgBus(c+1223,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[6]),8);
        vcdp->chgBus(c+1224,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[7]),8);
        vcdp->chgBus(c+1225,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[8]),8);
        vcdp->chgBus(c+1226,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[9]),8);
        vcdp->chgBus(c+1227,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[10]),8);
        vcdp->chgBus(c+1228,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[11]),8);
        vcdp->chgBus(c+1313,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[0]),4);
        vcdp->chgBus(c+1314,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[1]),4);
        vcdp->chgBus(c+1315,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[2]),4);
        vcdp->chgBus(c+1316,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[3]),4);
        vcdp->chgBus(c+1317,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[4]),4);
        vcdp->chgBus(c+1318,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[5]),4);
        vcdp->chgBus(c+1319,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[6]),4);
        vcdp->chgBus(c+1320,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[7]),4);
        vcdp->chgBus(c+1321,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[8]),4);
        vcdp->chgBus(c+1322,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[9]),4);
        vcdp->chgBus(c+1323,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[10]),4);
        vcdp->chgBus(c+1324,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[11]),4);
    }
}

void VBDMAm2s::traceChgThis__8(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1409,((0x40U >= (vlTOPp->BDMAm2s__DOT__cch_total_bytes 
                                        + (3U & vlTOPp->BDMAm2s__DOT__cch_address)))));
        vcdp->chgBit(c+1417,((0U != (0xfffffU & (((0xfffU 
                                                   & vlTOPp->BDMAm2s__DOT__cch_address) 
                                                  + 
                                                  (0xfffU 
                                                   & vlTOPp->BDMAm2s__DOT__cch_total_bytes)) 
                                                 >> 0xcU)))));
    }
}

void VBDMAm2s::traceChgThis__9(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1425,(vlTOPp->BDMAm2s__DOT__m2s_cch_state),2);
        vcdp->chgBus(c+1433,(vlTOPp->BDMAm2s__DOT__m2s_r_state),2);
        vcdp->chgBit(c+1441,(vlTOPp->BDMAm2s__DOT__cch_ready));
        vcdp->chgBit(c+1449,(vlTOPp->BDMAm2s__DOT__m2s_ar_valid));
        vcdp->chgBit(c+1457,(vlTOPp->BDMAm2s__DOT__m2s_ar_halt_exec));
        vcdp->chgBit(c+1465,(vlTOPp->BDMAm2s__DOT__cycle_finished));
        vcdp->chgBus(c+1473,(vlTOPp->BDMAm2s__DOT__m2s_bytes_shift),2);
        vcdp->chgBit(c+1481,(vlTOPp->BDMAm2s__DOT__pending_valid));
        vcdp->chgBit(c+1489,(vlTOPp->BDMAm2s__DOT__pending_fifo_pop_ready));
        vcdp->chgBit(c+1497,(vlTOPp->BDMAm2s__DOT__m2s_r_valve));
        vcdp->chgBit(c+1505,(vlTOPp->BDMAm2s__DOT__m2s_r_req));
        vcdp->chgBit(c+1513,(vlTOPp->BDMAm2s__DOT__m2s_r_first));
        vcdp->chgBit(c+1521,(vlTOPp->BDMAm2s__DOT__m2s_r_last_cycle));
        vcdp->chgBit(c+1529,(vlTOPp->BDMAm2s__DOT__m2s_axis_valid));
        vcdp->chgBit(c+1537,(vlTOPp->BDMAm2s__DOT__m2s_axis_last));
        vcdp->chgBus(c+1545,(vlTOPp->BDMAm2s__DOT__m2s_axis_trans_bytes),30);
        vcdp->chgBit(c+1553,((4U > vlTOPp->BDMAm2s__DOT__m2s_axis_trans_bytes)));
        vcdp->chgBit(c+1561,((0U != vlTOPp->BDMAm2s__DOT__m2s_axis_trans_bytes)));
        vcdp->chgBit(c+1569,((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))));
        vcdp->chgQuad(c+1577,(((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_r_state))
                                ? VL_ULL(0x49444c45202020)
                                : ((1U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_r_state))
                                    ? VL_ULL(0x42555253542020)
                                    : ((2U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_r_state))
                                        ? VL_ULL(0x46494e414c5f31)
                                        : VL_ULL(0x3f3f3f3f3f3f3f))))),56);
        vcdp->chgBus(c+1593,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+1601,((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+1609,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+1617,((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+1625,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+1633,((7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+1641,(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+1649,((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+1657,(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+1665,((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+1673,(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+1681,((7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+1689,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+1697,((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+1705,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+1713,((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+1721,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+1729,((7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+1737,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+1745,((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+1753,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+1761,((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+1769,(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+1777,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+1785,((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+1793,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+1801,((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+1809,(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+1817,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value) 
                                      - (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value)))),4);
        vcdp->chgBus(c+1825,(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+1833,((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+1841,(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+1849,((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+1857,(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+1865,((0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_value) 
                                      - (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_value)))),4);
    }
}

void VBDMAm2s::traceChgThis__10(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1873,(((~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_r_first)) 
                              & (0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_r_len)))));
    }
}

void VBDMAm2s::traceChgThis__11(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1881,((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->chgBus(c+1889,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x20U)))),4);
        vcdp->chgBus(c+1897,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x24U)))),4);
        vcdp->chgBus(c+1905,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x28U)))),4);
        vcdp->chgBit(c+1913,((1U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2cU)))));
        vcdp->chgBus(c+1921,(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT___zz_logic_ram_port0),30);
        vcdp->chgBus(c+1929,(vlTOPp->BDMAm2s__DOT__cch_total_bytes),30);
        vcdp->chgBit(c+1937,((0U == vlTOPp->BDMAm2s__DOT__cch_total_bytes)));
        vcdp->chgBus(c+1945,(vlTOPp->BDMAm2s__DOT__m2s_r_len),8);
        vcdp->chgBit(c+1953,((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_r_len))));
        vcdp->chgQuad(c+1961,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[0]),45);
        vcdp->chgQuad(c+1963,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[1]),45);
        vcdp->chgQuad(c+1965,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[2]),45);
        vcdp->chgQuad(c+1967,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[3]),45);
        vcdp->chgQuad(c+1969,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[4]),45);
        vcdp->chgQuad(c+1971,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[5]),45);
        vcdp->chgQuad(c+1973,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[6]),45);
        vcdp->chgQuad(c+1975,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[7]),45);
        vcdp->chgBus(c+2089,(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ram[0]),30);
        vcdp->chgBus(c+2090,(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ram[1]),30);
        vcdp->chgBus(c+2091,(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ram[2]),30);
        vcdp->chgBus(c+2092,(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ram[3]),30);
        vcdp->chgBus(c+2093,(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ram[4]),30);
        vcdp->chgBus(c+2094,(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ram[5]),30);
        vcdp->chgBus(c+2095,(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ram[6]),30);
        vcdp->chgBus(c+2096,(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ram[7]),30);
        vcdp->chgBus(c+2097,(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ram[8]),30);
        vcdp->chgBus(c+2098,(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ram[9]),30);
        vcdp->chgBus(c+2099,(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ram[10]),30);
        vcdp->chgBus(c+2100,(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ram[11]),30);
    }
}

void VBDMAm2s::traceChgThis__12(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2185,(vlTOPp->dma_ar_valid));
        vcdp->chgBit(c+2193,(vlTOPp->dma_ar_ready));
        vcdp->chgBus(c+2201,(vlTOPp->dma_ar_payload_addr),32);
        vcdp->chgBus(c+2209,(vlTOPp->dma_ar_payload_id),4);
        vcdp->chgBus(c+2217,(vlTOPp->dma_ar_payload_len),8);
        vcdp->chgBus(c+2225,(vlTOPp->dma_ar_payload_size),3);
        vcdp->chgBus(c+2233,(vlTOPp->dma_ar_payload_burst),2);
        vcdp->chgBit(c+2241,(vlTOPp->dma_r_valid));
        vcdp->chgBit(c+2249,(vlTOPp->dma_r_ready));
        vcdp->chgBus(c+2257,(vlTOPp->dma_r_payload_data),32);
        vcdp->chgBus(c+2265,(vlTOPp->dma_r_payload_id),4);
        vcdp->chgBus(c+2273,(vlTOPp->dma_r_payload_resp),2);
        vcdp->chgBit(c+2281,(vlTOPp->dma_r_payload_last));
        vcdp->chgBit(c+2289,(vlTOPp->m2s_data_stream_valid));
        vcdp->chgBit(c+2297,(vlTOPp->m2s_data_stream_ready));
        vcdp->chgBus(c+2305,(vlTOPp->m2s_data_stream_payload_data),32);
        vcdp->chgBus(c+2313,(vlTOPp->m2s_data_stream_payload_id),4);
        vcdp->chgBus(c+2321,(vlTOPp->m2s_data_stream_payload_strb),4);
        vcdp->chgBus(c+2329,(vlTOPp->m2s_data_stream_payload_keep_),4);
        vcdp->chgBit(c+2337,(vlTOPp->m2s_data_stream_payload_last));
        vcdp->chgBus(c+2345,(vlTOPp->m2s_state),2);
        vcdp->chgBit(c+2353,(vlTOPp->m2s_cch_valid));
        vcdp->chgBit(c+2361,(vlTOPp->m2s_cch_ready));
        vcdp->chgBus(c+2369,(vlTOPp->m2s_cch_payload_desc_start_addr),32);
        vcdp->chgBus(c+2377,(vlTOPp->m2s_cch_payload_desc_total_bytes),30);
        vcdp->chgBus(c+2385,(vlTOPp->m2s_cch_payload_desc_burst),2);
        vcdp->chgBus(c+2393,(vlTOPp->m2s_cch_payload_desc_id),4);
        vcdp->chgBit(c+2401,(vlTOPp->m2s_cch_payload_desc_reset));
        vcdp->chgBit(c+2409,(vlTOPp->m2s_intr));
        vcdp->chgBit(c+2417,(vlTOPp->clk));
        vcdp->chgBit(c+2425,(vlTOPp->reset));
        vcdp->chgBit(c+2433,(((IData)(vlTOPp->dma_ar_ready) 
                              & (8U > (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo_io_occupancy)))));
        vcdp->chgBit(c+2441,(((IData)(vlTOPp->m2s_cch_payload_desc_reset) 
                              & (IData)(vlTOPp->BDMAm2s__DOT__cycle_finished))));
        vcdp->chgBit(c+2449,(((IData)(vlTOPp->dma_ar_valid) 
                              & (IData)(vlTOPp->dma_ar_ready))));
        vcdp->chgBit(c+2457,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid) 
                              & (IData)(vlTOPp->m2s_data_stream_ready))));
        vcdp->chgBit(c+2465,(((IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                       >> 0x2cU)) & 
                              ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid) 
                               & (IData)(vlTOPp->m2s_data_stream_ready)))));
        vcdp->chgQuad(c+2473,(((0U == (IData)(vlTOPp->m2s_state))
                                ? VL_ULL(0x49444c45202020)
                                : ((1U == (IData)(vlTOPp->m2s_state))
                                    ? VL_ULL(0x42555253542020)
                                    : ((2U == (IData)(vlTOPp->m2s_state))
                                        ? VL_ULL(0x46494e414c5f31)
                                        : VL_ULL(0x3f3f3f3f3f3f3f))))),56);
    }
}
