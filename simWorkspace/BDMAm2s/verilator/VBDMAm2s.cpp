// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBDMAm2s.h for the primary calling header

#include "VBDMAm2s.h"
#include "VBDMAm2s__Syms.h"

//==========

void VBDMAm2s::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBDMAm2s::eval\n"); );
    VBDMAm2s__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/BDMAm2s.v", 17, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VBDMAm2s::_eval_initial_loop(VBDMAm2s__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/BDMAm2s.v", 17, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VBDMAm2s::_sequent__TOP__2(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAm2s::_sequent__TOP__2\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdlyvdim0__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram__v0;
    CData/*2:0*/ __Vdlyvdim0__BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram__v0;
    CData/*1:0*/ __Vdlyvval__BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram__v0;
    CData/*2:0*/ __Vdlyvdim0__BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram__v0;
    CData/*1:0*/ __Vdlyvval__BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram__v0;
    IData/*29:0*/ __Vdly__BDMAm2s__DOT__trans_bytes_cnt;
    IData/*31:0*/ __Vdly__BDMAm2s__DOT__cch_address;
    QData/*48:0*/ __Vdlyvval__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram__v0;
    // Body
    vlTOPp->__Vdly__BDMAm2s__DOT__m2s_axis_len = vlTOPp->BDMAm2s__DOT__m2s_axis_len;
    __Vdly__BDMAm2s__DOT__cch_address = vlTOPp->BDMAm2s__DOT__cch_address;
    __Vdly__BDMAm2s__DOT__trans_bytes_cnt = vlTOPp->BDMAm2s__DOT__trans_bytes_cnt;
    vlTOPp->__Vdly__BDMAm2s__DOT__cch_total_bytes = vlTOPp->BDMAm2s__DOT__cch_total_bytes;
    __Vdlyvset__BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram__v0 = 0U;
    __Vdlyvset__BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram__v0 = 0U;
    __Vdlyvset__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram__v0 = 0U;
    if (vlTOPp->BDMAm2s__DOT__m2s_r_state) {
        if (vlTOPp->BDMAm2s__DOT__dma_r_fire) {
            vlTOPp->__Vdly__BDMAm2s__DOT__m2s_axis_len 
                = (0xffU & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len) 
                            - (IData)(1U)));
        }
    } else {
        if (vlTOPp->BDMAm2s__DOT__dma_ar_fire_2) {
            vlTOPp->__Vdly__BDMAm2s__DOT__m2s_axis_len 
                = (0xffU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                    >> 0x24U)));
        }
    }
    if ((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))) {
        if (vlTOPp->BDMAm2s__DOT__m2s_cch_fire) {
            __Vdly__BDMAm2s__DOT__cch_address = vlTOPp->m2s_cch_payload_desc_start_addr;
        }
    } else {
        if ((1U != (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))) {
            if ((2U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))) {
                if ((0U != vlTOPp->BDMAm2s__DOT__cch_total_bytes)) {
                    if (vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire) {
                        __Vdly__BDMAm2s__DOT__cch_address 
                            = (vlTOPp->BDMAm2s__DOT__cch_address 
                               + vlTOPp->BDMAm2s__DOT__trans_bytes_cnt);
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))) {
        if (vlTOPp->BDMAm2s__DOT__m2s_cch_fire) {
            vlTOPp->__Vdly__BDMAm2s__DOT__cch_total_bytes 
                = vlTOPp->m2s_cch_payload_desc_total_bytes;
        }
    } else {
        if ((1U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))) {
            if ((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__when_BDMAm2s_l85)))) {
                if (vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire) {
                    vlTOPp->__Vdly__BDMAm2s__DOT__cch_total_bytes 
                        = (0x3fffffffU & (vlTOPp->BDMAm2s__DOT__cch_total_bytes 
                                          - vlTOPp->BDMAm2s__DOT__trans_bytes_cnt));
                }
            }
            __Vdly__BDMAm2s__DOT__trans_bytes_cnt = 
                (0x3fffffffU & ((0x40U >= vlTOPp->BDMAm2s__DOT___zz_when_BDMAm2s_l101)
                                 ? vlTOPp->BDMAm2s__DOT__cch_total_bytes
                                 : ((IData)(0x40U) 
                                    - (3U & vlTOPp->BDMAm2s__DOT__cch_address))));
        } else {
            if ((2U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))) {
                if ((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__when_BDMAm2s_l85)))) {
                    if (vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire) {
                        vlTOPp->__Vdly__BDMAm2s__DOT__cch_total_bytes 
                            = (0x3fffffffU & (vlTOPp->BDMAm2s__DOT__cch_total_bytes 
                                              - vlTOPp->BDMAm2s__DOT__trans_bytes_cnt));
                    }
                }
                __Vdly__BDMAm2s__DOT__trans_bytes_cnt 
                    = (0x3fffffffU & ((0x40U >= vlTOPp->BDMAm2s__DOT___zz_when_BDMAm2s_l101)
                                       ? ((0U != (0xfffffU 
                                                  & (vlTOPp->BDMAm2s__DOT___zz_when_BDMAm2s_l136_1 
                                                     >> 0xcU)))
                                           ? ((IData)(0x1000U) 
                                              - (0xfffU 
                                                 & vlTOPp->BDMAm2s__DOT__cch_address))
                                           : vlTOPp->BDMAm2s__DOT__cch_total_bytes)
                                       : ((0U != (0xfffffU 
                                                  & (((IData)(0x40U) 
                                                      + 
                                                      (0xfffU 
                                                       & vlTOPp->BDMAm2s__DOT__cch_address)) 
                                                     >> 0xcU)))
                                           ? (0xfffU 
                                              & ((IData)(0x1000U) 
                                                 - vlTOPp->BDMAm2s__DOT__cch_address))
                                           : ((IData)(0x40U) 
                                              - (3U 
                                                 & vlTOPp->BDMAm2s__DOT__cch_address)))));
            }
        }
    }
    if (vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_1) {
        __Vdlyvval__BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram__v0 
            = (3U & vlTOPp->BDMAm2s__DOT__cch_address);
        __Vdlyvset__BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram__v0 = 1U;
        __Vdlyvdim0__BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram__v0 
            = vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT___zz_1) {
        __Vdlyvval__BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram__v0 
            = (3U & ((IData)(1U) + (~ (vlTOPp->BDMAm2s__DOT__trans_bytes_cnt 
                                       + vlTOPp->BDMAm2s__DOT__cch_address))));
        __Vdlyvset__BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram__v0 = 1U;
        __Vdlyvdim0__BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram__v0 
            = vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram__v0 
            = (((QData)((IData)((((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len)) 
                                  & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_pop_valid))) 
                                 & (3U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))))) 
                << 0x2cU) | (((QData)((IData)(((0U 
                                                == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len))
                                                ? ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask) 
                                                   & (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_keep))
                                                : (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_keep)))) 
                              << 0x28U) | (((QData)((IData)(
                                                            ((0U 
                                                              == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len))
                                                              ? 
                                                             ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask) 
                                                              & (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_strb))
                                                              : (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_strb)))) 
                                            << 0x24U) 
                                           | (((QData)((IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_id)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->dma_r_payload_data))))));
        vlTOPp->__Vdlyvset__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram__v0 
            = vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_1) {
        __Vdlyvval__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram__v0 
            = (VL_ULL(0x200000000000) | (((QData)((IData)(vlTOPp->BDMAm2s__DOT__cch_burst_type)) 
                                          << 0x2fU) 
                                         | (((QData)((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_len)) 
                                             << 0x24U) 
                                            | (((QData)((IData)(vlTOPp->BDMAm2s__DOT__cch_id)) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (0xfffffffcU 
                                                                  & vlTOPp->BDMAm2s__DOT__cch_address)))))));
        __Vdlyvset__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram__v0 = 1U;
        __Vdlyvdim0__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram__v0 
            = vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value;
    }
    if ((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_r_state)))) {
        if (vlTOPp->BDMAm2s__DOT__dma_ar_fire_2) {
            vlTOPp->BDMAm2s__DOT__keep_strb_mask = 
                (0xfU & (0xfU >> (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0)));
        }
    }
    if (vlTOPp->BDMAm2s__DOT__m2s_r_state) {
        if (vlTOPp->BDMAm2s__DOT__dma_r_fire) {
            vlTOPp->BDMAm2s__DOT__m2s_axis_keep = 0xfU;
        }
    } else {
        if (vlTOPp->BDMAm2s__DOT__dma_ar_fire_2) {
            vlTOPp->BDMAm2s__DOT__m2s_axis_keep = (0xfU 
                                                   & ((IData)(0xfU) 
                                                      << (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_logic_ram_port0)));
        }
    }
    if (vlTOPp->BDMAm2s__DOT__m2s_r_state) {
        if (vlTOPp->BDMAm2s__DOT__dma_r_fire) {
            vlTOPp->BDMAm2s__DOT__m2s_axis_strb = 0xfU;
        }
    } else {
        if (vlTOPp->BDMAm2s__DOT__dma_ar_fire_2) {
            vlTOPp->BDMAm2s__DOT__m2s_axis_strb = (0xfU 
                                                   & ((IData)(0xfU) 
                                                      << (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_logic_ram_port0)));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_r_state)))) {
        if (vlTOPp->BDMAm2s__DOT__dma_ar_fire_2) {
            vlTOPp->BDMAm2s__DOT__m2s_axis_id = (0xfU 
                                                 & (IData)(
                                                           (vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                                            >> 0x20U)));
        }
    }
    if ((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))) {
        if (vlTOPp->BDMAm2s__DOT__m2s_cch_fire) {
            vlTOPp->BDMAm2s__DOT__cch_id = vlTOPp->m2s_cch_payload_desc_id;
        }
    }
    if ((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))) {
        if (vlTOPp->BDMAm2s__DOT__m2s_cch_fire) {
            vlTOPp->BDMAm2s__DOT__cch_burst_type = vlTOPp->m2s_cch_payload_desc_burst;
        }
    }
    if ((0U != (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))) {
        if ((1U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))) {
            vlTOPp->BDMAm2s__DOT__m2s_ar_len = (0xffU 
                                                & (((vlTOPp->BDMAm2s__DOT__trans_bytes_cnt 
                                                     + 
                                                     (3U 
                                                      & vlTOPp->BDMAm2s__DOT__cch_address)) 
                                                    - (IData)(1U)) 
                                                   >> 2U));
        } else {
            if ((2U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))) {
                vlTOPp->BDMAm2s__DOT__m2s_ar_len = 
                    (0xffU & (((vlTOPp->BDMAm2s__DOT__trans_bytes_cnt 
                                + (3U & vlTOPp->BDMAm2s__DOT__cch_address)) 
                               - (IData)(1U)) >> 2U));
            }
        }
    }
    vlTOPp->BDMAm2s__DOT__trans_bytes_cnt = __Vdly__BDMAm2s__DOT__trans_bytes_cnt;
    vlTOPp->BDMAm2s__DOT__cch_address = __Vdly__BDMAm2s__DOT__cch_address;
    vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram
        [vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext];
    vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram
        [vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext];
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram
        [vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext];
    if (__Vdlyvset__BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram__v0) {
        vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[__Vdlyvdim0__BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram__v0] 
            = __Vdlyvval__BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram__v0;
    }
    if (__Vdlyvset__BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram__v0) {
        vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[__Vdlyvdim0__BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram__v0] 
            = __Vdlyvval__BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram__v0;
    }
    if (__Vdlyvset__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram__v0) {
        vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[__Vdlyvdim0__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram__v0] 
            = __Vdlyvval__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VBDMAm2s::_sequent__TOP__3(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAm2s::_sequent__TOP__3\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->dma_ar_payload_addr = (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0);
    vlTOPp->dma_ar_payload_id = (0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                                 >> 0x20U)));
    vlTOPp->dma_ar_payload_len = (0xffU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                                   >> 0x24U)));
    vlTOPp->dma_ar_payload_size = (7U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                                 >> 0x2cU)));
    vlTOPp->dma_ar_payload_burst = (3U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                                  >> 0x2fU)));
}

