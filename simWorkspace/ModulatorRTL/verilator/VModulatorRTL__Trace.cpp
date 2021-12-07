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
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 3U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
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
        vcdp->chgBus(c+1,(((IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l84)
                            ? (0xfffU & (vlTOPp->ModulatorRTL__DOT__mod_1__DOT___zz_code_map_port1 
                                         >> 0xcU)) : 0U)),12);
        vcdp->chgBus(c+9,(((IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l84)
                            ? (0xfffU & vlTOPp->ModulatorRTL__DOT__mod_1__DOT___zz_code_map_port1)
                            : 0U)),12);
        vcdp->chgBus(c+17,(((IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l69)
                             ? (0xfffU & (vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_code_map_port1 
                                          >> 0xcU))
                             : 0U)),12);
        vcdp->chgBus(c+25,(((IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l69)
                             ? (0xfffU & vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_code_map_port1)
                             : 0U)),12);
    }
}

void VModulatorRTL::traceChgThis__3(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+33,(((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                             ? (0xfffU & (vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
                                          >> 0xcU))
                             : 0U)),12);
        vcdp->chgBus(c+41,(((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                             ? (0xfffU & vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0)
                             : 0U)),12);
        vcdp->chgBus(c+49,((0xfffU & vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0)),12);
        vcdp->chgBus(c+57,((0xfffU & (vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
                                      >> 0xcU))),12);
    }
}

void VModulatorRTL::traceChgThis__4(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+65,(((IData)(vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_4_valid) 
                            & (0U == (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready)))));
    }
}

void VModulatorRTL::traceChgThis__5(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+73,(vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_4_valid));
        vcdp->chgBit(c+81,(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l84));
        vcdp->chgBit(c+89,(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l69));
        vcdp->chgBit(c+97,(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l84));
        vcdp->chgBit(c+105,(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l69));
    }
}

void VModulatorRTL::traceChgThis__6(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+113,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->chgBus(c+121,(((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                              ? (0xfffU & (((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data)
                                             ? 0x7ff000U
                                             : 0x801000U) 
                                           >> 0xcU))
                              : 0U)),12);
        vcdp->chgBus(c+129,(0U),12);
        vcdp->chgBit(c+137,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid));
        vcdp->chgBit(c+145,(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->chgBus(c+153,(((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                              ? ((0U == (3U & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                               >> 2U)))
                                  ? 0xc35U : ((1U == 
                                               (3U 
                                                & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                   >> 2U)))
                                               ? 0xebcU
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                       >> 2U)))
                                                   ? 0x3caU
                                                   : 0x143U)))
                              : 0U)),12);
        vcdp->chgBus(c+161,(((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                              ? ((0U == (3U & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                  ? 0xc35U : ((1U == 
                                               (3U 
                                                & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                               ? 0xebcU
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                                   ? 0x3caU
                                                   : 0x143U)))
                              : 0U)),12);
        vcdp->chgBit(c+169,((0U == (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready))));
        vcdp->chgBit(c+177,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data));
        vcdp->chgBit(c+185,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->chgBus(c+193,(0U),12);
        vcdp->chgBus(c+201,((0xfffU & (((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data)
                                         ? 0x7ff000U
                                         : 0x801000U) 
                                       >> 0xcU))),12);
        vcdp->chgBus(c+209,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data),2);
        vcdp->chgBit(c+217,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid));
        vcdp->chgBus(c+225,(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data),4);
        vcdp->chgBit(c+233,(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->chgBus(c+241,((3U & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data))),2);
        vcdp->chgBus(c+249,((3U & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                   >> 2U))),2);
        vcdp->chgBus(c+257,(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__unit_data),8);
        vcdp->chgBit(c+265,(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__unit_valid));
        vcdp->chgBus(c+273,(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__unit_data),7);
        vcdp->chgBit(c+281,(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__unit_valid));
        vcdp->chgBit(c+289,((0U != (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready))));
    }
}

