// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxiLite4Demodulator__Syms.h"


//======================

void VAxiLite4Demodulator::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxiLite4Demodulator* t = (VAxiLite4Demodulator*)userthis;
    VAxiLite4Demodulator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VAxiLite4Demodulator::traceChgThis(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 6U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x40U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAxiLite4Demodulator::traceChgThis__2(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__comp_cmp_i),3);
        vcdp->chgBus(c+9,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__comp_cmp_q),3);
        vcdp->chgBus(c+17,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__comp_cmp_i),5);
        vcdp->chgBus(c+25,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__comp_cmp_q),5);
        vcdp->chgQuad(c+33,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_i),63);
        vcdp->chgQuad(c+49,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_cmp_q),63);
    }
}

void VAxiLite4Demodulator::traceChgThis__3(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+65,(vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_valid));
        vcdp->chgBit(c+73,(vlTOPp->AxiLite4Demodulator__DOT___zz_writeJoinEvent_translated_ready));
        vcdp->chgBit(c+81,(vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_fire));
        vcdp->chgBit(c+89,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_1_valid));
        vcdp->chgBit(c+97,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_2_valid));
        vcdp->chgBit(c+105,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_3_valid));
    }
}

void VAxiLite4Demodulator::traceChgThis__4(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+113,(vlTOPp->AxiLite4Demodulator__DOT__readRsp_data),32);
    }
}

void VAxiLite4Demodulator::traceChgThis__5(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+121,(vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_addr),8);
        vcdp->chgBus(c+129,(vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_prot),3);
    }
}