VL_INLINE_OPT void VBDMAm2s::_sequent__TOP__4(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAm2s::_sequent__TOP__4\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__BDMAm2s__DOT__m2s_r_state = vlTOPp->BDMAm2s__DOT__m2s_r_state;
    vlTOPp->__Vdly__BDMAm2s__DOT__m2s_ar_halt_exec 
        = vlTOPp->BDMAm2s__DOT__m2s_ar_halt_exec;
    vlTOPp->__Vdly__BDMAm2s__DOT__m2s_cch_state = vlTOPp->BDMAm2s__DOT__m2s_cch_state;
}

VL_INLINE_OPT void VBDMAm2s::_sequent__TOP__5(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAm2s::_sequent__TOP__5\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popping))) {
            vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popping))) {
            vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__BDMAm2s__DOT__m2s_r_state = 0U;
        vlTOPp->BDMAm2s__DOT__m2s_ar_valve = 0U;
        vlTOPp->BDMAm2s__DOT__m2s_r_valve = 0U;
    } else {
        if (vlTOPp->BDMAm2s__DOT__m2s_r_state) {
            if (vlTOPp->BDMAm2s__DOT__dma_r_fire) {
                if ((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len))) {
                    vlTOPp->BDMAm2s__DOT__m2s_r_valve = 0U;
                    vlTOPp->BDMAm2s__DOT__m2s_ar_valve = 1U;
                    vlTOPp->__Vdly__BDMAm2s__DOT__m2s_r_state = 0U;
                }
            }
        } else {
            if (vlTOPp->BDMAm2s__DOT__dma_ar_fire_2) {
                vlTOPp->BDMAm2s__DOT__m2s_ar_valve = 0U;
                vlTOPp->BDMAm2s__DOT__m2s_r_valve = 1U;
                vlTOPp->__Vdly__BDMAm2s__DOT__m2s_r_state = 1U;
            } else {
                vlTOPp->BDMAm2s__DOT__m2s_ar_valve = 1U;
                vlTOPp->BDMAm2s__DOT__m2s_r_valve = 0U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__BDMAm2s__DOT__m2s_cch_state = 0U;
        vlTOPp->BDMAm2s__DOT__cch_ready = 0U;
        vlTOPp->BDMAm2s__DOT__m2s_ar_valid = 0U;
        vlTOPp->__Vdly__BDMAm2s__DOT__m2s_ar_halt_exec = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))) {
            if (vlTOPp->BDMAm2s__DOT__m2s_cch_fire) {
                vlTOPp->BDMAm2s__DOT__cch_ready = 0U;
                vlTOPp->__Vdly__BDMAm2s__DOT__m2s_cch_state 
                    = ((0U == (IData)(vlTOPp->m2s_cch_payload_desc_burst))
                        ? 1U : 2U);
            } else {
                vlTOPp->BDMAm2s__DOT__cch_ready = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))) {
                if (vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire) {
                    vlTOPp->BDMAm2s__DOT__m2s_ar_valid = 0U;
                } else {
                    if (vlTOPp->BDMAm2s__DOT__m2s_ar_halt_exec) {
                        vlTOPp->BDMAm2s__DOT__m2s_ar_valid = 1U;
                    }
                }
                if ((0U == vlTOPp->BDMAm2s__DOT__cch_total_bytes)) {
                    vlTOPp->__Vdly__BDMAm2s__DOT__m2s_cch_state = 3U;
                } else {
                    vlTOPp->__Vdly__BDMAm2s__DOT__m2s_ar_halt_exec 
                        = (1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire)));
                }
            } else {
                if ((2U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))) {
                    if (vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire) {
                        vlTOPp->BDMAm2s__DOT__m2s_ar_valid = 0U;
                    } else {
                        if (vlTOPp->BDMAm2s__DOT__m2s_ar_halt_exec) {
                            vlTOPp->BDMAm2s__DOT__m2s_ar_valid = 1U;
                        }
                    }
                    if ((0U == vlTOPp->BDMAm2s__DOT__cch_total_bytes)) {
                        vlTOPp->__Vdly__BDMAm2s__DOT__m2s_cch_state = 3U;
                    } else {
                        vlTOPp->__Vdly__BDMAm2s__DOT__m2s_ar_halt_exec 
                            = (1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire)));
                    }
                } else {
                    if (((IData)(vlTOPp->m2s_cch_payload_desc_reset) 
                         & (IData)(vlTOPp->BDMAm2s__DOT__cycle_finished))) {
                        vlTOPp->__Vdly__BDMAm2s__DOT__m2s_cch_state = 0U;
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popping))) {
            vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing;
        }
    }
    vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value)));
    if (vlTOPp->reset) {
        vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire) 
             != (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popping))) {
            vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire;
        }
    }
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->BDMAm2s__DOT__m2s_r_state = vlTOPp->__Vdly__BDMAm2s__DOT__m2s_r_state;
    vlTOPp->BDMAm2s__DOT__m2s_ar_halt_exec = vlTOPp->__Vdly__BDMAm2s__DOT__m2s_ar_halt_exec;
    vlTOPp->m2s_state = vlTOPp->BDMAm2s__DOT__m2s_r_state;
    vlTOPp->m2s_cch_ready = vlTOPp->BDMAm2s__DOT__cch_ready;
    if (vlTOPp->reset) {
        vlTOPp->BDMAm2s__DOT__cycle_finished = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))) {
            vlTOPp->BDMAm2s__DOT__cycle_finished = 0U;
        } else {
            if (((IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                          >> 0x2cU)) & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid) 
                                        & (IData)(vlTOPp->m2s_data_stream_ready)))) {
                vlTOPp->BDMAm2s__DOT__cycle_finished = 1U;
            }
        }
    }
    vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->BDMAm2s__DOT__m2s_cch_state = vlTOPp->__Vdly__BDMAm2s__DOT__m2s_cch_state;
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
    vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_valid) 
           & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_full)));
    vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_valid) 
           & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_full)));
    vlTOPp->dma_r_ready = ((~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_full)) 
                           & (IData)(vlTOPp->BDMAm2s__DOT__m2s_r_valve));
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_full))))));
}

