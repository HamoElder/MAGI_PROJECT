// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxiLite4CyclicPrefix.h for the primary calling header

#include "VAxiLite4CyclicPrefix.h"
#include "VAxiLite4CyclicPrefix__Syms.h"

//==========

void VAxiLite4CyclicPrefix::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAxiLite4CyclicPrefix::eval\n"); );
    VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAxiLite4CyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/AxiLite4CyclicPrefix.v", 13, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VAxiLite4CyclicPrefix::_eval_initial_loop(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/AxiLite4CyclicPrefix.v", 13, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VAxiLite4CyclicPrefix::_sequent__TOP__2(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4CyclicPrefix::_sequent__TOP__2\n"); );
    VAxiLite4CyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->axil4Ctrl_arready) {
        vlTOPp->AxiLite4CyclicPrefix__DOT__axil4Ctrl_ar_rData_prot 
            = vlTOPp->axil4Ctrl_arprot;
    }
    if (vlTOPp->axil4Ctrl_arready) {
        vlTOPp->AxiLite4CyclicPrefix__DOT__axil4Ctrl_ar_rData_addr 
            = vlTOPp->axil4Ctrl_araddr;
    }
    if (vlTOPp->AxiLite4CyclicPrefix__DOT___zz_writeJoinEvent_translated_ready) {
        vlTOPp->AxiLite4CyclicPrefix__DOT___zz_axil4Ctrl_bresp = 0U;
    }
    vlTOPp->axil4Ctrl_bresp = vlTOPp->AxiLite4CyclicPrefix__DOT___zz_axil4Ctrl_bresp;
}

VL_INLINE_OPT void VAxiLite4CyclicPrefix::_sequent__TOP__3(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4CyclicPrefix::_sequent__TOP__3\n"); );
    VAxiLite4CyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4CyclicPrefix__DOT__axil4Ctrl_ar_rValid = 0U;
    } else {
        if (vlTOPp->axil4Ctrl_arready) {
            vlTOPp->AxiLite4CyclicPrefix__DOT__axil4Ctrl_ar_rValid 
                = vlTOPp->axil4Ctrl_arvalid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4CyclicPrefix__DOT___zz_axil4Ctrl_bvalid_2 = 0U;
    } else {
        if (vlTOPp->AxiLite4CyclicPrefix__DOT___zz_writeJoinEvent_translated_ready) {
            vlTOPp->AxiLite4CyclicPrefix__DOT___zz_axil4Ctrl_bvalid_2 
                = vlTOPp->AxiLite4CyclicPrefix__DOT__writeJoinEvent_valid;
        }
    }
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->AxiLite4CyclicPrefix__DOT__axil4Ctrl_ar_rValid;
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->AxiLite4CyclicPrefix__DOT___zz_axil4Ctrl_bvalid_2;
}

