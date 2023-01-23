// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTX__Syms.h"


//======================

void VTX::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTX* t = (VTX*)userthis;
    VTX__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VTX::traceChgThis(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 2U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((((vlTOPp->__Vm_traceActivity 
                                  | (vlTOPp->__Vm_traceActivity 
                                     >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                                >> 2U)) 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 3U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 5U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 5U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity 
                                 | (vlTOPp->__Vm_traceActivity 
                                    >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                               >> 3U)) 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 4U))))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 5U))))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 3U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 5U))))) {
            vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 4U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 5U))))) {
            vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__17(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 1U) | (vlTOPp->__Vm_traceActivity 
                                          >> 2U))))) {
            vlTOPp->traceChgThis__19(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 1U) | (vlTOPp->__Vm_traceActivity 
                                          >> 3U))))) {
            vlTOPp->traceChgThis__20(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__21(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 2U) | (vlTOPp->__Vm_traceActivity 
                                          >> 3U))))) {
            vlTOPp->traceChgThis__22(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity 
                                 >> 2U) | (vlTOPp->__Vm_traceActivity 
                                           >> 3U)) 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__23(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 2U) | (vlTOPp->__Vm_traceActivity 
                                          >> 5U))))) {
            vlTOPp->traceChgThis__24(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__25(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x20U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__27(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__28(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTX::traceChgThis__2(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[0]),5);
        vcdp->chgBus(c+2,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[1]),5);
        vcdp->chgBus(c+3,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[2]),5);
        vcdp->chgBus(c+4,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[3]),5);
        vcdp->chgBus(c+5,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[4]),5);
        vcdp->chgBus(c+6,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[5]),5);
        vcdp->chgBus(c+7,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[6]),5);
        vcdp->chgBus(c+8,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[7]),5);
        vcdp->chgBus(c+9,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[8]),5);
        vcdp->chgBus(c+10,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[9]),5);
        vcdp->chgBus(c+11,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[10]),5);
        vcdp->chgBus(c+12,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[11]),5);
        vcdp->chgBus(c+13,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[12]),5);
        vcdp->chgBus(c+14,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[13]),5);
        vcdp->chgBus(c+15,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[14]),5);
        vcdp->chgBus(c+16,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[15]),5);
        vcdp->chgBus(c+17,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[16]),5);
        vcdp->chgBus(c+18,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[17]),5);
        vcdp->chgBus(c+19,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[18]),5);
        vcdp->chgBus(c+20,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[19]),5);
        vcdp->chgBus(c+21,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[20]),5);
        vcdp->chgBus(c+22,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[21]),5);
        vcdp->chgBus(c+23,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[22]),5);
        vcdp->chgBus(c+24,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[23]),5);
        vcdp->chgBus(c+25,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[24]),5);
        vcdp->chgBus(c+26,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[25]),5);
        vcdp->chgBus(c+27,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[26]),5);
        vcdp->chgBus(c+28,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[27]),5);
        vcdp->chgBus(c+29,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[28]),5);
        vcdp->chgBus(c+30,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[29]),5);
        vcdp->chgBus(c+31,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[30]),5);
        vcdp->chgBus(c+32,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[31]),5);
    }
}

void VTX::traceChgThis__3(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+257,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__code_block_resized),13);
        vcdp->chgBus(c+265,((0x1fffU & ((0U == (0xfU 
                                                & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                                                   >> 9U)))
                                         ? ((IData)(8U) 
                                            + (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kn_temp))
                                         : ((1U == 
                                             (0xfU 
                                              & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                                                 >> 9U)))
                                             ? ((IData)(0x10U) 
                                                + (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kn_temp))
                                             : ((2U 
                                                 == 
                                                 (0xfU 
                                                  & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                                                     >> 9U)))
                                                 ? 
                                                ((IData)(0x20U) 
                                                 + (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kn_temp))
                                                 : 
                                                ((IData)(0x40U) 
                                                 + (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kn_temp))))))),13);
        vcdp->chgBus(c+273,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kn_temp),13);
        vcdp->chgBus(c+281,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_num),8);
        vcdp->chgBit(c+289,((1U & (~ ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_when_UnsignedDivider_l112) 
                                      >> 0xdU)))));
    }
}

void VTX::traceChgThis__4(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+297,((1U & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__emitCrc)
                                    ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT___zz_result_data_payload_fragment)
                                    : ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                       >> 1U)))));
    }
}

void VTX::traceChgThis__5(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+305,(((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
                              ? ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))
                                  ? 0U : ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))
                                           ? 0U : (
                                                   (2U 
                                                    == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))
                                                    ? 0U
                                                    : 
                                                   (2U 
                                                    | (1U 
                                                       & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                                          >> 1U))))))
                              : ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
                                  ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment)
                                  : (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment)))),2);
    }
}

void VTX::traceChgThis__6(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+313,(((~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__sel_cha)) 
                             & (IData)(vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_input_valid))));
    }
}

