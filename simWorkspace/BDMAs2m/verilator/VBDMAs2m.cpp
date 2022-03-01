// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBDMAs2m.h for the primary calling header

#include "VBDMAs2m.h"
#include "VBDMAs2m__Syms.h"

//==========

void VBDMAs2m::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBDMAs2m::eval\n"); );
    VBDMAs2m__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/BDMAs2m.v", 18, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VBDMAs2m::_eval_initial_loop(VBDMAs2m__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/BDMAs2m.v", 18, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VBDMAs2m::_sequent__TOP__3(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAs2m::_sequent__TOP__3\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdlyvdim0__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0;
    CData/*4:0*/ __Vdlyvdim0__BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram__v0;
    WData/*127:0*/ __Vtemp2[4];
    WData/*127:0*/ __Vtemp3[4];
    WData/*127:0*/ __Vtemp6[4];
    WData/*127:0*/ __Vtemp7[4];
    QData/*48:0*/ __Vdlyvval__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0;
    QData/*36:0*/ __Vdlyvval__BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram__v0;
    // Body
    vlTOPp->__Vdly__BDMAs2m__DOT__s2m_axis_len = vlTOPp->BDMAs2m__DOT__s2m_axis_len;
    vlTOPp->__Vdly__BDMAs2m__DOT__cch_address = vlTOPp->BDMAs2m__DOT__cch_address;
    vlTOPp->__Vdly__BDMAs2m__DOT__trans_bytes_cnt = vlTOPp->BDMAs2m__DOT__trans_bytes_cnt;
    vlTOPp->__Vdly__BDMAs2m__DOT__cch_total_bytes = vlTOPp->BDMAs2m__DOT__cch_total_bytes;
    vlTOPp->__Vdlyvset__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram__v0 = 0U;
    __Vdlyvset__BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram__v0 = 0U;
    __Vdlyvset__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram
        [vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_valueNext];
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram
        [vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext];
    if ((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))) {
        if (vlTOPp->BDMAs2m__DOT__len_pending_fifo_io_pop_fire) {
            vlTOPp->__Vdly__BDMAs2m__DOT__s2m_axis_len 
                = vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT___zz_logic_ram_port0;
        }
    } else {
        if ((1U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))) {
            if ((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l264)))) {
                if (vlTOPp->BDMAs2m__DOT__s2m_data_stream_fire) {
                    vlTOPp->__Vdly__BDMAs2m__DOT__s2m_axis_len 
                        = (0xffU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len) 
                                    - (IData)(1U)));
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) {
        if (vlTOPp->BDMAs2m__DOT__s2m_cch_fire) {
            vlTOPp->__Vdly__BDMAs2m__DOT__cch_address 
                = vlTOPp->s2m_cch_payload_desc_start_addr;
        }
    } else {
        if ((1U != (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) {
            if ((2U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) {
                if ((0U != vlTOPp->BDMAs2m__DOT__cch_total_bytes)) {
                    if (vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire) {
                        vlTOPp->__Vdly__BDMAs2m__DOT__cch_address 
                            = (vlTOPp->BDMAs2m__DOT__cch_address 
                               + vlTOPp->BDMAs2m__DOT__trans_bytes_cnt);
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) {
        if (vlTOPp->BDMAs2m__DOT__s2m_cch_fire) {
            vlTOPp->__Vdly__BDMAs2m__DOT__cch_total_bytes 
                = vlTOPp->s2m_cch_payload_desc_total_bytes;
        }
    } else {
        if ((1U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) {
            if ((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l83)))) {
                if (vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire) {
                    vlTOPp->__Vdly__BDMAs2m__DOT__cch_total_bytes 
                        = (0x3fffffffU & (vlTOPp->BDMAs2m__DOT__cch_total_bytes 
                                          - vlTOPp->BDMAs2m__DOT__trans_bytes_cnt));
                }
            }
            vlTOPp->__Vdly__BDMAs2m__DOT__trans_bytes_cnt 
                = (0x3fffffffU & ((0x40U >= vlTOPp->BDMAs2m__DOT___zz_when_BDMAs2m_l99)
                                   ? vlTOPp->BDMAs2m__DOT__cch_total_bytes
                                   : ((IData)(0x40U) 
                                      - (3U & vlTOPp->BDMAs2m__DOT__cch_address))));
        } else {
            if ((2U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) {
                if ((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l83)))) {
                    if (vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire) {
                        vlTOPp->__Vdly__BDMAs2m__DOT__cch_total_bytes 
                            = (0x3fffffffU & (vlTOPp->BDMAs2m__DOT__cch_total_bytes 
                                              - vlTOPp->BDMAs2m__DOT__trans_bytes_cnt));
                    }
                }
                vlTOPp->__Vdly__BDMAs2m__DOT__trans_bytes_cnt 
                    = (0x3fffffffU & ((0x40U >= vlTOPp->BDMAs2m__DOT___zz_when_BDMAs2m_l99)
                                       ? ((0U != (0xfffffU 
                                                  & (vlTOPp->BDMAs2m__DOT___zz_when_BDMAs2m_l134_1 
                                                     >> 0xcU)))
                                           ? ((IData)(0x1000U) 
                                              - (0xfffU 
                                                 & vlTOPp->BDMAs2m__DOT__cch_address))
                                           : vlTOPp->BDMAs2m__DOT__cch_total_bytes)
                                       : ((0U != (0xfffffU 
                                                  & (((IData)(0x40U) 
                                                      + 
                                                      (0xfffU 
                                                       & vlTOPp->BDMAs2m__DOT__cch_address)) 
                                                     >> 0xcU)))
                                           ? (0xfffU 
                                              & ((IData)(0x1000U) 
                                                 - vlTOPp->BDMAs2m__DOT__cch_address))
                                           : ((IData)(0x40U) 
                                              - (3U 
                                                 & vlTOPp->BDMAs2m__DOT__cch_address)))));
            }
        }
    }
    if (vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0 
            = (3U & vlTOPp->BDMAs2m__DOT__cch_address);
        vlTOPp->__Vdlyvset__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0 
            = vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0 
            = (3U & ((IData)(1U) + (~ (vlTOPp->BDMAs2m__DOT__trans_bytes_cnt 
                                       + vlTOPp->BDMAs2m__DOT__cch_address))));
        vlTOPp->__Vdlyvset__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0 
            = vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT___zz_1) {
        vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT____Vlvbound2 
            = vlTOPp->BDMAs2m__DOT__strb_mask_pending;
        if ((0xbU >= (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_value))) {
            vlTOPp->__Vdlyvval__BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram__v0 
                = vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT____Vlvbound2;
            vlTOPp->__Vdlyvset__BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram__v0 = 1U;
            vlTOPp->__Vdlyvdim0__BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram__v0 
                = vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_value;
        }
    }
    if (vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT___zz_1) {
        vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT____Vlvbound2 
            = vlTOPp->BDMAs2m__DOT__bytes_shift_pending;
        if ((0xbU >= (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value))) {
            vlTOPp->__Vdlyvval__BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram__v0 
                = vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT____Vlvbound2;
            vlTOPp->__Vdlyvset__BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram__v0 = 1U;
            vlTOPp->__Vdlyvdim0__BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram__v0 
                = vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value;
        }
    }
    if (vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT___zz_1) {
        __Vdlyvval__BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram__v0 
            = (((QData)((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_last)) 
                << 0x24U) | (((QData)((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_strb)) 
                              << 0x20U) | (QData)((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_data))));
        __Vdlyvset__BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram__v0 = 1U;
        __Vdlyvdim0__BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram__v0 
            = vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_1) {
        __Vdlyvval__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0 
            = (VL_ULL(0x200000000000) | (((QData)((IData)(vlTOPp->BDMAs2m__DOT__cch_burst_type)) 
                                          << 0x2fU) 
                                         | (((QData)((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_len)) 
                                             << 0x24U) 
                                            | (((QData)((IData)(vlTOPp->BDMAs2m__DOT__cch_id)) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (0xfffffffcU 
                                                                  & vlTOPp->BDMAs2m__DOT__cch_address)))))));
        __Vdlyvset__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0 = 1U;
        __Vdlyvdim0__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0 
            = vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT___zz_1) {
        vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT____Vlvbound2 
            = vlTOPp->BDMAs2m__DOT__len_pending;
        if ((0xbU >= (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_value))) {
            vlTOPp->__Vdlyvval__BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram__v0 
                = vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT____Vlvbound2;
            vlTOPp->__Vdlyvset__BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram__v0 = 1U;
            vlTOPp->__Vdlyvdim0__BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram__v0 
                = vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_value;
        }
    }
    if (__Vdlyvset__BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram__v0) {
        vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram[__Vdlyvdim0__BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram__v0] 
            = __Vdlyvval__BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ram__v0;
    }
    if (__Vdlyvset__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0) {
        vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[__Vdlyvdim0__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0] 
            = __Vdlyvval__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0;
    }
    vlTOPp->dma_w_payload_data = (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT___zz_logic_ram_port0);
    vlTOPp->dma_w_payload_strb = (0xfU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT___zz_logic_ram_port0 
                                                  >> 0x20U)));
    vlTOPp->dma_w_payload_last = (1U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT___zz_logic_ram_port0 
                                                >> 0x24U)));
    vlTOPp->dma_aw_payload_addr = (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0);
    vlTOPp->dma_aw_payload_id = (0xfU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                                 >> 0x20U)));
    vlTOPp->dma_aw_payload_size = (7U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                                 >> 0x2cU)));
    vlTOPp->dma_aw_payload_burst = (3U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                                  >> 0x2fU)));
    vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT___zz_logic_ram_port0 
        = ((0xbU >= (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_valueNext))
            ? vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram
           [vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_valueNext]
            : (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT____Vxrand1));
    if (vlTOPp->BDMAs2m__DOT__dma_aw_fire_2) {
        vlTOPp->BDMAs2m__DOT__strb_mask_pending = (0xfU 
                                                   & (0xfU 
                                                      >> (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0)));
    }
    if (vlTOPp->BDMAs2m__DOT__dma_aw_fire_2) {
        vlTOPp->BDMAs2m__DOT__bytes_shift_pending = vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_logic_ram_port0;
    }
    if ((0U != (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))) {
        if ((1U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))) {
            if (vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l264) {
                VL_EXTEND_WI(127,32, __Vtemp2, vlTOPp->BDMAs2m__DOT__w_residual_data);
                VL_SHIFTL_WWI(127,127,6, __Vtemp3, __Vtemp2, 
                              (0x3fU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_bytes_shift) 
                                        << 3U)));
                vlTOPp->BDMAs2m__DOT__s2m_w_data = 
                    __Vtemp3[1U];
            } else {
                if (vlTOPp->BDMAs2m__DOT__s2m_data_stream_fire) {
                    VL_EXTEND_WQ(127,64, __Vtemp6, 
                                 (((QData)((IData)(vlTOPp->s2m_data_stream_payload_data)) 
                                   << 0x20U) | (QData)((IData)(vlTOPp->BDMAs2m__DOT__w_residual_data))));
                    VL_SHIFTL_WWI(127,127,6, __Vtemp7, __Vtemp6, 
                                  (0x3fU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_bytes_shift) 
                                            << 3U)));
                    vlTOPp->BDMAs2m__DOT__s2m_w_data 
                        = __Vtemp7[1U];
                }
            }
        }
    }
    if ((0U != (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))) {
        if ((1U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))) {
            if (vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l264) {
                vlTOPp->BDMAs2m__DOT__s2m_w_strb = vlTOPp->BDMAs2m__DOT__s2m_strb_mask;
            } else {
                if (vlTOPp->BDMAs2m__DOT__s2m_data_stream_fire) {
                    vlTOPp->BDMAs2m__DOT__s2m_w_strb 
                        = (0xfU & ((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len))
                                    ? (0x7fU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_strb_mask) 
                                                & (((((IData)(vlTOPp->s2m_data_stream_payload_keep_) 
                                                      << 4U) 
                                                     | (IData)(vlTOPp->BDMAs2m__DOT__w_residual_strb)) 
                                                    << (IData)(vlTOPp->BDMAs2m__DOT__s2m_bytes_shift)) 
                                                   >> 4U)))
                                    : (0x7fU & (((((IData)(vlTOPp->s2m_data_stream_payload_keep_) 
                                                   << 4U) 
                                                  | (IData)(vlTOPp->BDMAs2m__DOT__w_residual_strb)) 
                                                 << (IData)(vlTOPp->BDMAs2m__DOT__s2m_bytes_shift)) 
                                                >> 4U))));
                }
            }
        }
    }
}

