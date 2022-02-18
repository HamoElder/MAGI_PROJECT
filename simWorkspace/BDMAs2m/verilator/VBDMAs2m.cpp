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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/BDMAs2m.v", 20, "",
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/BDMAs2m.v", 20, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VBDMAs2m::_sequent__TOP__2(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAs2m::_sequent__TOP__2\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdlyvdim0__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0;
    QData/*48:0*/ __Vdlyvval__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0;
    // Body
    vlTOPp->__Vdly__BDMAs2m__DOT__cch_address = vlTOPp->BDMAs2m__DOT__cch_address;
    vlTOPp->__Vdly__BDMAs2m__DOT__trans_bytes_cnt = vlTOPp->BDMAs2m__DOT__trans_bytes_cnt;
    vlTOPp->__Vdly__BDMAs2m__DOT__cch_total_bytes = vlTOPp->BDMAs2m__DOT__cch_total_bytes;
    vlTOPp->__Vdly__BDMAs2m__DOT__s2m_axis_len = vlTOPp->BDMAs2m__DOT__s2m_axis_len;
    vlTOPp->__Vdlyvset__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram__v0 = 0U;
    __Vdlyvset__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0 = 0U;
    if ((1U & (~ ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state)))) {
                if (vlTOPp->BDMAs2m__DOT__dma_aw_fire_2) {
                    vlTOPp->BDMAs2m__DOT__strb_mask 
                        = (0xfU & ((IData)(0xfU) << (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0)));
                }
            }
        }
    }
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram
        [vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext];
    if ((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) {
        if (vlTOPp->BDMAs2m__DOT__s2m_cch_fire) {
            vlTOPp->__Vdly__BDMAs2m__DOT__cch_address 
                = vlTOPp->s2m_cch_payload_desc_start_addr;
        }
    } else {
        if ((1U != (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) {
            if ((2U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) {
                if ((0U != vlTOPp->BDMAs2m__DOT__cch_total_bytes)) {
                    if (vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushing) {
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
            if ((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l89)))) {
                if (vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushing) {
                    vlTOPp->__Vdly__BDMAs2m__DOT__cch_total_bytes 
                        = (0x3fffffffU & (vlTOPp->BDMAs2m__DOT__cch_total_bytes 
                                          - vlTOPp->BDMAs2m__DOT__trans_bytes_cnt));
                }
            }
            vlTOPp->__Vdly__BDMAs2m__DOT__trans_bytes_cnt 
                = (0x3fffffffU & ((0x40U >= vlTOPp->BDMAs2m__DOT___zz_when_BDMAs2m_l105)
                                   ? vlTOPp->BDMAs2m__DOT__cch_total_bytes
                                   : ((IData)(0x40U) 
                                      - (3U & vlTOPp->BDMAs2m__DOT__cch_address))));
        } else {
            if ((2U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) {
                if ((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l89)))) {
                    if (vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushing) {
                        vlTOPp->__Vdly__BDMAs2m__DOT__cch_total_bytes 
                            = (0x3fffffffU & (vlTOPp->BDMAs2m__DOT__cch_total_bytes 
                                              - vlTOPp->BDMAs2m__DOT__trans_bytes_cnt));
                    }
                }
                vlTOPp->__Vdly__BDMAs2m__DOT__trans_bytes_cnt 
                    = (0x3fffffffU & ((0x40U >= vlTOPp->BDMAs2m__DOT___zz_when_BDMAs2m_l105)
                                       ? ((0U != (0xfffffU 
                                                  & (vlTOPp->BDMAs2m__DOT___zz_when_BDMAs2m_l140_1 
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
    if ((1U & (~ ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))) {
            if ((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state)))) {
                if (vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popping) {
                    vlTOPp->BDMAs2m__DOT__s2m_w_data 
                        = (IData)(((((QData)((IData)(vlTOPp->BDMAs2m__DOT__w_residual_data)) 
                                     << 0x20U) | (QData)((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0))) 
                                   >> (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift)));
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))) {
            if ((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state)))) {
                if (vlTOPp->BDMAs2m__DOT__dma_w_fire) {
                    vlTOPp->__Vdly__BDMAs2m__DOT__s2m_axis_len 
                        = (0xffU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len) 
                                    - (IData)(1U)));
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state)))) {
                if (vlTOPp->BDMAs2m__DOT__dma_aw_fire_2) {
                    vlTOPp->__Vdly__BDMAs2m__DOT__s2m_axis_len 
                        = vlTOPp->dma_aw_payload_len;
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))) {
            if ((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state)))) {
                if (vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popping) {
                    vlTOPp->BDMAs2m__DOT__s2m_w_strb 
                        = (0xfU & ((((IData)(vlTOPp->BDMAs2m__DOT__w_residual_strb) 
                                     << 4U) | (0xfU 
                                               & (IData)(
                                                         (vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
                                                          >> 0x28U)))) 
                                   >> (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift)));
                }
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
    if (vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram__v0 
            = (((QData)((IData)(vlTOPp->s2m_data_stream_payload_last)) 
                << 0x2cU) | (((QData)((IData)(vlTOPp->s2m_data_stream_payload_keep_)) 
                              << 0x28U) | (((QData)((IData)(vlTOPp->s2m_data_stream_payload_strb)) 
                                            << 0x24U) 
                                           | (((QData)((IData)(vlTOPp->s2m_data_stream_payload_id)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->s2m_data_stream_payload_data))))));
        vlTOPp->__Vdlyvset__BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram__v0 
            = vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_value;
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
    if (__Vdlyvset__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0) {
        vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[__Vdlyvdim0__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0] 
            = __Vdlyvval__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0;
    }
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram
        [vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext];
    vlTOPp->dma_aw_payload_addr = (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0);
    vlTOPp->dma_aw_payload_id = (0xfU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                                 >> 0x20U)));
    vlTOPp->dma_aw_payload_len = (0xffU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                                   >> 0x24U)));
    vlTOPp->dma_aw_payload_size = (7U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                                 >> 0x2cU)));
    vlTOPp->dma_aw_payload_burst = (3U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                                  >> 0x2fU)));
    vlTOPp->dma_w_payload_data = vlTOPp->BDMAs2m__DOT__s2m_w_data;
    if ((1U & (~ ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))) {
            if ((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state)))) {
                if (vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popping) {
                    vlTOPp->BDMAs2m__DOT__w_residual_data 
                        = (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state)))) {
                if (vlTOPp->BDMAs2m__DOT__dma_aw_fire_2) {
                    vlTOPp->BDMAs2m__DOT__bytes_shift 
                        = vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_logic_ram_port0;
                }
            }
        }
    }
}