void VTX::traceChgThis__7(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+321,(vlTOPp->TX__DOT__tx_crc_extender_raw_data_ready));
        vcdp->chgBit(c+329,(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3__DOT___zz_io_output_payload_last));
        vcdp->chgBit(c+337,(vlTOPp->TX__DOT__tx_crc_extender_block_msg_ctrl_in_ready));
        vcdp->chgBit(c+345,((1U & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+353,((1U & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+361,((1U & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+369,((1U & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+377,(vlTOPp->TX__DOT__rate_match_result_data_valid));
        vcdp->chgBit(c+385,(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_raw_data_ready));
        vcdp->chgBit(c+393,(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_payload_last));
        vcdp->chgBit(c+401,(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_raw_data_ready));
        vcdp->chgBit(c+409,(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_payload_last));
        vcdp->chgBit(c+417,(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_input_ready));
        vcdp->chgBit(c+425,(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_0_ready));
        vcdp->chgBit(c+433,(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_1_ready));
        vcdp->chgBit(c+441,(((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__ctrl_out_valid) 
                             & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+449,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo_io_pop_valid));
        vcdp->chgBus(c+457,(((((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ptrMatch)) 
                              << 4U) | (0xfU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_value) 
                                                - (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_value))))),5);
        vcdp->chgBus(c+465,(((((~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ptrMatch)) 
                              << 4U) | (0xfU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_value) 
                                                - (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_value))))),5);
        vcdp->chgBus(c+473,(((((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ptrMatch)) 
                              << 2U) | (3U & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_value) 
                                              - (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_value))))),3);
        vcdp->chgBus(c+481,(((((~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ptrMatch)) 
                              << 2U) | (3U & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_value) 
                                              - (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_value))))),3);
        vcdp->chgBit(c+489,(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment_result_data_payload_last));
        vcdp->chgBit(c+497,(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_last));
        vcdp->chgBit(c+505,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+513,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+521,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_full));
        vcdp->chgBit(c+529,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+537,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_valueNext),2);
        vcdp->chgBit(c+545,(((3U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+553,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+561,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+569,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+577,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_full));
        vcdp->chgArray(c+585,(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state_string),96);
        vcdp->chgArray(c+609,(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state_string),96);
        vcdp->chgBit(c+633,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_payload_last));
        vcdp->chgBit(c+641,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__cmd_fire));
        vcdp->chgBit(c+649,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo_io_pop_valid));
        vcdp->chgBus(c+657,(((((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_value))))),6);
        vcdp->chgBus(c+665,(((((~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_value))))),6);
        vcdp->chgBit(c+673,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo_io_pop_valid));
        vcdp->chgBus(c+681,(((((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ptrMatch)) 
                              << 2U) | (3U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_value) 
                                              - (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_value))))),3);
        vcdp->chgBus(c+689,(((((~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ptrMatch)) 
                              << 2U) | (3U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_value) 
                                              - (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_value))))),3);
        vcdp->chgBit(c+697,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+705,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+713,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_full));
        vcdp->chgBit(c+721,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+729,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+737,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_full));
        vcdp->chgBit(c+745,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__isEncoding) 
                             & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_valid))));
        vcdp->chgBit(c+753,((1U & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+761,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_valid));
        vcdp->chgBus(c+769,((0x1fffU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ptrMatch)
                                         ? ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_risingOccupancy)
                                             ? 0x1801U
                                             : 0U) : 
                                        (((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value) 
                                          < (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value))
                                          ? ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value) 
                                             - (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value))
                                          : ((IData)(0x1801U) 
                                             + ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value) 
                                                - (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value))))))),13);
        vcdp->chgBus(c+777,((0x1fffU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ptrMatch)
                                         ? ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_risingOccupancy)
                                             ? 0U : 0x1801U)
                                         : (((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value) 
                                             < (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value))
                                             ? ((IData)(0x1801U) 
                                                + ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value) 
                                                   - (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value)))
                                             : ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value) 
                                                - (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value)))))),13);
        vcdp->chgBit(c+785,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+793,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+801,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_full));
        vcdp->chgBit(c+809,(vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_willClear));
        vcdp->chgArray(c+817,(vlTOPp->TX__DOT__rate_match__DOT__state_string),96);
    }
}

void VTX::traceChgThis__8(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+841,(((((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3__DOT___zz_io_output_valid) 
                               & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_full))) 
                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3__DOT___zz_io_output_payload_last)) 
                             & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__finish_indicator) 
                                >> (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)))));
        vcdp->chgBit(c+849,((((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo_io_pop_valid) 
                              & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo_io_pop_ready)) 
                             & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0))));
        vcdp->chgBit(c+857,((((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_valid) 
                              & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_ready)) 
                             & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_logic_ram_port0))));
    }
}

void VTX::traceChgThis__9(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+865,(((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3__DOT___zz_io_output_valid) 
                             & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+873,((((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3__DOT___zz_io_output_valid) 
                              & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_full))) 
                             & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3__DOT___zz_io_output_payload_last))));
        vcdp->chgBit(c+881,((((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_valid) 
                              & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_0_ready)) 
                             & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_payload_last))));
        vcdp->chgBit(c+889,(((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_0_valid) 
                             & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_raw_data_ready))));
        vcdp->chgBit(c+897,(((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_valid) 
                             & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_0_ready))));
        vcdp->chgBit(c+905,((((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_valid) 
                              & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_1_ready)) 
                             & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_payload_last))));
        vcdp->chgBit(c+913,(((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_1_valid) 
                             & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_raw_data_ready))));
        vcdp->chgBit(c+921,(((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_valid) 
                             & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_1_ready))));
        vcdp->chgBit(c+929,(((0xfU == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+937,(((0x1fU == (IData)(vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_value)) 
                             & (IData)(vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_willIncrement))));
        vcdp->chgBus(c+945,((((2U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__bits_sel_value)) 
                              & (IData)(vlTOPp->TX__DOT__rate_match__DOT__bits_sel_willIncrement))
                              ? 0U : (3U & ((IData)(vlTOPp->TX__DOT__rate_match__DOT__bits_sel_value) 
                                            + (IData)(vlTOPp->TX__DOT__rate_match__DOT__bits_sel_willIncrement))))),2);
        vcdp->chgBit(c+953,(((2U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__bits_sel_value)) 
                             & (IData)(vlTOPp->TX__DOT__rate_match__DOT__bits_sel_willIncrement))));
    }
}

