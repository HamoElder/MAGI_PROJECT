// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__29(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__29\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx1;
    // Body
    vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_last 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->raw_data_payload_last));
    vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->raw_data_valid));
    vlTOPp->decoded_data_valid = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data_valid_1;
    vlTOPp->decoded_data_payload_last = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data_last;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l48 
        = (0xa7U <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_ram_select 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select)));
    if (vlTOPp->reset) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pkg_tail = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pkg_tail = 0U;
        } else {
            if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_valid) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pkg_tail 
                    = vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_last;
            }
        }
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_valueNext));
    __Vtableidx1 = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_last_next) 
                     << 6U) | (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) 
                                << 5U) | ((((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__raw_data_fire)) 
                                           << 4U) | 
                                          (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) 
                                            << 3U) 
                                           | ((4U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                << 2U)) 
                                              | (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__raw_data_fire) 
                                                  << 1U) 
                                                 | (IData)(vlTOPp->reset)))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next 
        = vlTOPp->__Vtable1_ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next
        [__Vtableidx1];
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_last_next 
        = vlTOPp->__Vtable1_ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_last_next
        [__Vtableidx1];
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_valid 
        = vlTOPp->__Vtable1_ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_valid
        [__Vtableidx1];
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_last 
        = vlTOPp->__Vtable1_ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_last
        [__Vtableidx1];
    if ((0x10U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_ready_1 
            = vlTOPp->__Vtable1_ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_ready_1
            [__Vtableidx1];
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy));
    vlTOPp->ConvCombTest__DOT__decoder_raw_data_ready 
        = ((~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pipe_halt)) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_ready_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_valid_1) 
           & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full))))));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data_valid_1) 
           & (~ (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_full)));
    vlTOPp->ConvCombTest__DOT__encoded_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_full))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushing) {
        vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushing) {
        vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__raw_data_fire 
        = ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo_io_pop_valid) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder_raw_data_ready));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo_io_pop_valid) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder_raw_data_ready));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_valueNext 
        = (0x1ffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
                     + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_valueNext 
        = (0x3ffU & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value) 
                     + (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popping) {
        vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__34(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__34\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt 
        = vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select 
        = vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select;
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_last_lifo[((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x1fU & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor)))) 
                    & vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_last_lifo[
                    ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor) 
                     >> 5U)]) | ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                                        >> 2U)) << 
                                 (0x1fU & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor))));
        }
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_decoded_ram_select 
        = (3U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select) 
                 - (IData)(1U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_decoded_ram_select_1 
        = (3U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select) 
                 - (IData)(1U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_decoded_ram_select_2 
        = (3U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select) 
                 - (IData)(1U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor 
        = (0x7fU & ((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select))
                     ? (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor) 
                         << 1U) + (1U & (IData)((vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_0_port1 
                                                 >> (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor)))))
                     : ((1U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select))
                         ? (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor) 
                             << 1U) + (1U & (IData)(
                                                    (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port1 
                                                     >> (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor)))))
                         : ((2U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select))
                             ? (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor) 
                                 << 1U) + (1U & (IData)(
                                                        (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port2 
                                                         >> (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor)))))
                             : 0U))));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ram
        [vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_valueNext];
    if ((4U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish = 1U;
            } else {
                if ((0xa7U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))) {
                    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat)))) {
                        vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish = 0U;
            }
        }
    }
    if (vlTOPp->__Vdlyvset__ConvCombTest__DOT__encoded_fifo__DOT__logic_ram__v0) {
        vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__encoded_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__ConvCombTest__DOT__encoded_fifo__DOT__logic_ram__v0;
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram
        [vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_valueNext];
    if (vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__35(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__35\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l104 
        = (((0x53U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write)) 
            & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select) 
               == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select))) 
           | (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pkg_tail));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state 
        = vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor 
        = vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__fifo_pop_ready));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_valueNext 
        = (0x3ffU & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value) 
                     + (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat 
        = vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read 
        = vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state 
        = vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__when_ReorderLifo_l54 
        = (0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_ram_addr_read_2 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read) 
                    - (IData)(1U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l153 
        = (0xa7U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read));
    vlTOPp->__Vtableidx2 = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string[0U] 
        = vlTOPp->__Vtable2_ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string
        [vlTOPp->__Vtableidx2][0U];
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string[1U] 
        = vlTOPp->__Vtable2_ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string
        [vlTOPp->__Vtableidx2][1U];
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string[2U] 
        = vlTOPp->__Vtable2_ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string
        [vlTOPp->__Vtableidx2][2U];
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_valueNext 
        = (0x1ffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value) 
                     + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement)));
}

void VConvCombTest::_eval(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_eval\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->_sequent__TOP__9(vlSymsp);
        vlTOPp->_sequent__TOP__10(vlSymsp);
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->_sequent__TOP__12(vlSymsp);
        vlTOPp->_sequent__TOP__13(vlSymsp);
        vlTOPp->_sequent__TOP__14(vlSymsp);
        vlTOPp->_sequent__TOP__15(vlSymsp);
        vlTOPp->_sequent__TOP__16(vlSymsp);
        vlTOPp->_sequent__TOP__17(vlSymsp);
        vlTOPp->_sequent__TOP__18(vlSymsp);
        vlTOPp->_sequent__TOP__19(vlSymsp);
        vlTOPp->_sequent__TOP__20(vlSymsp);
        vlTOPp->_sequent__TOP__21(vlSymsp);
        vlTOPp->_sequent__TOP__22(vlSymsp);
        vlTOPp->_sequent__TOP__23(vlSymsp);
        vlTOPp->_sequent__TOP__24(vlSymsp);
        vlTOPp->_sequent__TOP__25(vlSymsp);
        vlTOPp->_sequent__TOP__26(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__28(vlSymsp);
        vlTOPp->_sequent__TOP__29(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__34(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__35(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VConvCombTest::_change_request(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_change_request\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VConvCombTest::_change_request_1(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_change_request_1\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VConvCombTest::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((tail_bits_valid & 0xfeU))) {
        Verilated::overWidthError("tail_bits_valid");}
    if (VL_UNLIKELY((tail_bits_payload & 0x80U))) {
        Verilated::overWidthError("tail_bits_payload");}
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((raw_data_payload_last & 0xfeU))) {
        Verilated::overWidthError("raw_data_payload_last");}
    if (VL_UNLIKELY((raw_data_payload_fragment & 0xfeU))) {
        Verilated::overWidthError("raw_data_payload_fragment");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
