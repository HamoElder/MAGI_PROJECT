// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxiLite4Modulator__Syms.h"


//======================

void VAxiLite4Modulator::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxiLite4Modulator* t = (VAxiLite4Modulator*)userthis;
    VAxiLite4Modulator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VAxiLite4Modulator::traceChgThis(VAxiLite4Modulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
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
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x20U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x40U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAxiLite4Modulator::traceChgThis__2(VAxiLite4Modulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_ready));
        vcdp->chgBit(c+9,(((4U & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                            ? (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT__when_lookUpMod_l56)
                            : ((2U & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                                ? ((1U & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                                    ? (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT__unit_valid)
                                    : (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_valid))
                                : ((1U & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                                    ? (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qpsk_mod__DOT__unit_valid)
                                    : (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__bpsk_mod__DOT__unit_valid))))));
        vcdp->chgBus(c+17,((0xffffU & ((4U & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                                        ? ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT__when_lookUpMod_l56)
                                            ? (vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT___zz_code_map_port1 
                                               >> 0x10U)
                                            : 0U) : 
                                       ((2U & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                                         ? ((1U & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                                             ? ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT__unit_valid)
                                                 ? (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i)
                                                 : 0U)
                                             : ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_valid)
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_data) 
                                                      >> 2U)))
                                                  ? 0xc349U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_data) 
                                                       >> 2U)))
                                                   ? 0xebc3U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_data) 
                                                        >> 2U)))
                                                    ? 0x3cb6U
                                                    : 0x143cU)))
                                                 : 0U))
                                         : ((1U & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                                             ? ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qpsk_mod__DOT__unit_valid)
                                                 ? 
                                                (vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0 
                                                 >> 0x10U)
                                                 : 0U)
                                             : ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__bpsk_mod__DOT__unit_valid)
                                                 ? 
                                                (((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__bpsk_mod__DOT__unit_data)
                                                   ? 0x7fff0000U
                                                   : 0x80010000U) 
                                                 >> 0x10U)
                                                 : 0U)))))),16);
        vcdp->chgBus(c+25,((0xffffU & ((4U & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                                        ? ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT__when_lookUpMod_l56)
                                            ? vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT___zz_code_map_port1
                                            : 0U) : 
                                       ((2U & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                                         ? ((1U & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                                             ? ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT__unit_valid)
                                                 ? (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q)
                                                 : 0U)
                                             : ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_valid)
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_data)))
                                                  ? 0xc349U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_data)))
                                                   ? 0xebc3U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_data)))
                                                    ? 0x3cb6U
                                                    : 0x143cU)))
                                                 : 0U))
                                         : ((1U & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                                             ? ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qpsk_mod__DOT__unit_valid)
                                                 ? vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0
                                                 : 0U)
                                             : ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__bpsk_mod__DOT__unit_valid)
                                                 ? 
                                                ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__bpsk_mod__DOT__unit_data)
                                                  ? 0x7fff0000U
                                                  : 0x80010000U)
                                                 : 0U)))))),16);
        vcdp->chgBit(c+33,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__when_dataDivDynamic_l47));
        vcdp->chgBus(c+41,(((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qpsk_mod__DOT__unit_valid)
                             ? (0xffffU & (vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0 
                                           >> 0x10U))
                             : 0U)),16);
        vcdp->chgBus(c+49,(((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qpsk_mod__DOT__unit_valid)
                             ? (0xffffU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0)
                             : 0U)),16);
        vcdp->chgBus(c+57,(((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT__unit_valid)
                             ? (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i)
                             : 0U)),16);
        vcdp->chgBus(c+65,(((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT__unit_valid)
                             ? (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q)
                             : 0U)),16);
        vcdp->chgBit(c+73,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT__when_lookUpMod_l56));
        vcdp->chgBus(c+81,(((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT__when_lookUpMod_l56)
                             ? (0xffffU & (vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT___zz_code_map_port1 
                                           >> 0x10U))
                             : 0U)),16);
        vcdp->chgBus(c+89,(((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT__when_lookUpMod_l56)
                             ? (0xffffU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT___zz_code_map_port1)
                             : 0U)),16);
        vcdp->chgBus(c+97,((0xffffU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0)),16);
        vcdp->chgBus(c+105,((0xffffU & (vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0 
                                        >> 0x10U))),16);
        vcdp->chgBit(c+113,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT__when_lookUpMod_l56));
    }
}

