// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTX.h for the primary calling header

#include "VTX.h"
#include "VTX__Syms.h"

//==========
CData/*0:0*/ VTX::__Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[64];
CData/*0:0*/ VTX::__Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[64];
CData/*0:0*/ VTX::__Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[64];
WData/*95:0*/ VTX::__Vtable2_TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state_string[4][3];
WData/*95:0*/ VTX::__Vtable4_TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state_string[8][3];
CData/*1:0*/ VTX::__Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[32];
WData/*95:0*/ VTX::__Vtable7_TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state_string[8][3];
CData/*1:0*/ VTX::__Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[64];
WData/*71:0*/ VTX::__Vtable11_TX__DOT__channel_code__DOT__state_string[4][3];
CData/*1:0*/ VTX::__Vtable12_TX__DOT__channel_code__DOT__state[128];
WData/*95:0*/ VTX::__Vtable13_TX__DOT__rate_match__DOT__state_string[4][3];
CData/*0:0*/ VTX::__Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[64];
CData/*0:0*/ VTX::__Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[32];

VL_CTOR_IMP(VTX) {
    VTX__Syms* __restrict vlSymsp = __VlSymsp = new VTX__Syms(this, name());
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTX::__Vconfigure(VTX__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VTX::~VTX() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VTX::_initial__TOP__11(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_initial__TOP__11\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*799:0*/ __Vtemp5[25];
    // Body
    vlTOPp->TX__DOT__rate_match__DOT____Vxrand1 = VL_RAND_RESET_I(4);
    __Vtemp5[0U] = 0x2e62696eU;
    __Vtemp5[1U] = 0x7465726eU;
    __Vtemp5[2U] = 0x5f706174U;
    __Vtemp5[3U] = 0x7065726dU;
    __Vtemp5[4U] = 0x6f6e765fU;
    __Vtemp5[5U] = 0x63685f63U;
    __Vtemp5[6U] = 0x5f6d6174U;
    __Vtemp5[7U] = 0x72617465U;
    __Vtemp5[8U] = 0x76656c5fU;
    __Vtemp5[9U] = 0x6f706c65U;
    __Vtemp5[0xaU] = 0x2e765f74U;
    __Vtemp5[0xbU] = 0x312f5458U;
    __Vtemp5[0xcU] = 0x6a6f625fU;
    __Vtemp5[0xdU] = 0x746d702fU;
    __Vtemp5[0xeU] = 0x4543542fU;
    __Vtemp5[0xfU] = 0x50524f4aU;
    __Vtemp5[0x10U] = 0x4147495fU;
    __Vtemp5[0x11U] = 0x74732f4dU;
    __Vtemp5[0x12U] = 0x6f6a6563U;
    __Vtemp5[0x13U] = 0x65615072U;
    __Vtemp5[0x14U] = 0x6e2f4964U;
    __Vtemp5[0x15U] = 0x73646f77U;
    __Vtemp5[0x16U] = 0x2f6d6973U;
    __Vtemp5[0x17U] = 0x686f6d65U;
    __Vtemp5[0x18U] = 0x2fU;
    VL_READMEM_N(false, 5, 32, 0, VL_CVT_PACK_STR_NW(25, __Vtemp5)
                 , vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern
                 , 0, ~VL_ULL(0));
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT____Vxrand1 
        = VL_RAND_RESET_I(2);
}

void VTX::_settle__TOP__12(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_settle__TOP__12\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->result_data_payload_last = (1U == vlTOPp->TX__DOT__rate_match__DOT__vector_length_cnt);
    vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT___zz_state 
        = ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__zero_padding_cnt))
            ? 3U : 2U);
    vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__when_PhyTX_l188 
        = (1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__zero_padding_cnt));
    vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT___zz_state 
        = ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__zero_padding_cnt))
            ? 3U : 2U);
    vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__when_PhyTX_l266 
        = (1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__zero_padding_cnt));
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
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__when_PhyTX_l478 
        = (0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cn));
    vlTOPp->TX__DOT__rate_match__DOT__when_PhyTX_l817 
        = (1U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__read_row_cnt));
    vlTOPp->result_data_payload_fragment = (1U & ((IData)(vlTOPp->TX__DOT__rate_match__DOT___zz_interleaving_ram_port0) 
                                                  >> (IData)(vlTOPp->TX__DOT__rate_match__DOT__bits_sel_value)));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state_1 
        = (0xffffffU & ((vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                         << 1U) ^ ((1U & ((IData)(vlTOPp->raw_data_payload_fragment) 
                                          ^ (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                             >> 0x17U)))
                                    ? 0x864cfbU : 0U)));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state_1 
        = (0xffffU & (((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state) 
                       << 1U) ^ ((1U & ((IData)(vlTOPp->raw_data_payload_fragment) 
                                        ^ ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state) 
                                           >> 0xfU)))
                                  ? 0x1021U : 0U)));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__when_PhyTX_l487 
        = ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cp)) 
           & (0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cn)));
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
    vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_input_valid 
        = ((IData)(vlTOPp->raw_data_valid) & (~ (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc_raw_halt)));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__when_PhyTX_l57 
        = (1U & (~ (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__emitCrc)));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__when_PhyTX_l57 
        = (1U & (~ (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__emitCrc)));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__when_PhyTX_l57 
        = (1U & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__emitCrc)));
    vlTOPp->TX__DOT__rate_match__DOT___zz_2 = 0U;
    if ((0U != (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
        if ((1U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
            vlTOPp->TX__DOT__rate_match__DOT___zz_2 = 1U;
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
}

void VTX::_settle__TOP__13(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_settle__TOP__13\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT___zz_Cn_2 
        = (0x1fffffU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kp) 
                        * (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__C)));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state_1 
        = (0xffffffU & ((vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                         << 1U) ^ ((1U & (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                           >> 1U) ^ 
                                          (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                           >> 0x17U)))
                                    ? 0x800063U : 0U)));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT___zz_zero_padding_cnt_1 
        = (0xfffffU & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__F 
                       - (0x7fffU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cn) 
                                     << (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__shift_step)))));
    vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type 
        = ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
            ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
            : ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
                ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                : (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)));
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
    vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_willClear = 0U;
    if ((0U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))) {
        vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_willClear = 1U;
    }
    vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_payload_last = 0U;
    if (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__emitCrc) {
        if ((0U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))) {
            vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_payload_last = 1U;
        }
    }
    vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_payload_last = 0U;
    if (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__emitCrc) {
        if ((0U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter))) {
            vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_payload_last = 1U;
        }
    }
    vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment_result_data_payload_last 
        = ((0U != (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state)) 
           & ((1U != (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state)) 
              & ((2U != (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state)) 
                 & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_logic_ram_port0))));
    vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_last 
        = (1U & (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state) 
                  >> 2U) & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_logic_ram_port0)));
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
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_payload_last = 0U;
    if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__emitCrc) {
        if ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))) {
            vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_payload_last = 1U;
        }
    }
    vlTOPp->TX__DOT__rate_match_result_data_valid = 
        ((3U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state)) 
         & ((IData)(vlTOPp->TX__DOT__rate_match__DOT___zz_interleaving_ram_port0) 
            >> 3U));
    vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_value));
    vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_value));
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
    vlTOPp->TX__DOT__channel_code__DOT__coded_msg_fire 
        = ((1U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__state)) 
           & (0U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state)));
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0 
        = ((0xffffff80U & (((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__isEncoding) 
                            << 7U) & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                      << 6U))) | (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__r_enc_buf));
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
}

