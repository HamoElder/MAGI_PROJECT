// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTX.h for the primary calling header

#include "VTX.h"
#include "VTX__Syms.h"

//==========

void VTX::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTX::eval\n"); );
    VTX__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/TX.v", 17, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VTX::_eval_initial_loop(VTX__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/TX.v", 17, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VTX::_sequent__TOP__3(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_sequent__TOP__3\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdly__TX__DOT__stream_package_gen__DOT__strb_buf;
    CData/*7:0*/ __Vdlyvdim0__TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_ram__v0;
    CData/*7:0*/ __Vdlyvdim0__TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ram__v0;
    SData/*8:0*/ __Vdlyvval__TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_ram__v0;
    IData/*31:0*/ __Vdly__TX__DOT__stream_package_gen__DOT__split_core__DOT__data_buf;
    IData/*16:0*/ __Vdlyvval__TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ram__v0;
    // Body
    __Vdly__TX__DOT__stream_package_gen__DOT__split_core__DOT__data_buf 
        = vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__data_buf;
    __Vdly__TX__DOT__stream_package_gen__DOT__strb_buf 
        = vlTOPp->TX__DOT__stream_package_gen__DOT__strb_buf;
    vlTOPp->__Vdlyvset__TX__DOT__streamFifo_7__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ram__v0 = 0U;
    __Vdlyvset__TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ram__v0 = 0U;
    __Vdlyvset__TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ram__v0 = 0U;
    if (vlTOPp->axil4Ctrl_arready) {
        vlTOPp->TX__DOT__axil4Ctrl_ar_rData_prot = vlTOPp->axil4Ctrl_arprot;
    }
    if (vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire) {
        __Vdly__TX__DOT__stream_package_gen__DOT__split_core__DOT__data_buf 
            = vlTOPp->raw_data_tdata;
    } else {
        if (vlTOPp->TX__DOT__stream_package_gen__DOT__split_core_split_data_fire) {
            __Vdly__TX__DOT__stream_package_gen__DOT__split_core__DOT__data_buf 
                = (vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__data_buf 
                   >> 8U);
        }
    }
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_logic_ram_port0 
        = ((0x85U >= (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_valueNext))
            ? vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ram
           [vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_valueNext]
            : vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT____Vxrand1);
    if (vlTOPp->axil4Ctrl_arready) {
        vlTOPp->TX__DOT__axil4Ctrl_ar_rData_addr = vlTOPp->axil4Ctrl_araddr;
    }
    if (vlTOPp->TX__DOT___zz_writeJoinEvent_translated_ready) {
        vlTOPp->TX__DOT___zz_axil4Ctrl_bresp = 0U;
    }
    vlTOPp->TX__DOT__clkCrossing_3__DOT__area_clkO_buf1 
        = vlTOPp->TX__DOT__clkCrossing_3__DOT__area_clkO_buf0;
    vlTOPp->TX__DOT__clkCrossing_2__DOT__area_clkO_buf1 
        = vlTOPp->TX__DOT__clkCrossing_2__DOT__area_clkO_buf0;
    if (vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire) {
        __Vdly__TX__DOT__stream_package_gen__DOT__strb_buf 
            = vlTOPp->raw_data_tstrb;
    } else {
        if (vlTOPp->TX__DOT__stream_package_gen__DOT__split_core_split_data_fire) {
            __Vdly__TX__DOT__stream_package_gen__DOT__strb_buf 
                = (0xfU & ((IData)(vlTOPp->TX__DOT__stream_package_gen__DOT__strb_buf) 
                           >> 1U));
        }
    }
    if (vlTOPp->TX__DOT__streamFifo_7__DOT___zz_1) {
        vlTOPp->TX__DOT__streamFifo_7__DOT____Vlvbound2 
            = (((0x10000U & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                             << 1U)) | ((0x8000U & 
                                         ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                          << 8U)) | 
                                        ((0x4000U & (IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment)) 
                                         | ((0x2000U 
                                             & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                << 7U)) 
                                            | (0x1000U 
                                               & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                  >> 1U)))))) 
               | ((0x800U & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                             << 6U)) | ((0x400U & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                   >> 2U)) 
                                        | ((0x200U 
                                            & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                               << 5U)) 
                                           | ((0x100U 
                                               & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                  >> 3U)) 
                                              | ((0x80U 
                                                  & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                     << 4U)) 
                                                 | ((0x40U 
                                                     & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                        >> 4U)) 
                                                    | ((0x20U 
                                                        & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                           << 3U)) 
                                                       | ((0x10U 
                                                           & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                              >> 5U)) 
                                                          | ((8U 
                                                              & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                                 << 2U)) 
                                                             | ((4U 
                                                                 & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                                    >> 6U)) 
                                                                | ((2U 
                                                                    & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                                       << 1U)) 
                                                                   | (IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_last)))))))))))));
        if ((0xc7U >= (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_value))) {
            vlTOPp->__Vdlyvval__TX__DOT__streamFifo_7__DOT__logic_ram__v0 
                = vlTOPp->TX__DOT__streamFifo_7__DOT____Vlvbound2;
            vlTOPp->__Vdlyvset__TX__DOT__streamFifo_7__DOT__logic_ram__v0 = 1U;
            vlTOPp->__Vdlyvdim0__TX__DOT__streamFifo_7__DOT__logic_ram__v0 
                = vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_value;
        }
    }
    if (vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT___zz_1) {
        vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT____Vlvbound2 
            = (((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_payload_fragment) 
                << 1U) | (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_payload_last));
        if ((0xc7U >= (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_value))) {
            vlTOPp->__Vdlyvval__TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ram__v0 
                = vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT____Vlvbound2;
            vlTOPp->__Vdlyvset__TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ram__v0 = 1U;
            vlTOPp->__Vdlyvdim0__TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ram__v0 
                = vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_value;
        }
    }
    if (vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_1) {
        vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT____Vlvbound2 
            = ((0x1feU & (vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__data_buf 
                          << 1U)) | (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_payload_last));
        if ((0xc7U >= (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value))) {
            vlTOPp->__Vdlyvval__TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ram__v0 
                = vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT____Vlvbound2;
            vlTOPp->__Vdlyvset__TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ram__v0 = 1U;
            vlTOPp->__Vdlyvdim0__TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ram__v0 
                = vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value;
        }
    }
    if (vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_1) {
        vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT____Vlvbound2 
            = vlTOPp->TX__DOT__streamFifo_7__DOT___zz_logic_ram_port0;
        if ((0x85U >= (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value))) {
            __Vdlyvval__TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ram__v0 
                = vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT____Vlvbound2;
            __Vdlyvset__TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ram__v0 = 1U;
            __Vdlyvdim0__TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ram__v0 
                = vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value;
        }
    }
    if (vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_1) {
        vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT____Vlvbound2 
            = (((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_payload_fragment) 
                << 1U) | (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_payload_last));
        if ((0xc7U >= (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_value))) {
            vlTOPp->__Vdlyvval__TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ram__v0 
                = vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT____Vlvbound2;
            vlTOPp->__Vdlyvset__TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ram__v0 = 1U;
            vlTOPp->__Vdlyvdim0__TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ram__v0 
                = vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_value;
        }
    }
    if (vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT___zz_1) {
        vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT____Vlvbound2 
            = ((0x1feU & (((IData)(vlTOPp->TX__DOT__phy_tx_crc__DOT__emitCrc)
                            ? ((0U == (IData)(vlTOPp->TX__DOT__phy_tx_crc__DOT__counter))
                                ? vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1_result
                                : ((1U == (IData)(vlTOPp->TX__DOT__phy_tx_crc__DOT__counter))
                                    ? (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1_result 
                                       >> 8U) : ((2U 
                                                  == (IData)(vlTOPp->TX__DOT__phy_tx_crc__DOT__counter))
                                                  ? 
                                                 (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1_result 
                                                  >> 0x10U)
                                                  : 
                                                 (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1_result 
                                                  >> 0x18U))))
                            : ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 1U)) << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_payload_last));
        if ((0xc7U >= (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_value))) {
            __Vdlyvval__TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_ram__v0 
                = vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT____Vlvbound2;
            __Vdlyvset__TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_ram__v0 = 1U;
            __Vdlyvdim0__TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_ram__v0 
                = vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_value;
        }
    }
    vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT___zz_logic_ram_port0 
        = ((0xc7U >= (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_valueNext))
            ? vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_ram
           [vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_valueNext]
            : (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT____Vxrand1));
    if (vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT___zz_1) {
        vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT____Vlvbound2 
            = (((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data) 
                << 1U) | (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__raw_data_payload_last_regNext));
        if ((0xc7U >= (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_value))) {
            vlTOPp->__Vdlyvval__TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ram__v0 
                = vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT____Vlvbound2;
            vlTOPp->__Vdlyvset__TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ram__v0 = 1U;
            vlTOPp->__Vdlyvdim0__TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ram__v0 
                = vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_value;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1_init_state_valid)))) {
        if (vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1_scram_data_ready) {
            vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_data 
                = (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_15) 
                    << 0xfU) | (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_14) 
                                 << 0xeU) | (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_13) 
                                              << 0xdU) 
                                             | (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_12) 
                                                 << 0xcU) 
                                                | (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_11) 
                                                    << 0xbU) 
                                                   | (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_10) 
                                                       << 0xaU) 
                                                      | (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_9) 
                                                          << 9U) 
                                                         | (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_8) 
                                                             << 8U) 
                                                            | (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_7) 
                                                                << 7U) 
                                                               | (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_6) 
                                                                   << 6U) 
                                                                  | (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_5) 
                                                                      << 5U) 
                                                                     | (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_4) 
                                                                         << 4U) 
                                                                        | (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_3) 
                                                                            << 3U) 
                                                                           | (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_2) 
                                                                               << 2U) 
                                                                              | (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_0))))))))))))))));
        }
    }
    if (vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1_init_state_valid) {
        vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state = 0x7fU;
    } else {
        if (vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1_scram_data_ready) {
            vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state 
                = ((0x7eU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14) 
                             << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_15));
        }
    }
    vlTOPp->TX__DOT__stream_package_gen__DOT__strb_buf 
        = __Vdly__TX__DOT__stream_package_gen__DOT__strb_buf;
    vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__data_buf 
        = __Vdly__TX__DOT__stream_package_gen__DOT__split_core__DOT__data_buf;
    if (__Vdlyvset__TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ram__v0) {
        vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ram[__Vdlyvdim0__TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ram__v0] 
            = __Vdlyvval__TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ram__v0;
    }
    if (__Vdlyvset__TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_ram__v0) {
        vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_ram[__Vdlyvdim0__TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_ram__v0] 
            = __Vdlyvval__TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VTX::_sequent__TOP__4(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_sequent__TOP__4\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axil4Ctrl_bresp = vlTOPp->TX__DOT___zz_axil4Ctrl_bresp;
    vlTOPp->TX__DOT__clkCrossing_3__DOT__area_clkO_buf0 
        = vlTOPp->TX__DOT__clkCrossing_3__DOT__area_clkI_reg;
    vlTOPp->TX__DOT__clkCrossing_2__DOT__area_clkO_buf0 
        = vlTOPp->TX__DOT__clkCrossing_2__DOT__area_clkI_reg;
    vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment 
        = (0xffffU & (vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT___zz_logic_ram_port0 
                      >> 1U));
    if (vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid) {
        vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data 
            = (((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0) 
                << 8U) | (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1));
    }
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_0 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0 
        = (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state) 
            << 1U) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_0));
    vlTOPp->TX__DOT__clkCrossing_3__DOT__area_clkI_reg 
        = vlTOPp->TX__DOT__stream_package_gen__DOT__pkg_slices_cnt;
    vlTOPp->TX__DOT__clkCrossing_2__DOT__area_clkI_reg 
        = vlTOPp->TX__DOT_____05Fslices_limit_driver;
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_1 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_1));
    if ((0U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
        if (((IData)(vlTOPp->TX__DOT__writeJoinEvent_valid) 
             & (IData)(vlTOPp->TX__DOT___zz_writeJoinEvent_translated_ready))) {
            vlTOPp->TX__DOT_____05Fslices_limit_driver 
                = (0x7fU & vlTOPp->axil4Ctrl_wdata);
        }
    }
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_2 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_2));
    vlTOPp->TX__DOT__readRsp_data = 0U;
    if ((0U == (IData)(vlTOPp->TX__DOT__axil4Ctrl_ar_rData_addr))) {
        vlTOPp->TX__DOT__readRsp_data = ((0xffffff80U 
                                          & vlTOPp->TX__DOT__readRsp_data) 
                                         | (IData)(vlTOPp->TX__DOT_____05Fslices_limit_driver));
    } else {
        if ((4U == (IData)(vlTOPp->TX__DOT__axil4Ctrl_ar_rData_addr))) {
            vlTOPp->TX__DOT__readRsp_data = ((0xffffff80U 
                                              & vlTOPp->TX__DOT__readRsp_data) 
                                             | (IData)(vlTOPp->TX__DOT__clkCrossing_3__DOT__area_clkO_buf1));
        }
    }
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_3 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2) 
                            >> 3U)));
    vlTOPp->axil4Ctrl_rdata = vlTOPp->TX__DOT__readRsp_data;
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_3));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_4 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_4));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_5 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_5));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_6 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_6));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_7 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_7));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_8 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_8));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_9 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_9));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_10 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_10));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_11 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_11));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_12 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_12));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_13 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_13));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_14 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13) 
                            >> 3U)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14 
        = ((0xfeU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13) 
                     << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_14));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_15 
        = (1U & (((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14) 
                  >> 6U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14) 
                            >> 3U)));
}

