// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTX.h for the primary calling header

#include "VTX.h"
#include "VTX__Syms.h"

//==========

void VTX::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTX::eval\n"); );
    VTX__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/TX.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VTX::_eval_initial_loop(VTX__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/TX.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VTX::_sequent__TOP__2(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_sequent__TOP__2\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_length 
        = vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_length;
    vlTOPp->__Vdly__TX__DOT__rate_match__DOT__vector_length_cnt 
        = vlTOPp->TX__DOT__rate_match__DOT__vector_length_cnt;
    vlTOPp->__Vdly__TX__DOT__rate_match__DOT__write_addr 
        = vlTOPp->TX__DOT__rate_match__DOT__write_addr;
    vlTOPp->__Vdly__TX__DOT__rate_match__DOT__zero_padding_cnt 
        = vlTOPp->TX__DOT__rate_match__DOT__zero_padding_cnt;
    vlTOPp->__Vdlyvset__TX__DOT__rate_match__DOT__interleaving_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TX__DOT__rate_match__DOT__interleaving_ram__v1 = 0U;
    vlTOPp->__Vdlyvset__TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdly__TX__DOT__rate_match__DOT__read_row_cnt 
        = vlTOPp->TX__DOT__rate_match__DOT__read_row_cnt;
    vlTOPp->__Vdlyvset__TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__emit_step 
        = vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__emit_step;
    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__zero_padding_cnt 
        = vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__zero_padding_cnt;
    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__payload_cnt 
        = vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__payload_cnt;
    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length 
        = vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length;
    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cn 
        = vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cn;
    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__C 
        = vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__C;
    vlTOPp->__Vdlyvset__TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram__v0 = 0U;
    if ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92))) {
        if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__cmd_fire) {
            vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_remainder = 0U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92))) {
            vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_remainder 
                = (0x1fffU & ((0x2000U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_when_UnsignedDivider_l112))
                               ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_remainder_1)
                               : (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_when_UnsignedDivider_l112)));
        }
    }
    if ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))) {
        vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type = 0U;
    }
    if ((1U & (~ ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state)))) {
                vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type = 1U;
            }
        }
    }
    if ((4U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state))) {
        if (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_valid) 
             & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_1_ready))) {
            vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_length 
                = (0x1fffU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_length) 
                              - (IData)(1U)));
        }
    } else {
        if ((2U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state))) {
            if ((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state))) {
                if (vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__result_data_fire_1) {
                    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_length 
                        = (0x1fffU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_length) 
                                      - (IData)(1U)));
                }
            } else {
                if (vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__result_data_fire_1) {
                    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_length 
                        = (0x1fffU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_length) 
                                      - (IData)(1U)));
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state)))) {
                if (vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__block_msg_fire) {
                    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_length 
                        = ((0x28U > (0xfffffU & (IData)(
                                                        (vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
                                                         >> 2U))))
                            ? 0x28U : (0x1fffU & (IData)(
                                                         (vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
                                                          >> 2U))));
                }
            }
        }
    }
    vlTOPp->TX__DOT__rate_match__DOT___zz_interleaving_ram_port0 
        = ((0x1800U >= (IData)(vlTOPp->TX__DOT__rate_match__DOT__read_addr_next))
            ? vlTOPp->TX__DOT__rate_match__DOT__interleaving_ram
           [vlTOPp->TX__DOT__rate_match__DOT__read_addr_next]
            : (IData)(vlTOPp->TX__DOT__rate_match__DOT____Vxrand1));
    if ((1U & (~ ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state)))) {
                vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type = 0U;
            }
        }
    }
    if ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92))) {
        if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__cmd_fire) {
            vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_error 
                = vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__denominator;
        }
    }
    if ((0U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__state))) {
        if (vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popping) {
            vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type 
                = (1U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0) 
                         >> 0xdU));
        }
    }
    if ((0U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
        vlTOPp->__Vdly__TX__DOT__rate_match__DOT__vector_length_cnt = 0xc8U;
    } else {
        if ((1U != (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
            if ((2U != (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
                if (vlTOPp->TX__DOT__rate_match__DOT__result_data_fire) {
                    vlTOPp->__Vdly__TX__DOT__rate_match__DOT__vector_length_cnt 
                        = (vlTOPp->TX__DOT__rate_match__DOT__vector_length_cnt 
                           - (IData)(1U));
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
        vlTOPp->__Vdly__TX__DOT__rate_match__DOT__write_addr = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
            vlTOPp->__Vdly__TX__DOT__rate_match__DOT__write_addr 
                = (0x1fffU & ((IData)(1U) + (IData)(vlTOPp->TX__DOT__rate_match__DOT__write_addr)));
        } else {
            if ((2U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
                if (vlTOPp->TX__DOT__rate_match__DOT__raw_data_fire) {
                    vlTOPp->__Vdly__TX__DOT__rate_match__DOT__write_addr 
                        = (0x1fffU & ((IData)(1U) + (IData)(vlTOPp->TX__DOT__rate_match__DOT__write_addr)));
                }
            }
        }
    }
    if ((0U != (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
        if ((1U != (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
            vlTOPp->TX__DOT__rate_match__DOT__read_addr 
                = ((2U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))
                    ? (IData)(vlTOPp->TX__DOT__rate_match__DOT___zz_conv_perm_pattern_port0)
                    : (IData)(vlTOPp->TX__DOT__rate_match__DOT__read_addr_next));
        }
    }
    if ((0U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
        if (vlTOPp->TX__DOT__channel_code__DOT__coded_msg_fire) {
            vlTOPp->__Vdly__TX__DOT__rate_match__DOT__zero_padding_cnt 
                = ((0U == (0x1fU & (IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_length)))
                    ? 0U : (0x1fU & VL_NEGATE_I((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_length))));
        }
    } else {
        if ((1U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
            vlTOPp->__Vdly__TX__DOT__rate_match__DOT__zero_padding_cnt 
                = (0x1fU & ((IData)(vlTOPp->TX__DOT__rate_match__DOT__zero_padding_cnt) 
                            - (IData)(1U)));
        }
    }
    if (vlTOPp->TX__DOT__rate_match__DOT___zz_2) {
        vlTOPp->TX__DOT__rate_match__DOT____Vlvbound2 = 0U;
        if ((0x1800U >= (IData)(vlTOPp->TX__DOT__rate_match__DOT__write_addr))) {
            vlTOPp->__Vdlyvval__TX__DOT__rate_match__DOT__interleaving_ram__v0 
                = vlTOPp->TX__DOT__rate_match__DOT____Vlvbound2;
            vlTOPp->__Vdlyvset__TX__DOT__rate_match__DOT__interleaving_ram__v0 = 1U;
            vlTOPp->__Vdlyvdim0__TX__DOT__rate_match__DOT__interleaving_ram__v0 
                = vlTOPp->TX__DOT__rate_match__DOT__write_addr;
        }
    }
    if (vlTOPp->TX__DOT__rate_match__DOT___zz_1) {
        vlTOPp->TX__DOT__rate_match__DOT____Vlvbound3 
            = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__sel_cha)
                ? (8U | (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__coded_data))
                : (4U | (3U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                               >> 1U))));
        if ((0x1800U >= (IData)(vlTOPp->TX__DOT__rate_match__DOT__write_addr))) {
            vlTOPp->__Vdlyvval__TX__DOT__rate_match__DOT__interleaving_ram__v1 
                = vlTOPp->TX__DOT__rate_match__DOT____Vlvbound3;
            vlTOPp->__Vdlyvset__TX__DOT__rate_match__DOT__interleaving_ram__v1 = 1U;
            vlTOPp->__Vdlyvdim0__TX__DOT__rate_match__DOT__interleaving_ram__v1 
                = vlTOPp->TX__DOT__rate_match__DOT__write_addr;
        }
    }
    if (vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ram__v0 
            = (((QData)((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_rnti_scramble)) 
                << 0x16U) | (QData)((IData)(((vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_length 
                                              << 2U) 
                                             | (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type)))));
        vlTOPp->__Vdlyvset__TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ram__v0 
            = vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_value;
    }
    if ((0U != (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
        if ((1U != (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
            if ((2U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
                vlTOPp->__Vdly__TX__DOT__rate_match__DOT__read_row_cnt 
                    = vlTOPp->TX__DOT__rate_match__DOT__rows;
            } else {
                if (vlTOPp->TX__DOT__rate_match__DOT__when_PhyTX_l816) {
                    vlTOPp->__Vdly__TX__DOT__rate_match__DOT__read_row_cnt 
                        = (0xffU & ((IData)(vlTOPp->TX__DOT__rate_match__DOT__when_PhyTX_l817)
                                     ? (IData)(vlTOPp->TX__DOT__rate_match__DOT__rows)
                                     : ((IData)(vlTOPp->TX__DOT__rate_match__DOT__read_row_cnt) 
                                        - (IData)(1U))));
                }
            }
        }
    }
    if (vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_1) {
        vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT____Vlvbound2 
            = (3U & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0));
        if ((0x1800U >= (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value))) {
            vlTOPp->__Vdlyvval__TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ram__v0 
                = vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT____Vlvbound2;
            vlTOPp->__Vdlyvset__TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ram__v0 = 1U;
            vlTOPp->__Vdlyvdim0__TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ram__v0 
                = vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value;
        }
    }
    if ((4U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state))) {
        if ((2U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state))) {
            if ((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state))) {
                if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode) {
                    if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__result_data_fire) {
                        vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__payload_cnt 
                            = (0x1fffU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__payload_cnt) 
                                          - (IData)(1U)));
                    }
                }
            } else {
                if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__result_data_fire) {
                    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__zero_padding_cnt 
                        = (0x1fffU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__zero_padding_cnt) 
                                      - (IData)(1U)));
                    if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode) {
                        vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__payload_cnt 
                            = (0x1fffU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__payload_cnt) 
                                          - (IData)(1U)));
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state))) {
                if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_msg_fire) {
                    if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode) {
                        if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__when_PhyTX_l478) {
                            vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__payload_cnt 
                                = vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kp;
                            vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cp 
                                = (0xffU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cp) 
                                            - (IData)(1U)));
                            vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length 
                                = vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kp;
                        } else {
                            vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__payload_cnt 
                                = vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kn;
                            vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cn 
                                = (0xffU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cn) 
                                            - (IData)(1U)));
                            vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length 
                                = vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kn;
                        }
                        if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__when_PhyTX_l487) {
                            vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__C = 1U;
                        }
                    }
                }
            } else {
                vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__zero_padding_cnt 
                    = (0x1fffU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__code_block_resized) 
                                  - (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length)));
                vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length 
                    = vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__code_block_resized;
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state))) {
            if ((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state))) {
                if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__emit_step) {
                    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cp 
                        = (0xffU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__C) 
                                    - (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cn)));
                    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__zero_padding_cnt 
                        = (0x1fffU & vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT___zz_zero_padding_cnt_1);
                    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length 
                        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__when_PhyTX_l478)
                            ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kp)
                            : (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kn));
                } else {
                    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cn 
                        = (0xffU & ((0x1fffffU & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT___zz_Cn_2 
                                                  - vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__numerator)) 
                                    >> (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__shift_step)));
                    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__emit_step = 1U;
                    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__F 
                        = (0xfffffU & vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT___zz_F);
                }
            } else {
                vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__emit_step = 0U;
            }
        } else {
            if ((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state))) {
                if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_valid) {
                    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__C 
                        = vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_num;
                }
            } else {
                if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__block_msg_fire) {
                    if ((0x28U > (0xfffffU & (IData)(
                                                     (vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
                                                      >> 2U))))) {
                        vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__zero_padding_cnt 
                            = (0x1fffU & ((IData)(0x28U) 
                                          - (IData)(
                                                    (vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
                                                     >> 2U))));
                        vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length = 0x28U;
                    } else {
                        if ((0x1800U >= (0xfffffU & (IData)(
                                                            (vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
                                                             >> 2U))))) {
                            vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length 
                                = (0x1fffU & (IData)(
                                                     (vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
                                                      >> 2U)));
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTX::_sequent__TOP__3(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_sequent__TOP__3\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ram__v0 
            = (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type) 
                << 0xdU) | ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
                             ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_length)
                             : ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
                                 ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_length)
                                 : (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length))));
        vlTOPp->__Vdlyvset__TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ram__v0 
            = vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram__v0 
            = ((((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
                  ? ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))
                      ? 0U : ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))
                               ? 0U : ((2U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))
                                        ? 0U : (2U 
                                                | (1U 
                                                   & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                                      >> 1U))))))
                  : ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
                      ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment)
                      : (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment))) 
                << 1U) | (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3__DOT___zz_io_output_payload_last));
        vlTOPp->__Vdlyvset__TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram__v0 
            = vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram__v0 
            = ((((1U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type))
                  ? ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__emitCrc)
                      ? (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT___zz_result_data_payload_fragment)
                      : (IData)(vlTOPp->raw_data_payload_fragment))
                  : ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__emitCrc)
                      ? (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT___zz_result_data_payload_fragment)
                      : (IData)(vlTOPp->raw_data_payload_fragment))) 
                << 1U) | (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3__DOT___zz_io_output_payload_last));
        vlTOPp->__Vdlyvset__TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram__v0 
            = vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_value;
    }
    vlTOPp->TX__DOT__rate_match__DOT__write_addr = vlTOPp->__Vdly__TX__DOT__rate_match__DOT__write_addr;
    if (vlTOPp->__Vdlyvset__TX__DOT__rate_match__DOT__interleaving_ram__v0) {
        vlTOPp->TX__DOT__rate_match__DOT__interleaving_ram[vlTOPp->__Vdlyvdim0__TX__DOT__rate_match__DOT__interleaving_ram__v0] 
            = vlTOPp->__Vdlyvval__TX__DOT__rate_match__DOT__interleaving_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TX__DOT__rate_match__DOT__interleaving_ram__v1) {
        vlTOPp->TX__DOT__rate_match__DOT__interleaving_ram[vlTOPp->__Vdlyvdim0__TX__DOT__rate_match__DOT__interleaving_ram__v1] 
            = vlTOPp->__Vdlyvval__TX__DOT__rate_match__DOT__interleaving_ram__v1;
    }
    vlTOPp->TX__DOT__rate_match__DOT__read_row_cnt 
        = vlTOPp->__Vdly__TX__DOT__rate_match__DOT__read_row_cnt;
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cn 
        = vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cn;
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__C 
        = vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__C;
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length 
        = vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length;
    if ((1U & (~ ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state))) {
                if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_valid) {
                    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__denominator 
                        = vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_num;
                }
            } else {
                vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__denominator = 0x17e8U;
            }
        }
    }
    vlTOPp->TX__DOT__rate_match__DOT___zz_conv_perm_pattern_port0 
        = vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern
        [vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_value];
    if ((1U & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__when_PhyTX_l648)))) {
        if (vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__raw_data_fire) {
            vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__coded_data 
                = ((4U & (((((0xfffffffcU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                             << 1U)) 
                             ^ (0xfffffffcU & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0))) 
                            ^ (0x3ffffffcU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                              >> 2U))) 
                           ^ (0x1ffffffcU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                             >> 3U))) 
                          ^ (0x7fffffcU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                           >> 5U)))) 
                   | ((2U & (((((0xfffffffeU & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0)) 
                                ^ (0x1ffffffeU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                                  >> 3U))) 
                               ^ (0xffffffeU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                                >> 4U))) 
                              ^ (0x7fffffeU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                               >> 5U))) 
                             ^ (0x3fffffeU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                              >> 6U)))) 
                      | (1U & ((((((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                   >> 1U) ^ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                             >> 3U)) 
                                 ^ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                    >> 5U)) ^ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                               >> 6U)) 
                               ^ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                  >> 7U)))));
        }
    }
    if ((0U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__state))) {
        if (vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popping) {
            vlTOPp->TX__DOT__channel_code__DOT__sel_cha 
                = (1U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0) 
                         >> 0xdU));
        }
    }
    if (vlTOPp->TX__DOT__tx_crc_extender__DOT__block_msg_ctrl_in_fire) {
        vlTOPp->TX__DOT__tx_crc_extender__DOT__message_rnti_scramble 
            = vlTOPp->block_msg_ctrl_payload_rnti_scramble;
    }
    if (vlTOPp->TX__DOT__tx_crc_extender__DOT__block_msg_ctrl_in_fire) {
        vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_length 
            = (0xfffffU & (vlTOPp->block_msg_ctrl_payload_pkg_length 
                           + ((1U == (IData)(vlTOPp->block_msg_ctrl_payload_pkg_type))
                               ? 0x10U : 0x18U)));
    }
    vlTOPp->TX__DOT__rate_match__DOT__when_PhyTX_l817 
        = (1U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__read_row_cnt));
    if ((0U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
        if (vlTOPp->TX__DOT__channel_code__DOT__coded_msg_fire) {
            vlTOPp->TX__DOT__rate_match__DOT__rows 
                = (0xffU & (((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_length) 
                             >> 5U) + (0U != (0x1fU 
                                              & (IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_length)))));
        }
    }
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__when_PhyTX_l478 
        = (0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cn));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__when_PhyTX_l487 
        = ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cp)) 
           & (0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cn)));
    if ((1U & (~ ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state))) {
            if ((1U & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state)))) {
                if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_valid) {
                    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kn 
                        = vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kn_temp;
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state))) {
            if ((1U & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state)))) {
                if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_valid) {
                    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__shift_step 
                        = ((0U == (0xfU & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                                           >> 9U)))
                            ? 3U : ((1U == (0xfU & 
                                            (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                                             >> 9U)))
                                     ? 4U : ((2U == 
                                              (0xfU 
                                               & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                                                  >> 9U)))
                                              ? 5U : 6U)));
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state))) {
            if ((1U & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state)))) {
                if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_valid) {
                    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kp 
                        = (0x1fffU & ((0U == (0xfU 
                                              & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                                                 >> 9U)))
                                       ? ((IData)(8U) 
                                          + (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kn_temp))
                                       : ((1U == (0xfU 
                                                  & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                                                     >> 9U)))
                                           ? ((IData)(0x10U) 
                                              + (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kn_temp))
                                           : ((2U == 
                                               (0xfU 
                                                & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                                                   >> 9U)))
                                               ? ((IData)(0x20U) 
                                                  + (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kn_temp))
                                               : ((IData)(0x40U) 
                                                  + (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kn_temp))))));
                }
            }
        }
    }
}