void VTX::traceChgThis__10(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+961,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3__DOT___zz_io_output_valid) 
                             & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+969,(((0xfU == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+977,(((3U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+985,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+993,(((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state)) 
                             & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_0_ready))));
        vcdp->chgBit(c+1001,((((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment_result_data_valid) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_0_ready)) 
                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment_result_data_payload_last))));
        vcdp->chgBit(c+1009,(((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state)) 
                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_1_ready))));
        vcdp->chgBit(c+1017,((((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_valid) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_1_ready)) 
                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_last))));
        vcdp->chgBit(c+1025,((((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_valid) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_ready)) 
                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_payload_last))));
        vcdp->chgBit(c+1033,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo_io_pop_valid) 
                              & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo_io_pop_ready))));
        vcdp->chgBit(c+1041,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__flowMux_1__DOT___zz_output_valid) 
                              & (2U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state)))));
        vcdp->chgBit(c+1049,(((0x1fU == (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+1057,(((0x1fU == (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+1065,(((3U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+1073,(((3U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+1081,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_outputs_1_valid) 
                              & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__isEncoding)))));
        vcdp->chgBit(c+1089,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_valid) 
                              & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_ready))));
        vcdp->chgBit(c+1097,(((0x1800U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+1105,(((0x1800U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_willIncrement))));
    }
}

void VTX::traceChgThis__12(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*159:0*/ __Vtemp37[5];
    // Body
    {
        vcdp->chgBit(c+1113,(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type));
        vcdp->chgBit(c+1121,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_is_last_block));
        vcdp->chgBus(c+1129,(vlTOPp->TX__DOT__code_block_segment__DOT__finish_indicator),4);
        __Vtemp37[0U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type)
                              ? 0x6f6e616cU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp37[1U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type)
                              ? 0x6c757469U : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp37[2U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type)
                              ? 0x6f6e766fU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp37[3U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type)
                              ? 0x6c656443U : 0x3f3f3f3fU)
                          : 0x626f2020U);
        __Vtemp37[4U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type)
                              ? 0x546169U : 0x3f3f3fU)
                          : 0x547572U);
        vcdp->chgArray(c+1137,(__Vtemp37),152);
    }
}

void VTX::traceChgThis__13(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1177,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode)
                               ? ((7U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state)) 
                                  & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_ready))
                               : (7U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state)))));
        vcdp->chgBit(c+1185,(((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_input_valid))));
        vcdp->chgBit(c+1193,(((2U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_input_valid))));
        vcdp->chgBit(c+1201,(((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_5_io_input_valid))));
        vcdp->chgBit(c+1209,(((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_5_io_input_valid))));
        vcdp->chgBit(c+1217,(((2U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_5_io_input_valid))));
        vcdp->chgBit(c+1225,((((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_valid) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_ready)) 
                              & ((0x19U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__payload_cnt)) 
                                 & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode)))));
        vcdp->chgBus(c+1233,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__when_PhyTX_l648)
                               ? ((0x40U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                            << 5U)) 
                                  | (0x3fU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tail_bits) 
                                              >> 1U)))
                               : 0U)),7);
        vcdp->chgBit(c+1241,((((IData)(vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_outputs_1_valid) 
                               & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder_raw_data_ready)) 
                              & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0))));
    }
}

void VTX::traceChgThis__14(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1249,(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3__DOT___zz_io_output_valid));
        vcdp->chgBit(c+1257,(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_input_valid));
        vcdp->chgBit(c+1265,(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_valid));
        vcdp->chgBit(c+1273,(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_valid));
        vcdp->chgBit(c+1281,(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_0_valid));
        vcdp->chgBit(c+1289,(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_1_valid));
        vcdp->chgBit(c+1297,(vlTOPp->TX__DOT__tx_crc_extender__DOT__block_msg_ctrl_in_fire));
        vcdp->chgBit(c+1305,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+1313,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_valueNext),4);
        vcdp->chgBit(c+1321,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+1329,(vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_willIncrement));
        vcdp->chgBus(c+1337,(vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_valueNext),5);
        vcdp->chgBit(c+1345,(vlTOPp->TX__DOT__rate_match__DOT__bits_sel_willIncrement));
        vcdp->chgBit(c+1353,(vlTOPp->TX__DOT__rate_match__DOT__willIncrement));
        vcdp->chgBus(c+1361,(vlTOPp->TX__DOT__rate_match__DOT__read_addr_next),13);
        vcdp->chgBit(c+1369,(vlTOPp->TX__DOT__rate_match__DOT__result_data_fire));
        vcdp->chgBit(c+1377,(vlTOPp->TX__DOT__rate_match__DOT__when_PhyTX_l816));
    }
}

void VTX::traceChgThis__15(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1385,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popping))));
    }
}