VL_INLINE_OPT void VBDMAm2s::_sequent__TOP__6(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAm2s::_sequent__TOP__6\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire 
        = ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_valid) 
           & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full)));
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full))))));
    vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->m2s_data_stream_valid = vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid;
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire) {
        vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire) {
        vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->dma_ar_valid = ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_pop_valid) 
                            & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_valve));
    vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement)));
}

VL_INLINE_OPT void VBDMAm2s::_sequent__TOP__8(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAm2s::_sequent__TOP__8\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BDMAm2s__DOT__m2s_axis_len = vlTOPp->__Vdly__BDMAm2s__DOT__m2s_axis_len;
    vlTOPp->BDMAm2s__DOT__cch_total_bytes = vlTOPp->__Vdly__BDMAm2s__DOT__cch_total_bytes;
    vlTOPp->BDMAm2s__DOT__when_BDMAm2s_l85 = (0U == vlTOPp->BDMAm2s__DOT__cch_total_bytes);
    vlTOPp->BDMAm2s__DOT___zz_when_BDMAm2s_l101 = (vlTOPp->BDMAm2s__DOT__cch_total_bytes 
                                                   + 
                                                   (3U 
                                                    & vlTOPp->BDMAm2s__DOT__cch_address));
    vlTOPp->BDMAm2s__DOT___zz_when_BDMAm2s_l136_1 = 
        ((0xfffU & vlTOPp->BDMAm2s__DOT__cch_address) 
         + (0xfffU & vlTOPp->BDMAm2s__DOT__cch_total_bytes));
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram
        [vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext];
    if (vlTOPp->__Vdlyvset__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram__v0) {
        vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram__v0;
    }
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
}