void VAxiLite4Modulator::traceChgThis__3(VAxiLite4Modulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+121,(vlTOPp->AxiLite4Modulator__DOT__writeJoinEvent_valid));
        vcdp->chgBit(c+129,(vlTOPp->AxiLite4Modulator__DOT___zz_writeJoinEvent_translated_ready));
        vcdp->chgBit(c+137,(vlTOPp->AxiLite4Modulator__DOT__writeOccur));
        vcdp->chgBit(c+145,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_data_fire));
    }
}

void VAxiLite4Modulator::traceChgThis__4(VAxiLite4Modulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+153,(vlTOPp->AxiLite4Modulator__DOT__readRsp_data),32);
    }
}

void VAxiLite4Modulator::traceChgThis__5(VAxiLite4Modulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+161,(vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rData_addr),8);
        vcdp->chgBus(c+169,(vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rData_prot),3);
    }
}

void VAxiLite4Modulator::traceChgThis__6(VAxiLite4Modulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+177,((1U & (~ (IData)(vlTOPp->AxiLite4Modulator__DOT___zz_axil4Ctrl_bvalid_2)))));
        vcdp->chgBit(c+185,(vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rValid));
        vcdp->chgBit(c+193,((1U & (~ (IData)(vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rValid)))));
    }
}

