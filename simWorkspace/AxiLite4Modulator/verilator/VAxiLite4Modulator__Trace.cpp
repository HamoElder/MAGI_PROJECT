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
        vcdp->chgBit(c+9,(((0U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                            ? (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                            : ((1U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                ? (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                : ((2U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                    ? (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                    : (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__when_lookUpMod_l84))))));
        vcdp->chgBus(c+17,((0xfffU & ((0U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                       ? ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                           ? (((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data)
                                                ? 0x7ff000U
                                                : 0x801000U) 
                                              >> 0xcU)
                                           : 0U) : 
                                      ((1U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                        ? ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                            ? (vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
                                               >> 0xcU)
                                            : 0U) : 
                                       ((2U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                         ? ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                             ? ((0U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                     >> 2U)))
                                                 ? 0xc35U
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                      >> 2U)))
                                                  ? 0xebcU
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                       >> 2U)))
                                                   ? 0x3caU
                                                   : 0x143U)))
                                             : 0U) : 
                                        ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__when_lookUpMod_l84)
                                          ? (vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT___zz_code_map_port1 
                                             >> 0xcU)
                                          : 0U)))))),12);
        vcdp->chgBus(c+25,((0xfffU & ((0U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                       ? ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                           ? ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data)
                                               ? 0x7ff000U
                                               : 0x801000U)
                                           : 0U) : 
                                      ((1U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                        ? ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                            ? vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0
                                            : 0U) : 
                                       ((2U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                         ? ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                             ? ((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                                 ? 0xc35U
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                                  ? 0xebcU
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                                   ? 0x3caU
                                                   : 0x143U)))
                                             : 0U) : 
                                        ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__when_lookUpMod_l84)
                                          ? vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT___zz_code_map_port1
                                          : 0U)))))),12);
        vcdp->chgBit(c+33,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__when_dataDivDynamic_l47));
        vcdp->chgBus(c+41,(((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                             ? (0xfffU & (vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
                                          >> 0xcU))
                             : 0U)),12);
        vcdp->chgBus(c+49,(((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                             ? (0xfffU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0)
                             : 0U)),12);
        vcdp->chgBit(c+57,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__when_lookUpMod_l84));
        vcdp->chgBus(c+65,(((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__when_lookUpMod_l84)
                             ? (0xfffU & (vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT___zz_code_map_port1 
                                          >> 0xcU))
                             : 0U)),12);
        vcdp->chgBus(c+73,(((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__when_lookUpMod_l84)
                             ? (0xfffU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT___zz_code_map_port1)
                             : 0U)),12);
        vcdp->chgBus(c+81,((0xfffU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0)),12);
        vcdp->chgBus(c+89,((0xfffU & (vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
                                      >> 0xcU))),12);
        vcdp->chgBit(c+97,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__when_lookUpMod_l84));
    }
}

void VAxiLite4Modulator::traceChgThis__3(VAxiLite4Modulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+105,(vlTOPp->AxiLite4Modulator__DOT__writeJoinEvent_valid));
        vcdp->chgBit(c+113,(vlTOPp->AxiLite4Modulator__DOT___zz_writeJoinEvent_translated_ready));
        vcdp->chgBit(c+121,(vlTOPp->AxiLite4Modulator__DOT__writeOccur));
        vcdp->chgBit(c+129,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_data_fire));
    }
}

void VAxiLite4Modulator::traceChgThis__4(VAxiLite4Modulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+137,(vlTOPp->AxiLite4Modulator__DOT__readRsp_data),32);
    }
}

void VAxiLite4Modulator::traceChgThis__5(VAxiLite4Modulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+145,(vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rData_addr),8);
        vcdp->chgBus(c+153,(vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rData_prot),3);
    }
}

void VAxiLite4Modulator::traceChgThis__6(VAxiLite4Modulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+161,((1U & (~ (IData)(vlTOPp->AxiLite4Modulator__DOT___zz_axil4Ctrl_bvalid_2)))));
        vcdp->chgBit(c+169,(vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rValid));
        vcdp->chgBit(c+177,((1U & (~ (IData)(vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rValid)))));
    }
}

