// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxiLite4BDMA.h for the primary calling header

#include "VAxiLite4BDMA.h"
#include "VAxiLite4BDMA__Syms.h"

//==========

void VAxiLite4BDMA::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAxiLite4BDMA::eval\n"); );
    VAxiLite4BDMA__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/AxiLite4BDMA.v", 24, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VAxiLite4BDMA::_eval_initial_loop(VAxiLite4BDMA__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/AxiLite4BDMA.v", 24, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VAxiLite4BDMA::_sequent__TOP__6(VAxiLite4BDMA__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4BDMA::_sequent__TOP__6\n"); );
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_len 
        = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_len;
    vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address 
        = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address;
    vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address 
        = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address;
    vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__trans_bytes_cnt 
        = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__trans_bytes_cnt;
    vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__trans_bytes_cnt 
        = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__trans_bytes_cnt;
    vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes 
        = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes;
    vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes 
        = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes;
    vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len 
        = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len;
    vlTOPp->__Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram__v0 = 0U;
    if (vlTOPp->axil4Ctrl_arready) {
        vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_prot 
            = vlTOPp->axil4Ctrl_arprot;
    }
    if (vlTOPp->AxiLite4BDMA__DOT___zz_writeJoinEvent_translated_ready) {
        vlTOPp->AxiLite4BDMA__DOT___zz_axil4Ctrl_bresp = 0U;
    }
    if (vlTOPp->axil4Ctrl_arready) {
        vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr 
            = vlTOPp->axil4Ctrl_araddr;
    }
    if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state)))) {
                if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__dma_aw_fire_2) {
                    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__strb_mask 
                        = (0xfU & (0xfU >> (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0)));
                }
            }
        }
    }
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state) {
        if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__dma_r_fire) {
            vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_len 
                = (0xffU & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_len) 
                            - (IData)(1U)));
        }
    } else {
        if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__dma_ar_fire_2) {
            vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_len 
                = (0xffU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                    >> 0x24U)));
        }
    }
    if ((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state))) {
        if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_fire) {
            vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address 
                = vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_start_addr_driver;
        }
    } else {
        if ((1U != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state))) {
            if ((2U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state))) {
                if ((0U != vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes)) {
                    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_push_fire) {
                        vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address 
                            = (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address 
                               + vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__trans_bytes_cnt);
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state))) {
        if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_fire) {
            vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address 
                = vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_start_addr_driver;
        }
    } else {
        if ((1U != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state))) {
            if ((2U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state))) {
                if ((0U != vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes)) {
                    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushing) {
                        vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address 
                            = (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address 
                               + vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__trans_bytes_cnt);
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state))) {
        if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_fire) {
            vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes 
                = vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_total_bytes_driver;
        }
    } else {
        if ((1U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state))) {
            if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__when_BDMAm2s_l85)))) {
                if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_push_fire) {
                    vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes 
                        = (0x3fffffffU & (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes 
                                          - vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__trans_bytes_cnt));
                }
            }
            vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__trans_bytes_cnt 
                = (0x3fffffffU & ((0x40U >= vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT___zz_when_BDMAm2s_l101)
                                   ? vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes
                                   : ((IData)(0x40U) 
                                      - (3U & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address))));
        } else {
            if ((2U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state))) {
                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__when_BDMAm2s_l85)))) {
                    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_push_fire) {
                        vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes 
                            = (0x3fffffffU & (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes 
                                              - vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__trans_bytes_cnt));
                    }
                }
                vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__trans_bytes_cnt 
                    = (0x3fffffffU & ((0x40U >= vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT___zz_when_BDMAm2s_l101)
                                       ? ((0U != (0xfffffU 
                                                  & (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT___zz_when_BDMAm2s_l136_1 
                                                     >> 0xcU)))
                                           ? ((IData)(0x1000U) 
                                              - (0xfffU 
                                                 & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address))
                                           : vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes)
                                       : ((0U != (0xfffffU 
                                                  & (((IData)(0x40U) 
                                                      + 
                                                      (0xfffU 
                                                       & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address)) 
                                                     >> 0xcU)))
                                           ? (0xfffU 
                                              & ((IData)(0x1000U) 
                                                 - vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address))
                                           : ((IData)(0x40U) 
                                              - (3U 
                                                 & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address)))));
            }
        }
    }
    if ((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state))) {
        if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_fire) {
            vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes 
                = vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_total_bytes_driver;
        }
    } else {
        if ((1U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state))) {
            if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__when_BDMAs2m_l89)))) {
                if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushing) {
                    vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes 
                        = (0x3fffffffU & (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes 
                                          - vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__trans_bytes_cnt));
                }
            }
            vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__trans_bytes_cnt 
                = (0x3fffffffU & ((0x40U >= vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT___zz_when_BDMAs2m_l105)
                                   ? vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes
                                   : ((IData)(0x40U) 
                                      - (3U & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address))));
        } else {
            if ((2U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state))) {
                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__when_BDMAs2m_l89)))) {
                    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushing) {
                        vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes 
                            = (0x3fffffffU & (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes 
                                              - vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__trans_bytes_cnt));
                    }
                }
                vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__trans_bytes_cnt 
                    = (0x3fffffffU & ((0x40U >= vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT___zz_when_BDMAs2m_l105)
                                       ? ((0U != (0xfffffU 
                                                  & (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT___zz_when_BDMAs2m_l140_1 
                                                     >> 0xcU)))
                                           ? ((IData)(0x1000U) 
                                              - (0xfffU 
                                                 & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address))
                                           : vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes)
                                       : ((0U != (0xfffffU 
                                                  & (((IData)(0x40U) 
                                                      + 
                                                      (0xfffU 
                                                       & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address)) 
                                                     >> 0xcU)))
                                           ? (0xfffU 
                                              & ((IData)(0x1000U) 
                                                 - vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address))
                                           : ((IData)(0x40U) 
                                              - (3U 
                                                 & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address)))));
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state))) {
            if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state)))) {
                if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popping) {
                    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_data 
                        = ((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__bytes_shift))
                            ? (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0)
                            : (IData)(((((QData)((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__w_residual_data))) 
                                       >> (0x3fU & 
                                           ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__bytes_shift) 
                                            << 3U)))));
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state))) {
            if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state)))) {
                if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__dma_w_fire_1) {
                    vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len 
                        = (0xffU & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len) 
                                    - (IData)(1U)));
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state)))) {
                if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__dma_aw_fire_2) {
                    vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len 
                        = (0xffU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x24U)));
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state))) {
            if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state)))) {
                if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popping) {
                    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_strb 
                        = (0xfU & ((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__bytes_shift))
                                    ? (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
                                               >> 0x28U))
                                    : (0xffU & (((0xf0U 
                                                  & ((IData)(
                                                             (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
                                                              >> 0x28U)) 
                                                     << 4U)) 
                                                 | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__w_residual_strb)) 
                                                >> (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__bytes_shift)))));
                }
            }
        }
    }
}