void VAxiLite4Demodulator::traceChgThis__6(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+137,((0xfffU & ((4U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                        ? ((0x1fffU 
                                            & ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_i) 
                                               << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_11__DOT__area_clkO_buf1))) 
                                           | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_q))
                                        : ((2U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                            ? ((1U 
                                                & (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                                ? (
                                                   ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__unit_data_i) 
                                                    << 3U) 
                                                   | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__unit_data_q))
                                                : (
                                                   ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__unit_data_i) 
                                                    << 2U) 
                                                   | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__unit_data_q)))
                                            : ((1U 
                                                & (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                                ? (
                                                   ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__unit_data_i) 
                                                    << 1U) 
                                                   | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__unit_data_q))
                                                : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__unit_data_i)))))),24);
        vcdp->chgBit(c+145,(((4U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                              ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_valid)
                              : ((2U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                  ? ((1U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                      ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__unit_valid)
                                      : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__unit_valid))
                                  : ((1U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                      ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__unit_valid)
                                      : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__unit_valid))))));
        vcdp->chgBus(c+153,((0xfffU & ((4U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                        ? ((0x1fffU 
                                            & ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_i) 
                                               << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_11__DOT__area_clkO_buf1))) 
                                           | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_q))
                                        : ((2U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                            ? ((1U 
                                                & (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                                ? (
                                                   ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__unit_data_i) 
                                                    << 3U) 
                                                   | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__unit_data_q))
                                                : (
                                                   ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__unit_data_i) 
                                                    << 2U) 
                                                   | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__unit_data_q)))
                                            : ((1U 
                                                & (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                                                ? (
                                                   ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__unit_data_i) 
                                                    << 1U) 
                                                   | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__unit_data_q))
                                                : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__unit_data_i)))))),12);
        vcdp->chgBit(c+161,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_valid_1));
        vcdp->chgBus(c+169,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_buffer),24);
        vcdp->chgBit(c+177,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf1));
        vcdp->chgBus(c+185,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf1),2);
        vcdp->chgBus(c+193,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_11__DOT__area_clkO_buf1),3);
        vcdp->chgBus(c+201,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf1),6);
        vcdp->chgBus(c+209,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf1),32);
        vcdp->chgBus(c+217,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1),3);
        vcdp->chgBit(c+225,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_15__DOT__area_clkO_buf1));
        vcdp->chgBus(c+233,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_16__DOT__area_clkO_buf1),5);
        vcdp->chgBus(c+241,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_17__DOT__area_clkO_buf1),5);
        vcdp->chgBit(c+249,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__unit_valid));
        vcdp->chgBus(c+257,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__unit_data_i),12);
        vcdp->chgBit(c+265,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__unit_valid));
        vcdp->chgBus(c+273,((((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__unit_data_i) 
                              << 1U) | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__unit_data_q))),12);
        vcdp->chgBit(c+281,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__unit_valid));
        vcdp->chgBus(c+289,((((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__unit_data_i) 
                              << 2U) | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__unit_data_q))),12);
        vcdp->chgBit(c+297,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__unit_valid));
        vcdp->chgBus(c+305,((((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__unit_data_i) 
                              << 3U) | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__unit_data_q))),12);
        vcdp->chgBit(c+313,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_valid));
        vcdp->chgBus(c+321,((0xfffU & ((0x1fffU & ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_i) 
                                                   << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_11__DOT__area_clkO_buf1))) 
                                       | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_q)))),12);
        vcdp->chgBit(c+329,((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))));
        vcdp->chgBit(c+337,((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))));
        vcdp->chgBit(c+345,((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))));
        vcdp->chgBit(c+353,((3U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))));
        vcdp->chgBit(c+361,((4U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))));
        vcdp->chgBus(c+369,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__demod_data_i),16);
        vcdp->chgBit(c+377,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__demod_valid_i));
        vcdp->chgBit(c+385,(VL_LTS_III(1,16,16, 0U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__demod_data_i))));
        vcdp->chgBit(c+393,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__compTable_i));
        vcdp->chgBit(c+401,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__demod_valid));
        vcdp->chgBit(c+409,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__bpsk_demod__DOT__unit_data_i));
        vcdp->chgBus(c+417,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__demod_data_i),16);
        vcdp->chgBit(c+425,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__demod_valid_i));
        vcdp->chgBus(c+433,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__demod_data_q),16);
        vcdp->chgBit(c+441,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__demod_valid_q));
        vcdp->chgBit(c+449,(VL_LTS_III(1,16,16, 0U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__demod_data_i))));
        vcdp->chgBit(c+457,(VL_LTS_III(1,16,16, 0U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__demod_data_q))));
        vcdp->chgBit(c+465,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__compTable_i));
        vcdp->chgBit(c+473,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__codeTable_q));
        vcdp->chgBit(c+481,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__demod_valid));
        vcdp->chgBit(c+489,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__unit_data_i));
        vcdp->chgBit(c+497,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qpsk_demod__DOT__unit_data_q));
        vcdp->chgBus(c+505,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__demod_data_i),16);
        vcdp->chgBit(c+513,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__demod_valid_i));
        vcdp->chgBus(c+521,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__demod_data_q),16);
        vcdp->chgBit(c+529,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__demod_valid_q));
        vcdp->chgBus(c+537,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__compTable_i),3);
        vcdp->chgBus(c+545,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__codeTable_q),3);
        vcdp->chgBit(c+553,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__demod_valid));
        vcdp->chgBus(c+561,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__unit_data_i),2);
        vcdp->chgBus(c+569,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam16_demod__DOT__unit_data_q),2);
        vcdp->chgBus(c+577,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_data_i),16);
        vcdp->chgBit(c+585,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_valid_i));
        vcdp->chgBus(c+593,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_data_q),16);
        vcdp->chgBit(c+601,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_valid_q));
        vcdp->chgBus(c+609,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__compTable_i),5);
        vcdp->chgBus(c+617,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__codeTable_q),5);
        vcdp->chgBit(c+625,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__demod_valid));
        vcdp->chgBus(c+633,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__unit_data_i),3);
        vcdp->chgBus(c+641,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__qam64_demod__DOT__unit_data_q),3);
        vcdp->chgBus(c+649,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_i),16);
        vcdp->chgBus(c+657,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_data_q),16);
        vcdp->chgBit(c+665,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_valid_iq));
        vcdp->chgBus(c+673,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_0),16);
        vcdp->chgBus(c+681,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_1),16);
        vcdp->chgBus(c+689,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_2),16);
        vcdp->chgBus(c+697,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_3),16);
        vcdp->chgBus(c+705,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_4),16);
        vcdp->chgBus(c+713,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_5),16);
        vcdp->chgBus(c+721,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_6),16);
        vcdp->chgBus(c+729,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_7),16);
        vcdp->chgBus(c+737,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_8),16);
        vcdp->chgBus(c+745,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_9),16);
        vcdp->chgBus(c+753,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_10),16);
        vcdp->chgBus(c+761,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_11),16);
        vcdp->chgBus(c+769,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_12),16);
        vcdp->chgBus(c+777,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_13),16);
        vcdp->chgBus(c+785,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_14),16);
        vcdp->chgBus(c+793,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_15),16);
        vcdp->chgBus(c+801,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_16),16);
        vcdp->chgBus(c+809,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_17),16);
        vcdp->chgBus(c+817,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_18),16);
        vcdp->chgBus(c+825,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_19),16);
        vcdp->chgBus(c+833,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_20),16);
        vcdp->chgBus(c+841,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_21),16);
        vcdp->chgBus(c+849,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_22),16);
        vcdp->chgBus(c+857,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_23),16);
        vcdp->chgBus(c+865,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_24),16);
        vcdp->chgBus(c+873,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_25),16);
        vcdp->chgBus(c+881,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_26),16);
        vcdp->chgBus(c+889,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_27),16);
        vcdp->chgBus(c+897,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_28),16);
        vcdp->chgBus(c+905,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_29),16);
        vcdp->chgBus(c+913,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_30),16);
        vcdp->chgBus(c+921,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_31),16);
        vcdp->chgBus(c+929,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_32),16);
        vcdp->chgBus(c+937,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_33),16);
        vcdp->chgBus(c+945,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_34),16);
        vcdp->chgBus(c+953,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_35),16);
        vcdp->chgBus(c+961,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_36),16);
        vcdp->chgBus(c+969,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_37),16);
        vcdp->chgBus(c+977,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_38),16);
        vcdp->chgBus(c+985,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_39),16);
        vcdp->chgBus(c+993,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_40),16);
        vcdp->chgBus(c+1001,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_41),16);
        vcdp->chgBus(c+1009,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_42),16);
        vcdp->chgBus(c+1017,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_43),16);
        vcdp->chgBus(c+1025,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_44),16);
        vcdp->chgBus(c+1033,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_45),16);
        vcdp->chgBus(c+1041,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_46),16);
        vcdp->chgBus(c+1049,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_47),16);
        vcdp->chgBus(c+1057,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_48),16);
        vcdp->chgBus(c+1065,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_49),16);
        vcdp->chgBus(c+1073,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_50),16);
        vcdp->chgBus(c+1081,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_51),16);
        vcdp->chgBus(c+1089,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_52),16);
        vcdp->chgBus(c+1097,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_53),16);
        vcdp->chgBus(c+1105,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_54),16);
        vcdp->chgBus(c+1113,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_55),16);
        vcdp->chgBus(c+1121,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_56),16);
        vcdp->chgBus(c+1129,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_57),16);
        vcdp->chgBus(c+1137,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_58),16);
        vcdp->chgBus(c+1145,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_59),16);
        vcdp->chgBus(c+1153,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_60),16);
        vcdp->chgBus(c+1161,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_61),16);
        vcdp->chgBus(c+1169,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_i_62),16);
        vcdp->chgBus(c+1177,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_0),16);
        vcdp->chgBus(c+1185,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_1),16);
        vcdp->chgBus(c+1193,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_2),16);
        vcdp->chgBus(c+1201,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_3),16);
        vcdp->chgBus(c+1209,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_4),16);
        vcdp->chgBus(c+1217,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_5),16);
        vcdp->chgBus(c+1225,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_6),16);
        vcdp->chgBus(c+1233,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_7),16);
        vcdp->chgBus(c+1241,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_8),16);
        vcdp->chgBus(c+1249,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_9),16);
        vcdp->chgBus(c+1257,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_10),16);
        vcdp->chgBus(c+1265,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_11),16);
        vcdp->chgBus(c+1273,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_12),16);
        vcdp->chgBus(c+1281,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_13),16);
        vcdp->chgBus(c+1289,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_14),16);
        vcdp->chgBus(c+1297,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_15),16);
        vcdp->chgBus(c+1305,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_16),16);
        vcdp->chgBus(c+1313,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_17),16);
        vcdp->chgBus(c+1321,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_18),16);
        vcdp->chgBus(c+1329,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_19),16);
        vcdp->chgBus(c+1337,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_20),16);
        vcdp->chgBus(c+1345,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_21),16);
        vcdp->chgBus(c+1353,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_22),16);
        vcdp->chgBus(c+1361,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_23),16);
        vcdp->chgBus(c+1369,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_24),16);
        vcdp->chgBus(c+1377,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_25),16);
        vcdp->chgBus(c+1385,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_26),16);
        vcdp->chgBus(c+1393,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_27),16);
        vcdp->chgBus(c+1401,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_28),16);
        vcdp->chgBus(c+1409,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_29),16);
        vcdp->chgBus(c+1417,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_30),16);
        vcdp->chgBus(c+1425,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_31),16);
        vcdp->chgBus(c+1433,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_32),16);
        vcdp->chgBus(c+1441,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_33),16);
        vcdp->chgBus(c+1449,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_34),16);
        vcdp->chgBus(c+1457,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_35),16);
        vcdp->chgBus(c+1465,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_36),16);
        vcdp->chgBus(c+1473,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_37),16);
        vcdp->chgBus(c+1481,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_38),16);
        vcdp->chgBus(c+1489,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_39),16);
        vcdp->chgBus(c+1497,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_40),16);
        vcdp->chgBus(c+1505,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_41),16);
        vcdp->chgBus(c+1513,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_42),16);
    }
}