VL_INLINE_OPT void VTX::_sequent__TOP__6(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_sequent__TOP__6\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TX__DOT__stream_package_gen__DOT__split_core__DOT__cnt 
        = vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__cnt;
    vlTOPp->__Vdly__TX__DOT__phy_tx_scrambler__DOT__scrambler_status 
        = vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status;
    vlTOPp->__Vdly__TX__DOT__phy_header_extender__DOT__counter 
        = vlTOPp->TX__DOT__phy_header_extender__DOT__counter;
    vlTOPp->__Vdly__TX__DOT__phy_tx_padder__DOT__counter 
        = vlTOPp->TX__DOT__phy_tx_padder__DOT__counter;
    vlTOPp->__Vdly__TX__DOT__phy_header_extender__DOT__header_status 
        = vlTOPp->TX__DOT__phy_header_extender__DOT__header_status;
    vlTOPp->__Vdly__TX__DOT__phy_tx_crc__DOT__counter 
        = vlTOPp->TX__DOT__phy_tx_crc__DOT__counter;
    vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_last 
        = (1U & ((~ (IData)(vlTOPp->reset)) & vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT___zz_logic_ram_port0));
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__stream_package_gen__DOT__raw_data_last = 0U;
    } else {
        if (vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire) {
            vlTOPp->TX__DOT__stream_package_gen__DOT__raw_data_last 
                = vlTOPp->raw_data_tlast;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__axil4Ctrl_ar_rValid = 0U;
    } else {
        if (vlTOPp->axil4Ctrl_arready) {
            vlTOPp->TX__DOT__axil4Ctrl_ar_rValid = vlTOPp->axil4Ctrl_arvalid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_valid = 0U;
    } else {
        if (vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1_init_state_valid) {
            vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_valid = 0U;
        } else {
            if (vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1_scram_data_ready) {
                vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_valid = 1U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__stream_package_gen__DOT__pkg_slices_cnt = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire)))) {
            if (vlTOPp->TX__DOT__stream_package_gen__DOT__split_core_split_data_fire) {
                vlTOPp->TX__DOT__stream_package_gen__DOT__pkg_slices_cnt 
                    = ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_payload_last)
                        ? 0U : (IData)(vlTOPp->TX__DOT__stream_package_gen__DOT___zz_pkg_slices_cnt));
            }
        }
    }
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid));
    vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo_io_pop_valid));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TX__DOT__stream_package_gen__DOT__split_core__DOT__cnt = 0U;
    } else {
        if (vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire) {
            vlTOPp->__Vdly__TX__DOT__stream_package_gen__DOT__split_core__DOT__cnt = 4U;
        } else {
            if (vlTOPp->TX__DOT__stream_package_gen__DOT__split_core_split_data_fire) {
                vlTOPp->__Vdly__TX__DOT__stream_package_gen__DOT__split_core__DOT__cnt 
                    = (7U & ((IData)(vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__cnt) 
                             - (IData)(1U)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT___zz_axil4Ctrl_bvalid_2 = 0U;
    } else {
        if (vlTOPp->TX__DOT___zz_writeJoinEvent_translated_ready) {
            vlTOPp->TX__DOT___zz_axil4Ctrl_bvalid_2 
                = vlTOPp->TX__DOT__writeJoinEvent_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo_io_pop_valid))) {
            vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TX__DOT__phy_tx_scrambler__DOT__scrambler_status = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
            if (vlTOPp->TX__DOT__phy_header_extender_result_data_fifo_io_pop_valid) {
                vlTOPp->__Vdly__TX__DOT__phy_tx_scrambler__DOT__scrambler_status = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
                if ((((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo_io_pop_valid) 
                      & (IData)(vlTOPp->TX__DOT__phy_tx_scrambler_raw_data_ready)) 
                     & vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT___zz_logic_ram_port0)) {
                    vlTOPp->__Vdly__TX__DOT__phy_tx_scrambler__DOT__scrambler_status = 2U;
                }
            } else {
                vlTOPp->__Vdly__TX__DOT__phy_tx_scrambler__DOT__scrambler_status = 0U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TX__DOT__phy_header_extender__DOT__counter = 0U;
    } else {
        if ((((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_valid) 
              & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_full))) 
             & (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_payload_last))) {
            vlTOPp->__Vdly__TX__DOT__phy_header_extender__DOT__counter = 0U;
        } else {
            if (((IData)(vlTOPp->TX__DOT__streamFifo_7_io_pop_valid) 
                 & (IData)(vlTOPp->TX__DOT__phy_header_extender_raw_data_ready))) {
                vlTOPp->__Vdly__TX__DOT__phy_header_extender__DOT__counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__counter)));
            }
        }
    }
    vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_value)));
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__phy_tx_padder__DOT__raw_data_payload_first = 1U;
    } else {
        if (((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo_io_pop_valid) 
             & (IData)(vlTOPp->TX__DOT__phy_tx_padder_raw_data_ready))) {
            vlTOPp->TX__DOT__phy_tx_padder__DOT__raw_data_payload_first 
                = (1U & (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_logic_ram_port0));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__streamFifo_7__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushing) 
             != (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popping))) {
            vlTOPp->TX__DOT__streamFifo_7__DOT__logic_risingOccupancy 
                = vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popping))) {
            vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popping))) {
            vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TX__DOT__phy_tx_padder__DOT__counter = 0U;
    } else {
        if (vlTOPp->TX__DOT__phy_tx_padder__DOT__when_PhyTx_l55) {
            vlTOPp->__Vdly__TX__DOT__phy_tx_padder__DOT__counter 
                = (7U & ((IData)(1U) + (IData)(vlTOPp->TX__DOT__phy_tx_padder__DOT__counter)));
        }
        if ((((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_valid) 
              & (~ (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_full))) 
             & (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_payload_last))) {
            vlTOPp->__Vdly__TX__DOT__phy_tx_padder__DOT__counter = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TX__DOT__phy_header_extender__DOT__header_status = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))) {
            if (vlTOPp->TX__DOT__phy_header_extender__DOT__emitHeader) {
                vlTOPp->__Vdly__TX__DOT__phy_header_extender__DOT__header_status = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))) {
                if ((1U & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_full)))) {
                    vlTOPp->__Vdly__TX__DOT__phy_header_extender__DOT__header_status = 2U;
                }
            } else {
                if ((((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_valid) 
                      & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_full))) 
                     & (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_payload_last))) {
                    vlTOPp->__Vdly__TX__DOT__phy_header_extender__DOT__header_status = 0U;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popping))) {
            vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popping))) {
            vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_risingOccupancy 
                = vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popping))) {
            vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushing;
        }
    }
    vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_valueNext));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->TX__DOT__streamFifo_7__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_value)));
}