VL_INLINE_OPT void VAxiLite4BDMA::_sequent__TOP__7(VAxiLite4BDMA__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4BDMA::_sequent__TOP__7\n"); );
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram__v0;
    CData/*2:0*/ __Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram__v0;
    CData/*1:0*/ __Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram__v0;
    QData/*48:0*/ __Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram__v0;
    // Body
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram__v0 
            = (3U & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address);
        vlTOPp->__Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram__v0 
            = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram__v0 
            = (3U & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address);
        vlTOPp->__Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram__v0 
            = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram__v0 
            = (3U & ((IData)(1U) + (~ (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__trans_bytes_cnt 
                                       + vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address))));
        vlTOPp->__Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram__v0 
            = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT___zz_1) {
        __Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram__v0 
            = (3U & ((IData)(1U) + (~ (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__trans_bytes_cnt 
                                       + vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address))));
        vlTOPp->__Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram__v0 = 1U;
        __Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram__v0 
            = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram__v0 
            = (((QData)((IData)(vlTOPp->dataS2M_tlast)) 
                << 0x2cU) | (((QData)((IData)(vlTOPp->dataS2M_tkeep)) 
                              << 0x28U) | (((QData)((IData)(vlTOPp->dataS2M_tstrb)) 
                                            << 0x24U) 
                                           | (((QData)((IData)(vlTOPp->dataS2M_tid)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->dataS2M_tdata))))));
        vlTOPp->__Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram__v0 
            = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram__v0 
            = (((QData)((IData)((((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_len)) 
                                  & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_pop_valid))) 
                                 & (3U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state))))) 
                << 0x2cU) | (((QData)((IData)(((0U 
                                                == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_len))
                                                ? ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__keep_strb_mask) 
                                                   & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_keep))
                                                : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_keep)))) 
                              << 0x28U) | (((QData)((IData)(
                                                            ((0U 
                                                              == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_len))
                                                              ? 
                                                             ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__keep_strb_mask) 
                                                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_strb))
                                                              : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_strb)))) 
                                            << 0x24U) 
                                           | (((QData)((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_id)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->axi4M2S_rdata))))));
        vlTOPp->__Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram__v0 
            = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram__v0 
            = (VL_ULL(0x200000000000) | (((QData)((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_burst_type)) 
                                          << 0x2fU) 
                                         | (((QData)((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_len)) 
                                             << 0x24U) 
                                            | (((QData)((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_id)) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (0xfffffffcU 
                                                                  & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address)))))));
        vlTOPp->__Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram__v0 
            = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_1) {
        __Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram__v0 
            = (VL_ULL(0x200000000000) | (((QData)((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_burst_type)) 
                                          << 0x2fU) 
                                         | (((QData)((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_len)) 
                                             << 0x24U) 
                                            | (((QData)((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_id)) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (0xfffffffcU 
                                                                  & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address)))))));
        vlTOPp->__Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram__v0 = 1U;
        __Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram__v0 
            = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value;
    }
    vlTOPp->axil4Ctrl_bresp = vlTOPp->AxiLite4BDMA__DOT___zz_axil4Ctrl_bresp;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram
        [vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext];
    vlTOPp->axi4S2M_wdata = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_data;
    if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state))) {
            if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state)))) {
                if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popping) {
                    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__w_residual_data 
                        = ((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__bytes_shift))
                            ? (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0)
                            : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0));
                }
            }
        }
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram
        [vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext];
    if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state)))) {
        if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__dma_ar_fire_2) {
            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__keep_strb_mask 
                = (0xfU & (0xfU >> (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0)));
        }
    }
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state) {
        if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__dma_r_fire) {
            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_keep = 0xfU;
        }
    } else {
        if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__dma_ar_fire_2) {
            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_keep 
                = (0xfU & ((IData)(0xfU) << (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT___zz_logic_ram_port0)));
        }
    }
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state) {
        if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__dma_r_fire) {
            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_strb = 0xfU;
        }
    } else {
        if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__dma_ar_fire_2) {
            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_strb 
                = (0xfU & ((IData)(0xfU) << (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT___zz_logic_ram_port0)));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state)))) {
        if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__dma_ar_fire_2) {
            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_id 
                = (0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                   >> 0x20U)));
        }
    }
    if ((0U != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state))) {
        if ((1U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state))) {
            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_len 
                = (0xffU & (((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__trans_bytes_cnt 
                              + (3U & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address)) 
                             - (IData)(1U)) >> 2U));
        } else {
            if ((2U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state))) {
                vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_len 
                    = (0xffU & (((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__trans_bytes_cnt 
                                  + (3U & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address)) 
                                 - (IData)(1U)) >> 2U));
            }
        }
    }
    if ((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state))) {
        if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_fire) {
            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_id 
                = vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_id_driver;
        }
    }
    if ((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state))) {
        if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_fire) {
            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_burst_type 
                = vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_burst_driver;
        }
    }
    if ((0U != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state))) {
        if ((1U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state))) {
            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_len 
                = (0xffU & (((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__trans_bytes_cnt 
                              + (3U & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address)) 
                             - (IData)(1U)) >> 2U));
        } else {
            if ((2U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state))) {
                vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_len 
                    = (0xffU & (((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__trans_bytes_cnt 
                                  + (3U & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address)) 
                                 - (IData)(1U)) >> 2U));
            }
        }
    }
    if ((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state))) {
        if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_fire) {
            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_id 
                = vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_id_driver;
        }
    }
    if ((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state))) {
        if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_fire) {
            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_burst_type 
                = vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_burst_driver;
        }
    }
    if (vlTOPp->__Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram__v0) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram[__Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram__v0] 
            = __Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram__v0) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram[__Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram__v0] 
            = __Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VAxiLite4BDMA::_sequent__TOP__8(VAxiLite4BDMA__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4BDMA::_sequent__TOP__8\n"); );
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__trans_bytes_cnt 
        = vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__trans_bytes_cnt;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address 
        = vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__trans_bytes_cnt 
        = vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__trans_bytes_cnt;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address 
        = vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address;
    if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state)))) {
                if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__dma_aw_fire_2) {
                    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__bytes_shift 
                        = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT___zz_logic_ram_port0;
                }
            }
        }
    }
    vlTOPp->axi4S2M_awaddr = (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0);
    vlTOPp->axi4S2M_awid = (0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x20U)));
    vlTOPp->axi4S2M_awlen = (0xffU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x24U)));
    vlTOPp->axi4S2M_awsize = (7U & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2cU)));
    vlTOPp->axi4S2M_awburst = (3U & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                             >> 0x2fU)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram
        [vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext];
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram
        [vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext];
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram
        [vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext];
    if (vlTOPp->__Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram__v0) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram__v0) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram__v0) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram__v0;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram
        [vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext];
    vlTOPp->axi4M2S_araddr = (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0);
    vlTOPp->axi4M2S_arid = (0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x20U)));
    vlTOPp->axi4M2S_arlen = (0xffU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x24U)));
    vlTOPp->axi4M2S_arsize = (7U & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2cU)));
    vlTOPp->axi4M2S_arburst = (3U & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                             >> 0x2fU)));
    if (vlTOPp->__Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram__v0) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VAxiLite4BDMA::_sequent__TOP__10(VAxiLite4BDMA__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4BDMA::_sequent__TOP__10\n"); );
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state 
        = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state;
    vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state 
        = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state;
    vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_halt_exec 
        = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_halt_exec;
    vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state 
        = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state;
    vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_halt_exec 
        = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_halt_exec;
    vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state 
        = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state;
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rValid = 0U;
    } else {
        if (vlTOPp->axil4Ctrl_arready) {
            vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rValid 
                = vlTOPp->axil4Ctrl_arvalid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_id_driver = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((0x10U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_id_driver 
                                                = (0xfU 
                                                   & vlTOPp->axil4Ctrl_wdata);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_start_addr_driver = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_start_addr_driver 
                                                = vlTOPp->axil4Ctrl_wdata;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_total_bytes_driver = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_total_bytes_driver 
                                                = (0x3fffffffU 
                                                   & vlTOPp->axil4Ctrl_wdata);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_total_bytes_driver = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_total_bytes_driver 
                                                = (0x3fffffffU 
                                                   & vlTOPp->axil4Ctrl_wdata);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_id_driver = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_id_driver 
                                                = (0xfU 
                                                   & vlTOPp->axil4Ctrl_wdata);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_start_addr_driver = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_start_addr_driver 
                                                = vlTOPp->axil4Ctrl_wdata;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VAxiLite4BDMA::_sequent__TOP__11(VAxiLite4BDMA__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4BDMA::_sequent__TOP__11\n"); );
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_valid_driver = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_valid_driver 
                                                = (1U 
                                                   & vlTOPp->axil4Ctrl_wdata);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_valid_driver = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_valid_driver 
                                                = (1U 
                                                   & vlTOPp->axil4Ctrl_wdata);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4BDMA__DOT___zz_axil4Ctrl_bvalid_2 = 0U;
    } else {
        if (vlTOPp->AxiLite4BDMA__DOT___zz_writeJoinEvent_translated_ready) {
            vlTOPp->AxiLite4BDMA__DOT___zz_axil4Ctrl_bvalid_2 
                = vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popping))) {
            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popping))) {
            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popping))) {
            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popping))) {
            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state = 0U;
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valve = 0U;
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_valve = 0U;
    } else {
        if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state) {
            if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__dma_r_fire) {
                if ((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_len))) {
                    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_valve = 0U;
                    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valve = 1U;
                    vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state = 0U;
                }
            }
        } else {
            if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__dma_ar_fire_2) {
                vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valve = 0U;
                vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_valve = 1U;
                vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state = 1U;
            } else {
                vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valve = 1U;
                vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_valve = 0U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popping))) {
            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state = 0U;
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valve = 0U;
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_valve = 0U;
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_valid = 0U;
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_b_ready = 0U;
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__w_residual_strb = 0U;
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_last = 0U;
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_leak = 0U;
    } else {
        if ((4U & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state))) {
            if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__when_BDMAs2m_l335) {
                vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state = 0U;
                vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_leak = 0U;
            } else {
                vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_leak = 1U;
            }
            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_last = 0U;
            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__w_residual_strb = 0U;
            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_valid = 0U;
        } else {
            if ((2U & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state))) {
                if ((1U & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state))) {
                    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__dma_b_fire) {
                        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_b_ready = 0U;
                        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valve = 1U;
                        vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state 
                            = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_finish)
                                ? 4U : 0U);
                    }
                } else {
                    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__dma_w_fire_1) {
                        if ((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len))) {
                            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_valve = 0U;
                            vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state = 3U;
                            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_b_ready = 1U;
                        }
                    }
                    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popping) {
                        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__w_residual_strb 
                            = (0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
                                               >> 0x28U)));
                        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_last 
                            = (1U & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
                                             >> 0x2cU)));
                        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_valid = 1U;
                    } else {
                        if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__dma_w_fire_1) {
                            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_valid = 0U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state))) {
                    if (((0xffU & ((IData)(1U) + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len))) 
                         <= (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_occupancy))) {
                        vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state = 2U;
                        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_valve = 1U;
                    }
                } else {
                    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__dma_aw_fire_2) {
                        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valve = 0U;
                        if (((0xffU & ((IData)(1U) 
                                       + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len))) 
                             <= (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_occupancy))) {
                            vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state = 2U;
                            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_valve = 1U;
                        } else {
                            vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state = 1U;
                            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_valve = 0U;
                        }
                    } else {
                        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_valve = 0U;
                        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valve = 1U;
                    }
                    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_last = 0U;
                    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_valid = 0U;
                    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_b_ready = 0U;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state = 0U;
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_ready = 0U;
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valid = 0U;
        vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_halt_exec = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state))) {
            if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_fire) {
                vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_ready = 0U;
                vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state 
                    = ((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_burst_driver))
                        ? 1U : 2U);
            } else {
                vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_ready = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state))) {
                if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushing) {
                    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valid = 0U;
                } else {
                    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_halt_exec) {
                        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valid = 1U;
                    }
                }
                if ((0U == vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes)) {
                    vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state = 3U;
                } else {
                    vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_halt_exec 
                        = (1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushing)));
                }
            } else {
                if ((2U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state))) {
                    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushing) {
                        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valid = 0U;
                    } else {
                        if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_halt_exec) {
                            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valid = 1U;
                        }
                    }
                    if ((0U == vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes)) {
                        vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state = 3U;
                    } else {
                        vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_halt_exec 
                            = (1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushing)));
                    }
                } else {
                    if (((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_reset_driver) 
                         & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cycle_finished))) {
                        vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state = 0U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VAxiLite4BDMA::_sequent__TOP__12(VAxiLite4BDMA__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4BDMA::_sequent__TOP__12\n"); );
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popping))) {
            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushing;
        }
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state = 0U;
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_ready = 0U;
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valid = 0U;
        vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_halt_exec = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state))) {
            if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_fire) {
                vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_ready = 0U;
                vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state 
                    = ((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_burst_driver))
                        ? 1U : 2U);
            } else {
                vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_ready = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state))) {
                if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_push_fire) {
                    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valid = 0U;
                } else {
                    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_halt_exec) {
                        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valid = 1U;
                    }
                }
                if ((0U == vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes)) {
                    vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state = 3U;
                } else {
                    vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_halt_exec 
                        = (1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_push_fire)));
                }
            } else {
                if ((2U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state))) {
                    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_push_fire) {
                        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valid = 0U;
                    } else {
                        if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_halt_exec) {
                            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valid = 1U;
                        }
                    }
                    if ((0U == vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes)) {
                        vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state = 3U;
                    } else {
                        vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_halt_exec 
                            = (1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_push_fire)));
                    }
                } else {
                    if (((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_reset_driver) 
                         & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cycle_finished))) {
                        vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_value)));
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_push_fire) 
             != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popping))) {
            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_push_fire;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popping))) {
            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushing;
        }
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state 
        = vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_halt_exec 
        = vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_halt_exec;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_halt_exec 
        = vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_halt_exec;
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rValid;
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->AxiLite4BDMA__DOT___zz_axil4Ctrl_bvalid_2;
    vlTOPp->axi4S2M_wvalid = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_valid;
    vlTOPp->axi4S2M_bready = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_b_ready;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_fire 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_valid_driver) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_ready));
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_reset_driver = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_reset_driver 
                                                = (1U 
                                                   & vlTOPp->axil4Ctrl_wdata);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VAxiLite4BDMA::_sequent__TOP__13(VAxiLite4BDMA__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4BDMA::_sequent__TOP__13\n"); );
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cycle_finished = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state))) {
            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cycle_finished = 0U;
        } else {
            if (((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state)) 
                 & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_finish))) {
                vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cycle_finished = 1U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_burst_driver = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                            if ((4U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_burst_driver 
                                                = (3U 
                                                   & vlTOPp->axil4Ctrl_wdata);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_fire 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_valid_driver) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_ready));
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_reset_driver = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((0x10U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_reset_driver 
                                                = (1U 
                                                   & vlTOPp->axil4Ctrl_wdata);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cycle_finished = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state))) {
            vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cycle_finished = 0U;
        } else {
            if (((IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                          >> 0x2cU)) & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo_io_pop_valid) 
                                        & (IData)(vlTOPp->dataM2S_tready)))) {
                vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cycle_finished = 1U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_burst_driver = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                            if ((4U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_burst_driver 
                                                = (3U 
                                                   & vlTOPp->axil4Ctrl_wdata);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state 
        = vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state 
        = vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state 
        = vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state;
    vlTOPp->__Vtableidx3 = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state_string[0U] 
        = vlTOPp->__Vtable3_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state_string
        [vlTOPp->__Vtableidx3][0U];
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state_string[1U] 
        = vlTOPp->__Vtable3_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state_string
        [vlTOPp->__Vtableidx3][1U];
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state_string[2U] 
        = vlTOPp->__Vtable3_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state_string
        [vlTOPp->__Vtableidx3][2U];
    vlTOPp->intrS2M = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cycle_finished;
    vlTOPp->__Vtableidx1 = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__indicatorS2M_string 
        = vlTOPp->__Vtable1_AxiLite4BDMA__DOT__bdma_core__DOT__indicatorS2M_string
        [vlTOPp->__Vtableidx1];
    vlTOPp->__Vtableidx2 = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_state_string 
        = vlTOPp->__Vtable2_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_state_string
        [vlTOPp->__Vtableidx2];
    vlTOPp->__Vtableidx4 = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state_string 
        = vlTOPp->__Vtable4_AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state_string
        [vlTOPp->__Vtableidx4];
    vlTOPp->__Vtableidx5 = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state_string[0U] 
        = vlTOPp->__Vtable5_AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state_string
        [vlTOPp->__Vtableidx5][0U];
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state_string[1U] 
        = vlTOPp->__Vtable5_AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state_string
        [vlTOPp->__Vtableidx5][1U];
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state_string[2U] 
        = vlTOPp->__Vtable5_AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state_string
        [vlTOPp->__Vtableidx5][2U];
    vlTOPp->intrM2S = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cycle_finished;
    vlTOPp->AxiLite4BDMA__DOT__readRsp_data = 0U;
    if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                if ((0x10U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                    if ((8U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                        if ((4U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffffeU 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state));
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffffeU 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_ready));
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffffdU 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cycle_finished) 
                                              << 1U));
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffffeU 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_reset_driver));
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffff0U 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_id_driver));
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                        if ((4U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffffcU 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_burst_driver));
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xc0000000U 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_total_bytes_driver);
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_start_addr_driver;
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffffeU 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_valid_driver));
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                    if ((8U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                        if ((4U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffff8U 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state));
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffffeU 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_ready));
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffffdU 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cycle_finished) 
                                              << 1U));
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffffeU 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_reset_driver));
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffff0U 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_id_driver));
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                        if ((4U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffffcU 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_burst_driver));
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xc0000000U 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_total_bytes_driver);
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_start_addr_driver;
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4BDMA__DOT__readRsp_data 
                                        = ((0xfffffffeU 
                                            & vlTOPp->AxiLite4BDMA__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_valid_driver));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VAxiLite4BDMA::_sequent__TOP__14(VAxiLite4BDMA__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4BDMA::_sequent__TOP__14\n"); );
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_value));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_value));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_value));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_value));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_value));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_value));
    vlTOPp->axil4Ctrl_rdata = vlTOPp->AxiLite4BDMA__DOT__readRsp_data;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_occupancy 
        = ((((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_risingOccupancy) 
             & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ptrMatch)) 
            << 4U) | (0xfU & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_value) 
                              - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_value))));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valid) 
           & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_full)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valid) 
           & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_full)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valid) 
           & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_full)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valid) 
           & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_full)));
    vlTOPp->dataS2M_tready = (1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_full)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_full))))));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core_dma_r_ready 
        = ((~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_full)) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_valve));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_full))))));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_push_fire 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valid) 
           & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_full)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_full))))));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valid) 
           & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_full)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_full))))));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->axi4M2S_rready = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core_dma_r_ready;
    vlTOPp->dataM2S_tvalid = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo_io_pop_valid;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_push_fire) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_push_fire) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core_dma_ar_valid 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_pop_valid) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valve));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_finish 
        = ((3U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state)) 
           & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo_io_pop_valid)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core_dma_aw_valid 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo_io_pop_valid) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valve));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext 
        = (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext 
        = (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext 
        = (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext 
        = (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_valueNext 
        = (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->axi4M2S_arvalid = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core_dma_ar_valid;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_valueNext 
        = (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->axi4S2M_awvalid = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core_dma_aw_valid;
}

VL_INLINE_OPT void VAxiLite4BDMA::_combo__TOP__15(VAxiLite4BDMA__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4BDMA::_combo__TOP__15\n"); );
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_valid 
        = ((IData)(vlTOPp->axil4Ctrl_awvalid) & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rValid)))) {
        vlTOPp->axil4Ctrl_arready = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT___zz_writeJoinEvent_translated_ready 
        = vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT___zz_axil4Ctrl_bvalid_2)))) {
        vlTOPp->AxiLite4BDMA__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__dma_w_fire_1 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_valid) 
           & (IData)(vlTOPp->axi4S2M_wready));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__dma_b_fire 
        = ((IData)(vlTOPp->axi4S2M_bvalid) & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_b_ready));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->dataS2M_tvalid) & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_full)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushing 
        = (((IData)(vlTOPp->axi4M2S_rvalid) & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_valve)) 
           & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_full)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__dma_r_fire 
        = ((IData)(vlTOPp->axi4M2S_rvalid) & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core_dma_r_ready));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo_io_pop_valid) 
           & (IData)(vlTOPp->dataM2S_tready));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_pop_valid) 
           & ((IData)(vlTOPp->axi4M2S_arready) & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valve)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo_io_pop_valid) 
           & ((IData)(vlTOPp->axi4S2M_awready) & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valve)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__dma_ar_fire_2 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core_dma_ar_valid) 
           & (IData)(vlTOPp->axi4M2S_arready));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popping 
        = (((~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
                & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))) 
            & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT___zz_io_pop_valid) 
                  & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_full))))) 
           & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core_dma_ar_valid) 
              & (IData)(vlTOPp->axi4M2S_arready)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popping 
        = (((~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
                & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))) 
            & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT___zz_io_pop_valid) 
                  & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_full))))) 
           & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core_dma_ar_valid) 
              & (IData)(vlTOPp->axi4M2S_arready)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__dma_aw_fire_2 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core_dma_aw_valid) 
           & (IData)(vlTOPp->axi4S2M_awready));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popping 
        = (((~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
                & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))) 
            & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT___zz_io_pop_valid) 
                  & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_full))))) 
           & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core_dma_aw_valid) 
              & (IData)(vlTOPp->axi4S2M_awready)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popping 
        = (((~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
                & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))) 
            & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT___zz_io_pop_valid) 
                  & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_full))))) 
           & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core_dma_aw_valid) 
              & (IData)(vlTOPp->axi4S2M_awready)));
    vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_fire 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_valid) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popping) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popping) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popping) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popping) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popping) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popping) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popping) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->axil4Ctrl_awready = vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_fire;
    vlTOPp->axil4Ctrl_wready = vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_fire;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_value) 
                   + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement)));
}

