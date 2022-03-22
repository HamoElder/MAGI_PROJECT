// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTXSim__Syms.h"


//======================

void VTXSim::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTXSim* t = (VTXSim*)userthis;
    VTXSim__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VTXSim::traceChgThis(VTXSim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity 
                                 | (vlTOPp->__Vm_traceActivity 
                                    >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                               >> 2U)) 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 3U))))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity 
                                 | (vlTOPp->__Vm_traceActivity 
                                    >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                               >> 3U)) 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 4U))))) {
            vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 5U))))) {
            vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__18(vlSymsp, vcdp, code);
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
            vlTOPp->traceChgThis__23(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 2U) | (vlTOPp->__Vm_traceActivity 
                                          >> 3U))))) {
            vlTOPp->traceChgThis__24(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__26(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x20U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__27(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__28(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTXSim::traceChgThis__2(VTXSim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,((0x7fU & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_0))),7);
        vcdp->chgBus(c+9,((0x7fU & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_1))),7);
        vcdp->chgBus(c+17,((0x7fU & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_2))),7);
        vcdp->chgBus(c+25,((0x7fU & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_3))),7);
        vcdp->chgBus(c+33,((0x7fU & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_4))),7);
        vcdp->chgBus(c+41,((0x7fU & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_5))),7);
        vcdp->chgBus(c+49,((0x7fU & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_6))),7);
        vcdp->chgBus(c+57,((0x7fU & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_7))),7);
        vcdp->chgBus(c+65,((0x7fU & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_8))),7);
        vcdp->chgBus(c+73,((0x7fU & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_9))),7);
        vcdp->chgBus(c+81,((0x7fU & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_10))),7);
        vcdp->chgBus(c+89,((0x7fU & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_11))),7);
        vcdp->chgBus(c+97,((0x7fU & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_12))),7);
        vcdp->chgBus(c+105,((0x7fU & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_13))),7);
        vcdp->chgBus(c+113,((0x7fU & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14))),7);
        vcdp->chgBus(c+121,(((0x7eU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT___zz_r_scr_14) 
                                       << 1U)) | (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_15))),7);
        vcdp->chgBit(c+129,(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_0));
        vcdp->chgBit(c+137,(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_1));
        vcdp->chgBit(c+145,(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_2));
        vcdp->chgBit(c+153,(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_3));
        vcdp->chgBit(c+161,(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_4));
        vcdp->chgBit(c+169,(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_5));
        vcdp->chgBit(c+177,(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_6));
        vcdp->chgBit(c+185,(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_7));
        vcdp->chgBit(c+193,(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_8));
        vcdp->chgBit(c+201,(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_9));
        vcdp->chgBit(c+209,(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_10));
        vcdp->chgBit(c+217,(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_11));
        vcdp->chgBit(c+225,(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_12));
        vcdp->chgBit(c+233,(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_13));
        vcdp->chgBit(c+241,(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_14));
        vcdp->chgBit(c+249,(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__feed_back_15));
    }
}

void VTXSim::traceChgThis__3(VTXSim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+257,(((IData)(vlTOPp->TXSim__DOT__phy_tx_front_raw_data_valid)
                              ? (0xfffU & (vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                                           >> 1U)) : 0U)),12);
        vcdp->chgBus(c+265,(((IData)(vlTOPp->TXSim__DOT__phy_tx_front_raw_data_valid)
                              ? (0xfffU & (vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                                           >> 0xdU))
                              : 0U)),12);
        vcdp->chgBit(c+273,((((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_raw_data_valid) 
                              & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__emitEncoding))) 
                             & (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_logic_ram_port0))));
    }
}

void VTXSim::traceChgThis__4(VTXSim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+281,((0xfffU & ((VL_MULS_III(19,19,19, 
                                                    (0x7ffffU 
                                                     & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                    (0x7ffffU 
                                                     & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_32)))) 
                                        + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_98__DOT__previous_adder_data) 
                                       >> 7U))),12);
        vcdp->chgBus(c+289,((0xfffU & ((VL_MULS_III(19,19,19, 
                                                    (0x7ffffU 
                                                     & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                    (0x7ffffU 
                                                     & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_32)))) 
                                        + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_131__DOT__previous_adder_data) 
                                       >> 7U))),12);
        vcdp->chgBus(c+297,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                     (0x7ffffU 
                                                      & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                     (0x7ffffU 
                                                      & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_32)))) 
                                         + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_98__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+305,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                     (0x7ffffU 
                                                      & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                     (0x7ffffU 
                                                      & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_32)))) 
                                         + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_131__DOT__previous_adder_data))),19);
    }
}