VL_INLINE_OPT void VTX::_sequent__TOP__7(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_sequent__TOP__7\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_valueNext));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value)));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_value)));
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state = 0xffffffffU;
    } else {
        if ((((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_valid) 
              & (~ (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_full))) 
             & (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_payload_last))) {
            vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state = 0xffffffffU;
        } else {
            if (((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo_io_pop_valid) 
                 & (IData)(vlTOPp->TX__DOT__phy_tx_crc_raw_data_ready))) {
                vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                    = vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TX__DOT__phy_tx_crc__DOT__counter = 0U;
    } else {
        if (vlTOPp->TX__DOT__phy_tx_crc__DOT__emitCrc) {
            if ((1U & (~ (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_full)))) {
                vlTOPp->__Vdly__TX__DOT__phy_tx_crc__DOT__counter 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->TX__DOT__phy_tx_crc__DOT__counter)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__r_enc_buf = 0U;
    } else {
        if (vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid) {
            vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__r_enc_buf 
                = (0x7fU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                            >> 1U));
        }
    }
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__raw_data_payload_last_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__emitEncoding));
    vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__cnt 
        = vlTOPp->__Vdly__TX__DOT__stream_package_gen__DOT__split_core__DOT__cnt;
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status 
        = vlTOPp->__Vdly__TX__DOT__phy_tx_scrambler__DOT__scrambler_status;
    vlTOPp->TX__DOT__phy_header_extender__DOT__counter 
        = vlTOPp->__Vdly__TX__DOT__phy_header_extender__DOT__counter;
    vlTOPp->TX__DOT__phy_tx_padder__DOT__counter = vlTOPp->__Vdly__TX__DOT__phy_tx_padder__DOT__counter;
    vlTOPp->TX__DOT__phy_header_extender__DOT__header_status 
        = vlTOPp->__Vdly__TX__DOT__phy_header_extender__DOT__header_status;
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->TX__DOT__axil4Ctrl_ar_rValid;
    vlTOPp->TX__DOT__stream_package_gen__DOT___zz_pkg_slices_cnt 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->TX__DOT__stream_package_gen__DOT__pkg_slices_cnt)));
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_payload_last 
        = (((IData)(vlTOPp->TX__DOT__stream_package_gen__DOT__pkg_slices_cnt) 
            == (0x7fU & ((IData)(vlTOPp->TX__DOT__clkCrossing_2__DOT__area_clkO_buf1) 
                         - (IData)(1U)))) | ((IData)(vlTOPp->TX__DOT__stream_package_gen__DOT__raw_data_last) 
                                             & (1U 
                                                == (IData)(vlTOPp->TX__DOT__stream_package_gen__DOT__strb_buf))));
    vlTOPp->raw_data_tready = (0U == (IData)(vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__cnt));
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->TX__DOT___zz_axil4Ctrl_bvalid_2;
    vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->TX__DOT__phy_tx_padder__DOT__fill = ((0U 
                                                  != (IData)(vlTOPp->TX__DOT__phy_tx_padder__DOT__counter)) 
                                                 & (IData)(vlTOPp->TX__DOT__phy_tx_padder__DOT__raw_data_payload_first));
    vlTOPp->TX__DOT__phy_header_extender_result_data_payload_fragment = 0U;
    if ((0U != (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))) {
        vlTOPp->TX__DOT__phy_header_extender_result_data_payload_fragment 
            = (0xffffU & ((1U == (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))
                           ? (0x5500U | (0xffU & ((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__counter) 
                                                  << 1U)))
                           : (vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_logic_ram_port0 
                              >> 1U)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__phy_header_extender__DOT__emitHeader = 0U;
    } else {
        if ((((IData)(vlTOPp->TX__DOT__streamFifo_7_io_pop_valid) 
              & (IData)(vlTOPp->TX__DOT__phy_header_extender_raw_data_ready)) 
             & vlTOPp->TX__DOT__streamFifo_7__DOT___zz_logic_ram_port0)) {
            vlTOPp->TX__DOT__phy_header_extender__DOT__emitHeader = 1U;
        }
        if ((((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_valid) 
              & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_full))) 
             & (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_payload_last))) {
            vlTOPp->TX__DOT__phy_header_extender__DOT__emitHeader = 0U;
        }
    }
    vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_valueNext));
    vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT___zz_result_2 
        = ((0x100000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                             >> 0xbU)) << 0x14U)) | 
           ((0x80000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                             >> 0xcU)) << 0x13U)) | 
            ((0x40000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                              >> 0xdU)) << 0x12U)) 
             | ((0x20000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                 >> 0xeU)) << 0x11U)) 
                | ((0x10000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                    >> 0xfU)) << 0x10U)) 
                   | ((0x8000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                      >> 0x10U)) << 0xfU)) 
                      | ((0x4000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                         >> 0x11U)) 
                                     << 0xeU)) | ((0x2000U 
                                                   & ((~ 
                                                       (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                        >> 0x12U)) 
                                                      << 0xdU)) 
                                                  | ((0x1000U 
                                                      & ((~ 
                                                          (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                           >> 0x13U)) 
                                                         << 0xcU)) 
                                                     | ((0x800U 
                                                         & ((~ 
                                                             (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                              >> 0x14U)) 
                                                            << 0xbU)) 
                                                        | ((0x400U 
                                                            & ((~ 
                                                                (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                 >> 0x15U)) 
                                                               << 0xaU)) 
                                                           | ((0x200U 
                                                               & ((~ 
                                                                   (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                    >> 0x16U)) 
                                                                  << 9U)) 
                                                              | ((0x100U 
                                                                  & ((~ 
                                                                      (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                       >> 0x17U)) 
                                                                     << 8U)) 
                                                                 | ((0x80U 
                                                                     & ((~ 
                                                                         (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                          >> 0x18U)) 
                                                                        << 7U)) 
                                                                    | ((0x40U 
                                                                        & ((~ 
                                                                            (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                             >> 0x19U)) 
                                                                           << 6U)) 
                                                                       | ((0x20U 
                                                                           & ((~ 
                                                                               (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1aU)) 
                                                                              << 5U)) 
                                                                          | ((0x10U 
                                                                              & ((~ 
                                                                                (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                             | ((8U 
                                                                                & ((~ 
                                                                                (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                                >> 0x1fU)))))))))))))))))))))));
}

