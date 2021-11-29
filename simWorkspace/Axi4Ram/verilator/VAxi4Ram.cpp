// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxi4Ram.h for the primary calling header

#include "VAxi4Ram.h"
#include "VAxi4Ram__Syms.h"

//==========

void VAxi4Ram::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAxi4Ram::eval\n"); );
    VAxi4Ram__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/Axi4Ram.v", 12, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VAxi4Ram::_eval_initial_loop(VAxi4Ram__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/Axi4Ram.v", 12, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VAxi4Ram::_sequent__TOP__2(VAxi4Ram__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Ram::_sequent__TOP__2\n"); );
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdlyvdim0__Axi4Ram__DOT__b_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__Axi4Ram__DOT__b_fifo__DOT__logic_ram__v0;
    CData/*7:0*/ __Vdlyvdim0__Axi4Ram__DOT__r_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__Axi4Ram__DOT__r_fifo__DOT__logic_ram__v0;
    SData/*12:0*/ __Vdly__Axi4Ram__DOT__wr_addr;
    SData/*9:0*/ __Vdlyvval__Axi4Ram__DOT__b_fifo__DOT__logic_ram__v0;
    QData/*42:0*/ __Vdlyvval__Axi4Ram__DOT__r_fifo__DOT__logic_ram__v0;
    // Body
    vlTOPp->__Vdlyvset__Axi4Ram__DOT__ram_symbol3__v0 = 0U;
    vlTOPp->__Vdlyvset__Axi4Ram__DOT__ram_symbol2__v0 = 0U;
    vlTOPp->__Vdlyvset__Axi4Ram__DOT__ram_symbol0__v0 = 0U;
    vlTOPp->__Vdlyvset__Axi4Ram__DOT__ram_symbol1__v0 = 0U;
    vlTOPp->__Vdly__Axi4Ram__DOT__wr_cnt = vlTOPp->Axi4Ram__DOT__wr_cnt;
    __Vdly__Axi4Ram__DOT__wr_addr = vlTOPp->Axi4Ram__DOT__wr_addr;
    vlTOPp->__Vdly__Axi4Ram__DOT__rd_cnt = vlTOPp->Axi4Ram__DOT__rd_cnt;
    vlTOPp->__Vdly__Axi4Ram__DOT__rd_addr = vlTOPp->Axi4Ram__DOT__rd_addr;
    vlTOPp->__Vdlyvset__Axi4Ram__DOT__aw_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__Axi4Ram__DOT__ar_fifo__DOT__logic_ram__v0 = 0U;
    __Vdlyvset__Axi4Ram__DOT__b_fifo__DOT__logic_ram__v0 = 0U;
    __Vdlyvset__Axi4Ram__DOT__r_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->Axi4Ram__DOT__b_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_ram
        [vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_valueNext];
    if ((((IData)(vlTOPp->axi4_wstrb) >> 3U) & (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_fire))) {
        vlTOPp->__Vdlyvval__Axi4Ram__DOT__ram_symbol3__v0 
            = (0xffU & (vlTOPp->axi4_wdata >> 0x18U));
        vlTOPp->__Vdlyvset__Axi4Ram__DOT__ram_symbol3__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Axi4Ram__DOT__ram_symbol3__v0 
            = (0x7ffU & ((IData)(vlTOPp->Axi4Ram__DOT__wr_addr) 
                         >> 2U));
    }
    if ((((IData)(vlTOPp->axi4_wstrb) >> 2U) & (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_fire))) {
        vlTOPp->__Vdlyvval__Axi4Ram__DOT__ram_symbol2__v0 
            = (0xffU & (vlTOPp->axi4_wdata >> 0x10U));
        vlTOPp->__Vdlyvset__Axi4Ram__DOT__ram_symbol2__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Axi4Ram__DOT__ram_symbol2__v0 
            = (0x7ffU & ((IData)(vlTOPp->Axi4Ram__DOT__wr_addr) 
                         >> 2U));
    }
    if (((IData)(vlTOPp->axi4_wstrb) & (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_fire))) {
        vlTOPp->__Vdlyvval__Axi4Ram__DOT__ram_symbol0__v0 
            = (0xffU & vlTOPp->axi4_wdata);
        vlTOPp->__Vdlyvset__Axi4Ram__DOT__ram_symbol0__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Axi4Ram__DOT__ram_symbol0__v0 
            = (0x7ffU & ((IData)(vlTOPp->Axi4Ram__DOT__wr_addr) 
                         >> 2U));
    }
    if ((((IData)(vlTOPp->axi4_wstrb) >> 1U) & (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_fire))) {
        vlTOPp->__Vdlyvval__Axi4Ram__DOT__ram_symbol1__v0 
            = (0xffU & (vlTOPp->axi4_wdata >> 8U));
        vlTOPp->__Vdlyvset__Axi4Ram__DOT__ram_symbol1__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Axi4Ram__DOT__ram_symbol1__v0 
            = (0x7ffU & ((IData)(vlTOPp->Axi4Ram__DOT__wr_addr) 
                         >> 2U));
    }
    vlTOPp->Axi4Ram__DOT__r_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_ram
        [vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_valueNext];
    if ((0U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_state))) {
        vlTOPp->__Vdly__Axi4Ram__DOT__wr_cnt = (0xffU 
                                                & (IData)(
                                                          (vlTOPp->Axi4Ram__DOT__aw_fifo__DOT___zz_logic_ram_port0 
                                                           >> 0x15U)));
    } else {
        if ((1U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_state))) {
            if (vlTOPp->Axi4Ram__DOT__axi4_w_fire_2) {
                vlTOPp->__Vdly__Axi4Ram__DOT__wr_cnt 
                    = (0xffU & ((IData)(vlTOPp->Axi4Ram__DOT__wr_cnt) 
                                - (IData)(1U)));
            }
        }
    }
    if ((0U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_state))) {
        vlTOPp->Axi4Ram__DOT__wr_size = ((2U > (7U 
                                                & (IData)(
                                                          (vlTOPp->Axi4Ram__DOT__aw_fifo__DOT___zz_logic_ram_port0 
                                                           >> 0x1dU))))
                                          ? (7U & (IData)(
                                                          (vlTOPp->Axi4Ram__DOT__aw_fifo__DOT___zz_logic_ram_port0 
                                                           >> 0x1dU)))
                                          : 2U);
    }
    if ((0U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_r_state))) {
        if (vlTOPp->Axi4Ram__DOT__ar_fifo_io_pop_valid) {
            vlTOPp->Axi4Ram__DOT__rd_size = ((2U > 
                                              (7U & (IData)(
                                                            (vlTOPp->Axi4Ram__DOT__ar_fifo__DOT___zz_logic_ram_port0 
                                                             >> 0x1dU))))
                                              ? (7U 
                                                 & (IData)(
                                                           (vlTOPp->Axi4Ram__DOT__ar_fifo__DOT___zz_logic_ram_port0 
                                                            >> 0x1dU)))
                                              : 2U);
        }
    }
    vlTOPp->Axi4Ram__DOT___zz_io_push_valid = (1U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_r_state));
    if ((0U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_state))) {
        __Vdly__Axi4Ram__DOT__wr_addr = (0x1fffU & (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT___zz_logic_ram_port0));
    } else {
        if ((1U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_state))) {
            if (vlTOPp->Axi4Ram__DOT__axi4_w_fire_2) {
                __Vdly__Axi4Ram__DOT__wr_addr = ((0U 
                                                  == (IData)(vlTOPp->Axi4Ram__DOT__wr_burst))
                                                  ? (IData)(vlTOPp->Axi4Ram__DOT__wr_addr)
                                                  : (IData)(vlTOPp->Axi4Ram__DOT___zz_wr_addr));
            }
        }
    }
    if ((0U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_r_state))) {
        if (vlTOPp->Axi4Ram__DOT__ar_fifo_io_pop_valid) {
            vlTOPp->__Vdly__Axi4Ram__DOT__rd_addr = 
                (0x1fffU & (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT___zz_logic_ram_port0));
        }
    } else {
        if ((1U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_r_state))) {
            if ((1U & (~ (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_full)))) {
                vlTOPp->__Vdly__Axi4Ram__DOT__rd_addr 
                    = ((0U == (IData)(vlTOPp->Axi4Ram__DOT__rd_burst))
                        ? (IData)(vlTOPp->Axi4Ram__DOT__rd_addr)
                        : (IData)(vlTOPp->Axi4Ram__DOT___zz_rd_addr));
            }
        }
    }
    if (vlTOPp->Axi4Ram__DOT__aw_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__Axi4Ram__DOT__aw_fifo__DOT__logic_ram__v0 
            = (((QData)((IData)(vlTOPp->axi4_awburst)) 
                << 0x20U) | (QData)((IData)((((IData)(vlTOPp->axi4_awsize) 
                                              << 0x1dU) 
                                             | (((IData)(vlTOPp->axi4_awlen) 
                                                 << 0x15U) 
                                                | (((IData)(vlTOPp->axi4_awid) 
                                                    << 0xdU) 
                                                   | (IData)(vlTOPp->axi4_awaddr)))))));
        vlTOPp->__Vdlyvset__Axi4Ram__DOT__aw_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Axi4Ram__DOT__aw_fifo__DOT__logic_ram__v0 
            = vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->Axi4Ram__DOT__ar_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__Axi4Ram__DOT__ar_fifo__DOT__logic_ram__v0 
            = (((QData)((IData)(vlTOPp->axi4_arburst)) 
                << 0x20U) | (QData)((IData)((((IData)(vlTOPp->axi4_arsize) 
                                              << 0x1dU) 
                                             | (((IData)(vlTOPp->axi4_arlen) 
                                                 << 0x15U) 
                                                | (((IData)(vlTOPp->axi4_arid) 
                                                    << 0xdU) 
                                                   | (IData)(vlTOPp->axi4_araddr)))))));
        vlTOPp->__Vdlyvset__Axi4Ram__DOT__ar_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Axi4Ram__DOT__ar_fifo__DOT__logic_ram__v0 
            = vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->Axi4Ram__DOT__b_fifo__DOT___zz_1) {
        __Vdlyvval__Axi4Ram__DOT__b_fifo__DOT__logic_ram__v0 
            = vlTOPp->Axi4Ram__DOT__b_id;
        __Vdlyvset__Axi4Ram__DOT__b_fifo__DOT__logic_ram__v0 = 1U;
        __Vdlyvdim0__Axi4Ram__DOT__b_fifo__DOT__logic_ram__v0 
            = vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->Axi4Ram__DOT__r_fifo__DOT___zz_1) {
        __Vdlyvval__Axi4Ram__DOT__r_fifo__DOT__logic_ram__v0 
            = (((QData)((IData)(vlTOPp->Axi4Ram__DOT___zz_io_push_payload_last)) 
                << 0x2aU) | (((QData)((IData)(vlTOPp->Axi4Ram__DOT__rd_id)) 
                              << 0x20U) | (QData)((IData)(
                                                          (((IData)(vlTOPp->Axi4Ram__DOT___zz_ramsymbol_read_3) 
                                                            << 0x18U) 
                                                           | (((IData)(vlTOPp->Axi4Ram__DOT___zz_ramsymbol_read_2) 
                                                               << 0x10U) 
                                                              | (((IData)(vlTOPp->Axi4Ram__DOT___zz_ramsymbol_read_1) 
                                                                  << 8U) 
                                                                 | (IData)(vlTOPp->Axi4Ram__DOT___zz_ramsymbol_read))))))));
        __Vdlyvset__Axi4Ram__DOT__r_fifo__DOT__logic_ram__v0 = 1U;
        __Vdlyvdim0__Axi4Ram__DOT__r_fifo__DOT__logic_ram__v0 
            = vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_value;
    }
    vlTOPp->Axi4Ram__DOT__wr_addr = __Vdly__Axi4Ram__DOT__wr_addr;
    if (__Vdlyvset__Axi4Ram__DOT__b_fifo__DOT__logic_ram__v0) {
        vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_ram[__Vdlyvdim0__Axi4Ram__DOT__b_fifo__DOT__logic_ram__v0] 
            = __Vdlyvval__Axi4Ram__DOT__b_fifo__DOT__logic_ram__v0;
    }
    if (__Vdlyvset__Axi4Ram__DOT__r_fifo__DOT__logic_ram__v0) {
        vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_ram[__Vdlyvdim0__Axi4Ram__DOT__r_fifo__DOT__logic_ram__v0] 
            = __Vdlyvval__Axi4Ram__DOT__r_fifo__DOT__logic_ram__v0;
    }
    vlTOPp->axi4_bid = (0xffU & (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT___zz_logic_ram_port0));
    vlTOPp->axi4_bresp = (3U & ((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT___zz_logic_ram_port0) 
                                >> 8U));
    vlTOPp->axi4_rdata = (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT___zz_logic_ram_port0);
    vlTOPp->axi4_rid = (0xffU & (IData)((vlTOPp->Axi4Ram__DOT__r_fifo__DOT___zz_logic_ram_port0 
                                         >> 0x20U)));
    vlTOPp->axi4_rresp = (3U & (IData)((vlTOPp->Axi4Ram__DOT__r_fifo__DOT___zz_logic_ram_port0 
                                        >> 0x28U)));
    vlTOPp->axi4_rlast = (1U & (IData)((vlTOPp->Axi4Ram__DOT__r_fifo__DOT___zz_logic_ram_port0 
                                        >> 0x2aU)));
    vlTOPp->Axi4Ram__DOT___zz_wr_addr = (0x1fffU & 
                                         ((IData)(vlTOPp->Axi4Ram__DOT__wr_addr) 
                                          + (0xffU 
                                             & ((IData)(1U) 
                                                << (IData)(vlTOPp->Axi4Ram__DOT__wr_size)))));
    if ((0U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_state))) {
        vlTOPp->Axi4Ram__DOT__wr_burst = (3U & (IData)(
                                                       (vlTOPp->Axi4Ram__DOT__aw_fifo__DOT___zz_logic_ram_port0 
                                                        >> 0x20U)));
    }
    if ((0U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_r_state))) {
        if (vlTOPp->Axi4Ram__DOT__ar_fifo_io_pop_valid) {
            vlTOPp->Axi4Ram__DOT__rd_burst = (3U & (IData)(
                                                           (vlTOPp->Axi4Ram__DOT__ar_fifo__DOT___zz_logic_ram_port0 
                                                            >> 0x20U)));
        }
    }
    if ((0U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_state))) {
        vlTOPp->Axi4Ram__DOT__b_id = (0xffU & (IData)(
                                                      (vlTOPp->Axi4Ram__DOT__aw_fifo__DOT___zz_logic_ram_port0 
                                                       >> 0xdU)));
    }
    vlTOPp->Axi4Ram__DOT___zz_ramsymbol_read_3 = vlTOPp->Axi4Ram__DOT__ram_symbol3
        [(0x7ffU & ((IData)(vlTOPp->Axi4Ram__DOT__rd_addr) 
                    >> 2U))];
}

