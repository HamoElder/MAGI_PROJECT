// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VModulatorRTL__Syms.h"


//======================

void VModulatorRTL::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VModulatorRTL* t = (VModulatorRTL*)userthis;
    VModulatorRTL__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VModulatorRTL::traceChgThis(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 3U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VModulatorRTL::traceChgThis__2(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(((IData)(vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__when_lookUpMod_l56)
                            ? (0xffffU & (vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT___zz_code_map_port1 
                                          >> 0x10U))
                            : 0U)),16);
        vcdp->chgBus(c+9,(((IData)(vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__when_lookUpMod_l56)
                            ? (0xffffU & vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT___zz_code_map_port1)
                            : 0U)),16);
    }
}

void VModulatorRTL::traceChgThis__3(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+17,(((IData)(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_valid)
                             ? (0xffffU & (vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0 
                                           >> 0x10U))
                             : 0U)),16);
        vcdp->chgBus(c+25,(((IData)(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_valid)
                             ? (0xffffU & vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0)
                             : 0U)),16);
        vcdp->chgBus(c+33,(((IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_valid)
                             ? (IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i)
                             : 0U)),16);
        vcdp->chgBus(c+41,(((IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_valid)
                             ? (IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q)
                             : 0U)),16);
        vcdp->chgBus(c+49,((0xffffU & vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0)),16);
        vcdp->chgBus(c+57,((0xffffU & (vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0 
                                       >> 0x10U))),16);
    }
}

void VModulatorRTL::traceChgThis__4(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+65,(vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__when_lookUpMod_l56));
        vcdp->chgBit(c+73,(vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__when_lookUpMod_l56));
    }
}

void VModulatorRTL::traceChgThis__5(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+81,((0xffffU & vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT___zz_code_map_port1)),16);
        vcdp->chgBus(c+89,((0xffffU & (vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT___zz_code_map_port1 
                                       >> 0x10U))),16);
    }
}

void VModulatorRTL::traceChgThis__6(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+97,(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_valid));
        vcdp->chgBus(c+105,(((IData)(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_valid)
                              ? (0xffffU & (((IData)(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_data)
                                              ? 0x7fff0000U
                                              : 0x80010000U) 
                                            >> 0x10U))
                              : 0U)),16);
        vcdp->chgBus(c+113,(0U),16);
        vcdp->chgBit(c+121,(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_valid));
        vcdp->chgBit(c+129,(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_valid));
        vcdp->chgBus(c+137,(((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_valid)
                              ? ((0U == (3U & ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data) 
                                               >> 2U)))
                                  ? 0xc349U : ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data) 
                                                    >> 2U)))
                                                ? 0xebc3U
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data) 
                                                        >> 2U)))
                                                    ? 0x3cb6U
                                                    : 0x143cU)))
                              : 0U)),16);
        vcdp->chgBus(c+145,(((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_valid)
                              ? ((0U == (3U & (IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data)))
                                  ? 0xc349U : ((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data)))
                                                ? 0xebc3U
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data)))
                                                    ? 0x3cb6U
                                                    : 0x143cU)))
                              : 0U)),16);
        vcdp->chgBit(c+153,(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_valid));
        vcdp->chgBit(c+161,(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_data));
        vcdp->chgBit(c+169,(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_valid));
        vcdp->chgBus(c+177,(0U),16);
        vcdp->chgBus(c+185,((0xffffU & (((IData)(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_data)
                                          ? 0x7fff0000U
                                          : 0x80010000U) 
                                        >> 0x10U))),16);
        vcdp->chgBus(c+193,(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_data),2);
        vcdp->chgBit(c+201,(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_valid));
        vcdp->chgBus(c+209,(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data),4);
        vcdp->chgBit(c+217,(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_valid));
        vcdp->chgBus(c+225,((3U & (IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data))),2);
        vcdp->chgBus(c+233,((3U & ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data) 
                                   >> 2U))),2);
        vcdp->chgBus(c+241,(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_data),6);
        vcdp->chgBit(c+249,(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_valid));
        vcdp->chgBus(c+257,((7U & (IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_data))),3);
        vcdp->chgBus(c+265,((7U & ((IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_data) 
                                   >> 3U))),3);
        vcdp->chgBus(c+273,(vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__unit_data),11);
        vcdp->chgBit(c+281,(vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__unit_valid));
    }
}

