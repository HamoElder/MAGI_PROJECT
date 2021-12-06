// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_combo__TOP__112(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_combo__TOP__112\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__113(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__113\n"); );
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
    vlTOPp->ConvCombTest__DOT__streamFifo_4__DOT___zz_logic_ram_port0 
        = vlTOPp->ConvCombTest__DOT__streamFifo_4__DOT__logic_ram
        [vlTOPp->ConvCombTest__DOT__streamFifo_4__DOT__logic_popPtr_valueNext];
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
    if (vlTOPp->__Vdlyvset__ConvCombTest__DOT__streamFifo_4__DOT__logic_ram__v0) {
        vlTOPp->ConvCombTest__DOT__streamFifo_4__DOT__logic_ram[vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__streamFifo_4__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__ConvCombTest__DOT__streamFifo_4__DOT__logic_ram__v0;
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

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__114(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__114\n"); );
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
    vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_popPtr_value) 
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
        = (0xa7U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read));
    vlTOPp->__Vtableidx5 = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string[0U] 
        = vlTOPp->__Vtable5_ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string
        [vlTOPp->__Vtableidx5][0U];
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string[1U] 
        = vlTOPp->__Vtable5_ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string
        [vlTOPp->__Vtableidx5][1U];
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string[2U] 
        = vlTOPp->__Vtable5_ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string
        [vlTOPp->__Vtableidx5][2U];
}

VL_INLINE_OPT void VConvCombTest::_combo__TOP__115(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_combo__TOP__115\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__streamFifo_4__DOT__logic_popPtr_valueNext 
        = (0x7ffU & ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_4__DOT__logic_popPtr_value) 
                     + (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_4__DOT__logic_popPtr_willIncrement)));
}

void VConvCombTest::_eval(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_eval\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__30(vlSymsp);
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
        vlTOPp->_sequent__TOP__79(vlSymsp);
        vlTOPp->_sequent__TOP__80(vlSymsp);
        vlTOPp->_sequent__TOP__81(vlSymsp);
        vlTOPp->_sequent__TOP__82(vlSymsp);
        vlTOPp->_sequent__TOP__83(vlSymsp);
        vlTOPp->_sequent__TOP__84(vlSymsp);
        vlTOPp->_sequent__TOP__85(vlSymsp);
        vlTOPp->_sequent__TOP__86(vlSymsp);
        vlTOPp->_sequent__TOP__93(vlSymsp);
        vlTOPp->_sequent__TOP__94(vlSymsp);
        vlTOPp->_sequent__TOP__95(vlSymsp);
        vlTOPp->_sequent__TOP__96(vlSymsp);
        vlTOPp->_sequent__TOP__97(vlSymsp);
        vlTOPp->_sequent__TOP__98(vlSymsp);
        vlTOPp->_sequent__TOP__99(vlSymsp);
        vlTOPp->_sequent__TOP__100(vlSymsp);
        vlTOPp->_sequent__TOP__101(vlSymsp);
        vlTOPp->_sequent__TOP__102(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__104(vlSymsp);
        vlTOPp->_sequent__TOP__105(vlSymsp);
        vlTOPp->_settle__TOP__3(vlSymsp);
        vlTOPp->_settle__TOP__4(vlSymsp);
        vlTOPp->_settle__TOP__5(vlSymsp);
        vlTOPp->_sequent__TOP__109(vlSymsp);
    }
    vlTOPp->_combo__TOP__111(vlSymsp);
    vlTOPp->_combo__TOP__112(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__113(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__114(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__115(vlSymsp);
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
    if (VL_UNLIKELY((sel & 0xfeU))) {
        Verilated::overWidthError("sel");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