VL_INLINE_OPT void VBDMAs2m::_sequent__TOP__4(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAs2m::_sequent__TOP__4\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) {
        if (vlTOPp->BDMAs2m__DOT__s2m_cch_fire) {
            vlTOPp->BDMAs2m__DOT__cch_id = vlTOPp->s2m_cch_payload_desc_id;
        }
    }
    if ((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) {
        if (vlTOPp->BDMAs2m__DOT__s2m_cch_fire) {
            vlTOPp->BDMAs2m__DOT__cch_burst_type = vlTOPp->s2m_cch_payload_desc_burst;
        }
    }
    if ((0U != (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) {
        if ((1U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) {
            vlTOPp->BDMAs2m__DOT__s2m_aw_len = (0xffU 
                                                & (((vlTOPp->BDMAs2m__DOT__trans_bytes_cnt 
                                                     + 
                                                     (3U 
                                                      & vlTOPp->BDMAs2m__DOT__cch_address)) 
                                                    - (IData)(1U)) 
                                                   >> 2U));
        } else {
            if ((2U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) {
                vlTOPp->BDMAs2m__DOT__s2m_aw_len = 
                    (0xffU & (((vlTOPp->BDMAs2m__DOT__trans_bytes_cnt 
                                + (3U & vlTOPp->BDMAs2m__DOT__cch_address)) 
                               - (IData)(1U)) >> 2U));
            }
        }
    }
    if (vlTOPp->BDMAs2m__DOT__dma_aw_fire_2) {
        vlTOPp->BDMAs2m__DOT__len_pending = vlTOPp->dma_aw_payload_len;
    }
    if (vlTOPp->__Vdlyvset__BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram__v0) {
        vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__BDMAs2m__DOT__len_pending_fifo__DOT__logic_ram__v0;
    }
    vlTOPp->BDMAs2m__DOT__trans_bytes_cnt = vlTOPp->__Vdly__BDMAs2m__DOT__trans_bytes_cnt;
    vlTOPp->BDMAs2m__DOT__cch_address = vlTOPp->__Vdly__BDMAs2m__DOT__cch_address;
    vlTOPp->dma_aw_payload_len = (0xffU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                                   >> 0x24U)));
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram
        [vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext];
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram
        [vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext];
    if ((0U != (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))) {
        if ((1U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))) {
            if ((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l264)))) {
                if (vlTOPp->BDMAs2m__DOT__s2m_data_stream_fire) {
                    vlTOPp->BDMAs2m__DOT__w_residual_data 
                        = vlTOPp->s2m_data_stream_payload_data;
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))) {
        if (vlTOPp->BDMAs2m__DOT__len_pending_fifo_io_pop_fire) {
            vlTOPp->BDMAs2m__DOT__s2m_strb_mask = vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT___zz_logic_ram_port0;
        }
    }
    if ((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))) {
        if (vlTOPp->BDMAs2m__DOT__len_pending_fifo_io_pop_fire) {
            vlTOPp->BDMAs2m__DOT__s2m_bytes_shift = vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT___zz_logic_ram_port0;
        }
    }
    if (vlTOPp->__Vdlyvset__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0) {
        vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0) {
        vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0;
    }
    vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT___zz_logic_ram_port0 
        = ((0xbU >= (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_valueNext))
            ? vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram
           [vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_valueNext]
            : (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT____Vxrand1));
    vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT___zz_logic_ram_port0 
        = ((0xbU >= (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_valueNext))
            ? vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram
           [vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_valueNext]
            : (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT____Vxrand1));
    if (vlTOPp->__Vdlyvset__BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram__v0) {
        vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram__v0) {
        vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VBDMAs2m::_sequent__TOP__6(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAs2m::_sequent__TOP__6\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__BDMAs2m__DOT__s2m_w_state = vlTOPp->BDMAs2m__DOT__s2m_w_state;
    vlTOPp->__Vdly__BDMAs2m__DOT__s2m_aw_halt_exec 
        = vlTOPp->BDMAs2m__DOT__s2m_aw_halt_exec;
    vlTOPp->__Vdly__BDMAs2m__DOT__s2m_cch_state = vlTOPp->BDMAs2m__DOT__s2m_cch_state;
    vlTOPp->BDMAs2m__DOT__pending_valid = ((~ (IData)(vlTOPp->reset)) 
                                           & (IData)(vlTOPp->BDMAs2m__DOT__dma_aw_fire_2));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__BDMAs2m__DOT__s2m_w_state = 0U;
        vlTOPp->BDMAs2m__DOT__s2m_axis_last = 0U;
        vlTOPp->BDMAs2m__DOT__s2m_axis_leak = 0U;
        vlTOPp->BDMAs2m__DOT__w_residual_strb = 0U;
        vlTOPp->BDMAs2m__DOT__s2m_w_valid = 0U;
        vlTOPp->BDMAs2m__DOT__s2m_w_last = 0U;
        vlTOPp->BDMAs2m__DOT__s2m_w_final = 0U;
        vlTOPp->BDMAs2m__DOT__pending_fifo_pop_ready = 0U;
        vlTOPp->BDMAs2m__DOT__stream_data_valve = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))) {
            if (vlTOPp->BDMAs2m__DOT__len_pending_fifo_io_pop_fire) {
                vlTOPp->BDMAs2m__DOT__pending_fifo_pop_ready = 0U;
                vlTOPp->__Vdly__BDMAs2m__DOT__s2m_w_state = 1U;
                vlTOPp->BDMAs2m__DOT__stream_data_valve = 1U;
            } else {
                vlTOPp->BDMAs2m__DOT__pending_fifo_pop_ready = 1U;
                vlTOPp->BDMAs2m__DOT__stream_data_valve = 0U;
            }
            vlTOPp->BDMAs2m__DOT__s2m_axis_last = 0U;
            vlTOPp->BDMAs2m__DOT__s2m_w_valid = 0U;
            vlTOPp->BDMAs2m__DOT__s2m_w_last = 0U;
            vlTOPp->BDMAs2m__DOT__s2m_w_final = 0U;
        } else {
            if ((1U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))) {
                if (vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l264) {
                    vlTOPp->BDMAs2m__DOT__s2m_w_valid = 1U;
                    vlTOPp->BDMAs2m__DOT__s2m_w_last = 1U;
                    vlTOPp->__Vdly__BDMAs2m__DOT__s2m_w_state 
                        = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_finish)
                            ? 2U : 0U);
                } else {
                    if (vlTOPp->BDMAs2m__DOT__s2m_data_stream_fire) {
                        vlTOPp->BDMAs2m__DOT__s2m_w_valid = 1U;
                        vlTOPp->BDMAs2m__DOT__w_residual_strb 
                            = vlTOPp->s2m_data_stream_payload_keep_;
                        vlTOPp->BDMAs2m__DOT__s2m_axis_last 
                            = vlTOPp->s2m_data_stream_payload_last;
                        if (((IData)(vlTOPp->s2m_data_stream_payload_last) 
                             & (1U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len)))) {
                            vlTOPp->BDMAs2m__DOT__s2m_w_final = 1U;
                        }
                        if ((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len))) {
                            vlTOPp->BDMAs2m__DOT__s2m_w_valid = 1U;
                            vlTOPp->BDMAs2m__DOT__s2m_w_last = 1U;
                            vlTOPp->__Vdly__BDMAs2m__DOT__s2m_w_state 
                                = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_finish)
                                    ? 2U : 0U);
                            vlTOPp->BDMAs2m__DOT__stream_data_valve = 0U;
                        }
                    } else {
                        vlTOPp->BDMAs2m__DOT__s2m_w_valid = 0U;
                    }
                }
            } else {
                if (vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l338) {
                    vlTOPp->__Vdly__BDMAs2m__DOT__s2m_w_state = 0U;
                    vlTOPp->BDMAs2m__DOT__s2m_axis_leak = 0U;
                } else {
                    vlTOPp->BDMAs2m__DOT__s2m_axis_leak = 1U;
                }
                vlTOPp->BDMAs2m__DOT__s2m_axis_last = 0U;
                vlTOPp->BDMAs2m__DOT__w_residual_strb = 0U;
                vlTOPp->BDMAs2m__DOT__s2m_w_valid = 0U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__BDMAs2m__DOT__s2m_cch_state = 0U;
        vlTOPp->BDMAs2m__DOT__cch_ready = 0U;
        vlTOPp->BDMAs2m__DOT__s2m_aw_valid = 0U;
        vlTOPp->__Vdly__BDMAs2m__DOT__s2m_aw_halt_exec = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) {
            if (vlTOPp->BDMAs2m__DOT__s2m_cch_fire) {
                vlTOPp->BDMAs2m__DOT__cch_ready = 0U;
                vlTOPp->__Vdly__BDMAs2m__DOT__s2m_cch_state 
                    = ((0U == (IData)(vlTOPp->s2m_cch_payload_desc_burst))
                        ? 1U : 2U);
            } else {
                vlTOPp->BDMAs2m__DOT__cch_ready = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) {
                if (vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire) {
                    vlTOPp->BDMAs2m__DOT__s2m_aw_valid = 0U;
                } else {
                    if (vlTOPp->BDMAs2m__DOT__s2m_aw_halt_exec) {
                        vlTOPp->BDMAs2m__DOT__s2m_aw_valid = 1U;
                    }
                }
                if ((0U == vlTOPp->BDMAs2m__DOT__cch_total_bytes)) {
                    vlTOPp->__Vdly__BDMAs2m__DOT__s2m_cch_state = 3U;
                } else {
                    vlTOPp->__Vdly__BDMAs2m__DOT__s2m_aw_halt_exec 
                        = (1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire)));
                }
            } else {
                if ((2U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) {
                    if (vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire) {
                        vlTOPp->BDMAs2m__DOT__s2m_aw_valid = 0U;
                    } else {
                        if (vlTOPp->BDMAs2m__DOT__s2m_aw_halt_exec) {
                            vlTOPp->BDMAs2m__DOT__s2m_aw_valid = 1U;
                        }
                    }
                    if ((0U == vlTOPp->BDMAs2m__DOT__cch_total_bytes)) {
                        vlTOPp->__Vdly__BDMAs2m__DOT__s2m_cch_state = 3U;
                    } else {
                        vlTOPp->__Vdly__BDMAs2m__DOT__s2m_aw_halt_exec 
                            = (1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire)));
                    }
                } else {
                    if (((IData)(vlTOPp->s2m_cch_payload_desc_reset) 
                         & (IData)(vlTOPp->BDMAs2m__DOT__cycle_finished))) {
                        vlTOPp->__Vdly__BDMAs2m__DOT__s2m_cch_state = 0U;
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popping))) {
            vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popping))) {
            vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popping))) {
            vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popping))) {
            vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popping))) {
            vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushing;
        }
    }
    vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value)));
    if (vlTOPp->reset) {
        vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo_io_pop_fire))) {
            vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushing;
        }
    }
    vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_value)));
}