VL_INLINE_OPT void VAxi4Ram::_sequent__TOP__3(VAxi4Ram__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Ram::_sequent__TOP__3\n"); );
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Axi4Ram__DOT___zz_ramsymbol_read_2 = vlTOPp->Axi4Ram__DOT__ram_symbol2
        [(0x7ffU & ((IData)(vlTOPp->Axi4Ram__DOT__rd_addr) 
                    >> 2U))];
    vlTOPp->Axi4Ram__DOT___zz_ramsymbol_read_1 = vlTOPp->Axi4Ram__DOT__ram_symbol1
        [(0x7ffU & ((IData)(vlTOPp->Axi4Ram__DOT__rd_addr) 
                    >> 2U))];
    vlTOPp->Axi4Ram__DOT___zz_ramsymbol_read = vlTOPp->Axi4Ram__DOT__ram_symbol0
        [(0x7ffU & ((IData)(vlTOPp->Axi4Ram__DOT__rd_addr) 
                    >> 2U))];
    if ((0U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_r_state))) {
        if (vlTOPp->Axi4Ram__DOT__ar_fifo_io_pop_valid) {
            vlTOPp->Axi4Ram__DOT__rd_id = (0xffU & (IData)(
                                                           (vlTOPp->Axi4Ram__DOT__ar_fifo__DOT___zz_logic_ram_port0 
                                                            >> 0xdU)));
        }
    }
    if ((0U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_r_state))) {
        if (vlTOPp->Axi4Ram__DOT__ar_fifo_io_pop_valid) {
            vlTOPp->__Vdly__Axi4Ram__DOT__rd_cnt = 
                (0xffU & (IData)((vlTOPp->Axi4Ram__DOT__ar_fifo__DOT___zz_logic_ram_port0 
                                  >> 0x15U)));
        }
    } else {
        if ((1U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_r_state))) {
            if ((1U & (~ (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_full)))) {
                vlTOPp->__Vdly__Axi4Ram__DOT__rd_cnt 
                    = (0xffU & ((IData)(vlTOPp->Axi4Ram__DOT__rd_cnt) 
                                - (IData)(1U)));
            }
        }
    }
    vlTOPp->Axi4Ram__DOT___zz_io_push_payload_last 
        = (0U == (IData)(vlTOPp->Axi4Ram__DOT__rd_cnt));
    if (vlTOPp->__Vdlyvset__Axi4Ram__DOT__ram_symbol3__v0) {
        vlTOPp->Axi4Ram__DOT__ram_symbol3[vlTOPp->__Vdlyvdim0__Axi4Ram__DOT__ram_symbol3__v0] 
            = vlTOPp->__Vdlyvval__Axi4Ram__DOT__ram_symbol3__v0;
    }
    if (vlTOPp->__Vdlyvset__Axi4Ram__DOT__ram_symbol2__v0) {
        vlTOPp->Axi4Ram__DOT__ram_symbol2[vlTOPp->__Vdlyvdim0__Axi4Ram__DOT__ram_symbol2__v0] 
            = vlTOPp->__Vdlyvval__Axi4Ram__DOT__ram_symbol2__v0;
    }
    if (vlTOPp->__Vdlyvset__Axi4Ram__DOT__ram_symbol1__v0) {
        vlTOPp->Axi4Ram__DOT__ram_symbol1[vlTOPp->__Vdlyvdim0__Axi4Ram__DOT__ram_symbol1__v0] 
            = vlTOPp->__Vdlyvval__Axi4Ram__DOT__ram_symbol1__v0;
    }
    vlTOPp->Axi4Ram__DOT__rd_addr = vlTOPp->__Vdly__Axi4Ram__DOT__rd_addr;
    if (vlTOPp->__Vdlyvset__Axi4Ram__DOT__ram_symbol0__v0) {
        vlTOPp->Axi4Ram__DOT__ram_symbol0[vlTOPp->__Vdlyvdim0__Axi4Ram__DOT__ram_symbol0__v0] 
            = vlTOPp->__Vdlyvval__Axi4Ram__DOT__ram_symbol0__v0;
    }
    vlTOPp->Axi4Ram__DOT__aw_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_ram
        [vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_valueNext];
    vlTOPp->Axi4Ram__DOT___zz_rd_addr = (0x1fffU & 
                                         ((IData)(vlTOPp->Axi4Ram__DOT__rd_addr) 
                                          + (0xffU 
                                             & ((IData)(1U) 
                                                << (IData)(vlTOPp->Axi4Ram__DOT__rd_size)))));
    vlTOPp->Axi4Ram__DOT__ar_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_ram
        [vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_valueNext];
    if (vlTOPp->__Vdlyvset__Axi4Ram__DOT__aw_fifo__DOT__logic_ram__v0) {
        vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__Axi4Ram__DOT__aw_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__Axi4Ram__DOT__aw_fifo__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__Axi4Ram__DOT__ar_fifo__DOT__logic_ram__v0) {
        vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__Axi4Ram__DOT__ar_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__Axi4Ram__DOT__ar_fifo__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VAxi4Ram::_sequent__TOP__4(VAxi4Ram__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Ram::_sequent__TOP__4\n"); );
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__Axi4Ram__DOT__axi4_r_state = vlTOPp->Axi4Ram__DOT__axi4_r_state;
    vlTOPp->__Vdly__Axi4Ram__DOT__axi4_w_state = vlTOPp->Axi4Ram__DOT__axi4_w_state;
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Axi4Ram__DOT__axi4_r_state = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_r_state))) {
            if (vlTOPp->Axi4Ram__DOT__ar_fifo_io_pop_valid) {
                vlTOPp->__Vdly__Axi4Ram__DOT__axi4_r_state = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_r_state))) {
                if ((1U & (~ (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_full)))) {
                    if ((0U == (IData)(vlTOPp->Axi4Ram__DOT__rd_cnt))) {
                        vlTOPp->__Vdly__Axi4Ram__DOT__axi4_r_state = 0U;
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Axi4Ram__DOT__axi4_w_state = 0U;
        vlTOPp->Axi4Ram__DOT__b_valid = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_state))) {
            if (vlTOPp->Axi4Ram__DOT__aw_fifo_io_pop_valid) {
                vlTOPp->__Vdly__Axi4Ram__DOT__axi4_w_state = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_state))) {
                if (((0U == (IData)(vlTOPp->Axi4Ram__DOT__wr_cnt)) 
                     & ((IData)(vlTOPp->axi4_wvalid) 
                        & (IData)(vlTOPp->axi4_wready)))) {
                    vlTOPp->__Vdly__Axi4Ram__DOT__axi4_w_state = 2U;
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_full)))) {
                    vlTOPp->__Vdly__Axi4Ram__DOT__axi4_w_state = 0U;
                }
            }
        }
        if ((0U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_state))) {
            vlTOPp->Axi4Ram__DOT__b_valid = 0U;
        } else {
            if ((1U != (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_state))) {
                vlTOPp->Axi4Ram__DOT__b_valid = 1U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popping))) {
            vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popping))) {
            vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushing;
        }
    }
}