void VAxiLite4Modulator::traceChgThis__7(VAxiLite4Modulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+201,((0xffU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer)),8);
        vcdp->chgBit(c+209,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__unit_valid));
        vcdp->chgBus(c+217,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer),24);
        vcdp->chgBit(c+225,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_7__DOT__area_clkO_buf1));
        vcdp->chgBus(c+233,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_8__DOT__area_clkO_buf1),5);
        vcdp->chgBus(c+241,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_9__DOT__area_clkO_buf1),5);
        vcdp->chgBus(c+249,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1),3);
        vcdp->chgBit(c+257,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_11__DOT__area_clkO_buf1));
        vcdp->chgBus(c+265,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_12__DOT__area_clkO_buf1),11);
        vcdp->chgBus(c+273,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1),32);
        vcdp->chgBus(c+281,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_cnt),5);
        vcdp->chgBit(c+289,((1U & (~ (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_7__DOT__area_clkO_buf1)))));
        vcdp->chgBit(c+297,(((0U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                              ? 0U : (1U & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))));
        vcdp->chgBus(c+305,(((1U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                              ? 0U : (3U & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))),2);
        vcdp->chgBus(c+313,(((2U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                              ? 0U : (0xfU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))),4);
        vcdp->chgBus(c+321,(((3U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                              ? 0U : (0x3fU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))),6);
        vcdp->chgBus(c+329,(((4U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                              ? 0U : (0xffU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))),11);
        vcdp->chgBit(c+337,(((0U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1)) 
                             & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__unit_valid))));
        vcdp->chgBus(c+345,(((0U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                              ? 0U : (0xffU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))),8);
        vcdp->chgBit(c+353,(((1U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1)) 
                             & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__unit_valid))));
        vcdp->chgBus(c+361,(((1U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                              ? 0U : (0xffU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))),8);
        vcdp->chgBit(c+369,(((2U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1)) 
                             & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__unit_valid))));
        vcdp->chgBus(c+377,(((2U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                              ? 0U : (0xffU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))),8);
        vcdp->chgBit(c+385,(((3U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1)) 
                             & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__unit_valid))));
        vcdp->chgBus(c+393,(((3U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                              ? 0U : (0xffU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))),8);
        vcdp->chgBit(c+401,(((4U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1)) 
                             & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__unit_valid))));
        vcdp->chgBus(c+409,(((4U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))
                              ? 0U : (0xffU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))),8);
        vcdp->chgBit(c+417,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__bpsk_mod__DOT__unit_valid));
        vcdp->chgBus(c+425,(((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__bpsk_mod__DOT__unit_valid)
                              ? (0xffffU & (((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__bpsk_mod__DOT__unit_data)
                                              ? 0x7fff0000U
                                              : 0x80010000U) 
                                            >> 0x10U))
                              : 0U)),16);
        vcdp->chgBus(c+433,(0U),16);
        vcdp->chgBit(c+441,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qpsk_mod__DOT__unit_valid));
        vcdp->chgBit(c+449,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_valid));
        vcdp->chgBus(c+457,(((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_valid)
                              ? ((0U == (3U & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_data) 
                                               >> 2U)))
                                  ? 0xc349U : ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_data) 
                                                    >> 2U)))
                                                ? 0xebc3U
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_data) 
                                                        >> 2U)))
                                                    ? 0x3cb6U
                                                    : 0x143cU)))
                              : 0U)),16);
        vcdp->chgBus(c+465,(((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_valid)
                              ? ((0U == (3U & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_data)))
                                  ? 0xc349U : ((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_data)))
                                                ? 0xebc3U
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_data)))
                                                    ? 0x3cb6U
                                                    : 0x143cU)))
                              : 0U)),16);
        vcdp->chgBit(c+473,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT__unit_valid));
        vcdp->chgBit(c+481,((0U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))));
        vcdp->chgBit(c+489,((1U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))));
        vcdp->chgBit(c+497,((2U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))));
        vcdp->chgBit(c+505,((3U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))));
        vcdp->chgBit(c+513,((4U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1))));
        vcdp->chgBit(c+521,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__bpsk_mod__DOT__unit_data));
        vcdp->chgBit(c+529,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__bpsk_mod__DOT__unit_valid));
        vcdp->chgBus(c+537,(0U),16);
        vcdp->chgBus(c+545,((0xffffU & (((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__bpsk_mod__DOT__unit_data)
                                          ? 0x7fff0000U
                                          : 0x80010000U) 
                                        >> 0x10U))),16);
        vcdp->chgBus(c+553,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qpsk_mod__DOT__unit_data),2);
        vcdp->chgBit(c+561,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qpsk_mod__DOT__unit_valid));
        vcdp->chgBus(c+569,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_data),4);
        vcdp->chgBit(c+577,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_valid));
        vcdp->chgBus(c+585,((3U & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_data))),2);
        vcdp->chgBus(c+593,((3U & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam16_mod__DOT__unit_data) 
                                   >> 2U))),2);
        vcdp->chgBus(c+601,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT__unit_data),6);
        vcdp->chgBit(c+609,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT__unit_valid));
        vcdp->chgBus(c+617,((7U & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT__unit_data))),3);
        vcdp->chgBus(c+625,((7U & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__qam64_mod__DOT__unit_data) 
                                   >> 3U))),3);
        vcdp->chgBus(c+633,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT__unit_data),11);
        vcdp->chgBit(c+641,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT__unit_valid));
        vcdp->chgBus(c+649,((0xffffU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT___zz_code_map_port1)),16);
        vcdp->chgBus(c+657,((0xffffU & (vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__lookup_mod__DOT___zz_code_map_port1 
                                        >> 0x10U))),16);
        vcdp->chgBit(c+665,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_7__DOT__area_clkO_buf0));
        vcdp->chgBus(c+673,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_8__DOT__area_clkO_buf0),5);
        vcdp->chgBus(c+681,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_9__DOT__area_clkO_buf0),5);
        vcdp->chgBus(c+689,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf0),3);
        vcdp->chgBit(c+697,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_11__DOT__area_clkO_buf0));
        vcdp->chgBus(c+705,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_12__DOT__area_clkO_buf0),11);
        vcdp->chgBus(c+713,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf0),32);
    }
}

void VAxiLite4Modulator::traceChgThis__9(VAxiLite4Modulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+721,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_7__DOT__area_clkI_reg));
        vcdp->chgBus(c+729,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_8__DOT__area_clkI_reg),5);
        vcdp->chgBus(c+737,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_9__DOT__area_clkI_reg),5);
        vcdp->chgBus(c+745,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkI_reg),3);
        vcdp->chgBit(c+753,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_11__DOT__area_clkI_reg));
        vcdp->chgBus(c+761,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_12__DOT__area_clkI_reg),11);
        vcdp->chgBus(c+769,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkI_reg),32);
    }
}