VL_INLINE_OPT void VTX::_sequent__TOP__4(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_sequent__TOP__4\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__code_block_resized 
        = ((0U == (0xfU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length) 
                           >> 9U))) ? (0x1ff8U & ((
                                                   ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length) 
                                                    >> 3U) 
                                                   + 
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length)))) 
                                                  << 3U))
            : ((1U == (0xfU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length) 
                               >> 9U))) ? (0x1ff0U 
                                           & ((((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length) 
                                                >> 4U) 
                                               + (0U 
                                                  != 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length)))) 
                                              << 4U))
                : ((2U == (0xfU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length) 
                                   >> 9U))) ? (0x1fe0U 
                                               & ((((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length) 
                                                    >> 5U) 
                                                   + 
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length)))) 
                                                  << 5U))
                    : (0x1fc0U & ((((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length) 
                                    >> 6U) + (0U != 
                                              (0x3fU 
                                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length)))) 
                                  << 6U)))));
    if ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))) {
        if (vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__block_msg_fire) {
            vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_length 
                = ((0x28U > (0xfffffU & (IData)((vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
                                                 >> 2U))))
                    ? 0x28U : (0x1fffU & (IData)((vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
                                                  >> 2U))));
        }
    }
    vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram
        [vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_valueNext];
    if (vlTOPp->TX__DOT__tx_crc_extender__DOT__block_msg_ctrl_in_fire) {
        vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type 
            = vlTOPp->block_msg_ctrl_payload_pkg_type;
    }
    if (vlTOPp->__Vdlyvset__TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram__v0) {
        vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram__v0;
    }
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT___zz_zero_padding_cnt_1 
        = (0xfffffU & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__F 
                       - (0x7fffU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cn) 
                                     << (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__shift_step)))));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT___zz_Cn_2 
        = (0x1fffffU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kp) 
                        * (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__C)));
    if ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92))) {
        if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__cmd_fire) {
            vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                = vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__numerator;
        }
    } else {
        if ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92))) {
            vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                = (0xfffffU & vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz___05Fzz_rsp_payload_quotient);
        }
    }
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kn_temp 
        = ((0U == (0xfU & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                           >> 9U))) ? (0x1ff8U & vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient)
            : ((1U == (0xfU & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                               >> 9U))) ? (0x1ff0U 
                                           & vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient)
                : ((2U == (0xfU & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                                   >> 9U))) ? (0x1fe0U 
                                               & vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient)
                    : (0x1fc0U & vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient))));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_remainder_1 
        = (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_remainder) 
            << 1U) | (1U & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                            >> 0x13U)));
    if ((1U & (~ ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state))) {
                if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_valid) {
                    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__numerator 
                        = (0xfffffU & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT___zz_numerator 
                                       + (0x7ffU & 
                                          ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_num) 
                                           << 3U))));
                }
            } else {
                vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__numerator 
                    = (0xfffffU & (IData)((vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
                                           >> 2U)));
            }
        }
    }
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_when_UnsignedDivider_l112 
        = (0x3fffU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_remainder_1) 
                      - (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_error)));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_num 
        = (0xffU & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                    + (0U != (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_remainder))));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz___05Fzz_rsp_payload_quotient 
        = ((vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
            << 1U) | (1U & (~ ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_when_UnsignedDivider_l112) 
                               >> 0xdU))));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT___zz_F 
        = (0x1fffffU & (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__C) 
                         * (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kp)) 
                        - vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__numerator));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT___zz_numerator 
        = (0xfffffU & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__numerator 
                       + (0xfffU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_num) 
                                    << 4U))));
}

