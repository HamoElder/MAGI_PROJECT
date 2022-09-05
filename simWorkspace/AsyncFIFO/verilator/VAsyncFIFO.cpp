// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncFIFO.h for the primary calling header

#include "VAsyncFIFO.h"
#include "VAsyncFIFO__Syms.h"

//==========

void VAsyncFIFO::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAsyncFIFO::eval\n"); );
    VAsyncFIFO__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAsyncFIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/mnt/BackUp/IdeaProjects/MAGI_PROJECT/tmp/job_1/AsyncFIFO.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VAsyncFIFO::_eval_initial_loop(VAsyncFIFO__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/mnt/BackUp/IdeaProjects/MAGI_PROJECT/tmp/job_1/AsyncFIFO.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VAsyncFIFO::_sequent__TOP__2(VAsyncFIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncFIFO::_sequent__TOP__2\n"); );
    VAsyncFIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->clkA_reset) {
        vlTOPp->AsyncFIFO__DOT__popToPushGray_buffercc__DOT__buffers_1 = 0U;
        vlTOPp->AsyncFIFO__DOT__popToPushGray_buffercc__DOT__buffers_0 = 0U;
    } else {
        vlTOPp->AsyncFIFO__DOT__popToPushGray_buffercc__DOT__buffers_1 
            = vlTOPp->AsyncFIFO__DOT__popToPushGray_buffercc__DOT__buffers_0;
        vlTOPp->AsyncFIFO__DOT__popToPushGray_buffercc__DOT__buffers_0 
            = vlTOPp->AsyncFIFO__DOT__popCC_popPtrGray;
    }
    vlTOPp->AsyncFIFO__DOT___zz_io_pushOccupancy_3 
        = (1U & (((IData)(vlTOPp->AsyncFIFO__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                  >> 4U) ^ ((IData)(vlTOPp->AsyncFIFO__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                            >> 5U)));
    vlTOPp->AsyncFIFO__DOT___zz_io_pushOccupancy_2 
        = (1U & (((IData)(vlTOPp->AsyncFIFO__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                  >> 3U) ^ (IData)(vlTOPp->AsyncFIFO__DOT___zz_io_pushOccupancy_3)));
    vlTOPp->AsyncFIFO__DOT___zz_io_pushOccupancy_1 
        = (1U & (((IData)(vlTOPp->AsyncFIFO__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                  >> 2U) ^ (IData)(vlTOPp->AsyncFIFO__DOT___zz_io_pushOccupancy_2)));
    vlTOPp->AsyncFIFO__DOT___zz_io_pushOccupancy = 
        (1U & (((IData)(vlTOPp->AsyncFIFO__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                >> 1U) ^ (IData)(vlTOPp->AsyncFIFO__DOT___zz_io_pushOccupancy_1)));
}

VL_INLINE_OPT void VAsyncFIFO::_sequent__TOP__3(VAsyncFIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncFIFO::_sequent__TOP__3\n"); );
    VAsyncFIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__AsyncFIFO__DOT__ram__v0 = 0U;
    if (vlTOPp->AsyncFIFO__DOT___zz_1) {
        vlTOPp->__Vdlyvval__AsyncFIFO__DOT__ram__v0 
            = vlTOPp->io_push_payload;
        vlTOPp->__Vdlyvset__AsyncFIFO__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__AsyncFIFO__DOT__ram__v0 
            = (0x1fU & (IData)(vlTOPp->AsyncFIFO__DOT__pushCC_pushPtr));
    }
}

VL_INLINE_OPT void VAsyncFIFO::_sequent__TOP__4(VAsyncFIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncFIFO::_sequent__TOP__4\n"); );
    VAsyncFIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->AsyncFIFO__DOT__bufferCC_3__DOT__buffers_1) {
        vlTOPp->AsyncFIFO__DOT__popCC_popPtrGray = 0U;
    } else {
        if (((IData)(vlTOPp->io_pop_valid) & (IData)(vlTOPp->io_pop_ready))) {
            vlTOPp->AsyncFIFO__DOT__popCC_popPtrGray 
                = (0x3fU & ((0x1fU & (((IData)(1U) 
                                       + (IData)(vlTOPp->AsyncFIFO__DOT__popCC_popPtr)) 
                                      >> 1U)) ^ ((IData)(1U) 
                                                 + (IData)(vlTOPp->AsyncFIFO__DOT__popCC_popPtr))));
        }
    }
    if (vlTOPp->AsyncFIFO__DOT__bufferCC_3__DOT__buffers_1) {
        vlTOPp->AsyncFIFO__DOT__pushToPopGray_buffercc__DOT__buffers_1 = 0U;
        vlTOPp->AsyncFIFO__DOT__pushToPopGray_buffercc__DOT__buffers_0 = 0U;
    } else {
        vlTOPp->AsyncFIFO__DOT__pushToPopGray_buffercc__DOT__buffers_1 
            = vlTOPp->AsyncFIFO__DOT__pushToPopGray_buffercc__DOT__buffers_0;
        vlTOPp->AsyncFIFO__DOT__pushToPopGray_buffercc__DOT__buffers_0 
            = vlTOPp->AsyncFIFO__DOT__pushCC_pushPtrGray;
    }
    vlTOPp->AsyncFIFO__DOT___zz_io_popOccupancy_3 = 
        (1U & (((IData)(vlTOPp->AsyncFIFO__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                >> 4U) ^ ((IData)(vlTOPp->AsyncFIFO__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                          >> 5U)));
    vlTOPp->AsyncFIFO__DOT___zz_io_popOccupancy_2 = 
        (1U & (((IData)(vlTOPp->AsyncFIFO__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                >> 3U) ^ (IData)(vlTOPp->AsyncFIFO__DOT___zz_io_popOccupancy_3)));
    vlTOPp->AsyncFIFO__DOT___zz_io_popOccupancy_1 = 
        (1U & (((IData)(vlTOPp->AsyncFIFO__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                >> 2U) ^ (IData)(vlTOPp->AsyncFIFO__DOT___zz_io_popOccupancy_2)));
    vlTOPp->AsyncFIFO__DOT___zz_io_popOccupancy = (1U 
                                                   & (((IData)(vlTOPp->AsyncFIFO__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                                                       >> 1U) 
                                                      ^ (IData)(vlTOPp->AsyncFIFO__DOT___zz_io_popOccupancy_1)));
}

VL_INLINE_OPT void VAsyncFIFO::_sequent__TOP__5(VAsyncFIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncFIFO::_sequent__TOP__5\n"); );
    VAsyncFIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AsyncFIFO__DOT___zz_ram_port1 = vlTOPp->AsyncFIFO__DOT__ram
        [(0x1fU & (((IData)(vlTOPp->io_pop_valid) & (IData)(vlTOPp->io_pop_ready))
                    ? ((IData)(1U) + (IData)(vlTOPp->AsyncFIFO__DOT__popCC_popPtr))
                    : (IData)(vlTOPp->AsyncFIFO__DOT__popCC_popPtr)))];
    vlTOPp->io_pop_payload = vlTOPp->AsyncFIFO__DOT___zz_ram_port1;
}

VL_INLINE_OPT void VAsyncFIFO::_sequent__TOP__7(VAsyncFIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncFIFO::_sequent__TOP__7\n"); );
    VAsyncFIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->clkA_reset) {
        vlTOPp->AsyncFIFO__DOT__pushCC_pushPtrGray = 0U;
    } else {
        if (((IData)(vlTOPp->io_push_valid) & (IData)(vlTOPp->io_push_ready))) {
            vlTOPp->AsyncFIFO__DOT__pushCC_pushPtrGray 
                = (0x3fU & ((0x1fU & (((IData)(1U) 
                                       + (IData)(vlTOPp->AsyncFIFO__DOT__pushCC_pushPtr)) 
                                      >> 1U)) ^ ((IData)(1U) 
                                                 + (IData)(vlTOPp->AsyncFIFO__DOT__pushCC_pushPtr))));
        }
    }
    vlTOPp->io_push_ready = (1U & (~ (((3U & ((IData)(vlTOPp->AsyncFIFO__DOT__pushCC_pushPtrGray) 
                                              >> 4U)) 
                                       == (3U & (~ 
                                                 ((IData)(vlTOPp->AsyncFIFO__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                  >> 4U)))) 
                                      & ((0xfU & (IData)(vlTOPp->AsyncFIFO__DOT__pushCC_pushPtrGray)) 
                                         == (0xfU & (IData)(vlTOPp->AsyncFIFO__DOT__popToPushGray_buffercc__DOT__buffers_1))))));
    if (vlTOPp->clkA_reset) {
        vlTOPp->AsyncFIFO__DOT__pushCC_pushPtr = 0U;
    } else {
        if (vlTOPp->AsyncFIFO__DOT__io_push_fire_1) {
            vlTOPp->AsyncFIFO__DOT__pushCC_pushPtr 
                = vlTOPp->AsyncFIFO__DOT__pushCC_pushPtrPlus;
        }
    }
    vlTOPp->AsyncFIFO__DOT__pushCC_pushPtrPlus = (0x3fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlTOPp->AsyncFIFO__DOT__pushCC_pushPtr)));
    vlTOPp->io_pushOccupancy = (0x3fU & ((IData)(vlTOPp->AsyncFIFO__DOT__pushCC_pushPtr) 
                                         - ((0x20U 
                                             & (IData)(vlTOPp->AsyncFIFO__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                            | (((IData)(vlTOPp->AsyncFIFO__DOT___zz_io_pushOccupancy_3) 
                                                << 4U) 
                                               | (((IData)(vlTOPp->AsyncFIFO__DOT___zz_io_pushOccupancy_2) 
                                                   << 3U) 
                                                  | (((IData)(vlTOPp->AsyncFIFO__DOT___zz_io_pushOccupancy_1) 
                                                      << 2U) 
                                                     | (((IData)(vlTOPp->AsyncFIFO__DOT___zz_io_pushOccupancy) 
                                                         << 1U) 
                                                        | (1U 
                                                           & ((IData)(vlTOPp->AsyncFIFO__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                              ^ (IData)(vlTOPp->AsyncFIFO__DOT___zz_io_pushOccupancy))))))))));
}

VL_INLINE_OPT void VAsyncFIFO::_sequent__TOP__8(VAsyncFIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncFIFO::_sequent__TOP__8\n"); );
    VAsyncFIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__AsyncFIFO__DOT__ram__v0) {
        vlTOPp->AsyncFIFO__DOT__ram[vlTOPp->__Vdlyvdim0__AsyncFIFO__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__AsyncFIFO__DOT__ram__v0;
    }
}

VL_INLINE_OPT void VAsyncFIFO::_sequent__TOP__9(VAsyncFIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncFIFO::_sequent__TOP__9\n"); );
    VAsyncFIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->AsyncFIFO__DOT__bufferCC_3__DOT__buffers_1) {
        vlTOPp->AsyncFIFO__DOT__popCC_popPtr = 0U;
    } else {
        if (((IData)(vlTOPp->io_pop_valid) & (IData)(vlTOPp->io_pop_ready))) {
            vlTOPp->AsyncFIFO__DOT__popCC_popPtr = vlTOPp->AsyncFIFO__DOT__popCC_popPtrPlus;
        }
    }
    vlTOPp->io_pop_valid = ((IData)(vlTOPp->AsyncFIFO__DOT__popCC_popPtrGray) 
                            != (IData)(vlTOPp->AsyncFIFO__DOT__pushToPopGray_buffercc__DOT__buffers_1));
    vlTOPp->AsyncFIFO__DOT__popCC_popPtrPlus = (0x3fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlTOPp->AsyncFIFO__DOT__popCC_popPtr)));
    vlTOPp->io_popOccupancy = (0x3fU & (((0x20U & (IData)(vlTOPp->AsyncFIFO__DOT__pushToPopGray_buffercc__DOT__buffers_1)) 
                                         | (((IData)(vlTOPp->AsyncFIFO__DOT___zz_io_popOccupancy_3) 
                                             << 4U) 
                                            | (((IData)(vlTOPp->AsyncFIFO__DOT___zz_io_popOccupancy_2) 
                                                << 3U) 
                                               | (((IData)(vlTOPp->AsyncFIFO__DOT___zz_io_popOccupancy_1) 
                                                   << 2U) 
                                                  | (((IData)(vlTOPp->AsyncFIFO__DOT___zz_io_popOccupancy) 
                                                      << 1U) 
                                                     | (1U 
                                                        & ((IData)(vlTOPp->AsyncFIFO__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                                                           ^ (IData)(vlTOPp->AsyncFIFO__DOT___zz_io_popOccupancy)))))))) 
                                        - (IData)(vlTOPp->AsyncFIFO__DOT__popCC_popPtr)));
}

VL_INLINE_OPT void VAsyncFIFO::_combo__TOP__10(VAsyncFIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncFIFO::_combo__TOP__10\n"); );
    VAsyncFIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AsyncFIFO__DOT__io_push_fire_1 = ((IData)(vlTOPp->io_push_valid) 
                                              & (IData)(vlTOPp->io_push_ready));
    vlTOPp->AsyncFIFO__DOT___zz_1 = 0U;
    if (vlTOPp->AsyncFIFO__DOT__io_push_fire_1) {
        vlTOPp->AsyncFIFO__DOT___zz_1 = 1U;
    }
}

VL_INLINE_OPT void VAsyncFIFO::_sequent__TOP__11(VAsyncFIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncFIFO::_sequent__TOP__11\n"); );
    VAsyncFIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AsyncFIFO__DOT__bufferCC_3__DOT__buffers_1 
        = ((IData)(vlTOPp->clkA_reset) | (IData)(vlTOPp->AsyncFIFO__DOT__bufferCC_3__DOT__buffers_0));
    vlTOPp->AsyncFIFO__DOT__bufferCC_3__DOT__buffers_0 
        = vlTOPp->clkA_reset;
}

void VAsyncFIFO::_eval(VAsyncFIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncFIFO::_eval\n"); );
    VAsyncFIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clkA_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clkA_clk))) 
         | ((IData)(vlTOPp->clkA_reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__clkA_reset))))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if (((IData)(vlTOPp->clkA_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clkA_clk)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__AsyncFIFO__DOT__bufferCC_3__DOT__buffers_1) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__AsyncFIFO__DOT__bufferCC_3__DOT__buffers_1))) 
         | ((IData)(vlTOPp->clkB_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clkB_clk))))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlTOPp->clkB_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clkB_clk)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    if ((((IData)(vlTOPp->clkA_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clkA_clk))) 
         | ((IData)(vlTOPp->clkA_reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__clkA_reset))))) {
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlTOPp->clkA_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clkA_clk)))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->__Vm_traceActivity[3U] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__AsyncFIFO__DOT__bufferCC_3__DOT__buffers_1) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__AsyncFIFO__DOT__bufferCC_3__DOT__buffers_1))) 
         | ((IData)(vlTOPp->clkB_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clkB_clk))))) {
        vlTOPp->_sequent__TOP__9(vlSymsp);
    }
    vlTOPp->_combo__TOP__10(vlSymsp);
    if ((((IData)(vlTOPp->clkA_reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__clkA_reset))) 
         | ((IData)(vlTOPp->clkB_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clkB_clk))))) {
        vlTOPp->_sequent__TOP__11(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clkA_reset = vlTOPp->clkA_reset;
    vlTOPp->__Vclklast__TOP__clkB_clk = vlTOPp->clkB_clk;
    vlTOPp->__Vclklast__TOP__clkA_clk = vlTOPp->clkA_clk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__AsyncFIFO__DOT__bufferCC_3__DOT__buffers_1 
        = vlTOPp->__VinpClk__TOP__AsyncFIFO__DOT__bufferCC_3__DOT__buffers_1;
    vlTOPp->__VinpClk__TOP__AsyncFIFO__DOT__bufferCC_3__DOT__buffers_1 
        = vlTOPp->AsyncFIFO__DOT__bufferCC_3__DOT__buffers_1;
}

VL_INLINE_OPT QData VAsyncFIFO::_change_request(VAsyncFIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncFIFO::_change_request\n"); );
    VAsyncFIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VAsyncFIFO::_change_request_1(VAsyncFIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncFIFO::_change_request_1\n"); );
    VAsyncFIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->AsyncFIFO__DOT__bufferCC_3__DOT__buffers_1 ^ vlTOPp->__Vchglast__TOP__AsyncFIFO__DOT__bufferCC_3__DOT__buffers_1));
    VL_DEBUG_IF( if(__req && ((vlTOPp->AsyncFIFO__DOT__bufferCC_3__DOT__buffers_1 ^ vlTOPp->__Vchglast__TOP__AsyncFIFO__DOT__bufferCC_3__DOT__buffers_1))) VL_DBG_MSGF("        CHANGE: /mnt/BackUp/IdeaProjects/MAGI_PROJECT/tmp/job_1/AsyncFIFO.v:199: AsyncFIFO.bufferCC_3.buffers_1\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__AsyncFIFO__DOT__bufferCC_3__DOT__buffers_1 
        = vlTOPp->AsyncFIFO__DOT__bufferCC_3__DOT__buffers_1;
    return __req;
}

#ifdef VL_DEBUG
void VAsyncFIFO::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncFIFO::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((io_push_valid & 0xfeU))) {
        Verilated::overWidthError("io_push_valid");}
    if (VL_UNLIKELY((io_pop_ready & 0xfeU))) {
        Verilated::overWidthError("io_pop_ready");}
    if (VL_UNLIKELY((clkA_clk & 0xfeU))) {
        Verilated::overWidthError("clkA_clk");}
    if (VL_UNLIKELY((clkA_reset & 0xfeU))) {
        Verilated::overWidthError("clkA_reset");}
    if (VL_UNLIKELY((clkB_clk & 0xfeU))) {
        Verilated::overWidthError("clkB_clk");}
}
#endif  // VL_DEBUG
