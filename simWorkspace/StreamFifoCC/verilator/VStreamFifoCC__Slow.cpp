// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStreamFifoCC.h for the primary calling header

#include "VStreamFifoCC.h"
#include "VStreamFifoCC__Syms.h"

//==========

VL_CTOR_IMP(VStreamFifoCC) {
    VStreamFifoCC__Syms* __restrict vlSymsp = __VlSymsp = new VStreamFifoCC__Syms(this, name());
    VStreamFifoCC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VStreamFifoCC::__Vconfigure(VStreamFifoCC__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

VStreamFifoCC::~VStreamFifoCC() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VStreamFifoCC::_settle__TOP__6(VStreamFifoCC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamFifoCC::_settle__TOP__6\n"); );
    VStreamFifoCC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_pop_payload = vlTOPp->StreamFifoCC__DOT___zz_ram_port1;
    vlTOPp->StreamFifoCC__DOT___zz_io_pushOccupancy_3 
        = (1U & (((IData)(vlTOPp->StreamFifoCC__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                  >> 4U) ^ ((IData)(vlTOPp->StreamFifoCC__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                            >> 5U)));
    vlTOPp->StreamFifoCC__DOT___zz_io_popOccupancy_3 
        = (1U & (((IData)(vlTOPp->StreamFifoCC__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 4U) ^ ((IData)(vlTOPp->StreamFifoCC__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                            >> 5U)));
    vlTOPp->io_push_ready = (1U & (~ (((3U & ((IData)(vlTOPp->StreamFifoCC__DOT__pushCC_pushPtrGray) 
                                              >> 4U)) 
                                       == (3U & (~ 
                                                 ((IData)(vlTOPp->StreamFifoCC__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                  >> 4U)))) 
                                      & ((0xfU & (IData)(vlTOPp->StreamFifoCC__DOT__pushCC_pushPtrGray)) 
                                         == (0xfU & (IData)(vlTOPp->StreamFifoCC__DOT__popToPushGray_buffercc__DOT__buffers_1))))));
    vlTOPp->io_pop_valid = ((IData)(vlTOPp->StreamFifoCC__DOT__popCC_popPtrGray) 
                            != (IData)(vlTOPp->StreamFifoCC__DOT__pushToPopGray_buffercc__DOT__buffers_1));
    vlTOPp->StreamFifoCC__DOT__pushCC_pushPtrPlus = 
        (0x3fU & ((IData)(1U) + (IData)(vlTOPp->StreamFifoCC__DOT__pushCC_pushPtr)));
    vlTOPp->StreamFifoCC__DOT__popCC_popPtrPlus = (0x3fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlTOPp->StreamFifoCC__DOT__popCC_popPtr)));
    vlTOPp->StreamFifoCC__DOT___zz_io_pushOccupancy_2 
        = (1U & (((IData)(vlTOPp->StreamFifoCC__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                  >> 3U) ^ (IData)(vlTOPp->StreamFifoCC__DOT___zz_io_pushOccupancy_3)));
    vlTOPp->StreamFifoCC__DOT___zz_io_popOccupancy_2 
        = (1U & (((IData)(vlTOPp->StreamFifoCC__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 3U) ^ (IData)(vlTOPp->StreamFifoCC__DOT___zz_io_popOccupancy_3)));
    vlTOPp->StreamFifoCC__DOT__io_push_fire_1 = ((IData)(vlTOPp->io_push_valid) 
                                                 & (IData)(vlTOPp->io_push_ready));
    vlTOPp->StreamFifoCC__DOT___zz_io_pushOccupancy_1 
        = (1U & (((IData)(vlTOPp->StreamFifoCC__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                  >> 2U) ^ (IData)(vlTOPp->StreamFifoCC__DOT___zz_io_pushOccupancy_2)));
    vlTOPp->StreamFifoCC__DOT___zz_io_popOccupancy_1 
        = (1U & (((IData)(vlTOPp->StreamFifoCC__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 2U) ^ (IData)(vlTOPp->StreamFifoCC__DOT___zz_io_popOccupancy_2)));
    vlTOPp->StreamFifoCC__DOT___zz_1 = 0U;
    if (vlTOPp->StreamFifoCC__DOT__io_push_fire_1) {
        vlTOPp->StreamFifoCC__DOT___zz_1 = 1U;
    }
    vlTOPp->StreamFifoCC__DOT___zz_io_pushOccupancy 
        = (1U & (((IData)(vlTOPp->StreamFifoCC__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                  >> 1U) ^ (IData)(vlTOPp->StreamFifoCC__DOT___zz_io_pushOccupancy_1)));
    vlTOPp->StreamFifoCC__DOT___zz_io_popOccupancy 
        = (1U & (((IData)(vlTOPp->StreamFifoCC__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 1U) ^ (IData)(vlTOPp->StreamFifoCC__DOT___zz_io_popOccupancy_1)));
    vlTOPp->io_pushOccupancy = (0x3fU & ((IData)(vlTOPp->StreamFifoCC__DOT__pushCC_pushPtr) 
                                         - ((0x20U 
                                             & (IData)(vlTOPp->StreamFifoCC__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                            | (((IData)(vlTOPp->StreamFifoCC__DOT___zz_io_pushOccupancy_3) 
                                                << 4U) 
                                               | (((IData)(vlTOPp->StreamFifoCC__DOT___zz_io_pushOccupancy_2) 
                                                   << 3U) 
                                                  | (((IData)(vlTOPp->StreamFifoCC__DOT___zz_io_pushOccupancy_1) 
                                                      << 2U) 
                                                     | (((IData)(vlTOPp->StreamFifoCC__DOT___zz_io_pushOccupancy) 
                                                         << 1U) 
                                                        | (1U 
                                                           & ((IData)(vlTOPp->StreamFifoCC__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                              ^ (IData)(vlTOPp->StreamFifoCC__DOT___zz_io_pushOccupancy))))))))));
    vlTOPp->io_popOccupancy = (0x3fU & (((0x20U & (IData)(vlTOPp->StreamFifoCC__DOT__pushToPopGray_buffercc__DOT__buffers_1)) 
                                         | (((IData)(vlTOPp->StreamFifoCC__DOT___zz_io_popOccupancy_3) 
                                             << 4U) 
                                            | (((IData)(vlTOPp->StreamFifoCC__DOT___zz_io_popOccupancy_2) 
                                                << 3U) 
                                               | (((IData)(vlTOPp->StreamFifoCC__DOT___zz_io_popOccupancy_1) 
                                                   << 2U) 
                                                  | (((IData)(vlTOPp->StreamFifoCC__DOT___zz_io_popOccupancy) 
                                                      << 1U) 
                                                     | (1U 
                                                        & ((IData)(vlTOPp->StreamFifoCC__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                                                           ^ (IData)(vlTOPp->StreamFifoCC__DOT___zz_io_popOccupancy)))))))) 
                                        - (IData)(vlTOPp->StreamFifoCC__DOT__popCC_popPtr)));
}

void VStreamFifoCC::_eval_initial(VStreamFifoCC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamFifoCC::_eval_initial\n"); );
    VStreamFifoCC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clkA_reset = (1U & (~ (IData)(vlTOPp->clkA_reset)));
    vlTOPp->__Vclklast__TOP__clkB_clk = (1U & (~ (IData)(vlTOPp->clkB_clk)));
    vlTOPp->__Vclklast__TOP__clkA_clk = (1U & (~ (IData)(vlTOPp->clkA_clk)));
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__StreamFifoCC__DOT__bufferCC_3__DOT__buffers_1 
        = (1U & (~ (IData)(vlTOPp->__VinpClk__TOP__StreamFifoCC__DOT__bufferCC_3__DOT__buffers_1)));
}

void VStreamFifoCC::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamFifoCC::final\n"); );
    // Variables
    VStreamFifoCC__Syms* __restrict vlSymsp = this->__VlSymsp;
    VStreamFifoCC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VStreamFifoCC::_eval_settle(VStreamFifoCC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamFifoCC::_eval_settle\n"); );
    VStreamFifoCC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__6(vlSymsp);
}

void VStreamFifoCC::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamFifoCC::_ctor_var_reset\n"); );
    // Body
    io_push_valid = VL_RAND_RESET_I(1);
    io_push_ready = VL_RAND_RESET_I(1);
    io_push_payload = VL_RAND_RESET_I(32);
    io_pop_valid = VL_RAND_RESET_I(1);
    io_pop_ready = VL_RAND_RESET_I(1);
    io_pop_payload = VL_RAND_RESET_I(32);
    io_pushOccupancy = VL_RAND_RESET_I(6);
    io_popOccupancy = VL_RAND_RESET_I(6);
    clkA_clk = 0;
    clkA_reset = 0;
    clkB_clk = 0;
    StreamFifoCC__DOT___zz_ram_port1 = VL_RAND_RESET_I(32);
    StreamFifoCC__DOT___zz_1 = VL_RAND_RESET_I(1);
    StreamFifoCC__DOT__pushCC_pushPtr = VL_RAND_RESET_I(6);
    StreamFifoCC__DOT__pushCC_pushPtrPlus = VL_RAND_RESET_I(6);
    StreamFifoCC__DOT__pushCC_pushPtrGray = VL_RAND_RESET_I(6);
    StreamFifoCC__DOT__io_push_fire_1 = VL_RAND_RESET_I(1);
    StreamFifoCC__DOT___zz_io_pushOccupancy = VL_RAND_RESET_I(1);
    StreamFifoCC__DOT___zz_io_pushOccupancy_1 = VL_RAND_RESET_I(1);
    StreamFifoCC__DOT___zz_io_pushOccupancy_2 = VL_RAND_RESET_I(1);
    StreamFifoCC__DOT___zz_io_pushOccupancy_3 = VL_RAND_RESET_I(1);
    StreamFifoCC__DOT__popCC_popPtr = VL_RAND_RESET_I(6);
    StreamFifoCC__DOT__popCC_popPtrPlus = VL_RAND_RESET_I(6);
    StreamFifoCC__DOT__popCC_popPtrGray = VL_RAND_RESET_I(6);
    StreamFifoCC__DOT___zz_io_popOccupancy = VL_RAND_RESET_I(1);
    StreamFifoCC__DOT___zz_io_popOccupancy_1 = VL_RAND_RESET_I(1);
    StreamFifoCC__DOT___zz_io_popOccupancy_2 = VL_RAND_RESET_I(1);
    StreamFifoCC__DOT___zz_io_popOccupancy_3 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            StreamFifoCC__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    StreamFifoCC__DOT__popToPushGray_buffercc__DOT__buffers_0 = VL_RAND_RESET_I(6);
    StreamFifoCC__DOT__popToPushGray_buffercc__DOT__buffers_1 = VL_RAND_RESET_I(6);
    StreamFifoCC__DOT__bufferCC_3__DOT__buffers_0 = VL_RAND_RESET_I(1);
    StreamFifoCC__DOT__bufferCC_3__DOT__buffers_1 = 0;
    StreamFifoCC__DOT__pushToPopGray_buffercc__DOT__buffers_0 = VL_RAND_RESET_I(6);
    StreamFifoCC__DOT__pushToPopGray_buffercc__DOT__buffers_1 = VL_RAND_RESET_I(6);
    __Vdlyvdim0__StreamFifoCC__DOT__ram__v0 = 0;
    __Vdlyvval__StreamFifoCC__DOT__ram__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__StreamFifoCC__DOT__ram__v0 = 0;
    __VinpClk__TOP__StreamFifoCC__DOT__bufferCC_3__DOT__buffers_1 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__StreamFifoCC__DOT__bufferCC_3__DOT__buffers_1 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