VL_INLINE_OPT void VTX::_sequent__TOP__8(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_sequent__TOP__8\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__phy_tx_crc__DOT__emitCrc = 0U;
    } else {
        if ((((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo_io_pop_valid) 
              & (IData)(vlTOPp->TX__DOT__phy_tx_crc_raw_data_ready)) 
             & (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_logic_ram_port0))) {
            vlTOPp->TX__DOT__phy_tx_crc__DOT__emitCrc = 1U;
        }
        if ((((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_valid) 
              & (~ (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_full))) 
             & (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_payload_last))) {
            vlTOPp->TX__DOT__phy_tx_crc__DOT__emitCrc = 0U;
        }
        if ((1U & (~ (IData)(vlTOPp->TX__DOT__phy_tx_crc__DOT__when_PhyTx_l23)))) {
            if ((3U == (IData)(vlTOPp->TX__DOT__phy_tx_crc__DOT__counter))) {
                if ((1U & (~ (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_full)))) {
                    vlTOPp->TX__DOT__phy_tx_crc__DOT__emitCrc = 0U;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__phy_tx_encoder__DOT__emitEncoding = 0U;
    } else {
        if (vlTOPp->TX__DOT__phy_tx_encoder__DOT__when_PhyTx_l79) {
            vlTOPp->TX__DOT__phy_tx_encoder__DOT__emitEncoding = 1U;
        }
        if (vlTOPp->TX__DOT__phy_tx_encoder__DOT__when_PhyTx_l79_1) {
            vlTOPp->TX__DOT__phy_tx_encoder__DOT__emitEncoding = 0U;
        }
    }
    vlTOPp->TX__DOT__phy_header_extender_result_data_payload_last = 0U;
    if ((0U != (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))) {
        if ((1U != (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))) {
            vlTOPp->TX__DOT__phy_header_extender_result_data_payload_last 
                = (1U & vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_logic_ram_port0);
        }
    }
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1_result 
        = ((0x80000000U & ((~ vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state) 
                           << 0x1fU)) | ((0x40000000U 
                                          & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                 >> 1U)) 
                                             << 0x1eU)) 
                                         | ((0x20000000U 
                                             & ((~ 
                                                 (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                  >> 2U)) 
                                                << 0x1dU)) 
                                            | ((0x10000000U 
                                                & ((~ 
                                                    (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                     >> 3U)) 
                                                   << 0x1cU)) 
                                               | ((0x8000000U 
                                                   & ((~ 
                                                       (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                        >> 4U)) 
                                                      << 0x1bU)) 
                                                  | ((0x4000000U 
                                                      & ((~ 
                                                          (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                           >> 5U)) 
                                                         << 0x1aU)) 
                                                     | ((0x2000000U 
                                                         & ((~ 
                                                             (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                              >> 6U)) 
                                                            << 0x19U)) 
                                                        | ((0x1000000U 
                                                            & ((~ 
                                                                (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                 >> 7U)) 
                                                               << 0x18U)) 
                                                           | ((0x800000U 
                                                               & ((~ 
                                                                   (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                    >> 8U)) 
                                                                  << 0x17U)) 
                                                              | ((0x400000U 
                                                                  & ((~ 
                                                                      (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                       >> 9U)) 
                                                                     << 0x16U)) 
                                                                 | ((0x200000U 
                                                                     & ((~ 
                                                                         (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                                                          >> 0xaU)) 
                                                                        << 0x15U)) 
                                                                    | vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT___zz_result_2)))))))))));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__counter = vlTOPp->__Vdly__TX__DOT__phy_tx_crc__DOT__counter;
    vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__streamFifo_7__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__when_PhyTx_l23 
        = (1U & (~ (IData)(vlTOPp->TX__DOT__phy_tx_crc__DOT__emitCrc)));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_payload_last = 0U;
    if (vlTOPp->TX__DOT__phy_tx_crc__DOT__emitCrc) {
        if ((3U == (IData)(vlTOPp->TX__DOT__phy_tx_crc__DOT__counter))) {
            vlTOPp->TX__DOT__phy_tx_crc_result_data_payload_last = 1U;
        }
    }
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__emitEncoding)
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U)));
    vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__streamFifo_7__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0 
        = ((0x80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 7U)) | (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__r_enc_buf));
    vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_full))))));
    vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data_valid_1) 
           & (~ (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__phy_tx_crc_raw_data_ready = (1U 
                                                  & ((~ (IData)(vlTOPp->TX__DOT__phy_tx_crc__DOT__emitCrc)) 
                                                     & (~ (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_full))));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_full))))));
    vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushing 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_valid_1) 
           & (~ (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_full)));
    vlTOPp->TX__DOT__streamFifo_7_io_pop_valid = (1U 
                                                  & ((~ 
                                                      ((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_ptrMatch) 
                                                       & (~ (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_risingOccupancy)))) 
                                                     & (~ 
                                                        ((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT___zz_io_pop_valid) 
                                                         & (~ (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_full))))));
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo_io_pop_ready = 0U;
    if ((0U != (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))) {
        if ((1U != (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))) {
            vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo_io_pop_ready 
                = (1U & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_full)));
        }
    }
    vlTOPp->TX__DOT__phy_header_extender_result_data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_full))))));
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushing 
        = (((0U != (IData)(vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__cnt)) 
            & (IData)(vlTOPp->TX__DOT__stream_package_gen__DOT__strb_buf)) 
           & (~ (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_full))))));
    vlTOPp->TX__DOT__stream_package_gen__DOT__split_core_split_data_fire 
        = ((0U != (IData)(vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__cnt)) 
           & (~ (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__phy_header_extender_raw_data_ready 
        = (1U & ((~ (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_full)) 
                 & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__emitHeader))));
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_full))))));
    vlTOPp->TX__DOT__phy_tx_padder_raw_data_ready = 
        (1U & ((~ (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_full)) 
               & (~ (IData)(vlTOPp->TX__DOT__phy_tx_padder__DOT__fill))));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_full))))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1 
        = ((0x80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 6U)) | (0x7fU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                         >> 1U)));
    vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo_io_pop_valid) {
        vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__when_PhyTx_l79 
        = (((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo_io_pop_valid) 
            & (~ (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__emitEncoding))) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT___zz_logic_ram_port0));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__emitEncoding) 
           | (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo_io_pop_valid));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo_io_pop_valid) 
           & (~ (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__emitEncoding)));
}