VL_INLINE_OPT void VTX::_sequent__TOP__6(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_sequent__TOP__6\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92 
        = vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92;
    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__zero_padding_cnt 
        = vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__zero_padding_cnt;
    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__zero_padding_cnt 
        = vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__zero_padding_cnt;
    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state 
        = vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state;
    vlTOPp->__Vdly__TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter 
        = vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter;
    vlTOPp->__Vdly__TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter 
        = vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter;
    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state 
        = vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state;
    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter 
        = vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter;
    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state 
        = vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state;
    vlTOPp->__Vdly__TX__DOT__rate_match__DOT__state 
        = vlTOPp->TX__DOT__rate_match__DOT__state;
    vlTOPp->__Vdly__TX__DOT__channel_code__DOT__state 
        = vlTOPp->TX__DOT__channel_code__DOT__state;
    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__state 
        = vlTOPp->TX__DOT__code_block_segment__DOT__state;
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_4 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_3));
    vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_valueNext));
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__coded_data_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__when_PhyTX_l648)) 
                                         & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__raw_data_fire)));
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state = 0U;
    } else {
        if ((((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_valid) 
              & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_1_ready)) 
             & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_payload_last))) {
            vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state = 0U;
        } else {
            if (((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_1_valid) 
                 & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_raw_data_ready))) {
                vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state 
                    = vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state_1;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state = 0U;
    } else {
        if ((((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_valid) 
              & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_0_ready)) 
             & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_payload_last))) {
            vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state = 0U;
        } else {
            if (((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_0_valid) 
                 & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_raw_data_ready))) {
                vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                    = vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state_1;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state = 0U;
        vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__block_msg_enable = 1U;
        vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__zero_padding_cnt = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))) {
            if (vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__block_msg_fire) {
                vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__zero_padding_cnt 
                    = ((0x28U > (0xfffffU & (IData)(
                                                    (vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
                                                     >> 2U))))
                        ? (0x1fffU & ((IData)(0x28U) 
                                      - (IData)((vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
                                                 >> 2U))))
                        : 0U);
                vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state = 1U;
                vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__block_msg_enable = 0U;
            } else {
                vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__block_msg_enable = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))) {
                if (vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_msg_fire) {
                    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state 
                        = vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT___zz_state;
                }
            } else {
                if ((2U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))) {
                    if (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment_result_data_valid) 
                         & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_0_ready))) {
                        vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__zero_padding_cnt 
                            = (0x1fffU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__zero_padding_cnt) 
                                          - (IData)(1U)));
                        if (vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__when_PhyTX_l188) {
                            vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state = 3U;
                        }
                    }
                } else {
                    if ((((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment_result_data_valid) 
                          & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_0_ready)) 
                         & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment_result_data_payload_last))) {
                        vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state = 0U;
                        vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__block_msg_enable = 1U;
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state = 0U;
    } else {
        if ((((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_valid) 
              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_ready)) 
             & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_payload_last))) {
            vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state = 0U;
        } else {
            if (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_valid) 
                 & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_ready))) {
                vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                    = vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state_1;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popping))) {
            vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter = 0xfU;
    } else {
        if (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__emitCrc) {
            if (vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_1_ready) {
                vlTOPp->__Vdly__TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter 
                    = (0xfU & ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter) 
                               - (IData)(1U)));
            }
        } else {
            vlTOPp->__Vdly__TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter = 0xfU;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter = 0x17U;
    } else {
        if (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__emitCrc) {
            if (vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_0_ready) {
                vlTOPp->__Vdly__TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter 
                    = (0x1fU & ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter) 
                                - (IData)(1U)));
            }
        } else {
            vlTOPp->__Vdly__TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter = 0x17U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__r_enc_buf = 0U;
    } else {
        if (vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__when_PhyTX_l648) {
            vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__r_enc_buf 
                = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__when_PhyTX_l648)
                    ? ((0x40U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                 << 5U)) | (0x3fU & 
                                            ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tail_bits) 
                                             >> 1U)))
                    : 0U);
        } else {
            if (vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__raw_data_fire) {
                vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__r_enc_buf 
                    = (0x7fU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                >> 1U));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state = 0U;
        vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__block_msg_enable = 1U;
        vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__zero_padding_cnt = 0U;
        vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__rnti = 0U;
    } else {
        if ((4U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state))) {
            if ((((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_valid) 
                  & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_1_ready)) 
                 & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_last))) {
                vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state = 0U;
                vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__block_msg_enable = 1U;
            }
        } else {
            if ((2U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state))) {
                if ((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state))) {
                    if (vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__result_data_fire_1) {
                        if ((0x10U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_length))) {
                            vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state = 4U;
                        }
                    }
                } else {
                    if (vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__result_data_fire_1) {
                        vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__zero_padding_cnt 
                            = (0x1fffU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__zero_padding_cnt) 
                                          - (IData)(1U)));
                        if (vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__when_PhyTX_l266) {
                            vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state = 3U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state))) {
                    if (vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_msg_fire) {
                        vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state 
                            = vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT___zz_state;
                    }
                } else {
                    if (vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__block_msg_fire) {
                        vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__zero_padding_cnt 
                            = ((0x28U > (0xfffffU & (IData)(
                                                            (vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
                                                             >> 2U))))
                                ? (0x1fffU & ((IData)(0x28U) 
                                              - (IData)(
                                                        (vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
                                                         >> 2U))))
                                : 0U);
                        vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state = 1U;
                        vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__block_msg_enable = 0U;
                    } else {
                        vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__block_msg_enable = 1U;
                    }
                    vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__rnti 
                        = (0xffffU & (IData)((vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
                                              >> 0x16U)));
                }
            }
        }
    }
    vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_value)));
}

