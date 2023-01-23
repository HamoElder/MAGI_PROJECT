// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTX.h for the primary calling header

#include "VTX.h"
#include "VTX__Syms.h"

VL_INLINE_OPT void VTX::_sequent__TOP__20(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_sequent__TOP__20\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_valueNext 
        = (3U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_valid 
        = (1U & (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state) 
                  >> 2U) & (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state) 
                             >> 1U) & ((~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state)) 
                                       | ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode)
                                           ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_valid)
                                           : ((2U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
                                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_input_valid)))))));
    vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo_io_pop_valid) 
           & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_5_io_input_ready) 
              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__state)));
    vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_input_ready = 0U;
    if ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))) {
        vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_input_ready 
            = (3U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state));
    }
    if ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))) {
        vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_input_ready 
            = ((3U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state)) 
               | (4U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state)));
    }
    if ((2U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))) {
        vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_input_ready 
            = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode)
                ? ((7U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state)) 
                   & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_ready))
                : (7U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state)));
    }
    vlTOPp->TX__DOT__rate_match__DOT__raw_data_fire 
        = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__flowMux_1__DOT___zz_output_valid) 
           & (2U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state)));
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushing 
        = (((IData)(vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_outputs_1_valid) 
            & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__isEncoding))) 
           & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__when_PhyTX_l648 
        = (((IData)(vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_outputs_1_valid) 
            & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder_raw_data_ready)) 
           & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0));
    vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popping) {
        vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__result_data_fire_1 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_valid) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_1_ready));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__result_data_fire 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_valid) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_2_ready));
    vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3__DOT___zz_io_output_valid 
        = ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
            ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment_result_data_valid)
            : ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
                ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_valid)
                : (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_valid)));
    vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popping) {
        vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo_io_pop_valid) 
           & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_input_ready) 
              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__state)));
    vlTOPp->TX__DOT__rate_match__DOT___zz_1 = 0U;
    if ((0U != (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
        if ((1U != (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
            if ((2U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
                if (vlTOPp->TX__DOT__rate_match__DOT__raw_data_fire) {
                    vlTOPp->TX__DOT__rate_match__DOT___zz_1 = 1U;
                }
            }
        }
    }
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__raw_data_fire 
        = (((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__isEncoding) 
            & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_valid)) 
           & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__when_PhyTX_l648)));
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_ready 
        = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__isEncoding) 
           & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__when_PhyTX_l648)));
    vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3__DOT___zz_io_output_valid) 
           & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_valueNext 
        = (3U & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popping) {
        vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_valueNext 
        = (((0x1800U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x1fffU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value) 
                               + (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_valid) 
           & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_ready));
    vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_value) 
                   + (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popping) {
        vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_valueNext 
        = (((0x1800U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x1fffU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value) 
                               + (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_willIncrement))));
}

VL_INLINE_OPT void VTX::_combo__TOP__21(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_combo__TOP__21\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vtableidx15 = (((1U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__read_row_cnt)) 
                              << 5U) | (((IData)(vlTOPp->TX__DOT__rate_match__DOT__when_PhyTX_l816) 
                                         << 4U) | (
                                                   ((IData)(vlTOPp->TX__DOT__channel_code__DOT__flowMux_1__DOT___zz_output_payload_last) 
                                                    << 3U) 
                                                   | (((IData)(vlTOPp->TX__DOT__rate_match__DOT__raw_data_fire) 
                                                       << 2U) 
                                                      | (IData)(vlTOPp->TX__DOT__rate_match__DOT__state)))));
    vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_willIncrement 
        = vlTOPp->__Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement
        [vlTOPp->__Vtableidx15];
    vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_value) 
                    + (IData)(vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_willIncrement)));
    if (vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_willClear) {
        vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_valueNext = 0U;
    }
}

void VTX::_eval(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_eval\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->_sequent__TOP__9(vlSymsp);
        vlTOPp->_sequent__TOP__10(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__17(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__18(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__19(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__20(vlSymsp);
    }
    vlTOPp->_combo__TOP__21(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VTX::_change_request(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_change_request\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VTX::_change_request_1(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_change_request_1\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VTX::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((raw_data_payload_last & 0xfeU))) {
        Verilated::overWidthError("raw_data_payload_last");}
    if (VL_UNLIKELY((raw_data_payload_fragment & 0xfeU))) {
        Verilated::overWidthError("raw_data_payload_fragment");}
    if (VL_UNLIKELY((result_data_ready & 0xfeU))) {
        Verilated::overWidthError("result_data_ready");}
    if (VL_UNLIKELY((block_msg_ctrl_valid & 0xfeU))) {
        Verilated::overWidthError("block_msg_ctrl_valid");}
    if (VL_UNLIKELY((block_msg_ctrl_payload_pkg_type 
                     & 0xfcU))) {
        Verilated::overWidthError("block_msg_ctrl_payload_pkg_type");}
    if (VL_UNLIKELY((block_msg_ctrl_payload_pkg_length 
                     & 0xfff00000U))) {
        Verilated::overWidthError("block_msg_ctrl_payload_pkg_length");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