VL_INLINE_OPT void VTX::_sequent__TOP__9(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_sequent__TOP__9\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TX__DOT__streamFifo_7__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushing) {
        vlTOPp->TX__DOT__streamFifo_7__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushing) {
        vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushing 
        = (((IData)(vlTOPp->TX__DOT__streamFifo_7_io_pop_valid) 
            & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__emitHeader))) 
           & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_full)));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1_init_state_valid 
        = (1U & ((0U == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))
                  ? (~ (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo_io_pop_valid))
                  : (1U != (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))));
    vlTOPp->TX__DOT__phy_tx_scrambler_result_data_valid = 0U;
    if ((0U != (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
        if ((1U == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
            vlTOPp->TX__DOT__phy_tx_scrambler_result_data_valid 
                = ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_valid) 
                   & (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo_io_pop_valid));
        }
    }
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_padder_result_data_valid 
        = ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo_io_pop_valid) 
           & (~ (IData)(vlTOPp->TX__DOT__phy_tx_padder__DOT__fill)));
    if (vlTOPp->TX__DOT__phy_tx_padder__DOT__fill) {
        vlTOPp->TX__DOT__phy_tx_padder_result_data_valid = 1U;
    }
    vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__streamFifo_7_io_pop_valid) 
           & (IData)(vlTOPp->TX__DOT__phy_header_extender_raw_data_ready));
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo_io_pop_valid) 
           & (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo_io_pop_ready));
    vlTOPp->TX__DOT__phy_header_extender_result_data_valid = 0U;
    if ((0U != (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))) {
        vlTOPp->TX__DOT__phy_header_extender_result_data_valid 
            = ((1U == (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status)) 
               | (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo_io_pop_valid));
    }
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo_io_pop_valid) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_padder_raw_data_ready));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo_io_pop_valid) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_crc_raw_data_ready));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_valid = 
        ((IData)(vlTOPp->TX__DOT__phy_tx_crc__DOT__emitCrc) 
         | (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo_io_pop_valid));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2 
        = ((0x80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 5U)) | (0x7fU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                         >> 1U)));
    vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_valueNext 
        = (((0xc7U == (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__when_PhyTx_l79_1 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__emitEncoding));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popping) {
        vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_valueNext 
        = (((0xc7U == (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->coded_data_valid = vlTOPp->TX__DOT__phy_tx_scrambler_result_data_valid;
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_valueNext 
        = (((0xc7U == (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->TX__DOT__phy_tx_padder__DOT__when_PhyTx_l55 
        = ((7U != (IData)(vlTOPp->TX__DOT__phy_tx_padder__DOT__counter)) 
           & ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_valid) 
              & (~ (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_full))));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_valid) 
           & (~ (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popping) {
        vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popping) {
        vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_valid) 
           & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popping) {
        vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popping) {
        vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_valid) 
           & (~ (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3 
        = ((0x80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 4U)) | (0x7fU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                         >> 1U)));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_valueNext 
        = (((0xc7U == (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_willIncrement))));
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_valueNext 
        = (((0x85U == (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_valueNext 
        = (((0x85U == (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_willIncrement))));
    vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4 
        = ((0x80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 3U)) | (0x7fU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                         >> 1U)));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_valueNext 
        = (((0xc7U == (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_valueNext 
        = (((0xc7U == (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_valueNext 
        = (((0xc7U == (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5 
        = ((0x80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 2U)) | (0x7fU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                         >> 1U)));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6 
        = ((0x80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment) 
                     << 1U)) | (0x7fU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                         >> 1U)));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7 
        = ((0x80U & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment)) 
           | (0x7fU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                       >> 1U)));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xfeU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (1U & ((((((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                        >> 1U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                  >> 2U)) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                             >> 4U)) 
                     ^ ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                        >> 5U)) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                   >> 7U))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xfdU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (2U & (((((0xfffffffeU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1)) 
                       ^ (0x7ffffffeU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                         >> 1U))) ^ 
                      (0x1ffffffeU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                      >> 3U))) ^ (0xffffffeU 
                                                  & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                                     >> 4U))) 
                    ^ (0x3fffffeU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                     >> 6U)))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xfbU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (4U & (((((0xfffffffcU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                       << 1U)) ^ (0xfffffffcU 
                                                  & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2))) 
                      ^ (0x3ffffffcU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                        >> 2U))) ^ 
                     (0x1ffffffcU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                     >> 3U))) ^ (0x7fffffcU 
                                                 & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                                    >> 5U)))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xf7U & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (8U & (((((0xfffffff8U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                       << 2U)) ^ (0xfffffff8U 
                                                  & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                                     << 1U))) 
                      ^ (0x7ffffff8U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                        >> 1U))) ^ 
                     (0x3ffffff8U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                     >> 2U))) ^ (0xffffff8U 
                                                 & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                                    >> 4U)))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xefU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (0x10U & (((((0xfffffff0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                          << 3U)) ^ 
                          (0xfffffff0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                          << 2U))) 
                         ^ (0xfffffff0U & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4))) 
                        ^ (0x7ffffff0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                          >> 1U))) 
                       ^ (0x1ffffff0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                         >> 3U)))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xdfU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (0x20U & (((((0xffffffe0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                          << 4U)) ^ 
                          (0xffffffe0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                          << 3U))) 
                         ^ (0xffffffe0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                           << 1U))) 
                        ^ (0xffffffe0U & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5))) 
                       ^ (0x3fffffe0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                         >> 2U)))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0xbfU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (0x40U & (((((0xffffffc0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                          << 5U)) ^ 
                          (0xffffffc0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                          << 4U))) 
                         ^ (0xffffffc0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                           << 2U))) 
                        ^ (0xffffffc0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                          << 1U))) 
                       ^ (0x7fffffc0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                         >> 1U)))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0 
        = ((0x7fU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0)) 
           | (0x80U & (((((0xffffff80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 6U)) ^ 
                          (0xffffff80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 5U))) 
                         ^ (0xffffff80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                           << 3U))) 
                        ^ (0xffffff80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 2U))) 
                       ^ (0xffffff80U & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7)))));
}