void VAxiLite4Demodulator::traceChgThis__8(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1521,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_43),16);
        vcdp->chgBus(c+1529,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_44),16);
        vcdp->chgBus(c+1537,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_45),16);
        vcdp->chgBus(c+1545,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_46),16);
        vcdp->chgBus(c+1553,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_47),16);
        vcdp->chgBus(c+1561,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_48),16);
        vcdp->chgBus(c+1569,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_49),16);
        vcdp->chgBus(c+1577,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_50),16);
        vcdp->chgBus(c+1585,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_51),16);
        vcdp->chgBus(c+1593,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_52),16);
        vcdp->chgBus(c+1601,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_53),16);
        vcdp->chgBus(c+1609,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_54),16);
        vcdp->chgBus(c+1617,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_55),16);
        vcdp->chgBus(c+1625,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_56),16);
        vcdp->chgBus(c+1633,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_57),16);
        vcdp->chgBus(c+1641,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_58),16);
        vcdp->chgBus(c+1649,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_59),16);
        vcdp->chgBus(c+1657,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_60),16);
        vcdp->chgBus(c+1665,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_61),16);
        vcdp->chgBus(c+1673,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__comp_mem_q_62),16);
        vcdp->chgBus(c+1681,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_0),6);
        vcdp->chgBus(c+1689,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_1),6);
        vcdp->chgBus(c+1697,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_2),6);
        vcdp->chgBus(c+1705,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_3),6);
        vcdp->chgBus(c+1713,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_4),6);
        vcdp->chgBus(c+1721,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_5),6);
        vcdp->chgBus(c+1729,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_6),6);
        vcdp->chgBus(c+1737,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_7),6);
        vcdp->chgBus(c+1745,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_8),6);
        vcdp->chgBus(c+1753,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_9),6);
        vcdp->chgBus(c+1761,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_10),6);
        vcdp->chgBus(c+1769,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_11),6);
        vcdp->chgBus(c+1777,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_12),6);
        vcdp->chgBus(c+1785,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_13),6);
        vcdp->chgBus(c+1793,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_14),6);
        vcdp->chgBus(c+1801,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_15),6);
        vcdp->chgBus(c+1809,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_16),6);
        vcdp->chgBus(c+1817,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_17),6);
        vcdp->chgBus(c+1825,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_18),6);
        vcdp->chgBus(c+1833,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_19),6);
        vcdp->chgBus(c+1841,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_20),6);
        vcdp->chgBus(c+1849,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_21),6);
        vcdp->chgBus(c+1857,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_22),6);
        vcdp->chgBus(c+1865,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_23),6);
        vcdp->chgBus(c+1873,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_24),6);
        vcdp->chgBus(c+1881,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_25),6);
        vcdp->chgBus(c+1889,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_26),6);
        vcdp->chgBus(c+1897,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_27),6);
        vcdp->chgBus(c+1905,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_28),6);
        vcdp->chgBus(c+1913,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_29),6);
        vcdp->chgBus(c+1921,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_30),6);
        vcdp->chgBus(c+1929,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_31),6);
        vcdp->chgBus(c+1937,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_32),6);
        vcdp->chgBus(c+1945,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_33),6);
        vcdp->chgBus(c+1953,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_34),6);
        vcdp->chgBus(c+1961,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_35),6);
        vcdp->chgBus(c+1969,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_36),6);
        vcdp->chgBus(c+1977,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_37),6);
        vcdp->chgBus(c+1985,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_38),6);
        vcdp->chgBus(c+1993,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_39),6);
        vcdp->chgBus(c+2001,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_40),6);
        vcdp->chgBus(c+2009,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_41),6);
        vcdp->chgBus(c+2017,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_42),6);
        vcdp->chgBus(c+2025,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_43),6);
        vcdp->chgBus(c+2033,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_44),6);
        vcdp->chgBus(c+2041,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_45),6);
        vcdp->chgBus(c+2049,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_46),6);
        vcdp->chgBus(c+2057,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_47),6);
        vcdp->chgBus(c+2065,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_48),6);
        vcdp->chgBus(c+2073,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_49),6);
        vcdp->chgBus(c+2081,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_50),6);
        vcdp->chgBus(c+2089,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_51),6);
        vcdp->chgBus(c+2097,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_52),6);
        vcdp->chgBus(c+2105,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_53),6);
        vcdp->chgBus(c+2113,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_54),6);
        vcdp->chgBus(c+2121,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_55),6);
        vcdp->chgBus(c+2129,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_56),6);
        vcdp->chgBus(c+2137,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_57),6);
        vcdp->chgBus(c+2145,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_58),6);
        vcdp->chgBus(c+2153,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_59),6);
        vcdp->chgBus(c+2161,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_60),6);
        vcdp->chgBus(c+2169,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_61),6);
        vcdp->chgBus(c+2177,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_62),6);
        vcdp->chgBus(c+2185,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_i_63),6);
        vcdp->chgBus(c+2193,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_0),6);
        vcdp->chgBus(c+2201,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_1),6);
        vcdp->chgBus(c+2209,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_2),6);
        vcdp->chgBus(c+2217,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_3),6);
        vcdp->chgBus(c+2225,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_4),6);
        vcdp->chgBus(c+2233,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_5),6);
        vcdp->chgBus(c+2241,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_6),6);
        vcdp->chgBus(c+2249,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_7),6);
        vcdp->chgBus(c+2257,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_8),6);
        vcdp->chgBus(c+2265,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_9),6);
        vcdp->chgBus(c+2273,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_10),6);
        vcdp->chgBus(c+2281,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_11),6);
        vcdp->chgBus(c+2289,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_12),6);
        vcdp->chgBus(c+2297,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_13),6);
        vcdp->chgBus(c+2305,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_14),6);
        vcdp->chgBus(c+2313,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_15),6);
        vcdp->chgBus(c+2321,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_16),6);
        vcdp->chgBus(c+2329,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_17),6);
        vcdp->chgBus(c+2337,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_18),6);
        vcdp->chgBus(c+2345,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_19),6);
        vcdp->chgBus(c+2353,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_20),6);
        vcdp->chgBus(c+2361,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_21),6);
        vcdp->chgBus(c+2369,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_22),6);
        vcdp->chgBus(c+2377,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_23),6);
        vcdp->chgBus(c+2385,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_24),6);
        vcdp->chgBus(c+2393,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_25),6);
        vcdp->chgBus(c+2401,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_26),6);
        vcdp->chgBus(c+2409,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_27),6);
        vcdp->chgBus(c+2417,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_28),6);
        vcdp->chgBus(c+2425,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_29),6);
        vcdp->chgBus(c+2433,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_30),6);
        vcdp->chgBus(c+2441,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_31),6);
        vcdp->chgBus(c+2449,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_32),6);
        vcdp->chgBus(c+2457,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_33),6);
        vcdp->chgBus(c+2465,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_34),6);
        vcdp->chgBus(c+2473,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_35),6);
        vcdp->chgBus(c+2481,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_36),6);
        vcdp->chgBus(c+2489,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_37),6);
        vcdp->chgBus(c+2497,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_38),6);
        vcdp->chgBus(c+2505,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_39),6);
        vcdp->chgBus(c+2513,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_40),6);
        vcdp->chgBus(c+2521,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_41),6);
        vcdp->chgBus(c+2529,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_42),6);
        vcdp->chgBus(c+2537,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_43),6);
        vcdp->chgBus(c+2545,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_44),6);
        vcdp->chgBus(c+2553,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_45),6);
        vcdp->chgBus(c+2561,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_46),6);
        vcdp->chgBus(c+2569,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_47),6);
        vcdp->chgBus(c+2577,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_48),6);
        vcdp->chgBus(c+2585,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_49),6);
        vcdp->chgBus(c+2593,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_50),6);
        vcdp->chgBus(c+2601,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_51),6);
        vcdp->chgBus(c+2609,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_52),6);
        vcdp->chgBus(c+2617,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_53),6);
        vcdp->chgBus(c+2625,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_54),6);
        vcdp->chgBus(c+2633,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_55),6);
        vcdp->chgBus(c+2641,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_56),6);
        vcdp->chgBus(c+2649,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_57),6);
        vcdp->chgBus(c+2657,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_58),6);
        vcdp->chgBus(c+2665,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_59),6);
        vcdp->chgBus(c+2673,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_60),6);
        vcdp->chgBus(c+2681,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_61),6);
        vcdp->chgBus(c+2689,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_62),6);
        vcdp->chgBus(c+2697,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__code_mem_q_63),6);
        vcdp->chgQuad(c+2705,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_i),63);
        vcdp->chgQuad(c+2721,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__compTable_q),63);
        vcdp->chgBit(c+2737,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__demod_valid));
        vcdp->chgBus(c+2745,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_i),6);
        vcdp->chgBus(c+2753,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__lookup_demod__DOT__unit_data_q),6);
        vcdp->chgBus(c+2761,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt),5);
        vcdp->chgBus(c+2769,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__unit_data_buffer),24);
        vcdp->chgBit(c+2777,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__unit_data_valid_1));
        vcdp->chgBit(c+2785,((1U & (~ (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_15__DOT__area_clkO_buf1)))));
        vcdp->chgBit(c+2793,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkO_buf0));
        vcdp->chgBus(c+2801,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkO_buf0),2);
        vcdp->chgBus(c+2809,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_11__DOT__area_clkO_buf0),3);
        vcdp->chgBus(c+2817,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkO_buf0),6);
        vcdp->chgBus(c+2825,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkO_buf0),32);
        vcdp->chgBus(c+2833,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf0),3);
        vcdp->chgBit(c+2841,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_15__DOT__area_clkO_buf0));
        vcdp->chgBus(c+2849,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_16__DOT__area_clkO_buf0),5);
        vcdp->chgBus(c+2857,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_17__DOT__area_clkO_buf0),5);
    }
}

