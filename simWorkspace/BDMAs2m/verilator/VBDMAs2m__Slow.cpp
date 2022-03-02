// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBDMAs2m.h for the primary calling header

#include "VBDMAs2m.h"
#include "VBDMAs2m__Syms.h"

//==========
WData/*71:0*/ VBDMAs2m::__Vtable1_BDMAs2m__DOT__s2m_cch_state_string[4][3];

VL_CTOR_IMP(VBDMAs2m) {
    VBDMAs2m__Syms* __restrict vlSymsp = __VlSymsp = new VBDMAs2m__Syms(this, name());
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VBDMAs2m::__Vconfigure(VBDMAs2m__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VBDMAs2m::~VBDMAs2m() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VBDMAs2m::_initial__TOP__1(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAs2m::_initial__TOP__1\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->dma_b_ready = 1U;
    vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT____Vxrand1 
        = VL_RAND_RESET_I(8);
    vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT____Vxrand1 
        = VL_RAND_RESET_I(2);
    vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT____Vxrand1 
        = VL_RAND_RESET_I(4);
}

void VBDMAs2m::_settle__TOP__9(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAs2m::_settle__TOP__9\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l83 = (0U == vlTOPp->BDMAs2m__DOT__cch_total_bytes);
    vlTOPp->dma_aw_payload_addr = (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0);
    vlTOPp->dma_aw_payload_id = (0xfU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                                 >> 0x20U)));
    vlTOPp->dma_aw_payload_size = (7U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                                 >> 0x2cU)));
    vlTOPp->dma_aw_payload_burst = (3U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                                  >> 0x2fU)));
    vlTOPp->dma_w_payload_data = (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT___zz_logic_ram_port0);
    vlTOPp->dma_w_payload_strb = (0xfU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT___zz_logic_ram_port0 
                                                  >> 0x20U)));
    vlTOPp->dma_w_payload_last = (1U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT___zz_logic_ram_port0 
                                                >> 0x24U)));
    vlTOPp->s2m_cch_ready = vlTOPp->BDMAs2m__DOT__cch_ready;
    vlTOPp->dma_aw_payload_len = (0xffU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                                   >> 0x24U)));
    vlTOPp->s2m_intr = vlTOPp->BDMAs2m__DOT__cycle_finished;
    vlTOPp->BDMAs2m__DOT___zz_when_BDMAs2m_l99 = (vlTOPp->BDMAs2m__DOT__cch_total_bytes 
                                                  + 
                                                  (3U 
                                                   & vlTOPp->BDMAs2m__DOT__cch_address));
    vlTOPp->BDMAs2m__DOT___zz_when_BDMAs2m_l134_1 = 
        ((0xfffU & vlTOPp->BDMAs2m__DOT__cch_address) 
         + (0xfffU & vlTOPp->BDMAs2m__DOT__cch_total_bytes));
    vlTOPp->__Vtableidx1 = vlTOPp->BDMAs2m__DOT__s2m_cch_state;
    vlTOPp->BDMAs2m__DOT__s2m_cch_state_string[0U] 
        = vlTOPp->__Vtable1_BDMAs2m__DOT__s2m_cch_state_string
        [vlTOPp->__Vtableidx1][0U];
    vlTOPp->BDMAs2m__DOT__s2m_cch_state_string[1U] 
        = vlTOPp->__Vtable1_BDMAs2m__DOT__s2m_cch_state_string
        [vlTOPp->__Vtableidx1][1U];
    vlTOPp->BDMAs2m__DOT__s2m_cch_state_string[2U] 
        = vlTOPp->__Vtable1_BDMAs2m__DOT__s2m_cch_state_string
        [vlTOPp->__Vtableidx1][2U];
    vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ptrDif 
        = (0xfU & ((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_value) 
                   - (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_value)));
    vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value));
    vlTOPp->s2m_state = vlTOPp->BDMAs2m__DOT__s2m_w_state;
    vlTOPp->BDMAs2m__DOT__s2m_cch_fire = ((IData)(vlTOPp->s2m_cch_valid) 
                                          & (IData)(vlTOPp->s2m_cch_ready));
    vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_risingOccupancy));
    vlTOPp->s2m_data_stream_ready = (((IData)(vlTOPp->BDMAs2m__DOT__stream_data_valve) 
                                      & (2U < ((((~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_risingOccupancy)) 
                                                 & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ptrMatch)) 
                                                << 5U) 
                                               | (0x1fU 
                                                  & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_value) 
                                                     - (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_value)))))) 
                                     | (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_leak));
    vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAs2m__DOT__len_pending_fifo_io_occupancy 
        = (0xfU & ((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ptrMatch)
                    ? ((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_risingOccupancy)
                        ? 0xcU : 0U) : (((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_value) 
                                         < (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_value))
                                         ? (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ptrDif)
                                         : ((IData)(0xcU) 
                                            + (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ptrDif)))));
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popping 
        = (((~ ((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ptrMatch) 
                & (~ (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_risingOccupancy)))) 
            & (~ ((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT___zz_io_pop_valid) 
                  & (~ (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_full))))) 
           & (IData)(vlTOPp->BDMAs2m__DOT__pending_fifo_pop_ready));
    vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->BDMAs2m__DOT__pending_valid) 
           & (~ (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_full)));
    vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popping 
        = (((~ ((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ptrMatch) 
                & (~ (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_risingOccupancy)))) 
            & (~ ((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT___zz_io_pop_valid) 
                  & (~ (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_full))))) 
           & (IData)(vlTOPp->BDMAs2m__DOT__pending_fifo_pop_ready));
    vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->BDMAs2m__DOT__pending_valid) 
           & (~ (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_full)));
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valid) 
           & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_full)));
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valid) 
           & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full)));
    vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l263 = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_final) 
                                               & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_full)));
    vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_valid) 
           & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_full)));
    vlTOPp->BDMAs2m__DOT__s2m_w_fifo_io_pop_valid = 
        (1U & ((~ ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ptrMatch) 
                   & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_risingOccupancy)))) 
               & (~ ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT___zz_io_pop_valid) 
                     & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_full))))));
    vlTOPp->BDMAs2m__DOT__s2m_data_stream_fire = ((IData)(vlTOPp->s2m_data_stream_valid) 
                                                  & (IData)(vlTOPp->s2m_data_stream_ready));
    vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l345 = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_last) 
                                               | (((IData)(vlTOPp->s2m_data_stream_valid) 
                                                   & (IData)(vlTOPp->s2m_data_stream_ready)) 
                                                  & (IData)(vlTOPp->s2m_data_stream_payload_last)));
    vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->BDMAs2m__DOT__pending_valid) 
           & (~ (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_full)));
    vlTOPp->BDMAs2m__DOT__len_pending_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_full))))));
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire 
        = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valid) 
           & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full)));
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full))))));
    vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popping) {
        vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popping) {
        vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->dma_w_valid = vlTOPp->BDMAs2m__DOT__s2m_w_fifo_io_pop_valid;
    vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo_io_pop_valid) 
           & (IData)(vlTOPp->dma_w_ready));
    vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAs2m__DOT__s2m_aw_finish = ((3U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state)) 
                                           & (~ (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo_io_pop_valid)));
    vlTOPp->BDMAs2m__DOT__len_pending_fifo_io_pop_fire 
        = ((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo_io_pop_valid) 
           & (IData)(vlTOPp->BDMAs2m__DOT__pending_fifo_pop_ready));
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire) {
        vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire) {
        vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid) 
           & ((IData)(vlTOPp->dma_aw_ready) & (8U > (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo_io_occupancy))));
}