void VModulatorRTL::traceChgThis__7(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+297,(vlTOPp->data_flow_unit_data_valid));
        vcdp->chgBus(c+305,(vlTOPp->data_flow_unit_data_payload),8);
        vcdp->chgBit(c+313,(vlTOPp->data_flow_mod_iq_valid));
        vcdp->chgBus(c+321,(vlTOPp->data_flow_mod_iq_payload_cha_i),12);
        vcdp->chgBus(c+329,(vlTOPp->data_flow_mod_iq_payload_cha_q),12);
        vcdp->chgBus(c+337,(vlTOPp->w_en),2);
        vcdp->chgBus(c+345,(vlTOPp->w_addr),32);
        vcdp->chgBus(c+353,(vlTOPp->w_data),32);
        vcdp->chgBus(c+361,(vlTOPp->cnt_limit),32);
        vcdp->chgBus(c+369,(vlTOPp->select_1),3);
        vcdp->chgBit(c+377,(vlTOPp->clk));
        vcdp->chgBit(c+385,(vlTOPp->reset));
        vcdp->chgBit(c+393,(((0U != (IData)(vlTOPp->select_1))
                              ? 0U : (1U & (IData)(vlTOPp->data_flow_unit_data_payload)))));
        vcdp->chgBus(c+401,(((1U != (IData)(vlTOPp->select_1))
                              ? 0U : (3U & (IData)(vlTOPp->data_flow_unit_data_payload)))),2);
        vcdp->chgBus(c+409,(((2U != (IData)(vlTOPp->select_1))
                              ? 0U : (0xfU & (IData)(vlTOPp->data_flow_unit_data_payload)))),4);
        vcdp->chgBit(c+417,((0U == (IData)(vlTOPp->w_en))));
        vcdp->chgBus(c+425,((0xffU & vlTOPp->w_addr)),8);
        vcdp->chgBus(c+433,((0xffffffU & vlTOPp->w_data)),24);
        vcdp->chgBit(c+441,((1U == (IData)(vlTOPp->w_en))));
        vcdp->chgBus(c+449,((0x7fU & vlTOPp->w_addr)),7);
        vcdp->chgBus(c+457,((7U & vlTOPp->cnt_limit)),3);
        vcdp->chgBus(c+465,(((4U != (IData)(vlTOPp->select_1))
                              ? 0U : (0x7fU & (IData)(vlTOPp->data_flow_unit_data_payload)))),7);
        vcdp->chgBit(c+473,(((0U == (IData)(vlTOPp->select_1)) 
                             & (IData)(vlTOPp->data_flow_unit_data_valid))));
        vcdp->chgBus(c+481,(((0U != (IData)(vlTOPp->select_1))
                              ? 0U : (IData)(vlTOPp->data_flow_unit_data_payload))),8);
        vcdp->chgBit(c+489,(((1U == (IData)(vlTOPp->select_1)) 
                             & (IData)(vlTOPp->data_flow_unit_data_valid))));
        vcdp->chgBus(c+497,(((1U != (IData)(vlTOPp->select_1))
                              ? 0U : (IData)(vlTOPp->data_flow_unit_data_payload))),8);
        vcdp->chgBit(c+505,(((2U == (IData)(vlTOPp->select_1)) 
                             & (IData)(vlTOPp->data_flow_unit_data_valid))));
        vcdp->chgBus(c+513,(((2U != (IData)(vlTOPp->select_1))
                              ? 0U : (IData)(vlTOPp->data_flow_unit_data_payload))),8);
        vcdp->chgBit(c+521,(((3U == (IData)(vlTOPp->select_1)) 
                             & (IData)(vlTOPp->data_flow_unit_data_valid))));
        vcdp->chgBus(c+529,(((3U != (IData)(vlTOPp->select_1))
                              ? 0U : (IData)(vlTOPp->data_flow_unit_data_payload))),8);
        vcdp->chgBus(c+537,(((4U != (IData)(vlTOPp->select_1))
                              ? 0U : (IData)(vlTOPp->data_flow_unit_data_payload))),8);
        vcdp->chgBit(c+545,(((4U & (IData)(vlTOPp->select_1))
                              ? (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l69)
                              : ((2U & (IData)(vlTOPp->select_1))
                                  ? ((1U & (IData)(vlTOPp->select_1))
                                      ? (IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l84)
                                      : (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid))
                                  : ((1U & (IData)(vlTOPp->select_1))
                                      ? (IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                      : (IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid))))));
        vcdp->chgBus(c+553,((0xfffU & ((4U & (IData)(vlTOPp->select_1))
                                        ? ((IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l69)
                                            ? (vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_code_map_port1 
                                               >> 0xcU)
                                            : 0U) : 
                                       ((2U & (IData)(vlTOPp->select_1))
                                         ? ((1U & (IData)(vlTOPp->select_1))
                                             ? ((IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l84)
                                                 ? 
                                                (vlTOPp->ModulatorRTL__DOT__mod_1__DOT___zz_code_map_port1 
                                                 >> 0xcU)
                                                 : 0U)
                                             : ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                      >> 2U)))
                                                  ? 0xc35U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                       >> 2U)))
                                                   ? 0xebcU
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                        >> 2U)))
                                                    ? 0x3caU
                                                    : 0x143U)))
                                                 : 0U))
                                         : ((1U & (IData)(vlTOPp->select_1))
                                             ? ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                                 ? 
                                                (vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
                                                 >> 0xcU)
                                                 : 0U)
                                             : ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                                 ? 
                                                (((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data)
                                                   ? 0x7ff000U
                                                   : 0x801000U) 
                                                 >> 0xcU)
                                                 : 0U)))))),12);
        vcdp->chgBus(c+561,((0xfffU & ((4U & (IData)(vlTOPp->select_1))
                                        ? ((IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l69)
                                            ? vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_code_map_port1
                                            : 0U) : 
                                       ((2U & (IData)(vlTOPp->select_1))
                                         ? ((1U & (IData)(vlTOPp->select_1))
                                             ? ((IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l84)
                                                 ? vlTOPp->ModulatorRTL__DOT__mod_1__DOT___zz_code_map_port1
                                                 : 0U)
                                             : ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                                  ? 0xc35U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                                   ? 0xebcU
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                                    ? 0x3caU
                                                    : 0x143U)))
                                                 : 0U))
                                         : ((1U & (IData)(vlTOPp->select_1))
                                             ? ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                                 ? vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0
                                                 : 0U)
                                             : ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                                 ? 
                                                ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data)
                                                  ? 0x7ff000U
                                                  : 0x801000U)
                                                 : 0U)))))),12);
        vcdp->chgBit(c+569,((0U != (IData)(vlTOPp->select_1))));
        vcdp->chgBit(c+577,((1U != (IData)(vlTOPp->select_1))));
        vcdp->chgBit(c+585,((2U != (IData)(vlTOPp->select_1))));
        vcdp->chgBit(c+593,((3U != (IData)(vlTOPp->select_1))));
        vcdp->chgBit(c+601,((4U != (IData)(vlTOPp->select_1))));
    }
}