void VTXSim::traceChgThis__5(VTXSim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+313,(vlTOPp->TXSim__DOT__phy_tx_padder_raw_data_valid));
        vcdp->chgBit(c+321,(((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_raw_data_ready) 
                             & (~ (IData)(vlTOPp->TXSim__DOT__pipeline_halt)))));
        vcdp->chgBit(c+329,(vlTOPp->TXSim__DOT__phy_tx_crc_raw_data_valid));
        vcdp->chgBit(c+337,(((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_raw_data_ready) 
                             & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                                   >> 1U)))));
        vcdp->chgBit(c+345,(vlTOPp->TXSim__DOT__phy_tx_encoder_raw_data_valid));
        vcdp->chgBit(c+353,((1U & ((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__emitEncoding)) 
                                   & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                                         >> 2U))))));
        vcdp->chgBit(c+361,(((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability_io_pop_valid) 
                             & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                                   >> 3U)))));
        vcdp->chgBit(c+369,((1U & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                                      >> 3U)))));
        vcdp->chgBit(c+377,(vlTOPp->TXSim__DOT__phy_header_extender_raw_data_valid));
        vcdp->chgBit(c+385,(((IData)(vlTOPp->TXSim__DOT__phy_header_extender_raw_data_ready) 
                             & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                                   >> 4U)))));
        vcdp->chgBit(c+393,(vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_valid));
        vcdp->chgBit(c+401,(((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_ready) 
                             & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                                   >> 5U)))));
        vcdp->chgBit(c+409,(((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability_io_pop_valid) 
                             & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                                   >> 6U)))));
        vcdp->chgBit(c+417,(vlTOPp->TXSim__DOT__phy_tx_oversampling_raw_data_valid));
        vcdp->chgBit(c+425,(((IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling_raw_data_ready) 
                             & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                                   >> 7U)))));
        vcdp->chgBit(c+433,(vlTOPp->TXSim__DOT__stf_preamble_adder_raw_data_valid));
        vcdp->chgBit(c+441,(((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_raw_data_ready) 
                             & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                                   >> 8U)))));
        vcdp->chgBit(c+449,(vlTOPp->TXSim__DOT__phy_tx_front_raw_data_valid));
        vcdp->chgBit(c+457,((1U & ((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full)) 
                                   & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                                         >> 9U))))));
        vcdp->chgBit(c+465,(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_payload_last));
        vcdp->chgBit(c+473,(vlTOPp->TXSim__DOT__phy_tx_padder_raw_data_ready));
        vcdp->chgBit(c+481,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_valid));
        vcdp->chgBit(c+489,((1U & (~ (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+497,(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo_io_pop_valid));
        vcdp->chgBus(c+505,((0x3ffU & ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ptrMatch)
                                        ? ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_risingOccupancy)
                                            ? 0x3e8U
                                            : 0U) : 
                                       (((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value) 
                                         < (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value))
                                         ? ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value) 
                                            - (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value))
                                         : ((IData)(0x3e8U) 
                                            + ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value) 
                                               - (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value))))))),10);
        vcdp->chgBus(c+513,((0x3ffU & ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ptrMatch)
                                        ? ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_risingOccupancy)
                                            ? 0U : 0x3e8U)
                                        : (((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value) 
                                            < (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value))
                                            ? ((IData)(0x3e8U) 
                                               + ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value) 
                                                  - (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value)))
                                            : ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value) 
                                               - (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value)))))),10);
        vcdp->chgBit(c+521,(vlTOPp->TXSim__DOT__phy_tx_crc_raw_data_ready));
        vcdp->chgBit(c+529,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_valid));
        vcdp->chgBit(c+537,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_payload_last));
        vcdp->chgBit(c+545,((1U & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full)))));
        vcdp->chgBit(c+553,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability_io_pop_valid));
        vcdp->chgBus(c+561,(((((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value))))),6);
        vcdp->chgBus(c+569,(((((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))),6);
        vcdp->chgBit(c+577,((1U & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full)))));
        vcdp->chgBit(c+585,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability_io_pop_valid));
        vcdp->chgBus(c+593,(((((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_value))))),6);
        vcdp->chgBus(c+601,(((((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))),6);
        vcdp->chgBit(c+609,((1U & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_full)))));
        vcdp->chgBit(c+617,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability_io_pop_valid));
        vcdp->chgBus(c+625,(((((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_value))))),6);
        vcdp->chgBus(c+633,(((((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))),6);
        vcdp->chgBit(c+641,(vlTOPp->TXSim__DOT__phy_header_extender_raw_data_ready));
        vcdp->chgBit(c+649,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_valid));
        vcdp->chgBit(c+657,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_payload_last));
        vcdp->chgBus(c+665,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_payload_fragment),16);
        vcdp->chgBit(c+673,((1U & (~ (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_full)))));
        vcdp->chgBit(c+681,(vlTOPp->TXSim__DOT__streamFifo_12_io_pop_valid));
        vcdp->chgBus(c+689,(((((IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_value))))),6);
        vcdp->chgBus(c+697,(((((~ (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_value))))),6);
        vcdp->chgBit(c+705,(vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_ready));
        vcdp->chgBit(c+713,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_valid));
        vcdp->chgBit(c+721,((1U & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full)))));
        vcdp->chgBit(c+729,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability_io_pop_valid));
        vcdp->chgBus(c+737,(((((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value))))),6);
        vcdp->chgBus(c+745,(((((~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))),6);
        vcdp->chgBit(c+753,((1U & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_full)))));
        vcdp->chgBit(c+761,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability_io_pop_valid));
        vcdp->chgBus(c+769,(((((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value))))),6);
        vcdp->chgBus(c+777,(((((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))),6);
        vcdp->chgBit(c+785,(vlTOPp->TXSim__DOT__phy_tx_oversampling_raw_data_ready));
        vcdp->chgBit(c+793,(vlTOPp->TXSim__DOT__phy_tx_oversampling_result_data_valid));
        vcdp->chgBit(c+801,((1U & (~ (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_full)))));
        vcdp->chgBit(c+809,(vlTOPp->TXSim__DOT__streamFifo_13_io_pop_valid));
        vcdp->chgBus(c+817,(((((IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_value))))),6);
        vcdp->chgBus(c+825,(((((~ (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_value))))),6);
        vcdp->chgBit(c+833,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid));
        vcdp->chgBit(c+841,(vlTOPp->TXSim__DOT__stf_preamble_adder_raw_data_ready));
        vcdp->chgBit(c+849,((1U & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full)))));
        vcdp->chgBit(c+857,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability_io_pop_valid));
        vcdp->chgBus(c+865,(((((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value))))),6);
        vcdp->chgBus(c+873,(((((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))),6);
        vcdp->chgBit(c+881,((1U & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full)))));
        vcdp->chgBit(c+889,((1U & (~ (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_full)))));
        vcdp->chgBit(c+897,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability_io_pop_valid));
        vcdp->chgBus(c+905,(((((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_value))))),6);
        vcdp->chgBus(c+913,(((((~ (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_value))))),6);
        vcdp->chgBit(c+921,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability_io_pop_valid));
        vcdp->chgBus(c+929,(((((IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_value))))),6);
        vcdp->chgBus(c+937,(((((~ (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ptrMatch)) 
                              << 5U) | (0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value))))),6);
        vcdp->chgBus(c+945,(vlTOPp->TXSim__DOT__pipeline_halt),10);
        vcdp->chgBit(c+953,(vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core_split_data_fire));
        vcdp->chgBit(c+961,(((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_raw_data_valid) 
                             & (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_raw_data_ready))));
        vcdp->chgBit(c+969,(vlTOPp->TXSim__DOT__phy_tx_padder__DOT__fill));
        vcdp->chgBit(c+977,(((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_valid) 
                             & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full)))));
        vcdp->chgBit(c+985,(((7U != (IData)(vlTOPp->TXSim__DOT__phy_tx_padder__DOT__counter)) 
                             & ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_valid) 
                                & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full))))));
        vcdp->chgBit(c+993,(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+1001,(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_valueNext),10);
        vcdp->chgBit(c+1009,(((0x3e7U == (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+1017,(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBit(c+1025,(((0x3e7U == (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+1033,(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+1041,(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+1049,(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popping));
        vcdp->chgBit(c+1057,(((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+1065,(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_full));
        vcdp->chgBit(c+1073,(((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+1081,((((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_valid) 
                               & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full))) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_payload_last))));
        vcdp->chgBus(c+1089,(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1_result),32);
        vcdp->chgBit(c+1097,(((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_raw_data_valid) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_raw_data_ready))));
        vcdp->chgBit(c+1105,(((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_valid) 
                              & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full)))));
        vcdp->chgBit(c+1113,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+1121,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext),5);
        vcdp->chgBit(c+1129,(((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+1137,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement));
        vcdp->chgBit(c+1145,(((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+1153,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch));
        vcdp->chgBit(c+1161,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushing));
        vcdp->chgBit(c+1169,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popping));
        vcdp->chgBit(c+1177,(((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))));
    }
}

void VTXSim::traceChgThis__7(VTXSim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1185,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full));
        vcdp->chgBit(c+1193,(((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushing) 
                              != (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popping))));
        vcdp->chgBit(c+1201,(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid));
        vcdp->chgBus(c+1209,(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_payload_fragment),8);
        vcdp->chgBit(c+1217,(((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_raw_data_valid) 
                              & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__emitEncoding)))));
        vcdp->chgBit(c+1225,(((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder_raw_data_valid) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__emitEncoding))));
        vcdp->chgBus(c+1233,((0x7fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_0) 
                                       >> 1U))),7);
        vcdp->chgBus(c+1241,((0x7fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_1) 
                                       >> 1U))),7);
        vcdp->chgBus(c+1249,((0x7fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_2) 
                                       >> 1U))),7);
        vcdp->chgBus(c+1257,((0x7fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_3) 
                                       >> 1U))),7);
        vcdp->chgBus(c+1265,((0x7fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_4) 
                                       >> 1U))),7);
        vcdp->chgBus(c+1273,((0x7fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_5) 
                                       >> 1U))),7);
        vcdp->chgBus(c+1281,((0x7fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_6) 
                                       >> 1U))),7);
        vcdp->chgBus(c+1289,((0x7fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT___zz_r_enc_7) 
                                       >> 1U))),7);
        vcdp->chgBus(c+1297,(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_0),8);
        vcdp->chgBus(c+1305,(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__code_vec_1),8);
        vcdp->chgBit(c+1313,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+1321,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext),5);
        vcdp->chgBit(c+1329,(((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+1337,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+1345,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext),5);
        vcdp->chgBit(c+1353,(((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+1361,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ptrMatch));
        vcdp->chgBit(c+1369,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushing));
        vcdp->chgBit(c+1377,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popping));
        vcdp->chgBit(c+1385,(((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+1393,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_full));
        vcdp->chgBit(c+1401,(((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushing) 
                              != (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popping))));
        vcdp->chgBit(c+1409,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+1417,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext),5);
        vcdp->chgBit(c+1425,(((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+1433,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement));
        vcdp->chgBit(c+1441,(((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+1449,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ptrMatch));
        vcdp->chgBit(c+1457,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushing));
        vcdp->chgBit(c+1465,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popping));
        vcdp->chgBit(c+1473,(((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+1481,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_full));
        vcdp->chgBit(c+1489,(((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushing) 
                              != (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popping))));
        vcdp->chgBit(c+1497,(((IData)(vlTOPp->TXSim__DOT__phy_header_extender_raw_data_valid) 
                              & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__emitHeader)))));
        vcdp->chgBit(c+1505,(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo_io_pop_ready));
        vcdp->chgBit(c+1513,((1U & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_full)))));
        vcdp->chgBit(c+1521,(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo_io_pop_valid));
        vcdp->chgBus(c+1529,((0xffU & ((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ptrMatch)
                                        ? ((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_risingOccupancy)
                                            ? 0x86U
                                            : 0U) : 
                                       (((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value) 
                                         < (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value))
                                         ? ((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value) 
                                            - (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value))
                                         : ((IData)(0x86U) 
                                            + ((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value) 
                                               - (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value))))))),8);
        vcdp->chgBus(c+1537,((0xffU & ((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ptrMatch)
                                        ? ((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_risingOccupancy)
                                            ? 0U : 0x86U)
                                        : (((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value) 
                                            < (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value))
                                            ? ((IData)(0x86U) 
                                               + ((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value) 
                                                  - (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value)))
                                            : ((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value) 
                                               - (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value)))))),8);
        vcdp->chgBit(c+1545,(((IData)(vlTOPp->TXSim__DOT__phy_header_extender_raw_data_valid) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_header_extender_raw_data_ready))));
        vcdp->chgBit(c+1553,(((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_valid) 
                              & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full)))));
        vcdp->chgBit(c+1561,((((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_valid) 
                               & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full))) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_payload_last))));
        vcdp->chgBit(c+1569,(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+1577,(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_valueNext),8);
        vcdp->chgBit(c+1585,(((0x85U == (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+1593,(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+1601,(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_valueNext),8);
        vcdp->chgBit(c+1609,(((0x85U == (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+1617,(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+1625,(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushing));
        vcdp->chgBit(c+1633,(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popping));
        vcdp->chgBit(c+1641,(((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+1649,(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_full));
        vcdp->chgBit(c+1657,(((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popping))));
        vcdp->chgBit(c+1665,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+1673,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_valueNext),5);
        vcdp->chgBit(c+1681,(((0x1fU == (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+1689,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_willIncrement));
        vcdp->chgBit(c+1697,(((0x1fU == (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+1705,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ptrMatch));
        vcdp->chgBit(c+1713,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushing));
        vcdp->chgBit(c+1721,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popping));
        vcdp->chgBit(c+1729,(((IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+1737,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_full));
        vcdp->chgBit(c+1745,(((IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushing) 
                              != (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popping))));
        vcdp->chgBit(c+1753,(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1_init_state_valid));
        vcdp->chgBit(c+1761,(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1_scram_data_ready));
        vcdp->chgBit(c+1769,(((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_valid) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_ready))));
        vcdp->chgBit(c+1777,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+1785,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext),5);
        vcdp->chgBit(c+1793,(((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+1801,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement));
        vcdp->chgBit(c+1809,(((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+1817,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ptrMatch));
        vcdp->chgBit(c+1825,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushing));
        vcdp->chgBit(c+1833,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popping));
        vcdp->chgBit(c+1841,(((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+1849,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_full));
        vcdp->chgBit(c+1857,(((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushing) 
                              != (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popping))));
        vcdp->chgBit(c+1865,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+1873,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext),5);
        vcdp->chgBit(c+1881,(((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+1889,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ptrMatch));
        vcdp->chgBit(c+1897,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushing));
        vcdp->chgBit(c+1905,(((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+1913,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_full));
        vcdp->chgBus(c+1921,(((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                               ? (0xfffU & (vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
                                            >> 0xcU))
                               : 0U)),12);
        vcdp->chgBus(c+1929,(((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                               ? (0xfffU & vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0)
                               : 0U)),12);
        vcdp->chgBus(c+1937,((0xfffU & vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0)),12);
        vcdp->chgBus(c+1945,((0xfffU & (vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
                                        >> 0xcU))),12);
        vcdp->chgBit(c+1953,(((IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling_raw_data_valid) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling_raw_data_ready))));
        vcdp->chgBit(c+1961,(((IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling_result_data_valid) 
                              & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__last_padding)))));
        vcdp->chgBit(c+1969,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_willIncrement));
        vcdp->chgBit(c+1977,(((0x1fU == (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+1985,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ptrMatch));
        vcdp->chgBit(c+1993,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popping));
        vcdp->chgBit(c+2001,(((IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+2009,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_full));
        vcdp->chgBit(c+2017,(((IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) 
                              & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full)))));
        vcdp->chgBit(c+2025,(((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_raw_data_valid) 
                              & (~ (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_full)))));
        vcdp->chgBit(c+2033,(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__raw_data_fire));
        vcdp->chgBit(c+2041,(((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_raw_data_valid) 
                              & (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_raw_data_ready))));
        vcdp->chgBit(c+2049,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+2057,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext),5);
        vcdp->chgBit(c+2065,(((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+2073,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement));
        vcdp->chgBit(c+2081,(((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+2089,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ptrMatch));
        vcdp->chgBit(c+2097,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushing));
        vcdp->chgBit(c+2105,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popping));
        vcdp->chgBit(c+2113,(((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+2121,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full));
        vcdp->chgBit(c+2129,(((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushing) 
                              != (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popping))));
        vcdp->chgBit(c+2137,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+2145,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_valueNext),5);
        vcdp->chgBit(c+2153,(((0x1fU == (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+2161,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+2169,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_valueNext),5);
        vcdp->chgBit(c+2177,(((0x1fU == (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+2185,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ptrMatch));
        vcdp->chgBit(c+2193,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushing));
        vcdp->chgBit(c+2201,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popping));
        vcdp->chgBit(c+2209,(((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+2217,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_full));
        vcdp->chgBit(c+2225,(((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushing) 
                              != (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popping))));
        vcdp->chgBit(c+2233,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+2241,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_valueNext),5);
        vcdp->chgBit(c+2249,(((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+2257,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ptrMatch));
        vcdp->chgBit(c+2265,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushing));
        vcdp->chgBit(c+2273,(((IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+2281,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_full));
    }
}

void VTXSim::traceChgThis__9(VTXSim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2289,((0xffU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__emitCrc)
                                        ? ((0U == (IData)(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__counter))
                                            ? vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1_result
                                            : ((1U 
                                                == (IData)(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__counter))
                                                ? (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1_result 
                                                   >> 8U)
                                                : (
                                                   (2U 
                                                    == (IData)(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__counter))
                                                    ? 
                                                   (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1_result 
                                                    >> 0x10U)
                                                    : 
                                                   (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1_result 
                                                    >> 0x18U))))
                                        : ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                                           >> 1U)))),8);
        vcdp->chgBus(c+2297,((0xfffU & ((0U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                                         ? ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                             ? (((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)
                                                  ? 0x7ff000U
                                                  : 0x801000U) 
                                                >> 0xcU)
                                             : 0U) : 
                                        ((1U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                                          ? ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                              ? (vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
                                                 >> 0xcU)
                                              : 0U)
                                          : ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                              ? ((0U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                      >> 2U)))
                                                  ? 0xc35U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                       >> 2U)))
                                                   ? 0xebcU
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                        >> 2U)))
                                                    ? 0x3caU
                                                    : 0x143U)))
                                              : 0U))))),12);
        vcdp->chgBus(c+2305,((0xfffU & ((0U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                                         ? ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                             ? ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)
                                                 ? 0x7ff000U
                                                 : 0x801000U)
                                             : 0U) : 
                                        ((1U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                                          ? ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                              ? vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0
                                              : 0U)
                                          : ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                              ? ((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                  ? 0xc35U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                   ? 0xebcU
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                    ? 0x3caU
                                                    : 0x143U)))
                                              : 0U))))),12);
        vcdp->chgBit(c+2313,((((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_raw_data_valid) 
                               & (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_raw_data_ready)) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0))));
        vcdp->chgBit(c+2321,((((IData)(vlTOPp->TXSim__DOT__phy_header_extender_raw_data_valid) 
                               & (IData)(vlTOPp->TXSim__DOT__phy_header_extender_raw_data_ready)) 
                              & vlTOPp->TXSim__DOT__streamFifo_12__DOT___zz_logic_ram_port0)));
        vcdp->chgBit(c+2329,((((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_valid) 
                               & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_raw_data_ready)) 
                              & vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_logic_ram_port0)));
        vcdp->chgBit(c+2337,((((IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_valid) 
                               & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_full))) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_25))));
        vcdp->chgBit(c+2345,((((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_raw_data_valid) 
                               & (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_raw_data_ready)) 
                              & vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_logic_ram_port0)));
    }
}

void VTXSim::traceChgThis__10(VTXSim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2353,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_0)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_66__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2361,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_1)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_67__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2369,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_2)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_68__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2377,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_3)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_69__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2385,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_4)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_70__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2393,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_5)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_71__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2401,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_6)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_72__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2409,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_7)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_73__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2417,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_8)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_74__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2425,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_9)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_75__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2433,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_10)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_76__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2441,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_11)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_77__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2449,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_12)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_78__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2457,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_13)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_79__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2465,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_14)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_80__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2473,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_15)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_81__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2481,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_16)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_82__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2489,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_17)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_83__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2497,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_18)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_84__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2505,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_19)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_85__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2513,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_20)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_86__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2521,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_21)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_87__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2529,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_22)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_88__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2537,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_23)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_89__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2545,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_24)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_90__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2553,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_25)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_91__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2561,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_26)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_92__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2569,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_27)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_93__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2577,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_28)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_94__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2585,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_29)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_95__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2593,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_30)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_96__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2601,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_31)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_97__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2609,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_0)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_99__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2617,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_1)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_100__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2625,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_2)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_101__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2633,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_3)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_102__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2641,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_4)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_103__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2649,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_5)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_104__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2657,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_6)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_105__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2665,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_7)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_106__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2673,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_8)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_107__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2681,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_9)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_108__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2689,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_10)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_109__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2697,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_11)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_110__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2705,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_12)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_111__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2713,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_13)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_112__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2721,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_14)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_113__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2729,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_15)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_114__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2737,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_16)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_115__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2745,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_17)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_116__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2753,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_18)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_117__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2761,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_19)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_118__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2769,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_20)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_119__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2777,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_21)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_120__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2785,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_22)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_121__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2793,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_23)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_122__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2801,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_24)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_123__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2809,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_25)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_124__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2817,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_26)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_125__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2825,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_27)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_126__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2833,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_28)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_127__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2841,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_29)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_128__DOT__previous_adder_data))),19);
        vcdp->chgBus(c+2849,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_30)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_129__DOT__previous_adder_data))),19);
    }
}

