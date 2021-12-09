// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBitonicSorter__Syms.h"


//======================

void VBitonicSorter::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VBitonicSorter* t = (VBitonicSorter*)userthis;
    VBitonicSorter__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VBitonicSorter::traceChgThis(VBitonicSorter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitonicSorter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 3U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VBitonicSorter::traceChgThis__2(VBitonicSorter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitonicSorter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_80__DOT__cmp_less_result)
                            ? (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_0_data)
                            : (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_1_data))),8);
        vcdp->chgBus(c+9,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_80__DOT__cmp_less_result)
                            ? (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_1_data)
                            : (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_0_data))),8);
        vcdp->chgBus(c+17,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_81__DOT__cmp_less_result)
                             ? (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_3_data)
                             : (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_2_data))),8);
        vcdp->chgBus(c+25,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_81__DOT__cmp_less_result)
                             ? (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_2_data)
                             : (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_3_data))),8);
        vcdp->chgBus(c+33,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_82__DOT__cmp_less_result)
                             ? (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_4_data)
                             : (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_5_data))),8);
        vcdp->chgBus(c+41,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_82__DOT__cmp_less_result)
                             ? (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_5_data)
                             : (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_4_data))),8);
        vcdp->chgBus(c+49,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_83__DOT__cmp_less_result)
                             ? (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_7_data)
                             : (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_6_data))),8);
        vcdp->chgBus(c+57,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_83__DOT__cmp_less_result)
                             ? (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_6_data)
                             : (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_7_data))),8);
        vcdp->chgBus(c+65,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_84__DOT__cmp_less_result)
                             ? (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_8_data)
                             : (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_9_data))),8);
        vcdp->chgBus(c+73,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_84__DOT__cmp_less_result)
                             ? (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_9_data)
                             : (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_8_data))),8);
        vcdp->chgBus(c+81,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_85__DOT__cmp_less_result)
                             ? (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_11_data)
                             : (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_10_data))),8);
        vcdp->chgBus(c+89,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_85__DOT__cmp_less_result)
                             ? (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_10_data)
                             : (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_11_data))),8);
        vcdp->chgBus(c+97,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_86__DOT__cmp_less_result)
                             ? (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_12_data)
                             : (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_13_data))),8);
        vcdp->chgBus(c+105,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_86__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_13_data)
                              : (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_12_data))),8);
        vcdp->chgBus(c+113,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_87__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_15_data)
                              : (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_14_data))),8);
        vcdp->chgBus(c+121,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_87__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_14_data)
                              : (IData)(vlTOPp->BitonicSorter__DOT__reg_data_buf_15_data))),8);
        vcdp->chgBus(c+129,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_88__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data))),8);
        vcdp->chgBus(c+137,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_88__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data))),8);
        vcdp->chgBus(c+145,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_89__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_1)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_1))),8);
        vcdp->chgBus(c+153,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_89__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_1)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_1))),8);
        vcdp->chgBus(c+161,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_90__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_2)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_2))),8);
        vcdp->chgBus(c+169,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_90__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_2)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_2))),8);
        vcdp->chgBus(c+177,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_91__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_3)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_3))),8);
        vcdp->chgBus(c+185,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_91__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_3)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_3))),8);
        vcdp->chgBus(c+193,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_92__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_4)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_4))),8);
        vcdp->chgBus(c+201,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_92__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_4)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_4))),8);
        vcdp->chgBus(c+209,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_93__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_5)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_5))),8);
        vcdp->chgBus(c+217,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_93__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_5)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_5))),8);
        vcdp->chgBus(c+225,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_94__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_6)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_6))),8);
        vcdp->chgBus(c+233,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_94__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_6)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_6))),8);
        vcdp->chgBus(c+241,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_95__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_7)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_7))),8);
        vcdp->chgBus(c+249,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_95__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_7)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_7))),8);
        vcdp->chgBus(c+257,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_96__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_8)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_8))),8);
        vcdp->chgBus(c+265,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_96__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_8)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_8))),8);
        vcdp->chgBus(c+273,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_97__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_9)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_9))),8);
        vcdp->chgBus(c+281,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_97__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_9)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_9))),8);
        vcdp->chgBus(c+289,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_98__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_10)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_10))),8);
        vcdp->chgBus(c+297,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_98__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_10)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_10))),8);
        vcdp->chgBus(c+305,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_99__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_11)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_11))),8);
        vcdp->chgBus(c+313,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_99__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_11)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_11))),8);
        vcdp->chgBus(c+321,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_100__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_12)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_12))),8);
        vcdp->chgBus(c+329,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_100__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_12)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_12))),8);
        vcdp->chgBus(c+337,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_101__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_13)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_13))),8);
        vcdp->chgBus(c+345,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_101__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_13)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_13))),8);
        vcdp->chgBus(c+353,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_102__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_14)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_14))),8);
        vcdp->chgBus(c+361,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_102__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_14)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_14))),8);
        vcdp->chgBus(c+369,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_103__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_15)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_15))),8);
        vcdp->chgBus(c+377,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_103__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_15)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_15))),8);
        vcdp->chgBus(c+385,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_104__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_16)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_16))),8);
        vcdp->chgBus(c+393,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_104__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_16)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_16))),8);
        vcdp->chgBus(c+401,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_105__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_17)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_17))),8);
        vcdp->chgBus(c+409,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_105__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_17)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_17))),8);
        vcdp->chgBus(c+417,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_106__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_18)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_18))),8);
        vcdp->chgBus(c+425,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_106__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_18)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_18))),8);
        vcdp->chgBus(c+433,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_107__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_19)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_19))),8);
        vcdp->chgBus(c+441,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_107__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_19)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_19))),8);
        vcdp->chgBus(c+449,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_108__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_20)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_20))),8);
        vcdp->chgBus(c+457,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_108__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_20)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_20))),8);
        vcdp->chgBus(c+465,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_109__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_21)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_21))),8);
        vcdp->chgBus(c+473,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_109__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_21)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_21))),8);
        vcdp->chgBus(c+481,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_110__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_22)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_22))),8);
        vcdp->chgBus(c+489,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_110__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_22)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_22))),8);
        vcdp->chgBus(c+497,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_111__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_23)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_23))),8);
        vcdp->chgBus(c+505,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_111__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_23)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_23))),8);
        vcdp->chgBus(c+513,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_112__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_24)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_24))),8);
        vcdp->chgBus(c+521,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_112__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_24)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_24))),8);
        vcdp->chgBus(c+529,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_113__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_25)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_25))),8);
        vcdp->chgBus(c+537,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_113__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_25)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_25))),8);
        vcdp->chgBus(c+545,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_114__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_26)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_26))),8);
        vcdp->chgBus(c+553,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_114__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_26)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_26))),8);
        vcdp->chgBus(c+561,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_115__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_27)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_27))),8);
        vcdp->chgBus(c+569,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_115__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_27)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_27))),8);
        vcdp->chgBus(c+577,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_116__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_28)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_28))),8);
        vcdp->chgBus(c+585,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_116__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_28)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_28))),8);
        vcdp->chgBus(c+593,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_117__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_29)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_29))),8);
        vcdp->chgBus(c+601,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_117__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_29)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_29))),8);
        vcdp->chgBus(c+609,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_118__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_30)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_30))),8);
        vcdp->chgBus(c+617,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_118__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_30)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_30))),8);
        vcdp->chgBus(c+625,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_119__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_31)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_31))),8);
        vcdp->chgBus(c+633,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_119__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_31)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_31))),8);
        vcdp->chgBus(c+641,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_120__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_32)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_32))),8);
        vcdp->chgBus(c+649,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_120__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_32)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_32))),8);
        vcdp->chgBus(c+657,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_121__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_33)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_33))),8);
        vcdp->chgBus(c+665,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_121__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_33)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_33))),8);
        vcdp->chgBus(c+673,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_122__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_34)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_34))),8);
        vcdp->chgBus(c+681,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_122__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_34)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_34))),8);
        vcdp->chgBus(c+689,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_123__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_35)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_35))),8);
        vcdp->chgBus(c+697,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_123__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_35)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_35))),8);
        vcdp->chgBus(c+705,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_124__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_36)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_36))),8);
        vcdp->chgBus(c+713,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_124__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_36)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_36))),8);
        vcdp->chgBus(c+721,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_125__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_37)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_37))),8);
        vcdp->chgBus(c+729,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_125__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_37)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_37))),8);
        vcdp->chgBus(c+737,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_126__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_38)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_38))),8);
        vcdp->chgBus(c+745,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_126__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_38)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_38))),8);
        vcdp->chgBus(c+753,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_127__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_39)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_39))),8);
        vcdp->chgBus(c+761,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_127__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_39)
                              : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_39))),8);
        vcdp->chgBit(c+769,(vlTOPp->BitonicSorter__DOT__cmpUnit_80__DOT__cmp_less_result));
        vcdp->chgBit(c+777,(vlTOPp->BitonicSorter__DOT__cmpUnit_81__DOT__cmp_less_result));
        vcdp->chgBit(c+785,((1U & (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_81__DOT__cmp_less_result)))));
        vcdp->chgBit(c+793,(vlTOPp->BitonicSorter__DOT__cmpUnit_82__DOT__cmp_less_result));
        vcdp->chgBit(c+801,(vlTOPp->BitonicSorter__DOT__cmpUnit_83__DOT__cmp_less_result));
        vcdp->chgBit(c+809,((1U & (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_83__DOT__cmp_less_result)))));
        vcdp->chgBit(c+817,(vlTOPp->BitonicSorter__DOT__cmpUnit_84__DOT__cmp_less_result));
        vcdp->chgBit(c+825,(vlTOPp->BitonicSorter__DOT__cmpUnit_85__DOT__cmp_less_result));
        vcdp->chgBit(c+833,((1U & (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_85__DOT__cmp_less_result)))));
    }
}