VL_INLINE_OPT void VAxiLite4BDMA::_sequent__TOP__16(VAxiLite4BDMA__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4BDMA::_sequent__TOP__16\n"); );
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_len 
        = vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_len;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len 
        = vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes 
        = vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes 
        = vlTOPp->__Vdly__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes;
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram
        [vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_valueNext];
    vlTOPp->axi4S2M_wlast = (0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len));
    vlTOPp->axi4S2M_wstrb = ((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len))
                              ? ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__strb_mask) 
                                 & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_strb))
                              : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_strb));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__when_BDMAs2m_l89 
        = (0U == vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes);
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT___zz_when_BDMAs2m_l105 
        = (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes 
           + (3U & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT___zz_when_BDMAs2m_l140_1 
        = ((0xfffU & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address) 
           + (0xfffU & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__when_BDMAm2s_l85 
        = (0U == vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes);
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT___zz_when_BDMAm2s_l101 
        = (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes 
           + (3U & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT___zz_when_BDMAm2s_l136_1 
        = ((0xfffU & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address) 
           + (0xfffU & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram
        [vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext];
    if (vlTOPp->__Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram__v0) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram__v0) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram__v0;
    }
    vlTOPp->dataM2S_tdata = (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0);
    vlTOPp->dataM2S_tid = (0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                           >> 0x20U)));
    vlTOPp->dataM2S_tstrb = (0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                             >> 0x24U)));
    vlTOPp->dataM2S_tkeep = (0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                             >> 0x28U)));
    vlTOPp->dataM2S_tlast = (1U & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                           >> 0x2cU)));
}

VL_INLINE_OPT void VAxiLite4BDMA::_combo__TOP__17(VAxiLite4BDMA__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4BDMA::_combo__TOP__17\n"); );
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_ready 
        = ((((IData)(vlTOPp->axi4S2M_wready) & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_valve)) 
            & (0U != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len))) 
           | (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_leak));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__when_BDMAs2m_l335 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_last) 
           | (((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_valid) 
               & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_ready)) 
              & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
                         >> 0x2cU))));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_valid) 
           & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_ready));
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popping) {
        vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_value) 
                   + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_willIncrement)));
}

void VAxiLite4BDMA::_eval(VAxiLite4BDMA__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4BDMA::_eval\n"); );
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__10(vlSymsp);
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->_sequent__TOP__12(vlSymsp);
        vlTOPp->_sequent__TOP__13(vlSymsp);
        vlTOPp->_sequent__TOP__14(vlSymsp);
    }
    vlTOPp->_combo__TOP__15(vlSymsp);
    vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__16(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__17(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VAxiLite4BDMA::_change_request(VAxiLite4BDMA__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4BDMA::_change_request\n"); );
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}