VL_INLINE_OPT void VBDMAs2m::_sequent__TOP__3(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAs2m::_sequent__TOP__3\n"); );
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
    if (vlTOPp->__Vdlyvset__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0) {
        vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0;
    }
    vlTOPp->BDMAs2m__DOT__trans_bytes_cnt = vlTOPp->__Vdly__BDMAs2m__DOT__trans_bytes_cnt;
    vlTOPp->BDMAs2m__DOT__cch_address = vlTOPp->__Vdly__BDMAs2m__DOT__cch_address;
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram
        [vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext];
    if (vlTOPp->__Vdlyvset__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0) {
        vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VBDMAs2m::_sequent__TOP__5(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAs2m::_sequent__TOP__5\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__BDMAs2m__DOT__s2m_aw_halt_exec;
    // Body
    __Vdly__BDMAs2m__DOT__s2m_aw_halt_exec = vlTOPp->BDMAs2m__DOT__s2m_aw_halt_exec;
    vlTOPp->__Vdly__BDMAs2m__DOT__s2m_cch_state = vlTOPp->BDMAs2m__DOT__s2m_cch_state;
    vlTOPp->__Vdly__BDMAs2m__DOT__s2m_w_state = vlTOPp->BDMAs2m__DOT__s2m_w_state;
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__BDMAs2m__DOT__s2m_cch_state = 0U;
        vlTOPp->BDMAs2m__DOT__cch_ready = 0U;
        vlTOPp->BDMAs2m__DOT__s2m_aw_valid = 0U;
        __Vdly__BDMAs2m__DOT__s2m_aw_halt_exec = 0U;
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
                if (vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushing) {
                    vlTOPp->BDMAs2m__DOT__s2m_aw_valid = 0U;
                } else {
                    if (vlTOPp->BDMAs2m__DOT__s2m_aw_halt_exec) {
                        vlTOPp->BDMAs2m__DOT__s2m_aw_valid = 1U;
                    }
                }
                if ((0U == vlTOPp->BDMAs2m__DOT__cch_total_bytes)) {
                    vlTOPp->__Vdly__BDMAs2m__DOT__s2m_cch_state = 3U;
                } else {
                    __Vdly__BDMAs2m__DOT__s2m_aw_halt_exec 
                        = (1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushing)));
                }
            } else {
                if ((2U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) {
                    if (vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushing) {
                        vlTOPp->BDMAs2m__DOT__s2m_aw_valid = 0U;
                    } else {
                        if (vlTOPp->BDMAs2m__DOT__s2m_aw_halt_exec) {
                            vlTOPp->BDMAs2m__DOT__s2m_aw_valid = 1U;
                        }
                    }
                    if ((0U == vlTOPp->BDMAs2m__DOT__cch_total_bytes)) {
                        vlTOPp->__Vdly__BDMAs2m__DOT__s2m_cch_state = 3U;
                    } else {
                        __Vdly__BDMAs2m__DOT__s2m_aw_halt_exec 
                            = (1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushing)));
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
        vlTOPp->__Vdly__BDMAs2m__DOT__s2m_w_state = 0U;
        vlTOPp->BDMAs2m__DOT__s2m_aw_valve = 0U;
        vlTOPp->BDMAs2m__DOT__s2m_data_valve = 0U;
        vlTOPp->BDMAs2m__DOT__s2m_w_valid = 0U;
        vlTOPp->BDMAs2m__DOT__s2m_b_ready = 0U;
        vlTOPp->BDMAs2m__DOT__w_residual_strb = 0U;
        vlTOPp->BDMAs2m__DOT__s2m_axis_last = 0U;
        vlTOPp->BDMAs2m__DOT__s2m_axis_leak = 0U;
    } else {
        if ((4U & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))) {
            if (vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l280) {
                vlTOPp->__Vdly__BDMAs2m__DOT__s2m_w_state = 0U;
                vlTOPp->BDMAs2m__DOT__s2m_axis_leak = 0U;
            } else {
                vlTOPp->BDMAs2m__DOT__s2m_axis_leak = 1U;
            }
            vlTOPp->BDMAs2m__DOT__s2m_axis_last = 0U;
            vlTOPp->BDMAs2m__DOT__w_residual_strb = 0U;
            vlTOPp->BDMAs2m__DOT__s2m_w_valid = 0U;
        } else {
            if ((2U & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))) {
                if ((1U & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))) {
                    if (((IData)(vlTOPp->dma_b_valid) 
                         & (IData)(vlTOPp->dma_b_ready))) {
                        vlTOPp->BDMAs2m__DOT__s2m_b_ready = 0U;
                        vlTOPp->BDMAs2m__DOT__s2m_aw_valve = 1U;
                        vlTOPp->__Vdly__BDMAs2m__DOT__s2m_w_state 
                            = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_finish)
                                ? 4U : 0U);
                    }
                } else {
                    if (vlTOPp->BDMAs2m__DOT__dma_w_fire) {
                        if ((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len))) {
                            vlTOPp->BDMAs2m__DOT__s2m_data_valve = 0U;
                            vlTOPp->__Vdly__BDMAs2m__DOT__s2m_w_state = 3U;
                            vlTOPp->BDMAs2m__DOT__s2m_b_ready = 1U;
                        }
                    }
                    if (vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popping) {
                        vlTOPp->BDMAs2m__DOT__w_residual_strb 
                            = (0xfU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
                                               >> 0x28U)));
                        vlTOPp->BDMAs2m__DOT__s2m_axis_last 
                            = (1U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
                                             >> 0x2cU)));
                        vlTOPp->BDMAs2m__DOT__s2m_w_valid = 1U;
                    } else {
                        if (((IData)(vlTOPp->dma_w_valid) 
                             & (IData)(vlTOPp->dma_w_ready))) {
                            vlTOPp->BDMAs2m__DOT__s2m_w_valid = 0U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))) {
                    if (((0xffU & ((IData)(1U) + (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len))) 
                         <= (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo_io_occupancy))) {
                        vlTOPp->__Vdly__BDMAs2m__DOT__s2m_w_state = 2U;
                        vlTOPp->BDMAs2m__DOT__s2m_data_valve = 1U;
                    }
                } else {
                    if (vlTOPp->BDMAs2m__DOT__dma_aw_fire_2) {
                        vlTOPp->BDMAs2m__DOT__s2m_aw_valve = 0U;
                        if (((0xffU & ((IData)(1U) 
                                       + (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len))) 
                             <= (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo_io_occupancy))) {
                            vlTOPp->__Vdly__BDMAs2m__DOT__s2m_w_state = 2U;
                            vlTOPp->BDMAs2m__DOT__s2m_data_valve = 1U;
                        } else {
                            vlTOPp->__Vdly__BDMAs2m__DOT__s2m_w_state = 1U;
                            vlTOPp->BDMAs2m__DOT__s2m_data_valve = 0U;
                        }
                    } else {
                        vlTOPp->BDMAs2m__DOT__s2m_data_valve = 0U;
                        vlTOPp->BDMAs2m__DOT__s2m_aw_valve = 1U;
                    }
                    vlTOPp->BDMAs2m__DOT__s2m_axis_last = 0U;
                    vlTOPp->BDMAs2m__DOT__s2m_w_valid = 0U;
                    vlTOPp->BDMAs2m__DOT__s2m_b_ready = 0U;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popping))) {
            vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushing;
        }
    }
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_value)));
    if (vlTOPp->reset) {
        vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping))) {
            vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushing;
        }
    }
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->BDMAs2m__DOT__s2m_aw_halt_exec = __Vdly__BDMAs2m__DOT__s2m_aw_halt_exec;
}