void VBitonicSorter::traceChgThis__4(VBitonicSorter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitonicSorter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+841,(vlTOPp->BitonicSorter__DOT__cmpUnit_86__DOT__cmp_less_result));
        vcdp->chgBit(c+849,(vlTOPp->BitonicSorter__DOT__cmpUnit_87__DOT__cmp_less_result));
        vcdp->chgBit(c+857,((1U & (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_87__DOT__cmp_less_result)))));
        vcdp->chgBit(c+865,(vlTOPp->BitonicSorter__DOT__cmpUnit_88__DOT__cmp_less_result));
        vcdp->chgBit(c+873,(vlTOPp->BitonicSorter__DOT__cmpUnit_89__DOT__cmp_less_result));
        vcdp->chgBit(c+881,(vlTOPp->BitonicSorter__DOT__cmpUnit_90__DOT__cmp_less_result));
        vcdp->chgBit(c+889,((1U & (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_90__DOT__cmp_less_result)))));
        vcdp->chgBit(c+897,(vlTOPp->BitonicSorter__DOT__cmpUnit_91__DOT__cmp_less_result));
        vcdp->chgBit(c+905,((1U & (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_91__DOT__cmp_less_result)))));
        vcdp->chgBit(c+913,(vlTOPp->BitonicSorter__DOT__cmpUnit_92__DOT__cmp_less_result));
        vcdp->chgBit(c+921,(vlTOPp->BitonicSorter__DOT__cmpUnit_93__DOT__cmp_less_result));
        vcdp->chgBit(c+929,(vlTOPp->BitonicSorter__DOT__cmpUnit_94__DOT__cmp_less_result));
        vcdp->chgBit(c+937,((1U & (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_94__DOT__cmp_less_result)))));
        vcdp->chgBit(c+945,(vlTOPp->BitonicSorter__DOT__cmpUnit_95__DOT__cmp_less_result));
        vcdp->chgBit(c+953,((1U & (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_95__DOT__cmp_less_result)))));
        vcdp->chgBit(c+961,(vlTOPp->BitonicSorter__DOT__cmpUnit_96__DOT__cmp_less_result));
        vcdp->chgBit(c+969,(vlTOPp->BitonicSorter__DOT__cmpUnit_97__DOT__cmp_less_result));
        vcdp->chgBit(c+977,(vlTOPp->BitonicSorter__DOT__cmpUnit_98__DOT__cmp_less_result));
        vcdp->chgBit(c+985,((1U & (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_98__DOT__cmp_less_result)))));
        vcdp->chgBit(c+993,(vlTOPp->BitonicSorter__DOT__cmpUnit_99__DOT__cmp_less_result));
        vcdp->chgBit(c+1001,((1U & (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_99__DOT__cmp_less_result)))));
        vcdp->chgBit(c+1009,(vlTOPp->BitonicSorter__DOT__cmpUnit_100__DOT__cmp_less_result));
        vcdp->chgBit(c+1017,(vlTOPp->BitonicSorter__DOT__cmpUnit_101__DOT__cmp_less_result));
        vcdp->chgBit(c+1025,(vlTOPp->BitonicSorter__DOT__cmpUnit_102__DOT__cmp_less_result));
        vcdp->chgBit(c+1033,((1U & (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_102__DOT__cmp_less_result)))));
        vcdp->chgBit(c+1041,(vlTOPp->BitonicSorter__DOT__cmpUnit_103__DOT__cmp_less_result));
        vcdp->chgBit(c+1049,((1U & (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_103__DOT__cmp_less_result)))));
        vcdp->chgBit(c+1057,(vlTOPp->BitonicSorter__DOT__cmpUnit_104__DOT__cmp_less_result));
        vcdp->chgBit(c+1065,(vlTOPp->BitonicSorter__DOT__cmpUnit_105__DOT__cmp_less_result));
        vcdp->chgBit(c+1073,(vlTOPp->BitonicSorter__DOT__cmpUnit_106__DOT__cmp_less_result));
        vcdp->chgBit(c+1081,(vlTOPp->BitonicSorter__DOT__cmpUnit_107__DOT__cmp_less_result));
        vcdp->chgBit(c+1089,(vlTOPp->BitonicSorter__DOT__cmpUnit_108__DOT__cmp_less_result));
        vcdp->chgBit(c+1097,((1U & (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_108__DOT__cmp_less_result)))));
        vcdp->chgBit(c+1105,(vlTOPp->BitonicSorter__DOT__cmpUnit_109__DOT__cmp_less_result));
        vcdp->chgBit(c+1113,((1U & (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_109__DOT__cmp_less_result)))));
        vcdp->chgBit(c+1121,(vlTOPp->BitonicSorter__DOT__cmpUnit_110__DOT__cmp_less_result));
        vcdp->chgBit(c+1129,((1U & (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_110__DOT__cmp_less_result)))));
        vcdp->chgBit(c+1137,(vlTOPp->BitonicSorter__DOT__cmpUnit_111__DOT__cmp_less_result));
        vcdp->chgBit(c+1145,((1U & (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_111__DOT__cmp_less_result)))));
        vcdp->chgBit(c+1153,(vlTOPp->BitonicSorter__DOT__cmpUnit_112__DOT__cmp_less_result));
        vcdp->chgBit(c+1161,(vlTOPp->BitonicSorter__DOT__cmpUnit_113__DOT__cmp_less_result));
        vcdp->chgBit(c+1169,(vlTOPp->BitonicSorter__DOT__cmpUnit_114__DOT__cmp_less_result));
        vcdp->chgBit(c+1177,(vlTOPp->BitonicSorter__DOT__cmpUnit_115__DOT__cmp_less_result));
        vcdp->chgBit(c+1185,(vlTOPp->BitonicSorter__DOT__cmpUnit_116__DOT__cmp_less_result));
        vcdp->chgBit(c+1193,((1U & (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_116__DOT__cmp_less_result)))));
        vcdp->chgBit(c+1201,(vlTOPp->BitonicSorter__DOT__cmpUnit_117__DOT__cmp_less_result));
        vcdp->chgBit(c+1209,((1U & (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_117__DOT__cmp_less_result)))));
        vcdp->chgBit(c+1217,(vlTOPp->BitonicSorter__DOT__cmpUnit_118__DOT__cmp_less_result));
        vcdp->chgBit(c+1225,((1U & (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_118__DOT__cmp_less_result)))));
        vcdp->chgBit(c+1233,(vlTOPp->BitonicSorter__DOT__cmpUnit_119__DOT__cmp_less_result));
        vcdp->chgBit(c+1241,((1U & (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_119__DOT__cmp_less_result)))));
        vcdp->chgBit(c+1249,(vlTOPp->BitonicSorter__DOT__cmpUnit_120__DOT__cmp_less_result));
        vcdp->chgBit(c+1257,(vlTOPp->BitonicSorter__DOT__cmpUnit_121__DOT__cmp_less_result));
        vcdp->chgBit(c+1265,(vlTOPp->BitonicSorter__DOT__cmpUnit_122__DOT__cmp_less_result));
        vcdp->chgBit(c+1273,(vlTOPp->BitonicSorter__DOT__cmpUnit_123__DOT__cmp_less_result));
        vcdp->chgBit(c+1281,(vlTOPp->BitonicSorter__DOT__cmpUnit_124__DOT__cmp_less_result));
        vcdp->chgBit(c+1289,((1U & (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_124__DOT__cmp_less_result)))));
        vcdp->chgBit(c+1297,(vlTOPp->BitonicSorter__DOT__cmpUnit_125__DOT__cmp_less_result));
        vcdp->chgBit(c+1305,((1U & (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_125__DOT__cmp_less_result)))));
        vcdp->chgBit(c+1313,(vlTOPp->BitonicSorter__DOT__cmpUnit_126__DOT__cmp_less_result));
        vcdp->chgBit(c+1321,((1U & (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_126__DOT__cmp_less_result)))));
        vcdp->chgBit(c+1329,(vlTOPp->BitonicSorter__DOT__cmpUnit_127__DOT__cmp_less_result));
        vcdp->chgBit(c+1337,((1U & (~ (IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_127__DOT__cmp_less_result)))));
        vcdp->chgBit(c+1345,(vlTOPp->BitonicSorter__DOT__cmpUnit_128__DOT__cmp_less_result));
        vcdp->chgBit(c+1353,(vlTOPp->BitonicSorter__DOT__cmpUnit_129__DOT__cmp_less_result));
        vcdp->chgBit(c+1361,(vlTOPp->BitonicSorter__DOT__cmpUnit_130__DOT__cmp_less_result));
        vcdp->chgBit(c+1369,(vlTOPp->BitonicSorter__DOT__cmpUnit_131__DOT__cmp_less_result));
        vcdp->chgBit(c+1377,(vlTOPp->BitonicSorter__DOT__cmpUnit_132__DOT__cmp_less_result));
        vcdp->chgBit(c+1385,(vlTOPp->BitonicSorter__DOT__cmpUnit_133__DOT__cmp_less_result));
        vcdp->chgBit(c+1393,(vlTOPp->BitonicSorter__DOT__cmpUnit_134__DOT__cmp_less_result));
        vcdp->chgBit(c+1401,(vlTOPp->BitonicSorter__DOT__cmpUnit_135__DOT__cmp_less_result));
        vcdp->chgBit(c+1409,(vlTOPp->BitonicSorter__DOT__cmpUnit_136__DOT__cmp_less_result));
        vcdp->chgBit(c+1417,(vlTOPp->BitonicSorter__DOT__cmpUnit_137__DOT__cmp_less_result));
        vcdp->chgBit(c+1425,(vlTOPp->BitonicSorter__DOT__cmpUnit_138__DOT__cmp_less_result));
        vcdp->chgBit(c+1433,(vlTOPp->BitonicSorter__DOT__cmpUnit_139__DOT__cmp_less_result));
        vcdp->chgBit(c+1441,(vlTOPp->BitonicSorter__DOT__cmpUnit_140__DOT__cmp_less_result));
        vcdp->chgBit(c+1449,(vlTOPp->BitonicSorter__DOT__cmpUnit_141__DOT__cmp_less_result));
        vcdp->chgBit(c+1457,(vlTOPp->BitonicSorter__DOT__cmpUnit_142__DOT__cmp_less_result));
        vcdp->chgBit(c+1465,(vlTOPp->BitonicSorter__DOT__cmpUnit_143__DOT__cmp_less_result));
        vcdp->chgBit(c+1473,(vlTOPp->BitonicSorter__DOT__cmpUnit_144__DOT__cmp_less_result));
        vcdp->chgBit(c+1481,(vlTOPp->BitonicSorter__DOT__cmpUnit_145__DOT__cmp_less_result));
        vcdp->chgBit(c+1489,(vlTOPp->BitonicSorter__DOT__cmpUnit_146__DOT__cmp_less_result));
        vcdp->chgBit(c+1497,(vlTOPp->BitonicSorter__DOT__cmpUnit_147__DOT__cmp_less_result));
        vcdp->chgBit(c+1505,(vlTOPp->BitonicSorter__DOT__cmpUnit_148__DOT__cmp_less_result));
        vcdp->chgBit(c+1513,(vlTOPp->BitonicSorter__DOT__cmpUnit_149__DOT__cmp_less_result));
        vcdp->chgBit(c+1521,(vlTOPp->BitonicSorter__DOT__cmpUnit_150__DOT__cmp_less_result));
        vcdp->chgBit(c+1529,(vlTOPp->BitonicSorter__DOT__cmpUnit_151__DOT__cmp_less_result));
        vcdp->chgBit(c+1537,(vlTOPp->BitonicSorter__DOT__cmpUnit_152__DOT__cmp_less_result));
        vcdp->chgBit(c+1545,(vlTOPp->BitonicSorter__DOT__cmpUnit_153__DOT__cmp_less_result));
        vcdp->chgBit(c+1553,(vlTOPp->BitonicSorter__DOT__cmpUnit_154__DOT__cmp_less_result));
        vcdp->chgBit(c+1561,(vlTOPp->BitonicSorter__DOT__cmpUnit_155__DOT__cmp_less_result));
        vcdp->chgBit(c+1569,(vlTOPp->BitonicSorter__DOT__cmpUnit_156__DOT__cmp_less_result));
        vcdp->chgBit(c+1577,(vlTOPp->BitonicSorter__DOT__cmpUnit_157__DOT__cmp_less_result));
        vcdp->chgBit(c+1585,(vlTOPp->BitonicSorter__DOT__cmpUnit_158__DOT__cmp_less_result));
        vcdp->chgBit(c+1593,(vlTOPp->BitonicSorter__DOT__cmpUnit_159__DOT__cmp_less_result));
    }
}