void VTX::_settle__TOP__14(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_settle__TOP__14\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_is_last_block 
        = (1U & ((~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode)) 
                 | (1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__C))));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_remainder_1 
        = (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_remainder) 
            << 1U) | (1U & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                            >> 0x13U)));
    vlTOPp->TX__DOT__channel_code__DOT___zz_io_pop_ready 
        = ((2U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__state)) 
           & (2U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state)));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_num 
        = (0xffU & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                    + (0U != (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_remainder))));
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT___zz_tail_bits 
        = ((0x80U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                     << 6U)) | (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tail_bits));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT___zz_F 
        = (0x1fffffU & (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__C) 
                         * (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kp)) 
                        - vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__numerator));
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
    vlTOPp->TX__DOT__channel_code__DOT__flowMux_1__DOT___zz_output_payload_last 
        = (1U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__sel_cha)
                  ? (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__raw_data_payload_last_regNext)
                  : (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0)));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_valid 
        = ((7U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state)) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode));
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
    vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_0_valid 
        = ((1U != (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type)) 
           & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_input_valid));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_1_valid 
        = ((1U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type)) 
           & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_input_valid));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3__DOT___zz_io_output_payload_last 
        = ((1U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type))
            ? (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_payload_last)
            : (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_payload_last));
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
    vlTOPp->result_data_valid = vlTOPp->TX__DOT__rate_match_result_data_valid;
    vlTOPp->TX__DOT__rate_match__DOT__result_data_fire 
        = ((IData)(vlTOPp->TX__DOT__rate_match_result_data_valid) 
           & (IData)(vlTOPp->result_data_ready));
    vlTOPp->TX__DOT__rate_match__DOT__when_PhyTX_l816 
        = (1U & (((IData)(vlTOPp->TX__DOT__rate_match_result_data_valid) 
                  & (IData)(vlTOPp->result_data_ready)) 
                 | (~ ((IData)(vlTOPp->TX__DOT__rate_match__DOT___zz_interleaving_ram_port0) 
                       >> 3U))));
    vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_risingOccupancy));
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
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_when_UnsignedDivider_l112 
        = (0x3fffU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_remainder_1) 
                      - (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_error)));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT___zz_numerator 
        = (0xfffffU & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__numerator 
                       + (0xfffU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_num) 
                                    << 4U))));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_valid 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__emitCrc) 
           | (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_valid));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_2 = 0U;
    if ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92))) {
        if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__cmd_fire) {
            vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_2 = 1U;
        }
    }
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_6 
        = ((0x13U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_4)) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_1));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_valid 
        = ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__emitCrc) 
           | (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_0_valid));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_valid 
        = ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__emitCrc) 
           | (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_1_valid));
    vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3__DOT___zz_io_output_payload_last 
        = ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
            ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment_result_data_payload_last)
            : ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
                ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_last)
                : (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_last)));
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
    vlTOPp->TX__DOT__tx_crc_extender_block_msg_ctrl_in_ready 
        = ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__ctrl_in_enable) 
           & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__ctrl_out_valid) 
           & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_full))))));
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_full))))));
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder_raw_data_ready 
        = (1U & ((~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_full)) 
                 & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__isEncoding))));
    vlTOPp->TX__DOT__channel_code__DOT__msg_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_full))))));
    vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_0_ready 
        = ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
           & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_1_ready 
        = ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
           & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_2_ready 
        = ((2U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
           & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushing 
        = (((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
             ? (1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))
             : ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
                 ? (1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state))
                 : (5U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state)))) 
           & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_0_ready 
        = ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
           & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_1_ready 
        = ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
           & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_2_ready 
        = ((2U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
           & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__channel_code__DOT__data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_full))))));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_0_ready 
        = ((1U != (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type)) 
           & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_full)));
}

void VTX::_settle__TOP__15(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_settle__TOP__15\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_1_ready 
        = ((1U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type)) 
           & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_full))))));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz___05Fzz_rsp_payload_quotient 
        = ((vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
            << 1U) | (1U & (~ ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_when_UnsignedDivider_l112) 
                               >> 0xdU))));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_3 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_6)
            ? 0U : (0x1fU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_4) 
                             + (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_1))));
    if (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_2) {
        vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_3 = 0U;
    }
    vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3__DOT___zz_io_output_valid 
        = ((1U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type))
            ? (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_valid)
            : (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_valid));
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
    vlTOPp->block_msg_ctrl_ready = vlTOPp->TX__DOT__tx_crc_extender_block_msg_ctrl_in_ready;
    vlTOPp->TX__DOT__tx_crc_extender__DOT__block_msg_ctrl_in_fire 
        = ((IData)(vlTOPp->block_msg_ctrl_valid) & (IData)(vlTOPp->TX__DOT__tx_crc_extender_block_msg_ctrl_in_ready));
    vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_5_io_input_valid 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo_io_pop_valid) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__state));
    vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_input_ready = 0U;
    if ((1U & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__sel_cha)))) {
        vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_input_ready = 1U;
    }
    if (vlTOPp->TX__DOT__channel_code__DOT__sel_cha) {
        vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_input_ready 
            = vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder_raw_data_ready;
    }
    vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo_io_pop_valid) 
           & (0U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__state)));
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
    vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_ready 
        = (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_2_ready) 
            & (7U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state))) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode));
    vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_input_valid 
        = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo_io_pop_valid) 
           & (IData)(vlTOPp->TX__DOT__channel_code__DOT___zz_io_pop_ready));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_raw_data_ready 
        = ((~ (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__emitCrc)) 
           & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_0_ready));
    vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_raw_data_ready 
        = ((~ (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__emitCrc)) 
           & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_1_ready));
    vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_input_valid 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo_io_pop_valid) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__state));
    vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3__DOT___zz_io_output_valid) 
           & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_valueNext 
        = (3U & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TX__DOT__channel_code__DOT__data_fifo_io_pop_ready 
        = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_input_ready) 
           & (IData)(vlTOPp->TX__DOT__channel_code__DOT___zz_io_pop_ready));
    vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popping) {
        vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
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
    vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_valueNext 
        = (3U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_willIncrement)));
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
    vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_input_ready = 0U;
    if ((1U != (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type))) {
        vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_input_ready 
            = vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_raw_data_ready;
    }
    if ((1U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type))) {
        vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_input_ready 
            = vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_raw_data_ready;
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
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_valid 
        = (1U & (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state) 
                  >> 2U) & (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state) 
                             >> 1U) & ((~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state)) 
                                       | ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode)
                                           ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_valid)
                                           : ((2U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
                                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_input_valid)))))));
    vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo_io_pop_valid) 
           & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo_io_pop_ready));
    vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_valueNext 
        = (3U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_willIncrement)));
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
}