VL_INLINE_OPT void VAxiLite4CyclicPrefix::_sequent__TOP__4(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4CyclicPrefix::_sequent__TOP__4\n"); );
    VAxiLite4CyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx1;
    CData/*5:0*/ __Vdlyvdim0__AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_ram__v0;
    QData/*32:0*/ __Vdlyvval__AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_ram__v0;
    // Body
    __Vdlyvset__AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_ram__v0 = 0U;
    __Vtableidx1 = ((0x40U & ((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT___zz_logic_ram_port0) 
                              << 6U)) | (((IData)(vlTOPp->raw_data_payload_last) 
                                          << 5U) | 
                                         ((((0x7fU 
                                             & (((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_3__DOT__area_clkO_buf1) 
                                                 - (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_2__DOT__area_clkO_buf1)) 
                                                - (IData)(1U))) 
                                            <= (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo_io_occupancy)) 
                                           << 4U) | 
                                          (((0U != (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo_io_occupancy)) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_state) 
                                               << 1U) 
                                              | (IData)(vlTOPp->rf_resetn))))));
    if ((1U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_state 
            = vlTOPp->__Vtable1_AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_state
            [__Vtableidx1];
    }
    if ((2U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__fifo_pop_en 
            = vlTOPp->__Vtable1_AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__fifo_pop_en
            [__Vtableidx1];
    }
    if ((4U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_en 
            = vlTOPp->__Vtable1_AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_en
            [__Vtableidx1];
    }
    if (vlTOPp->rf_resetn) {
        if (((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popping))) {
            vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_risingOccupancy 
                = vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushing;
        }
    } else {
        vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_risingOccupancy = 0U;
    }
    vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->rf_resetn) ? (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_valueNext)
            : 0U);
    if (vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT___zz_1) {
        __Vdlyvval__AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_ram__v0 
            = (((QData)((IData)((((IData)(vlTOPp->raw_data_payload_fragment_cha_q) 
                                  << 0x10U) | (IData)(vlTOPp->raw_data_payload_fragment_cha_i)))) 
                << 1U) | (QData)((IData)(vlTOPp->raw_data_payload_last)));
        __Vdlyvset__AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_ram__v0 = 1U;
        __Vdlyvdim0__AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_ram__v0 
            = vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_value;
    }
    vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT___zz_io_pop_valid 
        = ((IData)(vlTOPp->rf_resetn) & ((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_value)));
    vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT___zz_logic_ram_port0 
        = vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_ram
        [vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_valueNext];
    vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_3__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_3__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_2__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_2__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->rf_resetn) ? (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_valueNext)
            : 0U);
    if (__Vdlyvset__AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_ram__v0) {
        vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_ram[__Vdlyvdim0__AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_ram__v0] 
            = __Vdlyvval__AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_ram__v0;
    }
    vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_3__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_3__DOT__area_clkI_reg;
    vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_2__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_2__DOT__area_clkI_reg;
    vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_value));
    vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo_io_occupancy 
        = ((((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_risingOccupancy) 
             & (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_ptrMatch)) 
            << 6U) | (0x3fU & ((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_value) 
                               - (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_value))));
    vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_full 
        = ((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_risingOccupancy));
    vlTOPp->raw_data_ready = (1U & (~ (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_full)));
    vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_full))))));
    vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popping 
        = ((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo_io_pop_valid) 
           & (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__fifo_pop_en));
    vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popping) {
        vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_valueNext 
        = (0x3fU & ((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_willIncrement)));
}

VL_INLINE_OPT void VAxiLite4CyclicPrefix::_combo__TOP__6(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4CyclicPrefix::_combo__TOP__6\n"); );
    VAxiLite4CyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4CyclicPrefix__DOT__writeJoinEvent_valid 
        = ((IData)(vlTOPp->axil4Ctrl_awvalid) & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__axil4Ctrl_ar_rValid)))) {
        vlTOPp->axil4Ctrl_arready = 1U;
    }
    vlTOPp->AxiLite4CyclicPrefix__DOT___zz_writeJoinEvent_translated_ready 
        = vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT___zz_axil4Ctrl_bvalid_2)))) {
        vlTOPp->AxiLite4CyclicPrefix__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    vlTOPp->result_payload_fragment_cha_i = (0xffffU 
                                             & ((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_en)
                                                 ? (IData)(vlTOPp->raw_data_payload_fragment_cha_i)
                                                 : (IData)(
                                                           (vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT___zz_logic_ram_port0 
                                                            >> 1U))));
    vlTOPp->result_payload_fragment_cha_q = (0xffffU 
                                             & ((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_en)
                                                 ? (IData)(vlTOPp->raw_data_payload_fragment_cha_q)
                                                 : (IData)(
                                                           (vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT___zz_logic_ram_port0 
                                                            >> 0x11U))));
    vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->raw_data_valid) & (~ (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_full)));
    vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core_result_valid 
        = ((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_en)
            ? ((IData)(vlTOPp->raw_data_valid) & (~ (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_full)))
            : ((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo_io_pop_valid) 
               & (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__fifo_pop_en)));
    vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT___zz_1 = 0U;
    if (vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT___zz_1 = 1U;
    }
    vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushing) {
        vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->result_valid = vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core_result_valid;
    vlTOPp->result_payload_last = ((~ (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_en)) 
                                   & ((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT___zz_logic_ram_port0) 
                                      & (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core_result_valid)));
    vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_valueNext 
        = (0x3fU & ((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_willIncrement)));
}

VL_INLINE_OPT void VAxiLite4CyclicPrefix::_sequent__TOP__7(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4CyclicPrefix::_sequent__TOP__7\n"); );
    VAxiLite4CyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_3__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4CyclicPrefix__DOT_____05Fdata_len_driver;
    vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_2__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4CyclicPrefix__DOT_____05Fcp_len_driver;
}