VL_INLINE_OPT void VBDMAs2m::_sequent__TOP__7(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAs2m::_sequent__TOP__7\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire) 
             != (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping))) {
            vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire;
        }
    }
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->BDMAs2m__DOT__s2m_aw_halt_exec = vlTOPp->__Vdly__BDMAs2m__DOT__s2m_aw_halt_exec;
    vlTOPp->s2m_cch_ready = vlTOPp->BDMAs2m__DOT__cch_ready;
    if (vlTOPp->reset) {
        vlTOPp->BDMAs2m__DOT__cycle_finished = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) {
            vlTOPp->BDMAs2m__DOT__cycle_finished = 0U;
        } else {
            if (((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state)) 
                 & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_finish))) {
                vlTOPp->BDMAs2m__DOT__cycle_finished = 1U;
            }
        }
    }
    vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->BDMAs2m__DOT__s2m_cch_state = vlTOPp->__Vdly__BDMAs2m__DOT__s2m_cch_state;
    vlTOPp->BDMAs2m__DOT__s2m_w_state = vlTOPp->__Vdly__BDMAs2m__DOT__s2m_w_state;
    vlTOPp->s2m_intr = vlTOPp->BDMAs2m__DOT__cycle_finished;
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
    vlTOPp->s2m_state = vlTOPp->BDMAs2m__DOT__s2m_w_state;
    vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value));
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
    vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy));
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
    vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_popping 
        = (((~ ((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_ptrMatch) 
                & (~ (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_risingOccupancy)))) 
            & (~ ((IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT___zz_io_pop_valid) 
                  & (~ (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_full))))) 
           & (IData)(vlTOPp->BDMAs2m__DOT__pending_fifo_pop_ready));
    vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->BDMAs2m__DOT__pending_valid) 
           & (~ (IData)(vlTOPp->BDMAs2m__DOT__strb_mask_pending_fifo__DOT__logic_full)));
    vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_popping 
        = (((~ ((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_ptrMatch) 
                & (~ (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_risingOccupancy)))) 
            & (~ ((IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT___zz_io_pop_valid) 
                  & (~ (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_full))))) 
           & (IData)(vlTOPp->BDMAs2m__DOT__pending_fifo_pop_ready));
    vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->BDMAs2m__DOT__pending_valid) 
           & (~ (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift_pending_fifo__DOT__logic_full)));
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valid) 
           & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full)));
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valid) 
           & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_full)));
    vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l264 = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_final) 
                                               & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_full)));
    vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_valid) 
           & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_full)));
    vlTOPp->BDMAs2m__DOT__s2m_w_fifo_io_pop_valid = 
        (1U & ((~ ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_ptrMatch) 
                   & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_risingOccupancy)))) 
               & (~ ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT___zz_io_pop_valid) 
                     & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_full))))));
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
}

