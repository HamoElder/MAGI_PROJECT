// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxi4Rom.h for the primary calling header

#include "VAxi4Rom.h"
#include "VAxi4Rom__Syms.h"

//==========

void VAxi4Rom::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAxi4Rom::eval\n"); );
    VAxi4Rom__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/Axi4Rom.v", 11, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VAxi4Rom::_eval_initial_loop(VAxi4Rom__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/Axi4Rom.v", 11, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VAxi4Rom::_sequent__TOP__1(VAxi4Rom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Rom::_sequent__TOP__1\n"); );
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdlyvdim0__Axi4Rom__DOT__r_fifo__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__Axi4Rom__DOT__r_fifo__DOT__logic_ram__v0;
    SData/*12:0*/ __Vdly__Axi4Rom__DOT__rd_addr;
    QData/*42:0*/ __Vdlyvval__Axi4Rom__DOT__r_fifo__DOT__logic_ram__v0;
    // Body
    vlTOPp->__Vdly__Axi4Rom__DOT__rd_cnt = vlTOPp->Axi4Rom__DOT__rd_cnt;
    __Vdly__Axi4Rom__DOT__rd_addr = vlTOPp->Axi4Rom__DOT__rd_addr;
    vlTOPp->__Vdlyvset__Axi4Rom__DOT__ar_fifo__DOT__logic_ram__v0 = 0U;
    __Vdlyvset__Axi4Rom__DOT__r_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->Axi4Rom__DOT__r_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_ram
        [vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_valueNext];
    if ((1U & (~ (IData)(vlTOPp->Axi4Rom__DOT__axi4_r_state)))) {
        if (vlTOPp->Axi4Rom__DOT__ar_fifo_io_pop_valid) {
            vlTOPp->Axi4Rom__DOT__rd_size = ((2U > 
                                              (7U & (IData)(
                                                            (vlTOPp->Axi4Rom__DOT__ar_fifo__DOT___zz_logic_ram_port0 
                                                             >> 0x1dU))))
                                              ? (7U 
                                                 & (IData)(
                                                           (vlTOPp->Axi4Rom__DOT__ar_fifo__DOT___zz_logic_ram_port0 
                                                            >> 0x1dU)))
                                              : 2U);
        }
    }
    vlTOPp->Axi4Rom__DOT___zz_io_push_valid = vlTOPp->Axi4Rom__DOT__axi4_r_state;
    if (vlTOPp->Axi4Rom__DOT__axi4_r_state) {
        if ((1U & (~ (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_full)))) {
            __Vdly__Axi4Rom__DOT__rd_addr = ((0U == (IData)(vlTOPp->Axi4Rom__DOT__rd_burst))
                                              ? (IData)(vlTOPp->Axi4Rom__DOT__rd_addr)
                                              : (IData)(vlTOPp->Axi4Rom__DOT___zz_rd_addr));
        }
    } else {
        if (vlTOPp->Axi4Rom__DOT__ar_fifo_io_pop_valid) {
            __Vdly__Axi4Rom__DOT__rd_addr = (0x1fffU 
                                             & (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT___zz_logic_ram_port0));
        }
    }
    if (vlTOPp->Axi4Rom__DOT__ar_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__Axi4Rom__DOT__ar_fifo__DOT__logic_ram__v0 
            = (((QData)((IData)(vlTOPp->axi4_arburst)) 
                << 0x20U) | (QData)((IData)((((IData)(vlTOPp->axi4_arsize) 
                                              << 0x1dU) 
                                             | (((IData)(vlTOPp->axi4_arlen) 
                                                 << 0x15U) 
                                                | (((IData)(vlTOPp->axi4_arid) 
                                                    << 0xdU) 
                                                   | (IData)(vlTOPp->axi4_araddr)))))));
        vlTOPp->__Vdlyvset__Axi4Rom__DOT__ar_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Axi4Rom__DOT__ar_fifo__DOT__logic_ram__v0 
            = vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->Axi4Rom__DOT__r_fifo__DOT___zz_1) {
        __Vdlyvval__Axi4Rom__DOT__r_fifo__DOT__logic_ram__v0 
            = (((QData)((IData)(vlTOPp->Axi4Rom__DOT___zz_io_push_payload_last)) 
                << 0x2aU) | (((QData)((IData)(vlTOPp->Axi4Rom__DOT__rd_id)) 
                              << 0x20U) | (QData)((IData)(vlTOPp->Axi4Rom__DOT___zz_rom_port0))));
        __Vdlyvset__Axi4Rom__DOT__r_fifo__DOT__logic_ram__v0 = 1U;
        __Vdlyvdim0__Axi4Rom__DOT__r_fifo__DOT__logic_ram__v0 
            = vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_value;
    }
    if (__Vdlyvset__Axi4Rom__DOT__r_fifo__DOT__logic_ram__v0) {
        vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_ram[__Vdlyvdim0__Axi4Rom__DOT__r_fifo__DOT__logic_ram__v0] 
            = __Vdlyvval__Axi4Rom__DOT__r_fifo__DOT__logic_ram__v0;
    }
    vlTOPp->axi4_rdata = (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT___zz_logic_ram_port0);
    vlTOPp->axi4_rid = (0xffU & (IData)((vlTOPp->Axi4Rom__DOT__r_fifo__DOT___zz_logic_ram_port0 
                                         >> 0x20U)));
    vlTOPp->axi4_rresp = (3U & (IData)((vlTOPp->Axi4Rom__DOT__r_fifo__DOT___zz_logic_ram_port0 
                                        >> 0x28U)));
    vlTOPp->axi4_rlast = (1U & (IData)((vlTOPp->Axi4Rom__DOT__r_fifo__DOT___zz_logic_ram_port0 
                                        >> 0x2aU)));
    if ((1U & (~ (IData)(vlTOPp->Axi4Rom__DOT__axi4_r_state)))) {
        if (vlTOPp->Axi4Rom__DOT__ar_fifo_io_pop_valid) {
            vlTOPp->Axi4Rom__DOT__rd_burst = (3U & (IData)(
                                                           (vlTOPp->Axi4Rom__DOT__ar_fifo__DOT___zz_logic_ram_port0 
                                                            >> 0x20U)));
        }
    }
    vlTOPp->Axi4Rom__DOT___zz_rom_port0 = vlTOPp->Axi4Rom__DOT__rom
        [(0x7ffU & ((IData)(vlTOPp->Axi4Rom__DOT__rd_addr) 
                    >> 2U))];
    if ((1U & (~ (IData)(vlTOPp->Axi4Rom__DOT__axi4_r_state)))) {
        if (vlTOPp->Axi4Rom__DOT__ar_fifo_io_pop_valid) {
            vlTOPp->Axi4Rom__DOT__rd_id = (0xffU & (IData)(
                                                           (vlTOPp->Axi4Rom__DOT__ar_fifo__DOT___zz_logic_ram_port0 
                                                            >> 0xdU)));
        }
    }
    if (vlTOPp->Axi4Rom__DOT__axi4_r_state) {
        if ((1U & (~ (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_full)))) {
            vlTOPp->__Vdly__Axi4Rom__DOT__rd_cnt = 
                (0xffU & ((IData)(vlTOPp->Axi4Rom__DOT__rd_cnt) 
                          - (IData)(1U)));
        }
    } else {
        if (vlTOPp->Axi4Rom__DOT__ar_fifo_io_pop_valid) {
            vlTOPp->__Vdly__Axi4Rom__DOT__rd_cnt = 
                (0xffU & (IData)((vlTOPp->Axi4Rom__DOT__ar_fifo__DOT___zz_logic_ram_port0 
                                  >> 0x15U)));
        }
    }
    vlTOPp->Axi4Rom__DOT___zz_io_push_payload_last 
        = (0U == (IData)(vlTOPp->Axi4Rom__DOT__rd_cnt));
    vlTOPp->Axi4Rom__DOT__rd_addr = __Vdly__Axi4Rom__DOT__rd_addr;
    vlTOPp->Axi4Rom__DOT___zz_rd_addr = (0x1fffU & 
                                         ((IData)(vlTOPp->Axi4Rom__DOT__rd_addr) 
                                          + (0xffU 
                                             & ((IData)(1U) 
                                                << (IData)(vlTOPp->Axi4Rom__DOT__rd_size)))));
    vlTOPp->Axi4Rom__DOT__ar_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_ram
        [vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_valueNext];
}