VL_INLINE_OPT void VAxiLite4CyclicPrefix::_sequent__TOP__8(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4CyclicPrefix::_sequent__TOP__8\n"); );
    VAxiLite4CyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4CyclicPrefix__DOT_____05Fdata_len_driver = 0x40U;
    } else {
        if ((0U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((4U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if (vlTOPp->AxiLite4CyclicPrefix__DOT__writeJoinEvent_fire) {
                    vlTOPp->AxiLite4CyclicPrefix__DOT_____05Fdata_len_driver 
                        = (0x7fU & vlTOPp->axil4Ctrl_wdata);
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4CyclicPrefix__DOT_____05Fcp_len_driver = 0x10U;
    } else {
        if ((0U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if (vlTOPp->AxiLite4CyclicPrefix__DOT__writeJoinEvent_fire) {
                vlTOPp->AxiLite4CyclicPrefix__DOT_____05Fcp_len_driver 
                    = (0x1fU & vlTOPp->axil4Ctrl_wdata);
            }
        }
    }
    vlTOPp->AxiLite4CyclicPrefix__DOT__readRsp_data = 0U;
    if ((0U == (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__axil4Ctrl_ar_rData_addr))) {
        vlTOPp->AxiLite4CyclicPrefix__DOT__readRsp_data 
            = ((0xffffffe0U & vlTOPp->AxiLite4CyclicPrefix__DOT__readRsp_data) 
               | (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT_____05Fcp_len_driver));
    } else {
        if ((4U == (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__axil4Ctrl_ar_rData_addr))) {
            vlTOPp->AxiLite4CyclicPrefix__DOT__readRsp_data 
                = ((0xffffff80U & vlTOPp->AxiLite4CyclicPrefix__DOT__readRsp_data) 
                   | (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT_____05Fdata_len_driver));
        }
    }
    vlTOPp->axil4Ctrl_rdata = vlTOPp->AxiLite4CyclicPrefix__DOT__readRsp_data;
}

VL_INLINE_OPT void VAxiLite4CyclicPrefix::_combo__TOP__9(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4CyclicPrefix::_combo__TOP__9\n"); );
    VAxiLite4CyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4CyclicPrefix__DOT__writeJoinEvent_fire 
        = ((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__writeJoinEvent_valid) 
           & (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->axil4Ctrl_awready = vlTOPp->AxiLite4CyclicPrefix__DOT__writeJoinEvent_fire;
    vlTOPp->axil4Ctrl_wready = vlTOPp->AxiLite4CyclicPrefix__DOT__writeJoinEvent_fire;
}

void VAxiLite4CyclicPrefix::_eval(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4CyclicPrefix::_eval\n"); );
    VAxiLite4CyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->rf_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__rf_clk)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x40U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__9(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->__Vclklast__TOP__rf_clk = vlTOPp->rf_clk;
}

VL_INLINE_OPT QData VAxiLite4CyclicPrefix::_change_request(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4CyclicPrefix::_change_request\n"); );
    VAxiLite4CyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VAxiLite4CyclicPrefix::_change_request_1(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4CyclicPrefix::_change_request_1\n"); );
    VAxiLite4CyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAxiLite4CyclicPrefix::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4CyclicPrefix::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((axil4Ctrl_awvalid & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_awvalid");}
    if (VL_UNLIKELY((axil4Ctrl_awprot & 0xf8U))) {
        Verilated::overWidthError("axil4Ctrl_awprot");}
    if (VL_UNLIKELY((axil4Ctrl_wvalid & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_wvalid");}
    if (VL_UNLIKELY((axil4Ctrl_wstrb & 0xf0U))) {
        Verilated::overWidthError("axil4Ctrl_wstrb");}
    if (VL_UNLIKELY((axil4Ctrl_bready & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_bready");}
    if (VL_UNLIKELY((axil4Ctrl_arvalid & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_arvalid");}
    if (VL_UNLIKELY((axil4Ctrl_arprot & 0xf8U))) {
        Verilated::overWidthError("axil4Ctrl_arprot");}
    if (VL_UNLIKELY((axil4Ctrl_rready & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_rready");}
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((raw_data_payload_last & 0xfeU))) {
        Verilated::overWidthError("raw_data_payload_last");}
    if (VL_UNLIKELY((rf_clk & 0xfeU))) {
        Verilated::overWidthError("rf_clk");}
    if (VL_UNLIKELY((rf_resetn & 0xfeU))) {
        Verilated::overWidthError("rf_resetn");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