VL_INLINE_OPT void VBDMAs2m::_sequent__TOP__8(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAs2m::_sequent__TOP__8\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement = 1U;
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
    vlTOPp->dma_aw_valid = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid) 
                            & (8U > (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo_io_occupancy)));
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
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_pushPtr_willIncrement)));
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
    vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_valueNext 
        = (((0xbU == (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xfU & ((IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_value) 
                            + (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo__DOT__logic_popPtr_willIncrement))));
}

VL_INLINE_OPT void VBDMAs2m::_sequent__TOP__11(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAs2m::_sequent__TOP__11\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BDMAs2m__DOT__s2m_axis_len = vlTOPp->__Vdly__BDMAs2m__DOT__s2m_axis_len;
    vlTOPp->BDMAs2m__DOT__cch_total_bytes = vlTOPp->__Vdly__BDMAs2m__DOT__cch_total_bytes;
    vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l83 = (0U == vlTOPp->BDMAs2m__DOT__cch_total_bytes);
    vlTOPp->BDMAs2m__DOT___zz_when_BDMAs2m_l99 = (vlTOPp->BDMAs2m__DOT__cch_total_bytes 
                                                  + 
                                                  (3U 
                                                   & vlTOPp->BDMAs2m__DOT__cch_address));
    vlTOPp->BDMAs2m__DOT___zz_when_BDMAs2m_l134_1 = 
        ((0xfffU & vlTOPp->BDMAs2m__DOT__cch_address) 
         + (0xfffU & vlTOPp->BDMAs2m__DOT__cch_total_bytes));
}

VL_INLINE_OPT void VBDMAs2m::_combo__TOP__12(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAs2m::_combo__TOP__12\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BDMAs2m__DOT__s2m_cch_fire = ((IData)(vlTOPp->s2m_cch_valid) 
                                          & (IData)(vlTOPp->s2m_cch_ready));
    vlTOPp->BDMAs2m__DOT__s2m_data_stream_fire = ((IData)(vlTOPp->s2m_data_stream_valid) 
                                                  & (IData)(vlTOPp->s2m_data_stream_ready));
    vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l338 = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_last) 
                                               | (((IData)(vlTOPp->s2m_data_stream_valid) 
                                                   & (IData)(vlTOPp->s2m_data_stream_ready)) 
                                                  & (IData)(vlTOPp->s2m_data_stream_payload_last)));
    vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo_io_pop_valid) 
           & (IData)(vlTOPp->dma_w_ready));
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid) 
           & ((IData)(vlTOPp->dma_aw_ready) & (8U > (IData)(vlTOPp->BDMAs2m__DOT__len_pending_fifo_io_occupancy))));
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
    vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popping) {
        vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping) {
        vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popping) {
        vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popping) {
        vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement)));
}