VL_INLINE_OPT void VTX::_sequent__TOP__10(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_sequent__TOP__10\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xfeU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (1U & ((((((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                        >> 1U) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                  >> 4U)) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                             >> 5U)) 
                     ^ ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                        >> 6U)) ^ ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                   >> 7U))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xfdU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (2U & (((((0xfffffffeU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1)) 
                       ^ (0x1ffffffeU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                         >> 3U))) ^ 
                      (0xffffffeU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                     >> 4U))) ^ (0x7fffffeU 
                                                 & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                                    >> 5U))) 
                    ^ (0x3fffffeU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                     >> 6U)))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xfbU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (4U & (((((0xfffffffcU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                       << 1U)) ^ (0x3ffffffcU 
                                                  & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                                     >> 2U))) 
                      ^ (0x1ffffffcU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                        >> 3U))) ^ 
                     (0xffffffcU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                    >> 4U))) ^ (0x7fffffcU 
                                                & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                                   >> 5U)))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xf7U & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (8U & (((((0xfffffff8U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                       << 2U)) ^ (0x7ffffff8U 
                                                  & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                                     >> 1U))) 
                      ^ (0x3ffffff8U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                        >> 2U))) ^ 
                     (0x1ffffff8U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                     >> 3U))) ^ (0xffffff8U 
                                                 & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                                    >> 4U)))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xefU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (0x10U & (((((0xfffffff0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                          << 3U)) ^ 
                          (0xfffffff0U & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4))) 
                         ^ (0x7ffffff0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                           >> 1U))) 
                        ^ (0x3ffffff0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                          >> 2U))) 
                       ^ (0x1ffffff0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                         >> 3U)))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xdfU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (0x20U & (((((0xffffffe0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                          << 4U)) ^ 
                          (0xffffffe0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                          << 1U))) 
                         ^ (0xffffffe0U & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5))) 
                        ^ (0x7fffffe0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                          >> 1U))) 
                       ^ (0x3fffffe0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                         >> 2U)))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0xbfU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (0x40U & (((((0xffffffc0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                          << 5U)) ^ 
                          (0xffffffc0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                          << 2U))) 
                         ^ (0xffffffc0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                           << 1U))) 
                        ^ (0xffffffc0U & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6))) 
                       ^ (0x7fffffc0U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                         >> 1U)))));
    vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1 
        = ((0x7fU & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1)) 
           | (0x80U & (((((0xffffff80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 6U)) ^ 
                          (0xffffff80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 3U))) 
                         ^ (0xffffff80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                           << 2U))) 
                        ^ (0xffffff80U & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                          << 1U))) 
                       ^ (0xffffff80U & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7)))));
}