void VModulatorRTL::traceChgThis__7(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+289,(vlTOPp->data_flow_unit_data_valid));
        vcdp->chgBus(c+297,(vlTOPp->data_flow_unit_data_payload),32);
        vcdp->chgBit(c+305,(vlTOPp->data_flow_mod_iq_valid));
        vcdp->chgBus(c+313,(vlTOPp->data_flow_mod_iq_payload_cha_i),16);
        vcdp->chgBus(c+321,(vlTOPp->data_flow_mod_iq_payload_cha_q),16);
        vcdp->chgBit(c+329,(vlTOPp->w_en));
        vcdp->chgBus(c+337,(vlTOPp->w_addr),11);
        vcdp->chgBus(c+345,(vlTOPp->w_data),32);
        vcdp->chgBus(c+353,(vlTOPp->select_1),3);
        vcdp->chgBit(c+361,(vlTOPp->clk));
        vcdp->chgBit(c+369,(vlTOPp->reset));
        vcdp->chgBit(c+377,(((0U != (IData)(vlTOPp->select_1))
                              ? 0U : (1U & vlTOPp->data_flow_unit_data_payload))));
        vcdp->chgBus(c+385,(((1U != (IData)(vlTOPp->select_1))
                              ? 0U : (3U & vlTOPp->data_flow_unit_data_payload))),2);
        vcdp->chgBus(c+393,(((2U != (IData)(vlTOPp->select_1))
                              ? 0U : (0xfU & vlTOPp->data_flow_unit_data_payload))),4);
        vcdp->chgBus(c+401,(((3U != (IData)(vlTOPp->select_1))
                              ? 0U : (0x3fU & vlTOPp->data_flow_unit_data_payload))),6);
        vcdp->chgBus(c+409,(((4U != (IData)(vlTOPp->select_1))
                              ? 0U : (0x7ffU & vlTOPp->data_flow_unit_data_payload))),11);
        vcdp->chgBit(c+417,(((0U == (IData)(vlTOPp->select_1)) 
                             & (IData)(vlTOPp->data_flow_unit_data_valid))));
        vcdp->chgBus(c+425,(((0U != (IData)(vlTOPp->select_1))
                              ? 0U : vlTOPp->data_flow_unit_data_payload)),32);
        vcdp->chgBit(c+433,(((1U == (IData)(vlTOPp->select_1)) 
                             & (IData)(vlTOPp->data_flow_unit_data_valid))));
        vcdp->chgBus(c+441,(((1U != (IData)(vlTOPp->select_1))
                              ? 0U : vlTOPp->data_flow_unit_data_payload)),32);
        vcdp->chgBit(c+449,(((2U == (IData)(vlTOPp->select_1)) 
                             & (IData)(vlTOPp->data_flow_unit_data_valid))));
        vcdp->chgBus(c+457,(((2U != (IData)(vlTOPp->select_1))
                              ? 0U : vlTOPp->data_flow_unit_data_payload)),32);
        vcdp->chgBit(c+465,(((3U == (IData)(vlTOPp->select_1)) 
                             & (IData)(vlTOPp->data_flow_unit_data_valid))));
        vcdp->chgBus(c+473,(((3U != (IData)(vlTOPp->select_1))
                              ? 0U : vlTOPp->data_flow_unit_data_payload)),32);
        vcdp->chgBit(c+481,(((4U == (IData)(vlTOPp->select_1)) 
                             & (IData)(vlTOPp->data_flow_unit_data_valid))));
        vcdp->chgBus(c+489,(((4U != (IData)(vlTOPp->select_1))
                              ? 0U : vlTOPp->data_flow_unit_data_payload)),32);
        vcdp->chgBit(c+497,(((4U & (IData)(vlTOPp->select_1))
                              ? (IData)(vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__when_lookUpMod_l56)
                              : ((2U & (IData)(vlTOPp->select_1))
                                  ? ((1U & (IData)(vlTOPp->select_1))
                                      ? (IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_valid)
                                      : (IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_valid))
                                  : ((1U & (IData)(vlTOPp->select_1))
                                      ? (IData)(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_valid)
                                      : (IData)(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_valid))))));
        vcdp->chgBus(c+505,((0xffffU & ((4U & (IData)(vlTOPp->select_1))
                                         ? ((IData)(vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__when_lookUpMod_l56)
                                             ? (vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT___zz_code_map_port1 
                                                >> 0x10U)
                                             : 0U) : 
                                        ((2U & (IData)(vlTOPp->select_1))
                                          ? ((1U & (IData)(vlTOPp->select_1))
                                              ? ((IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_valid)
                                                  ? (IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i)
                                                  : 0U)
                                              : ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_valid)
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data) 
                                                       >> 2U)))
                                                   ? 0xc349U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data) 
                                                        >> 2U)))
                                                    ? 0xebc3U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data) 
                                                         >> 2U)))
                                                     ? 0x3cb6U
                                                     : 0x143cU)))
                                                  : 0U))
                                          : ((1U & (IData)(vlTOPp->select_1))
                                              ? ((IData)(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_valid)
                                                  ? 
                                                 (vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0 
                                                  >> 0x10U)
                                                  : 0U)
                                              : ((IData)(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_valid)
                                                  ? 
                                                 (((IData)(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_data)
                                                    ? 0x7fff0000U
                                                    : 0x80010000U) 
                                                  >> 0x10U)
                                                  : 0U)))))),16);
        vcdp->chgBus(c+513,((0xffffU & ((4U & (IData)(vlTOPp->select_1))
                                         ? ((IData)(vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__when_lookUpMod_l56)
                                             ? vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT___zz_code_map_port1
                                             : 0U) : 
                                        ((2U & (IData)(vlTOPp->select_1))
                                          ? ((1U & (IData)(vlTOPp->select_1))
                                              ? ((IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_valid)
                                                  ? (IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q)
                                                  : 0U)
                                              : ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_valid)
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data)))
                                                   ? 0xc349U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data)))
                                                    ? 0xebc3U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data)))
                                                     ? 0x3cb6U
                                                     : 0x143cU)))
                                                  : 0U))
                                          : ((1U & (IData)(vlTOPp->select_1))
                                              ? ((IData)(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_valid)
                                                  ? vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0
                                                  : 0U)
                                              : ((IData)(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_valid)
                                                  ? 
                                                 ((IData)(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_data)
                                                   ? 0x7fff0000U
                                                   : 0x80010000U)
                                                  : 0U)))))),16);
        vcdp->chgBit(c+521,((0U != (IData)(vlTOPp->select_1))));
        vcdp->chgBit(c+529,((1U != (IData)(vlTOPp->select_1))));
        vcdp->chgBit(c+537,((2U != (IData)(vlTOPp->select_1))));
        vcdp->chgBit(c+545,((3U != (IData)(vlTOPp->select_1))));
        vcdp->chgBit(c+553,((4U != (IData)(vlTOPp->select_1))));
    }
}
