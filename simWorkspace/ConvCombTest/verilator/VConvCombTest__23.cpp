// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__100(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__100\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx1;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0_pop_valid 
        = (1U & (~ ((~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)) 
                    | (0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1_pop_valid 
        = (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) 
                    | (0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0_push_ready 
        = ((~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)) 
           & (0x10bU != (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1_push_ready 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) 
           & (0x10bU != (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l32 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0_pop_valid) 
            & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)) 
           & (0U != (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l32 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1_pop_valid) 
            & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state))) 
           & (0U != (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_demux_input_ready = 0U;
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_demux_input_ready 
            = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0_push_ready;
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_demux_input_ready 
            = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1_push_ready;
    }
    vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_popPtr_value));
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
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_ready 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_demux_input_ready) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__fifo_pop_valve));
    vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_risingOccupancy));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy));
    vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_mux_io_output_valid_regNext) 
           & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_full)));
    vlTOPp->ConvCombTest__DOT__decoded_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_full))))));
    vlTOPp->ConvCombTest__DOT__decoder_raw_data_ready 
        = ((~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pipe_halt)) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_ready_1));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data_valid_1) 
           & (~ (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_full)));
    vlTOPp->ConvCombTest__DOT__encoded_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_full))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_valid_1) 
           & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full))))));
    vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushing) {
        vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushing) {
        vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->decoded_data_valid = vlTOPp->ConvCombTest__DOT__decoded_fifo_io_pop_valid;
    vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__decoded_fifo_io_pop_valid) {
        vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_popPtr_willIncrement = 1U;
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
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_demux_input_valid 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__fifo_pop_valve));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_ready));
    vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushPtr_valueNext 
        = (0x7ffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushPtr_value) 
                     + (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_popPtr_valueNext 
        = (0x7ffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_popPtr_value) 
                     + (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_valueNext 
        = (0x7ffU & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value) 
                     + (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popping) {
        vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
                   + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25 
        = ((((~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)) 
             & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_demux_input_valid)) 
            & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0_push_ready)) 
           & (0x10bU != (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25 
        = ((((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) 
             & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_demux_input_valid)) 
            & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1_push_ready)) 
           & (0x10bU != (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__109(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__109\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt 
        = vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select 
        = vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last 
        = vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last 
        = vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last;
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
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram
        [vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_valueNext];
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
    if (vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__ConvCombTest__DOT__encoded_fifo__DOT__logic_ram__v0) {
        vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__encoded_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__ConvCombTest__DOT__encoded_fifo__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__110(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__110\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l104 
        = (((0x53U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write)) 
            & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select) 
               == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select))) 
           | (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pkg_tail));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value) 
                   + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_valueNext 
        = (0x7ffU & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value) 
                     + (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat 
        = vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read 
        = vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state 
        = vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state;
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
}

void VConvCombTest::_eval(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_eval\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__21(vlSymsp);
        vlTOPp->_sequent__TOP__28(vlSymsp);
        vlTOPp->_sequent__TOP__29(vlSymsp);
        vlTOPp->_sequent__TOP__30(vlSymsp);
        vlTOPp->_sequent__TOP__31(vlSymsp);
        vlTOPp->_sequent__TOP__32(vlSymsp);
        vlTOPp->_sequent__TOP__33(vlSymsp);
        vlTOPp->_sequent__TOP__34(vlSymsp);
        vlTOPp->_sequent__TOP__35(vlSymsp);
        vlTOPp->_sequent__TOP__36(vlSymsp);
        vlTOPp->_sequent__TOP__37(vlSymsp);
        vlTOPp->_sequent__TOP__38(vlSymsp);
        vlTOPp->_sequent__TOP__39(vlSymsp);
        vlTOPp->_sequent__TOP__40(vlSymsp);
        vlTOPp->_sequent__TOP__41(vlSymsp);
        vlTOPp->_sequent__TOP__42(vlSymsp);
        vlTOPp->_sequent__TOP__43(vlSymsp);
        vlTOPp->_sequent__TOP__44(vlSymsp);
        vlTOPp->_sequent__TOP__45(vlSymsp);
        vlTOPp->_sequent__TOP__46(vlSymsp);
        vlTOPp->_sequent__TOP__47(vlSymsp);
        vlTOPp->_sequent__TOP__48(vlSymsp);
        vlTOPp->_sequent__TOP__49(vlSymsp);
        vlTOPp->_sequent__TOP__50(vlSymsp);
        vlTOPp->_sequent__TOP__51(vlSymsp);
        vlTOPp->_sequent__TOP__52(vlSymsp);
        vlTOPp->_sequent__TOP__53(vlSymsp);
        vlTOPp->_sequent__TOP__54(vlSymsp);
        vlTOPp->_sequent__TOP__55(vlSymsp);
        vlTOPp->_sequent__TOP__56(vlSymsp);
        vlTOPp->_sequent__TOP__57(vlSymsp);
        vlTOPp->_sequent__TOP__58(vlSymsp);
        vlTOPp->_sequent__TOP__59(vlSymsp);
        vlTOPp->_sequent__TOP__60(vlSymsp);
        vlTOPp->_sequent__TOP__61(vlSymsp);
        vlTOPp->_sequent__TOP__62(vlSymsp);
        vlTOPp->_sequent__TOP__63(vlSymsp);
        vlTOPp->_sequent__TOP__64(vlSymsp);
        vlTOPp->_sequent__TOP__65(vlSymsp);
        vlTOPp->_sequent__TOP__66(vlSymsp);
        vlTOPp->_sequent__TOP__67(vlSymsp);
        vlTOPp->_sequent__TOP__68(vlSymsp);
        vlTOPp->_sequent__TOP__69(vlSymsp);
        vlTOPp->_sequent__TOP__70(vlSymsp);
        vlTOPp->_sequent__TOP__71(vlSymsp);
        vlTOPp->_sequent__TOP__72(vlSymsp);
        vlTOPp->_sequent__TOP__73(vlSymsp);
        vlTOPp->_sequent__TOP__74(vlSymsp);
        vlTOPp->_sequent__TOP__75(vlSymsp);
        vlTOPp->_sequent__TOP__76(vlSymsp);
        vlTOPp->_sequent__TOP__77(vlSymsp);
        vlTOPp->_sequent__TOP__78(vlSymsp);
        vlTOPp->_sequent__TOP__84(vlSymsp);
        vlTOPp->_sequent__TOP__85(vlSymsp);
        vlTOPp->_sequent__TOP__86(vlSymsp);
        vlTOPp->_sequent__TOP__87(vlSymsp);
        vlTOPp->_sequent__TOP__88(vlSymsp);
        vlTOPp->_sequent__TOP__89(vlSymsp);
        vlTOPp->_sequent__TOP__90(vlSymsp);
        vlTOPp->_sequent__TOP__91(vlSymsp);
        vlTOPp->_sequent__TOP__92(vlSymsp);
        vlTOPp->_sequent__TOP__93(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__95(vlSymsp);
        vlTOPp->_sequent__TOP__96(vlSymsp);
        vlTOPp->_sequent__TOP__97(vlSymsp);
        vlTOPp->_sequent__TOP__98(vlSymsp);
        vlTOPp->_sequent__TOP__99(vlSymsp);
        vlTOPp->_sequent__TOP__100(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__109(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__110(vlSymsp);
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