void VTX::traceChgThis__16(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1393,(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3__DOT___zz_io_output_valid));
        vcdp->chgBit(c+1401,(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3__DOT___zz_io_output_payload_last));
        vcdp->chgBit(c+1409,(vlTOPp->TX__DOT__channel_code__DOT__flowMux_1__DOT___zz_output_valid));
        vcdp->chgBit(c+1417,(vlTOPp->TX__DOT__channel_code__DOT__flowMux_1__DOT___zz_output_payload_last));
        vcdp->chgBit(c+1425,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_input_ready) 
                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__state))));
        vcdp->chgBit(c+1433,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_5_io_input_ready) 
                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__state))));
        vcdp->chgBit(c+1441,(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_input_valid));
        vcdp->chgBit(c+1449,(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_5_io_input_valid));
        vcdp->chgBit(c+1457,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo_io_pop_valid));
        vcdp->chgBit(c+1465,(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment_block_msg_ready));
        vcdp->chgBit(c+1473,(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment_result_data_valid));
        vcdp->chgBit(c+1481,(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_block_msg_ready));
        vcdp->chgBit(c+1489,(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_valid));
        vcdp->chgBus(c+1497,(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment),2);
        vcdp->chgBit(c+1505,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_block_msg_ready));
        vcdp->chgBit(c+1513,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_valid));
        vcdp->chgBit(c+1521,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_last));
        vcdp->chgBus(c+1529,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment),2);
        vcdp->chgBit(c+1537,(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_input_ready));
        vcdp->chgBit(c+1545,(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_outputs_1_valid));
        vcdp->chgBit(c+1553,(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_5_io_input_ready));
        vcdp->chgBit(c+1561,(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_0_ready));
        vcdp->chgBit(c+1569,(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_1_ready));
        vcdp->chgBit(c+1577,(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_2_ready));
        vcdp->chgBit(c+1585,(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_0_ready));
        vcdp->chgBit(c+1593,(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_1_ready));
        vcdp->chgBit(c+1601,(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_2_ready));
        vcdp->chgBit(c+1609,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+1617,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_valueNext),4);
        vcdp->chgBit(c+1625,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popping));
        vcdp->chgBit(c+1633,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+1641,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_valueNext),2);
        vcdp->chgBit(c+1649,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popping));
        vcdp->chgBit(c+1657,(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__block_msg_fire));
        vcdp->chgBit(c+1665,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment_result_data_valid) 
                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_0_ready))));
        vcdp->chgBit(c+1673,(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__block_msg_fire));
        vcdp->chgBit(c+1681,(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__result_data_fire_1));
        vcdp->chgBit(c+1689,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_valid) 
                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_1_ready))));
        vcdp->chgBit(c+1697,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_valid));
        vcdp->chgBit(c+1705,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_ready));
        vcdp->chgBit(c+1713,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_ready));
        vcdp->chgBit(c+1721,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_valid));
        vcdp->chgBit(c+1729,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__block_msg_fire));
        vcdp->chgBit(c+1737,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_msg_fire));
        vcdp->chgBit(c+1745,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__result_data_fire));
        vcdp->chgBit(c+1753,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_valid) 
                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_2_ready))));
        vcdp->chgBit(c+1761,((((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_valid) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_2_ready)) 
                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_last))));
        vcdp->chgArray(c+1769,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state_string),96);
        vcdp->chgBit(c+1793,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_valid) 
                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_ready))));
        vcdp->chgBit(c+1801,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_valid) 
                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_ready))));
        vcdp->chgBit(c+1809,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo_io_pop_ready));
        vcdp->chgBit(c+1817,(vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_input_valid));
        vcdp->chgBit(c+1825,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder_raw_data_ready));
        vcdp->chgBit(c+1833,(vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_input_ready));
        vcdp->chgBit(c+1841,(vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_outputs_1_valid));
        vcdp->chgBit(c+1849,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popping));
        vcdp->chgArray(c+1857,(vlTOPp->TX__DOT__channel_code__DOT__state_string),72);
        vcdp->chgBit(c+1881,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+1889,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_valueNext),5);
        vcdp->chgBit(c+1897,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+1905,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_valueNext),5);
        vcdp->chgBit(c+1913,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+1921,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popping));
        vcdp->chgBit(c+1929,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+1937,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+1945,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_valueNext),2);
        vcdp->chgBit(c+1953,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+1961,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_valueNext),2);
        vcdp->chgBit(c+1969,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+1977,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+1985,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__when_PhyTX_l648));
        vcdp->chgBit(c+1993,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_ready));
        vcdp->chgBit(c+2001,((1U & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__when_PhyTX_l648)))));
        vcdp->chgBit(c+2009,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_outputs_1_valid) 
                              & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder_raw_data_ready))));
        vcdp->chgBit(c+2017,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__when_PhyTX_l648));
        vcdp->chgBus(c+2025,((0x7fU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                       >> 1U))),7);
        vcdp->chgBit(c+2033,((1U & ((((((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                        >> 1U) ^ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                                  >> 2U)) 
                                      ^ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                         >> 4U)) ^ 
                                     ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                      >> 5U)) ^ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                                 >> 7U)))));
        vcdp->chgBit(c+2041,((1U & ((((((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                        >> 1U) ^ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                                  >> 4U)) 
                                      ^ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                         >> 5U)) ^ 
                                     ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                      >> 6U)) ^ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                                 >> 7U)))));
        vcdp->chgBit(c+2049,((1U & ((((((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                        >> 1U) ^ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                                  >> 3U)) 
                                      ^ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                         >> 5U)) ^ 
                                     ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                      >> 6U)) ^ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                                 >> 7U)))));
        vcdp->chgBit(c+2057,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__raw_data_fire));
        vcdp->chgBit(c+2065,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+2073,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_valueNext),13);
        vcdp->chgBit(c+2081,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+2089,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_valueNext),13);
        vcdp->chgBit(c+2097,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+2105,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popping));
        vcdp->chgBit(c+2113,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+2121,(vlTOPp->TX__DOT__channel_code__DOT__coded_msg_fire));
        vcdp->chgBit(c+2129,(vlTOPp->TX__DOT__rate_match__DOT__raw_data_fire));
    }
}