void VAxiLite4Demodulator::traceChgThis__9(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2865,((1U & (~ (IData)(vlTOPp->AxiLite4Demodulator__DOT___zz_axil4Ctrl_bvalid_2)))));
        vcdp->chgBit(c+2873,(vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rValid));
        vcdp->chgBit(c+2881,((1U & (~ (IData)(vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rValid)))));
    }
}

void VAxiLite4Demodulator::traceChgThis__10(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2889,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_9__DOT__area_clkI_reg));
        vcdp->chgBus(c+2897,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_10__DOT__area_clkI_reg),2);
        vcdp->chgBus(c+2905,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_11__DOT__area_clkI_reg),3);
        vcdp->chgBus(c+2913,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_12__DOT__area_clkI_reg),6);
        vcdp->chgBus(c+2921,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_13__DOT__area_clkI_reg),32);
        vcdp->chgBus(c+2929,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkI_reg),3);
        vcdp->chgBit(c+2937,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_15__DOT__area_clkI_reg));
        vcdp->chgBus(c+2945,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_16__DOT__area_clkI_reg),5);
        vcdp->chgBus(c+2953,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_17__DOT__area_clkI_reg),5);
    }
}

void VAxiLite4Demodulator::traceChgThis__11(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2961,(vlTOPp->AxiLite4Demodulator__DOT__demod_rtl_bridge_w_en_driver));
        vcdp->chgBus(c+2969,(vlTOPp->AxiLite4Demodulator__DOT__demod_rtl_bridge_w_sel_driver),2);
        vcdp->chgBus(c+2977,(vlTOPp->AxiLite4Demodulator__DOT__demod_rtl_bridge_iq_shift_driver),3);
        vcdp->chgBus(c+2985,(vlTOPp->AxiLite4Demodulator__DOT___zz_demod_rtl_bridge_w_addr),6);
        vcdp->chgBus(c+2993,(vlTOPp->AxiLite4Demodulator__DOT___zz_demod_rtl_bridge_w_data),32);
        vcdp->chgBus(c+3001,(vlTOPp->AxiLite4Demodulator__DOT___zz_demod_rtl_bridge_select),3);
        vcdp->chgBit(c+3009,(vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_enable_driver));
        vcdp->chgBus(c+3017,(vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_cnt_step_driver),5);
        vcdp->chgBus(c+3025,(vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_cnt_limit_driver),5);
    }
}

