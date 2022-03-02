// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBDMAm2s.h for the primary calling header

#include "VBDMAm2s.h"
#include "VBDMAm2s__Syms.h"

//==========
WData/*71:0*/ VBDMAm2s::__Vtable1_BDMAm2s__DOT__m2s_cch_state_string[4][3];

VL_CTOR_IMP(VBDMAm2s) {
    VBDMAm2s__Syms* __restrict vlSymsp = __VlSymsp = new VBDMAm2s__Syms(this, name());
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VBDMAm2s::__Vconfigure(VBDMAm2s__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VBDMAm2s::~VBDMAm2s() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VBDMAm2s::_initial__TOP__8(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAm2s::_initial__TOP__8\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT____Vxrand1 
        = VL_RAND_RESET_I(8);
    vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT____Vxrand1 
        = VL_RAND_RESET_I(4);
    vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT____Vxrand1 
        = VL_RAND_RESET_I(30);
}

void VBDMAm2s::_settle__TOP__9(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAm2s::_settle__TOP__9\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BDMAm2s__DOT__when_BDMAm2s_l268 = (4U > vlTOPp->BDMAm2s__DOT__m2s_axis_trans_bytes);
    vlTOPp->BDMAm2s__DOT__when_BDMAm2s_l311 = (0U != vlTOPp->BDMAm2s__DOT__m2s_axis_trans_bytes);
    vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ptrDif 
        = (0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_value) 
                   - (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_value)));
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value));
    vlTOPp->dma_ar_payload_addr = (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0);
    vlTOPp->dma_ar_payload_id = (0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                                 >> 0x20U)));
    vlTOPp->dma_ar_payload_len = (0xffU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                                   >> 0x24U)));
    vlTOPp->dma_ar_payload_size = (7U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                                 >> 0x2cU)));
    vlTOPp->dma_ar_payload_burst = (3U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                                  >> 0x2fU)));
    vlTOPp->BDMAm2s__DOT__when_BDMAm2s_l85 = (0U == vlTOPp->BDMAm2s__DOT__cch_total_bytes);
    vlTOPp->m2s_state = vlTOPp->BDMAm2s__DOT__m2s_r_state;
    vlTOPp->BDMAm2s__DOT___zz_when_BDMAm2s_l101 = (vlTOPp->BDMAm2s__DOT__cch_total_bytes 
                                                   + 
                                                   (3U 
                                                    & vlTOPp->BDMAm2s__DOT__cch_address));
    vlTOPp->BDMAm2s__DOT___zz_when_BDMAm2s_l136_1 = 
        ((0xfffU & vlTOPp->BDMAm2s__DOT__cch_address) 
         + (0xfffU & vlTOPp->BDMAm2s__DOT__cch_total_bytes));
    vlTOPp->m2s_cch_ready = vlTOPp->BDMAm2s__DOT__cch_ready;
    vlTOPp->m2s_intr = vlTOPp->BDMAm2s__DOT__cycle_finished;
    vlTOPp->__Vtableidx1 = vlTOPp->BDMAm2s__DOT__m2s_cch_state;
    vlTOPp->BDMAm2s__DOT__m2s_cch_state_string[0U] 
        = vlTOPp->__Vtable1_BDMAm2s__DOT__m2s_cch_state_string
        [vlTOPp->__Vtableidx1][0U];
    vlTOPp->BDMAm2s__DOT__m2s_cch_state_string[1U] 
        = vlTOPp->__Vtable1_BDMAm2s__DOT__m2s_cch_state_string
        [vlTOPp->__Vtableidx1][1U];
    vlTOPp->BDMAm2s__DOT__m2s_cch_state_string[2U] 
        = vlTOPp->__Vtable1_BDMAm2s__DOT__m2s_cch_state_string
        [vlTOPp->__Vtableidx1][2U];
    vlTOPp->m2s_data_stream_payload_data = (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0);
    vlTOPp->m2s_data_stream_payload_id = (0xfU & (IData)(
                                                         (vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                                          >> 0x20U)));
    vlTOPp->m2s_data_stream_payload_strb = (0xfU & (IData)(
                                                           (vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                                            >> 0x24U)));
    vlTOPp->m2s_data_stream_payload_keep_ = (0xfU & (IData)(
                                                            (vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                                             >> 0x28U)));
    vlTOPp->m2s_data_stream_payload_last = (1U & (IData)(
                                                         (vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                                          >> 0x2cU)));
    vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_risingOccupancy));
    vlTOPp->dma_r_ready = ((2U <= ((((~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch)) 
                                    << 5U) | (0x1fU 
                                              & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value))))) 
                           & (IData)(vlTOPp->BDMAm2s__DOT__m2s_r_valve));
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAm2s__DOT__len_pending_fifo_io_occupancy 
        = (0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ptrMatch)
                    ? ((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_risingOccupancy)
                        ? 0xcU : 0U) : (((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_value) 
                                         < (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_value))
                                         ? (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ptrDif)
                                         : ((IData)(0xcU) 
                                            + (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ptrDif)))));
    vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAm2s__DOT__m2s_cch_fire = ((IData)(vlTOPp->m2s_cch_valid) 
                                          & (IData)(vlTOPp->m2s_cch_ready));
    vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popping 
        = (((~ ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_ptrMatch) 
                & (~ (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_risingOccupancy)))) 
            & (~ ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT___zz_io_pop_valid) 
                  & (~ (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_full))))) 
           & (IData)(vlTOPp->BDMAm2s__DOT__pending_fifo_pop_ready));
    vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->BDMAm2s__DOT__pending_valid) 
           & (~ (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_full)));
    vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popping 
        = (((~ ((IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ptrMatch) 
                & (~ (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_risingOccupancy)))) 
            & (~ ((IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT___zz_io_pop_valid) 
                  & (~ (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_full))))) 
           & (IData)(vlTOPp->BDMAm2s__DOT__pending_fifo_pop_ready));
    vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->BDMAm2s__DOT__pending_valid) 
           & (~ (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_full)));
    vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_valid) 
           & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_full)));
    vlTOPp->BDMAm2s__DOT__dma_r_fire = ((IData)(vlTOPp->dma_r_valid) 
                                        & (IData)(vlTOPp->dma_r_ready));
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_valid) 
           & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_full)));
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_full))))));
    vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->BDMAm2s__DOT__pending_valid) 
           & (~ (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_full)));
    vlTOPp->BDMAm2s__DOT__len_pending_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_full))))));
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full))))));
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire 
        = ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_valid) 
           & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full)));
    vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popping) {
        vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popping) {
        vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->m2s_data_stream_valid = vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid;
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid) 
           & (IData)(vlTOPp->m2s_data_stream_ready));
    vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAm2s__DOT__len_pending_fifo_io_pop_fire 
        = ((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo_io_pop_valid) 
           & (IData)(vlTOPp->BDMAm2s__DOT__pending_fifo_pop_ready));
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_pop_valid) 
           & ((IData)(vlTOPp->dma_ar_ready) & (8U > (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo_io_occupancy))));
    vlTOPp->dma_ar_valid = ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_pop_valid) 
                            & (8U > (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo_io_occupancy)));
    vlTOPp->BDMAm2s__DOT__ar_finish = (((~ (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo_io_pop_valid)) 
                                        & (3U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))) 
                                       & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_pop_valid)));
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire) {
        vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire) {
        vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_valueNext 
        = (((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value) 
                            + (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_willIncrement))));
}