void VTX::traceChgThis__17(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*159:0*/ __Vtemp42[5];
    WData/*159:0*/ __Vtemp47[5];
    WData/*159:0*/ __Vtemp52[5];
    WData/*159:0*/ __Vtemp57[5];
    WData/*159:0*/ __Vtemp62[5];
    WData/*159:0*/ __Vtemp67[5];
    WData/*159:0*/ __Vtemp72[5];
    WData/*159:0*/ __Vtemp77[5];
    // Body
    {
        vcdp->chgBus(c+2137,(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type),2);
        vcdp->chgBus(c+2145,(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_length),20);
        vcdp->chgBus(c+2153,(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_rnti_scramble),16);
        vcdp->chgBit(c+2161,(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type));
        vcdp->chgBit(c+2169,((1U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type))));
        vcdp->chgBus(c+2177,(((0U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type))
                               ? 0x50424348U : ((1U 
                                                 == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type))
                                                 ? 0x50434348U
                                                 : 
                                                ((2U 
                                                  == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type))
                                                  ? 0x50544348U
                                                  : 0x3f3f3f3fU)))),32);
        vcdp->chgBit(c+2185,((1U != (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type))));
        vcdp->chgBit(c+2193,((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_logic_ram_port0))));
        vcdp->chgBit(c+2201,((1U & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                    >> 1U))));
        vcdp->chgBus(c+2209,(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_length),13);
        vcdp->chgBit(c+2217,(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type));
        vcdp->chgBit(c+2225,(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type));
        vcdp->chgBus(c+2233,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length),13);
        vcdp->chgBit(c+2241,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type));
        vcdp->chgBus(c+2249,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[0]),2);
        vcdp->chgBus(c+2250,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[1]),2);
        vcdp->chgBus(c+2251,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[2]),2);
        vcdp->chgBus(c+2252,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[3]),2);
        vcdp->chgBus(c+2253,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[4]),2);
        vcdp->chgBus(c+2254,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[5]),2);
        vcdp->chgBus(c+2255,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[6]),2);
        vcdp->chgBus(c+2256,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[7]),2);
        vcdp->chgBus(c+2257,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[8]),2);
        vcdp->chgBus(c+2258,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[9]),2);
        vcdp->chgBus(c+2259,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[10]),2);
        vcdp->chgBus(c+2260,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[11]),2);
        vcdp->chgBus(c+2261,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[12]),2);
        vcdp->chgBus(c+2262,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[13]),2);
        vcdp->chgBus(c+2263,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[14]),2);
        vcdp->chgBus(c+2264,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[15]),2);
        __Vtemp42[0U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6f6e616cU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp42[1U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6c757469U : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp42[2U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6f6e766fU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp42[3U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6c656443U : 0x3f3f3f3fU)
                          : 0x626f2020U);
        __Vtemp42[4U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x546169U : 0x3f3f3fU)
                          : 0x547572U);
        vcdp->chgArray(c+2377,(__Vtemp42),152);
        __Vtemp47[0U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6f6e616cU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp47[1U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6c757469U : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp47[2U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6f6e766fU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp47[3U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6c656443U : 0x3f3f3f3fU)
                          : 0x626f2020U);
        __Vtemp47[4U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x546169U : 0x3f3f3fU)
                          : 0x547572U);
        vcdp->chgArray(c+2417,(__Vtemp47),152);
        __Vtemp52[0U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6f6e616cU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp52[1U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6c757469U : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp52[2U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6f6e766fU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp52[3U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6c656443U : 0x3f3f3f3fU)
                          : 0x626f2020U);
        __Vtemp52[4U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x546169U : 0x3f3f3fU)
                          : 0x547572U);
        vcdp->chgArray(c+2457,(__Vtemp52),152);
        __Vtemp57[0U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6f6e616cU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp57[1U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6c757469U : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp57[2U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6f6e766fU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp57[3U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6c656443U : 0x3f3f3f3fU)
                          : 0x626f2020U);
        __Vtemp57[4U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x546169U : 0x3f3f3fU)
                          : 0x547572U);
        vcdp->chgArray(c+2497,(__Vtemp57),152);
        vcdp->chgBus(c+2537,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient),20);
        vcdp->chgBus(c+2545,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_remainder),13);
        vcdp->chgBit(c+2553,((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_error))));
        vcdp->chgBus(c+2561,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__C),8);
        vcdp->chgBus(c+2569,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cp),8);
        vcdp->chgBus(c+2577,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cn),8);
        vcdp->chgBus(c+2585,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kp),13);
        vcdp->chgBus(c+2593,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kn),13);
        vcdp->chgBus(c+2601,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__F),20);
        vcdp->chgBus(c+2609,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__shift_step),3);
        vcdp->chgBus(c+2617,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__numerator),20);
        vcdp->chgBus(c+2625,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__denominator),13);
        vcdp->chgBus(c+2633,((0xfU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length) 
                                      >> 9U))),4);
        vcdp->chgBus(c+2641,(((0U == (0xfU & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                                              >> 9U)))
                               ? 3U : ((1U == (0xfU 
                                               & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                                                  >> 9U)))
                                        ? 4U : ((2U 
                                                 == 
                                                 (0xfU 
                                                  & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                                                     >> 9U)))
                                                 ? 5U
                                                 : 6U)))),3);
        vcdp->chgBus(c+2649,((0xfU & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                                      >> 9U))),4);
        vcdp->chgBit(c+2657,((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cn))));
        vcdp->chgBit(c+2665,(((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cp)) 
                              & (0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cn)))));
        __Vtemp62[0U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6f6e616cU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp62[1U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6c757469U : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp62[2U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6f6e766fU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp62[3U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6c656443U : 0x3f3f3f3fU)
                          : 0x626f2020U);
        __Vtemp62[4U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x546169U : 0x3f3f3fU)
                          : 0x547572U);
        vcdp->chgArray(c+2673,(__Vtemp62),152);
        __Vtemp67[0U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6f6e616cU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp67[1U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6c757469U : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp67[2U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6f6e766fU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp67[3U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6c656443U : 0x3f3f3f3fU)
                          : 0x626f2020U);
        __Vtemp67[4U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x546169U : 0x3f3f3fU)
                          : 0x547572U);
        vcdp->chgArray(c+2713,(__Vtemp67),152);
        vcdp->chgBus(c+2753,((8U | (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__coded_data))),4);
        vcdp->chgBit(c+2761,(vlTOPp->TX__DOT__channel_code__DOT__sel_cha));
        __Vtemp72[0U] = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                              ? 0x6f6e616cU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp72[1U] = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                              ? 0x6c757469U : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp72[2U] = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                              ? 0x6f6e766fU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp72[3U] = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                              ? 0x6c656443U : 0x3f3f3f3fU)
                          : 0x626f2020U);
        __Vtemp72[4U] = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                              ? 0x546169U : 0x3f3f3fU)
                          : 0x547572U);
        vcdp->chgArray(c+2769,(__Vtemp72),152);
        __Vtemp77[0U] = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                              ? 0x6f6e616cU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp77[1U] = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                              ? 0x6c757469U : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp77[2U] = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                              ? 0x6f6e766fU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp77[3U] = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                              ? 0x6c656443U : 0x3f3f3f3fU)
                          : 0x626f2020U);
        __Vtemp77[4U] = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                              ? 0x546169U : 0x3f3f3fU)
                          : 0x547572U);
        vcdp->chgArray(c+2809,(__Vtemp77),152);
        vcdp->chgBus(c+2849,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__coded_data),3);
        vcdp->chgBit(c+2857,(vlTOPp->TX__DOT__channel_code__DOT__sel_cha));
        vcdp->chgBit(c+2865,((1U & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__sel_cha)))));
        vcdp->chgBus(c+2873,(vlTOPp->TX__DOT__rate_match__DOT__rows),8);
        vcdp->chgBus(c+2881,(vlTOPp->TX__DOT__rate_match__DOT__write_addr),13);
        vcdp->chgBus(c+2889,(vlTOPp->TX__DOT__rate_match__DOT__read_addr),13);
        vcdp->chgBus(c+2897,(vlTOPp->TX__DOT__rate_match__DOT__read_row_cnt),8);
        vcdp->chgBus(c+2905,(vlTOPp->TX__DOT__rate_match__DOT___zz_conv_perm_pattern_port0),5);
        vcdp->chgBit(c+2913,((1U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__read_row_cnt))));
        vcdp->chgBus(c+2921,(vlTOPp->TX__DOT__rate_match__DOT___zz_interleaving_ram_port0),4);
    }
}