VL_INLINE_OPT void VTX::_sequent__TOP__16(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_sequent__TOP__16\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT___zz_logic_ram_port0 
        = ((0xc7U >= (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_valueNext))
            ? vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ram
           [vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_valueNext]
            : vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT____Vxrand1);
    vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT___zz_logic_ram_port0 
        = ((0xc7U >= (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_valueNext))
            ? vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ram
           [vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_valueNext]
            : vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT____Vxrand1);
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_logic_ram_port0 
        = ((0xc7U >= (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_valueNext))
            ? vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ram
           [vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_valueNext]
            : (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT____Vxrand1));
    vlTOPp->TX__DOT__streamFifo_7__DOT___zz_logic_ram_port0 
        = ((0xc7U >= (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_valueNext))
            ? vlTOPp->TX__DOT__streamFifo_7__DOT__logic_ram
           [vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_valueNext]
            : vlTOPp->TX__DOT__streamFifo_7__DOT____Vxrand1);
    vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_logic_ram_port0 
        = ((0xc7U >= (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_valueNext))
            ? vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ram
           [vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_valueNext]
            : (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT____Vxrand1));
    if (vlTOPp->__Vdlyvset__TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ram__v0) {
        vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ram__v0) {
        vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ram__v0) {
        vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TX__DOT__streamFifo_7__DOT__logic_ram__v0) {
        vlTOPp->TX__DOT__streamFifo_7__DOT__logic_ram[vlTOPp->__Vdlyvdim0__TX__DOT__streamFifo_7__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__TX__DOT__streamFifo_7__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ram__v0) {
        vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ram__v0;
    }
    vlTOPp->coded_data_payload_last = (1U & vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT___zz_logic_ram_port0);
    vlTOPp->coded_data_payload_fragment = (0xffffU 
                                           & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_data) 
                                              ^ (vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT___zz_logic_ram_port0 
                                                 >> 1U)));
}