VL_INLINE_OPT void VAxi4Rom::_sequent__TOP__2(VAxi4Rom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Rom::_sequent__TOP__2\n"); );
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__Axi4Rom__DOT__ar_fifo__DOT__logic_ram__v0) {
        vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__Axi4Rom__DOT__ar_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__Axi4Rom__DOT__ar_fifo__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VAxi4Rom::_sequent__TOP__3(VAxi4Rom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Rom::_sequent__TOP__3\n"); );
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__Axi4Rom__DOT__axi4_r_state;
    // Body
    __Vdly__Axi4Rom__DOT__axi4_r_state = vlTOPp->Axi4Rom__DOT__axi4_r_state;
    if (vlTOPp->reset) {
        __Vdly__Axi4Rom__DOT__axi4_r_state = 0U;
    } else {
        if (vlTOPp->Axi4Rom__DOT__axi4_r_state) {
            if ((1U & (~ (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_full)))) {
                if ((0U == (IData)(vlTOPp->Axi4Rom__DOT__rd_cnt))) {
                    __Vdly__Axi4Rom__DOT__axi4_r_state = 0U;
                }
            }
        } else {
            if (vlTOPp->Axi4Rom__DOT__ar_fifo_io_pop_valid) {
                __Vdly__Axi4Rom__DOT__axi4_r_state = 1U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popping))) {
            vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popping))) {
            vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushing;
        }
    }
    vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->Axi4Rom__DOT__ar_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->Axi4Rom__DOT__r_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->Axi4Rom__DOT__axi4_r_state = __Vdly__Axi4Rom__DOT__axi4_r_state;
    vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_value));
    vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_value));
    vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_risingOccupancy));
    vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_full = 
        ((IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_ptrMatch) 
         & (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_risingOccupancy));
    vlTOPp->axi4_arready = (1U & (~ (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_full)));
    vlTOPp->Axi4Rom__DOT__ar_fifo_io_pop_valid = (1U 
                                                  & ((~ 
                                                      ((IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_ptrMatch) 
                                                       & (~ (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_risingOccupancy)))) 
                                                     & (~ 
                                                        ((IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT___zz_io_pop_valid) 
                                                         & (~ (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_full))))));
    vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->Axi4Rom__DOT___zz_io_push_valid) 
           & (~ (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_full)));
    vlTOPp->Axi4Rom__DOT__r_fifo_io_pop_valid = (1U 
                                                 & ((~ 
                                                     ((IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_ptrMatch) 
                                                      & (~ (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_risingOccupancy)))) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT___zz_io_pop_valid) 
                                                        & (~ (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_full))))));
    vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->Axi4Rom__DOT__ar_fifo_io_pop_valid) 
           & (~ (IData)(vlTOPp->Axi4Rom__DOT__axi4_r_state)));
    vlTOPp->Axi4Rom__DOT__r_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushing) {
        vlTOPp->Axi4Rom__DOT__r_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushing) {
        vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->axi4_rvalid = vlTOPp->Axi4Rom__DOT__r_fifo_io_pop_valid;
    vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popping) {
        vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_valueNext 
        = (3U & ((IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_valueNext 
        = (3U & ((IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_willIncrement)));
}

VL_INLINE_OPT void VAxi4Rom::_sequent__TOP__6(VAxi4Rom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Rom::_sequent__TOP__6\n"); );
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Axi4Rom__DOT__rd_cnt = vlTOPp->__Vdly__Axi4Rom__DOT__rd_cnt;
}

VL_INLINE_OPT void VAxi4Rom::_combo__TOP__7(VAxi4Rom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Rom::_combo__TOP__7\n"); );
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->axi4_arvalid) & (~ (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_full)));
    vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->Axi4Rom__DOT__r_fifo_io_pop_valid) 
           & (IData)(vlTOPp->axi4_rready));
    vlTOPp->Axi4Rom__DOT__ar_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushing) {
        vlTOPp->Axi4Rom__DOT__ar_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushing) {
        vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popping) {
        vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_valueNext 
        = (3U & ((IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_valueNext 
        = (3U & ((IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_willIncrement)));
}

void VAxi4Rom::_eval(VAxi4Rom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Rom::_eval\n"); );
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__7(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VAxi4Rom::_change_request(VAxi4Rom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Rom::_change_request\n"); );
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VAxi4Rom::_change_request_1(VAxi4Rom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Rom::_change_request_1\n"); );
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAxi4Rom::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Rom::_eval_debug_assertions\n"); );
    // Body
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