void VAxiLite4Modulator::traceChgThis__10(VAxiLite4Modulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+777,(vlTOPp->AxiLite4Modulator__DOT__mod_data_bridge_enable_driver));
        vcdp->chgBus(c+785,(vlTOPp->AxiLite4Modulator__DOT__mod_data_bridge_cnt_step_driver),5);
        vcdp->chgBus(c+793,(vlTOPp->AxiLite4Modulator__DOT__mod_data_bridge_cnt_limit_driver),5);
        vcdp->chgBus(c+801,(vlTOPp->AxiLite4Modulator__DOT__mod_rtl_bridge_select_driver),3);
        vcdp->chgBit(c+809,(vlTOPp->AxiLite4Modulator__DOT___zz_mod_rtl_bridge_w_en));
        vcdp->chgBus(c+817,(vlTOPp->AxiLite4Modulator__DOT___zz_mod_rtl_bridge_w_addr),11);
        vcdp->chgBus(c+825,(vlTOPp->AxiLite4Modulator__DOT___zz_mod_rtl_bridge_w_data),32);
    }
}

void VAxiLite4Modulator::traceChgThis__11(VAxiLite4Modulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+833,(vlTOPp->base_data_valid));
        vcdp->chgBit(c+841,(vlTOPp->base_data_ready));
        vcdp->chgBus(c+849,(vlTOPp->base_data_payload),24);
        vcdp->chgBit(c+857,(vlTOPp->axil4Ctrl_awvalid));
        vcdp->chgBit(c+865,(vlTOPp->axil4Ctrl_awready));
        vcdp->chgBus(c+873,(vlTOPp->axil4Ctrl_awaddr),8);
        vcdp->chgBus(c+881,(vlTOPp->axil4Ctrl_awprot),3);
        vcdp->chgBit(c+889,(vlTOPp->axil4Ctrl_wvalid));
        vcdp->chgBit(c+897,(vlTOPp->axil4Ctrl_wready));
        vcdp->chgBus(c+905,(vlTOPp->axil4Ctrl_wdata),32);
        vcdp->chgBus(c+913,(vlTOPp->axil4Ctrl_wstrb),4);
        vcdp->chgBit(c+921,(vlTOPp->axil4Ctrl_bvalid));
        vcdp->chgBit(c+929,(vlTOPp->axil4Ctrl_bready));
        vcdp->chgBus(c+937,(vlTOPp->axil4Ctrl_bresp),2);
        vcdp->chgBit(c+945,(vlTOPp->axil4Ctrl_arvalid));
        vcdp->chgBit(c+953,(vlTOPp->axil4Ctrl_arready));
        vcdp->chgBus(c+961,(vlTOPp->axil4Ctrl_araddr),8);
        vcdp->chgBus(c+969,(vlTOPp->axil4Ctrl_arprot),3);
        vcdp->chgBit(c+977,(vlTOPp->axil4Ctrl_rvalid));
        vcdp->chgBit(c+985,(vlTOPp->axil4Ctrl_rready));
        vcdp->chgBus(c+993,(vlTOPp->axil4Ctrl_rdata),32);
        vcdp->chgBus(c+1001,(vlTOPp->axil4Ctrl_rresp),2);
        vcdp->chgBit(c+1009,(vlTOPp->mod_iq_valid));
        vcdp->chgBus(c+1017,(vlTOPp->mod_iq_payload_cha_i),16);
        vcdp->chgBus(c+1025,(vlTOPp->mod_iq_payload_cha_q),16);
        vcdp->chgBit(c+1033,(vlTOPp->rf_clk));
        vcdp->chgBit(c+1041,(vlTOPp->rf_resetn));
        vcdp->chgBit(c+1049,(vlTOPp->clk));
        vcdp->chgBit(c+1057,(vlTOPp->reset));
        vcdp->chgBit(c+1065,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
                              & (IData)(vlTOPp->axil4Ctrl_rready))));
    }
}