void VBitonicSorter::traceChgThis__5(VBitonicSorter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitonicSorter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1601,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_128__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_40)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_40))),8);
        vcdp->chgBus(c+1609,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_128__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_40)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_40))),8);
        vcdp->chgBus(c+1617,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_129__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_41)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_41))),8);
        vcdp->chgBus(c+1625,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_129__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_41)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_41))),8);
        vcdp->chgBus(c+1633,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_130__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_42)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_42))),8);
        vcdp->chgBus(c+1641,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_130__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_42)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_42))),8);
        vcdp->chgBus(c+1649,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_131__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_43)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_43))),8);
        vcdp->chgBus(c+1657,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_131__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_43)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_43))),8);
        vcdp->chgBus(c+1665,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_132__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_44)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_44))),8);
        vcdp->chgBus(c+1673,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_132__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_44)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_44))),8);
        vcdp->chgBus(c+1681,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_133__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_45)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_45))),8);
        vcdp->chgBus(c+1689,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_133__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_45)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_45))),8);
        vcdp->chgBus(c+1697,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_134__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_46)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_46))),8);
        vcdp->chgBus(c+1705,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_134__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_46)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_46))),8);
        vcdp->chgBus(c+1713,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_135__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_47)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_47))),8);
        vcdp->chgBus(c+1721,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_135__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_47)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_47))),8);
        vcdp->chgBus(c+1729,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_136__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_48)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_48))),8);
        vcdp->chgBus(c+1737,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_136__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_48)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_48))),8);
        vcdp->chgBus(c+1745,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_137__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_49)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_49))),8);
        vcdp->chgBus(c+1753,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_137__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_49)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_49))),8);
        vcdp->chgBus(c+1761,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_138__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_50)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_50))),8);
        vcdp->chgBus(c+1769,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_138__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_50)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_50))),8);
        vcdp->chgBus(c+1777,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_139__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_51)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_51))),8);
        vcdp->chgBus(c+1785,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_139__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_51)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_51))),8);
        vcdp->chgBus(c+1793,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_140__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_52)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_52))),8);
        vcdp->chgBus(c+1801,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_140__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_52)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_52))),8);
        vcdp->chgBus(c+1809,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_141__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_53)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_53))),8);
        vcdp->chgBus(c+1817,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_141__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_53)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_53))),8);
        vcdp->chgBus(c+1825,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_142__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_54)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_54))),8);
        vcdp->chgBus(c+1833,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_142__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_54)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_54))),8);
        vcdp->chgBus(c+1841,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_143__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_55)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_55))),8);
        vcdp->chgBus(c+1849,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_143__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_55)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_55))),8);
        vcdp->chgBus(c+1857,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_144__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_56)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_56))),8);
        vcdp->chgBus(c+1865,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_144__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_56)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_56))),8);
        vcdp->chgBus(c+1873,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_145__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_57)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_57))),8);
        vcdp->chgBus(c+1881,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_145__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_57)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_57))),8);
        vcdp->chgBus(c+1889,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_146__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_58)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_58))),8);
        vcdp->chgBus(c+1897,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_146__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_58)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_58))),8);
        vcdp->chgBus(c+1905,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_147__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_59)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_59))),8);
        vcdp->chgBus(c+1913,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_147__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_59)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_59))),8);
        vcdp->chgBus(c+1921,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_148__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_60)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_60))),8);
        vcdp->chgBus(c+1929,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_148__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_60)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_60))),8);
        vcdp->chgBus(c+1937,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_149__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_61)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_61))),8);
        vcdp->chgBus(c+1945,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_149__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_61)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_61))),8);
        vcdp->chgBus(c+1953,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_150__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_62)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_62))),8);
        vcdp->chgBus(c+1961,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_150__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_62)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_62))),8);
        vcdp->chgBus(c+1969,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_151__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_63)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_63))),8);
        vcdp->chgBus(c+1977,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_151__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_63)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_63))),8);
        vcdp->chgBus(c+1985,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_152__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_64)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_64))),8);
        vcdp->chgBus(c+1993,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_152__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_64)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_64))),8);
        vcdp->chgBus(c+2001,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_153__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_65)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_65))),8);
        vcdp->chgBus(c+2009,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_153__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_65)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_65))),8);
        vcdp->chgBus(c+2017,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_154__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_66)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_66))),8);
        vcdp->chgBus(c+2025,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_154__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_66)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_66))),8);
        vcdp->chgBus(c+2033,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_155__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_67)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_67))),8);
        vcdp->chgBus(c+2041,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_155__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_67)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_67))),8);
        vcdp->chgBus(c+2049,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_156__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_68)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_68))),8);
        vcdp->chgBus(c+2057,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_156__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_68)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_68))),8);
        vcdp->chgBus(c+2065,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_157__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_69)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_69))),8);
        vcdp->chgBus(c+2073,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_157__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_69)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_69))),8);
        vcdp->chgBus(c+2081,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_158__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_70)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_70))),8);
        vcdp->chgBus(c+2089,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_158__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_70)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_70))),8);
        vcdp->chgBus(c+2097,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_159__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_71)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_71))),8);
        vcdp->chgBus(c+2105,(((IData)(vlTOPp->BitonicSorter__DOT__cmpUnit_159__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSorter__DOT___zz_in2_data_71)
                               : (IData)(vlTOPp->BitonicSorter__DOT___zz_in1_data_71))),8);
    }
}