VL_INLINE_OPT void VTX::_sequent__TOP__7(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_sequent__TOP__7\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*5:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx12;
    // Body
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__raw_data_payload_last_regNext 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__isEncoding) 
                                         & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_logic_ram_port0)));
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popping))) {
            vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popping))) {
            vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushing;
        }
    }
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value)));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter = 0x17U;
    } else {
        if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__emitCrc) {
            if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_ready) {
                vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter 
                    = (0x1fU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter) 
                                - (IData)(1U)));
            }
        } else {
            vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter = 0x17U;
        }
    }
    __Vtableidx1 = (((((IData)(vlTOPp->raw_data_valid) 
                       & (IData)(vlTOPp->TX__DOT__tx_crc_extender_raw_data_ready)) 
                      & (IData)(vlTOPp->raw_data_payload_last)) 
                     << 5U) | (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushing) 
                                << 4U) | (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushing) 
                                           << 3U) | 
                                          (((((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3__DOT___zz_io_output_valid) 
                                              & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_full))) 
                                             & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3__DOT___zz_io_output_payload_last)) 
                                            << 2U) 
                                           | (((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__block_msg_ctrl_in_fire) 
                                               << 1U) 
                                              | (IData)(vlTOPp->reset))))));
    if ((1U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->TX__DOT__tx_crc_extender__DOT__ctrl_in_enable 
            = vlTOPp->__Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable
            [__Vtableidx1];
    }
    if ((2U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->TX__DOT__tx_crc_extender__DOT__ctrl_out_valid 
            = vlTOPp->__Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid
            [__Vtableidx1];
    }
    if ((4U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->TX__DOT__tx_crc_extender__DOT__crc_raw_halt 
            = vlTOPp->__Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt
            [__Vtableidx1];
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state = 0U;
        vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__block_msg_enable = 0U;
        vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__divide_enable = 0U;
    } else {
        if ((4U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state))) {
            if ((2U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state))) {
                if ((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state))) {
                    if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode) {
                        if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__result_data_fire) {
                            if ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__payload_cnt))) {
                                vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state 
                                    = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_is_last_block)
                                        ? 0U : 5U);
                            }
                        }
                    } else {
                        if ((((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_valid) 
                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_2_ready)) 
                             & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_last))) {
                            vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state = 0U;
                            vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__block_msg_enable = 1U;
                        }
                    }
                } else {
                    if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__result_data_fire) {
                        if ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__zero_padding_cnt))) {
                            vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state = 7U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state))) {
                    if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_msg_fire) {
                        vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state 
                            = ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__zero_padding_cnt))
                                ? 7U : 6U);
                    }
                } else {
                    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state = 5U;
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state))) {
                if ((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state))) {
                    if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__emit_step) {
                        vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state = 5U;
                    }
                } else {
                    if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__cmd_fire) {
                        vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__divide_enable = 0U;
                    }
                    if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_valid) {
                        vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state = 3U;
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state))) {
                    if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__cmd_fire) {
                        vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__divide_enable = 0U;
                    }
                    if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_valid) {
                        vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state = 2U;
                        vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__divide_enable = 1U;
                    }
                } else {
                    if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__block_msg_fire) {
                        if ((0x28U > (0xfffffU & (IData)(
                                                         (vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
                                                          >> 2U))))) {
                            vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state = 5U;
                        } else {
                            if ((0x1800U >= (0xfffffU 
                                             & (IData)(
                                                       (vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
                                                        >> 2U))))) {
                                vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state = 4U;
                            } else {
                                vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state = 1U;
                                vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__divide_enable = 1U;
                            }
                        }
                        vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__block_msg_enable = 0U;
                    } else {
                        vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__block_msg_enable = 1U;
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TX__DOT__rate_match__DOT__state = 0U;
        vlTOPp->TX__DOT__rate_match__DOT__bits_sel_value = 0U;
    } else {
        vlTOPp->TX__DOT__rate_match__DOT__bits_sel_value 
            = vlTOPp->TX__DOT__rate_match__DOT__bits_sel_valueNext;
        if ((0U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
            if (vlTOPp->TX__DOT__channel_code__DOT__coded_msg_fire) {
                vlTOPp->__Vdly__TX__DOT__rate_match__DOT__state 
                    = ((0U == (0x1fU & (IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_length)))
                        ? 2U : 1U);
            }
            vlTOPp->TX__DOT__rate_match__DOT__bits_sel_value = 2U;
        } else {
            if ((1U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
                if ((1U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__zero_padding_cnt))) {
                    vlTOPp->__Vdly__TX__DOT__rate_match__DOT__state = 2U;
                }
            } else {
                if ((2U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
                    if (vlTOPp->TX__DOT__rate_match__DOT__raw_data_fire) {
                        if (vlTOPp->TX__DOT__channel_code__DOT__flowMux_1__DOT___zz_output_payload_last) {
                            vlTOPp->__Vdly__TX__DOT__rate_match__DOT__state = 3U;
                        }
                    }
                } else {
                    if (vlTOPp->TX__DOT__rate_match__DOT__result_data_fire) {
                        if ((1U == vlTOPp->TX__DOT__rate_match__DOT__vector_length_cnt)) {
                            vlTOPp->__Vdly__TX__DOT__rate_match__DOT__state = 0U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_value)));
    __Vtableidx12 = ((((IData)(vlTOPp->TX__DOT__channel_code__DOT__flowMux_1__DOT___zz_output_valid) 
                       & (2U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) 
                      << 6U) | (((((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo_io_pop_valid) 
                                   & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo_io_pop_ready)) 
                                  & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0)) 
                                 << 5U) | (((IData)(vlTOPp->TX__DOT__channel_code__DOT__coded_msg_fire) 
                                            << 4U) 
                                           | (((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popping) 
                                               << 3U) 
                                              | (((IData)(vlTOPp->TX__DOT__channel_code__DOT__state) 
                                                  << 1U) 
                                                 | (IData)(vlTOPp->reset))))));
    if (vlTOPp->__Vtablechg12[__Vtableidx12]) {
        vlTOPp->__Vdly__TX__DOT__channel_code__DOT__state 
            = vlTOPp->__Vtable12_TX__DOT__channel_code__DOT__state
            [__Vtableidx12];
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__state = 0U;
    } else {
        if (vlTOPp->TX__DOT__code_block_segment__DOT__state) {
            if (((((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3__DOT___zz_io_output_valid) 
                   & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_full))) 
                  & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3__DOT___zz_io_output_payload_last)) 
                 & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__finish_indicator) 
                    >> (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)))) {
                vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__state = 0U;
            }
        } else {
            if (vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo_io_pop_valid) {
                vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__state = 1U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popping))) {
            vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popping))) {
            vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushing;
        }
    }
    vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_valueNext));
    vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_value)));
    vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__zero_padding_cnt 
        = vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__zero_padding_cnt;
}

