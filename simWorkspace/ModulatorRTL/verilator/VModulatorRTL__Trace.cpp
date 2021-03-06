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
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
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
        vcdp->chgBus(c+1,(((IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l87)
                            ? (0xfffU & (vlTOPp->ModulatorRTL__DOT__mod_1__DOT___zz_code_map_port1 
                                         >> 0xcU)) : 0U)),12);
        vcdp->chgBus(c+9,(((IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l87)
                            ? (0xfffU & vlTOPp->ModulatorRTL__DOT__mod_1__DOT___zz_code_map_port1)
                            : 0U)),12);
        vcdp->chgBus(c+17,(((IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l70)
                             ? (0xfffU & (vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_code_map_port1 
                                          >> 0xcU))
                             : 0U)),12);
        vcdp->chgBus(c+25,(((IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l70)
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
        vcdp->chgBit(c+65,(((IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l87) 
                            & (IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__unit_last))));
        vcdp->chgBit(c+73,(((IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l70) 
                            & (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__unit_last))));
        vcdp->chgBit(c+81,(((IData)(vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_4_valid) 
                            & (0U == (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready)))));
    }
}

void VModulatorRTL::traceChgThis__5(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+89,(vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_0_payload_last));
        vcdp->chgBit(c+97,(vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_1_payload_last));
        vcdp->chgBit(c+105,(vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_2_payload_last));
        vcdp->chgBit(c+113,(vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_3_payload_last));
        vcdp->chgBit(c+121,(vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_4_valid));
        vcdp->chgBit(c+129,(vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_4_payload_last));
        vcdp->chgBit(c+137,(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l87));
        vcdp->chgBit(c+145,(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l70));
        vcdp->chgBit(c+153,(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l87));
        vcdp->chgBit(c+161,(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l70));
    }
}

void VModulatorRTL::traceChgThis__6(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+169,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_last));
        vcdp->chgBit(c+177,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_last));
        vcdp->chgBit(c+185,(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_last));
        vcdp->chgBit(c+193,(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__data_flow_unit_data_payload_regNext_last));
        vcdp->chgBit(c+201,(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__data_flow_unit_data_payload_regNext_last));
    }
}

void VModulatorRTL::traceChgThis__7(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+209,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->chgBit(c+217,(((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid) 
                             & (IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_last))));
        vcdp->chgBus(c+225,(((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                              ? (0xfffU & (((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)
                                             ? 0x7ff000U
                                             : 0x801000U) 
                                           >> 0xcU))
                              : 0U)),12);
        vcdp->chgBus(c+233,(0U),12);
        vcdp->chgBit(c+241,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid));
        vcdp->chgBit(c+249,(((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid) 
                             & (IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_last))));
        vcdp->chgBit(c+257,(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->chgBit(c+265,(((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid) 
                             & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_last))));
        vcdp->chgBus(c+273,(((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                              ? ((0U == (3U & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                               >> 2U)))
                                  ? 0xc35U : ((1U == 
                                               (3U 
                                                & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                   >> 2U)))
                                               ? 0xebcU
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                       >> 2U)))
                                                   ? 0x3caU
                                                   : 0x143U)))
                              : 0U)),12);
        vcdp->chgBus(c+281,(((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                              ? ((0U == (3U & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                  ? 0xc35U : ((1U == 
                                               (3U 
                                                & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                               ? 0xebcU
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                   ? 0x3caU
                                                   : 0x143U)))
                              : 0U)),12);
        vcdp->chgBit(c+289,((0U == (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready))));
        vcdp->chgBit(c+297,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment));
        vcdp->chgBit(c+305,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->chgBit(c+313,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_last));
        vcdp->chgBus(c+321,(0U),12);
        vcdp->chgBus(c+329,((0xfffU & (((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)
                                         ? 0x7ff000U
                                         : 0x801000U) 
                                       >> 0xcU))),12);
        vcdp->chgBus(c+337,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment),2);
        vcdp->chgBit(c+345,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid));
        vcdp->chgBit(c+353,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_last));
        vcdp->chgBus(c+361,(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment),4);
        vcdp->chgBit(c+369,(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->chgBit(c+377,(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_last));
        vcdp->chgBus(c+385,((3U & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment))),2);
        vcdp->chgBus(c+393,((3U & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                   >> 2U))),2);
        vcdp->chgBus(c+401,(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__data_flow_unit_data_payload_regNext_fragment),8);
        vcdp->chgBit(c+409,(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__unit_valid));
        vcdp->chgBit(c+417,(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__unit_last));
        vcdp->chgBus(c+425,(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__data_flow_unit_data_payload_regNext_fragment),7);
        vcdp->chgBit(c+433,(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__unit_valid));
        vcdp->chgBit(c+441,(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__unit_last));
        vcdp->chgBit(c+449,((0U != (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready))));
    }
}