void VTXSim::traceChgThis__12(VTXSim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2857,((0x7ffffU & (VL_MULS_III(19,19,19, 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,12, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1))), 
                                                      (0x7ffffU 
                                                       & VL_EXTENDS_II(19,7, (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_31)))) 
                                          + vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_130__DOT__previous_adder_data))),19);
    }
}

void VTXSim::traceChgThis__13(VTXSim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2865,(((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+2873,(((IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushing) 
                              != (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popping))));
    }
}

void VTXSim::traceChgThis__14(VTXSim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2881,(((IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_ready) 
                              & (~ ((IData)(vlTOPp->TXSim__DOT__pipeline_halt) 
                                    >> 6U)))));
        vcdp->chgBit(c+2889,((((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_valid) 
                               & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_full))) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_payload_last))));
        vcdp->chgBit(c+2897,(((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+2905,(((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushing) 
                              != (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popping))));
        vcdp->chgBit(c+2913,(((0x1fU == (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+2921,(((IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushing) 
                              != (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popping))));
        vcdp->chgBit(c+2929,((((IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling_result_data_valid) 
                               & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__last_padding))) 
                              & (IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling_result_data_payload_last))));
    }
}

void VTXSim::traceChgThis__15(VTXSim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2937,(vlTOPp->TXSim__DOT__writeJoinEvent_valid));
        vcdp->chgBit(c+2945,(vlTOPp->TXSim__DOT___zz_writeJoinEvent_translated_ready));
        vcdp->chgBit(c+2953,(vlTOPp->TXSim__DOT__writeJoinEvent_fire));
        vcdp->chgBit(c+2961,(vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__raw_data_fire));
        vcdp->chgBit(c+2969,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+2977,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext),5);
        vcdp->chgBit(c+2985,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popping));
    }
}

void VTXSim::traceChgThis__16(VTXSim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2993,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_payload_last));
        vcdp->chgBus(c+3001,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_payload_fragment),8);
        vcdp->chgBit(c+3009,(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_ready));
        vcdp->chgBit(c+3017,(vlTOPp->TXSim__DOT__mod_data_div_unit_data_payload_last));
        vcdp->chgBit(c+3025,(vlTOPp->TXSim__DOT__phy_tx_oversampling_result_data_payload_last));
        vcdp->chgBus(c+3033,(vlTOPp->TXSim__DOT__readRsp_data),32);
        vcdp->chgBus(c+3041,(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_valueNext),10);
        vcdp->chgBus(c+3049,(((0x80000000U & ((~ vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8) 
                                              << 0x1fU)) 
                              | ((0x40000000U & ((~ 
                                                  (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                   >> 1U)) 
                                                 << 0x1eU)) 
                                 | ((0x20000000U & 
                                     ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                          >> 2U)) << 0x1dU)) 
                                    | ((0x10000000U 
                                        & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                               >> 3U)) 
                                           << 0x1cU)) 
                                       | ((0x8000000U 
                                           & ((~ (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                  >> 4U)) 
                                              << 0x1bU)) 
                                          | ((0x4000000U 
                                              & ((~ 
                                                  (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                   >> 5U)) 
                                                 << 0x1aU)) 
                                             | ((0x2000000U 
                                                 & ((~ 
                                                     (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                      >> 6U)) 
                                                    << 0x19U)) 
                                                | ((0x1000000U 
                                                    & ((~ 
                                                        (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                         >> 7U)) 
                                                       << 0x18U)) 
                                                   | ((0x800000U 
                                                       & ((~ 
                                                           (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                            >> 8U)) 
                                                          << 0x17U)) 
                                                      | ((0x400000U 
                                                          & ((~ 
                                                              (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                               >> 9U)) 
                                                             << 0x16U)) 
                                                         | ((0x200000U 
                                                             & ((~ 
                                                                 (vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8 
                                                                  >> 0xaU)) 
                                                                << 0x15U)) 
                                                            | vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT___zz_resultNext_2)))))))))))),32);
        vcdp->chgBus(c+3057,(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8),32);
        vcdp->chgBus(c+3065,(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_7),32);
        vcdp->chgBus(c+3073,(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_6),32);
        vcdp->chgBus(c+3081,(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_5),32);
        vcdp->chgBus(c+3089,(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_4),32);
        vcdp->chgBus(c+3097,(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_3),32);
        vcdp->chgBus(c+3105,(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_2),32);
        vcdp->chgBus(c+3113,(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_1),32);
        vcdp->chgBus(c+3121,((~ vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state_8)),32);
        vcdp->chgBus(c+3129,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext),5);
        vcdp->chgBus(c+3137,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext),5);
        vcdp->chgBus(c+3145,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_valueNext),5);
        vcdp->chgBus(c+3153,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext),5);
        vcdp->chgBit(c+3161,(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_data_fire));
        vcdp->chgBit(c+3169,(vlTOPp->TXSim__DOT__mod_data_div__DOT__when_dataDivDynamic_l52));
        vcdp->chgBit(c+3177,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+3185,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext),5);
        vcdp->chgBit(c+3193,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popping));
        vcdp->chgBit(c+3201,(vlTOPp->TXSim__DOT__mod_rtl__DOT__flowDeMux_1_outputs_0_payload_last));
        vcdp->chgBit(c+3209,(vlTOPp->TXSim__DOT__mod_rtl__DOT__flowDeMux_1_outputs_1_payload_last));
        vcdp->chgBit(c+3217,(vlTOPp->TXSim__DOT__mod_rtl__DOT__flowDeMux_1_outputs_2_payload_last));
        vcdp->chgBit(c+3225,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+3233,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_valueNext),5);
        vcdp->chgBus(c+3241,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_valueNext),5);
        vcdp->chgBit(c+3249,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushing));
        vcdp->chgBus(c+3257,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_0),12);
        vcdp->chgBus(c+3265,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq_raw_data_payload_1),12);
        vcdp->chgBus(c+3273,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_valueNext),5);
    }
}

