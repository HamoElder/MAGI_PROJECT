// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxi4Rom.h for the primary calling header

#include "VAxi4Rom.h"
#include "VAxi4Rom__Syms.h"

//==========

VL_CTOR_IMP(VAxi4Rom) {
    VAxi4Rom__Syms* __restrict vlSymsp = __VlSymsp = new VAxi4Rom__Syms(this, name());
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VAxi4Rom::__Vconfigure(VAxi4Rom__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VAxi4Rom::~VAxi4Rom() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VAxi4Rom::_settle__TOP__4(VAxi4Rom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Rom::_settle__TOP__4\n"); );
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axi4_rdata = (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT___zz_logic_ram_port0);
    vlTOPp->axi4_rid = (0xffU & (IData)((vlTOPp->Axi4Rom__DOT__r_fifo__DOT___zz_logic_ram_port0 
                                         >> 0x20U)));
    vlTOPp->axi4_rresp = (3U & (IData)((vlTOPp->Axi4Rom__DOT__r_fifo__DOT___zz_logic_ram_port0 
                                        >> 0x28U)));
    vlTOPp->axi4_rlast = (1U & (IData)((vlTOPp->Axi4Rom__DOT__r_fifo__DOT___zz_logic_ram_port0 
                                        >> 0x2aU)));
    vlTOPp->Axi4Rom__DOT___zz_rd_addr = (0x1fffU & 
                                         ((IData)(vlTOPp->Axi4Rom__DOT__rd_addr) 
                                          + (0xffU 
                                             & ((IData)(1U) 
                                                << (IData)(vlTOPp->Axi4Rom__DOT__rd_size)))));
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
    vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->axi4_arvalid) & (~ (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_full)));
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
    vlTOPp->Axi4Rom__DOT__ar_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushing) {
        vlTOPp->Axi4Rom__DOT__ar_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushing) {
        vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
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
    vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->Axi4Rom__DOT__r_fifo_io_pop_valid) 
           & (IData)(vlTOPp->axi4_rready));
    vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_valueNext 
        = (3U & ((IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popping) {
        vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_valueNext 
        = (3U & ((IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popping) {
        vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_valueNext 
        = (3U & ((IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_valueNext 
        = (3U & ((IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_willIncrement)));
}

void VAxi4Rom::_initial__TOP__5(VAxi4Rom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Rom::_initial__TOP__5\n"); );
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*223:0*/ __Vtemp1[7];
    // Body
    __Vtemp1[0U] = 0x2e62696eU;
    __Vtemp1[1U] = 0x5f726f6dU;
    __Vtemp1[2U] = 0x6576656cU;
    __Vtemp1[3U] = 0x746f706cU;
    __Vtemp1[4U] = 0x6d2e765fU;
    __Vtemp1[5U] = 0x6934526fU;
    __Vtemp1[6U] = 0x4178U;
    VL_READMEM_N(false, 32, 2048, 0, VL_CVT_PACK_STR_NW(7, __Vtemp1)
                 , vlTOPp->Axi4Rom__DOT__rom, 0, ~VL_ULL(0));
}

void VAxi4Rom::_eval_initial(VAxi4Rom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Rom::_eval_initial\n"); );
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->_initial__TOP__5(vlSymsp);
}

void VAxi4Rom::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Rom::final\n"); );
    // Variables
    VAxi4Rom__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAxi4Rom::_eval_settle(VAxi4Rom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Rom::_eval_settle\n"); );
    VAxi4Rom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VAxi4Rom::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi4Rom::_ctor_var_reset\n"); );
    // Body
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
    Axi4Rom__DOT___zz_rom_port0 = VL_RAND_RESET_I(32);
    Axi4Rom__DOT__ar_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    Axi4Rom__DOT__r_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    Axi4Rom__DOT___zz_rd_addr = VL_RAND_RESET_I(13);
    Axi4Rom__DOT__axi4_r_state = VL_RAND_RESET_I(1);
    Axi4Rom__DOT__rd_cnt = VL_RAND_RESET_I(8);
    Axi4Rom__DOT__rd_addr = VL_RAND_RESET_I(13);
    Axi4Rom__DOT__rd_id = VL_RAND_RESET_I(8);
    Axi4Rom__DOT__rd_size = VL_RAND_RESET_I(3);
    Axi4Rom__DOT__rd_burst = VL_RAND_RESET_I(2);
    Axi4Rom__DOT___zz_io_push_payload_last = VL_RAND_RESET_I(1);
    Axi4Rom__DOT___zz_io_push_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2048; ++__Vi0) {
            Axi4Rom__DOT__rom[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Axi4Rom__DOT__ar_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_Q(34);
    Axi4Rom__DOT__ar_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(2);
    Axi4Rom__DOT__ar_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(2);
    Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(2);
    Axi4Rom__DOT__ar_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(2);
    Axi4Rom__DOT__ar_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    Axi4Rom__DOT__ar_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    Axi4Rom__DOT__ar_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    Axi4Rom__DOT__ar_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    Axi4Rom__DOT__ar_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    Axi4Rom__DOT__ar_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            Axi4Rom__DOT__ar_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_Q(34);
    }}
    Axi4Rom__DOT__r_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_Q(43);
    Axi4Rom__DOT__r_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(2);
    Axi4Rom__DOT__r_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(2);
    Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(2);
    Axi4Rom__DOT__r_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(2);
    Axi4Rom__DOT__r_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    Axi4Rom__DOT__r_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    Axi4Rom__DOT__r_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    Axi4Rom__DOT__r_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    Axi4Rom__DOT__r_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    Axi4Rom__DOT__r_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            Axi4Rom__DOT__r_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_Q(43);
    }}
    __Vdly__Axi4Rom__DOT__rd_cnt = VL_RAND_RESET_I(8);
    __Vdlyvdim0__Axi4Rom__DOT__ar_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__Axi4Rom__DOT__ar_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_Q(34);
    __Vdlyvset__Axi4Rom__DOT__ar_fifo__DOT__logic_ram__v0 = 0;
    __Vm_traceActivity = 0;
}
