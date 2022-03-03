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
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
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
        vcdp->chgBit(c+33,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+41,((1U & ((~ ((IData)(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_ptrMatch) 
                                      & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_risingOccupancy)))) 
                                  & (~ ((IData)(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT___zz_io_pop_valid) 
                                        & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_full))))))));
        vcdp->chgBus(c+49,(((((IData)(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_risingOccupancy) 
                              & (IData)(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_ptrMatch)) 
                             << 3U) | (7U & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_popPtr_value))))),4);
        vcdp->chgBus(c+57,(((((~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_risingOccupancy)) 
                              & (IData)(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_ptrMatch)) 
                             << 3U) | (7U & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_pushPtr_value))))),4);
        vcdp->chgBit(c+65,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+73,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo_io_pop_valid));
        vcdp->chgBus(c+81,(((((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_risingOccupancy) 
                              & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ptrMatch)) 
                             << 5U) | (0x1fU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_value) 
                                                - (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_value))))),6);
        vcdp->chgBus(c+89,(((((~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_risingOccupancy)) 
                              & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ptrMatch)) 
                             << 5U) | (0x1fU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_value) 
                                                - (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_value))))),6);
        vcdp->chgBit(c+97,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+105,(vlTOPp->BDMAs2m__DOT__len_pending_fifo_io_pop_valid));
        vcdp->chgBus(c+113,(vlTOPp->BDMAs2m__DOT__len_pending_fifo_io_occupancy),4);
        vcdp->chgBus(c+121,((0xfU & ((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0U : 0xcU)
                                      : (((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_value) 
                                                - (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_value)))
                                          : ((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_value)))))),4);
        vcdp->chgBit(c+129,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+137,((1U & ((~ ((IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_ptrMatch) 
                                       & (~ (IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_risingOccupancy)))) 
                                   & (~ ((IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT___zz_io_pop_valid) 
                                         & (~ (IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_full))))))));
        vcdp->chgBus(c+145,((0xfU & ((IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0xcU : 0U)
                                      : (((IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_popPtr_value))
                                          : ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_pushPtr_value) 
                                                - (IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_popPtr_value))))))),4);
        vcdp->chgBus(c+153,((0xfU & ((IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_ptrMatch)
                                      ? ((IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_risingOccupancy)
                                          ? 0U : 0xcU)
                                      : (((IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(0xcU) 
                                             + ((IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_popPtr_value) 
                                                - (IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_pushPtr_value)))
                                          : ((IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_pushPtr_value)))))),4);
        vcdp->chgBit(c+161,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire));
        vcdp->chgBit(c+169,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valid) 
                             & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+177,(vlTOPp->BDMAs2m__DOT__aw_finish));
        vcdp->chgBit(c+185,(vlTOPp->BDMAs2m__DOT__len_pending_fifo_io_pop_fire));
        vcdp->chgBit(c+193,(vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l345));
        vcdp->chgBit(c+201,(((3U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__aw_finish))));
        vcdp->chgArray(c+209,(vlTOPp->BDMAs2m__DOT__s2m_cch_state_string),72);
        vcdp->chgBit(c+233,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+241,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+249,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+257,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+265,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+273,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full));
        vcdp->chgBit(c+281,(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+289,(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+297,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+305,(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+313,(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+321,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+329,(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_full));
        vcdp->chgBit(c+337,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+345,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_valueNext),5);
        vcdp->chgBit(c+353,(((0x1fU == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+361,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+369,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+377,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+385,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_full));
        vcdp->chgBit(c+393,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+401,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_valueNext),4);
        vcdp->chgBit(c+409,(((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+417,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+425,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_valueNext),4);
        vcdp->chgBit(c+433,(((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+441,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+449,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+457,(((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+465,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_full));
        vcdp->chgBit(c+473,(((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo_io_pop_fire))));
        vcdp->chgBus(c+481,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ptrDif),4);
        vcdp->chgBit(c+489,(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+497,(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_pushPtr_valueNext),4);
        vcdp->chgBit(c+505,(((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+513,(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBit(c+521,(((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+529,(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+537,(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+545,(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_popping));
        vcdp->chgBit(c+553,(((IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+561,(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_full));
        vcdp->chgBit(c+569,(((IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_popping))));
    }
}

void VBDMAs2m::traceChgThis__3(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+577,((((IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_last_cycle) 
                              & (0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_len))) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__aw_finish))));
    }
}

void VBDMAs2m::traceChgThis__4(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+585,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+593,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire) 
                             != (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+601,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+609,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+617,(((0x1fU == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+625,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popping))));
    }
}

void VBDMAs2m::traceChgThis__5(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+633,(vlTOPp->BDMAs2m__DOT__s2m_cch_fire));
        vcdp->chgBit(c+641,(vlTOPp->BDMAs2m__DOT__dma_aw_fire_1));
        vcdp->chgBit(c+649,(vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l271));
        vcdp->chgBit(c+657,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+665,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+673,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping));
        vcdp->chgBit(c+681,(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+689,(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->chgBit(c+697,(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_popping));
        vcdp->chgBit(c+705,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+713,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_valueNext),5);
        vcdp->chgBit(c+721,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popping));
    }
}

void VBDMAs2m::traceChgThis__6(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+729,(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_popPtr_valueNext),4);
    }
}

void VBDMAs2m::traceChgThis__7(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+737,((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->chgBus(c+745,((0xfU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                             >> 0x20U)))),4);
        vcdp->chgBus(c+753,((0xffU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x24U)))),8);
        vcdp->chgBus(c+761,((7U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                           >> 0x2cU)))),3);
        vcdp->chgBus(c+769,((3U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                           >> 0x2fU)))),2);
        vcdp->chgBus(c+777,(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT___zz_logic_ram_port0),30);
        vcdp->chgBus(c+785,((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->chgBus(c+793,((0xfU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT___zz_logic_ram_port0 
                                             >> 0x20U)))),4);
        vcdp->chgBit(c+801,((1U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT___zz_logic_ram_port0 
                                           >> 0x24U)))));
        vcdp->chgBus(c+809,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT___zz_logic_ram_port0),8);
        vcdp->chgBus(c+817,(vlTOPp->BDMAs2m__DOT__cch_address),32);
        vcdp->chgBus(c+825,(vlTOPp->BDMAs2m__DOT__cch_burst_type),2);
        vcdp->chgBus(c+833,(vlTOPp->BDMAs2m__DOT__cch_id),4);
        vcdp->chgBus(c+841,(vlTOPp->BDMAs2m__DOT__trans_bytes_cnt),30);
        vcdp->chgBus(c+849,(vlTOPp->BDMAs2m__DOT__s2m_aw_len),8);
        vcdp->chgBus(c+857,((0xfffffffcU & vlTOPp->BDMAs2m__DOT__cch_address)),32);
        vcdp->chgBit(c+865,((0U != (0xfffffU & (((IData)(0x40U) 
                                                 + 
                                                 (0xfffU 
                                                  & vlTOPp->BDMAs2m__DOT__cch_address)) 
                                                >> 0xcU)))));
        vcdp->chgBus(c+873,(vlTOPp->BDMAs2m__DOT__len_pending),8);
        vcdp->chgBus(c+881,(vlTOPp->BDMAs2m__DOT__trans_pending),30);
        vcdp->chgBus(c+889,(vlTOPp->BDMAs2m__DOT__s2m_axis_data),32);
        vcdp->chgBus(c+897,(vlTOPp->BDMAs2m__DOT__s2m_axis_residual_data),32);
        vcdp->chgBus(c+905,(vlTOPp->BDMAs2m__DOT__s2m_w_data),32);
        vcdp->chgQuad(c+913,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[0]),49);
        vcdp->chgQuad(c+915,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[1]),49);
        vcdp->chgQuad(c+917,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[2]),49);
        vcdp->chgQuad(c+919,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[3]),49);
        vcdp->chgQuad(c+921,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[4]),49);
        vcdp->chgQuad(c+923,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[5]),49);
        vcdp->chgQuad(c+925,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[6]),49);
        vcdp->chgQuad(c+927,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[7]),49);
        vcdp->chgBus(c+1041,(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_ram[0]),30);
        vcdp->chgBus(c+1042,(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_ram[1]),30);
        vcdp->chgBus(c+1043,(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_ram[2]),30);
        vcdp->chgBus(c+1044,(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_ram[3]),30);
        vcdp->chgBus(c+1045,(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_ram[4]),30);
        vcdp->chgBus(c+1046,(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_ram[5]),30);
        vcdp->chgBus(c+1047,(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_ram[6]),30);
        vcdp->chgBus(c+1048,(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_ram[7]),30);
        vcdp->chgQuad(c+1105,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[0]),37);
        vcdp->chgQuad(c+1107,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[1]),37);
        vcdp->chgQuad(c+1109,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[2]),37);
        vcdp->chgQuad(c+1111,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[3]),37);
        vcdp->chgQuad(c+1113,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[4]),37);
        vcdp->chgQuad(c+1115,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[5]),37);
        vcdp->chgQuad(c+1117,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[6]),37);
        vcdp->chgQuad(c+1119,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[7]),37);
        vcdp->chgQuad(c+1121,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[8]),37);
        vcdp->chgQuad(c+1123,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[9]),37);
        vcdp->chgQuad(c+1125,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[10]),37);
        vcdp->chgQuad(c+1127,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[11]),37);
        vcdp->chgQuad(c+1129,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[12]),37);
        vcdp->chgQuad(c+1131,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[13]),37);
        vcdp->chgQuad(c+1133,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[14]),37);
        vcdp->chgQuad(c+1135,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[15]),37);
        vcdp->chgQuad(c+1137,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[16]),37);
        vcdp->chgQuad(c+1139,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[17]),37);
        vcdp->chgQuad(c+1141,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[18]),37);
        vcdp->chgQuad(c+1143,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[19]),37);
        vcdp->chgQuad(c+1145,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[20]),37);
        vcdp->chgQuad(c+1147,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[21]),37);
        vcdp->chgQuad(c+1149,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[22]),37);
        vcdp->chgQuad(c+1151,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[23]),37);
        vcdp->chgQuad(c+1153,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[24]),37);
        vcdp->chgQuad(c+1155,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[25]),37);
        vcdp->chgQuad(c+1157,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[26]),37);
        vcdp->chgQuad(c+1159,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[27]),37);
        vcdp->chgQuad(c+1161,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[28]),37);
        vcdp->chgQuad(c+1163,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[29]),37);
        vcdp->chgQuad(c+1165,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[30]),37);
        vcdp->chgQuad(c+1167,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[31]),37);
        vcdp->chgBus(c+1617,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[0]),8);
        vcdp->chgBus(c+1618,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[1]),8);
        vcdp->chgBus(c+1619,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[2]),8);
        vcdp->chgBus(c+1620,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[3]),8);
        vcdp->chgBus(c+1621,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[4]),8);
        vcdp->chgBus(c+1622,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[5]),8);
        vcdp->chgBus(c+1623,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[6]),8);
        vcdp->chgBus(c+1624,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[7]),8);
        vcdp->chgBus(c+1625,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[8]),8);
        vcdp->chgBus(c+1626,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[9]),8);
        vcdp->chgBus(c+1627,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[10]),8);
        vcdp->chgBus(c+1628,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[11]),8);
    }
}