VL_INLINE_OPT void VTX::_combo__TOP__17(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_combo__TOP__17\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TX__DOT__writeJoinEvent_valid = ((IData)(vlTOPp->axil4Ctrl_awvalid) 
                                             & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->TX__DOT__axil4Ctrl_ar_rValid)))) {
        vlTOPp->axil4Ctrl_arready = 1U;
    }
    vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire 
        = ((IData)(vlTOPp->raw_data_tvalid) & (0U == (IData)(vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__cnt)));
    vlTOPp->TX__DOT___zz_writeJoinEvent_translated_ready 
        = vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->TX__DOT___zz_axil4Ctrl_bvalid_2)))) {
        vlTOPp->TX__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    vlTOPp->TX__DOT__phy_tx_scrambler_raw_data_ready = 0U;
    if ((0U != (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
        if ((1U == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))) {
            vlTOPp->TX__DOT__phy_tx_scrambler_raw_data_ready 
                = vlTOPp->coded_data_ready;
        }
    }
    vlTOPp->TX__DOT__writeJoinEvent_fire = ((IData)(vlTOPp->TX__DOT__writeJoinEvent_valid) 
                                            & (IData)(vlTOPp->TX__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1_scram_data_ready 
        = ((0U == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))
            ? (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo_io_pop_valid)
            : ((1U == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status)) 
               & ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo_io_pop_valid) 
                  & (IData)(vlTOPp->TX__DOT__phy_tx_scrambler_raw_data_ready))));
    vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo_io_pop_valid) 
           & (IData)(vlTOPp->TX__DOT__phy_tx_scrambler_raw_data_ready));
    vlTOPp->axil4Ctrl_awready = vlTOPp->TX__DOT__writeJoinEvent_fire;
    vlTOPp->axil4Ctrl_wready = vlTOPp->TX__DOT__writeJoinEvent_fire;
    vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popping) {
        vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_valueNext 
        = (((0xc7U == (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_willIncrement))));
}

VL_INLINE_OPT void VTX::_sequent__TOP__18(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_sequent__TOP__18\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_valueNext 
        = (((0xc7U == (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_willIncrement))));
    vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_valueNext 
        = (((0xc7U == (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_willIncrement))));
    vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_valueNext 
        = (((0xc7U == (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_willIncrement))));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_valueNext 
        = (((0xc7U == (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_value) 
                             + (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_willIncrement))));
    vlTOPp->TX__DOT__phy_tx_padder_result_data_payload_fragment 
        = (0xffU & ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_logic_ram_port0) 
                    >> 1U));
    if (vlTOPp->TX__DOT__phy_tx_padder__DOT__fill) {
        vlTOPp->TX__DOT__phy_tx_padder_result_data_payload_fragment = 0U;
    }
    vlTOPp->TX__DOT__phy_tx_padder_result_data_payload_last 
        = (1U & (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_logic_ram_port0));
    if ((7U != (IData)(vlTOPp->TX__DOT__phy_tx_padder__DOT__counter))) {
        vlTOPp->TX__DOT__phy_tx_padder_result_data_payload_last = 0U;
    }
    if (vlTOPp->TX__DOT__phy_tx_padder__DOT__fill) {
        vlTOPp->TX__DOT__phy_tx_padder_result_data_payload_last 
            = (7U == (IData)(vlTOPp->TX__DOT__phy_tx_padder__DOT__counter));
    }
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_1 
        = ((vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 1U) ^ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_2 
        = ((vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_1 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 2U) ^ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_1 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_3 
        = ((vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_2 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 3U) ^ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_2 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4 
        = ((vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_3 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 4U) ^ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_3 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5 
        = ((vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 5U) ^ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_6 
        = ((vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 6U) ^ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_7 
        = ((vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_6 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 7U) ^ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_6 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
        = ((vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_7 
            << 1U) ^ ((1U & (((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_logic_ram_port0) 
                              >> 8U) ^ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_7 
                                        >> 0x1fU)))
                       ? 0x4c11db7U : 0U));
    vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT___zz_resultNext_2 
        = ((0x100000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                             >> 0xbU)) << 0x14U)) | 
           ((0x80000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                             >> 0xcU)) << 0x13U)) | 
            ((0x40000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                              >> 0xdU)) << 0x12U)) 
             | ((0x20000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                 >> 0xeU)) << 0x11U)) 
                | ((0x10000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                    >> 0xfU)) << 0x10U)) 
                   | ((0x8000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                      >> 0x10U)) << 0xfU)) 
                      | ((0x4000U & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                         >> 0x11U)) 
                                     << 0xeU)) | ((0x2000U 
                                                   & ((~ 
                                                       (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                        >> 0x12U)) 
                                                      << 0xdU)) 
                                                  | ((0x1000U 
                                                      & ((~ 
                                                          (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                           >> 0x13U)) 
                                                         << 0xcU)) 
                                                     | ((0x800U 
                                                         & ((~ 
                                                             (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                              >> 0x14U)) 
                                                            << 0xbU)) 
                                                        | ((0x400U 
                                                            & ((~ 
                                                                (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                 >> 0x15U)) 
                                                               << 0xaU)) 
                                                           | ((0x200U 
                                                               & ((~ 
                                                                   (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                    >> 0x16U)) 
                                                                  << 9U)) 
                                                              | ((0x100U 
                                                                  & ((~ 
                                                                      (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                       >> 0x17U)) 
                                                                     << 8U)) 
                                                                 | ((0x80U 
                                                                     & ((~ 
                                                                         (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                          >> 0x18U)) 
                                                                        << 7U)) 
                                                                    | ((0x40U 
                                                                        & ((~ 
                                                                            (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                             >> 0x19U)) 
                                                                           << 6U)) 
                                                                       | ((0x20U 
                                                                           & ((~ 
                                                                               (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1aU)) 
                                                                              << 5U)) 
                                                                          | ((0x10U 
                                                                              & ((~ 
                                                                                (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                             | ((8U 
                                                                                & ((~ 
                                                                                (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                                >> 0x1fU)))))))))))))))))))))));
}

void VTX::_eval(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_eval\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        vlTOPp->_sequent__TOP__9(vlSymsp);
        vlTOPp->_sequent__TOP__10(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__16(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__17(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__18(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VTX::_change_request(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_change_request\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VTX::_change_request_1(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_change_request_1\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