void VBDMAs2m::_settle__TOP__10(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAs2m::_settle__TOP__10\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->dma_aw_valid = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid) 
                            & (8U > (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo_io_occupancy)));
    vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_valueNext 
        = (((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xfU & ((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value) 
                            + (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_willIncrement))));
    vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_valueNext 
        = (((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xfU & ((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value) 
                            + (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_valueNext 
        = (((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xfU & ((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_value) 
                            + (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_willIncrement))));
    vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_valueNext 
        = (((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xfU & ((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_value) 
                            + (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popping) {
        vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_valueNext 
        = (((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xfU & ((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_value) 
                            + (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__len_pending_fifo_io_pop_fire) {
        vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping) {
        vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAs2m__DOT__dma_aw_fire_2 = ((IData)(vlTOPp->dma_aw_valid) 
                                           & (IData)(vlTOPp->dma_aw_ready));
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popping 
        = (((~ ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
                & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))) 
            & (~ ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_io_pop_valid) 
                  & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_full))))) 
           & ((IData)(vlTOPp->dma_aw_valid) & (IData)(vlTOPp->dma_aw_ready)));
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popping 
        = (((~ ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
                & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))) 
            & (~ ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_io_pop_valid) 
                  & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full))))) 
           & ((IData)(vlTOPp->dma_aw_valid) & (IData)(vlTOPp->dma_aw_ready)));
    vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_valueNext 
        = (((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xfU & ((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_value) 
                            + (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_willIncrement))));
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popping) {
        vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popping) {
        vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement)));
}

void VBDMAs2m::_eval_initial(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAs2m::_eval_initial\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VBDMAs2m::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAs2m::final\n"); );
    // Variables
    VBDMAs2m__Syms* __restrict vlSymsp = this->__VlSymsp;
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBDMAs2m::_eval_settle(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAs2m::_eval_settle\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__9(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__10(vlSymsp);
}

void VBDMAs2m::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAs2m::_ctor_var_reset\n"); );
    // Body
    dma_aw_valid = VL_RAND_RESET_I(1);
    dma_aw_ready = VL_RAND_RESET_I(1);
    dma_aw_payload_addr = VL_RAND_RESET_I(32);
    dma_aw_payload_id = VL_RAND_RESET_I(4);
    dma_aw_payload_len = VL_RAND_RESET_I(8);
    dma_aw_payload_size = VL_RAND_RESET_I(3);
    dma_aw_payload_burst = VL_RAND_RESET_I(2);
    dma_w_valid = VL_RAND_RESET_I(1);
    dma_w_ready = VL_RAND_RESET_I(1);
    dma_w_payload_data = VL_RAND_RESET_I(32);
    dma_w_payload_strb = VL_RAND_RESET_I(4);
    dma_w_payload_last = VL_RAND_RESET_I(1);
    dma_b_valid = VL_RAND_RESET_I(1);
    dma_b_ready = VL_RAND_RESET_I(1);
    dma_b_payload_id = VL_RAND_RESET_I(4);
    dma_b_payload_resp = VL_RAND_RESET_I(2);
    s2m_data_stream_valid = VL_RAND_RESET_I(1);
    s2m_data_stream_ready = VL_RAND_RESET_I(1);
    s2m_data_stream_payload_data = VL_RAND_RESET_I(32);
    s2m_data_stream_payload_id = VL_RAND_RESET_I(4);
    s2m_data_stream_payload_strb = VL_RAND_RESET_I(4);
    s2m_data_stream_payload_keep_ = VL_RAND_RESET_I(4);
    s2m_data_stream_payload_last = VL_RAND_RESET_I(1);
    s2m_state = VL_RAND_RESET_I(2);
    s2m_cch_valid = VL_RAND_RESET_I(1);
    s2m_cch_ready = VL_RAND_RESET_I(1);
    s2m_cch_payload_desc_start_addr = VL_RAND_RESET_I(32);
    s2m_cch_payload_desc_total_bytes = VL_RAND_RESET_I(30);
    s2m_cch_payload_desc_burst = VL_RAND_RESET_I(2);
    s2m_cch_payload_desc_id = VL_RAND_RESET_I(4);
    s2m_cch_payload_desc_reset = VL_RAND_RESET_I(1);
    s2m_intr = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__s2m_w_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__len_pending_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__len_pending_fifo_io_occupancy = VL_RAND_RESET_I(4);
    BDMAs2m__DOT___zz_when_BDMAs2m_l99 = VL_RAND_RESET_I(32);
    BDMAs2m__DOT___zz_when_BDMAs2m_l134_1 = VL_RAND_RESET_I(32);
    BDMAs2m__DOT__s2m_cch_state = VL_RAND_RESET_I(2);
    BDMAs2m__DOT__s2m_w_state = VL_RAND_RESET_I(2);
    BDMAs2m__DOT__cch_ready = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__cch_total_bytes = VL_RAND_RESET_I(30);
    BDMAs2m__DOT__cch_address = VL_RAND_RESET_I(32);
    BDMAs2m__DOT__cch_burst_type = VL_RAND_RESET_I(2);
    BDMAs2m__DOT__cch_id = VL_RAND_RESET_I(4);
    BDMAs2m__DOT__trans_bytes_cnt = VL_RAND_RESET_I(30);
    BDMAs2m__DOT__s2m_aw_len = VL_RAND_RESET_I(8);
    BDMAs2m__DOT__s2m_aw_valid = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__s2m_aw_halt_exec = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__cycle_finished = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__s2m_cch_fire = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__when_BDMAs2m_l83 = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__s2m_aw_fifo_io_push_fire = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__pending_valid = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__bytes_shift_pending = VL_RAND_RESET_I(2);
    BDMAs2m__DOT__strb_mask_pending = VL_RAND_RESET_I(4);
    BDMAs2m__DOT__len_pending = VL_RAND_RESET_I(8);
    BDMAs2m__DOT__dma_aw_fire_2 = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__s2m_aw_finish = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__s2m_axis_len = VL_RAND_RESET_I(8);
    BDMAs2m__DOT__s2m_strb_mask = VL_RAND_RESET_I(4);
    BDMAs2m__DOT__s2m_bytes_shift = VL_RAND_RESET_I(2);
    BDMAs2m__DOT__s2m_axis_last = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__s2m_axis_leak = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__w_residual_data = VL_RAND_RESET_I(32);
    BDMAs2m__DOT__w_residual_strb = VL_RAND_RESET_I(4);
    BDMAs2m__DOT__s2m_w_data = VL_RAND_RESET_I(32);
    BDMAs2m__DOT__s2m_w_strb = VL_RAND_RESET_I(4);
    BDMAs2m__DOT__s2m_w_valid = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__s2m_w_last = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__s2m_w_final = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__pending_fifo_pop_ready = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__stream_data_valve = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__len_pending_fifo_io_pop_fire = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__when_BDMAs2m_l263 = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__s2m_data_stream_fire = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__when_BDMAs2m_l345 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(72, BDMAs2m__DOT__s2m_cch_state_string);
    BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_Q(49);
    BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(3);
    BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(3);
    BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(3);
    BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(3);
    BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_Q(49);
    }}
    BDMAs2m__DOT__low_addr_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(2);
    BDMAs2m__DOT__low_addr_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(3);
    BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(3);
    BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(3);
    BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(3);
    BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__low_addr_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__low_addr_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__low_addr_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(2);
    }}
    BDMAs2m__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(2);
    BDMAs2m__DOT__low_bytes_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(3);
    BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(3);
    BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(3);
    BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(3);
    BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__low_bytes_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(2);
    }}
    BDMAs2m__DOT__s2m_w_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_Q(37);
    BDMAs2m__DOT__s2m_w_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(5);
    BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(5);
    BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(5);
    BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(5);
    BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__s2m_w_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__s2m_w_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__s2m_w_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_Q(37);
    }}
    BDMAs2m__DOT__bytes_shift_pending_fifo__DOT____Vxrand1 = VL_RAND_RESET_I(2);
    BDMAs2m__DOT__bytes_shift_pending_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(2);
    BDMAs2m__DOT__bytes_shift_pending_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(4);
    BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(4);
    BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(4);
    BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(4);
    BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__bytes_shift_pending_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<12; ++__Vi0) {
            BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(2);
    }}
    BDMAs2m__DOT__bytes_shift_pending_fifo__DOT____Vlvbound2 = VL_RAND_RESET_I(2);
    BDMAs2m__DOT__strb_mask_pending_fifo__DOT____Vxrand1 = VL_RAND_RESET_I(4);
    BDMAs2m__DOT__strb_mask_pending_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(4);
    BDMAs2m__DOT__strb_mask_pending_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(4);
    BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(4);
    BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(4);
    BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(4);
    BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__strb_mask_pending_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<12; ++__Vi0) {
            BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(4);
    }}
    BDMAs2m__DOT__strb_mask_pending_fifo__DOT____Vlvbound2 = VL_RAND_RESET_I(4);
    BDMAs2m__DOT__len_pending_fifo__DOT____Vxrand1 = VL_RAND_RESET_I(8);
    BDMAs2m__DOT__len_pending_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(8);
    BDMAs2m__DOT__len_pending_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(4);
    BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(4);
    BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(4);
    BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(4);
    BDMAs2m__DOT__len_pending_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__len_pending_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__len_pending_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__len_pending_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    BDMAs2m__DOT__len_pending_fifo__DOT__logic_ptrDif = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<12; ++__Vi0) {
            BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(8);
    }}
    BDMAs2m__DOT__len_pending_fifo__DOT____Vlvbound2 = VL_RAND_RESET_I(8);
    __Vtableidx1 = 0;
    VL_CONST_W_3X(72,__Vtable1_BDMAs2m__DOT__s2m_cch_state_string[0],0x00000049,0x444c4520,0x20202020);
    VL_CONST_W_3X(72,__Vtable1_BDMAs2m__DOT__s2m_cch_state_string[1],0x00000046,0x49584544,0x5f524551);
    VL_CONST_W_3X(72,__Vtable1_BDMAs2m__DOT__s2m_cch_state_string[2],0x00000049,0x4e43525f,0x52455120);
    VL_CONST_W_3X(72,__Vtable1_BDMAs2m__DOT__s2m_cch_state_string[3],0x00000048,0x414c5420,0x20202020);
    __Vdly__BDMAs2m__DOT__s2m_cch_state = VL_RAND_RESET_I(2);
    __Vdly__BDMAs2m__DOT__s2m_aw_halt_exec = VL_RAND_RESET_I(1);
    __Vdly__BDMAs2m__DOT__s2m_w_state = VL_RAND_RESET_I(2);
    __Vdly__BDMAs2m__DOT__s2m_axis_len = VL_RAND_RESET_I(8);
    __Vdly__BDMAs2m__DOT__cch_address = VL_RAND_RESET_I(32);
    __Vdly__BDMAs2m__DOT__cch_total_bytes = VL_RAND_RESET_I(30);
    __Vdly__BDMAs2m__DOT__trans_bytes_cnt = VL_RAND_RESET_I(30);
    __Vdlyvdim0__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_I(2);
    __Vdlyvset__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvdim0__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_I(2);
    __Vdlyvset__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvdim0__BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_I(2);
    __Vdlyvset__BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvdim0__BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_I(4);
    __Vdlyvset__BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvdim0__BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram__v0 = 0;
    __Vm_traceActivity = 0;
}