VL_INLINE_OPT void VBDMAs2m::_sequent__TOP__6(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAs2m::_sequent__TOP__6\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->dma_b_ready = vlTOPp->BDMAs2m__DOT__s2m_b_ready;
    vlTOPp->dma_w_valid = vlTOPp->BDMAs2m__DOT__s2m_w_valid;
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->BDMAs2m__DOT__s2m_w_state = vlTOPp->__Vdly__BDMAs2m__DOT__s2m_w_state;
    vlTOPp->BDMAs2m__DOT__s2m_cch_state = vlTOPp->__Vdly__BDMAs2m__DOT__s2m_cch_state;
    vlTOPp->s2m_intr = vlTOPp->BDMAs2m__DOT__cycle_finished;
    vlTOPp->__Vtableidx2 = vlTOPp->BDMAs2m__DOT__s2m_w_state;
    vlTOPp->BDMAs2m__DOT__s2m_w_state_string = vlTOPp->__Vtable2_BDMAs2m__DOT__s2m_w_state_string
        [vlTOPp->__Vtableidx2];
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
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAs2m__DOT__s2m_data_fifo_io_occupancy 
        = ((((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_risingOccupancy) 
             & (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ptrMatch)) 
            << 4U) | (0xfU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_value) 
                              - (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_value))));
    vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valid) 
           & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full)));
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valid) 
           & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_full)));
    vlTOPp->s2m_data_stream_ready = (1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_full)));
    vlTOPp->BDMAs2m__DOT__s2m_data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_full))))));
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valid) 
           & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full)));
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full))))));
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
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAs2m__DOT__s2m_aw_finish = ((3U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state)) 
                                           & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid)));
    vlTOPp->dma_aw_valid = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid) 
                            & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valve));
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement)));
}