void VAxiLite4Modulator::traceChgThis__7(VAxiLite4Modulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+185,((0xfU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer)),4);
        vcdp->chgBit(c+193,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__unit_valid));
        vcdp->chgBus(c+201,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer),24);
        vcdp->chgBit(c+209,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_7__DOT__area_clkO_buf1));
        vcdp->chgBus(c+217,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_8__DOT__area_clkO_buf1),5);
        vcdp->chgBus(c+225,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_9__DOT__area_clkO_buf1),5);
        vcdp->chgBit(c+233,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1));
        vcdp->chgBus(c+241,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_11__DOT__area_clkO_buf1),32);
        vcdp->chgBus(c+249,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_12__DOT__area_clkO_buf1),32);
        vcdp->chgBus(c+257,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1),2);
        vcdp->chgBus(c+265,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_cnt),5);
        vcdp->chgBit(c+273,((1U & (~ (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_7__DOT__area_clkO_buf1)))));
        vcdp->chgBit(c+281,(((0U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                              ? 0U : (1U & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))));
        vcdp->chgBus(c+289,(((1U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                              ? 0U : (3U & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))),2);
        vcdp->chgBit(c+297,((1U & (~ (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1)))));
        vcdp->chgBus(c+305,((0xffU & vlTOPp->AxiLite4Modulator__DOT__clkCrossing_11__DOT__area_clkO_buf1)),8);
        vcdp->chgBus(c+313,((0xffffffU & vlTOPp->AxiLite4Modulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)),24);
        vcdp->chgBus(c+321,(((3U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                              ? 0U : (0xfU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))),8);
        vcdp->chgBit(c+329,(((0U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1)) 
                             & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__unit_valid))));
        vcdp->chgBus(c+337,(((0U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                              ? 0U : (0xfU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))),4);
        vcdp->chgBit(c+345,(((1U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1)) 
                             & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__unit_valid))));
        vcdp->chgBus(c+353,(((1U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                              ? 0U : (0xfU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))),4);
        vcdp->chgBit(c+361,(((2U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1)) 
                             & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__unit_valid))));
        vcdp->chgBus(c+369,(((2U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                              ? 0U : (0xfU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))),4);
        vcdp->chgBit(c+377,(((3U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1)) 
                             & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__unit_valid))));
        vcdp->chgBus(c+385,(((3U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                              ? 0U : (0xfU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))),4);
        vcdp->chgBit(c+393,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->chgBus(c+401,(((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                              ? (0xfffU & (((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data)
                                             ? 0x7ff000U
                                             : 0x801000U) 
                                           >> 0xcU))
                              : 0U)),12);
        vcdp->chgBus(c+409,(0U),12);
        vcdp->chgBit(c+417,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid));
        vcdp->chgBit(c+425,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->chgBus(c+433,(((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                              ? ((0U == (3U & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                               >> 2U)))
                                  ? 0xc35U : ((1U == 
                                               (3U 
                                                & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                   >> 2U)))
                                               ? 0xebcU
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                       >> 2U)))
                                                   ? 0x3caU
                                                   : 0x143U)))
                              : 0U)),12);
        vcdp->chgBus(c+441,(((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                              ? ((0U == (3U & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                  ? 0xc35U : ((1U == 
                                               (3U 
                                                & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                               ? 0xebcU
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                                   ? 0x3caU
                                                   : 0x143U)))
                              : 0U)),12);
        vcdp->chgBit(c+449,((0U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))));
        vcdp->chgBit(c+457,((1U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))));
        vcdp->chgBit(c+465,((2U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))));
        vcdp->chgBit(c+473,((3U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))));
        vcdp->chgBit(c+481,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data));
        vcdp->chgBit(c+489,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->chgBus(c+497,(0U),12);
        vcdp->chgBus(c+505,((0xfffU & (((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data)
                                         ? 0x7ff000U
                                         : 0x801000U) 
                                       >> 0xcU))),12);
        vcdp->chgBus(c+513,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data),2);
        vcdp->chgBit(c+521,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid));
        vcdp->chgBus(c+529,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data),4);
        vcdp->chgBit(c+537,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->chgBus(c+545,((3U & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data))),2);
        vcdp->chgBus(c+553,((3U & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                   >> 2U))),2);
        vcdp->chgBus(c+561,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__unit_data),8);
        vcdp->chgBit(c+569,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__unit_valid));
        vcdp->chgBit(c+577,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_7__DOT__area_clkO_buf0));
        vcdp->chgBus(c+585,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_8__DOT__area_clkO_buf0),5);
        vcdp->chgBus(c+593,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_9__DOT__area_clkO_buf0),5);
        vcdp->chgBit(c+601,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf0));
        vcdp->chgBus(c+609,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_11__DOT__area_clkO_buf0),32);
        vcdp->chgBus(c+617,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_12__DOT__area_clkO_buf0),32);
        vcdp->chgBus(c+625,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf0),2);
    }
}