VL_INLINE_OPT void VTX::_sequent__TOP__8(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_sequent__TOP__8\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state 
        = vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state;
    vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__zero_padding_cnt 
        = vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__zero_padding_cnt;
    vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state 
        = vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state;
    vlTOPp->TX__DOT__rate_match__DOT__state = vlTOPp->__Vdly__TX__DOT__rate_match__DOT__state;
    vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT___zz_state 
        = ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__zero_padding_cnt))
            ? 3U : 2U);
    vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__when_PhyTX_l188 
        = (1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__zero_padding_cnt));
    vlTOPp->__Vtableidx2 = vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state;
    vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state_string[0U] 
        = vlTOPp->__Vtable2_TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state_string
        [vlTOPp->__Vtableidx2][0U];
    vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state_string[1U] 
        = vlTOPp->__Vtable2_TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state_string
        [vlTOPp->__Vtableidx2][1U];
    vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state_string[2U] 
        = vlTOPp->__Vtable2_TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state_string
        [vlTOPp->__Vtableidx2][2U];
    vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment_result_data_payload_last 
        = ((0U != (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state)) 
           & ((1U != (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state)) 
              & ((2U != (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state)) 
                 & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_logic_ram_port0))));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state_1 
        = (0xffffffU & ((vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                         << 1U) ^ ((1U & (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                           >> 1U) ^ 
                                          (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                           >> 0x17U)))
                                    ? 0x800063U : 0U)));
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__emitCrc = 0U;
    } else {
        if ((((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_1_valid) 
              & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_raw_data_ready)) 
             & (IData)(vlTOPp->raw_data_payload_last))) {
            vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__emitCrc = 1U;
        }
        if ((((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_valid) 
              & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_1_ready)) 
             & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_payload_last))) {
            vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__emitCrc = 0U;
        }
        if ((1U & (~ (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__when_PhyTX_l57)))) {
            if ((0U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter))) {
                if (vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_1_ready) {
                    vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__emitCrc = 0U;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__emitCrc = 0U;
    } else {
        if ((((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_0_valid) 
              & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_raw_data_ready)) 
             & (IData)(vlTOPp->raw_data_payload_last))) {
            vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__emitCrc = 1U;
        }
        if ((((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_valid) 
              & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_0_ready)) 
             & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_payload_last))) {
            vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__emitCrc = 0U;
        }
        if ((1U & (~ (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__when_PhyTX_l57)))) {
            if ((0U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))) {
                if (vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_0_ready) {
                    vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__emitCrc = 0U;
                }
            }
        }
    }
    vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT___zz_state 
        = ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__zero_padding_cnt))
            ? 3U : 2U);
    vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__when_PhyTX_l266 
        = (1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__zero_padding_cnt));
    vlTOPp->__Vtableidx4 = vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state;
    vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state_string[0U] 
        = vlTOPp->__Vtable4_TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state_string
        [vlTOPp->__Vtableidx4][0U];
    vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state_string[1U] 
        = vlTOPp->__Vtable4_TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state_string
        [vlTOPp->__Vtableidx4][1U];
    vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state_string[2U] 
        = vlTOPp->__Vtable4_TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state_string
        [vlTOPp->__Vtableidx4][2U];
    vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_last 
        = (1U & (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state) 
                  >> 2U) & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_logic_ram_port0)));
    vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_valueNext));
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__isEncoding = 0U;
    } else {
        if (vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__loaded_tail_bits) {
            vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__isEncoding = 1U;
        } else {
            if ((((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_valid) 
                  & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_ready)) 
                 & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_logic_ram_port0))) {
                vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__isEncoding = 0U;
            }
        }
    }
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_valueNext));
    if (vlTOPp->reset) {
        vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__emitCrc = 0U;
    } else {
        if ((((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_valid) 
              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_ready)) 
             & ((0x19U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__payload_cnt)) 
                & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode)))) {
            vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__emitCrc = 1U;
        }
        if ((((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_valid) 
              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_ready)) 
             & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_payload_last))) {
            vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__emitCrc = 0U;
        }
        if ((1U & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__when_PhyTX_l57)))) {
            if ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))) {
                if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_ready) {
                    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__emitCrc = 0U;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92 = 0U;
        vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_cmd_ready = 0U;
        vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_valid = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92))) {
            if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__cmd_fire) {
                vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92 = 1U;
                vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_cmd_ready = 0U;
            } else {
                vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_cmd_ready = 1U;
            }
            vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_valid = 0U;
        } else {
            if ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92))) {
                if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_6) {
                    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92 = 2U;
                    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_valid = 1U;
                }
            } else {
                if ((2U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92))) {
                    if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__rsp_fire) {
                        vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_valid = 0U;
                        vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_cmd_ready = 1U;
                        vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92 = 0U;
                    }
                } else {
                    vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92 = 0U;
                }
            }
        }
    }
    vlTOPp->result_data_payload_fragment = (1U & ((IData)(vlTOPp->TX__DOT__rate_match__DOT___zz_interleaving_ram_port0) 
                                                  >> (IData)(vlTOPp->TX__DOT__rate_match__DOT__bits_sel_value)));
    vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->TX__DOT__rate_match__DOT___zz_2 = 0U;
    if ((0U != (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
        if ((1U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
            vlTOPp->TX__DOT__rate_match__DOT___zz_2 = 1U;
        }
    }
    vlTOPp->__Vtableidx13 = vlTOPp->TX__DOT__rate_match__DOT__state;
    vlTOPp->TX__DOT__rate_match__DOT__state_string[0U] 
        = vlTOPp->__Vtable13_TX__DOT__rate_match__DOT__state_string
        [vlTOPp->__Vtableidx13][0U];
    vlTOPp->TX__DOT__rate_match__DOT__state_string[1U] 
        = vlTOPp->__Vtable13_TX__DOT__rate_match__DOT__state_string
        [vlTOPp->__Vtableidx13][1U];
    vlTOPp->TX__DOT__rate_match__DOT__state_string[2U] 
        = vlTOPp->__Vtable13_TX__DOT__rate_match__DOT__state_string
        [vlTOPp->__Vtableidx13][2U];
    vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_willClear = 0U;
    if ((0U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
        vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_willClear = 1U;
    }
    vlTOPp->TX__DOT__rate_match_result_data_valid = 
        ((3U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state)) 
         & ((IData)(vlTOPp->TX__DOT__rate_match__DOT___zz_interleaving_ram_port0) 
            >> 3U));
    vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter 
        = vlTOPp->__Vdly__TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter;
}

VL_INLINE_OPT void VTX::_sequent__TOP__9(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_sequent__TOP__9\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter 
        = vlTOPp->__Vdly__TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter;
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter 
        = vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter;
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92 
        = vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92;
    vlTOPp->result_data_valid = vlTOPp->TX__DOT__rate_match_result_data_valid;
    vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT___zz_result_data_payload_fragment 
        = (1U & ((8U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter))
                  ? ((4U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter))
                      ? ((2U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter))
                          ? ((1U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter))
                              ? ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state) 
                                 >> 0xfU) : ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state) 
                                             >> 0xeU))
                          : ((1U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter))
                              ? ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state) 
                                 >> 0xdU) : ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state) 
                                             >> 0xcU)))
                      : ((2U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter))
                          ? ((1U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter))
                              ? ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state) 
                                 >> 0xbU) : ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state) 
                                             >> 0xaU))
                          : ((1U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter))
                              ? ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state) 
                                 >> 9U) : ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state) 
                                           >> 8U))))
                  : ((4U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter))
                      ? ((2U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter))
                          ? ((1U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter))
                              ? ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state) 
                                 >> 7U) : ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state) 
                                           >> 6U)) : 
                         ((1U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter))
                           ? ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state) 
                              >> 5U) : ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state) 
                                        >> 4U))) : 
                     ((2U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter))
                       ? ((1U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter))
                           ? ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state) 
                              >> 3U) : ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state) 
                                        >> 2U)) : (
                                                   (1U 
                                                    & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter))
                                                    ? 
                                                   ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state) 
                                                    >> 1U)
                                                    : (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state))))));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__when_PhyTX_l57 
        = (1U & (~ (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__emitCrc)));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_payload_last = 0U;
    if (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__emitCrc) {
        if ((0U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter))) {
            vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_payload_last = 1U;
        }
    }
    vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT___zz_result_data_payload_fragment 
        = (1U & ((0x10U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))
                  ? ((8U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))
                      ? (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                         >> 0x17U) : ((4U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))
                                       ? ((2U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))
                                           ? ((1U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))
                                               ? (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                                  >> 0x17U)
                                               : (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                                  >> 0x16U))
                                           : ((1U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))
                                               ? (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                                  >> 0x15U)
                                               : (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                                  >> 0x14U)))
                                       : ((2U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))
                                           ? ((1U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))
                                               ? (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                                  >> 0x13U)
                                               : (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                                  >> 0x12U))
                                           : ((1U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))
                                               ? (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                                  >> 0x11U)
                                               : (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                                  >> 0x10U)))))
                  : ((8U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))
                      ? ((4U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))
                          ? ((2U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))
                              ? ((1U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))
                                  ? (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                     >> 0xfU) : (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                                 >> 0xeU))
                              : ((1U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))
                                  ? (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                     >> 0xdU) : (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                                 >> 0xcU)))
                          : ((2U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))
                              ? ((1U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))
                                  ? (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                     >> 0xbU) : (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                                 >> 0xaU))
                              : ((1U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))
                                  ? (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                     >> 9U) : (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                               >> 8U))))
                      : ((4U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))
                          ? ((2U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))
                              ? ((1U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))
                                  ? (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                     >> 7U) : (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                               >> 6U))
                              : ((1U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))
                                  ? (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                     >> 5U) : (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                               >> 4U)))
                          : ((2U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))
                              ? ((1U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))
                                  ? (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                     >> 3U) : (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                               >> 2U))
                              : ((1U & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))
                                  ? (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                     >> 1U) : vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state))))));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__when_PhyTX_l57 
        = (1U & (~ (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__emitCrc)));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_payload_last = 0U;
    if (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__emitCrc) {
        if ((0U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))) {
            vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_payload_last = 1U;
        }
    }
    vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__loaded_tail_bits 
        = ((~ (IData)(vlTOPp->reset)) & (((IData)(vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_outputs_1_valid) 
                                          & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder_raw_data_ready)) 
                                         & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0)));
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT___zz_result_data_payload_fragment 
        = (1U & ((0x10U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))
                  ? ((8U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))
                      ? (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                         >> 0x17U) : ((4U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))
                                       ? ((2U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))
                                           ? ((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))
                                               ? (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                                  >> 0x17U)
                                               : (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                                  >> 0x16U))
                                           : ((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))
                                               ? (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                                  >> 0x15U)
                                               : (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                                  >> 0x14U)))
                                       : ((2U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))
                                           ? ((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))
                                               ? (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                                  >> 0x13U)
                                               : (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                                  >> 0x12U))
                                           : ((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))
                                               ? (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                                  >> 0x11U)
                                               : (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                                  >> 0x10U)))))
                  : ((8U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))
                      ? ((4U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))
                          ? ((2U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))
                              ? ((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))
                                  ? (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                     >> 0xfU) : (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                                 >> 0xeU))
                              : ((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))
                                  ? (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                     >> 0xdU) : (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                                 >> 0xcU)))
                          : ((2U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))
                              ? ((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))
                                  ? (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                     >> 0xbU) : (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                                 >> 0xaU))
                              : ((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))
                                  ? (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                     >> 9U) : (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                               >> 8U))))
                      : ((4U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))
                          ? ((2U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))
                              ? ((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))
                                  ? (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                     >> 7U) : (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                               >> 6U))
                              : ((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))
                                  ? (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                     >> 5U) : (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                               >> 4U)))
                          : ((2U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))
                              ? ((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))
                                  ? (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                     >> 3U) : (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                               >> 2U))
                              : ((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))
                                  ? (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                     >> 1U) : vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state))))));
}