void VAxiLite4Demodulator::traceChgThis__12(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3033,(vlTOPp->axil4Ctrl_awvalid));
        vcdp->chgBit(c+3041,(vlTOPp->axil4Ctrl_awready));
        vcdp->chgBus(c+3049,(vlTOPp->axil4Ctrl_awaddr),8);
        vcdp->chgBus(c+3057,(vlTOPp->axil4Ctrl_awprot),3);
        vcdp->chgBit(c+3065,(vlTOPp->axil4Ctrl_wvalid));
        vcdp->chgBit(c+3073,(vlTOPp->axil4Ctrl_wready));
        vcdp->chgBus(c+3081,(vlTOPp->axil4Ctrl_wdata),32);
        vcdp->chgBus(c+3089,(vlTOPp->axil4Ctrl_wstrb),4);
        vcdp->chgBit(c+3097,(vlTOPp->axil4Ctrl_bvalid));
        vcdp->chgBit(c+3105,(vlTOPp->axil4Ctrl_bready));
        vcdp->chgBus(c+3113,(vlTOPp->axil4Ctrl_bresp),2);
        vcdp->chgBit(c+3121,(vlTOPp->axil4Ctrl_arvalid));
        vcdp->chgBit(c+3129,(vlTOPp->axil4Ctrl_arready));
        vcdp->chgBus(c+3137,(vlTOPp->axil4Ctrl_araddr),8);
        vcdp->chgBus(c+3145,(vlTOPp->axil4Ctrl_arprot),3);
        vcdp->chgBit(c+3153,(vlTOPp->axil4Ctrl_rvalid));
        vcdp->chgBit(c+3161,(vlTOPp->axil4Ctrl_rready));
        vcdp->chgBus(c+3169,(vlTOPp->axil4Ctrl_rdata),32);
        vcdp->chgBus(c+3177,(vlTOPp->axil4Ctrl_rresp),2);
        vcdp->chgBit(c+3185,(vlTOPp->mod_iq_valid));
        vcdp->chgBus(c+3193,(vlTOPp->mod_iq_payload_cha_i),16);
        vcdp->chgBus(c+3201,(vlTOPp->mod_iq_payload_cha_q),16);
        vcdp->chgBit(c+3209,(vlTOPp->base_data_valid));
        vcdp->chgBus(c+3217,(vlTOPp->base_data_payload),24);
        vcdp->chgBit(c+3225,(vlTOPp->rf_clk));
        vcdp->chgBit(c+3233,(vlTOPp->rf_resetn));
        vcdp->chgBit(c+3241,(vlTOPp->clk));
        vcdp->chgBit(c+3249,(vlTOPp->reset));
        vcdp->chgBit(c+3257,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
                              & (IData)(vlTOPp->axil4Ctrl_rready))));
        vcdp->chgBit(c+3265,(((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1)) 
                              & (IData)(vlTOPp->mod_iq_valid))));
        vcdp->chgBus(c+3273,(((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                               ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_i))),16);
        vcdp->chgBus(c+3281,(((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                               ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_q))),16);
        vcdp->chgBus(c+3289,(((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                               ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_i))),16);
        vcdp->chgBus(c+3297,(((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                               ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_q))),16);
        vcdp->chgBus(c+3305,(((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                               ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_i))),16);
        vcdp->chgBus(c+3313,(((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                               ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_q))),16);
        vcdp->chgBus(c+3321,(((3U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                               ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_i))),16);
        vcdp->chgBus(c+3329,(((3U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                               ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_q))),16);
        vcdp->chgBit(c+3337,(((4U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1)) 
                              & (IData)(vlTOPp->mod_iq_valid))));
        vcdp->chgBus(c+3345,(((4U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                               ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_i))),16);
        vcdp->chgBus(c+3353,(((4U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_14__DOT__area_clkO_buf1))
                               ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_q))),16);
    }
}
