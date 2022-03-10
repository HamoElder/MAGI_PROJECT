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
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 2U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 3U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity 
                                 | (vlTOPp->__Vm_traceActivity 
                                    >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                               >> 3U)) 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
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
                                  >> 4U))))) {
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 1U) | (vlTOPp->__Vm_traceActivity 
                                          >> 2U))))) {
            vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 1U) | (vlTOPp->__Vm_traceActivity 
                                          >> 3U))))) {
            vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__17(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__18(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__19(vlSymsp, vcdp, code);
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
        vcdp->chgBus(c+1,(vlTOPp->TX__DOT__readRsp_data),32);
        vcdp->chgBus(c+9,((0x7fU & (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0))),7);
        vcdp->chgBus(c+17,((0x7fU & (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1))),7);
        vcdp->chgBus(c+25,((0x7fU & (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2))),7);
        vcdp->chgBus(c+33,((0x7fU & (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3))),7);
        vcdp->chgBus(c+41,((0x7fU & (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4))),7);
        vcdp->chgBus(c+49,((0x7fU & (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5))),7);
        vcdp->chgBus(c+57,((0x7fU & (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6))),7);
        vcdp->chgBus(c+65,((0x7fU & (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7))),7);
        vcdp->chgBus(c+73,((0x7fU & (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8))),7);
        vcdp->chgBus(c+81,((0x7fU & (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9))),7);
        vcdp->chgBus(c+89,((0x7fU & (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10))),7);
        vcdp->chgBus(c+97,((0x7fU & (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11))),7);
        vcdp->chgBus(c+105,((0x7fU & (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12))),7);
        vcdp->chgBus(c+113,((0x7fU & (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13))),7);
        vcdp->chgBus(c+121,((0x7fU & (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14))),7);
        vcdp->chgBus(c+129,(((0x7eU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14) 
                                       << 1U)) | (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_15))),7);
        vcdp->chgBit(c+137,(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_0));
        vcdp->chgBit(c+145,(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_1));
        vcdp->chgBit(c+153,(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_2));
        vcdp->chgBit(c+161,(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_3));
        vcdp->chgBit(c+169,(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_4));
        vcdp->chgBit(c+177,(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_5));
        vcdp->chgBit(c+185,(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_6));
        vcdp->chgBit(c+193,(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_7));
        vcdp->chgBit(c+201,(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_8));
        vcdp->chgBit(c+209,(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_9));
        vcdp->chgBit(c+217,(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_10));
        vcdp->chgBit(c+225,(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_11));
        vcdp->chgBit(c+233,(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_12));
        vcdp->chgBit(c+241,(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_13));
        vcdp->chgBit(c+249,(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_14));
        vcdp->chgBit(c+257,(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_15));
    }
}

void VTX::traceChgThis__3(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+265,((((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo_io_pop_valid) 
                              & (~ (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__emitEncoding))) 
                             & (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT___zz_logic_ram_port0))));
    }
}