VL_INLINE_OPT void VTX::_sequent__TOP__10(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_sequent__TOP__10\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__when_PhyTX_l57 
        = (1U & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__emitCrc)));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_payload_last = 0U;
    if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__emitCrc) {
        if ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))) {
            vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_payload_last = 1U;
        }
    }
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__rsp_fire 
        = vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_valid;
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__cmd_fire 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__divide_enable) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_cmd_ready));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_1 = 0U;
    if ((0U != (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92))) {
        if ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92))) {
            vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_1 = 1U;
        }
    }
    vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3__DOT___zz_io_output_payload_last 
        = ((1U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type))
            ? (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_payload_last)
            : (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_payload_last));
    vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_2 = 0U;
    if ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92))) {
        if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__cmd_fire) {
            vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_2 = 1U;
        }
    }
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_6 
        = ((0x13U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_4)) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_1));
    vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__tx_crc_extender_block_msg_ctrl_in_ready 
        = ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__ctrl_in_enable) 
           & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__ctrl_out_valid) 
           & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_full))))));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_3 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_6)
            ? 0U : (0x1fU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_4) 
                             + (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_1))));
    if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_2) {
        vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_3 = 0U;
    }
    vlTOPp->TX__DOT__channel_code__DOT__msg_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_full))))));
    vlTOPp->TX__DOT__channel_code__DOT__data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_full))))));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_0_ready 
        = ((1U != (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type)) 
           & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_1_ready 
        = ((1U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type)) 
           & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_full))))));
    vlTOPp->block_msg_ctrl_ready = vlTOPp->TX__DOT__tx_crc_extender_block_msg_ctrl_in_ready;
    vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_raw_data_ready 
        = ((~ (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__emitCrc)) 
           & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_0_ready));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_raw_data_ready 
        = ((~ (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__emitCrc)) 
           & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_1_ready));
    vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_valueNext 
        = (3U & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_input_ready = 0U;
    if ((1U != (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type))) {
        vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_input_ready 
            = vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_raw_data_ready;
    }
    if ((1U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type))) {
        vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_input_ready 
            = vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_raw_data_ready;
    }
    vlTOPp->TX__DOT__tx_crc_extender_raw_data_ready 
        = ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_input_ready) 
           & (~ (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc_raw_halt)));
    vlTOPp->raw_data_ready = vlTOPp->TX__DOT__tx_crc_extender_raw_data_ready;
}