void VTX::traceChgThis__19(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2929,((1U & ((IData)(vlTOPp->TX__DOT__rate_match__DOT___zz_interleaving_ram_port0) 
                                    >> (IData)(vlTOPp->TX__DOT__rate_match__DOT__bits_sel_value)))));
        vcdp->chgBus(c+2937,(((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))
                               ? 0U : ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))
                                        ? 0U : ((2U 
                                                 == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))
                                                 ? 0U
                                                 : 
                                                (2U 
                                                 | (1U 
                                                    & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                                       >> 1U))))))),2);
        vcdp->chgBus(c+2945,((0xffffffU & ((vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                            << 1U) 
                                           ^ ((1U & 
                                               (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 1U) 
                                                ^ (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                                   >> 0x17U)))
                                               ? 0x800063U
                                               : 0U)))),24);
    }
}

void VTX::traceChgThis__20(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2953,(((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
                               ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_length)
                               : ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
                                   ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_length)
                                   : (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length)))),13);
        vcdp->chgBus(c+2961,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__sel_cha)
                               ? (8U | (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__coded_data))
                               : (4U | (3U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                              >> 1U))))),4);
    }
}

void VTX::traceChgThis__21(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2969,(vlTOPp->TX__DOT__tx_crc_extender__DOT__ctrl_out_valid));
        vcdp->chgBit(c+2977,((2U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))));
        vcdp->chgBit(c+2985,((0U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))));
        vcdp->chgBit(c+2993,(vlTOPp->TX__DOT__tx_crc_extender__DOT__ctrl_in_enable));
        vcdp->chgBit(c+3001,(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc_raw_halt));
        vcdp->chgBus(c+3009,(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state),24);
        vcdp->chgBit(c+3017,(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__emitCrc));
        vcdp->chgBus(c+3025,(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter),5);
        vcdp->chgBit(c+3033,((1U & (~ (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__emitCrc)))));
        vcdp->chgBit(c+3041,((0U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))));
        vcdp->chgBus(c+3049,(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state),16);
        vcdp->chgBit(c+3057,(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__emitCrc));
        vcdp->chgBus(c+3065,(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter),4);
        vcdp->chgBit(c+3073,((1U & (~ (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__emitCrc)))));
        vcdp->chgBit(c+3081,((0U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter))));
        vcdp->chgBit(c+3089,((3U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))));
        vcdp->chgBit(c+3097,((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))));
        vcdp->chgBit(c+3105,(((3U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state)) 
                              | (4U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state)))));
        vcdp->chgBit(c+3113,((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state))));
        vcdp->chgBus(c+3121,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+3129,((0xfU == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+3137,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+3145,((0xfU == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+3153,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+3161,((0xfU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_value) 
                                      - (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_value)))),4);
        vcdp->chgBus(c+3169,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_value),2);
        vcdp->chgBit(c+3177,((3U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+3185,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_value),2);
        vcdp->chgBit(c+3193,((3U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+3201,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+3209,((3U & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_value)))),2);
        vcdp->chgBus(c+3217,(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state),2);
        vcdp->chgBit(c+3225,(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__block_msg_enable));
        vcdp->chgBus(c+3233,(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__zero_padding_cnt),13);
        vcdp->chgBit(c+3241,((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__zero_padding_cnt))));
        vcdp->chgBus(c+3249,(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state),3);
        vcdp->chgBit(c+3257,(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__block_msg_enable));
        vcdp->chgBus(c+3265,(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__zero_padding_cnt),13);
        vcdp->chgBus(c+3273,(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__rnti),16);
        vcdp->chgBit(c+3281,((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__zero_padding_cnt))));
        vcdp->chgBit(c+3289,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_cmd_ready));
        vcdp->chgBit(c+3297,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_valid));
        vcdp->chgBit(c+3305,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__block_msg_enable));
        vcdp->chgBit(c+3313,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__divide_enable));
        vcdp->chgBit(c+3321,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__divide_enable) 
                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_cmd_ready))));
        vcdp->chgBus(c+3329,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state),24);
        vcdp->chgBit(c+3337,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__emitCrc));
        vcdp->chgBus(c+3345,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter),5);
        vcdp->chgBit(c+3353,((1U & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__emitCrc)))));
        vcdp->chgBit(c+3361,((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))));
        vcdp->chgBus(c+3369,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92),2);
        vcdp->chgBit(c+3377,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__coded_data_valid_1));
        vcdp->chgBit(c+3385,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__raw_data_payload_last_regNext));
        vcdp->chgBus(c+3393,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_value),5);
        vcdp->chgBit(c+3401,((0x1fU == (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+3409,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_value),5);
        vcdp->chgBit(c+3417,((0x1fU == (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+3425,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+3433,((0x1fU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_value)))),5);
        vcdp->chgBus(c+3441,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_value),2);
        vcdp->chgBit(c+3449,((3U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+3457,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_value),2);
        vcdp->chgBit(c+3465,((3U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+3473,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+3481,((3U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_value) 
                                    - (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_value)))),2);
        vcdp->chgBit(c+3489,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__isEncoding));
        vcdp->chgBit(c+3497,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__loaded_tail_bits));
        vcdp->chgBus(c+3505,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__r_enc_buf),7);
        vcdp->chgBus(c+3513,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value),13);
        vcdp->chgBit(c+3521,((0x1800U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+3529,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value),13);
        vcdp->chgBit(c+3537,((0x1800U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+3545,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+3553,((0x1fffU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value) 
                                         - (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value)))),13);
        vcdp->chgBus(c+3561,(vlTOPp->TX__DOT__rate_match__DOT__state),2);
        vcdp->chgBus(c+3569,(vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_value),5);
        vcdp->chgBit(c+3577,((0x1fU == (IData)(vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_value))));
        vcdp->chgBus(c+3585,(vlTOPp->TX__DOT__rate_match__DOT__bits_sel_value),2);
        vcdp->chgBit(c+3593,((2U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__bits_sel_value))));
    }
}