void VBDMAs2m::traceChgThis__8(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1713,((0x40U >= (vlTOPp->BDMAs2m__DOT__cch_total_bytes 
                                        + (3U & vlTOPp->BDMAs2m__DOT__cch_address)))));
        vcdp->chgBit(c+1721,((0U != (0xfffffU & (((0xfffU 
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
        vcdp->chgBus(c+1729,(vlTOPp->BDMAs2m__DOT__s2m_cch_state),2);
        vcdp->chgBus(c+1737,(vlTOPp->BDMAs2m__DOT__s2m_w_state),2);
        vcdp->chgBit(c+1745,(vlTOPp->BDMAs2m__DOT__cch_ready));
        vcdp->chgBit(c+1753,(vlTOPp->BDMAs2m__DOT__s2m_aw_valid));
        vcdp->chgBit(c+1761,(vlTOPp->BDMAs2m__DOT__s2m_aw_halt_exec));
        vcdp->chgBit(c+1769,(vlTOPp->BDMAs2m__DOT__cycle_finished));
        vcdp->chgBus(c+1777,(vlTOPp->BDMAs2m__DOT__s2m_bytes_shift),2);
        vcdp->chgBus(c+1785,(vlTOPp->BDMAs2m__DOT__s2m_mask_shift),2);
        vcdp->chgBit(c+1793,(vlTOPp->BDMAs2m__DOT__pending_valid));
        vcdp->chgBit(c+1801,(vlTOPp->BDMAs2m__DOT__s2m_axis_valve));
        vcdp->chgBus(c+1809,(vlTOPp->BDMAs2m__DOT__s2m_axis_strb_keep),4);
        vcdp->chgBus(c+1817,(vlTOPp->BDMAs2m__DOT__s2m_axis_residual_strb_keep),4);
        vcdp->chgBus(c+1825,(vlTOPp->BDMAs2m__DOT__s2m_axis_trans_bytes),30);
        vcdp->chgBit(c+1833,(vlTOPp->BDMAs2m__DOT__s2m_axis_req));
        vcdp->chgBit(c+1841,(vlTOPp->BDMAs2m__DOT__s2m_axis_first));
        vcdp->chgBit(c+1849,(vlTOPp->BDMAs2m__DOT__s2m_axis_last_cycle));
        vcdp->chgBit(c+1857,(vlTOPp->BDMAs2m__DOT__s2m_axis_final_last));
        vcdp->chgBit(c+1865,(vlTOPp->BDMAs2m__DOT__s2m_axis_leak));
        vcdp->chgBit(c+1873,(vlTOPp->BDMAs2m__DOT__s2m_w_last));
        vcdp->chgBus(c+1881,(vlTOPp->BDMAs2m__DOT__s2m_w_strb),4);
        vcdp->chgBit(c+1889,(vlTOPp->BDMAs2m__DOT__s2m_w_valid));
        vcdp->chgBus(c+1897,(vlTOPp->BDMAs2m__DOT__s2m_w_final_mask),4);
        vcdp->chgBit(c+1905,(vlTOPp->BDMAs2m__DOT__pending_fifo_pop_ready));
        vcdp->chgBit(c+1913,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_first)))));
        vcdp->chgBit(c+1921,((4U >= vlTOPp->BDMAs2m__DOT__s2m_axis_trans_bytes)));
        vcdp->chgBit(c+1929,((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))));
        vcdp->chgQuad(c+1937,(((2U & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))
                                ? ((1U & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))
                                    ? VL_ULL(0x44524f5020)
                                    : VL_ULL(0x4255525354))
                                : ((1U & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))
                                    ? VL_ULL(0x5245512020)
                                    : VL_ULL(0x49444c4520)))),40);
        vcdp->chgBus(c+1953,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+1961,((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+1969,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+1977,((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+1985,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+1993,((7U & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+2001,(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+2009,((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2017,(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+2025,((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2033,(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2041,((7U & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->BDMAs2m__DOT__s2m_trans_bytes_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->chgBus(c+2049,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_value),5);
        vcdp->chgBit(c+2057,((0x1fU == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2065,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_value),5);
        vcdp->chgBit(c+2073,((0x1fU == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2081,(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2089,((0x1fU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_value)))),5);
        vcdp->chgBus(c+2097,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+2105,((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2113,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+2121,((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2129,(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2137,(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+2145,((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2153,(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+2161,((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2169,(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2177,((0xfU & ((IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_pushPtr_value) 
                                      - (IData)(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_popPtr_value)))),4);
    }
}

void VBDMAs2m::traceChgThis__11(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2185,(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT___zz_logic_ram_port0),30);
        vcdp->chgBus(c+2193,(vlTOPp->BDMAs2m__DOT__cch_total_bytes),30);
        vcdp->chgBit(c+2201,((0U == vlTOPp->BDMAs2m__DOT__cch_total_bytes)));
        vcdp->chgBus(c+2209,(vlTOPp->BDMAs2m__DOT__s2m_w_len),8);
        vcdp->chgBit(c+2217,((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_len))));
        vcdp->chgBus(c+2225,(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_ram[0]),30);
        vcdp->chgBus(c+2226,(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_ram[1]),30);
        vcdp->chgBus(c+2227,(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_ram[2]),30);
        vcdp->chgBus(c+2228,(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_ram[3]),30);
        vcdp->chgBus(c+2229,(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_ram[4]),30);
        vcdp->chgBus(c+2230,(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_ram[5]),30);
        vcdp->chgBus(c+2231,(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_ram[6]),30);
        vcdp->chgBus(c+2232,(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_ram[7]),30);
        vcdp->chgBus(c+2233,(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_ram[8]),30);
        vcdp->chgBus(c+2234,(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_ram[9]),30);
        vcdp->chgBus(c+2235,(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_ram[10]),30);
        vcdp->chgBus(c+2236,(vlTOPp->BDMAs2m__DOT__trans_pending_fifo__DOT__logic_ram[11]),30);
    }
}

void VBDMAs2m::traceChgThis__12(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2321,(vlTOPp->dma_aw_valid));
        vcdp->chgBit(c+2329,(vlTOPp->dma_aw_ready));
        vcdp->chgBus(c+2337,(vlTOPp->dma_aw_payload_addr),32);
        vcdp->chgBus(c+2345,(vlTOPp->dma_aw_payload_id),4);
        vcdp->chgBus(c+2353,(vlTOPp->dma_aw_payload_len),8);
        vcdp->chgBus(c+2361,(vlTOPp->dma_aw_payload_size),3);
        vcdp->chgBus(c+2369,(vlTOPp->dma_aw_payload_burst),2);
        vcdp->chgBit(c+2377,(vlTOPp->dma_w_valid));
        vcdp->chgBit(c+2385,(vlTOPp->dma_w_ready));
        vcdp->chgBus(c+2393,(vlTOPp->dma_w_payload_data),32);
        vcdp->chgBus(c+2401,(vlTOPp->dma_w_payload_strb),4);
        vcdp->chgBit(c+2409,(vlTOPp->dma_w_payload_last));
        vcdp->chgBit(c+2417,(vlTOPp->dma_b_valid));
        vcdp->chgBit(c+2425,(vlTOPp->dma_b_ready));
        vcdp->chgBus(c+2433,(vlTOPp->dma_b_payload_id),4);
        vcdp->chgBus(c+2441,(vlTOPp->dma_b_payload_resp),2);
        vcdp->chgBit(c+2449,(vlTOPp->s2m_data_stream_valid));
        vcdp->chgBit(c+2457,(vlTOPp->s2m_data_stream_ready));
        vcdp->chgBus(c+2465,(vlTOPp->s2m_data_stream_payload_data),32);
        vcdp->chgBus(c+2473,(vlTOPp->s2m_data_stream_payload_id),4);
        vcdp->chgBus(c+2481,(vlTOPp->s2m_data_stream_payload_strb),4);
        vcdp->chgBus(c+2489,(vlTOPp->s2m_data_stream_payload_keep_),4);
        vcdp->chgBit(c+2497,(vlTOPp->s2m_data_stream_payload_last));
        vcdp->chgBus(c+2505,(vlTOPp->s2m_state),2);
        vcdp->chgBit(c+2513,(vlTOPp->s2m_cch_valid));
        vcdp->chgBit(c+2521,(vlTOPp->s2m_cch_ready));
        vcdp->chgBus(c+2529,(vlTOPp->s2m_cch_payload_desc_start_addr),32);
        vcdp->chgBus(c+2537,(vlTOPp->s2m_cch_payload_desc_total_bytes),30);
        vcdp->chgBus(c+2545,(vlTOPp->s2m_cch_payload_desc_burst),2);
        vcdp->chgBus(c+2553,(vlTOPp->s2m_cch_payload_desc_id),4);
        vcdp->chgBit(c+2561,(vlTOPp->s2m_cch_payload_desc_reset));
        vcdp->chgBit(c+2569,(vlTOPp->s2m_intr));
        vcdp->chgBit(c+2577,(vlTOPp->clk));
        vcdp->chgBit(c+2585,(vlTOPp->reset));
        vcdp->chgBit(c+2593,(((IData)(vlTOPp->dma_aw_ready) 
                              & (8U > (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo_io_occupancy)))));
        vcdp->chgBit(c+2601,(((IData)(vlTOPp->s2m_cch_payload_desc_reset) 
                              & (IData)(vlTOPp->BDMAs2m__DOT__cycle_finished))));
        vcdp->chgBit(c+2609,(((IData)(vlTOPp->dma_aw_valid) 
                              & (IData)(vlTOPp->dma_aw_ready))));
        vcdp->chgBit(c+2617,(((IData)(vlTOPp->s2m_data_stream_valid) 
                              & (IData)(vlTOPp->s2m_data_stream_ready))));
        vcdp->chgBit(c+2625,(((IData)(vlTOPp->s2m_data_stream_payload_last) 
                              | (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_final_last))));
        vcdp->chgBit(c+2633,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_final_last) 
                              | ((IData)(vlTOPp->s2m_data_stream_payload_last) 
                                 & ((IData)(vlTOPp->s2m_data_stream_valid) 
                                    & (IData)(vlTOPp->s2m_data_stream_ready))))));
        vcdp->chgQuad(c+2641,(((2U & (IData)(vlTOPp->s2m_state))
                                ? ((1U & (IData)(vlTOPp->s2m_state))
                                    ? VL_ULL(0x44524f5020)
                                    : VL_ULL(0x4255525354))
                                : ((1U & (IData)(vlTOPp->s2m_state))
                                    ? VL_ULL(0x5245512020)
                                    : VL_ULL(0x49444c4520)))),40);
    }
}