void VAxiLite4Modulator::traceChgThis__9(VAxiLite4Modulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+633,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_7__DOT__area_clkI_reg));
        vcdp->chgBus(c+641,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_8__DOT__area_clkI_reg),5);
        vcdp->chgBus(c+649,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_9__DOT__area_clkI_reg),5);
        vcdp->chgBit(c+657,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkI_reg));
        vcdp->chgBus(c+665,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_11__DOT__area_clkI_reg),32);
        vcdp->chgBus(c+673,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_12__DOT__area_clkI_reg),32);
        vcdp->chgBus(c+681,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkI_reg),2);
    }
}

void VAxiLite4Modulator::traceChgThis__10(VAxiLite4Modulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+689,(vlTOPp->AxiLite4Modulator__DOT__mod_data_bridge_enable_driver));
        vcdp->chgBus(c+697,(vlTOPp->AxiLite4Modulator__DOT__mod_data_bridge_cnt_step_driver),5);
        vcdp->chgBus(c+705,(vlTOPp->AxiLite4Modulator__DOT__mod_data_bridge_cnt_limit_driver),5);
        vcdp->chgBus(c+713,(vlTOPp->AxiLite4Modulator__DOT__mod_rtl_bridge_select_driver),2);
        vcdp->chgBit(c+721,(vlTOPp->AxiLite4Modulator__DOT___zz_dataIn));
        vcdp->chgBus(c+729,(vlTOPp->AxiLite4Modulator__DOT___zz_dataIn_1),32);
        vcdp->chgBus(c+737,(vlTOPp->AxiLite4Modulator__DOT___zz_dataIn_2),32);
    }
}

void VAxiLite4Modulator::traceChgThis__11(VAxiLite4Modulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+745,(vlTOPp->base_data_valid));
        vcdp->chgBit(c+753,(vlTOPp->base_data_ready));
        vcdp->chgBus(c+761,(vlTOPp->base_data_payload),24);
        vcdp->chgBit(c+769,(vlTOPp->axil4Ctrl_awvalid));
        vcdp->chgBit(c+777,(vlTOPp->axil4Ctrl_awready));
        vcdp->chgBus(c+785,(vlTOPp->axil4Ctrl_awaddr),8);
        vcdp->chgBus(c+793,(vlTOPp->axil4Ctrl_awprot),3);
        vcdp->chgBit(c+801,(vlTOPp->axil4Ctrl_wvalid));
        vcdp->chgBit(c+809,(vlTOPp->axil4Ctrl_wready));
        vcdp->chgBus(c+817,(vlTOPp->axil4Ctrl_wdata),32);
        vcdp->chgBus(c+825,(vlTOPp->axil4Ctrl_wstrb),4);
        vcdp->chgBit(c+833,(vlTOPp->axil4Ctrl_bvalid));
        vcdp->chgBit(c+841,(vlTOPp->axil4Ctrl_bready));
        vcdp->chgBus(c+849,(vlTOPp->axil4Ctrl_bresp),2);
        vcdp->chgBit(c+857,(vlTOPp->axil4Ctrl_arvalid));
        vcdp->chgBit(c+865,(vlTOPp->axil4Ctrl_arready));
        vcdp->chgBus(c+873,(vlTOPp->axil4Ctrl_araddr),8);
        vcdp->chgBus(c+881,(vlTOPp->axil4Ctrl_arprot),3);
        vcdp->chgBit(c+889,(vlTOPp->axil4Ctrl_rvalid));
        vcdp->chgBit(c+897,(vlTOPp->axil4Ctrl_rready));
        vcdp->chgBus(c+905,(vlTOPp->axil4Ctrl_rdata),32);
        vcdp->chgBus(c+913,(vlTOPp->axil4Ctrl_rresp),2);
        vcdp->chgBit(c+921,(vlTOPp->mod_iq_valid));
        vcdp->chgBus(c+929,(vlTOPp->mod_iq_payload_cha_i),12);
        vcdp->chgBus(c+937,(vlTOPp->mod_iq_payload_cha_q),12);
        vcdp->chgBit(c+945,(vlTOPp->rf_clk));
        vcdp->chgBit(c+953,(vlTOPp->rf_resetn));
        vcdp->chgBit(c+961,(vlTOPp->clk));
        vcdp->chgBit(c+969,(vlTOPp->reset));
        vcdp->chgBit(c+977,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
                             & (IData)(vlTOPp->axil4Ctrl_rready))));
    }
}