void VTXSim::traceChgThis__18(VTXSim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+3281,((0xffU & vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__data_buf)),8);
        vcdp->chgBus(c+3289,(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data),16);
        vcdp->chgBit(c+3297,((1U & (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_logic_ram_port0))));
        vcdp->chgBus(c+3305,((0xffU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                                       >> 1U))),8);
        vcdp->chgBus(c+3313,((((0x8000U & (IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment)) 
                               | ((0x4000U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                              << 7U)) 
                                  | ((0x2000U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                 >> 1U)) 
                                     | ((0x1000U & 
                                         ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                          << 6U)) | 
                                        (0x800U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                   >> 2U)))))) 
                              | ((0x400U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                            << 5U)) 
                                 | ((0x200U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                               >> 3U)) 
                                    | ((0x100U & ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                  << 4U)) 
                                       | ((0x80U & 
                                           ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                            >> 4U)) 
                                          | ((0x40U 
                                              & ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                 << 3U)) 
                                             | ((0x20U 
                                                 & ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                    >> 5U)) 
                                                | ((0x10U 
                                                    & ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                       << 2U)) 
                                                   | ((8U 
                                                       & ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                          >> 6U)) 
                                                      | ((4U 
                                                          & ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                             << 1U)) 
                                                         | ((2U 
                                                             & ((IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment) 
                                                                >> 7U)) 
                                                            | (1U 
                                                               & (IData)(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment)))))))))))))),16);
        vcdp->chgBus(c+3321,(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_data_i),12);
        vcdp->chgBus(c+3329,(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_data_q),12);
        vcdp->chgBit(c+3337,((1U & vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT___zz_logic_ram_port0)));
        vcdp->chgBus(c+3345,((0xfffU & (vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                                        >> 1U))),12);
        vcdp->chgBus(c+3353,((0xfffU & (vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                                        >> 0xdU))),12);
        vcdp->chgBus(c+3361,((0xfffU & vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_logic_ram_port0)),12);
        vcdp->chgBus(c+3369,((0xfffU & (vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                                        >> 0xcU))),12);
        vcdp->chgBus(c+3377,(vlTOPp->TXSim__DOT__clkCrossing_6__DOT__area_clkO_buf1),7);
        vcdp->chgBus(c+3385,(vlTOPp->TXSim__DOT__clkCrossing_7__DOT__area_clkO_buf1),7);
        vcdp->chgBus(c+3393,(vlTOPp->TXSim__DOT__axil4Ctrl_ar_rData_addr),8);
        vcdp->chgBus(c+3401,(vlTOPp->TXSim__DOT__axil4Ctrl_ar_rData_prot),3);
        vcdp->chgBus(c+3409,(vlTOPp->TXSim__DOT__pkg_gen_bridge_slices_limit_driver),7);
        vcdp->chgBus(c+3417,(vlTOPp->TXSim__DOT__stream_package_gen__DOT__strb_buf),4);
        vcdp->chgBit(c+3425,((1U & (IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT__strb_buf))));
        vcdp->chgBus(c+3433,(vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__data_buf),32);
        vcdp->chgBus(c+3441,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[0]),9);
        vcdp->chgBus(c+3442,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[1]),9);
        vcdp->chgBus(c+3443,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[2]),9);
        vcdp->chgBus(c+3444,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[3]),9);
        vcdp->chgBus(c+3445,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[4]),9);
        vcdp->chgBus(c+3446,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[5]),9);
        vcdp->chgBus(c+3447,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[6]),9);
        vcdp->chgBus(c+3448,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[7]),9);
        vcdp->chgBus(c+3449,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[8]),9);
        vcdp->chgBus(c+3450,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[9]),9);
        vcdp->chgBus(c+3451,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[10]),9);
        vcdp->chgBus(c+3452,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[11]),9);
        vcdp->chgBus(c+3453,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[12]),9);
        vcdp->chgBus(c+3454,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[13]),9);
        vcdp->chgBus(c+3455,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[14]),9);
        vcdp->chgBus(c+3456,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[15]),9);
        vcdp->chgBus(c+3457,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[16]),9);
        vcdp->chgBus(c+3458,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[17]),9);
        vcdp->chgBus(c+3459,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[18]),9);
        vcdp->chgBus(c+3460,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[19]),9);
        vcdp->chgBus(c+3461,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[20]),9);
        vcdp->chgBus(c+3462,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[21]),9);
        vcdp->chgBus(c+3463,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[22]),9);
        vcdp->chgBus(c+3464,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[23]),9);
        vcdp->chgBus(c+3465,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[24]),9);
        vcdp->chgBus(c+3466,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[25]),9);
        vcdp->chgBus(c+3467,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[26]),9);
        vcdp->chgBus(c+3468,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[27]),9);
        vcdp->chgBus(c+3469,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[28]),9);
        vcdp->chgBus(c+3470,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[29]),9);
        vcdp->chgBus(c+3471,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[30]),9);
        vcdp->chgBus(c+3472,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_ram[31]),9);
        vcdp->chgBus(c+3697,(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_fragment),16);
        vcdp->chgBit(c+3705,((1U & vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_logic_ram_port0)));
        vcdp->chgBus(c+3713,((0xffffU & (vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT___zz_logic_ram_port0 
                                         >> 1U))),16);
        vcdp->chgBus(c+3721,(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_data),16);
        vcdp->chgBus(c+3729,(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_state),7);
        vcdp->chgBit(c+3737,(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_last));
        vcdp->chgBit(c+3745,(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_last));
        vcdp->chgBit(c+3753,(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_last));
        vcdp->chgBus(c+3761,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_32),7);
        vcdp->chgBus(c+3769,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[0]),25);
        vcdp->chgBus(c+3770,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[1]),25);
        vcdp->chgBus(c+3771,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[2]),25);
        vcdp->chgBus(c+3772,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[3]),25);
        vcdp->chgBus(c+3773,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[4]),25);
        vcdp->chgBus(c+3774,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[5]),25);
        vcdp->chgBus(c+3775,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[6]),25);
        vcdp->chgBus(c+3776,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[7]),25);
        vcdp->chgBus(c+3777,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[8]),25);
        vcdp->chgBus(c+3778,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[9]),25);
        vcdp->chgBus(c+3779,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[10]),25);
        vcdp->chgBus(c+3780,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[11]),25);
        vcdp->chgBus(c+3781,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[12]),25);
        vcdp->chgBus(c+3782,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[13]),25);
        vcdp->chgBus(c+3783,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[14]),25);
        vcdp->chgBus(c+3784,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[15]),25);
        vcdp->chgBus(c+3785,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[16]),25);
        vcdp->chgBus(c+3786,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[17]),25);
        vcdp->chgBus(c+3787,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[18]),25);
        vcdp->chgBus(c+3788,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[19]),25);
        vcdp->chgBus(c+3789,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[20]),25);
        vcdp->chgBus(c+3790,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[21]),25);
        vcdp->chgBus(c+3791,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[22]),25);
        vcdp->chgBus(c+3792,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[23]),25);
        vcdp->chgBus(c+3793,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[24]),25);
        vcdp->chgBus(c+3794,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[25]),25);
        vcdp->chgBus(c+3795,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[26]),25);
        vcdp->chgBus(c+3796,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[27]),25);
        vcdp->chgBus(c+3797,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[28]),25);
        vcdp->chgBus(c+3798,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[29]),25);
        vcdp->chgBus(c+3799,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[30]),25);
        vcdp->chgBus(c+3800,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_ram[31]),25);
        vcdp->chgBus(c+4025,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[0]),24);
        vcdp->chgBus(c+4026,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[1]),24);
        vcdp->chgBus(c+4027,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[2]),24);
        vcdp->chgBus(c+4028,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[3]),24);
        vcdp->chgBus(c+4029,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[4]),24);
        vcdp->chgBus(c+4030,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[5]),24);
        vcdp->chgBus(c+4031,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[6]),24);
        vcdp->chgBus(c+4032,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[7]),24);
        vcdp->chgBus(c+4033,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[8]),24);
        vcdp->chgBus(c+4034,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[9]),24);
        vcdp->chgBus(c+4035,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[10]),24);
        vcdp->chgBus(c+4036,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[11]),24);
        vcdp->chgBus(c+4037,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[12]),24);
        vcdp->chgBus(c+4038,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[13]),24);
        vcdp->chgBus(c+4039,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[14]),24);
        vcdp->chgBus(c+4040,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[15]),24);
        vcdp->chgBus(c+4041,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[16]),24);
        vcdp->chgBus(c+4042,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[17]),24);
        vcdp->chgBus(c+4043,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[18]),24);
        vcdp->chgBus(c+4044,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[19]),24);
        vcdp->chgBus(c+4045,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[20]),24);
        vcdp->chgBus(c+4046,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[21]),24);
        vcdp->chgBus(c+4047,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[22]),24);
        vcdp->chgBus(c+4048,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[23]),24);
        vcdp->chgBus(c+4049,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[24]),24);
        vcdp->chgBus(c+4050,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[25]),24);
        vcdp->chgBus(c+4051,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[26]),24);
        vcdp->chgBus(c+4052,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[27]),24);
        vcdp->chgBus(c+4053,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[28]),24);
        vcdp->chgBus(c+4054,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[29]),24);
        vcdp->chgBus(c+4055,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[30]),24);
        vcdp->chgBus(c+4056,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_ram[31]),24);
        vcdp->chgBus(c+4281,(vlTOPp->TXSim__DOT__clkCrossing_6__DOT__area_clkI_reg),7);
        vcdp->chgBus(c+4289,(vlTOPp->TXSim__DOT__clkCrossing_6__DOT__area_clkO_buf0),7);
        vcdp->chgBus(c+4297,(vlTOPp->TXSim__DOT__clkCrossing_7__DOT__area_clkI_reg),7);
        vcdp->chgBus(c+4305,(vlTOPp->TXSim__DOT__clkCrossing_7__DOT__area_clkO_buf0),7);
    }
}