void VBitonicSorter::traceChgThis__7(VBitonicSorter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitonicSorter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2113,(vlTOPp->BitonicSorter__DOT__cmpUnit_128__DOT__cmp_sel));
        vcdp->chgBit(c+2121,(vlTOPp->BitonicSorter__DOT__cmpUnit_129__DOT__cmp_sel));
        vcdp->chgBit(c+2129,(vlTOPp->BitonicSorter__DOT__cmpUnit_130__DOT__cmp_sel));
        vcdp->chgBit(c+2137,(vlTOPp->BitonicSorter__DOT__cmpUnit_131__DOT__cmp_sel));
        vcdp->chgBit(c+2145,(vlTOPp->BitonicSorter__DOT__cmpUnit_132__DOT__cmp_sel));
        vcdp->chgBit(c+2153,(vlTOPp->BitonicSorter__DOT__cmpUnit_133__DOT__cmp_sel));
        vcdp->chgBit(c+2161,(vlTOPp->BitonicSorter__DOT__cmpUnit_134__DOT__cmp_sel));
        vcdp->chgBit(c+2169,(vlTOPp->BitonicSorter__DOT__cmpUnit_135__DOT__cmp_sel));
        vcdp->chgBit(c+2177,(vlTOPp->BitonicSorter__DOT__cmpUnit_136__DOT__cmp_sel));
        vcdp->chgBit(c+2185,(vlTOPp->BitonicSorter__DOT__cmpUnit_137__DOT__cmp_sel));
        vcdp->chgBit(c+2193,(vlTOPp->BitonicSorter__DOT__cmpUnit_138__DOT__cmp_sel));
        vcdp->chgBit(c+2201,(vlTOPp->BitonicSorter__DOT__cmpUnit_139__DOT__cmp_sel));
        vcdp->chgBit(c+2209,(vlTOPp->BitonicSorter__DOT__cmpUnit_140__DOT__cmp_sel));
        vcdp->chgBit(c+2217,(vlTOPp->BitonicSorter__DOT__cmpUnit_141__DOT__cmp_sel));
        vcdp->chgBit(c+2225,(vlTOPp->BitonicSorter__DOT__cmpUnit_142__DOT__cmp_sel));
        vcdp->chgBit(c+2233,(vlTOPp->BitonicSorter__DOT__cmpUnit_143__DOT__cmp_sel));
        vcdp->chgBit(c+2241,(vlTOPp->BitonicSorter__DOT__cmpUnit_144__DOT__cmp_sel));
        vcdp->chgBit(c+2249,(vlTOPp->BitonicSorter__DOT__cmpUnit_145__DOT__cmp_sel));
        vcdp->chgBit(c+2257,(vlTOPp->BitonicSorter__DOT__cmpUnit_146__DOT__cmp_sel));
        vcdp->chgBit(c+2265,(vlTOPp->BitonicSorter__DOT__cmpUnit_147__DOT__cmp_sel));
        vcdp->chgBit(c+2273,(vlTOPp->BitonicSorter__DOT__cmpUnit_148__DOT__cmp_sel));
        vcdp->chgBit(c+2281,(vlTOPp->BitonicSorter__DOT__cmpUnit_149__DOT__cmp_sel));
        vcdp->chgBit(c+2289,(vlTOPp->BitonicSorter__DOT__cmpUnit_150__DOT__cmp_sel));
        vcdp->chgBit(c+2297,(vlTOPp->BitonicSorter__DOT__cmpUnit_151__DOT__cmp_sel));
        vcdp->chgBit(c+2305,(vlTOPp->BitonicSorter__DOT__cmpUnit_152__DOT__cmp_sel));
        vcdp->chgBit(c+2313,(vlTOPp->BitonicSorter__DOT__cmpUnit_153__DOT__cmp_sel));
        vcdp->chgBit(c+2321,(vlTOPp->BitonicSorter__DOT__cmpUnit_154__DOT__cmp_sel));
        vcdp->chgBit(c+2329,(vlTOPp->BitonicSorter__DOT__cmpUnit_155__DOT__cmp_sel));
        vcdp->chgBit(c+2337,(vlTOPp->BitonicSorter__DOT__cmpUnit_156__DOT__cmp_sel));
        vcdp->chgBit(c+2345,(vlTOPp->BitonicSorter__DOT__cmpUnit_157__DOT__cmp_sel));
        vcdp->chgBit(c+2353,(vlTOPp->BitonicSorter__DOT__cmpUnit_158__DOT__cmp_sel));
        vcdp->chgBit(c+2361,(vlTOPp->BitonicSorter__DOT__cmpUnit_159__DOT__cmp_sel));
    }
}