void VTX::traceChgThis__4(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+273,(vlTOPp->TX__DOT__stream_package_gen_pkg_data_payload_last));
        vcdp->chgBit(c+281,(vlTOPp->TX__DOT__phy_tx_padder_raw_data_ready));
        vcdp->chgBit(c+289,(vlTOPp->TX__DOT__phy_tx_padder_result_data_valid));
        vcdp->chgBit(c+297,((1U & (~ (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+305,(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo_io_pop_valid));
        vcdp->chgBus(c+313,((0xffU & ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ptrMatch)
                                       ? ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_risingOccupancy)
                                           ? 0xc8U : 0U)
                                       : (((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value) 
                                           < (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value))
                                           ? ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value) 
                                              - (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value))
                                           : ((IData)(0xc8U) 
                                              + ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value))))))),8);
        vcdp->chgBus(c+321,((0xffU & ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ptrMatch)
                                       ? ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_risingOccupancy)
                                           ? 0U : 0xc8U)
                                       : (((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value) 
                                           < (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value))
                                           ? ((IData)(0xc8U) 
                                              + ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value)))
                                           : ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value) 
                                              - (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value)))))),8);
        vcdp->chgBit(c+329,(vlTOPp->TX__DOT__phy_tx_crc_raw_data_ready));
        vcdp->chgBit(c+337,(vlTOPp->TX__DOT__phy_tx_crc_result_data_valid));
        vcdp->chgBit(c+345,(vlTOPp->TX__DOT__phy_tx_crc_result_data_payload_last));
        vcdp->chgBit(c+353,((1U & (~ (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+361,(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo_io_pop_valid));
        vcdp->chgBus(c+369,((0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ptrMatch)
                                       ? ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_risingOccupancy)
                                           ? 0xc8U : 0U)
                                       : (((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_value) 
                                           < (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_value))
                                           ? ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_value) 
                                              - (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_value))
                                           : ((IData)(0xc8U) 
                                              + ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_value))))))),8);
        vcdp->chgBus(c+377,((0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ptrMatch)
                                       ? ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_risingOccupancy)
                                           ? 0U : 0xc8U)
                                       : (((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_value) 
                                           < (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_value))
                                           ? ((IData)(0xc8U) 
                                              + ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_value)))
                                           : ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_value) 
                                              - (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_value)))))),8);
        vcdp->chgBit(c+385,((1U & (~ (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+393,(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo_io_pop_valid));
        vcdp->chgBus(c+401,((0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_ptrMatch)
                                       ? ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_risingOccupancy)
                                           ? 0xc8U : 0U)
                                       : (((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_value) 
                                           < (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_value))
                                           ? ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_value) 
                                              - (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_value))
                                           : ((IData)(0xc8U) 
                                              + ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_value))))))),8);
        vcdp->chgBus(c+409,((0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_ptrMatch)
                                       ? ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_risingOccupancy)
                                           ? 0U : 0xc8U)
                                       : (((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_value) 
                                           < (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_value))
                                           ? ((IData)(0xc8U) 
                                              + ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_value)))
                                           : ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_value) 
                                              - (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_value)))))),8);
        vcdp->chgBit(c+417,((1U & (~ (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+425,(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo_io_pop_valid));
        vcdp->chgBus(c+433,((0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ptrMatch)
                                       ? ((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_risingOccupancy)
                                           ? 0xc8U : 0U)
                                       : (((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_value) 
                                           < (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_value))
                                           ? ((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_value) 
                                              - (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_value))
                                           : ((IData)(0xc8U) 
                                              + ((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_value))))))),8);
        vcdp->chgBus(c+441,((0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ptrMatch)
                                       ? ((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_risingOccupancy)
                                           ? 0U : 0xc8U)
                                       : (((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_value) 
                                           < (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_value))
                                           ? ((IData)(0xc8U) 
                                              + ((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_value)))
                                           : ((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_value) 
                                              - (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_value)))))),8);
        vcdp->chgBit(c+449,(vlTOPp->TX__DOT__phy_header_extender_raw_data_ready));
        vcdp->chgBit(c+457,(vlTOPp->TX__DOT__phy_header_extender_result_data_valid));
        vcdp->chgBit(c+465,(vlTOPp->TX__DOT__phy_header_extender_result_data_payload_last));
        vcdp->chgBus(c+473,(vlTOPp->TX__DOT__phy_header_extender_result_data_payload_fragment),16);
        vcdp->chgBit(c+481,((1U & (~ (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_full)))));
        vcdp->chgBit(c+489,(vlTOPp->TX__DOT__streamFifo_7_io_pop_valid));
        vcdp->chgBus(c+497,((0xffU & ((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_ptrMatch)
                                       ? ((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_risingOccupancy)
                                           ? 0xc8U : 0U)
                                       : (((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_value) 
                                           < (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_value))
                                           ? ((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_value) 
                                              - (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_value))
                                           : ((IData)(0xc8U) 
                                              + ((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_value))))))),8);
        vcdp->chgBus(c+505,((0xffU & ((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_ptrMatch)
                                       ? ((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_risingOccupancy)
                                           ? 0U : 0xc8U)
                                       : (((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_value) 
                                           < (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_value))
                                           ? ((IData)(0xc8U) 
                                              + ((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_value)))
                                           : ((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_value) 
                                              - (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_value)))))),8);
        vcdp->chgBit(c+513,(vlTOPp->TX__DOT__phy_tx_scrambler_result_data_valid));
        vcdp->chgBit(c+521,((1U & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+529,(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo_io_pop_valid));
        vcdp->chgBus(c+537,((0xffU & ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ptrMatch)
                                       ? ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_risingOccupancy)
                                           ? 0xc8U : 0U)
                                       : (((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_value) 
                                           < (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_value))
                                           ? ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_value) 
                                              - (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_value))
                                           : ((IData)(0xc8U) 
                                              + ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_value))))))),8);
        vcdp->chgBus(c+545,((0xffU & ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ptrMatch)
                                       ? ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_risingOccupancy)
                                           ? 0U : 0xc8U)
                                       : (((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_value) 
                                           < (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_value))
                                           ? ((IData)(0xc8U) 
                                              + ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_value)))
                                           : ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_value) 
                                              - (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_value)))))),8);
        vcdp->chgBit(c+553,(vlTOPp->TX__DOT__stream_package_gen__DOT__split_core_split_data_fire));
        vcdp->chgBit(c+561,(((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo_io_pop_valid) 
                             & (IData)(vlTOPp->TX__DOT__phy_tx_padder_raw_data_ready))));
        vcdp->chgBit(c+569,(vlTOPp->TX__DOT__phy_tx_padder__DOT__fill));
        vcdp->chgBit(c+577,(((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_valid) 
                             & (~ (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+585,(((7U != (IData)(vlTOPp->TX__DOT__phy_tx_padder__DOT__counter)) 
                             & ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_valid) 
                                & (~ (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_full))))));
        vcdp->chgBit(c+593,(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+601,(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_valueNext),8);
        vcdp->chgBit(c+609,(((0xc7U == (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+617,(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBit(c+625,(((0xc7U == (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+633,(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+641,(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+649,(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popping));
        vcdp->chgBit(c+657,(((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+665,(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_full));
        vcdp->chgBit(c+673,(((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+681,((((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_valid) 
                              & (~ (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_full))) 
                             & (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_payload_last))));
        vcdp->chgBus(c+689,(vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1_result),32);
        vcdp->chgBit(c+697,(((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo_io_pop_valid) 
                             & (IData)(vlTOPp->TX__DOT__phy_tx_crc_raw_data_ready))));
        vcdp->chgBit(c+705,(((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_valid) 
                             & (~ (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+713,(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+721,(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_valueNext),8);
        vcdp->chgBit(c+729,(((0xc7U == (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+737,(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBit(c+745,(((0xc7U == (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+753,(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+761,(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+769,(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popping));
        vcdp->chgBit(c+777,(((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+785,(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_full));
        vcdp->chgBit(c+793,(((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+801,(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid));
        vcdp->chgBus(c+809,(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment),8);
        vcdp->chgBit(c+817,(((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo_io_pop_valid) 
                             & (~ (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__emitEncoding)))));
        vcdp->chgBit(c+825,(((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid) 
                             & (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__emitEncoding))));
        vcdp->chgBus(c+833,((0x7fU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                      >> 1U))),7);
        vcdp->chgBus(c+841,((0x7fU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                      >> 1U))),7);
        vcdp->chgBus(c+849,((0x7fU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                      >> 1U))),7);
        vcdp->chgBus(c+857,((0x7fU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                      >> 1U))),7);
        vcdp->chgBus(c+865,((0x7fU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                      >> 1U))),7);
        vcdp->chgBus(c+873,((0x7fU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                      >> 1U))),7);
        vcdp->chgBus(c+881,((0x7fU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                      >> 1U))),7);
        vcdp->chgBus(c+889,((0x7fU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                      >> 1U))),7);
        vcdp->chgBus(c+897,(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0),8);
        vcdp->chgBus(c+905,(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1),8);
        vcdp->chgBit(c+913,(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+921,(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_valueNext),8);
        vcdp->chgBit(c+929,(((0xc7U == (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+937,(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+945,(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_valueNext),8);
        vcdp->chgBit(c+953,(((0xc7U == (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+961,(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+969,(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+977,(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popping));
        vcdp->chgBit(c+985,(((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+993,(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_full));
        vcdp->chgBit(c+1001,(((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+1009,(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+1017,(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_valueNext),8);
        vcdp->chgBit(c+1025,(((0xc7U == (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+1033,(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBit(c+1041,(((0xc7U == (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_willIncrement))));
    }
}

void VTX::traceChgThis__6(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1049,(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+1057,(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+1065,(((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+1073,(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_full));
        vcdp->chgBit(c+1081,(((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo_io_pop_valid))));
        vcdp->chgBit(c+1089,(((IData)(vlTOPp->TX__DOT__streamFifo_7_io_pop_valid) 
                              & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__emitHeader)))));
        vcdp->chgBit(c+1097,(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo_io_pop_ready));
        vcdp->chgBit(c+1105,((1U & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_full)))));
        vcdp->chgBit(c+1113,(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo_io_pop_valid));
        vcdp->chgBus(c+1121,((0xffU & ((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ptrMatch)
                                        ? ((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_risingOccupancy)
                                            ? 0x86U
                                            : 0U) : 
                                       (((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value) 
                                         < (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value))
                                         ? ((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value) 
                                            - (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value))
                                         : ((IData)(0x86U) 
                                            + ((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value) 
                                               - (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value))))))),8);
        vcdp->chgBus(c+1129,((0xffU & ((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ptrMatch)
                                        ? ((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_risingOccupancy)
                                            ? 0U : 0x86U)
                                        : (((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value) 
                                            < (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value))
                                            ? ((IData)(0x86U) 
                                               + ((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value) 
                                                  - (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value)))
                                            : ((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value) 
                                               - (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value)))))),8);
        vcdp->chgBit(c+1137,(((IData)(vlTOPp->TX__DOT__streamFifo_7_io_pop_valid) 
                              & (IData)(vlTOPp->TX__DOT__phy_header_extender_raw_data_ready))));
        vcdp->chgBit(c+1145,(((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_valid) 
                              & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+1153,((((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_valid) 
                               & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_full))) 
                              & (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_payload_last))));
        vcdp->chgBit(c+1161,(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+1169,(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_valueNext),8);
        vcdp->chgBit(c+1177,(((0x85U == (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+1185,(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+1193,(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_valueNext),8);
        vcdp->chgBit(c+1201,(((0x85U == (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+1209,(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+1217,(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushing));
        vcdp->chgBit(c+1225,(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popping));
        vcdp->chgBit(c+1233,(((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+1241,(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_full));
        vcdp->chgBit(c+1249,(((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popping))));
        vcdp->chgBit(c+1257,(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+1265,(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_valueNext),8);
        vcdp->chgBit(c+1273,(((0xc7U == (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+1281,(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_willIncrement));
        vcdp->chgBit(c+1289,(((0xc7U == (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+1297,(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_ptrMatch));
        vcdp->chgBit(c+1305,(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushing));
        vcdp->chgBit(c+1313,(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popping));
        vcdp->chgBit(c+1321,(((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+1329,(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_full));
        vcdp->chgBit(c+1337,(((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushing) 
                              != (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popping))));
        vcdp->chgBit(c+1345,(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1_init_state_valid));
        vcdp->chgBit(c+1353,(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+1361,(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_valueNext),8);
        vcdp->chgBit(c+1369,(((0xc7U == (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+1377,(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+1385,(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+1393,(((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+1401,(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_full));
    }
}

void VTX::traceChgThis__7(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1409,((0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_crc__DOT__emitCrc)
                                        ? ((0U == (IData)(vlTOPp->TX__DOT__phy_tx_crc__DOT__counter))
                                            ? vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1_result
                                            : ((1U 
                                                == (IData)(vlTOPp->TX__DOT__phy_tx_crc__DOT__counter))
                                                ? (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1_result 
                                                   >> 8U)
                                                : (
                                                   (2U 
                                                    == (IData)(vlTOPp->TX__DOT__phy_tx_crc__DOT__counter))
                                                    ? 
                                                   (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1_result 
                                                    >> 0x10U)
                                                    : 
                                                   (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1_result 
                                                    >> 0x18U))))
                                        : ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_logic_ram_port0) 
                                           >> 1U)))),8);
        vcdp->chgBit(c+1417,((((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo_io_pop_valid) 
                               & (IData)(vlTOPp->TX__DOT__phy_tx_crc_raw_data_ready)) 
                              & (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_logic_ram_port0))));
        vcdp->chgBit(c+1425,((((IData)(vlTOPp->TX__DOT__streamFifo_7_io_pop_valid) 
                               & (IData)(vlTOPp->TX__DOT__phy_header_extender_raw_data_ready)) 
                              & vlTOPp->TX__DOT__streamFifo_7__DOT___zz_logic_ram_port0)));
    }
}

void VTX::traceChgThis__8(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1433,((((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo_io_pop_valid) 
                               & (IData)(vlTOPp->TX__DOT__phy_tx_scrambler_raw_data_ready)) 
                              & vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT___zz_logic_ram_port0)));
    }
}

void VTX::traceChgThis__9(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1441,(((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo_io_pop_valid) 
                              & (IData)(vlTOPp->TX__DOT__phy_tx_scrambler_raw_data_ready))));
        vcdp->chgBit(c+1449,(((0xc7U == (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+1457,(((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popping))));
    }
}

void VTX::traceChgThis__10(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1465,((((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_valid) 
                               & (~ (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_full))) 
                              & (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_payload_last))));
    }
}

void VTX::traceChgThis__11(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1473,(vlTOPp->TX__DOT__phy_tx_scrambler_raw_data_ready));
        vcdp->chgBit(c+1481,(vlTOPp->TX__DOT__writeJoinEvent_valid));
        vcdp->chgBit(c+1489,(vlTOPp->TX__DOT___zz_writeJoinEvent_translated_ready));
        vcdp->chgBit(c+1497,(vlTOPp->TX__DOT__writeJoinEvent_fire));
        vcdp->chgBit(c+1505,(((IData)(vlTOPp->TX__DOT__writeJoinEvent_valid) 
                              & (IData)(vlTOPp->TX__DOT___zz_writeJoinEvent_translated_ready))));
        vcdp->chgBit(c+1513,(vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire));
        vcdp->chgBit(c+1521,(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1_scram_data_ready));
        vcdp->chgBit(c+1529,(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+1537,(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_valueNext),8);
        vcdp->chgBit(c+1545,(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popping));
    }
}

void VTX::traceChgThis__12(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1553,(vlTOPp->TX__DOT__phy_tx_padder_result_data_payload_last));
        vcdp->chgBus(c+1561,(vlTOPp->TX__DOT__phy_tx_padder_result_data_payload_fragment),8);
        vcdp->chgBus(c+1569,(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_valueNext),8);
        vcdp->chgBus(c+1577,(((0x80000000U & ((~ vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8) 
                                              << 0x1fU)) 
                              | ((0x40000000U & ((~ 
                                                  (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                   >> 1U)) 
                                                 << 0x1eU)) 
                                 | ((0x20000000U & 
                                     ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                          >> 2U)) << 0x1dU)) 
                                    | ((0x10000000U 
                                        & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                               >> 3U)) 
                                           << 0x1cU)) 
                                       | ((0x8000000U 
                                           & ((~ (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                  >> 4U)) 
                                              << 0x1bU)) 
                                          | ((0x4000000U 
                                              & ((~ 
                                                  (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                   >> 5U)) 
                                                 << 0x1aU)) 
                                             | ((0x2000000U 
                                                 & ((~ 
                                                     (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                      >> 6U)) 
                                                    << 0x19U)) 
                                                | ((0x1000000U 
                                                    & ((~ 
                                                        (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                         >> 7U)) 
                                                       << 0x18U)) 
                                                   | ((0x800000U 
                                                       & ((~ 
                                                           (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                            >> 8U)) 
                                                          << 0x17U)) 
                                                      | ((0x400000U 
                                                          & ((~ 
                                                              (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                               >> 9U)) 
                                                             << 0x16U)) 
                                                         | ((0x200000U 
                                                             & ((~ 
                                                                 (vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                  >> 0xaU)) 
                                                                << 0x15U)) 
                                                            | vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT___zz_resultNext_2)))))))))))),32);
        vcdp->chgBus(c+1585,(vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8),32);
        vcdp->chgBus(c+1593,(vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_7),32);
        vcdp->chgBus(c+1601,(vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_6),32);
        vcdp->chgBus(c+1609,(vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5),32);
        vcdp->chgBus(c+1617,(vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4),32);
        vcdp->chgBus(c+1625,(vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_3),32);
        vcdp->chgBus(c+1633,(vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_2),32);
        vcdp->chgBus(c+1641,(vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_1),32);
        vcdp->chgBus(c+1649,((~ vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8)),32);
        vcdp->chgBus(c+1657,(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_valueNext),8);
        vcdp->chgBus(c+1665,(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_valueNext),8);
        vcdp->chgBus(c+1673,(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_valueNext),8);
    }
}

void VTX::traceChgThis__14(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1681,((0xffU & vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__data_buf)),8);
        vcdp->chgBus(c+1689,(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data),16);
        vcdp->chgBit(c+1697,((1U & (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT___zz_logic_ram_port0))));
        vcdp->chgBus(c+1705,((0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT___zz_logic_ram_port0) 
                                       >> 1U))),8);
        vcdp->chgBus(c+1713,((((0x8000U & (IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment)) 
                               | ((0x4000U & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                              << 7U)) 
                                  | ((0x2000U & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                 >> 1U)) 
                                     | ((0x1000U & 
                                         ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                          << 6U)) | 
                                        (0x800U & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                   >> 2U)))))) 
                              | ((0x400U & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                            << 5U)) 
                                 | ((0x200U & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                               >> 3U)) 
                                    | ((0x100U & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                  << 4U)) 
                                       | ((0x80U & 
                                           ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                            >> 4U)) 
                                          | ((0x40U 
                                              & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                 << 3U)) 
                                             | ((0x20U 
                                                 & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                    >> 5U)) 
                                                | ((0x10U 
                                                    & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                       << 2U)) 
                                                   | ((8U 
                                                       & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                          >> 6U)) 
                                                      | ((4U 
                                                          & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                             << 1U)) 
                                                         | ((2U 
                                                             & ((IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                                >> 7U)) 
                                                            | (1U 
                                                               & (IData)(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment)))))))))))))),16);
        vcdp->chgBus(c+1721,(vlTOPp->TX__DOT__clkCrossing_2__DOT__area_clkO_buf1),7);
        vcdp->chgBus(c+1729,(vlTOPp->TX__DOT__clkCrossing_3__DOT__area_clkO_buf1),7);
        vcdp->chgBus(c+1737,(vlTOPp->TX__DOT__axil4Ctrl_ar_rData_addr),8);
        vcdp->chgBus(c+1745,(vlTOPp->TX__DOT__axil4Ctrl_ar_rData_prot),3);
        vcdp->chgBus(c+1753,(vlTOPp->TX__DOT__stream_package_gen__DOT__strb_buf),4);
        vcdp->chgBit(c+1761,((1U & (IData)(vlTOPp->TX__DOT__stream_package_gen__DOT__strb_buf))));
        vcdp->chgBus(c+1769,(vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__data_buf),32);
        vcdp->chgBus(c+1777,(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_fragment),16);
        vcdp->chgBit(c+1785,((1U & vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_logic_ram_port0)));
        vcdp->chgBus(c+1793,((0xffffU & (vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_logic_ram_port0 
                                         >> 1U))),16);
        vcdp->chgBus(c+1801,(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_data),16);
        vcdp->chgBus(c+1809,(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state),7);
        vcdp->chgBus(c+1817,(vlTOPp->TX__DOT_____05Fslices_limit_driver),7);
        vcdp->chgBus(c+1825,(vlTOPp->TX__DOT__clkCrossing_2__DOT__area_clkI_reg),7);
        vcdp->chgBus(c+1833,(vlTOPp->TX__DOT__clkCrossing_2__DOT__area_clkO_buf0),7);
        vcdp->chgBus(c+1841,(vlTOPp->TX__DOT__clkCrossing_3__DOT__area_clkI_reg),7);
        vcdp->chgBus(c+1849,(vlTOPp->TX__DOT__clkCrossing_3__DOT__area_clkO_buf0),7);
    }
}

void VTX::traceChgThis__15(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1857,(((0U != (IData)(vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__cnt)) 
                              & (IData)(vlTOPp->TX__DOT__stream_package_gen__DOT__strb_buf))));
    }
}

void VTX::traceChgThis__16(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1865,((0xffffU & ((IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_data) 
                                         ^ (vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT___zz_logic_ram_port0 
                                            >> 1U)))),16);
    }
}

void VTX::traceChgThis__17(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp20[3];
    // Body
    {
        vcdp->chgBus(c+1873,(vlTOPp->TX__DOT__stream_package_gen__DOT__pkg_slices_cnt),7);
        vcdp->chgBit(c+1881,((0U == (IData)(vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__cnt))));
        vcdp->chgBit(c+1889,((1U & (~ (IData)(vlTOPp->TX__DOT__phy_tx_encoder__DOT__emitEncoding)))));
        vcdp->chgBit(c+1897,(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data_valid_1));
        vcdp->chgBit(c+1905,(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__raw_data_payload_last_regNext));
        vcdp->chgBit(c+1913,(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_valid_1));
        vcdp->chgBit(c+1921,(vlTOPp->TX__DOT__phy_tx_puncher__DOT__raw_data_last));
        vcdp->chgBit(c+1929,((1U & (~ (IData)(vlTOPp->TX__DOT___zz_axil4Ctrl_bvalid_2)))));
        vcdp->chgBit(c+1937,(vlTOPp->TX__DOT__axil4Ctrl_ar_rValid));
        vcdp->chgBit(c+1945,((1U & (~ (IData)(vlTOPp->TX__DOT__axil4Ctrl_ar_rValid)))));
        vcdp->chgBit(c+1953,((0U != (IData)(vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__cnt))));
        vcdp->chgBit(c+1961,(vlTOPp->TX__DOT__stream_package_gen__DOT__raw_data_last));
        vcdp->chgBus(c+1969,(vlTOPp->TX__DOT__stream_package_gen__DOT__split_core__DOT__cnt),3);
        vcdp->chgBus(c+1977,(vlTOPp->TX__DOT__phy_tx_padder__DOT__counter),3);
        vcdp->chgBit(c+1985,((7U == (IData)(vlTOPp->TX__DOT__phy_tx_padder__DOT__counter))));
        vcdp->chgBit(c+1993,(vlTOPp->TX__DOT__phy_tx_padder__DOT__raw_data_payload_first));
        vcdp->chgBit(c+2001,((7U != (IData)(vlTOPp->TX__DOT__phy_tx_padder__DOT__counter))));
        vcdp->chgBus(c+2009,(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value),8);
        vcdp->chgBit(c+2017,((0xc7U == (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2025,(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value),8);
        vcdp->chgBit(c+2033,((0xc7U == (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2041,(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2049,((0xffU & ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value)))),8);
        vcdp->chgBit(c+2057,(vlTOPp->TX__DOT__phy_tx_crc__DOT__emitCrc));
        vcdp->chgBus(c+2065,(vlTOPp->TX__DOT__phy_tx_crc__DOT__counter),2);
        vcdp->chgBit(c+2073,((1U & (~ (IData)(vlTOPp->TX__DOT__phy_tx_crc__DOT__emitCrc)))));
        vcdp->chgBit(c+2081,((3U == (IData)(vlTOPp->TX__DOT__phy_tx_crc__DOT__counter))));
        vcdp->chgBus(c+2089,(vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state),32);
        vcdp->chgBus(c+2097,((~ vlTOPp->TX__DOT__phy_tx_crc__DOT__crc_1__DOT__state)),32);
        vcdp->chgBus(c+2105,(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_value),8);
        vcdp->chgBit(c+2113,((0xc7U == (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2121,(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_value),8);
        vcdp->chgBit(c+2129,((0xc7U == (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2137,(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2145,((0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT__logic_popPtr_value)))),8);
        vcdp->chgBit(c+2153,(vlTOPp->TX__DOT__phy_tx_encoder__DOT__emitEncoding));
        vcdp->chgBit(c+2161,(vlTOPp->TX__DOT__phy_tx_encoder__DOT__emitEncoding));
        vcdp->chgBus(c+2169,(vlTOPp->TX__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__r_enc_buf),7);
        vcdp->chgBus(c+2177,(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_value),8);
        vcdp->chgBit(c+2185,((0xc7U == (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2193,(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_value),8);
        vcdp->chgBit(c+2201,((0xc7U == (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2209,(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2217,((0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->TX__DOT__phy_tx_crc_result_data_fifo__DOT__logic_popPtr_value)))),8);
        vcdp->chgBus(c+2225,(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_value),8);
        vcdp->chgBit(c+2233,((0xc7U == (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2241,(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_value),8);
        vcdp->chgBit(c+2249,((0xc7U == (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2257,(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2265,((0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT__logic_popPtr_value)))),8);
        vcdp->chgBus(c+2273,(vlTOPp->TX__DOT__phy_header_extender__DOT__counter),8);
        vcdp->chgBit(c+2281,(vlTOPp->TX__DOT__phy_header_extender__DOT__emitHeader));
        vcdp->chgBus(c+2289,(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status),2);
        vcdp->chgQuad(c+2297,(((0U == (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))
                                ? VL_ULL(0x49444c452020)
                                : ((1U == (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))
                                    ? VL_ULL(0x484541444552)
                                    : ((2U == (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__header_status))
                                        ? VL_ULL(0x444154412020)
                                        : VL_ULL(0x3f3f3f3f3f3f))))),48);
        vcdp->chgBus(c+2313,(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value),8);
        vcdp->chgBit(c+2321,((0x85U == (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2329,(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value),8);
        vcdp->chgBit(c+2337,((0x85U == (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2345,(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2353,((0xffU & ((IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->TX__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value)))),8);
        vcdp->chgBus(c+2361,(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_value),8);
        vcdp->chgBit(c+2369,((0xc7U == (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2377,(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_value),8);
        vcdp->chgBit(c+2385,((0xc7U == (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2393,(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2401,((0xffU & ((IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->TX__DOT__streamFifo_7__DOT__logic_popPtr_value)))),8);
        vcdp->chgBit(c+2409,(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_valid));
        vcdp->chgBus(c+2417,(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status),2);
        __Vtemp20[0U] = ((0U == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))
                          ? 0x20202020U : ((1U == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))
                                            ? 0x4c494e47U
                                            : ((2U 
                                                == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))
                                                ? 0x31202020U
                                                : 0x3f3f3f3fU)));
        __Vtemp20[1U] = ((0U == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))
                          ? 0x4c452020U : ((1U == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))
                                            ? 0x52414d42U
                                            : ((2U 
                                                == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))
                                                ? 0x4e414c5fU
                                                : 0x3f3f3f3fU)));
        __Vtemp20[2U] = ((0U == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))
                          ? 0x4944U : ((1U == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))
                                        ? 0x5343U : 
                                       ((2U == (IData)(vlTOPp->TX__DOT__phy_tx_scrambler__DOT__scrambler_status))
                                         ? 0x4649U : 0x3f3fU)));
        vcdp->chgArray(c+2425,(__Vtemp20),80);
        vcdp->chgBus(c+2449,(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_value),8);
        vcdp->chgBit(c+2457,((0xc7U == (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+2465,(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_value),8);
        vcdp->chgBit(c+2473,((0xc7U == (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+2481,(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+2489,((0xffU & ((IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT__logic_popPtr_value)))),8);
    }
}

void VTX::traceChgThis__18(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2497,((1U & (IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_logic_ram_port0))));
        vcdp->chgBus(c+2505,((0xffU & ((IData)(vlTOPp->TX__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_logic_ram_port0) 
                                       >> 1U))),8);
        vcdp->chgBit(c+2513,((1U & (IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_logic_ram_port0))));
        vcdp->chgBus(c+2521,((0xffU & ((IData)(vlTOPp->TX__DOT__phy_tx_padder_result_data_fifo__DOT___zz_logic_ram_port0) 
                                       >> 1U))),8);
        vcdp->chgBit(c+2529,((1U & vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT___zz_logic_ram_port0)));
        vcdp->chgBus(c+2537,((0xffffU & (vlTOPp->TX__DOT__phy_tx_encoder_result_data_fifo__DOT___zz_logic_ram_port0 
                                         >> 1U))),16);
        vcdp->chgBit(c+2545,((1U & vlTOPp->TX__DOT__streamFifo_7__DOT___zz_logic_ram_port0)));
        vcdp->chgBus(c+2553,((0xffffU & (vlTOPp->TX__DOT__streamFifo_7__DOT___zz_logic_ram_port0 
                                         >> 1U))),16);
        vcdp->chgBit(c+2561,((1U & vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT___zz_logic_ram_port0)));
        vcdp->chgBus(c+2569,((0xffffU & (vlTOPp->TX__DOT__phy_header_extender_result_data_fifo__DOT___zz_logic_ram_port0 
                                         >> 1U))),16);
    }
}

void VTX::traceChgThis__19(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2577,(vlTOPp->axil4Ctrl_awvalid));
        vcdp->chgBit(c+2585,(vlTOPp->axil4Ctrl_awready));
        vcdp->chgBus(c+2593,(vlTOPp->axil4Ctrl_awaddr),8);
        vcdp->chgBus(c+2601,(vlTOPp->axil4Ctrl_awprot),3);
        vcdp->chgBit(c+2609,(vlTOPp->axil4Ctrl_wvalid));
        vcdp->chgBit(c+2617,(vlTOPp->axil4Ctrl_wready));
        vcdp->chgBus(c+2625,(vlTOPp->axil4Ctrl_wdata),32);
        vcdp->chgBus(c+2633,(vlTOPp->axil4Ctrl_wstrb),4);
        vcdp->chgBit(c+2641,(vlTOPp->axil4Ctrl_bvalid));
        vcdp->chgBit(c+2649,(vlTOPp->axil4Ctrl_bready));
        vcdp->chgBus(c+2657,(vlTOPp->axil4Ctrl_bresp),2);
        vcdp->chgBit(c+2665,(vlTOPp->axil4Ctrl_arvalid));
        vcdp->chgBit(c+2673,(vlTOPp->axil4Ctrl_arready));
        vcdp->chgBus(c+2681,(vlTOPp->axil4Ctrl_araddr),8);
        vcdp->chgBus(c+2689,(vlTOPp->axil4Ctrl_arprot),3);
        vcdp->chgBit(c+2697,(vlTOPp->axil4Ctrl_rvalid));
        vcdp->chgBit(c+2705,(vlTOPp->axil4Ctrl_rready));
        vcdp->chgBus(c+2713,(vlTOPp->axil4Ctrl_rdata),32);
        vcdp->chgBus(c+2721,(vlTOPp->axil4Ctrl_rresp),2);
        vcdp->chgBit(c+2729,(vlTOPp->raw_data_tvalid));
        vcdp->chgBit(c+2737,(vlTOPp->raw_data_tready));
        vcdp->chgBus(c+2745,(vlTOPp->raw_data_tdata),32);
        vcdp->chgBus(c+2753,(vlTOPp->raw_data_tstrb),4);
        vcdp->chgBus(c+2761,(vlTOPp->raw_data_tkeep),4);
        vcdp->chgBit(c+2769,(vlTOPp->raw_data_tlast));
        vcdp->chgBit(c+2777,(vlTOPp->coded_data_valid));
        vcdp->chgBit(c+2785,(vlTOPp->coded_data_ready));
        vcdp->chgBit(c+2793,(vlTOPp->coded_data_payload_last));
        vcdp->chgBus(c+2801,(vlTOPp->coded_data_payload_fragment),16);
        vcdp->chgBit(c+2809,(vlTOPp->clk));
        vcdp->chgBit(c+2817,(vlTOPp->reset));
        vcdp->chgBit(c+2825,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
                              & (IData)(vlTOPp->axil4Ctrl_rready))));
    }
}