void VTXSim::traceChgThis__19(VTXSim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+4313,(((0U != (IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__cnt)) 
                              & (IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT__strb_buf))));
    }
}

void VTXSim::traceChgThis__20(VTXSim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+4321,((0xffffU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_data) 
                                         ^ (vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                                            >> 1U)))),16);
    }
}

void VTXSim::traceChgThis__21(VTXSim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp22[3];
    // Body
    {
        vcdp->chgBus(c+4329,((0xffU & (IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_buffer))),8);
        vcdp->chgBus(c+4337,(vlTOPp->TXSim__DOT__stream_package_gen__DOT__pkg_slices_cnt),7);
        vcdp->chgBit(c+4345,((0U == (IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__cnt))));
        vcdp->chgBit(c+4353,((1U & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__emitEncoding)))));
        vcdp->chgBit(c+4361,(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__coded_data_valid_1));
        vcdp->chgBit(c+4369,(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__raw_data_payload_last_regNext));
        vcdp->chgBit(c+4377,(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_valid_1));
        vcdp->chgBit(c+4385,(vlTOPp->TXSim__DOT__phy_tx_puncher__DOT__raw_data_last));
        vcdp->chgBit(c+4393,(vlTOPp->TXSim__DOT__mod_data_div__DOT__unit_valid));
        vcdp->chgBus(c+4401,(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_buffer),16);
        vcdp->chgBit(c+4409,((1U & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__last_padding)))));
        vcdp->chgBit(c+4417,(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_valid));
        vcdp->chgBit(c+4425,(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_last));
        vcdp->chgBit(c+4433,((1U & (~ (IData)(vlTOPp->TXSim__DOT___zz_axil4Ctrl_bvalid_2)))));
        vcdp->chgBit(c+4441,(vlTOPp->TXSim__DOT__axil4Ctrl_ar_rValid));
        vcdp->chgBit(c+4449,((1U & (~ (IData)(vlTOPp->TXSim__DOT__axil4Ctrl_ar_rValid)))));
        vcdp->chgBit(c+4457,((0U != (IData)(vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__cnt))));
        vcdp->chgBit(c+4465,(vlTOPp->TXSim__DOT__stream_package_gen__DOT__raw_data_last));
        vcdp->chgBus(c+4473,(vlTOPp->TXSim__DOT__stream_package_gen__DOT__split_core__DOT__cnt),3);
        vcdp->chgBus(c+4481,(vlTOPp->TXSim__DOT__phy_tx_padder__DOT__counter),3);
        vcdp->chgBit(c+4489,((7U == (IData)(vlTOPp->TXSim__DOT__phy_tx_padder__DOT__counter))));
        vcdp->chgBit(c+4497,(vlTOPp->TXSim__DOT__phy_tx_padder__DOT__raw_data_payload_first));
        vcdp->chgBit(c+4505,((7U != (IData)(vlTOPp->TXSim__DOT__phy_tx_padder__DOT__counter))));
        vcdp->chgBus(c+4513,(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value),10);
        vcdp->chgBit(c+4521,((0x3e7U == (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+4529,(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value),10);
        vcdp->chgBit(c+4537,((0x3e7U == (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+4545,(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+4553,((0x3ffU & ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_pushPtr_value) 
                                        - (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT__logic_popPtr_value)))),10);
        vcdp->chgBit(c+4561,(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__emitCrc));
        vcdp->chgBus(c+4569,(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__counter),2);
        vcdp->chgBit(c+4577,((1U & (~ (IData)(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__emitCrc)))));
        vcdp->chgBit(c+4585,((3U == (IData)(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__counter))));
        vcdp->chgBus(c+4593,(vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state),32);
        vcdp->chgBus(c+4601,((~ vlTOPp->TXSim__DOT__phy_tx_crc__DOT__crc_1__DOT__state)),32);
        vcdp->chgBus(c+4609,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value),5);
        vcdp->chgBit(c+4617,((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+4625,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value),5);
        vcdp->chgBit(c+4633,((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+4641,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+4649,((0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_popPtr_value)))),5);
        vcdp->chgBit(c+4657,(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__emitEncoding));
        vcdp->chgBit(c+4665,(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__emitEncoding));
        vcdp->chgBus(c+4673,(vlTOPp->TXSim__DOT__phy_tx_encoder__DOT__phy_tx_encoder__DOT__r_enc_buf),7);
        vcdp->chgBus(c+4681,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value),5);
        vcdp->chgBit(c+4689,((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+4697,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_value),5);
        vcdp->chgBit(c+4705,((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+4713,(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+4721,((0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->TXSim__DOT__phy_tx_crc_result_data_queueWithAvailability__DOT__logic_popPtr_value)))),5);
        vcdp->chgBus(c+4729,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_value),5);
        vcdp->chgBit(c+4737,((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+4745,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_value),5);
        vcdp->chgBit(c+4753,((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+4761,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+4769,((0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_popPtr_value)))),5);
        vcdp->chgBus(c+4777,(vlTOPp->TXSim__DOT__phy_header_extender__DOT__counter),8);
        vcdp->chgBit(c+4785,(vlTOPp->TXSim__DOT__phy_header_extender__DOT__emitHeader));
        vcdp->chgBus(c+4793,(vlTOPp->TXSim__DOT__phy_header_extender__DOT__header_status),2);
        vcdp->chgQuad(c+4801,(((0U == (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__header_status))
                                ? VL_ULL(0x49444c452020)
                                : ((1U == (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__header_status))
                                    ? VL_ULL(0x484541444552)
                                    : ((2U == (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__header_status))
                                        ? VL_ULL(0x444154412020)
                                        : VL_ULL(0x3f3f3f3f3f3f))))),48);
        vcdp->chgBus(c+4817,(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value),8);
        vcdp->chgBit(c+4825,((0x85U == (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+4833,(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value),8);
        vcdp->chgBit(c+4841,((0x85U == (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+4849,(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+4857,((0xffU & ((IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->TXSim__DOT__phy_header_extender__DOT__dataFifo__DOT__logic_popPtr_value)))),8);
        vcdp->chgBus(c+4865,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_value),5);
        vcdp->chgBit(c+4873,((0x1fU == (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+4881,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_value),5);
        vcdp->chgBit(c+4889,((0x1fU == (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+4897,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+4905,((0x1fU & ((IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_popPtr_value)))),5);
        vcdp->chgBit(c+4913,(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_1__DOT__scram_valid));
        vcdp->chgBus(c+4921,(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status),2);
        __Vtemp22[0U] = ((0U == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status))
                          ? 0x20202020U : ((1U == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status))
                                            ? 0x4c494e47U
                                            : ((2U 
                                                == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status))
                                                ? 0x31202020U
                                                : 0x3f3f3f3fU)));
        __Vtemp22[1U] = ((0U == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status))
                          ? 0x4c452020U : ((1U == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status))
                                            ? 0x52414d42U
                                            : ((2U 
                                                == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status))
                                                ? 0x4e414c5fU
                                                : 0x3f3f3f3fU)));
        __Vtemp22[2U] = ((0U == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status))
                          ? 0x4944U : ((1U == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status))
                                        ? 0x5343U : 
                                       ((2U == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler__DOT__scrambler_status))
                                         ? 0x4649U : 0x3f3fU)));
        vcdp->chgArray(c+4929,(__Vtemp22),80);
        vcdp->chgBus(c+4953,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value),5);
        vcdp->chgBit(c+4961,((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+4969,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value),5);
        vcdp->chgBit(c+4977,((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+4985,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+4993,((0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_popPtr_value)))),5);
        vcdp->chgBit(c+5001,(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_last));
        vcdp->chgBus(c+5009,(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_cnt),4);
        vcdp->chgBit(c+5017,(vlTOPp->TXSim__DOT__mod_data_div__DOT__loaded));
        vcdp->chgBus(c+5025,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value),5);
        vcdp->chgBit(c+5033,((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+5041,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value),5);
        vcdp->chgBit(c+5049,((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+5057,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+5065,((0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_popPtr_value)))),5);
        vcdp->chgBit(c+5073,(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->chgBit(c+5081,(((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid) 
                              & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_last))));
        vcdp->chgBus(c+5089,(((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                               ? (0xfffU & (((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)
                                              ? 0x7ff000U
                                              : 0x801000U) 
                                            >> 0xcU))
                               : 0U)),12);
        vcdp->chgBus(c+5097,(0U),12);
        vcdp->chgBit(c+5105,(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid));
        vcdp->chgBit(c+5113,(((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid) 
                              & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_last))));
        vcdp->chgBit(c+5121,(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->chgBit(c+5129,(((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid) 
                              & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_last))));
        vcdp->chgBus(c+5137,(((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                               ? ((0U == (3U & ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                >> 2U)))
                                   ? 0xc35U : ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                    >> 2U)))
                                                ? 0xebcU
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                        >> 2U)))
                                                    ? 0x3caU
                                                    : 0x143U)))
                               : 0U)),12);
        vcdp->chgBus(c+5145,(((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                               ? ((0U == (3U & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                   ? 0xc35U : ((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                ? 0xebcU
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                    ? 0x3caU
                                                    : 0x143U)))
                               : 0U)),12);
        vcdp->chgBit(c+5153,(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment));
        vcdp->chgBit(c+5161,(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->chgBit(c+5169,(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_last));
        vcdp->chgBus(c+5177,(0U),12);
        vcdp->chgBus(c+5185,((0xfffU & (((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)
                                          ? 0x7ff000U
                                          : 0x801000U) 
                                        >> 0xcU))),12);
        vcdp->chgBus(c+5193,(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment),2);
        vcdp->chgBit(c+5201,(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid));
        vcdp->chgBit(c+5209,(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_last));
        vcdp->chgBus(c+5217,(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment),4);
        vcdp->chgBit(c+5225,(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->chgBit(c+5233,(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_last));
        vcdp->chgBus(c+5241,((3U & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment))),2);
        vcdp->chgBus(c+5249,((3U & ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                    >> 2U))),2);
        vcdp->chgBus(c+5257,(vlTOPp->TXSim__DOT__phy_tx_oversampling__DOT__cnt),3);
        vcdp->chgBit(c+5265,(vlTOPp->TXSim__DOT__phy_tx_oversampling__DOT__raw_last));
        vcdp->chgBus(c+5273,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_value),5);
        vcdp->chgBit(c+5281,((0x1fU == (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+5289,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_value),5);
        vcdp->chgBit(c+5297,((0x1fU == (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+5305,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+5313,((0x1fU & ((IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_popPtr_value)))),5);
        vcdp->chgBit(c+5321,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__last_padding));
        vcdp->chgBus(c+5329,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_66__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5337,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_67__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5345,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_68__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5353,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_69__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5361,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_70__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5369,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_71__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5377,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_72__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5385,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_73__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5393,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_74__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5401,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_75__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5409,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_76__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5417,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_77__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5425,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_78__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5433,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_79__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5441,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_80__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5449,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_81__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5457,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_82__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5465,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_83__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5473,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_84__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5481,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_85__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5489,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_86__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5497,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_87__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5505,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_88__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5513,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_89__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5521,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_90__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5529,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_91__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5537,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_92__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5545,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_93__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5553,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_94__DOT__previous_adder_data),19);
    }
}

void VTXSim::traceChgThis__23(VTXSim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+5561,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_95__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5569,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_96__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5577,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_97__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5585,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_98__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5593,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_99__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5601,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_100__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5609,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_101__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5617,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_102__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5625,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_103__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5633,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_104__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5641,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_105__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5649,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_106__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5657,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_107__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5665,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_108__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5673,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_109__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5681,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_110__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5689,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_111__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5697,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_112__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5705,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_113__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5713,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_114__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5721,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_115__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5729,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_116__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5737,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_117__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5745,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_118__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5753,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_119__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5761,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_120__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5769,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_121__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5777,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_122__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5785,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_123__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5793,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_124__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5801,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_125__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5809,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_126__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5817,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_127__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5825,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_128__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5833,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_129__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5841,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_130__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5849,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__transposeCore_131__DOT__previous_adder_data),19);
        vcdp->chgBus(c+5857,(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__cnt),8);
        vcdp->chgBit(c+5865,(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__raw_ready));
        vcdp->chgBus(c+5873,(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_states),2);
        vcdp->chgBit(c+5881,((0x80U <= (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__cnt))));
        vcdp->chgQuad(c+5889,(((0U == (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_states))
                                ? VL_ULL(0x49444c4520202020)
                                : ((1U == (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_states))
                                    ? VL_ULL(0x505245414d424c45)
                                    : ((2U == (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder__DOT__preamble_states))
                                        ? VL_ULL(0x4441544120202020)
                                        : VL_ULL(0x3f3f3f3f3f3f3f3f))))),64);
        vcdp->chgBus(c+5905,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value),5);
        vcdp->chgBit(c+5913,((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+5921,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value),5);
        vcdp->chgBit(c+5929,((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+5937,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+5945,((0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_popPtr_value)))),5);
        vcdp->chgBus(c+5953,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_value),5);
        vcdp->chgBit(c+5961,((0x1fU == (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+5969,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_value),5);
        vcdp->chgBit(c+5977,((0x1fU == (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+5985,(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+5993,((0x1fU & ((IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->TXSim__DOT__stf_preamble_adder_preamble_data_queueWithAvailability__DOT__logic_popPtr_value)))),5);
        vcdp->chgBus(c+6001,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value),5);
        vcdp->chgBit(c+6009,((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+6017,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_value),5);
        vcdp->chgBit(c+6025,((0x1fU == (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+6033,(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+6041,((0x1fU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->TXSim__DOT__phy_tx_front_result_data_queueWithAvailability__DOT__logic_popPtr_value)))),5);
    }
}

void VTXSim::traceChgThis__24(VTXSim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+6049,(((0U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                               ? (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                               : ((1U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                                   ? (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                   : (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)))));
        vcdp->chgBit(c+6057,(((0U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                               ? ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid) 
                                  & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_last))
                               : ((1U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                                   ? ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid) 
                                      & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_last))
                                   : ((IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid) 
                                      & (IData)(vlTOPp->TXSim__DOT__mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_last))))));
        vcdp->chgBus(c+6065,(((0U == (IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling__DOT__cnt))
                               ? (0xfffU & (vlTOPp->TXSim__DOT__streamFifo_13__DOT___zz_logic_ram_port0 
                                            >> 1U))
                               : 0U)),12);
        vcdp->chgBus(c+6073,(((0U == (IData)(vlTOPp->TXSim__DOT__phy_tx_oversampling__DOT__cnt))
                               ? (0xfffU & (vlTOPp->TXSim__DOT__streamFifo_13__DOT___zz_logic_ram_port0 
                                            >> 0xdU))
                               : 0U)),12);
        vcdp->chgBit(c+6081,(((0U != (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                               ? 0U : (1U & (IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_buffer)))));
        vcdp->chgBus(c+6089,(((1U != (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                               ? 0U : (3U & (IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_buffer)))),2);
        vcdp->chgBus(c+6097,(((2U != (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                               ? 0U : (0xfU & (IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_buffer)))),4);
        vcdp->chgBit(c+6105,(((0U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1)) 
                              & (IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__unit_valid))));
        vcdp->chgBus(c+6113,(((0U != (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                               ? 0U : (0xffU & (IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_buffer)))),8);
        vcdp->chgBit(c+6121,(((1U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1)) 
                              & (IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__unit_valid))));
        vcdp->chgBus(c+6129,(((1U != (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                               ? 0U : (0xffU & (IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_buffer)))),8);
        vcdp->chgBit(c+6137,(((2U == (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1)) 
                              & (IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__unit_valid))));
        vcdp->chgBus(c+6145,(((2U != (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))
                               ? 0U : (0xffU & (IData)(vlTOPp->TXSim__DOT__mod_data_div__DOT__base_buffer)))),8);
    }
}

void VTXSim::traceChgThis__26(VTXSim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+6153,((1U & (IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_logic_ram_port0))));
        vcdp->chgBus(c+6161,((0xffU & ((IData)(vlTOPp->TXSim__DOT__stream_package_gen_pkg_data_fifo__DOT___zz_logic_ram_port0) 
                                       >> 1U))),8);
        vcdp->chgBit(c+6169,((1U & (IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0))));
        vcdp->chgBus(c+6177,((0xffU & ((IData)(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0) 
                                       >> 1U))),8);
        vcdp->chgBit(c+6185,((1U & vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0)));
        vcdp->chgBus(c+6193,((0xffffU & (vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                                         >> 1U))),16);
        vcdp->chgBit(c+6201,((1U & vlTOPp->TXSim__DOT__streamFifo_12__DOT___zz_logic_ram_port0)));
        vcdp->chgBus(c+6209,((0xffffU & (vlTOPp->TXSim__DOT__streamFifo_12__DOT___zz_logic_ram_port0 
                                         >> 1U))),16);
        vcdp->chgBit(c+6217,((1U & vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_logic_ram_port0)));
        vcdp->chgBus(c+6225,((0xffffU & (vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                                         >> 1U))),16);
        vcdp->chgBit(c+6233,((1U & vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_logic_ram_port0)));
        vcdp->chgBus(c+6241,((0xffffU & (vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                                         >> 1U))),16);
        vcdp->chgBit(c+6249,((1U & vlTOPp->TXSim__DOT__streamFifo_13__DOT___zz_logic_ram_port0)));
        vcdp->chgBus(c+6257,((0xfffU & (vlTOPp->TXSim__DOT__streamFifo_13__DOT___zz_logic_ram_port0 
                                        >> 1U))),12);
        vcdp->chgBus(c+6265,((0xfffU & (vlTOPp->TXSim__DOT__streamFifo_13__DOT___zz_logic_ram_port0 
                                        >> 0xdU))),12);
        vcdp->chgBit(c+6273,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_25));
        vcdp->chgBit(c+6281,((1U & vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_logic_ram_port0)));
        vcdp->chgBus(c+6289,((0xfffU & (vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                                        >> 1U))),12);
        vcdp->chgBus(c+6297,((0xfffU & (vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT___zz_logic_ram_port0 
                                        >> 0xdU))),12);
        vcdp->chgBit(c+6305,(vlTOPp->TXSim__DOT__clkCrossing_8__DOT__area_clkO_buf1));
        vcdp->chgBus(c+6313,(vlTOPp->TXSim__DOT__clkCrossing_9__DOT__area_clkO_buf1),4);
        vcdp->chgBus(c+6321,(vlTOPp->TXSim__DOT__clkCrossing_10__DOT__area_clkO_buf1),4);
        vcdp->chgBus(c+6329,(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1),2);
        vcdp->chgBus(c+6337,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[0]),9);
        vcdp->chgBus(c+6338,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[1]),9);
        vcdp->chgBus(c+6339,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[2]),9);
        vcdp->chgBus(c+6340,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[3]),9);
        vcdp->chgBus(c+6341,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[4]),9);
        vcdp->chgBus(c+6342,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[5]),9);
        vcdp->chgBus(c+6343,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[6]),9);
        vcdp->chgBus(c+6344,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[7]),9);
        vcdp->chgBus(c+6345,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[8]),9);
        vcdp->chgBus(c+6346,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[9]),9);
        vcdp->chgBus(c+6347,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[10]),9);
        vcdp->chgBus(c+6348,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[11]),9);
        vcdp->chgBus(c+6349,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[12]),9);
        vcdp->chgBus(c+6350,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[13]),9);
        vcdp->chgBus(c+6351,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[14]),9);
        vcdp->chgBus(c+6352,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[15]),9);
        vcdp->chgBus(c+6353,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[16]),9);
        vcdp->chgBus(c+6354,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[17]),9);
        vcdp->chgBus(c+6355,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[18]),9);
        vcdp->chgBus(c+6356,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[19]),9);
        vcdp->chgBus(c+6357,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[20]),9);
        vcdp->chgBus(c+6358,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[21]),9);
        vcdp->chgBus(c+6359,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[22]),9);
        vcdp->chgBus(c+6360,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[23]),9);
        vcdp->chgBus(c+6361,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[24]),9);
        vcdp->chgBus(c+6362,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[25]),9);
        vcdp->chgBus(c+6363,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[26]),9);
        vcdp->chgBus(c+6364,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[27]),9);
        vcdp->chgBus(c+6365,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[28]),9);
        vcdp->chgBus(c+6366,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[29]),9);
        vcdp->chgBus(c+6367,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[30]),9);
        vcdp->chgBus(c+6368,(vlTOPp->TXSim__DOT__phy_tx_padder_result_data_queueWithAvailability__DOT__logic_ram[31]),9);
        vcdp->chgBus(c+6593,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[0]),17);
        vcdp->chgBus(c+6594,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[1]),17);
        vcdp->chgBus(c+6595,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[2]),17);
        vcdp->chgBus(c+6596,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[3]),17);
        vcdp->chgBus(c+6597,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[4]),17);
        vcdp->chgBus(c+6598,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[5]),17);
        vcdp->chgBus(c+6599,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[6]),17);
        vcdp->chgBus(c+6600,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[7]),17);
        vcdp->chgBus(c+6601,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[8]),17);
        vcdp->chgBus(c+6602,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[9]),17);
        vcdp->chgBus(c+6603,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[10]),17);
        vcdp->chgBus(c+6604,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[11]),17);
        vcdp->chgBus(c+6605,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[12]),17);
        vcdp->chgBus(c+6606,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[13]),17);
        vcdp->chgBus(c+6607,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[14]),17);
        vcdp->chgBus(c+6608,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[15]),17);
        vcdp->chgBus(c+6609,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[16]),17);
        vcdp->chgBus(c+6610,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[17]),17);
        vcdp->chgBus(c+6611,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[18]),17);
        vcdp->chgBus(c+6612,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[19]),17);
        vcdp->chgBus(c+6613,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[20]),17);
        vcdp->chgBus(c+6614,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[21]),17);
        vcdp->chgBus(c+6615,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[22]),17);
        vcdp->chgBus(c+6616,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[23]),17);
        vcdp->chgBus(c+6617,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[24]),17);
        vcdp->chgBus(c+6618,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[25]),17);
        vcdp->chgBus(c+6619,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[26]),17);
        vcdp->chgBus(c+6620,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[27]),17);
        vcdp->chgBus(c+6621,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[28]),17);
        vcdp->chgBus(c+6622,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[29]),17);
        vcdp->chgBus(c+6623,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[30]),17);
        vcdp->chgBus(c+6624,(vlTOPp->TXSim__DOT__phy_tx_encoder_result_data_queueWithAvailability__DOT__logic_ram[31]),17);
        vcdp->chgBus(c+6849,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[0]),17);
        vcdp->chgBus(c+6850,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[1]),17);
        vcdp->chgBus(c+6851,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[2]),17);
        vcdp->chgBus(c+6852,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[3]),17);
        vcdp->chgBus(c+6853,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[4]),17);
        vcdp->chgBus(c+6854,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[5]),17);
        vcdp->chgBus(c+6855,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[6]),17);
        vcdp->chgBus(c+6856,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[7]),17);
        vcdp->chgBus(c+6857,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[8]),17);
        vcdp->chgBus(c+6858,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[9]),17);
        vcdp->chgBus(c+6859,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[10]),17);
        vcdp->chgBus(c+6860,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[11]),17);
        vcdp->chgBus(c+6861,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[12]),17);
        vcdp->chgBus(c+6862,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[13]),17);
        vcdp->chgBus(c+6863,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[14]),17);
        vcdp->chgBus(c+6864,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[15]),17);
        vcdp->chgBus(c+6865,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[16]),17);
        vcdp->chgBus(c+6866,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[17]),17);
        vcdp->chgBus(c+6867,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[18]),17);
        vcdp->chgBus(c+6868,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[19]),17);
        vcdp->chgBus(c+6869,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[20]),17);
        vcdp->chgBus(c+6870,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[21]),17);
        vcdp->chgBus(c+6871,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[22]),17);
        vcdp->chgBus(c+6872,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[23]),17);
        vcdp->chgBus(c+6873,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[24]),17);
        vcdp->chgBus(c+6874,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[25]),17);
        vcdp->chgBus(c+6875,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[26]),17);
        vcdp->chgBus(c+6876,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[27]),17);
        vcdp->chgBus(c+6877,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[28]),17);
        vcdp->chgBus(c+6878,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[29]),17);
        vcdp->chgBus(c+6879,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[30]),17);
        vcdp->chgBus(c+6880,(vlTOPp->TXSim__DOT__streamFifo_12__DOT__logic_ram[31]),17);
        vcdp->chgBus(c+7105,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[0]),17);
        vcdp->chgBus(c+7106,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[1]),17);
        vcdp->chgBus(c+7107,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[2]),17);
        vcdp->chgBus(c+7108,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[3]),17);
        vcdp->chgBus(c+7109,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[4]),17);
        vcdp->chgBus(c+7110,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[5]),17);
        vcdp->chgBus(c+7111,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[6]),17);
        vcdp->chgBus(c+7112,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[7]),17);
        vcdp->chgBus(c+7113,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[8]),17);
        vcdp->chgBus(c+7114,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[9]),17);
        vcdp->chgBus(c+7115,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[10]),17);
        vcdp->chgBus(c+7116,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[11]),17);
        vcdp->chgBus(c+7117,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[12]),17);
        vcdp->chgBus(c+7118,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[13]),17);
        vcdp->chgBus(c+7119,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[14]),17);
        vcdp->chgBus(c+7120,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[15]),17);
        vcdp->chgBus(c+7121,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[16]),17);
        vcdp->chgBus(c+7122,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[17]),17);
        vcdp->chgBus(c+7123,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[18]),17);
        vcdp->chgBus(c+7124,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[19]),17);
        vcdp->chgBus(c+7125,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[20]),17);
        vcdp->chgBus(c+7126,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[21]),17);
        vcdp->chgBus(c+7127,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[22]),17);
        vcdp->chgBus(c+7128,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[23]),17);
        vcdp->chgBus(c+7129,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[24]),17);
        vcdp->chgBus(c+7130,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[25]),17);
        vcdp->chgBus(c+7131,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[26]),17);
        vcdp->chgBus(c+7132,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[27]),17);
        vcdp->chgBus(c+7133,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[28]),17);
        vcdp->chgBus(c+7134,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[29]),17);
        vcdp->chgBus(c+7135,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[30]),17);
        vcdp->chgBus(c+7136,(vlTOPp->TXSim__DOT__phy_header_extender_result_data_queueWithAvailability__DOT__logic_ram[31]),17);
        vcdp->chgBit(c+7361,((1U & (~ (IData)(vlTOPp->TXSim__DOT__clkCrossing_8__DOT__area_clkO_buf1)))));
        vcdp->chgBus(c+7369,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[0]),17);
        vcdp->chgBus(c+7370,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[1]),17);
        vcdp->chgBus(c+7371,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[2]),17);
        vcdp->chgBus(c+7372,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[3]),17);
        vcdp->chgBus(c+7373,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[4]),17);
        vcdp->chgBus(c+7374,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[5]),17);
        vcdp->chgBus(c+7375,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[6]),17);
        vcdp->chgBus(c+7376,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[7]),17);
        vcdp->chgBus(c+7377,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[8]),17);
        vcdp->chgBus(c+7378,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[9]),17);
        vcdp->chgBus(c+7379,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[10]),17);
        vcdp->chgBus(c+7380,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[11]),17);
        vcdp->chgBus(c+7381,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[12]),17);
        vcdp->chgBus(c+7382,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[13]),17);
        vcdp->chgBus(c+7383,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[14]),17);
        vcdp->chgBus(c+7384,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[15]),17);
        vcdp->chgBus(c+7385,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[16]),17);
        vcdp->chgBus(c+7386,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[17]),17);
        vcdp->chgBus(c+7387,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[18]),17);
        vcdp->chgBus(c+7388,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[19]),17);
        vcdp->chgBus(c+7389,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[20]),17);
        vcdp->chgBus(c+7390,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[21]),17);
        vcdp->chgBus(c+7391,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[22]),17);
        vcdp->chgBus(c+7392,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[23]),17);
        vcdp->chgBus(c+7393,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[24]),17);
        vcdp->chgBus(c+7394,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[25]),17);
        vcdp->chgBus(c+7395,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[26]),17);
        vcdp->chgBus(c+7396,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[27]),17);
        vcdp->chgBus(c+7397,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[28]),17);
        vcdp->chgBus(c+7398,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[29]),17);
        vcdp->chgBus(c+7399,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[30]),17);
        vcdp->chgBus(c+7400,(vlTOPp->TXSim__DOT__phy_tx_scrambler_result_data_queueWithAvailability__DOT__logic_ram[31]),17);
        vcdp->chgBit(c+7625,((0U != (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))));
        vcdp->chgBit(c+7633,((1U != (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))));
        vcdp->chgBit(c+7641,((2U != (IData)(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf1))));
        vcdp->chgBus(c+7649,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[0]),25);
        vcdp->chgBus(c+7650,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[1]),25);
        vcdp->chgBus(c+7651,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[2]),25);
        vcdp->chgBus(c+7652,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[3]),25);
        vcdp->chgBus(c+7653,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[4]),25);
        vcdp->chgBus(c+7654,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[5]),25);
        vcdp->chgBus(c+7655,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[6]),25);
        vcdp->chgBus(c+7656,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[7]),25);
        vcdp->chgBus(c+7657,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[8]),25);
        vcdp->chgBus(c+7658,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[9]),25);
        vcdp->chgBus(c+7659,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[10]),25);
        vcdp->chgBus(c+7660,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[11]),25);
        vcdp->chgBus(c+7661,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[12]),25);
        vcdp->chgBus(c+7662,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[13]),25);
        vcdp->chgBus(c+7663,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[14]),25);
        vcdp->chgBus(c+7664,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[15]),25);
        vcdp->chgBus(c+7665,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[16]),25);
        vcdp->chgBus(c+7666,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[17]),25);
        vcdp->chgBus(c+7667,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[18]),25);
        vcdp->chgBus(c+7668,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[19]),25);
        vcdp->chgBus(c+7669,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[20]),25);
        vcdp->chgBus(c+7670,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[21]),25);
        vcdp->chgBus(c+7671,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[22]),25);
        vcdp->chgBus(c+7672,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[23]),25);
        vcdp->chgBus(c+7673,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[24]),25);
        vcdp->chgBus(c+7674,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[25]),25);
        vcdp->chgBus(c+7675,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[26]),25);
        vcdp->chgBus(c+7676,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[27]),25);
        vcdp->chgBus(c+7677,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[28]),25);
        vcdp->chgBus(c+7678,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[29]),25);
        vcdp->chgBus(c+7679,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[30]),25);
        vcdp->chgBus(c+7680,(vlTOPp->TXSim__DOT__streamFifo_13__DOT__logic_ram[31]),25);
        vcdp->chgBit(c+7905,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_1));
        vcdp->chgBit(c+7913,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_2));
        vcdp->chgBit(c+7921,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_3));
        vcdp->chgBit(c+7929,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_4));
        vcdp->chgBit(c+7937,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_5));
        vcdp->chgBit(c+7945,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_6));
        vcdp->chgBit(c+7953,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_7));
        vcdp->chgBit(c+7961,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_8));
        vcdp->chgBit(c+7969,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_9));
        vcdp->chgBit(c+7977,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_10));
        vcdp->chgBit(c+7985,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_11));
        vcdp->chgBit(c+7993,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_12));
        vcdp->chgBit(c+8001,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_13));
        vcdp->chgBit(c+8009,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_14));
        vcdp->chgBit(c+8017,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_15));
        vcdp->chgBit(c+8025,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_16));
        vcdp->chgBit(c+8033,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_17));
        vcdp->chgBit(c+8041,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_18));
        vcdp->chgBit(c+8049,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_19));
        vcdp->chgBit(c+8057,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_20));
        vcdp->chgBit(c+8065,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_21));
        vcdp->chgBit(c+8073,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_22));
        vcdp->chgBit(c+8081,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_23));
        vcdp->chgBit(c+8089,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__raw_data_payload_last_delay_24));
        vcdp->chgBus(c+8097,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_0),7);
        vcdp->chgBus(c+8105,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_1),7);
        vcdp->chgBus(c+8113,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_2),7);
        vcdp->chgBus(c+8121,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_3),7);
        vcdp->chgBus(c+8129,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_4),7);
        vcdp->chgBus(c+8137,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_5),7);
        vcdp->chgBus(c+8145,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_6),7);
        vcdp->chgBus(c+8153,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_7),7);
        vcdp->chgBus(c+8161,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_8),7);
        vcdp->chgBus(c+8169,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_9),7);
        vcdp->chgBus(c+8177,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_10),7);
        vcdp->chgBus(c+8185,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_11),7);
        vcdp->chgBus(c+8193,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_12),7);
        vcdp->chgBus(c+8201,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_13),7);
        vcdp->chgBus(c+8209,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_14),7);
        vcdp->chgBus(c+8217,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_15),7);
        vcdp->chgBus(c+8225,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_16),7);
        vcdp->chgBus(c+8233,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_17),7);
        vcdp->chgBus(c+8241,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_18),7);
        vcdp->chgBus(c+8249,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_19),7);
        vcdp->chgBus(c+8257,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_20),7);
        vcdp->chgBus(c+8265,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_21),7);
        vcdp->chgBus(c+8273,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_22),7);
        vcdp->chgBus(c+8281,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_23),7);
        vcdp->chgBus(c+8289,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_24),7);
        vcdp->chgBus(c+8297,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_25),7);
        vcdp->chgBus(c+8305,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_26),7);
        vcdp->chgBus(c+8313,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_27),7);
        vcdp->chgBus(c+8321,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_28),7);
        vcdp->chgBus(c+8329,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_29),7);
        vcdp->chgBus(c+8337,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_30),7);
        vcdp->chgBus(c+8345,(vlTOPp->TXSim__DOT__phy_tx_filter__DOT__fir_filter_iq__DOT__coff_mem_31),7);
        vcdp->chgBus(c+8353,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[0]),25);
        vcdp->chgBus(c+8354,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[1]),25);
        vcdp->chgBus(c+8355,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[2]),25);
        vcdp->chgBus(c+8356,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[3]),25);
        vcdp->chgBus(c+8357,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[4]),25);
        vcdp->chgBus(c+8358,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[5]),25);
        vcdp->chgBus(c+8359,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[6]),25);
        vcdp->chgBus(c+8360,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[7]),25);
        vcdp->chgBus(c+8361,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[8]),25);
        vcdp->chgBus(c+8362,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[9]),25);
        vcdp->chgBus(c+8363,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[10]),25);
        vcdp->chgBus(c+8364,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[11]),25);
        vcdp->chgBus(c+8365,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[12]),25);
        vcdp->chgBus(c+8366,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[13]),25);
        vcdp->chgBus(c+8367,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[14]),25);
        vcdp->chgBus(c+8368,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[15]),25);
        vcdp->chgBus(c+8369,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[16]),25);
        vcdp->chgBus(c+8370,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[17]),25);
        vcdp->chgBus(c+8371,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[18]),25);
        vcdp->chgBus(c+8372,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[19]),25);
        vcdp->chgBus(c+8373,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[20]),25);
        vcdp->chgBus(c+8374,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[21]),25);
        vcdp->chgBus(c+8375,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[22]),25);
        vcdp->chgBus(c+8376,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[23]),25);
        vcdp->chgBus(c+8377,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[24]),25);
        vcdp->chgBus(c+8378,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[25]),25);
        vcdp->chgBus(c+8379,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[26]),25);
        vcdp->chgBus(c+8380,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[27]),25);
        vcdp->chgBus(c+8381,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[28]),25);
        vcdp->chgBus(c+8382,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[29]),25);
        vcdp->chgBus(c+8383,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[30]),25);
        vcdp->chgBus(c+8384,(vlTOPp->TXSim__DOT__phy_tx_filter_result_data_queueWithAvailability__DOT__logic_ram[31]),25);
        vcdp->chgBit(c+8609,(vlTOPp->TXSim__DOT__clkCrossing_8__DOT__area_clkI_reg));
        vcdp->chgBit(c+8617,(vlTOPp->TXSim__DOT__clkCrossing_8__DOT__area_clkO_buf0));
        vcdp->chgBus(c+8625,(vlTOPp->TXSim__DOT__clkCrossing_9__DOT__area_clkI_reg),4);
        vcdp->chgBus(c+8633,(vlTOPp->TXSim__DOT__clkCrossing_9__DOT__area_clkO_buf0),4);
        vcdp->chgBus(c+8641,(vlTOPp->TXSim__DOT__clkCrossing_10__DOT__area_clkI_reg),4);
        vcdp->chgBus(c+8649,(vlTOPp->TXSim__DOT__clkCrossing_10__DOT__area_clkO_buf0),4);
        vcdp->chgBus(c+8657,(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkI_reg),2);
        vcdp->chgBus(c+8665,(vlTOPp->TXSim__DOT__clkCrossing_11__DOT__area_clkO_buf0),2);
    }
}