void VBitonicSorter::traceChgThis__8(VBitonicSorter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitonicSorter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2369,(vlTOPp->BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_10));
        vcdp->chgBit(c+2377,(vlTOPp->BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_0));
        vcdp->chgBit(c+2385,(vlTOPp->BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_1));
        vcdp->chgBit(c+2393,(vlTOPp->BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_2));
        vcdp->chgBit(c+2401,(vlTOPp->BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_3));
        vcdp->chgBit(c+2409,(vlTOPp->BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_4));
        vcdp->chgBit(c+2417,(vlTOPp->BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_5));
        vcdp->chgBit(c+2425,(vlTOPp->BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_6));
        vcdp->chgBit(c+2433,(vlTOPp->BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_7));
        vcdp->chgBit(c+2441,(vlTOPp->BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_8));
        vcdp->chgBit(c+2449,(vlTOPp->BitonicSorter__DOT__shiftRegister_1__DOT__shift_reg_9));
    }
}

void VBitonicSorter::traceChgThis__9(VBitonicSorter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitonicSorter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2457,(vlTOPp->BitonicSorter__DOT__reg_data_buf_0_data),8);
        vcdp->chgBus(c+2465,(vlTOPp->BitonicSorter__DOT__reg_data_buf_1_data),8);
        vcdp->chgBus(c+2473,(vlTOPp->BitonicSorter__DOT__reg_data_buf_2_data),8);
        vcdp->chgBus(c+2481,(vlTOPp->BitonicSorter__DOT__reg_data_buf_3_data),8);
        vcdp->chgBus(c+2489,(vlTOPp->BitonicSorter__DOT__reg_data_buf_4_data),8);
        vcdp->chgBus(c+2497,(vlTOPp->BitonicSorter__DOT__reg_data_buf_5_data),8);
        vcdp->chgBus(c+2505,(vlTOPp->BitonicSorter__DOT__reg_data_buf_6_data),8);
        vcdp->chgBus(c+2513,(vlTOPp->BitonicSorter__DOT__reg_data_buf_7_data),8);
        vcdp->chgBus(c+2521,(vlTOPp->BitonicSorter__DOT__reg_data_buf_8_data),8);
        vcdp->chgBus(c+2529,(vlTOPp->BitonicSorter__DOT__reg_data_buf_9_data),8);
        vcdp->chgBus(c+2537,(vlTOPp->BitonicSorter__DOT__reg_data_buf_10_data),8);
        vcdp->chgBus(c+2545,(vlTOPp->BitonicSorter__DOT__reg_data_buf_11_data),8);
        vcdp->chgBus(c+2553,(vlTOPp->BitonicSorter__DOT__reg_data_buf_12_data),8);
        vcdp->chgBus(c+2561,(vlTOPp->BitonicSorter__DOT__reg_data_buf_13_data),8);
        vcdp->chgBus(c+2569,(vlTOPp->BitonicSorter__DOT__reg_data_buf_14_data),8);
        vcdp->chgBus(c+2577,(vlTOPp->BitonicSorter__DOT__reg_data_buf_15_data),8);
        vcdp->chgBus(c+2585,(vlTOPp->BitonicSorter__DOT___zz_in1_data),8);
        vcdp->chgBus(c+2593,(vlTOPp->BitonicSorter__DOT___zz_in2_data),8);
        vcdp->chgBus(c+2601,(vlTOPp->BitonicSorter__DOT___zz_in1_data_1),8);
        vcdp->chgBus(c+2609,(vlTOPp->BitonicSorter__DOT___zz_in2_data_1),8);
        vcdp->chgBus(c+2617,(vlTOPp->BitonicSorter__DOT___zz_in1_data_2),8);
        vcdp->chgBus(c+2625,(vlTOPp->BitonicSorter__DOT___zz_in2_data_2),8);
        vcdp->chgBus(c+2633,(vlTOPp->BitonicSorter__DOT___zz_in1_data_3),8);
        vcdp->chgBus(c+2641,(vlTOPp->BitonicSorter__DOT___zz_in2_data_3),8);
        vcdp->chgBus(c+2649,(vlTOPp->BitonicSorter__DOT___zz_in1_data_4),8);
        vcdp->chgBus(c+2657,(vlTOPp->BitonicSorter__DOT___zz_in2_data_4),8);
        vcdp->chgBus(c+2665,(vlTOPp->BitonicSorter__DOT___zz_in1_data_5),8);
        vcdp->chgBus(c+2673,(vlTOPp->BitonicSorter__DOT___zz_in2_data_5),8);
        vcdp->chgBus(c+2681,(vlTOPp->BitonicSorter__DOT___zz_in1_data_6),8);
        vcdp->chgBus(c+2689,(vlTOPp->BitonicSorter__DOT___zz_in2_data_6),8);
        vcdp->chgBus(c+2697,(vlTOPp->BitonicSorter__DOT___zz_in1_data_7),8);
        vcdp->chgBus(c+2705,(vlTOPp->BitonicSorter__DOT___zz_in2_data_7),8);
        vcdp->chgBus(c+2713,(vlTOPp->BitonicSorter__DOT___zz_in1_data_8),8);
        vcdp->chgBus(c+2721,(vlTOPp->BitonicSorter__DOT___zz_in2_data_8),8);
        vcdp->chgBus(c+2729,(vlTOPp->BitonicSorter__DOT___zz_in1_data_9),8);
        vcdp->chgBus(c+2737,(vlTOPp->BitonicSorter__DOT___zz_in2_data_9),8);
        vcdp->chgBus(c+2745,(vlTOPp->BitonicSorter__DOT___zz_in1_data_10),8);
        vcdp->chgBus(c+2753,(vlTOPp->BitonicSorter__DOT___zz_in2_data_10),8);
        vcdp->chgBus(c+2761,(vlTOPp->BitonicSorter__DOT___zz_in1_data_11),8);
        vcdp->chgBus(c+2769,(vlTOPp->BitonicSorter__DOT___zz_in2_data_11),8);
        vcdp->chgBus(c+2777,(vlTOPp->BitonicSorter__DOT___zz_in1_data_12),8);
        vcdp->chgBus(c+2785,(vlTOPp->BitonicSorter__DOT___zz_in2_data_12),8);
        vcdp->chgBus(c+2793,(vlTOPp->BitonicSorter__DOT___zz_in1_data_13),8);
        vcdp->chgBus(c+2801,(vlTOPp->BitonicSorter__DOT___zz_in2_data_13),8);
        vcdp->chgBus(c+2809,(vlTOPp->BitonicSorter__DOT___zz_in1_data_14),8);
        vcdp->chgBus(c+2817,(vlTOPp->BitonicSorter__DOT___zz_in2_data_14),8);
        vcdp->chgBus(c+2825,(vlTOPp->BitonicSorter__DOT___zz_in1_data_15),8);
        vcdp->chgBus(c+2833,(vlTOPp->BitonicSorter__DOT___zz_in2_data_15),8);
        vcdp->chgBus(c+2841,(vlTOPp->BitonicSorter__DOT___zz_in1_data_16),8);
        vcdp->chgBus(c+2849,(vlTOPp->BitonicSorter__DOT___zz_in2_data_16),8);
        vcdp->chgBus(c+2857,(vlTOPp->BitonicSorter__DOT___zz_in1_data_17),8);
        vcdp->chgBus(c+2865,(vlTOPp->BitonicSorter__DOT___zz_in2_data_17),8);
        vcdp->chgBus(c+2873,(vlTOPp->BitonicSorter__DOT___zz_in1_data_18),8);
        vcdp->chgBus(c+2881,(vlTOPp->BitonicSorter__DOT___zz_in2_data_18),8);
        vcdp->chgBus(c+2889,(vlTOPp->BitonicSorter__DOT___zz_in1_data_19),8);
        vcdp->chgBus(c+2897,(vlTOPp->BitonicSorter__DOT___zz_in2_data_19),8);
        vcdp->chgBus(c+2905,(vlTOPp->BitonicSorter__DOT___zz_in1_data_20),8);
        vcdp->chgBus(c+2913,(vlTOPp->BitonicSorter__DOT___zz_in2_data_20),8);
        vcdp->chgBus(c+2921,(vlTOPp->BitonicSorter__DOT___zz_in1_data_21),8);
        vcdp->chgBus(c+2929,(vlTOPp->BitonicSorter__DOT___zz_in2_data_21),8);
        vcdp->chgBus(c+2937,(vlTOPp->BitonicSorter__DOT___zz_in1_data_22),8);
        vcdp->chgBus(c+2945,(vlTOPp->BitonicSorter__DOT___zz_in2_data_22),8);
        vcdp->chgBus(c+2953,(vlTOPp->BitonicSorter__DOT___zz_in1_data_23),8);
        vcdp->chgBus(c+2961,(vlTOPp->BitonicSorter__DOT___zz_in2_data_23),8);
        vcdp->chgBus(c+2969,(vlTOPp->BitonicSorter__DOT___zz_in1_data_24),8);
        vcdp->chgBus(c+2977,(vlTOPp->BitonicSorter__DOT___zz_in2_data_24),8);
        vcdp->chgBus(c+2985,(vlTOPp->BitonicSorter__DOT___zz_in1_data_25),8);
        vcdp->chgBus(c+2993,(vlTOPp->BitonicSorter__DOT___zz_in2_data_25),8);
        vcdp->chgBus(c+3001,(vlTOPp->BitonicSorter__DOT___zz_in1_data_26),8);
        vcdp->chgBus(c+3009,(vlTOPp->BitonicSorter__DOT___zz_in2_data_26),8);
        vcdp->chgBus(c+3017,(vlTOPp->BitonicSorter__DOT___zz_in1_data_27),8);
        vcdp->chgBus(c+3025,(vlTOPp->BitonicSorter__DOT___zz_in2_data_27),8);
        vcdp->chgBus(c+3033,(vlTOPp->BitonicSorter__DOT___zz_in1_data_28),8);
        vcdp->chgBus(c+3041,(vlTOPp->BitonicSorter__DOT___zz_in2_data_28),8);
        vcdp->chgBus(c+3049,(vlTOPp->BitonicSorter__DOT___zz_in1_data_29),8);
        vcdp->chgBus(c+3057,(vlTOPp->BitonicSorter__DOT___zz_in2_data_29),8);
        vcdp->chgBus(c+3065,(vlTOPp->BitonicSorter__DOT___zz_in1_data_30),8);
        vcdp->chgBus(c+3073,(vlTOPp->BitonicSorter__DOT___zz_in2_data_30),8);
        vcdp->chgBus(c+3081,(vlTOPp->BitonicSorter__DOT___zz_in1_data_31),8);
        vcdp->chgBus(c+3089,(vlTOPp->BitonicSorter__DOT___zz_in2_data_31),8);
        vcdp->chgBus(c+3097,(vlTOPp->BitonicSorter__DOT___zz_in1_data_32),8);
        vcdp->chgBus(c+3105,(vlTOPp->BitonicSorter__DOT___zz_in2_data_32),8);
        vcdp->chgBus(c+3113,(vlTOPp->BitonicSorter__DOT___zz_in1_data_33),8);
        vcdp->chgBus(c+3121,(vlTOPp->BitonicSorter__DOT___zz_in2_data_33),8);
        vcdp->chgBus(c+3129,(vlTOPp->BitonicSorter__DOT___zz_in1_data_34),8);
        vcdp->chgBus(c+3137,(vlTOPp->BitonicSorter__DOT___zz_in2_data_34),8);
        vcdp->chgBus(c+3145,(vlTOPp->BitonicSorter__DOT___zz_in1_data_35),8);
        vcdp->chgBus(c+3153,(vlTOPp->BitonicSorter__DOT___zz_in2_data_35),8);
        vcdp->chgBus(c+3161,(vlTOPp->BitonicSorter__DOT___zz_in1_data_36),8);
        vcdp->chgBus(c+3169,(vlTOPp->BitonicSorter__DOT___zz_in2_data_36),8);
        vcdp->chgBus(c+3177,(vlTOPp->BitonicSorter__DOT___zz_in1_data_37),8);
        vcdp->chgBus(c+3185,(vlTOPp->BitonicSorter__DOT___zz_in2_data_37),8);
        vcdp->chgBus(c+3193,(vlTOPp->BitonicSorter__DOT___zz_in1_data_38),8);
        vcdp->chgBus(c+3201,(vlTOPp->BitonicSorter__DOT___zz_in2_data_38),8);
        vcdp->chgBus(c+3209,(vlTOPp->BitonicSorter__DOT___zz_in1_data_39),8);
        vcdp->chgBus(c+3217,(vlTOPp->BitonicSorter__DOT___zz_in2_data_39),8);
        vcdp->chgBus(c+3225,(vlTOPp->BitonicSorter__DOT___zz_in1_data_40),8);
        vcdp->chgBus(c+3233,(vlTOPp->BitonicSorter__DOT___zz_in2_data_40),8);
        vcdp->chgBus(c+3241,(vlTOPp->BitonicSorter__DOT___zz_in1_data_41),8);
        vcdp->chgBus(c+3249,(vlTOPp->BitonicSorter__DOT___zz_in2_data_41),8);
        vcdp->chgBus(c+3257,(vlTOPp->BitonicSorter__DOT___zz_in1_data_42),8);
        vcdp->chgBus(c+3265,(vlTOPp->BitonicSorter__DOT___zz_in2_data_42),8);
        vcdp->chgBus(c+3273,(vlTOPp->BitonicSorter__DOT___zz_in1_data_43),8);
        vcdp->chgBus(c+3281,(vlTOPp->BitonicSorter__DOT___zz_in2_data_43),8);
        vcdp->chgBus(c+3289,(vlTOPp->BitonicSorter__DOT___zz_in1_data_44),8);
        vcdp->chgBus(c+3297,(vlTOPp->BitonicSorter__DOT___zz_in2_data_44),8);
        vcdp->chgBus(c+3305,(vlTOPp->BitonicSorter__DOT___zz_in1_data_45),8);
        vcdp->chgBus(c+3313,(vlTOPp->BitonicSorter__DOT___zz_in2_data_45),8);
        vcdp->chgBus(c+3321,(vlTOPp->BitonicSorter__DOT___zz_in1_data_46),8);
        vcdp->chgBus(c+3329,(vlTOPp->BitonicSorter__DOT___zz_in2_data_46),8);
        vcdp->chgBus(c+3337,(vlTOPp->BitonicSorter__DOT___zz_in1_data_47),8);
        vcdp->chgBus(c+3345,(vlTOPp->BitonicSorter__DOT___zz_in2_data_47),8);
        vcdp->chgBus(c+3353,(vlTOPp->BitonicSorter__DOT___zz_in1_data_48),8);
        vcdp->chgBus(c+3361,(vlTOPp->BitonicSorter__DOT___zz_in2_data_48),8);
        vcdp->chgBus(c+3369,(vlTOPp->BitonicSorter__DOT___zz_in1_data_49),8);
        vcdp->chgBus(c+3377,(vlTOPp->BitonicSorter__DOT___zz_in2_data_49),8);
        vcdp->chgBus(c+3385,(vlTOPp->BitonicSorter__DOT___zz_in1_data_50),8);
        vcdp->chgBus(c+3393,(vlTOPp->BitonicSorter__DOT___zz_in2_data_50),8);
        vcdp->chgBus(c+3401,(vlTOPp->BitonicSorter__DOT___zz_in1_data_51),8);
        vcdp->chgBus(c+3409,(vlTOPp->BitonicSorter__DOT___zz_in2_data_51),8);
        vcdp->chgBus(c+3417,(vlTOPp->BitonicSorter__DOT___zz_in1_data_52),8);
        vcdp->chgBus(c+3425,(vlTOPp->BitonicSorter__DOT___zz_in2_data_52),8);
        vcdp->chgBus(c+3433,(vlTOPp->BitonicSorter__DOT___zz_in1_data_53),8);
        vcdp->chgBus(c+3441,(vlTOPp->BitonicSorter__DOT___zz_in2_data_53),8);
        vcdp->chgBus(c+3449,(vlTOPp->BitonicSorter__DOT___zz_in1_data_54),8);
        vcdp->chgBus(c+3457,(vlTOPp->BitonicSorter__DOT___zz_in2_data_54),8);
        vcdp->chgBus(c+3465,(vlTOPp->BitonicSorter__DOT___zz_in1_data_55),8);
        vcdp->chgBus(c+3473,(vlTOPp->BitonicSorter__DOT___zz_in2_data_55),8);
        vcdp->chgBus(c+3481,(vlTOPp->BitonicSorter__DOT___zz_in1_data_56),8);
        vcdp->chgBus(c+3489,(vlTOPp->BitonicSorter__DOT___zz_in2_data_56),8);
        vcdp->chgBus(c+3497,(vlTOPp->BitonicSorter__DOT___zz_in1_data_57),8);
        vcdp->chgBus(c+3505,(vlTOPp->BitonicSorter__DOT___zz_in2_data_57),8);
        vcdp->chgBus(c+3513,(vlTOPp->BitonicSorter__DOT___zz_in1_data_58),8);
        vcdp->chgBus(c+3521,(vlTOPp->BitonicSorter__DOT___zz_in2_data_58),8);
        vcdp->chgBus(c+3529,(vlTOPp->BitonicSorter__DOT___zz_in1_data_59),8);
        vcdp->chgBus(c+3537,(vlTOPp->BitonicSorter__DOT___zz_in2_data_59),8);
        vcdp->chgBus(c+3545,(vlTOPp->BitonicSorter__DOT___zz_in1_data_60),8);
        vcdp->chgBus(c+3553,(vlTOPp->BitonicSorter__DOT___zz_in2_data_60),8);
        vcdp->chgBus(c+3561,(vlTOPp->BitonicSorter__DOT___zz_in1_data_61),8);
        vcdp->chgBus(c+3569,(vlTOPp->BitonicSorter__DOT___zz_in2_data_61),8);
        vcdp->chgBus(c+3577,(vlTOPp->BitonicSorter__DOT___zz_in1_data_62),8);
        vcdp->chgBus(c+3585,(vlTOPp->BitonicSorter__DOT___zz_in2_data_62),8);
        vcdp->chgBus(c+3593,(vlTOPp->BitonicSorter__DOT___zz_in1_data_63),8);
        vcdp->chgBus(c+3601,(vlTOPp->BitonicSorter__DOT___zz_in2_data_63),8);
        vcdp->chgBus(c+3609,(vlTOPp->BitonicSorter__DOT___zz_in1_data_64),8);
        vcdp->chgBus(c+3617,(vlTOPp->BitonicSorter__DOT___zz_in2_data_64),8);
        vcdp->chgBus(c+3625,(vlTOPp->BitonicSorter__DOT___zz_in1_data_65),8);
        vcdp->chgBus(c+3633,(vlTOPp->BitonicSorter__DOT___zz_in2_data_65),8);
        vcdp->chgBus(c+3641,(vlTOPp->BitonicSorter__DOT___zz_in1_data_66),8);
        vcdp->chgBus(c+3649,(vlTOPp->BitonicSorter__DOT___zz_in2_data_66),8);
        vcdp->chgBus(c+3657,(vlTOPp->BitonicSorter__DOT___zz_in1_data_67),8);
        vcdp->chgBus(c+3665,(vlTOPp->BitonicSorter__DOT___zz_in2_data_67),8);
        vcdp->chgBus(c+3673,(vlTOPp->BitonicSorter__DOT___zz_in1_data_68),8);
        vcdp->chgBus(c+3681,(vlTOPp->BitonicSorter__DOT___zz_in2_data_68),8);
        vcdp->chgBus(c+3689,(vlTOPp->BitonicSorter__DOT___zz_in1_data_69),8);
        vcdp->chgBus(c+3697,(vlTOPp->BitonicSorter__DOT___zz_in2_data_69),8);
        vcdp->chgBus(c+3705,(vlTOPp->BitonicSorter__DOT___zz_in1_data_70),8);
        vcdp->chgBus(c+3713,(vlTOPp->BitonicSorter__DOT___zz_in2_data_70),8);
        vcdp->chgBus(c+3721,(vlTOPp->BitonicSorter__DOT___zz_in1_data_71),8);
        vcdp->chgBus(c+3729,(vlTOPp->BitonicSorter__DOT___zz_in2_data_71),8);
    }
}