VL_INLINE_OPT void VTX::_sequent__TOP__17(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_sequent__TOP__17\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_length 
        = vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_length;
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__zero_padding_cnt 
        = vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__zero_padding_cnt;
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__emit_step 
        = vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__emit_step;
    vlTOPp->TX__DOT__rate_match__DOT__zero_padding_cnt 
        = vlTOPp->__Vdly__TX__DOT__rate_match__DOT__zero_padding_cnt;
    vlTOPp->TX__DOT__rate_match__DOT__vector_length_cnt 
        = vlTOPp->__Vdly__TX__DOT__rate_match__DOT__vector_length_cnt;
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__payload_cnt 
        = vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__payload_cnt;
    if (((IData)(vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_outputs_1_valid) 
         & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder_raw_data_ready))) {
        vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tail_bits 
            = (0x7fU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT___zz_tail_bits) 
                        >> 1U));
    }
    vlTOPp->result_data_payload_last = (1U == vlTOPp->TX__DOT__rate_match__DOT__vector_length_cnt);
    if ((0U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__state))) {
        if (vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popping) {
            vlTOPp->TX__DOT__channel_code__DOT__message_segment_length 
                = (0x1fffU & ((0x2000U & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0))
                               ? (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0)
                               : ((IData)(4U) + (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__state)))) {
        if (vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo_io_pop_valid) {
            vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha 
                = (3U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0));
        }
    }
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_logic_ram_port0 
        = ((0x1800U >= (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_valueNext))
            ? vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ram
           [vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_valueNext]
            : (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT____Vxrand1));
    if ((1U & (~ ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state)))) {
                if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__block_msg_fire) {
                    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode 
                        = ((0x28U <= (0xfffffU & (IData)(
                                                         (vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
                                                          >> 2U)))) 
                           & (0x1800U < (0xfffffU & (IData)(
                                                            (vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
                                                             >> 2U)))));
                }
            }
        }
    }
    vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram
        [vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_valueNext];
    if (vlTOPp->__Vdlyvset__TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ram__v0) {
        vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram__v0) {
        vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram__v0;
    }
    vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ram
        [vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_valueNext];
    vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type 
        = ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
            ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
            : ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
                ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                : (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_is_last_block 
        = (1U & ((~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode)) 
                 | (1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__C))));
    vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ram
        [vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_valueNext];
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT___zz_tail_bits 
        = ((0x80U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                     << 6U)) | (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tail_bits));
    if (vlTOPp->__Vdlyvset__TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ram__v0) {
        vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ram__v0;
    }
    vlTOPp->TX__DOT__code_block_segment__DOT__finish_indicator 
        = (1U | (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__finish_indicator));
    vlTOPp->TX__DOT__code_block_segment__DOT__finish_indicator 
        = (2U | (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__finish_indicator));
    vlTOPp->TX__DOT__code_block_segment__DOT__finish_indicator 
        = ((0xbU & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__finish_indicator)) 
           | ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_is_last_block) 
              << 2U));
    vlTOPp->TX__DOT__code_block_segment__DOT__finish_indicator 
        = (7U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__finish_indicator));
    if (vlTOPp->__Vdlyvset__TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ram__v0) {
        vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VTX::_combo__TOP__18(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_combo__TOP__18\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state_1 
        = (0xffffU & (((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state) 
                       << 1U) ^ ((1U & ((IData)(vlTOPp->raw_data_payload_fragment) 
                                        ^ ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state) 
                                           >> 0xfU)))
                                  ? 0x1021U : 0U)));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state_1 
        = (0xffffffU & ((vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                         << 1U) ^ ((1U & ((IData)(vlTOPp->raw_data_payload_fragment) 
                                          ^ (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                             >> 0x17U)))
                                    ? 0x864cfbU : 0U)));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_input_valid 
        = ((IData)(vlTOPp->raw_data_valid) & (~ (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc_raw_halt)));
    vlTOPp->TX__DOT__rate_match__DOT__result_data_fire 
        = ((IData)(vlTOPp->TX__DOT__rate_match_result_data_valid) 
           & (IData)(vlTOPp->result_data_ready));
    vlTOPp->TX__DOT__rate_match__DOT__when_PhyTX_l816 
        = (1U & (((IData)(vlTOPp->TX__DOT__rate_match_result_data_valid) 
                  & (IData)(vlTOPp->result_data_ready)) 
                 | (~ ((IData)(vlTOPp->TX__DOT__rate_match__DOT___zz_interleaving_ram_port0) 
                       >> 3U))));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__block_msg_ctrl_in_fire 
        = ((IData)(vlTOPp->block_msg_ctrl_valid) & (IData)(vlTOPp->TX__DOT__tx_crc_extender_block_msg_ctrl_in_ready));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_0_valid 
        = ((1U != (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type)) 
           & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_input_valid));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_1_valid 
        = ((1U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type)) 
           & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_input_valid));
    vlTOPp->TX__DOT__rate_match__DOT__willIncrement = 0U;
    if ((0U != (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
        if ((1U != (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
            if ((2U != (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
                if (vlTOPp->TX__DOT__rate_match__DOT__when_PhyTX_l816) {
                    vlTOPp->TX__DOT__rate_match__DOT__willIncrement = 1U;
                }
            }
        }
    }
    vlTOPp->__Vtableidx16 = (((0x1fU == (IData)(vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_value)) 
                              << 4U) | (((1U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__read_row_cnt)) 
                                         << 3U) | (
                                                   ((IData)(vlTOPp->TX__DOT__rate_match__DOT__when_PhyTX_l816) 
                                                    << 2U) 
                                                   | (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))));
    vlTOPp->TX__DOT__rate_match__DOT__bits_sel_willIncrement 
        = vlTOPp->__Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement
        [vlTOPp->__Vtableidx16];
    vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_valid 
        = ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__emitCrc) 
           | (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_0_valid));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_valid 
        = ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__emitCrc) 
           | (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_1_valid));
    vlTOPp->TX__DOT__rate_match__DOT__read_addr_next 
        = (0x1fffU & ((IData)(vlTOPp->TX__DOT__rate_match__DOT__willIncrement)
                       ? ((1U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__read_row_cnt))
                           ? (IData)(vlTOPp->TX__DOT__rate_match__DOT___zz_conv_perm_pattern_port0)
                           : ((IData)(0x20U) + (IData)(vlTOPp->TX__DOT__rate_match__DOT__read_addr)))
                       : (IData)(vlTOPp->TX__DOT__rate_match__DOT__read_addr)));
    vlTOPp->TX__DOT__rate_match__DOT__bits_sel_valueNext 
        = (((2U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__bits_sel_value)) 
            & (IData)(vlTOPp->TX__DOT__rate_match__DOT__bits_sel_willIncrement))
            ? 0U : (3U & ((IData)(vlTOPp->TX__DOT__rate_match__DOT__bits_sel_value) 
                          + (IData)(vlTOPp->TX__DOT__rate_match__DOT__bits_sel_willIncrement))));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3__DOT___zz_io_output_valid 
        = ((1U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type))
            ? (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_valid)
            : (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_valid));
    vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3__DOT___zz_io_output_valid) 
           & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_value) 
                   + (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_willIncrement)));
}