void VTXSim::traceChgThis__27(VTXSim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+8673,(vlTOPp->TXSim__DOT__data_div_bridge_enable_driver));
        vcdp->chgBus(c+8681,(vlTOPp->TXSim__DOT__data_div_bridge_cnt_step_driver),4);
        vcdp->chgBus(c+8689,(vlTOPp->TXSim__DOT__data_div_bridge_cnt_limit_driver),4);
        vcdp->chgBus(c+8697,(vlTOPp->TXSim__DOT__mod_rtl_bridge_select_driver),2);
    }
}

void VTXSim::traceChgThis__28(VTXSim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTXSim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+8705,(vlTOPp->axil4Ctrl_awvalid));
        vcdp->chgBit(c+8713,(vlTOPp->axil4Ctrl_awready));
        vcdp->chgBus(c+8721,(vlTOPp->axil4Ctrl_awaddr),8);
        vcdp->chgBus(c+8729,(vlTOPp->axil4Ctrl_awprot),3);
        vcdp->chgBit(c+8737,(vlTOPp->axil4Ctrl_wvalid));
        vcdp->chgBit(c+8745,(vlTOPp->axil4Ctrl_wready));
        vcdp->chgBus(c+8753,(vlTOPp->axil4Ctrl_wdata),32);
        vcdp->chgBus(c+8761,(vlTOPp->axil4Ctrl_wstrb),4);
        vcdp->chgBit(c+8769,(vlTOPp->axil4Ctrl_bvalid));
        vcdp->chgBit(c+8777,(vlTOPp->axil4Ctrl_bready));
        vcdp->chgBus(c+8785,(vlTOPp->axil4Ctrl_bresp),2);
        vcdp->chgBit(c+8793,(vlTOPp->axil4Ctrl_arvalid));
        vcdp->chgBit(c+8801,(vlTOPp->axil4Ctrl_arready));
        vcdp->chgBus(c+8809,(vlTOPp->axil4Ctrl_araddr),8);
        vcdp->chgBus(c+8817,(vlTOPp->axil4Ctrl_arprot),3);
        vcdp->chgBit(c+8825,(vlTOPp->axil4Ctrl_rvalid));
        vcdp->chgBit(c+8833,(vlTOPp->axil4Ctrl_rready));
        vcdp->chgBus(c+8841,(vlTOPp->axil4Ctrl_rdata),32);
        vcdp->chgBus(c+8849,(vlTOPp->axil4Ctrl_rresp),2);
        vcdp->chgBit(c+8857,(vlTOPp->raw_data_tvalid));
        vcdp->chgBit(c+8865,(vlTOPp->raw_data_tready));
        vcdp->chgBus(c+8873,(vlTOPp->raw_data_tdata),32);
        vcdp->chgBus(c+8881,(vlTOPp->raw_data_tstrb),4);
        vcdp->chgBus(c+8889,(vlTOPp->raw_data_tkeep),4);
        vcdp->chgBit(c+8897,(vlTOPp->raw_data_tlast));
        vcdp->chgBit(c+8905,(vlTOPp->result_data_valid));
        vcdp->chgBit(c+8913,(vlTOPp->result_data_ready));
        vcdp->chgBus(c+8921,(vlTOPp->result_data_payload_cha_i),12);
        vcdp->chgBus(c+8929,(vlTOPp->result_data_payload_cha_q),12);
        vcdp->chgBit(c+8937,(vlTOPp->clk));
        vcdp->chgBit(c+8945,(vlTOPp->reset));
        vcdp->chgBit(c+8953,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
                              & (IData)(vlTOPp->axil4Ctrl_rready))));
    }
}