void VTX::traceChgThis__22(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3601,((1U & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__rnti) 
                                    >> (0xfU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_length) 
                                                - (IData)(1U)))))));
        vcdp->chgBit(c+3609,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__isEncoding) 
                              & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_logic_ram_port0))));
        vcdp->chgBit(c+3617,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__isEncoding) 
                              & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                 >> 1U))));
    }
}

void VTX::traceChgThis__23(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3625,(((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
                               ? (1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))
                               : ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
                                   ? (1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state))
                                   : (5U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state))))));
    }
}

void VTX::traceChgThis__24(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3633,(((1U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__state)) 
                              & (0U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state)))));
    }
}

void VTX::traceChgThis__25(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*159:0*/ __Vtemp109[5];
    // Body
    {
        vcdp->chgBus(c+3641,(vlTOPp->TX__DOT__channel_code__DOT__message_segment_length),13);
        vcdp->chgBit(c+3649,((1U == vlTOPp->TX__DOT__rate_match__DOT__vector_length_cnt)));
        vcdp->chgBus(c+3657,((3U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0))),2);
        vcdp->chgBus(c+3665,((0xfffffU & (IData)((vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
                                                  >> 2U)))),20);
        vcdp->chgBus(c+3673,((0xffffU & (IData)((vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
                                                 >> 0x16U)))),16);
        vcdp->chgBus(c+3681,(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_length),13);
        vcdp->chgBus(c+3689,(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha),2);
        vcdp->chgBus(c+3697,(((0U == (3U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0)))
                               ? 0x50424348U : ((1U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0)))
                                                 ? 0x50434348U
                                                 : 
                                                ((2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0)))
                                                  ? 0x50544348U
                                                  : 0x3f3f3f3fU)))),32);
        vcdp->chgQuad(c+3705,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ram[0]),38);
        vcdp->chgQuad(c+3707,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ram[1]),38);
        vcdp->chgQuad(c+3709,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ram[2]),38);
        vcdp->chgQuad(c+3711,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ram[3]),38);
        vcdp->chgBit(c+3769,((0x28U > (0xfffffU & (IData)(
                                                          (vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
                                                           >> 2U))))));
        vcdp->chgBit(c+3777,((0x10U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_length))));
        vcdp->chgBit(c+3785,(((0x19U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__payload_cnt)) 
                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode))));
        vcdp->chgBus(c+3793,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__zero_padding_cnt),13);
        vcdp->chgBus(c+3801,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__payload_cnt),13);
        vcdp->chgBit(c+3809,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__emit_step));
        vcdp->chgBit(c+3817,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode));
        vcdp->chgBit(c+3825,((0x1800U >= (0xfffffU 
                                          & (IData)(
                                                    (vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
                                                     >> 2U))))));
        vcdp->chgBit(c+3833,((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__zero_padding_cnt))));
        vcdp->chgBit(c+3841,((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__payload_cnt))));
        vcdp->chgBit(c+3849,((0U != (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))));
        vcdp->chgBit(c+3857,((1U != (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))));
        vcdp->chgBit(c+3865,((2U != (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))));
        vcdp->chgBit(c+3873,((1U & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0))));
        vcdp->chgBus(c+3881,((3U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                    >> 1U))),2);
        vcdp->chgBus(c+3889,((0x1fffU & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0))),13);
        vcdp->chgBit(c+3897,((1U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0) 
                                    >> 0xdU))));
        vcdp->chgBus(c+3905,((4U | (3U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                          >> 1U)))),4);
        vcdp->chgBus(c+3913,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[0]),3);
        vcdp->chgBus(c+3914,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[1]),3);
        vcdp->chgBus(c+3915,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[2]),3);
        vcdp->chgBus(c+3916,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[3]),3);
        vcdp->chgBus(c+3917,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[4]),3);
        vcdp->chgBus(c+3918,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[5]),3);
        vcdp->chgBus(c+3919,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[6]),3);
        vcdp->chgBus(c+3920,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[7]),3);
        vcdp->chgBus(c+3921,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[8]),3);
        vcdp->chgBus(c+3922,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[9]),3);
        vcdp->chgBus(c+3923,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[10]),3);
        vcdp->chgBus(c+3924,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[11]),3);
        vcdp->chgBus(c+3925,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[12]),3);
        vcdp->chgBus(c+3926,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[13]),3);
        vcdp->chgBus(c+3927,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[14]),3);
        vcdp->chgBus(c+3928,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[15]),3);
        vcdp->chgBus(c+3929,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[16]),3);
        vcdp->chgBus(c+3930,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[17]),3);
        vcdp->chgBus(c+3931,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[18]),3);
        vcdp->chgBus(c+3932,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[19]),3);
        vcdp->chgBus(c+3933,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[20]),3);
        vcdp->chgBus(c+3934,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[21]),3);
        vcdp->chgBus(c+3935,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[22]),3);
        vcdp->chgBus(c+3936,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[23]),3);
        vcdp->chgBus(c+3937,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[24]),3);
        vcdp->chgBus(c+3938,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[25]),3);
        vcdp->chgBus(c+3939,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[26]),3);
        vcdp->chgBus(c+3940,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[27]),3);
        vcdp->chgBus(c+3941,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[28]),3);
        vcdp->chgBus(c+3942,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[29]),3);
        vcdp->chgBus(c+3943,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[30]),3);
        vcdp->chgBus(c+3944,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[31]),3);
        __Vtemp109[0U] = ((0x2000U & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0))
                           ? ((0x2000U & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0))
                               ? 0x6f6e616cU : 0x3f3f3f3fU)
                           : 0x20202020U);
        __Vtemp109[1U] = ((0x2000U & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0))
                           ? ((0x2000U & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0))
                               ? 0x6c757469U : 0x3f3f3f3fU)
                           : 0x20202020U);
        __Vtemp109[2U] = ((0x2000U & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0))
                           ? ((0x2000U & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0))
                               ? 0x6f6e766fU : 0x3f3f3f3fU)
                           : 0x20202020U);
        __Vtemp109[3U] = ((0x2000U & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0))
                           ? ((0x2000U & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0))
                               ? 0x6c656443U : 0x3f3f3f3fU)
                           : 0x626f2020U);
        __Vtemp109[4U] = ((0x2000U & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0))
                           ? ((0x2000U & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0))
                               ? 0x546169U : 0x3f3f3fU)
                           : 0x547572U);
        vcdp->chgArray(c+4169,(__Vtemp109),152);
        vcdp->chgBus(c+4209,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ram[0]),14);
        vcdp->chgBus(c+4210,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ram[1]),14);
        vcdp->chgBus(c+4211,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ram[2]),14);
        vcdp->chgBus(c+4212,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ram[3]),14);
        vcdp->chgBit(c+4241,((1U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                    >> 1U))));
        vcdp->chgBit(c+4249,((1U & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_logic_ram_port0))));
        vcdp->chgBit(c+4257,((1U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                    >> 1U))));
        vcdp->chgBus(c+4265,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tail_bits),7);
        vcdp->chgBus(c+4273,(vlTOPp->TX__DOT__rate_match__DOT__zero_padding_cnt),5);
        vcdp->chgBus(c+4281,(vlTOPp->TX__DOT__rate_match__DOT__vector_length_cnt),32);
        vcdp->chgBit(c+4289,((1U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__zero_padding_cnt))));
    }
}