VL_INLINE_OPT void VBDMAm2s::_combo__TOP__9(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAm2s::_combo__TOP__9\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BDMAm2s__DOT__m2s_cch_fire = ((IData)(vlTOPp->m2s_cch_valid) 
                                          & (IData)(vlTOPp->m2s_cch_ready));
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing 
        = (((IData)(vlTOPp->dma_r_valid) & (IData)(vlTOPp->BDMAm2s__DOT__m2s_r_valve)) 
           & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_full)));
    vlTOPp->BDMAm2s__DOT__dma_r_fire = ((IData)(vlTOPp->dma_r_valid) 
                                        & (IData)(vlTOPp->dma_r_ready));
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid) 
           & (IData)(vlTOPp->m2s_data_stream_ready));
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_pop_valid) 
           & ((IData)(vlTOPp->dma_ar_ready) & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_valve)));
    vlTOPp->BDMAm2s__DOT__dma_ar_fire_2 = ((IData)(vlTOPp->dma_ar_valid) 
                                           & (IData)(vlTOPp->dma_ar_ready));
    vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popping 
        = (((~ ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
                & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))) 
            & (~ ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_io_pop_valid) 
                  & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_full))))) 
           & ((IData)(vlTOPp->dma_ar_valid) & (IData)(vlTOPp->dma_ar_ready)));
    vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popping 
        = (((~ ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
                & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))) 
            & (~ ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT___zz_io_pop_valid) 
                  & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_full))))) 
           & ((IData)(vlTOPp->dma_ar_valid) & (IData)(vlTOPp->dma_ar_ready)));
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing) {
        vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popping) {
        vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popping) {
        vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popping) {
        vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popping) {
        vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement)));
}