VL_INLINE_OPT void VAxi4Ram::_sequent__TOP__5(VAxi4Ram__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Ram::_sequent__TOP__5\n"); );
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popping))) {
            vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popping))) {
            vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushing;
        }
    }
    vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->Axi4Ram__DOT__aw_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->Axi4Ram__DOT__ar_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->Axi4Ram__DOT__r_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->Axi4Ram__DOT__b_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->Axi4Ram__DOT__axi4_r_state = vlTOPp->__Vdly__Axi4Ram__DOT__axi4_r_state;
    vlTOPp->Axi4Ram__DOT__axi4_w_state = vlTOPp->__Vdly__Axi4Ram__DOT__axi4_w_state;
    vlTOPp->axi4_wready = (1U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_state));
    vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_value));
    vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_value));
    vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_value));
    vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_value));
    vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_risingOccupancy));
    vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_risingOccupancy));
    vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_full = 
        ((IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_ptrMatch) 
         & (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_risingOccupancy));
    vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_full = 
        ((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_ptrMatch) 
         & (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_risingOccupancy));
    vlTOPp->axi4_awready = (1U & (~ (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_full)));
    vlTOPp->Axi4Ram__DOT__aw_fifo_io_pop_valid = (1U 
                                                  & ((~ 
                                                      ((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_ptrMatch) 
                                                       & (~ (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_risingOccupancy)))) 
                                                     & (~ 
                                                        ((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT___zz_io_pop_valid) 
                                                         & (~ (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_full))))));
    vlTOPp->axi4_arready = (1U & (~ (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_full)));
    vlTOPp->Axi4Ram__DOT__ar_fifo_io_pop_valid = (1U 
                                                  & ((~ 
                                                      ((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_ptrMatch) 
                                                       & (~ (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_risingOccupancy)))) 
                                                     & (~ 
                                                        ((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT___zz_io_pop_valid) 
                                                         & (~ (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_full))))));
    vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->Axi4Ram__DOT___zz_io_push_valid) 
           & (~ (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_full)));
    vlTOPp->Axi4Ram__DOT__r_fifo_io_pop_valid = (1U 
                                                 & ((~ 
                                                     ((IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_ptrMatch) 
                                                      & (~ (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_risingOccupancy)))) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT___zz_io_pop_valid) 
                                                        & (~ (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_full))))));
    vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->Axi4Ram__DOT__b_valid) & 
           (~ (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_full)));
    vlTOPp->Axi4Ram__DOT__b_fifo_io_pop_valid = (1U 
                                                 & ((~ 
                                                     ((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_ptrMatch) 
                                                      & (~ (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_risingOccupancy)))) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT___zz_io_pop_valid) 
                                                        & (~ (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_full))))));
    vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo_io_pop_valid) 
           & (0U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_state)));
    vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo_io_pop_valid) 
           & (0U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_r_state)));
    vlTOPp->Axi4Ram__DOT__r_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushing) {
        vlTOPp->Axi4Ram__DOT__r_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushing) {
        vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->axi4_rvalid = vlTOPp->Axi4Ram__DOT__r_fifo_io_pop_valid;
    vlTOPp->Axi4Ram__DOT__b_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushing) {
        vlTOPp->Axi4Ram__DOT__b_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushing) {
        vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->axi4_bvalid = vlTOPp->Axi4Ram__DOT__b_fifo_io_pop_valid;
    vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popping) {
        vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popping) {
        vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_valueNext 
        = (0xffU & ((IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_valueNext 
        = (3U & ((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_valueNext 
        = (3U & ((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_valueNext 
        = (3U & ((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_willIncrement)));
}

VL_INLINE_OPT void VAxi4Ram::_sequent__TOP__8(VAxi4Ram__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Ram::_sequent__TOP__8\n"); );
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Axi4Ram__DOT__rd_cnt = vlTOPp->__Vdly__Axi4Ram__DOT__rd_cnt;
    vlTOPp->Axi4Ram__DOT__wr_cnt = vlTOPp->__Vdly__Axi4Ram__DOT__wr_cnt;
}

VL_INLINE_OPT void VAxi4Ram::_combo__TOP__9(VAxi4Ram__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Ram::_combo__TOP__9\n"); );
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Axi4Ram__DOT__axi4_w_fire = ((IData)(vlTOPp->axi4_wvalid) 
                                         & (IData)(vlTOPp->axi4_wready));
    vlTOPp->Axi4Ram__DOT__axi4_w_fire_2 = ((IData)(vlTOPp->axi4_wvalid) 
                                           & (IData)(vlTOPp->axi4_wready));
    vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->axi4_awvalid) & (~ (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_full)));
    vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->axi4_arvalid) & (~ (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_full)));
    vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->Axi4Ram__DOT__r_fifo_io_pop_valid) 
           & (IData)(vlTOPp->axi4_rready));
    vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->Axi4Ram__DOT__b_fifo_io_pop_valid) 
           & (IData)(vlTOPp->axi4_bready));
    vlTOPp->Axi4Ram__DOT__aw_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushing) {
        vlTOPp->Axi4Ram__DOT__aw_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushing) {
        vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->Axi4Ram__DOT__ar_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushing) {
        vlTOPp->Axi4Ram__DOT__ar_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushing) {
        vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popping) {
        vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popping) {
        vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_valueNext 
        = (3U & ((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_valueNext 
        = (3U & ((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_valueNext 
        = (0xffU & ((IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_valueNext 
        = (3U & ((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_willIncrement)));
}

void VAxi4Ram::_eval(VAxi4Ram__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Ram::_eval\n"); );
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

VL_INLINE_OPT QData VAxi4Ram::_change_request(VAxi4Ram__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Ram::_change_request\n"); );
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VAxi4Ram::_change_request_1(VAxi4Ram__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Ram::_change_request_1\n"); );
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAxi4Ram::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Ram::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((axi4_awvalid & 0xfeU))) {
        Verilated::overWidthError("axi4_awvalid");}
    if (VL_UNLIKELY((axi4_awaddr & 0xe000U))) {
        Verilated::overWidthError("axi4_awaddr");}
    if (VL_UNLIKELY((axi4_awsize & 0xf8U))) {
        Verilated::overWidthError("axi4_awsize");}
    if (VL_UNLIKELY((axi4_awburst & 0xfcU))) {
        Verilated::overWidthError("axi4_awburst");}
    if (VL_UNLIKELY((axi4_wvalid & 0xfeU))) {
        Verilated::overWidthError("axi4_wvalid");}
    if (VL_UNLIKELY((axi4_wstrb & 0xf0U))) {
        Verilated::overWidthError("axi4_wstrb");}
    if (VL_UNLIKELY((axi4_wlast & 0xfeU))) {
        Verilated::overWidthError("axi4_wlast");}
    if (VL_UNLIKELY((axi4_bready & 0xfeU))) {
        Verilated::overWidthError("axi4_bready");}
    if (VL_UNLIKELY((axi4_arvalid & 0xfeU))) {
        Verilated::overWidthError("axi4_arvalid");}
    if (VL_UNLIKELY((axi4_araddr & 0xe000U))) {
        Verilated::overWidthError("axi4_araddr");}
    if (VL_UNLIKELY((axi4_arsize & 0xf8U))) {
        Verilated::overWidthError("axi4_arsize");}
    if (VL_UNLIKELY((axi4_arburst & 0xfcU))) {
        Verilated::overWidthError("axi4_arburst");}
    if (VL_UNLIKELY((axi4_rready & 0xfeU))) {
        Verilated::overWidthError("axi4_rready");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