void VTX::_settle__TOP__16(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_settle__TOP__16\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TX__DOT__tx_crc_extender_raw_data_ready 
        = ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_input_ready) 
           & (~ (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc_raw_halt)));
    vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_valid 
        = (1U & ((4U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state))
                  ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_outputs_1_valid)
                  : (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state) 
                      >> 1U) & ((~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state)) 
                                | (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_outputs_1_valid)))));
    vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__result_data_fire 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_valid) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_2_ready));
    vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_value) 
                   + (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popping) {
        vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
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
    vlTOPp->raw_data_ready = vlTOPp->TX__DOT__tx_crc_extender_raw_data_ready;
    vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__result_data_fire_1 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_valid) 
           & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_1_ready));
    vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3__DOT___zz_io_output_valid 
        = ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
            ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment_result_data_valid)
            : ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
                ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_valid)
                : (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_valid)));
    vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_value) 
                    + (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_valueNext 
        = (3U & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popping) {
        vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_value) 
                    + (IData)(vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_willIncrement)));
    if (vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_willClear) {
        vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_valueNext = 0U;
    }
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_valueNext 
        = (((0x1800U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0x1fffU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value) 
                               + (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_willIncrement))));
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_valid) 
           & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_ready));
    vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3__DOT___zz_io_output_valid) 
           & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_full)));
    vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_value) 
                   + (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popping) {
        vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushing) {
        vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_valueNext 
        = (((0x1800U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value)) 
            & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_willIncrement))
            ? 0U : (0x1fffU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value) 
                               + (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_willIncrement))));
    vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_value) 
                    + (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_willIncrement)));
}