void VBDMAm2s::_eval(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAm2s::_eval\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
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

VL_INLINE_OPT QData VBDMAm2s::_change_request(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAm2s::_change_request\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VBDMAm2s::_change_request_1(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAm2s::_change_request_1\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VBDMAm2s::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBDMAm2s::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((dma_ar_ready & 0xfeU))) {
        Verilated::overWidthError("dma_ar_ready");}
    if (VL_UNLIKELY((dma_r_valid & 0xfeU))) {
        Verilated::overWidthError("dma_r_valid");}
    if (VL_UNLIKELY((dma_r_payload_id & 0xf0U))) {
        Verilated::overWidthError("dma_r_payload_id");}
    if (VL_UNLIKELY((dma_r_payload_resp & 0xfcU))) {
        Verilated::overWidthError("dma_r_payload_resp");}
    if (VL_UNLIKELY((dma_r_payload_last & 0xfeU))) {
        Verilated::overWidthError("dma_r_payload_last");}
    if (VL_UNLIKELY((m2s_data_stream_ready & 0xfeU))) {
        Verilated::overWidthError("m2s_data_stream_ready");}
    if (VL_UNLIKELY((m2s_cch_valid & 0xfeU))) {
        Verilated::overWidthError("m2s_cch_valid");}
    if (VL_UNLIKELY((m2s_cch_payload_desc_total_bytes 
                     & 0xc0000000U))) {
        Verilated::overWidthError("m2s_cch_payload_desc_total_bytes");}
    if (VL_UNLIKELY((m2s_cch_payload_desc_burst & 0xfcU))) {
        Verilated::overWidthError("m2s_cch_payload_desc_burst");}
    if (VL_UNLIKELY((m2s_cch_payload_desc_id & 0xf0U))) {
        Verilated::overWidthError("m2s_cch_payload_desc_id");}
    if (VL_UNLIKELY((m2s_cch_payload_desc_reset & 0xfeU))) {
        Verilated::overWidthError("m2s_cch_payload_desc_reset");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