void VTX::traceChgThis__27(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+4297,((1U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__state))));
        vcdp->chgBit(c+4305,((5U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state))));
        vcdp->chgBit(c+4313,(vlTOPp->TX__DOT__code_block_segment__DOT__state));
        vcdp->chgQuad(c+4321,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__state)
                                ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__state)
                                    ? VL_ULL(0x425950415353)
                                    : VL_ULL(0x3f3f3f3f3f3f))
                                : VL_ULL(0x49444c452020))),48);
        vcdp->chgBus(c+4337,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state),3);
        vcdp->chgBit(c+4345,((0U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__state))));
        vcdp->chgBus(c+4353,(vlTOPp->TX__DOT__channel_code__DOT__state),2);
    }
}

void VTX::traceChgThis__28(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+4361,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+4369,(vlTOPp->raw_data_ready));
        vcdp->chgBit(c+4377,(vlTOPp->raw_data_payload_last));
        vcdp->chgBit(c+4385,(vlTOPp->raw_data_payload_fragment));
        vcdp->chgBit(c+4393,(vlTOPp->result_data_valid));
        vcdp->chgBit(c+4401,(vlTOPp->result_data_ready));
        vcdp->chgBit(c+4409,(vlTOPp->result_data_payload_last));
        vcdp->chgBit(c+4417,(vlTOPp->result_data_payload_fragment));
        vcdp->chgBit(c+4425,(vlTOPp->block_msg_ctrl_valid));
        vcdp->chgBit(c+4433,(vlTOPp->block_msg_ctrl_ready));
        vcdp->chgBus(c+4441,(vlTOPp->block_msg_ctrl_payload_pkg_type),2);
        vcdp->chgBus(c+4449,(vlTOPp->block_msg_ctrl_payload_pkg_length),20);
        vcdp->chgBus(c+4457,(vlTOPp->block_msg_ctrl_payload_rnti_scramble),16);
        vcdp->chgBit(c+4465,(vlTOPp->clk));
        vcdp->chgBit(c+4473,(vlTOPp->reset));
        vcdp->chgBit(c+4481,(((1U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type))
                               ? ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__emitCrc)
                                   ? (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT___zz_result_data_payload_fragment)
                                   : (IData)(vlTOPp->raw_data_payload_fragment))
                               : ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__emitCrc)
                                   ? (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT___zz_result_data_payload_fragment)
                                   : (IData)(vlTOPp->raw_data_payload_fragment)))));
        vcdp->chgBus(c+4489,(((0U == (IData)(vlTOPp->block_msg_ctrl_payload_pkg_type))
                               ? 0x50424348U : ((1U 
                                                 == (IData)(vlTOPp->block_msg_ctrl_payload_pkg_type))
                                                 ? 0x50434348U
                                                 : 
                                                ((2U 
                                                  == (IData)(vlTOPp->block_msg_ctrl_payload_pkg_type))
                                                  ? 0x50544348U
                                                  : 0x3f3f3f3fU)))),32);
        vcdp->chgBit(c+4497,(((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__emitCrc)
                               ? (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT___zz_result_data_payload_fragment)
                               : (IData)(vlTOPp->raw_data_payload_fragment))));
        vcdp->chgBit(c+4505,(((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__emitCrc)
                               ? (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT___zz_result_data_payload_fragment)
                               : (IData)(vlTOPp->raw_data_payload_fragment))));
        vcdp->chgBit(c+4513,(((IData)(vlTOPp->raw_data_valid) 
                              & (IData)(vlTOPp->TX__DOT__tx_crc_extender_raw_data_ready))));
        vcdp->chgBit(c+4521,((((IData)(vlTOPp->raw_data_valid) 
                               & (IData)(vlTOPp->TX__DOT__tx_crc_extender_raw_data_ready)) 
                              & (IData)(vlTOPp->raw_data_payload_last))));
        vcdp->chgBus(c+4529,((0xffffffU & ((vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                            << 1U) 
                                           ^ ((1U & 
                                               ((IData)(vlTOPp->raw_data_payload_fragment) 
                                                ^ (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                                   >> 0x17U)))
                                               ? 0x864cfbU
                                               : 0U)))),24);
        vcdp->chgBit(c+4537,((((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_0_valid) 
                               & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_raw_data_ready)) 
                              & (IData)(vlTOPp->raw_data_payload_last))));
        vcdp->chgBus(c+4545,((0xffffU & (((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state) 
                                          << 1U) ^ 
                                         ((1U & ((IData)(vlTOPp->raw_data_payload_fragment) 
                                                 ^ 
                                                 ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state) 
                                                  >> 0xfU)))
                                           ? 0x1021U
                                           : 0U)))),16);
        vcdp->chgBit(c+4553,((((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_1_valid) 
                               & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_raw_data_ready)) 
                              & (IData)(vlTOPp->raw_data_payload_last))));
        vcdp->chgBit(c+4561,(((IData)(vlTOPp->TX__DOT__rate_match_result_data_valid) 
                              & (IData)(vlTOPp->result_data_ready))));
    }
}