void VTX::_eval_initial(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_eval_initial\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = (1U & (~ (IData)(vlTOPp->clk)));
    vlTOPp->__Vclklast__TOP__reset = (1U & (~ (IData)(vlTOPp->reset)));
    vlTOPp->_initial__TOP__11(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VTX::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::final\n"); );
    // Variables
    VTX__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTX::_eval_settle(VTX__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_eval_settle\n"); );
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__12(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__13(vlSymsp);
    vlTOPp->_settle__TOP__14(vlSymsp);
    vlTOPp->_settle__TOP__15(vlSymsp);
    vlTOPp->_settle__TOP__16(vlSymsp);
}

void VTX::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTX::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_ready = VL_RAND_RESET_I(1);
    raw_data_payload_last = VL_RAND_RESET_I(1);
    raw_data_payload_fragment = VL_RAND_RESET_I(1);
    result_data_valid = VL_RAND_RESET_I(1);
    result_data_ready = VL_RAND_RESET_I(1);
    result_data_payload_last = VL_RAND_RESET_I(1);
    result_data_payload_fragment = VL_RAND_RESET_I(1);
    block_msg_ctrl_valid = VL_RAND_RESET_I(1);
    block_msg_ctrl_ready = VL_RAND_RESET_I(1);
    block_msg_ctrl_payload_pkg_type = VL_RAND_RESET_I(2);
    block_msg_ctrl_payload_pkg_length = VL_RAND_RESET_I(20);
    block_msg_ctrl_payload_rnti_scramble = VL_RAND_RESET_I(16);
    clk = 0;
    reset = 0;
    TX__DOT__tx_crc_extender_raw_data_ready = VL_RAND_RESET_I(1);
    TX__DOT__tx_crc_extender_block_msg_ctrl_in_ready = VL_RAND_RESET_I(1);
    TX__DOT__rate_match_result_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_input_valid = VL_RAND_RESET_I(1);
    TX__DOT__tx_crc_extender__DOT__crc24a_core_raw_data_ready = VL_RAND_RESET_I(1);
    TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_payload_last = VL_RAND_RESET_I(1);
    TX__DOT__tx_crc_extender__DOT__crc16_core_raw_data_ready = VL_RAND_RESET_I(1);
    TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_payload_last = VL_RAND_RESET_I(1);
    TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_input_ready = VL_RAND_RESET_I(1);
    TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_0_valid = VL_RAND_RESET_I(1);
    TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_1_valid = VL_RAND_RESET_I(1);
    TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_0_ready = VL_RAND_RESET_I(1);
    TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_1_ready = VL_RAND_RESET_I(1);
    TX__DOT__tx_crc_extender__DOT__ctrl_in_enable = VL_RAND_RESET_I(1);
    TX__DOT__tx_crc_extender__DOT__message_pkg_type = VL_RAND_RESET_I(2);
    TX__DOT__tx_crc_extender__DOT__message_pkg_length = VL_RAND_RESET_I(20);
    TX__DOT__tx_crc_extender__DOT__message_rnti_scramble = VL_RAND_RESET_I(16);
    TX__DOT__tx_crc_extender__DOT__ctrl_out_valid = VL_RAND_RESET_I(1);
    TX__DOT__tx_crc_extender__DOT__block_msg_ctrl_in_fire = VL_RAND_RESET_I(1);
    TX__DOT__tx_crc_extender__DOT__crc_raw_halt = VL_RAND_RESET_I(1);
    TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT___zz_result_data_payload_fragment = VL_RAND_RESET_I(1);
    TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__emitCrc = VL_RAND_RESET_I(1);
    TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter = VL_RAND_RESET_I(5);
    TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__when_PhyTX_l57 = VL_RAND_RESET_I(1);
    TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state_1 = VL_RAND_RESET_I(24);
    TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state = VL_RAND_RESET_I(24);
    TX__DOT__tx_crc_extender__DOT__crc16_core__DOT___zz_result_data_payload_fragment = VL_RAND_RESET_I(1);
    TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__emitCrc = VL_RAND_RESET_I(1);
    TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter = VL_RAND_RESET_I(4);
    TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__when_PhyTX_l57 = VL_RAND_RESET_I(1);
    TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state_1 = VL_RAND_RESET_I(16);
    TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state = VL_RAND_RESET_I(16);
    TX__DOT__tx_crc_extender__DOT__streamMux_3__DOT___zz_io_output_valid = VL_RAND_RESET_I(1);
    TX__DOT__tx_crc_extender__DOT__streamMux_3__DOT___zz_io_output_payload_last = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__streamDemux_4_io_input_valid = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__streamDemux_5_io_input_valid = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__data_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__msg_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__broadcast_channel_segment_block_msg_ready = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__broadcast_channel_segment_result_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__broadcast_channel_segment_result_data_payload_last = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__control_channel_segment_block_msg_ready = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_last = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment = VL_RAND_RESET_I(2);
    TX__DOT__code_block_segment__DOT__shared_channel_segment_block_msg_ready = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_last = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment = VL_RAND_RESET_I(2);
    TX__DOT__code_block_segment__DOT__shared_channel_segment_is_last_block = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__streamDemux_4_io_input_ready = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__streamDemux_4_io_outputs_1_valid = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__streamDemux_5_io_input_ready = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_0_ready = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_1_ready = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_2_ready = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_0_ready = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_1_ready = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_2_ready = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__sel_cha = VL_RAND_RESET_I(2);
    TX__DOT__code_block_segment__DOT__finish_indicator = VL_RAND_RESET_I(4);
    TX__DOT__code_block_segment__DOT__state = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(2);
    TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(4);
    TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(4);
    TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(4);
    TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(4);
    TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(2);
    }}
    TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_Q(38);
    TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(2);
    TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(2);
    TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(2);
    TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(2);
    TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_Q(38);
    }}
    TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state = VL_RAND_RESET_I(2);
    TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_length = VL_RAND_RESET_I(13);
    TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__block_msg_enable = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__zero_padding_cnt = VL_RAND_RESET_I(13);
    TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__block_msg_fire = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_msg_fire = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT___zz_state = VL_RAND_RESET_I(2);
    TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__when_PhyTX_l188 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(96, TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state_string);
    TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state = VL_RAND_RESET_I(3);
    TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_length = VL_RAND_RESET_I(13);
    TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__block_msg_enable = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__zero_padding_cnt = VL_RAND_RESET_I(13);
    TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__rnti = VL_RAND_RESET_I(16);
    TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__block_msg_fire = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_msg_fire = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__control_channel_segment__DOT___zz_state = VL_RAND_RESET_I(3);
    TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__when_PhyTX_l266 = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__result_data_fire_1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(96, TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state_string);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_ready = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_ready = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_valid = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_payload_last = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT___zz_numerator = VL_RAND_RESET_I(20);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT___zz_zero_padding_cnt_1 = VL_RAND_RESET_I(20);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT___zz_F = VL_RAND_RESET_I(21);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT___zz_Cn_2 = VL_RAND_RESET_I(21);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state = VL_RAND_RESET_I(3);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length = VL_RAND_RESET_I(13);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__block_msg_enable = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__zero_padding_cnt = VL_RAND_RESET_I(13);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__payload_cnt = VL_RAND_RESET_I(13);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__emit_step = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__C = VL_RAND_RESET_I(8);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cp = VL_RAND_RESET_I(8);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cn = VL_RAND_RESET_I(8);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kp = VL_RAND_RESET_I(13);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kn = VL_RAND_RESET_I(13);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__F = VL_RAND_RESET_I(20);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__shift_step = VL_RAND_RESET_I(3);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__numerator = VL_RAND_RESET_I(20);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__denominator = VL_RAND_RESET_I(13);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__divide_enable = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__code_block_resized = VL_RAND_RESET_I(13);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kn_temp = VL_RAND_RESET_I(13);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_num = VL_RAND_RESET_I(8);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__block_msg_fire = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_msg_fire = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__when_PhyTX_l478 = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__when_PhyTX_l487 = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__result_data_fire = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(96, TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state_string);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT___zz_result_data_payload_fragment = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__emitCrc = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter = VL_RAND_RESET_I(5);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__when_PhyTX_l57 = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state_1 = VL_RAND_RESET_I(24);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state = VL_RAND_RESET_I(24);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz___05Fzz_rsp_payload_quotient = VL_RAND_RESET_I(21);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92 = VL_RAND_RESET_I(2);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_cmd_ready = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_valid = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_1 = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_2 = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_3 = VL_RAND_RESET_I(5);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_4 = VL_RAND_RESET_I(5);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_6 = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient = VL_RAND_RESET_I(20);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_error = VL_RAND_RESET_I(13);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_remainder = VL_RAND_RESET_I(13);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_remainder_1 = VL_RAND_RESET_I(14);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_when_UnsignedDivider_l112 = VL_RAND_RESET_I(14);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__cmd_fire = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__rsp_fire = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__streamMux_3__DOT___zz_io_output_valid = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__streamMux_3__DOT___zz_io_output_payload_last = VL_RAND_RESET_I(1);
    TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__data_fifo_io_pop_ready = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__streamDemux_4_io_input_valid = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__data_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__msg_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__tailed_conv_encoder_raw_data_ready = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__streamDemux_4_io_input_ready = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__streamDemux_4_io_outputs_1_valid = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__sel_cha = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__state = VL_RAND_RESET_I(2);
    TX__DOT__channel_code__DOT__message_segment_length = VL_RAND_RESET_I(13);
    TX__DOT__channel_code__DOT__message_segment_code_type = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__coded_msg_fire = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT___zz_io_pop_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(72, TX__DOT__channel_code__DOT__state_string);
    TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(3);
    TX__DOT__channel_code__DOT__data_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(5);
    TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(5);
    TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(5);
    TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(5);
    TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__data_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__data_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__data_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(3);
    }}
    TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(14);
    TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(2);
    TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(2);
    TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(2);
    TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(2);
    TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(14);
    }}
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_ready = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_valid = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT___zz_tail_bits = VL_RAND_RESET_I(8);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__isEncoding = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__loaded_tail_bits = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tail_bits = VL_RAND_RESET_I(7);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__when_PhyTX_l648 = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0 = VL_RAND_RESET_I(8);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__coded_data = VL_RAND_RESET_I(3);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__coded_data_valid_1 = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__r_enc_buf = VL_RAND_RESET_I(7);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__raw_data_fire = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__raw_data_payload_last_regNext = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT____Vxrand1 = VL_RAND_RESET_I(2);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(2);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(13);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(13);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(13);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(13);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushing = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popping = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<6145; ++__Vi0) {
            TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(2);
    }}
    TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT____Vlvbound2 = VL_RAND_RESET_I(2);
    TX__DOT__channel_code__DOT__flowMux_1__DOT___zz_output_valid = VL_RAND_RESET_I(1);
    TX__DOT__channel_code__DOT__flowMux_1__DOT___zz_output_payload_last = VL_RAND_RESET_I(1);
    TX__DOT__rate_match__DOT____Vxrand1 = VL_RAND_RESET_I(4);
    TX__DOT__rate_match__DOT___zz_interleaving_ram_port0 = VL_RAND_RESET_I(4);
    TX__DOT__rate_match__DOT___zz_conv_perm_pattern_port0 = VL_RAND_RESET_I(5);
    TX__DOT__rate_match__DOT___zz_1 = VL_RAND_RESET_I(1);
    TX__DOT__rate_match__DOT___zz_2 = VL_RAND_RESET_I(1);
    TX__DOT__rate_match__DOT__state = VL_RAND_RESET_I(2);
    TX__DOT__rate_match__DOT__zero_padding_cnt = VL_RAND_RESET_I(5);
    TX__DOT__rate_match__DOT__rows = VL_RAND_RESET_I(8);
    TX__DOT__rate_match__DOT__write_addr = VL_RAND_RESET_I(13);
    TX__DOT__rate_match__DOT__read_addr = VL_RAND_RESET_I(13);
    TX__DOT__rate_match__DOT__read_row_cnt = VL_RAND_RESET_I(8);
    TX__DOT__rate_match__DOT__pattern_cursor_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__rate_match__DOT__pattern_cursor_willClear = VL_RAND_RESET_I(1);
    TX__DOT__rate_match__DOT__pattern_cursor_valueNext = VL_RAND_RESET_I(5);
    TX__DOT__rate_match__DOT__pattern_cursor_value = VL_RAND_RESET_I(5);
    TX__DOT__rate_match__DOT__vector_length_cnt = VL_RAND_RESET_I(32);
    TX__DOT__rate_match__DOT__bits_sel_willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__rate_match__DOT__bits_sel_valueNext = VL_RAND_RESET_I(2);
    TX__DOT__rate_match__DOT__bits_sel_value = VL_RAND_RESET_I(2);
    TX__DOT__rate_match__DOT__willIncrement = VL_RAND_RESET_I(1);
    TX__DOT__rate_match__DOT__read_addr_next = VL_RAND_RESET_I(13);
    TX__DOT__rate_match__DOT__raw_data_fire = VL_RAND_RESET_I(1);
    TX__DOT__rate_match__DOT__result_data_fire = VL_RAND_RESET_I(1);
    TX__DOT__rate_match__DOT__when_PhyTX_l816 = VL_RAND_RESET_I(1);
    TX__DOT__rate_match__DOT__when_PhyTX_l817 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(96, TX__DOT__rate_match__DOT__state_string);
    { int __Vi0=0; for (; __Vi0<6145; ++__Vi0) {
            TX__DOT__rate_match__DOT__interleaving_ram[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            TX__DOT__rate_match__DOT__conv_perm_pattern[__Vi0] = VL_RAND_RESET_I(5);
    }}
    TX__DOT__rate_match__DOT____Vlvbound2 = VL_RAND_RESET_I(4);
    TX__DOT__rate_match__DOT____Vlvbound3 = VL_RAND_RESET_I(4);
    __Vtablechg1[0] = 0U;
    __Vtablechg1[1] = 7U;
    __Vtablechg1[2] = 3U;
    __Vtablechg1[3] = 7U;
    __Vtablechg1[4] = 1U;
    __Vtablechg1[5] = 7U;
    __Vtablechg1[6] = 3U;
    __Vtablechg1[7] = 7U;
    __Vtablechg1[8] = 2U;
    __Vtablechg1[9] = 7U;
    __Vtablechg1[10] = 3U;
    __Vtablechg1[11] = 7U;
    __Vtablechg1[12] = 3U;
    __Vtablechg1[13] = 7U;
    __Vtablechg1[14] = 3U;
    __Vtablechg1[15] = 7U;
    __Vtablechg1[16] = 4U;
    __Vtablechg1[17] = 7U;
    __Vtablechg1[18] = 7U;
    __Vtablechg1[19] = 7U;
    __Vtablechg1[20] = 5U;
    __Vtablechg1[21] = 7U;
    __Vtablechg1[22] = 7U;
    __Vtablechg1[23] = 7U;
    __Vtablechg1[24] = 6U;
    __Vtablechg1[25] = 7U;
    __Vtablechg1[26] = 7U;
    __Vtablechg1[27] = 7U;
    __Vtablechg1[28] = 7U;
    __Vtablechg1[29] = 7U;
    __Vtablechg1[30] = 7U;
    __Vtablechg1[31] = 7U;
    __Vtablechg1[32] = 4U;
    __Vtablechg1[33] = 7U;
    __Vtablechg1[34] = 7U;
    __Vtablechg1[35] = 7U;
    __Vtablechg1[36] = 5U;
    __Vtablechg1[37] = 7U;
    __Vtablechg1[38] = 7U;
    __Vtablechg1[39] = 7U;
    __Vtablechg1[40] = 6U;
    __Vtablechg1[41] = 7U;
    __Vtablechg1[42] = 7U;
    __Vtablechg1[43] = 7U;
    __Vtablechg1[44] = 7U;
    __Vtablechg1[45] = 7U;
    __Vtablechg1[46] = 7U;
    __Vtablechg1[47] = 7U;
    __Vtablechg1[48] = 4U;
    __Vtablechg1[49] = 7U;
    __Vtablechg1[50] = 7U;
    __Vtablechg1[51] = 7U;
    __Vtablechg1[52] = 5U;
    __Vtablechg1[53] = 7U;
    __Vtablechg1[54] = 7U;
    __Vtablechg1[55] = 7U;
    __Vtablechg1[56] = 6U;
    __Vtablechg1[57] = 7U;
    __Vtablechg1[58] = 7U;
    __Vtablechg1[59] = 7U;
    __Vtablechg1[60] = 7U;
    __Vtablechg1[61] = 7U;
    __Vtablechg1[62] = 7U;
    __Vtablechg1[63] = 7U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[0] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[1] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[2] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[3] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[4] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[5] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[6] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[7] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[8] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[9] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[10] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[11] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[12] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[13] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[14] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[15] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[16] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[17] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[18] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[19] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[20] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[21] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[22] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[23] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[24] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[25] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[26] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[27] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[28] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[29] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[30] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[31] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[32] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[33] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[34] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[35] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[36] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[37] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[38] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[39] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[40] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[41] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[42] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[43] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[44] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[45] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[46] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[47] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[48] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[49] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[50] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[51] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[52] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[53] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[54] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[55] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[56] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[57] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[58] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[59] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[60] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[61] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[62] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_in_enable[63] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[0] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[1] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[2] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[3] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[4] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[5] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[6] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[7] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[8] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[9] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[10] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[11] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[12] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[13] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[14] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[15] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[16] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[17] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[18] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[19] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[20] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[21] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[22] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[23] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[24] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[25] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[26] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[27] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[28] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[29] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[30] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[31] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[32] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[33] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[34] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[35] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[36] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[37] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[38] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[39] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[40] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[41] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[42] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[43] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[44] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[45] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[46] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[47] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[48] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[49] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[50] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[51] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[52] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[53] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[54] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[55] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[56] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[57] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[58] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[59] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[60] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[61] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[62] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__ctrl_out_valid[63] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[0] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[1] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[2] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[3] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[4] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[5] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[6] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[7] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[8] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[9] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[10] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[11] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[12] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[13] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[14] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[15] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[16] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[17] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[18] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[19] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[20] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[21] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[22] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[23] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[24] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[25] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[26] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[27] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[28] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[29] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[30] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[31] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[32] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[33] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[34] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[35] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[36] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[37] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[38] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[39] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[40] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[41] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[42] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[43] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[44] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[45] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[46] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[47] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[48] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[49] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[50] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[51] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[52] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[53] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[54] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[55] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[56] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[57] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[58] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[59] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[60] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[61] = 1U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[62] = 0U;
    __Vtable1_TX__DOT__tx_crc_extender__DOT__crc_raw_halt[63] = 1U;
    __Vtableidx2 = 0;
    VL_CONST_W_3X(96,__Vtable2_TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state_string[0],0x49444c45,0x20202020,0x20202020);
    VL_CONST_W_3X(96,__Vtable2_TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state_string[1],0x4354524c,0x5f454d49,0x54202020);
    VL_CONST_W_3X(96,__Vtable2_TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state_string[2],0x5a45524f,0x5f504144,0x44494e47);
    VL_CONST_W_3X(96,__Vtable2_TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state_string[3],0x42595041,0x53532020,0x20202020);
    __Vtableidx4 = 0;
    VL_CONST_W_3X(96,__Vtable4_TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state_string[0],0x49444c45,0x20202020,0x20202020);
    VL_CONST_W_3X(96,__Vtable4_TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state_string[1],0x4354524c,0x5f454d49,0x54202020);
    VL_CONST_W_3X(96,__Vtable4_TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state_string[2],0x5a45524f,0x5f504144,0x44494e47);
    VL_CONST_W_3X(96,__Vtable4_TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state_string[3],0x42595041,0x53532020,0x20202020);
    VL_CONST_W_3X(96,__Vtable4_TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state_string[4],0x53435241,0x4d424c45,0x20202020);
    VL_CONST_W_3X(96,__Vtable4_TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state_string[5],0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f);
    VL_CONST_W_3X(96,__Vtable4_TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state_string[6],0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f);
    VL_CONST_W_3X(96,__Vtable4_TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state_string[7],0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f);
    __Vtableidx6 = 0;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[0] = 0U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[1] = 0U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[2] = 0U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[3] = 2U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[4] = 2U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[5] = 2U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[6] = 2U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[7] = 2U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[8] = 0U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[9] = 0U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[10] = 0U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[11] = 3U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[12] = 3U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[13] = 3U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[14] = 3U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[15] = 3U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[16] = 0U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[17] = 0U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[18] = 0U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[19] = 2U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[20] = 3U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[21] = 3U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[22] = 3U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[23] = 3U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[24] = 0U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[25] = 0U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[26] = 0U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[27] = 3U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[28] = 2U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[29] = 2U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[30] = 2U;
    __Vtable6_TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment[31] = 2U;
    __Vtableidx7 = 0;
    VL_CONST_W_3X(96,__Vtable7_TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state_string[0],0x49444c45,0x20202020,0x20202020);
    VL_CONST_W_3X(96,__Vtable7_TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state_string[1],0x43414c43,0x5f4e554d,0x20202020);
    VL_CONST_W_3X(96,__Vtable7_TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state_string[2],0x43414c43,0x5f4b2020,0x20202020);
    VL_CONST_W_3X(96,__Vtable7_TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state_string[3],0x43414c43,0x5f435f46,0x20202020);
    VL_CONST_W_3X(96,__Vtable7_TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state_string[4],0x4d415443,0x485f5349,0x5a452020);
    VL_CONST_W_3X(96,__Vtable7_TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state_string[5],0x4354524c,0x5f454d49,0x54202020);
    VL_CONST_W_3X(96,__Vtable7_TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state_string[6],0x5a45524f,0x5f504144,0x44494e47);
    VL_CONST_W_3X(96,__Vtable7_TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state_string[7],0x42595041,0x53532020,0x20202020);
    __Vtableidx10 = 0;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[0] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[1] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[2] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[3] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[4] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[5] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[6] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[7] = 2U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[8] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[9] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[10] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[11] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[12] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[13] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[14] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[15] = 2U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[16] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[17] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[18] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[19] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[20] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[21] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[22] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[23] = 2U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[24] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[25] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[26] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[27] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[28] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[29] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[30] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[31] = 3U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[32] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[33] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[34] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[35] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[36] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[37] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[38] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[39] = 3U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[40] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[41] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[42] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[43] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[44] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[45] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[46] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[47] = 2U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[48] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[49] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[50] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[51] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[52] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[53] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[54] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[55] = 3U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[56] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[57] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[58] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[59] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[60] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[61] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[62] = 0U;
    __Vtable10_TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment[63] = 3U;
    __Vtableidx11 = 0;
    VL_CONST_W_3X(72,__Vtable11_TX__DOT__channel_code__DOT__state_string[0],0x00000049,0x444c4520,0x20202020);
    VL_CONST_W_3X(72,__Vtable11_TX__DOT__channel_code__DOT__state_string[1],0x00000043,0x54524c5f,0x454d4954);
    VL_CONST_W_3X(72,__Vtable11_TX__DOT__channel_code__DOT__state_string[2],0x00000042,0x59504153,0x53202020);
    VL_CONST_W_3X(72,__Vtable11_TX__DOT__channel_code__DOT__state_string[3],0x00000050,0x454e4449,0x4e472020);
    __Vtablechg12[0] = 0U;
    __Vtablechg12[1] = 1U;
    __Vtablechg12[2] = 0U;
    __Vtablechg12[3] = 1U;
    __Vtablechg12[4] = 0U;
    __Vtablechg12[5] = 1U;
    __Vtablechg12[6] = 0U;
    __Vtablechg12[7] = 1U;
    __Vtablechg12[8] = 1U;
    __Vtablechg12[9] = 1U;
    __Vtablechg12[10] = 0U;
    __Vtablechg12[11] = 1U;
    __Vtablechg12[12] = 0U;
    __Vtablechg12[13] = 1U;
    __Vtablechg12[14] = 0U;
    __Vtablechg12[15] = 1U;
    __Vtablechg12[16] = 0U;
    __Vtablechg12[17] = 1U;
    __Vtablechg12[18] = 1U;
    __Vtablechg12[19] = 1U;
    __Vtablechg12[20] = 0U;
    __Vtablechg12[21] = 1U;
    __Vtablechg12[22] = 0U;
    __Vtablechg12[23] = 1U;
    __Vtablechg12[24] = 1U;
    __Vtablechg12[25] = 1U;
    __Vtablechg12[26] = 1U;
    __Vtablechg12[27] = 1U;
    __Vtablechg12[28] = 0U;
    __Vtablechg12[29] = 1U;
    __Vtablechg12[30] = 0U;
    __Vtablechg12[31] = 1U;
    __Vtablechg12[32] = 0U;
    __Vtablechg12[33] = 1U;
    __Vtablechg12[34] = 0U;
    __Vtablechg12[35] = 1U;
    __Vtablechg12[36] = 1U;
    __Vtablechg12[37] = 1U;
    __Vtablechg12[38] = 0U;
    __Vtablechg12[39] = 1U;
    __Vtablechg12[40] = 1U;
    __Vtablechg12[41] = 1U;
    __Vtablechg12[42] = 0U;
    __Vtablechg12[43] = 1U;
    __Vtablechg12[44] = 1U;
    __Vtablechg12[45] = 1U;
    __Vtablechg12[46] = 0U;
    __Vtablechg12[47] = 1U;
    __Vtablechg12[48] = 0U;
    __Vtablechg12[49] = 1U;
    __Vtablechg12[50] = 1U;
    __Vtablechg12[51] = 1U;
    __Vtablechg12[52] = 1U;
    __Vtablechg12[53] = 1U;
    __Vtablechg12[54] = 0U;
    __Vtablechg12[55] = 1U;
    __Vtablechg12[56] = 1U;
    __Vtablechg12[57] = 1U;
    __Vtablechg12[58] = 1U;
    __Vtablechg12[59] = 1U;
    __Vtablechg12[60] = 1U;
    __Vtablechg12[61] = 1U;
    __Vtablechg12[62] = 0U;
    __Vtablechg12[63] = 1U;
    __Vtablechg12[64] = 0U;
    __Vtablechg12[65] = 1U;
    __Vtablechg12[66] = 0U;
    __Vtablechg12[67] = 1U;
    __Vtablechg12[68] = 0U;
    __Vtablechg12[69] = 1U;
    __Vtablechg12[70] = 1U;
    __Vtablechg12[71] = 1U;
    __Vtablechg12[72] = 1U;
    __Vtablechg12[73] = 1U;
    __Vtablechg12[74] = 0U;
    __Vtablechg12[75] = 1U;
    __Vtablechg12[76] = 0U;
    __Vtablechg12[77] = 1U;
    __Vtablechg12[78] = 1U;
    __Vtablechg12[79] = 1U;
    __Vtablechg12[80] = 0U;
    __Vtablechg12[81] = 1U;
    __Vtablechg12[82] = 1U;
    __Vtablechg12[83] = 1U;
    __Vtablechg12[84] = 0U;
    __Vtablechg12[85] = 1U;
    __Vtablechg12[86] = 1U;
    __Vtablechg12[87] = 1U;
    __Vtablechg12[88] = 1U;
    __Vtablechg12[89] = 1U;
    __Vtablechg12[90] = 1U;
    __Vtablechg12[91] = 1U;
    __Vtablechg12[92] = 0U;
    __Vtablechg12[93] = 1U;
    __Vtablechg12[94] = 1U;
    __Vtablechg12[95] = 1U;
    __Vtablechg12[96] = 0U;
    __Vtablechg12[97] = 1U;
    __Vtablechg12[98] = 0U;
    __Vtablechg12[99] = 1U;
    __Vtablechg12[100] = 1U;
    __Vtablechg12[101] = 1U;
    __Vtablechg12[102] = 1U;
    __Vtablechg12[103] = 1U;
    __Vtablechg12[104] = 1U;
    __Vtablechg12[105] = 1U;
    __Vtablechg12[106] = 0U;
    __Vtablechg12[107] = 1U;
    __Vtablechg12[108] = 1U;
    __Vtablechg12[109] = 1U;
    __Vtablechg12[110] = 1U;
    __Vtablechg12[111] = 1U;
    __Vtablechg12[112] = 0U;
    __Vtablechg12[113] = 1U;
    __Vtablechg12[114] = 1U;
    __Vtablechg12[115] = 1U;
    __Vtablechg12[116] = 1U;
    __Vtablechg12[117] = 1U;
    __Vtablechg12[118] = 1U;
    __Vtablechg12[119] = 1U;
    __Vtablechg12[120] = 1U;
    __Vtablechg12[121] = 1U;
    __Vtablechg12[122] = 1U;
    __Vtablechg12[123] = 1U;
    __Vtablechg12[124] = 1U;
    __Vtablechg12[125] = 1U;
    __Vtablechg12[126] = 1U;
    __Vtablechg12[127] = 1U;
    __Vtable12_TX__DOT__channel_code__DOT__state[0] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[1] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[2] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[3] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[4] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[5] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[6] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[7] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[8] = 1U;
    __Vtable12_TX__DOT__channel_code__DOT__state[9] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[10] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[11] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[12] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[13] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[14] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[15] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[16] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[17] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[18] = 2U;
    __Vtable12_TX__DOT__channel_code__DOT__state[19] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[20] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[21] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[22] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[23] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[24] = 1U;
    __Vtable12_TX__DOT__channel_code__DOT__state[25] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[26] = 2U;
    __Vtable12_TX__DOT__channel_code__DOT__state[27] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[28] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[29] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[30] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[31] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[32] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[33] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[34] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[35] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[36] = 3U;
    __Vtable12_TX__DOT__channel_code__DOT__state[37] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[38] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[39] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[40] = 1U;
    __Vtable12_TX__DOT__channel_code__DOT__state[41] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[42] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[43] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[44] = 3U;
    __Vtable12_TX__DOT__channel_code__DOT__state[45] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[46] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[47] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[48] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[49] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[50] = 2U;
    __Vtable12_TX__DOT__channel_code__DOT__state[51] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[52] = 3U;
    __Vtable12_TX__DOT__channel_code__DOT__state[53] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[54] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[55] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[56] = 1U;
    __Vtable12_TX__DOT__channel_code__DOT__state[57] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[58] = 2U;
    __Vtable12_TX__DOT__channel_code__DOT__state[59] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[60] = 3U;
    __Vtable12_TX__DOT__channel_code__DOT__state[61] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[62] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[63] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[64] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[65] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[66] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[67] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[68] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[69] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[70] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[71] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[72] = 1U;
    __Vtable12_TX__DOT__channel_code__DOT__state[73] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[74] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[75] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[76] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[77] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[78] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[79] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[80] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[81] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[82] = 2U;
    __Vtable12_TX__DOT__channel_code__DOT__state[83] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[84] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[85] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[86] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[87] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[88] = 1U;
    __Vtable12_TX__DOT__channel_code__DOT__state[89] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[90] = 2U;
    __Vtable12_TX__DOT__channel_code__DOT__state[91] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[92] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[93] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[94] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[95] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[96] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[97] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[98] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[99] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[100] = 3U;
    __Vtable12_TX__DOT__channel_code__DOT__state[101] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[102] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[103] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[104] = 1U;
    __Vtable12_TX__DOT__channel_code__DOT__state[105] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[106] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[107] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[108] = 3U;
    __Vtable12_TX__DOT__channel_code__DOT__state[109] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[110] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[111] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[112] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[113] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[114] = 2U;
    __Vtable12_TX__DOT__channel_code__DOT__state[115] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[116] = 3U;
    __Vtable12_TX__DOT__channel_code__DOT__state[117] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[118] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[119] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[120] = 1U;
    __Vtable12_TX__DOT__channel_code__DOT__state[121] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[122] = 2U;
    __Vtable12_TX__DOT__channel_code__DOT__state[123] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[124] = 3U;
    __Vtable12_TX__DOT__channel_code__DOT__state[125] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[126] = 0U;
    __Vtable12_TX__DOT__channel_code__DOT__state[127] = 0U;
    __Vtableidx13 = 0;
    VL_CONST_W_3X(96,__Vtable13_TX__DOT__rate_match__DOT__state_string[0],0x49444c45,0x20202020,0x20202020);
    VL_CONST_W_3X(96,__Vtable13_TX__DOT__rate_match__DOT__state_string[1],0x50414444,0x494e475f,0x5a45524f);
    VL_CONST_W_3X(96,__Vtable13_TX__DOT__rate_match__DOT__state_string[2],0x57524954,0x455f5241,0x4d202020);
    VL_CONST_W_3X(96,__Vtable13_TX__DOT__rate_match__DOT__state_string[3],0x52454144,0x5f52414d,0x20202020);
    __Vtableidx15 = 0;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[0] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[1] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[2] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[3] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[4] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[5] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[6] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[7] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[8] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[9] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[10] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[11] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[12] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[13] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[14] = 1U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[15] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[16] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[17] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[18] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[19] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[20] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[21] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[22] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[23] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[24] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[25] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[26] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[27] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[28] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[29] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[30] = 1U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[31] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[32] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[33] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[34] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[35] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[36] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[37] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[38] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[39] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[40] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[41] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[42] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[43] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[44] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[45] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[46] = 1U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[47] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[48] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[49] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[50] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[51] = 1U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[52] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[53] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[54] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[55] = 1U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[56] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[57] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[58] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[59] = 1U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[60] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[61] = 0U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[62] = 1U;
    __Vtable15_TX__DOT__rate_match__DOT__pattern_cursor_willIncrement[63] = 1U;
    __Vtableidx16 = 0;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[0] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[1] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[2] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[3] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[4] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[5] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[6] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[7] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[8] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[9] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[10] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[11] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[12] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[13] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[14] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[15] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[16] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[17] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[18] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[19] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[20] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[21] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[22] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[23] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[24] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[25] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[26] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[27] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[28] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[29] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[30] = 0U;
    __Vtable16_TX__DOT__rate_match__DOT__bits_sel_willIncrement[31] = 1U;
    __Vdly__TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter = VL_RAND_RESET_I(5);
    __Vdly__TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter = VL_RAND_RESET_I(4);
    __Vdly__TX__DOT__code_block_segment__DOT__state = VL_RAND_RESET_I(1);
    __Vdly__TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state = VL_RAND_RESET_I(2);
    __Vdly__TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__zero_padding_cnt = VL_RAND_RESET_I(13);
    __Vdly__TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state = VL_RAND_RESET_I(3);
    __Vdly__TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__zero_padding_cnt = VL_RAND_RESET_I(13);
    __Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state = VL_RAND_RESET_I(3);
    __Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter = VL_RAND_RESET_I(5);
    __Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92 = VL_RAND_RESET_I(2);
    __Vdly__TX__DOT__channel_code__DOT__state = VL_RAND_RESET_I(2);
    __Vdly__TX__DOT__rate_match__DOT__state = VL_RAND_RESET_I(2);
    __Vdlyvdim0__TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_I(2);
    __Vdlyvset__TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvdim0__TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_Q(38);
    __Vdlyvset__TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ram__v0 = 0;
    __Vdly__TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_length = VL_RAND_RESET_I(13);
    __Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__payload_cnt = VL_RAND_RESET_I(13);
    __Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__zero_padding_cnt = VL_RAND_RESET_I(13);
    __Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length = VL_RAND_RESET_I(13);
    __Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cn = VL_RAND_RESET_I(8);
    __Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__C = VL_RAND_RESET_I(8);
    __Vdly__TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__emit_step = VL_RAND_RESET_I(1);
    __Vdlyvdim0__TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_I(3);
    __Vdlyvset__TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvdim0__TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_I(14);
    __Vdlyvset__TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvdim0__TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvval__TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ram__v0 = VL_RAND_RESET_I(2);
    __Vdlyvset__TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ram__v0 = 0;
    __Vdlyvdim0__TX__DOT__rate_match__DOT__interleaving_ram__v0 = 0;
    __Vdlyvval__TX__DOT__rate_match__DOT__interleaving_ram__v0 = VL_RAND_RESET_I(4);
    __Vdlyvset__TX__DOT__rate_match__DOT__interleaving_ram__v0 = 0;
    __Vdlyvdim0__TX__DOT__rate_match__DOT__interleaving_ram__v1 = 0;
    __Vdlyvval__TX__DOT__rate_match__DOT__interleaving_ram__v1 = VL_RAND_RESET_I(4);
    __Vdlyvset__TX__DOT__rate_match__DOT__interleaving_ram__v1 = 0;
    __Vdly__TX__DOT__rate_match__DOT__read_row_cnt = VL_RAND_RESET_I(8);
    __Vdly__TX__DOT__rate_match__DOT__write_addr = VL_RAND_RESET_I(13);
    __Vdly__TX__DOT__rate_match__DOT__zero_padding_cnt = VL_RAND_RESET_I(5);
    __Vdly__TX__DOT__rate_match__DOT__vector_length_cnt = VL_RAND_RESET_I(32);
    __Vm_traceActivity = 0;
}
