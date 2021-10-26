// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxi4Ram.h for the primary calling header

#include "VAxi4Ram.h"
#include "VAxi4Ram__Syms.h"

//==========

VL_CTOR_IMP(VAxi4Ram) {
    VAxi4Ram__Syms* __restrict vlSymsp = __VlSymsp = new VAxi4Ram__Syms(this, name());
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VAxi4Ram::__Vconfigure(VAxi4Ram__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VAxi4Ram::~VAxi4Ram() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VAxi4Ram::_settle__TOP__6(VAxi4Ram__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Ram::_settle__TOP__6\n"); );
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->Axi4Ram__DOT___zz_rd_addr = (0x1fffU & 
                                         ((IData)(vlTOPp->Axi4Ram__DOT__rd_addr) 
                                          + (0xffU 
                                             & ((IData)(1U) 
                                                << (IData)(vlTOPp->Axi4Ram__DOT__rd_size)))));
    vlTOPp->axi4_wready = (1U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_state));
    vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_value));
    vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_value));
    vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_value));
    vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_value));
    vlTOPp->Axi4Ram__DOT__axi4_w_fire = ((IData)(vlTOPp->axi4_wvalid) 
                                         & (IData)(vlTOPp->axi4_wready));
    vlTOPp->Axi4Ram__DOT__axi4_w_fire_2 = ((IData)(vlTOPp->axi4_wvalid) 
                                           & (IData)(vlTOPp->axi4_wready));
    vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_risingOccupancy));
    vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_risingOccupancy));
    vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_full = 
        ((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_ptrMatch) 
         & (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_risingOccupancy));
    vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_full = 
        ((IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_ptrMatch) 
         & (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_risingOccupancy));
    vlTOPp->axi4_arready = (1U & (~ (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_full)));
    vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->axi4_arvalid) & (~ (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_full)));
    vlTOPp->Axi4Ram__DOT__ar_fifo_io_pop_valid = (1U 
                                                  & ((~ 
                                                      ((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_ptrMatch) 
                                                       & (~ (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_risingOccupancy)))) 
                                                     & (~ 
                                                        ((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT___zz_io_pop_valid) 
                                                         & (~ (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_full))))));
    vlTOPp->axi4_awready = (1U & (~ (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_full)));
    vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->axi4_awvalid) & (~ (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_full)));
    vlTOPp->Axi4Ram__DOT__aw_fifo_io_pop_valid = (1U 
                                                  & ((~ 
                                                      ((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_ptrMatch) 
                                                       & (~ (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_risingOccupancy)))) 
                                                     & (~ 
                                                        ((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT___zz_io_pop_valid) 
                                                         & (~ (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_full))))));
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
    vlTOPp->Axi4Ram__DOT__ar_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushing) {
        vlTOPp->Axi4Ram__DOT__ar_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushing) {
        vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo_io_pop_valid) 
           & (0U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_r_state)));
    vlTOPp->Axi4Ram__DOT__aw_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushing) {
        vlTOPp->Axi4Ram__DOT__aw_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushing) {
        vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo_io_pop_valid) 
           & (0U == (IData)(vlTOPp->Axi4Ram__DOT__axi4_w_state)));
    vlTOPp->Axi4Ram__DOT__b_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushing) {
        vlTOPp->Axi4Ram__DOT__b_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushing) {
        vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->axi4_bvalid = vlTOPp->Axi4Ram__DOT__b_fifo_io_pop_valid;
    vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->Axi4Ram__DOT__b_fifo_io_pop_valid) 
           & (IData)(vlTOPp->axi4_bready));
    vlTOPp->Axi4Ram__DOT__r_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushing) {
        vlTOPp->Axi4Ram__DOT__r_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushing) {
        vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->axi4_rvalid = vlTOPp->Axi4Ram__DOT__r_fifo_io_pop_valid;
    vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->Axi4Ram__DOT__r_fifo_io_pop_valid) 
           & (IData)(vlTOPp->axi4_rready));
    vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_valueNext 
        = (3U & ((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popping) {
        vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_valueNext 
        = (3U & ((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popping) {
        vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_valueNext 
        = (3U & ((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popping) {
        vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_valueNext 
        = (0xffU & ((IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popping) {
        vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_valueNext 
        = (3U & ((IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_valueNext 
        = (3U & ((IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_valueNext 
        = (3U & ((IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_valueNext 
        = (0xffU & ((IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_willIncrement)));
}

void VAxi4Ram::_initial__TOP__7(VAxi4Ram__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Ram::_initial__TOP__7\n"); );
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*287:0*/ __Vtemp1[9];
    WData/*287:0*/ __Vtemp2[9];
    WData/*287:0*/ __Vtemp3[9];
    WData/*287:0*/ __Vtemp4[9];
    // Body
    __Vtemp1[0U] = 0x2e62696eU;
    __Vtemp1[1U] = 0x626f6c30U;
    __Vtemp1[2U] = 0x5f73796dU;
    __Vtemp1[3U] = 0x5f72616dU;
    __Vtemp1[4U] = 0x6576656cU;
    __Vtemp1[5U] = 0x746f706cU;
    __Vtemp1[6U] = 0x6d2e765fU;
    __Vtemp1[7U] = 0x69345261U;
    __Vtemp1[8U] = 0x4178U;
    VL_READMEM_N(false, 8, 2048, 0, VL_CVT_PACK_STR_NW(9, __Vtemp1)
                 , vlTOPp->Axi4Ram__DOT__ram_symbol0
                 , 0, ~VL_ULL(0));
    __Vtemp2[0U] = 0x2e62696eU;
    __Vtemp2[1U] = 0x626f6c31U;
    __Vtemp2[2U] = 0x5f73796dU;
    __Vtemp2[3U] = 0x5f72616dU;
    __Vtemp2[4U] = 0x6576656cU;
    __Vtemp2[5U] = 0x746f706cU;
    __Vtemp2[6U] = 0x6d2e765fU;
    __Vtemp2[7U] = 0x69345261U;
    __Vtemp2[8U] = 0x4178U;
    VL_READMEM_N(false, 8, 2048, 0, VL_CVT_PACK_STR_NW(9, __Vtemp2)
                 , vlTOPp->Axi4Ram__DOT__ram_symbol1
                 , 0, ~VL_ULL(0));
    __Vtemp3[0U] = 0x2e62696eU;
    __Vtemp3[1U] = 0x626f6c32U;
    __Vtemp3[2U] = 0x5f73796dU;
    __Vtemp3[3U] = 0x5f72616dU;
    __Vtemp3[4U] = 0x6576656cU;
    __Vtemp3[5U] = 0x746f706cU;
    __Vtemp3[6U] = 0x6d2e765fU;
    __Vtemp3[7U] = 0x69345261U;
    __Vtemp3[8U] = 0x4178U;
    VL_READMEM_N(false, 8, 2048, 0, VL_CVT_PACK_STR_NW(9, __Vtemp3)
                 , vlTOPp->Axi4Ram__DOT__ram_symbol2
                 , 0, ~VL_ULL(0));
    __Vtemp4[0U] = 0x2e62696eU;
    __Vtemp4[1U] = 0x626f6c33U;
    __Vtemp4[2U] = 0x5f73796dU;
    __Vtemp4[3U] = 0x5f72616dU;
    __Vtemp4[4U] = 0x6576656cU;
    __Vtemp4[5U] = 0x746f706cU;
    __Vtemp4[6U] = 0x6d2e765fU;
    __Vtemp4[7U] = 0x69345261U;
    __Vtemp4[8U] = 0x4178U;
    VL_READMEM_N(false, 8, 2048, 0, VL_CVT_PACK_STR_NW(9, __Vtemp4)
                 , vlTOPp->Axi4Ram__DOT__ram_symbol3
                 , 0, ~VL_ULL(0));
}

void VAxi4Ram::_eval_initial(VAxi4Ram__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Ram::_eval_initial\n"); );
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->_initial__TOP__7(vlSymsp);
}

void VAxi4Ram::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Ram::final\n"); );
    // Variables
    VAxi4Ram__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAxi4Ram::_eval_settle(VAxi4Ram__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Ram::_eval_settle\n"); );
    VAxi4Ram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__6(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VAxi4Ram::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Ram::_ctor_var_reset\n"); );
    // Body
    axi4_awvalid = VL_RAND_RESET_I(1);
    axi4_awready = VL_RAND_RESET_I(1);
    axi4_awaddr = VL_RAND_RESET_I(13);
    axi4_awid = VL_RAND_RESET_I(8);
    axi4_awlen = VL_RAND_RESET_I(8);
    axi4_awsize = VL_RAND_RESET_I(3);
    axi4_awburst = VL_RAND_RESET_I(2);
    axi4_wvalid = VL_RAND_RESET_I(1);
    axi4_wready = VL_RAND_RESET_I(1);
    axi4_wdata = VL_RAND_RESET_I(32);
    axi4_wstrb = VL_RAND_RESET_I(4);
    axi4_wlast = VL_RAND_RESET_I(1);
    axi4_bvalid = VL_RAND_RESET_I(1);
    axi4_bready = VL_RAND_RESET_I(1);
    axi4_bid = VL_RAND_RESET_I(8);
    axi4_bresp = VL_RAND_RESET_I(2);
    axi4_arvalid = VL_RAND_RESET_I(1);
    axi4_arready = VL_RAND_RESET_I(1);
    axi4_araddr = VL_RAND_RESET_I(13);
    axi4_arid = VL_RAND_RESET_I(8);
    axi4_arlen = VL_RAND_RESET_I(8);
    axi4_arsize = VL_RAND_RESET_I(3);
    axi4_arburst = VL_RAND_RESET_I(2);
    axi4_rvalid = VL_RAND_RESET_I(1);
    axi4_rready = VL_RAND_RESET_I(1);
    axi4_rdata = VL_RAND_RESET_I(32);
    axi4_rid = VL_RAND_RESET_I(8);
    axi4_rresp = VL_RAND_RESET_I(2);
    axi4_rlast = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__ar_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__aw_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__b_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__r_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    Axi4Ram__DOT___zz_rd_addr = VL_RAND_RESET_I(13);
    Axi4Ram__DOT___zz_wr_addr = VL_RAND_RESET_I(13);
    Axi4Ram__DOT__axi4_r_state = VL_RAND_RESET_I(2);
    Axi4Ram__DOT__rd_cnt = VL_RAND_RESET_I(8);
    Axi4Ram__DOT__rd_addr = VL_RAND_RESET_I(13);
    Axi4Ram__DOT__rd_id = VL_RAND_RESET_I(8);
    Axi4Ram__DOT__rd_size = VL_RAND_RESET_I(3);
    Axi4Ram__DOT__rd_burst = VL_RAND_RESET_I(2);
    Axi4Ram__DOT___zz_io_push_payload_last = VL_RAND_RESET_I(1);
    Axi4Ram__DOT___zz_io_push_valid = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__axi4_w_state = VL_RAND_RESET_I(2);
    Axi4Ram__DOT__wr_addr = VL_RAND_RESET_I(13);
    Axi4Ram__DOT__axi4_w_fire = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__wr_cnt = VL_RAND_RESET_I(8);
    Axi4Ram__DOT__wr_size = VL_RAND_RESET_I(3);
    Axi4Ram__DOT__wr_burst = VL_RAND_RESET_I(2);
    Axi4Ram__DOT__b_valid = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__b_id = VL_RAND_RESET_I(8);
    Axi4Ram__DOT__axi4_w_fire_2 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2048; ++__Vi0) {
            Axi4Ram__DOT__ram_symbol0[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<2048; ++__Vi0) {
            Axi4Ram__DOT__ram_symbol1[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<2048; ++__Vi0) {
            Axi4Ram__DOT__ram_symbol2[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<2048; ++__Vi0) {
            Axi4Ram__DOT__ram_symbol3[__Vi0] = VL_RAND_RESET_I(8);
    }}
    Axi4Ram__DOT___zz_ramsymbol_read = VL_RAND_RESET_I(8);
    Axi4Ram__DOT___zz_ramsymbol_read_1 = VL_RAND_RESET_I(8);
    Axi4Ram__DOT___zz_ramsymbol_read_2 = VL_RAND_RESET_I(8);
    Axi4Ram__DOT___zz_ramsymbol_read_3 = VL_RAND_RESET_I(8);
    Axi4Ram__DOT__ar_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_Q(34);
    Axi4Ram__DOT__ar_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(2);
    Axi4Ram__DOT__ar_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(2);
    Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(2);
    Axi4Ram__DOT__ar_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(2);
    Axi4Ram__DOT__ar_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__ar_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__ar_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__ar_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__ar_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__ar_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            Axi4Ram__DOT__ar_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_Q(34);
    }}
    Axi4Ram__DOT__aw_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_Q(34);
    Axi4Ram__DOT__aw_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(2);
    Axi4Ram__DOT__aw_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(2);
    Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(2);
    Axi4Ram__DOT__aw_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(2);
    Axi4Ram__DOT__aw_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__aw_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__aw_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__aw_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__aw_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__aw_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            Axi4Ram__DOT__aw_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_Q(34);
    }}
    Axi4Ram__DOT__b_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(10);
    Axi4Ram__DOT__b_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(2);
    Axi4Ram__DOT__b_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(2);
    Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(2);
    Axi4Ram__DOT__b_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(2);
    Axi4Ram__DOT__b_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__b_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__b_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__b_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__b_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__b_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            Axi4Ram__DOT__b_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(10);
    }}
    Axi4Ram__DOT__r_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_Q(43);
    Axi4Ram__DOT__r_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(8);
    Axi4Ram__DOT__r_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(8);
    Axi4Ram__DOT__r_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(8);
    Axi4Ram__DOT__r_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__r_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__r_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__r_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__r_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    Axi4Ram__DOT__r_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            Axi4Ram__DOT__r_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_Q(43);
    }}
    __Vdlyvdim0__Axi4Ram__DOT__ram_symbol1__v0 = 0;
    __Vdlyvval__Axi4Ram__DOT__ram_symbol1__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__Axi4Ram__DOT__ram_symbol1__v0 = 0;
    __Vdlyvdim0__Axi4Ram__DOT__ram_symbol0__v0 = 0;
    __Vdlyvval__Axi4Ram__DOT__ram_symbol0__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__Axi4Ram__DOT__ram_symbol0__v0 = 0;
    __Vdlyvdim0__Axi4Ram__DOT__ram_symbol2__v0 = 0;
    __Vdlyvval__Axi4Ram__DOT__ram_symbol2__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__Axi4Ram__DOT__ram_symbol2__v0 = 0;
    __Vdlyvdim0__Axi4Ram__DOT__ram_symbol3__v0 = 0;
    __Vdlyvval__Axi4Ram__DOT__ram_symbol3__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__Axi4Ram__DOT__ram_symbol3__v0 = 0;
    __Vdly__Axi4Ram__DOT__rd_addr = VL_RAND_RESET_I(13);
    __Vdly__Axi4Ram__DOT__rd_cnt = VL_RAND_RESET_I(8);
    __Vdly__Axi4Ram__DOT__wr_cnt = VL_RAND_RESET_I(8);
    __Vdlyvdim0__Axi4Ram__DOT__ar_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__Axi4Ram__DOT__ar_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_Q(34);
    __Vdlyvset__Axi4Ram__DOT__ar_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvdim0__Axi4Ram__DOT__aw_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__Axi4Ram__DOT__aw_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_Q(34);
    __Vdlyvset__Axi4Ram__DOT__aw_fifo__DOT__logic_ram__v0 = 0;
    __Vdly__Axi4Ram__DOT__axi4_w_state = VL_RAND_RESET_I(2);
    __Vdly__Axi4Ram__DOT__axi4_r_state = VL_RAND_RESET_I(2);
    __Vm_traceActivity = 0;
}