void VModulatorRTL::traceChgThis__8(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+457,(vlTOPp->data_flow_unit_data_valid));
        vcdp->chgBit(c+465,(vlTOPp->data_flow_unit_data_payload_last));
        vcdp->chgBus(c+473,(vlTOPp->data_flow_unit_data_payload_fragment),8);
        vcdp->chgBit(c+481,(vlTOPp->data_flow_mod_iq_valid));
        vcdp->chgBit(c+489,(vlTOPp->data_flow_mod_iq_payload_last));
        vcdp->chgBus(c+497,(vlTOPp->data_flow_mod_iq_payload_fragment_cha_i),12);
        vcdp->chgBus(c+505,(vlTOPp->data_flow_mod_iq_payload_fragment_cha_q),12);
        vcdp->chgBus(c+513,(vlTOPp->w_en),2);
        vcdp->chgBus(c+521,(vlTOPp->w_addr),32);
        vcdp->chgBus(c+529,(vlTOPp->w_data),32);
        vcdp->chgBus(c+537,(vlTOPp->cnt_limit),32);
        vcdp->chgBus(c+545,(vlTOPp->select_1),3);
        vcdp->chgBit(c+553,(vlTOPp->clk));
        vcdp->chgBit(c+561,(vlTOPp->reset));
        vcdp->chgBit(c+569,(((0U != (IData)(vlTOPp->select_1))
                              ? 0U : (1U & (IData)(vlTOPp->data_flow_unit_data_payload_fragment)))));
        vcdp->chgBus(c+577,(((1U != (IData)(vlTOPp->select_1))
                              ? 0U : (3U & (IData)(vlTOPp->data_flow_unit_data_payload_fragment)))),2);
        vcdp->chgBus(c+585,(((2U != (IData)(vlTOPp->select_1))
                              ? 0U : (0xfU & (IData)(vlTOPp->data_flow_unit_data_payload_fragment)))),4);
        vcdp->chgBit(c+593,((0U == (IData)(vlTOPp->w_en))));
        vcdp->chgBus(c+601,((0xffU & vlTOPp->w_addr)),8);
        vcdp->chgBus(c+609,((0xffffffU & vlTOPp->w_data)),24);
        vcdp->chgBit(c+617,((1U == (IData)(vlTOPp->w_en))));
        vcdp->chgBus(c+625,((0x7fU & vlTOPp->w_addr)),7);
        vcdp->chgBus(c+633,((7U & vlTOPp->cnt_limit)),3);
        vcdp->chgBus(c+641,(((4U != (IData)(vlTOPp->select_1))
                              ? 0U : (0x7fU & (IData)(vlTOPp->data_flow_unit_data_payload_fragment)))),7);
        vcdp->chgBit(c+649,(((0U == (IData)(vlTOPp->select_1)) 
                             & (IData)(vlTOPp->data_flow_unit_data_valid))));
        vcdp->chgBus(c+657,(((0U != (IData)(vlTOPp->select_1))
                              ? 0U : (IData)(vlTOPp->data_flow_unit_data_payload_fragment))),8);
        vcdp->chgBit(c+665,(((1U == (IData)(vlTOPp->select_1)) 
                             & (IData)(vlTOPp->data_flow_unit_data_valid))));
        vcdp->chgBus(c+673,(((1U != (IData)(vlTOPp->select_1))
                              ? 0U : (IData)(vlTOPp->data_flow_unit_data_payload_fragment))),8);
        vcdp->chgBit(c+681,(((2U == (IData)(vlTOPp->select_1)) 
                             & (IData)(vlTOPp->data_flow_unit_data_valid))));
        vcdp->chgBus(c+689,(((2U != (IData)(vlTOPp->select_1))
                              ? 0U : (IData)(vlTOPp->data_flow_unit_data_payload_fragment))),8);
        vcdp->chgBit(c+697,(((3U == (IData)(vlTOPp->select_1)) 
                             & (IData)(vlTOPp->data_flow_unit_data_valid))));
        vcdp->chgBus(c+705,(((3U != (IData)(vlTOPp->select_1))
                              ? 0U : (IData)(vlTOPp->data_flow_unit_data_payload_fragment))),8);
        vcdp->chgBus(c+713,(((4U != (IData)(vlTOPp->select_1))
                              ? 0U : (IData)(vlTOPp->data_flow_unit_data_payload_fragment))),8);
        vcdp->chgBit(c+721,(((4U & (IData)(vlTOPp->select_1))
                              ? (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l70)
                              : ((2U & (IData)(vlTOPp->select_1))
                                  ? ((1U & (IData)(vlTOPp->select_1))
                                      ? (IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l87)
                                      : (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid))
                                  : ((1U & (IData)(vlTOPp->select_1))
                                      ? (IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                      : (IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid))))));
        vcdp->chgBit(c+729,(((4U & (IData)(vlTOPp->select_1))
                              ? ((IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l70) 
                                 & (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__unit_last))
                              : ((2U & (IData)(vlTOPp->select_1))
                                  ? ((1U & (IData)(vlTOPp->select_1))
                                      ? ((IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l87) 
                                         & (IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__unit_last))
                                      : ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid) 
                                         & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_last)))
                                  : ((1U & (IData)(vlTOPp->select_1))
                                      ? ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid) 
                                         & (IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_last))
                                      : ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid) 
                                         & (IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_last)))))));
        vcdp->chgBus(c+737,((0xfffU & ((4U & (IData)(vlTOPp->select_1))
                                        ? ((IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l70)
                                            ? (vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_code_map_port1 
                                               >> 0xcU)
                                            : 0U) : 
                                       ((2U & (IData)(vlTOPp->select_1))
                                         ? ((1U & (IData)(vlTOPp->select_1))
                                             ? ((IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l87)
                                                 ? 
                                                (vlTOPp->ModulatorRTL__DOT__mod_1__DOT___zz_code_map_port1 
                                                 >> 0xcU)
                                                 : 0U)
                                             : ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                      >> 2U)))
                                                  ? 0xc35U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                       >> 2U)))
                                                   ? 0xebcU
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
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
                                                (((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)
                                                   ? 0x7ff000U
                                                   : 0x801000U) 
                                                 >> 0xcU)
                                                 : 0U)))))),12);
        vcdp->chgBus(c+745,((0xfffU & ((4U & (IData)(vlTOPp->select_1))
                                        ? ((IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l70)
                                            ? vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_code_map_port1
                                            : 0U) : 
                                       ((2U & (IData)(vlTOPp->select_1))
                                         ? ((1U & (IData)(vlTOPp->select_1))
                                             ? ((IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l87)
                                                 ? vlTOPp->ModulatorRTL__DOT__mod_1__DOT___zz_code_map_port1
                                                 : 0U)
                                             : ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                  ? 0xc35U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                   ? 0xebcU
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                    ? 0x3caU
                                                    : 0x143U)))
                                                 : 0U))
                                         : ((1U & (IData)(vlTOPp->select_1))
                                             ? ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                                 ? vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0
                                                 : 0U)
                                             : ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                                 ? 
                                                ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)
                                                  ? 0x7ff000U
                                                  : 0x801000U)
                                                 : 0U)))))),12);
        vcdp->chgBit(c+753,((0U != (IData)(vlTOPp->select_1))));
        vcdp->chgBit(c+761,((1U != (IData)(vlTOPp->select_1))));
        vcdp->chgBit(c+769,((2U != (IData)(vlTOPp->select_1))));
        vcdp->chgBit(c+777,((3U != (IData)(vlTOPp->select_1))));
        vcdp->chgBit(c+785,((4U != (IData)(vlTOPp->select_1))));
    }
}
