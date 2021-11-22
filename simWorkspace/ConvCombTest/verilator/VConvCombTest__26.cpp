// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__113(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__113\n"); );
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
           & (0x12fU != (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1_push_ready 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) 
           & (0x12fU != (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)));
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
    vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_popPtr_value));
    __Vtableidx1 = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_last_next) 
                     << 6U) | (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) 
                                << 5U) | ((((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__raw_data_fire)) 
                                           << 4U) | 
                                          (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) 
                                            << 3U) 
                                           | ((4U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
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
    vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_popPtr_value));
    vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_popPtr_value));
    vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_popPtr_value));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_ready 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_demux_input_ready) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__fifo_pop_valve));
    vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_full 
        = ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_risingOccupancy));
    vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_full 
        = ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_risingOccupancy));
    vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_full 
        = ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_risingOccupancy));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy));
    vlTOPp->ConvCombTest__DOT__streamFifo_5_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_full))))));
    vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_pushing 
        = ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data_valid_1) 
           & (~ (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_full)));
    vlTOPp->ConvCombTest__DOT__decoder_raw_data_ready 
        = ((~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pipe_halt)) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_ready_1));
    vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_pushing 
        = ((IData)(vlTOPp->ConvCombTest__DOT__puncture_core__DOT__raw_data_valid_1) 
           & (~ (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_full)));
    vlTOPp->ConvCombTest__DOT__streamFifo_6_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_full))))));
    vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT__de_punched_data_fire 
        = ((0U != (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT__cnt)) 
           & (~ (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_full)));
    vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_pushing 
        = ((0U != (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT__cnt)) 
           & (~ (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_full)));
    vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_full))))));
    vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_pushing 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_mux_io_output_valid_regNext) 
           & (~ (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_full)));
    vlTOPp->ConvCombTest__DOT__streamFifo_7_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_full))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_valid_1) 
           & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full))))));
    vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__streamFifo_5_io_pop_valid) {
        vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT___zz_1 = 0U;
    if (vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_pushing) {
        vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT___zz_1 = 1U;
    }
    vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_pushing) {
        vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT___zz_1 = 0U;
    if (vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_pushing) {
        vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT___zz_1 = 1U;
    }
    vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_pushing) {
        vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT__raw_data_fire 
        = ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_6_io_pop_valid) 
           & (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_raw_data_ready));
    vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_popping 
        = ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_6_io_pop_valid) 
           & (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_raw_data_ready));
    vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_pushing) {
        vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_pushing) {
        vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__raw_data_fire 
        = ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo_io_pop_valid) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder_raw_data_ready));
    vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo_io_pop_valid) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder_raw_data_ready));
    vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT___zz_1 = 0U;
    if (vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_pushing) {
        vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT___zz_1 = 1U;
    }
    vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_pushing) {
        vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->decoded_data_valid = ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7_io_pop_valid) 
                                  & (7U == (IData)(vlTOPp->ConvCombTest__DOT___zz_decoded_data_valid_2)));
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
    vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_pushPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_pushPtr_value) 
                   + (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_pushPtr_valueNext 
        = (0x1ffU & ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_pushPtr_value) 
                     + (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_popping) {
        vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_pushPtr_valueNext 
        = (0x1ffU & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_pushPtr_value) 
                     + (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_popping) {
        vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__114(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__114\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_pushPtr_valueNext 
        = (0x1ffU & ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_pushPtr_value) 
                     + (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
                   + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25 
        = ((((~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)) 
             & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_demux_input_valid)) 
            & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0_push_ready)) 
           & (0x12fU != (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25 
        = ((((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) 
             & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_demux_input_valid)) 
            & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1_push_ready)) 
           & (0x12fU != (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
}

VL_INLINE_OPT void VConvCombTest::_combo__TOP__116(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_combo__TOP__116\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0 
        = ((0x80U & ((IData)(vlTOPp->raw_data_payload_fragment) 
                     << 7U)) | (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__r_enc_buf));
    vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_fire 
        = ((IData)(vlTOPp->raw_data_valid) & (~ (IData)(vlTOPp->tail_bits_valid)));
    vlTOPp->ConvCombTest__DOT__streamFifo_7_io_pop_ready 
        = (1U & (~ ((~ (IData)(vlTOPp->decoded_data_ready)) 
                    & (7U == (IData)(vlTOPp->ConvCombTest__DOT___zz_decoded_data_valid_2)))));
    vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_1 
        = ((0x80U & ((IData)(vlTOPp->raw_data_payload_fragment) 
                     << 6U)) | (0x7fU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                         >> 1U)));
    vlTOPp->ConvCombTest__DOT___zz_decoded_data_valid = 0U;
    if (((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7_io_pop_valid) 
         & (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7_io_pop_ready))) {
        vlTOPp->ConvCombTest__DOT___zz_decoded_data_valid = 1U;
    }
    vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_popping 
        = ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7_io_pop_valid) 
           & (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7_io_pop_ready));
    vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_2 
        = ((0x80U & ((IData)(vlTOPp->raw_data_payload_fragment) 
                     << 5U)) | (0x7fU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_1) 
                                         >> 1U)));
    vlTOPp->ConvCombTest__DOT___zz_decoded_data_valid_1 
        = (7U & ((IData)(vlTOPp->ConvCombTest__DOT___zz_decoded_data_valid_2) 
                 + (IData)(vlTOPp->ConvCombTest__DOT___zz_decoded_data_valid)));
    vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_popping) {
        vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_3 
        = ((0x80U & ((IData)(vlTOPp->raw_data_payload_fragment) 
                     << 4U)) | (0x7fU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_2) 
                                         >> 1U)));
    vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_popPtr_valueNext 
        = (0x1ffU & ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_popPtr_value) 
                     + (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_popPtr_willIncrement)));
    vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_4 
        = ((0x80U & ((IData)(vlTOPp->raw_data_payload_fragment) 
                     << 3U)) | (0x7fU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_3) 
                                         >> 1U)));
    vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_5 
        = ((0x80U & ((IData)(vlTOPp->raw_data_payload_fragment) 
                     << 2U)) | (0x7fU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_4) 
                                         >> 1U)));
    vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_6 
        = ((0x80U & ((IData)(vlTOPp->raw_data_payload_fragment) 
                     << 1U)) | (0x7fU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_5) 
                                         >> 1U)));
    vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_7 
        = ((0x80U & (IData)(vlTOPp->raw_data_payload_fragment)) 
           | (0x7fU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_6) 
                       >> 1U)));
    vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_0 
        = ((0xfeU & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_0)) 
           | (1U & ((((((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                        >> 1U) ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                  >> 2U)) ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                             >> 4U)) 
                     ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                        >> 5U)) ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                   >> 7U))));
    vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_0 
        = ((0xfdU & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_0)) 
           | (2U & (((((0xfffffffeU & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_1)) 
                       ^ (0x7ffffffeU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_1) 
                                         >> 1U))) ^ 
                      (0x1ffffffeU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_1) 
                                      >> 3U))) ^ (0xffffffeU 
                                                  & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_1) 
                                                     >> 4U))) 
                    ^ (0x3fffffeU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_1) 
                                     >> 6U)))));
    vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_0 
        = ((0xfbU & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_0)) 
           | (4U & (((((0xfffffffcU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_2) 
                                       << 1U)) ^ (0xfffffffcU 
                                                  & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_2))) 
                      ^ (0x3ffffffcU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_2) 
                                        >> 2U))) ^ 
                     (0x1ffffffcU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_2) 
                                     >> 3U))) ^ (0x7fffffcU 
                                                 & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_2) 
                                                    >> 5U)))));
    vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_0 
        = ((0xf7U & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_0)) 
           | (8U & (((((0xfffffff8U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_3) 
                                       << 2U)) ^ (0xfffffff8U 
                                                  & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_3) 
                                                     << 1U))) 
                      ^ (0x7ffffff8U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_3) 
                                        >> 1U))) ^ 
                     (0x3ffffff8U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_3) 
                                     >> 2U))) ^ (0xffffff8U 
                                                 & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_3) 
                                                    >> 4U)))));
    vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_0 
        = ((0xefU & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_0)) 
           | (0x10U & (((((0xfffffff0U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_4) 
                                          << 3U)) ^ 
                          (0xfffffff0U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_4) 
                                          << 2U))) 
                         ^ (0xfffffff0U & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_4))) 
                        ^ (0x7ffffff0U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_4) 
                                          >> 1U))) 
                       ^ (0x1ffffff0U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_4) 
                                         >> 3U)))));
    vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_0 
        = ((0xdfU & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_0)) 
           | (0x20U & (((((0xffffffe0U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_5) 
                                          << 4U)) ^ 
                          (0xffffffe0U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_5) 
                                          << 3U))) 
                         ^ (0xffffffe0U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_5) 
                                           << 1U))) 
                        ^ (0xffffffe0U & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_5))) 
                       ^ (0x3fffffe0U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_5) 
                                         >> 2U)))));
    vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_0 
        = ((0xbfU & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_0)) 
           | (0x40U & (((((0xffffffc0U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_6) 
                                          << 5U)) ^ 
                          (0xffffffc0U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_6) 
                                          << 4U))) 
                         ^ (0xffffffc0U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_6) 
                                           << 2U))) 
                        ^ (0xffffffc0U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_6) 
                                          << 1U))) 
                       ^ (0x7fffffc0U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_6) 
                                         >> 1U)))));
    vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_0 
        = ((0x7fU & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_0)) 
           | (0x80U & (((((0xffffff80U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_7) 
                                          << 6U)) ^ 
                          (0xffffff80U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_7) 
                                          << 5U))) 
                         ^ (0xffffff80U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_7) 
                                           << 3U))) 
                        ^ (0xffffff80U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_7) 
                                          << 2U))) 
                       ^ (0xffffff80U & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_7)))));
    vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_1 
        = ((0xfeU & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_1)) 
           | (1U & ((((((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                        >> 1U) ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                  >> 4U)) ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                             >> 5U)) 
                     ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                        >> 6U)) ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                   >> 7U))));
    vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_1 
        = ((0xfdU & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_1)) 
           | (2U & (((((0xfffffffeU & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_1)) 
                       ^ (0x1ffffffeU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_1) 
                                         >> 3U))) ^ 
                      (0xffffffeU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_1) 
                                     >> 4U))) ^ (0x7fffffeU 
                                                 & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_1) 
                                                    >> 5U))) 
                    ^ (0x3fffffeU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_1) 
                                     >> 6U)))));
    vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_1 
        = ((0xfbU & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_1)) 
           | (4U & (((((0xfffffffcU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_2) 
                                       << 1U)) ^ (0x3ffffffcU 
                                                  & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_2) 
                                                     >> 2U))) 
                      ^ (0x1ffffffcU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_2) 
                                        >> 3U))) ^ 
                     (0xffffffcU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_2) 
                                    >> 4U))) ^ (0x7fffffcU 
                                                & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_2) 
                                                   >> 5U)))));
    vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_1 
        = ((0xf7U & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_1)) 
           | (8U & (((((0xfffffff8U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_3) 
                                       << 2U)) ^ (0x7ffffff8U 
                                                  & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_3) 
                                                     >> 1U))) 
                      ^ (0x3ffffff8U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_3) 
                                        >> 2U))) ^ 
                     (0x1ffffff8U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_3) 
                                     >> 3U))) ^ (0xffffff8U 
                                                 & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_3) 
                                                    >> 4U)))));
    vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_1 
        = ((0xefU & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_1)) 
           | (0x10U & (((((0xfffffff0U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_4) 
                                          << 3U)) ^ 
                          (0xfffffff0U & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_4))) 
                         ^ (0x7ffffff0U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_4) 
                                           >> 1U))) 
                        ^ (0x3ffffff0U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_4) 
                                          >> 2U))) 
                       ^ (0x1ffffff0U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_4) 
                                         >> 3U)))));
    vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_1 
        = ((0xdfU & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_1)) 
           | (0x20U & (((((0xffffffe0U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_5) 
                                          << 4U)) ^ 
                          (0xffffffe0U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_5) 
                                          << 1U))) 
                         ^ (0xffffffe0U & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_5))) 
                        ^ (0x7fffffe0U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_5) 
                                          >> 1U))) 
                       ^ (0x3fffffe0U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_5) 
                                         >> 2U)))));
    vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_1 
        = ((0xbfU & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_1)) 
           | (0x40U & (((((0xffffffc0U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_6) 
                                          << 5U)) ^ 
                          (0xffffffc0U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_6) 
                                          << 2U))) 
                         ^ (0xffffffc0U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_6) 
                                           << 1U))) 
                        ^ (0xffffffc0U & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_6))) 
                       ^ (0x7fffffc0U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_6) 
                                         >> 1U)))));
    vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_1 
        = ((0x7fU & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_1)) 
           | (0x80U & (((((0xffffff80U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_7) 
                                          << 6U)) ^ 
                          (0xffffff80U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_7) 
                                          << 3U))) 
                         ^ (0xffffff80U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_7) 
                                           << 2U))) 
                        ^ (0xffffff80U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_7) 
                                          << 1U))) 
                       ^ (0xffffff80U & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_7)))));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__117(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__117\n"); );
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
    vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT___zz_logic_ram_port0 
        = vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_ram
        [vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_popPtr_valueNext];
    vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT___zz_logic_ram_port0 
        = vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_ram
        [vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_popPtr_valueNext];
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
                                                        (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_2_port1 
                                                         >> (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor)))))
                             : 0U))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram
        [vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_valueNext];
    vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_ram
        [vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_popPtr_valueNext];
    if ((4U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish = 1U;
            } else {
                if ((0xbfU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))) {
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
    if (vlTOPp->__Vdlyvset__ConvCombTest__DOT__streamFifo_5__DOT__logic_ram__v0) {
        vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_ram[vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__streamFifo_5__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__ConvCombTest__DOT__streamFifo_5__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__ConvCombTest__DOT__streamFifo_6__DOT__logic_ram__v0) {
        vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_ram[vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__streamFifo_6__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__ConvCombTest__DOT__streamFifo_6__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_ram__v0) {
        vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__118(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__118\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l104 
        = (((0x5fU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write)) 
            & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select) 
               == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select))) 
           | (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pkg_tail));
    vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_popPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_popPtr_value) 
                   + (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_popPtr_willIncrement)));
    vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_popPtr_valueNext 
        = (0x1ffU & ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_popPtr_value) 
                     + (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_popPtr_willIncrement)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value) 
                   + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_popPtr_valueNext 
        = (0x1ffU & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_popPtr_value) 
                     + (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_popPtr_willIncrement)));
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
        = (0xbfU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read));
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
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__32(vlSymsp);
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
        vlTOPp->_sequent__TOP__79(vlSymsp);
        vlTOPp->_sequent__TOP__80(vlSymsp);
        vlTOPp->_sequent__TOP__81(vlSymsp);
        vlTOPp->_sequent__TOP__82(vlSymsp);
        vlTOPp->_sequent__TOP__83(vlSymsp);
        vlTOPp->_sequent__TOP__84(vlSymsp);
        vlTOPp->_sequent__TOP__85(vlSymsp);
        vlTOPp->_sequent__TOP__86(vlSymsp);
        vlTOPp->_sequent__TOP__87(vlSymsp);
        vlTOPp->_sequent__TOP__88(vlSymsp);
        vlTOPp->_sequent__TOP__89(vlSymsp);
        vlTOPp->_sequent__TOP__90(vlSymsp);
        vlTOPp->_sequent__TOP__97(vlSymsp);
        vlTOPp->_sequent__TOP__98(vlSymsp);
        vlTOPp->_sequent__TOP__99(vlSymsp);
        vlTOPp->_sequent__TOP__100(vlSymsp);
        vlTOPp->_sequent__TOP__101(vlSymsp);
        vlTOPp->_sequent__TOP__102(vlSymsp);
        vlTOPp->_sequent__TOP__103(vlSymsp);
        vlTOPp->_sequent__TOP__104(vlSymsp);
        vlTOPp->_sequent__TOP__105(vlSymsp);
        vlTOPp->_sequent__TOP__106(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__108(vlSymsp);
        vlTOPp->_sequent__TOP__109(vlSymsp);
        vlTOPp->_settle__TOP__3(vlSymsp);
        vlTOPp->_settle__TOP__4(vlSymsp);
        vlTOPp->_settle__TOP__5(vlSymsp);
        vlTOPp->_sequent__TOP__113(vlSymsp);
        vlTOPp->_sequent__TOP__114(vlSymsp);
    }
    vlTOPp->_combo__TOP__116(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__117(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__118(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
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
    if (VL_UNLIKELY((decoded_data_ready & 0xfeU))) {
        Verilated::overWidthError("decoded_data_ready");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