void VBDMAm2s::_settle__TOP__10(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAm2s::_settle__TOP__10\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_valueNext 
        = (((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value) 
                            + (IData)(vlTOPp->BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_valueNext 
        = (((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_value) 
                            + (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_willIncrement))));
    vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_valueNext 
        = (((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_value) 
                            + (IData)(vlTOPp->BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popping) {
        vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_valueNext 
        = (((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_value) 
                            + (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__len_pending_fifo_io_pop_fire) {
        vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popping) {
        vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAm2s__DOT__dma_ar_fire_1 = ((IData)(vlTOPp->dma_ar_valid) 
                                           & (IData)(vlTOPp->dma_ar_ready));
    vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popping 
        = (((~ ((IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_ptrMatch) 
                & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_risingOccupancy)))) 
            & (~ ((IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT___zz_io_pop_valid) 
                  & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_full))))) 
           & ((IData)(vlTOPp->dma_ar_valid) & (IData)(vlTOPp->dma_ar_ready)));
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_valueNext 
        = (((0xbU == (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xfU & ((IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_value) 
                            + (IData)(vlTOPp->BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_willIncrement))));
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popping) {
        vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popPtr_willIncrement)));
}

void VBDMAm2s::_eval_initial(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAm2s::_eval_initial\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->_initial__TOP__8(vlSymsp);
}

void VBDMAm2s::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAm2s::final\n"); );
    // Variables
    VBDMAm2s__Syms* __restrict vlSymsp = this->__VlSymsp;
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBDMAm2s::_eval_settle(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAm2s::_eval_settle\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__9(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__10(vlSymsp);
}

void VBDMAm2s::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAm2s::_ctor_var_reset\n"); );
    // Body
    dma_ar_valid = VL_RAND_RESET_I(1);
    dma_ar_ready = VL_RAND_RESET_I(1);
    dma_ar_payload_addr = VL_RAND_RESET_I(32);
    dma_ar_payload_id = VL_RAND_RESET_I(4);
    dma_ar_payload_len = VL_RAND_RESET_I(8);
    dma_ar_payload_size = VL_RAND_RESET_I(3);
    dma_ar_payload_burst = VL_RAND_RESET_I(2);
    dma_r_valid = VL_RAND_RESET_I(1);
    dma_r_ready = VL_RAND_RESET_I(1);
    dma_r_payload_data = VL_RAND_RESET_I(32);
    dma_r_payload_id = VL_RAND_RESET_I(4);
    dma_r_payload_resp = VL_RAND_RESET_I(2);
    dma_r_payload_last = VL_RAND_RESET_I(1);
    m2s_data_stream_valid = VL_RAND_RESET_I(1);
    m2s_data_stream_ready = VL_RAND_RESET_I(1);
    m2s_data_stream_payload_data = VL_RAND_RESET_I(32);
    m2s_data_stream_payload_id = VL_RAND_RESET_I(4);
    m2s_data_stream_payload_strb = VL_RAND_RESET_I(4);
    m2s_data_stream_payload_keep_ = VL_RAND_RESET_I(4);
    m2s_data_stream_payload_last = VL_RAND_RESET_I(1);
    m2s_state = VL_RAND_RESET_I(2);
    m2s_cch_valid = VL_RAND_RESET_I(1);
    m2s_cch_ready = VL_RAND_RESET_I(1);
    m2s_cch_payload_desc_start_addr = VL_RAND_RESET_I(32);
    m2s_cch_payload_desc_total_bytes = VL_RAND_RESET_I(30);
    m2s_cch_payload_desc_burst = VL_RAND_RESET_I(2);
    m2s_cch_payload_desc_id = VL_RAND_RESET_I(4);
    m2s_cch_payload_desc_reset = VL_RAND_RESET_I(1);
    m2s_intr = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_ar_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_data_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__len_pending_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__len_pending_fifo_io_occupancy = VL_RAND_RESET_I(4);
    BDMAm2s__DOT___zz_when_BDMAm2s_l101 = VL_RAND_RESET_I(32);
    BDMAm2s__DOT___zz_when_BDMAm2s_l136_1 = VL_RAND_RESET_I(32);
    BDMAm2s__DOT__m2s_cch_state = VL_RAND_RESET_I(2);
    BDMAm2s__DOT__m2s_r_state = VL_RAND_RESET_I(2);
    BDMAm2s__DOT__cch_ready = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__cch_total_bytes = VL_RAND_RESET_I(30);
    BDMAm2s__DOT__cch_address = VL_RAND_RESET_I(32);
    BDMAm2s__DOT__cch_burst_type = VL_RAND_RESET_I(2);
    BDMAm2s__DOT__cch_id = VL_RAND_RESET_I(4);
    BDMAm2s__DOT__trans_bytes_cnt = VL_RAND_RESET_I(30);
    BDMAm2s__DOT__m2s_ar_len = VL_RAND_RESET_I(8);
    BDMAm2s__DOT__m2s_ar_valid = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_ar_halt_exec = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__cycle_finished = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_bytes_shift = VL_RAND_RESET_I(2);
    BDMAm2s__DOT__m2s_cch_fire = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__when_BDMAm2s_l85 = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_ar_fifo_io_push_fire = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__pending_valid = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__len_pending = VL_RAND_RESET_I(8);
    BDMAm2s__DOT__trans_pending = VL_RAND_RESET_I(30);
    BDMAm2s__DOT__id_pending = VL_RAND_RESET_I(4);
    BDMAm2s__DOT__dma_ar_fire_1 = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__ar_finish = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__pending_fifo_pop_ready = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_r_valve = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_data_payload = VL_RAND_RESET_I(32);
    BDMAm2s__DOT__m2s_data_residual_payload = VL_RAND_RESET_I(32);
    BDMAm2s__DOT__m2s_data_req = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_data_first = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_data_len = VL_RAND_RESET_I(8);
    BDMAm2s__DOT__m2s_axis_payload = VL_RAND_RESET_I(32);
    BDMAm2s__DOT__m2s_axis_strb_keep = VL_RAND_RESET_I(4);
    BDMAm2s__DOT__m2s_axis_valid = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_axis_last = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_axis_low_bytes = VL_RAND_RESET_I(2);
    BDMAm2s__DOT__m2s_axis_id = VL_RAND_RESET_I(4);
    BDMAm2s__DOT__m2s_axis_trans_bytes = VL_RAND_RESET_I(30);
    BDMAm2s__DOT__m2s_data_last_cycle = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__len_pending_fifo_io_pop_fire = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__when_BDMAm2s_l268 = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__dma_r_fire = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__when_BDMAm2s_l311 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(72, BDMAm2s__DOT__m2s_cch_state_string);
    BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_Q(49);
    BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(3);
    BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(3);
    BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(3);
    BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(3);
    BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_Q(49);
    }}
    BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(30);
    BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(3);
    BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(3);
    BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(3);
    BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(3);
    BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(30);
    }}
    BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_Q(45);
    BDMAm2s__DOT__m2s_data_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(5);
    BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(5);
    BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(5);
    BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(5);
    BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_data_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__m2s_data_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_Q(45);
    }}
    BDMAm2s__DOT__len_pending_fifo__DOT____Vxrand1 = VL_RAND_RESET_I(8);
    BDMAm2s__DOT__len_pending_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(8);
    BDMAm2s__DOT__len_pending_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(4);
    BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(4);
    BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(4);
    BDMAm2s__DOT__len_pending_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(4);
    BDMAm2s__DOT__len_pending_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__len_pending_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__len_pending_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__len_pending_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__len_pending_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__len_pending_fifo__DOT__logic_ptrDif = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<12; ++__Vi0) {
            BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(8);
    }}
    BDMAm2s__DOT__len_pending_fifo__DOT____Vlvbound2 = VL_RAND_RESET_I(8);
    BDMAm2s__DOT__id_pending_fifo__DOT____Vxrand1 = VL_RAND_RESET_I(4);
    BDMAm2s__DOT__id_pending_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(4);
    BDMAm2s__DOT__id_pending_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(4);
    BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(4);
    BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(4);
    BDMAm2s__DOT__id_pending_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(4);
    BDMAm2s__DOT__id_pending_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__id_pending_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__id_pending_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__id_pending_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__id_pending_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__id_pending_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<12; ++__Vi0) {
            BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(4);
    }}
    BDMAm2s__DOT__id_pending_fifo__DOT____Vlvbound2 = VL_RAND_RESET_I(4);
    BDMAm2s__DOT__trans_pending_fifo__DOT____Vxrand1 = VL_RAND_RESET_I(30);
    BDMAm2s__DOT__trans_pending_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(30);
    BDMAm2s__DOT__trans_pending_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(4);
    BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(4);
    BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(4);
    BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(4);
    BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__trans_pending_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__trans_pending_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__trans_pending_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__trans_pending_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    BDMAm2s__DOT__trans_pending_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<12; ++__Vi0) {
            BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(30);
    }}
    BDMAm2s__DOT__trans_pending_fifo__DOT____Vlvbound2 = VL_RAND_RESET_I(30);
    __Vtableidx1 = 0;
    VL_CONST_W_3X(72,__Vtable1_BDMAm2s__DOT__m2s_cch_state_string[0],0x00000049,0x444c4520,0x20202020);
    VL_CONST_W_3X(72,__Vtable1_BDMAm2s__DOT__m2s_cch_state_string[1],0x00000046,0x49584544,0x5f524551);
    VL_CONST_W_3X(72,__Vtable1_BDMAm2s__DOT__m2s_cch_state_string[2],0x00000049,0x4e43525f,0x52455120);
    VL_CONST_W_3X(72,__Vtable1_BDMAm2s__DOT__m2s_cch_state_string[3],0x00000048,0x414c5420,0x20202020);
    __Vdly__BDMAm2s__DOT__m2s_r_state = VL_RAND_RESET_I(2);
    __Vdly__BDMAm2s__DOT__m2s_data_req = VL_RAND_RESET_I(1);
    __Vdly__BDMAm2s__DOT__m2s_data_first = VL_RAND_RESET_I(1);
    __Vdly__BDMAm2s__DOT__m2s_axis_trans_bytes = VL_RAND_RESET_I(30);
    __Vdly__BDMAm2s__DOT__m2s_data_last_cycle = VL_RAND_RESET_I(1);
    __Vdly__BDMAm2s__DOT__m2s_cch_state = VL_RAND_RESET_I(2);
    __Vdly__BDMAm2s__DOT__m2s_ar_halt_exec = VL_RAND_RESET_I(1);
    __Vdly__BDMAm2s__DOT__m2s_data_len = VL_RAND_RESET_I(8);
    __Vdly__BDMAm2s__DOT__cch_address = VL_RAND_RESET_I(32);
    __Vdly__BDMAm2s__DOT__cch_total_bytes = VL_RAND_RESET_I(30);
    __Vdly__BDMAm2s__DOT__trans_bytes_cnt = VL_RAND_RESET_I(30);
    __Vdlyvdim0__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_Q(49);
    __Vdlyvset__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvdim0__BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_I(30);
    __Vdlyvset__BDMAm2s__DOT__m2s_trans_bytes_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvdim0__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_Q(45);
    __Vdlyvset__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvdim0__BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__BDMAm2s__DOT__len_pending_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvdim0__BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_I(4);
    __Vdlyvset__BDMAm2s__DOT__id_pending_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvdim0__BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_I(30);
    __Vdlyvset__BDMAm2s__DOT__trans_pending_fifo__DOT__logic_ram__v0 = 0;
    __Vm_traceActivity = 0;
}