void VBitonicSorter::traceChgThis__10(VBitonicSorter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitonicSorter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3737,(vlTOPp->raw_data_valid));
        vcdp->chgBus(c+3745,(vlTOPp->raw_data_payload_0),8);
        vcdp->chgBus(c+3753,(vlTOPp->raw_data_payload_1),8);
        vcdp->chgBus(c+3761,(vlTOPp->raw_data_payload_2),8);
        vcdp->chgBus(c+3769,(vlTOPp->raw_data_payload_3),8);
        vcdp->chgBus(c+3777,(vlTOPp->raw_data_payload_4),8);
        vcdp->chgBus(c+3785,(vlTOPp->raw_data_payload_5),8);
        vcdp->chgBus(c+3793,(vlTOPp->raw_data_payload_6),8);
        vcdp->chgBus(c+3801,(vlTOPp->raw_data_payload_7),8);
        vcdp->chgBus(c+3809,(vlTOPp->raw_data_payload_8),8);
        vcdp->chgBus(c+3817,(vlTOPp->raw_data_payload_9),8);
        vcdp->chgBus(c+3825,(vlTOPp->raw_data_payload_10),8);
        vcdp->chgBus(c+3833,(vlTOPp->raw_data_payload_11),8);
        vcdp->chgBus(c+3841,(vlTOPp->raw_data_payload_12),8);
        vcdp->chgBus(c+3849,(vlTOPp->raw_data_payload_13),8);
        vcdp->chgBus(c+3857,(vlTOPp->raw_data_payload_14),8);
        vcdp->chgBus(c+3865,(vlTOPp->raw_data_payload_15),8);
        vcdp->chgBit(c+3873,(vlTOPp->ascending_order));
        vcdp->chgBit(c+3881,(vlTOPp->sorted_data_valid));
        vcdp->chgBus(c+3889,(vlTOPp->sorted_data_payload_0_data),8);
        vcdp->chgBus(c+3897,(vlTOPp->sorted_data_payload_1_data),8);
        vcdp->chgBus(c+3905,(vlTOPp->sorted_data_payload_2_data),8);
        vcdp->chgBus(c+3913,(vlTOPp->sorted_data_payload_3_data),8);
        vcdp->chgBus(c+3921,(vlTOPp->sorted_data_payload_4_data),8);
        vcdp->chgBus(c+3929,(vlTOPp->sorted_data_payload_5_data),8);
        vcdp->chgBus(c+3937,(vlTOPp->sorted_data_payload_6_data),8);
        vcdp->chgBus(c+3945,(vlTOPp->sorted_data_payload_7_data),8);
        vcdp->chgBus(c+3953,(vlTOPp->sorted_data_payload_8_data),8);
        vcdp->chgBus(c+3961,(vlTOPp->sorted_data_payload_9_data),8);
        vcdp->chgBus(c+3969,(vlTOPp->sorted_data_payload_10_data),8);
        vcdp->chgBus(c+3977,(vlTOPp->sorted_data_payload_11_data),8);
        vcdp->chgBus(c+3985,(vlTOPp->sorted_data_payload_12_data),8);
        vcdp->chgBus(c+3993,(vlTOPp->sorted_data_payload_13_data),8);
        vcdp->chgBus(c+4001,(vlTOPp->sorted_data_payload_14_data),8);
        vcdp->chgBus(c+4009,(vlTOPp->sorted_data_payload_15_data),8);
        vcdp->chgBit(c+4017,(vlTOPp->clk));
        vcdp->chgBit(c+4025,(vlTOPp->reset));
    }
}