VL_INLINE_OPT void VBDMAs2m::_sequent__TOP__8(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAs2m::_sequent__TOP__8\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BDMAs2m__DOT__cch_total_bytes = vlTOPp->__Vdly__BDMAs2m__DOT__cch_total_bytes;
    vlTOPp->BDMAs2m__DOT__s2m_axis_len = vlTOPp->__Vdly__BDMAs2m__DOT__s2m_axis_len;
    vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l89 = (0U == vlTOPp->BDMAs2m__DOT__cch_total_bytes);
    vlTOPp->BDMAs2m__DOT___zz_when_BDMAs2m_l105 = (vlTOPp->BDMAs2m__DOT__cch_total_bytes 
                                                   + 
                                                   (3U 
                                                    & vlTOPp->BDMAs2m__DOT__cch_address));
    vlTOPp->BDMAs2m__DOT___zz_when_BDMAs2m_l140_1 = 
        ((0xfffU & vlTOPp->BDMAs2m__DOT__cch_address) 
         + (0xfffU & vlTOPp->BDMAs2m__DOT__cch_total_bytes));
    vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram
        [vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_valueNext];
    vlTOPp->dma_w_payload_last = (0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len));
    vlTOPp->dma_w_payload_strb = ((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len))
                                   ? ((IData)(vlTOPp->BDMAs2m__DOT__strb_mask) 
                                      & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_strb))
                                   : (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_strb));
    if (vlTOPp->__Vdlyvset__BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram__v0) {
        vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VBDMAs2m::_combo__TOP__9(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAs2m::_combo__TOP__9\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BDMAs2m__DOT__s2m_cch_fire = ((IData)(vlTOPp->s2m_cch_valid) 
                                          & (IData)(vlTOPp->s2m_cch_ready));
    vlTOPp->BDMAs2m__DOT__dma_w_fire = ((IData)(vlTOPp->dma_w_valid) 
                                        & (IData)(vlTOPp->dma_w_ready));
    vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->s2m_data_stream_valid) & 
           (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_full)));
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid) 
           & ((IData)(vlTOPp->dma_aw_ready) & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valve)));
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
    vlTOPp->BDMAs2m__DOT__s2m_data_fifo_io_pop_ready 
        = ((((IData)(vlTOPp->dma_w_ready) & (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_valve)) 
            & (0U != (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len))) 
           | (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_leak));
    vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
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
    vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l280 = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_last) 
                                               | (((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo_io_pop_valid) 
                                                   & (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo_io_pop_ready)) 
                                                  & (IData)(
                                                            (vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
                                                             >> 0x2cU))));
    vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo_io_pop_valid) 
           & (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo_io_pop_ready));
    vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_value) 
                   + (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popping) {
        vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_value) 
                   + (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_willIncrement)));
}

void VBDMAs2m::_eval(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAs2m::_eval\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__9(vlSymsp);
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