VL_INLINE_OPT void VTX::_sequent__TOP__19(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_sequent__TOP__19\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vtableidx6 = ((0x10U & (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__rnti) 
                                       >> (0xfU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_length) 
                                                   - (IData)(1U)))) 
                                      << 4U)) | ((8U 
                                                  & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                                     << 2U)) 
                                                 | (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state)));
    vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment 
        = vlTOPp->__Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment
        [vlTOPp->__Vtableidx6];
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder_raw_data_ready 
        = (1U & ((~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_full)) 
                 & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__isEncoding))));
    vlTOPp->TX__DOT__channel_code__DOT__state = vlTOPp->__Vdly__TX__DOT__channel_code__DOT__state;
    vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_full))))));
    vlTOPp->TX__DOT__code_block_segment__DOT__state 
        = vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__state;
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state 
        = vlTOPp->__Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state;
    vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_0_ready 
        = ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
           & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_1_ready 
        = ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
           & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_0_ready 
        = ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
           & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_1_ready 
        = ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
           & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_2_ready 
        = ((2U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
           & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_2_ready 
        = ((2U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
           & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0 
        = ((0xffffff80U & (((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__isEncoding) 
                            << 7U) & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                      << 6U))) | (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__r_enc_buf));
    vlTOPp->TX__DOT__channel_code__DOT__flowMux_1__DOT___zz_output_payload_last 
        = (1U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__sel_cha)
                  ? (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__raw_data_payload_last_regNext)
                  : (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0)));
    vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_input_ready = 0U;
    if ((1U & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__sel_cha)))) {
        vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_input_ready = 1U;
    }
    if (vlTOPp->TX__DOT__channel_code__DOT__sel_cha) {
        vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_input_ready 
            = vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder_raw_data_ready;
    }
    vlTOPp->TX__DOT__channel_code__DOT__coded_msg_fire 
        = ((1U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__state)) 
           & (0U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state)));
    vlTOPp->__Vtableidx11 = vlTOPp->TX__DOT__channel_code__DOT__state;
    vlTOPp->TX__DOT__channel_code__DOT__state_string[0U] 
        = vlTOPp->__Vtable11_TX__DOT__channel_code__DOT__state_string
        [vlTOPp->__Vtableidx11][0U];
    vlTOPp->TX__DOT__channel_code__DOT__state_string[1U] 
        = vlTOPp->__Vtable11_TX__DOT__channel_code__DOT__state_string
        [vlTOPp->__Vtableidx11][1U];
    vlTOPp->TX__DOT__channel_code__DOT__state_string[2U] 
        = vlTOPp->__Vtable11_TX__DOT__channel_code__DOT__state_string
        [vlTOPp->__Vtableidx11][2U];
    vlTOPp->TX__DOT__channel_code__DOT___zz_io_pop_ready 
        = ((2U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__state)) 
           & (2U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state)));
    vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo_io_pop_valid) 
           & (0U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__state)));
    vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_5_io_input_valid 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo_io_pop_valid) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__state));
    vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_input_valid 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo_io_pop_valid) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__state));
    vlTOPp->__Vtableidx7 = vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state;
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state_string[0U] 
        = vlTOPp->__Vtable7_TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state_string
        [vlTOPp->__Vtableidx7][0U];
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state_string[1U] 
        = vlTOPp->__Vtable7_TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state_string
        [vlTOPp->__Vtableidx7][1U];
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state_string[2U] 
        = vlTOPp->__Vtable7_TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state_string
        [vlTOPp->__Vtableidx7][2U];
    vlTOPp->__Vtableidx10 = ((0x20U & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                       << 4U)) | ((0x10U 
                                                   & (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__emitCrc)
                                                        ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT___zz_result_data_payload_fragment)
                                                        : 
                                                       ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                                        >> 1U)) 
                                                      << 4U)) 
                                                  | (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode) 
                                                      << 3U) 
                                                     | (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state))));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment 
        = vlTOPp->__Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment
        [vlTOPp->__Vtableidx10];
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_last 
        = (1U & (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state) 
                  >> 2U) & (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state) 
                             >> 1U) & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state) 
                                       & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode)
                                           ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_payload_last)
                                           : (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_logic_ram_port0))))));
    vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushing 
        = (((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
             ? (1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))
             : ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
                 ? (1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state))
                 : (5U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state)))) 
           & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_valid 
        = ((7U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state)) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode));
    vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_msg_fire 
        = ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state)) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_0_ready));
    vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment_block_msg_ready 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__block_msg_enable) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_0_ready));
    vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_msg_fire 
        = ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state)) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_1_ready));
    vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_block_msg_ready 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__block_msg_enable) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_1_ready));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_block_msg_ready 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__block_msg_enable) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_2_ready));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_msg_fire 
        = ((5U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state)) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_2_ready));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_ready 
        = (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_2_ready) 
            & (7U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state))) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode));
    vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_input_valid 
        = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo_io_pop_valid) 
           & (IData)(vlTOPp->TX__DOT__channel_code__DOT___zz_io_pop_ready));
    vlTOPp->TX__DOT__channel_code__DOT__data_fifo_io_pop_ready 
        = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_input_ready) 
           & (IData)(vlTOPp->TX__DOT__channel_code__DOT___zz_io_pop_ready));
    vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popping) {
        vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment_result_data_valid 
        = ((0U != (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state)) 
           & ((1U != (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state)) 
              & ((2U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state)) 
                 | ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
                    & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_input_valid)))));
    vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_outputs_1_valid 
        = ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_input_valid));
    vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3__DOT___zz_io_output_payload_last 
        = ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
            ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment_result_data_payload_last)
            : ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
                ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_last)
                : (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_last)));
    vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_valid 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__emitCrc) 
           | (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_valid));
    vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__block_msg_fire 
        = (((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
            & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_5_io_input_valid)) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment_block_msg_ready));
    vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__block_msg_fire 
        = (((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
            & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_5_io_input_valid)) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_block_msg_ready));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__block_msg_fire 
        = (((2U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
            & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_5_io_input_valid)) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_block_msg_ready));
    vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_5_io_input_ready = 0U;
    if ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))) {
        vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_5_io_input_ready 
            = vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment_block_msg_ready;
    }
    if ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))) {
        vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_5_io_input_ready 
            = vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_block_msg_ready;
    }
    if ((2U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))) {
        vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_5_io_input_ready 
            = vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_block_msg_ready;
    }
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_ready 
        = ((~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__emitCrc)) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_ready));
    vlTOPp->TX__DOT__channel_code__DOT__flowMux_1__DOT___zz_output_valid 
        = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__sel_cha)
            ? (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__coded_data_valid_1)
            : ((~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__sel_cha)) 
               & (IData)(vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_input_valid)));
    vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_outputs_1_valid 
        = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__sel_cha) 
           & (IData)(vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_input_valid));
    vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo_io_pop_valid) 
           & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo_io_pop_ready));
    vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_valueNext 
        = (3U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_valid 
        = (1U & ((4U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state))
                  ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_outputs_1_valid)
                  : (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state) 
                      >> 1U) & ((~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state)) 
                                | (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_outputs_1_valid)))));
}