void VBDMAs2m::_eval(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAs2m::_eval\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__12(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VBDMAs2m::_change_request(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAs2m::_change_request\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VBDMAs2m::_change_request_1(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAs2m::_change_request_1\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VBDMAs2m::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAs2m::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((dma_aw_ready & 0xfeU))) {
        Verilated::overWidthError("dma_aw_ready");}
    if (VL_UNLIKELY((dma_w_ready & 0xfeU))) {
        Verilated::overWidthError("dma_w_ready");}
    if (VL_UNLIKELY((dma_b_valid & 0xfeU))) {
        Verilated::overWidthError("dma_b_valid");}
    if (VL_UNLIKELY((dma_b_payload_id & 0xf0U))) {
        Verilated::overWidthError("dma_b_payload_id");}
    if (VL_UNLIKELY((dma_b_payload_resp & 0xfcU))) {
        Verilated::overWidthError("dma_b_payload_resp");}
    if (VL_UNLIKELY((s2m_data_stream_valid & 0xfeU))) {
        Verilated::overWidthError("s2m_data_stream_valid");}
    if (VL_UNLIKELY((s2m_data_stream_payload_id & 0xf0U))) {
        Verilated::overWidthError("s2m_data_stream_payload_id");}
    if (VL_UNLIKELY((s2m_data_stream_payload_strb & 0xf0U))) {
        Verilated::overWidthError("s2m_data_stream_payload_strb");}
    if (VL_UNLIKELY((s2m_data_stream_payload_keep_ 
                     & 0xf0U))) {
        Verilated::overWidthError("s2m_data_stream_payload_keep_");}
    if (VL_UNLIKELY((s2m_data_stream_payload_last & 0xfeU))) {
        Verilated::overWidthError("s2m_data_stream_payload_last");}
    if (VL_UNLIKELY((s2m_cch_valid & 0xfeU))) {
        Verilated::overWidthError("s2m_cch_valid");}
    if (VL_UNLIKELY((s2m_cch_payload_desc_total_bytes 
                     & 0xc0000000U))) {
        Verilated::overWidthError("s2m_cch_payload_desc_total_bytes");}
    if (VL_UNLIKELY((s2m_cch_payload_desc_burst & 0xfcU))) {
        Verilated::overWidthError("s2m_cch_payload_desc_burst");}
    if (VL_UNLIKELY((s2m_cch_payload_desc_id & 0xf0U))) {
        Verilated::overWidthError("s2m_cch_payload_desc_id");}
    if (VL_UNLIKELY((s2m_cch_payload_desc_reset & 0xfeU))) {
        Verilated::overWidthError("s2m_cch_payload_desc_reset");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
