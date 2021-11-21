// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VConvCombTest__Syms.h"


//======================

void VConvCombTest::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VConvCombTest* t = (VConvCombTest*)userthis;
    VConvCombTest__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VConvCombTest::traceChgThis(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 3U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 4U))))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__17(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__19(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__21(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 2U) | (vlTOPp->__Vm_traceActivity 
                                          >> 4U))))) {
            vlTOPp->traceChgThis__23(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__24(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 3U) | (vlTOPp->__Vm_traceActivity 
                                          >> 4U))))) {
            vlTOPp->traceChgThis__25(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__26(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__28(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x20U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__29(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__30(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VConvCombTest::traceChgThis__2(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,((0x7fU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                    >> 1U))),7);
        vcdp->chgBit(c+9,((1U & ((((((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                     >> 1U) ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                               >> 2U)) 
                                   ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                      >> 4U)) ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                 >> 5U)) 
                                 ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                    >> 7U)))));
        vcdp->chgBit(c+17,((1U & ((((((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                      >> 1U) ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                >> 4U)) 
                                    ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                       >> 5U)) ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                  >> 6U)) 
                                  ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                     >> 7U)))));
        vcdp->chgBit(c+25,((1U & ((((((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                      >> 1U) ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                >> 3U)) 
                                    ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                       >> 5U)) ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                  >> 6U)) 
                                  ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                     >> 7U)))));
        vcdp->chgBit(c+33,(vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_fire));
    }
}

void VConvCombTest::traceChgThis__3(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+41,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__when_AddCompareSelect_l17)
                             ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_0)
                             : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+49,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+57,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__when_AddCompareSelect_l17)
                             ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_0)
                             : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+65,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+73,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__when_AddCompareSelect_l17)
                             ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_0)
                             : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+81,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+89,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__when_AddCompareSelect_l17)
                             ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_0)
                             : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+97,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+105,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+113,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+121,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+129,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+137,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+145,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+153,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+161,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+169,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+177,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+185,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+193,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+201,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+209,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+217,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+225,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+233,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+241,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+249,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+257,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+265,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+273,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+281,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+289,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+297,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+305,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+313,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+321,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+329,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+337,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+345,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+353,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+361,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+369,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+377,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+385,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+393,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+401,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+409,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+417,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+425,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+433,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+441,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+449,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+457,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+465,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+473,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+481,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+489,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+497,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+505,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+513,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+521,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+529,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+537,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+545,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+553,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+561,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+569,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+577,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+585,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+593,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+601,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+609,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+617,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+625,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+633,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+641,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+649,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+657,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+665,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+673,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+681,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+689,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+697,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+705,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+713,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+721,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+729,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+737,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+745,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+753,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+761,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+769,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+777,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+785,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+793,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+801,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+809,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+817,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+825,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+833,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+841,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+849,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+857,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+865,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+873,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+881,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+889,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+897,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+905,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+913,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+921,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+929,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+937,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+945,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+953,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+961,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+969,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+977,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+985,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+993,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+1001,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__when_AddCompareSelect_l17)
                               ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_0)
                               : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+1009,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+1017,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__when_AddCompareSelect_l17)
                               ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_0)
                               : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+1025,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+1033,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__when_AddCompareSelect_l17)
                               ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_0)
                               : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_1))),8);
    }
}

void VConvCombTest::traceChgThis__5(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1041,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+1049,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__when_AddCompareSelect_l17)
                               ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_0)
                               : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+1057,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+1065,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1073,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1081,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1089,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1097,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1105,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1113,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1121,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1129,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1137,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1145,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1153,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1161,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1169,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1177,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1185,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1193,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1201,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1209,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1217,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1225,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1233,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1241,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1249,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1257,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1265,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1273,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1281,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1289,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1297,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1305,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1313,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1321,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1329,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1337,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1345,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1353,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1361,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1369,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1377,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1385,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1393,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1401,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1409,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1417,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1425,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1433,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1441,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1449,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1457,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1465,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1473,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1481,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1489,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1497,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1505,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1513,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1521,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1529,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1537,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1545,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1553,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1561,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1569,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1577,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1585,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1593,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1601,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1609,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1617,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1625,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1633,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1641,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1649,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1657,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1665,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1673,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1681,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1689,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1697,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1705,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1713,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1721,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1729,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1737,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1745,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1753,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1761,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1769,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1777,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1785,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1793,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1801,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1809,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1817,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1825,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1833,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1841,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1849,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1857,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1865,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1873,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1881,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1889,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1897,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1905,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1913,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1921,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1929,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1937,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1945,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1953,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1961,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1969,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1977,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1985,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1993,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2001,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2009,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2017,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2025,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2033,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2041,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2049,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2057,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2065,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2073,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2081,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2089,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2097,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2105,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2113,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2121,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2129,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2137,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2145,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2153,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2161,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2169,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2177,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2185,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2193,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2201,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2209,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2217,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2225,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2233,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2241,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2249,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2257,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2265,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2273,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2281,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2289,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2297,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2305,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2313,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2321,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2329,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2337,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2345,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2353,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2361,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2369,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2377,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2385,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2393,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2401,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2409,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2417,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2425,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2433,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2441,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2449,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2457,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2465,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2473,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2481,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2489,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2497,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2505,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2513,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2521,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2529,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2537,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2545,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2553,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2561,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2569,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2577,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2585,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2593,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__when_AddCompareSelect_l17));
    }
}

void VConvCombTest::traceChgThis__6(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2601,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+2609,(vlTOPp->ConvCombTest__DOT__encoded_fifo_io_pop_valid));
        vcdp->chgBus(c+2617,(((((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy) 
                                & (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch)) 
                               << 0xbU) | (0x7ffU & 
                                           ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value) 
                                            - (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value))))),12);
        vcdp->chgBus(c+2625,(((((~ (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy)) 
                                & (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch)) 
                               << 0xbU) | (0x7ffU & 
                                           ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value) 
                                            - (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value))))),12);
        vcdp->chgBit(c+2633,(vlTOPp->ConvCombTest__DOT__decoder_raw_data_ready));
        vcdp->chgBit(c+2641,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+2649,(vlTOPp->ConvCombTest__DOT__decoded_fifo_io_pop_valid));
        vcdp->chgBus(c+2657,(((((IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_risingOccupancy) 
                                & (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_ptrMatch)) 
                               << 0xbU) | (0x7ffU & 
                                           ((IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushPtr_value) 
                                            - (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_popPtr_value))))),12);
        vcdp->chgBus(c+2665,(((((~ (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_risingOccupancy)) 
                                & (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_ptrMatch)) 
                               << 0xbU) | (0x7ffU & 
                                           ((IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_popPtr_value) 
                                            - (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushPtr_value))))),12);
        vcdp->chgBit(c+2673,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+2681,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_valueNext),11);
        vcdp->chgBit(c+2689,(((0x7ffU == (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+2697,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBit(c+2705,(((0x7ffU == (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+2713,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+2721,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+2729,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popping));
        vcdp->chgBit(c+2737,(((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+2745,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_full));
        vcdp->chgBit(c+2753,(((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+2761,(vlTOPp->ConvCombTest__DOT__decoder__DOT__raw_data_fire));
        vcdp->chgBit(c+2769,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_ready));
        vcdp->chgBit(c+2777,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_demux_input_valid));
        vcdp->chgBit(c+2785,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+2793,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid));
        vcdp->chgBus(c+2801,(((((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy) 
                                & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch)) 
                               << 4U) | (0xfU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value))))),5);
        vcdp->chgBus(c+2809,(((((~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy)) 
                                & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch)) 
                               << 4U) | (0xfU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value))))),5);
        vcdp->chgBit(c+2817,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0_push_ready));
        vcdp->chgBit(c+2825,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0_pop_valid));
        vcdp->chgBit(c+2833,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) 
                              & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT___zz_pop_payload_fragment))));
        vcdp->chgBit(c+2841,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1_push_ready));
        vcdp->chgBit(c+2849,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1_pop_valid));
        vcdp->chgBit(c+2857,(((~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)) 
                              & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT___zz_pop_payload_fragment))));
        vcdp->chgBit(c+2865,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_demux_input_ready));
        vcdp->chgBit(c+2873,(((~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)) 
                              & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_demux_input_valid))));
        vcdp->chgBit(c+2881,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) 
                              & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_demux_input_valid))));
        vcdp->chgBit(c+2889,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                               ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0_pop_valid)
                               : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1_pop_valid))));
        vcdp->chgBit(c+2897,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                               ? ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) 
                                  & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT___zz_pop_payload_fragment))
                               : ((~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)) 
                                  & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT___zz_pop_payload_fragment)))));
        vcdp->chgBit(c+2905,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid) 
                              & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_ready))));
        vcdp->chgBit(c+2913,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+2921,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_valueNext),4);
        vcdp->chgBit(c+2929,(((0xfU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+2937,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBit(c+2945,(((0xfU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+2953,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+2961,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+2969,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping));
        vcdp->chgBit(c+2977,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+2985,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full));
        vcdp->chgBit(c+2993,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+3001,((((~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)) 
                               & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_demux_input_valid)) 
                              & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0_push_ready))));
        vcdp->chgBit(c+3009,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25));
        vcdp->chgBit(c+3017,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0_pop_valid) 
                              & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state))));
        vcdp->chgBit(c+3025,((((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0_pop_valid) 
                               & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)) 
                              & (0U != (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)))));
        vcdp->chgBit(c+3033,((((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) 
                               & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_demux_input_valid)) 
                              & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1_push_ready))));
        vcdp->chgBit(c+3041,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25));
        vcdp->chgBit(c+3049,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1_pop_valid) 
                              & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))));
        vcdp->chgBit(c+3057,((((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1_pop_valid) 
                               & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state))) 
                              & (0U != (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)))));
        vcdp->chgBit(c+3065,(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+3073,(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushPtr_valueNext),11);
        vcdp->chgBit(c+3081,(((0x7ffU == (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+3089,(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+3097,(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_popPtr_valueNext),11);
        vcdp->chgBit(c+3105,(((0x7ffU == (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+3113,(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+3121,(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+3129,(((IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+3137,(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_full));
        vcdp->chgBit(c+3145,(((IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo_io_pop_valid))));
    }
}

void VConvCombTest::traceChgThis__8(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3153,(((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__raw_data_fire))));
    }
}

void VConvCombTest::traceChgThis__9(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+3161,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor),7);
        vcdp->chgBus(c+3169,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom
                             [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor]),6);
        vcdp->chgBit(c+3177,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom
                             [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor]));
    }
}

void VConvCombTest::traceChgThis__10(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+3185,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_valueNext),11);
        vcdp->chgBit(c+3193,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l104));
        vcdp->chgArray(c+3201,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string),88);
        vcdp->chgBus(c+3225,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_valueNext),4);
    }
}

void VConvCombTest::traceChgThis__11(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+3233,(vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data),3);
        vcdp->chgBit(c+3241,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_mux_io_output_payload_fragment_regNext));
        vcdp->chgBit(c+3249,((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT___zz_logic_ram_port0))));
        vcdp->chgBit(c+3257,((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT___zz_logic_ram_port0) 
                                    >> 1U))));
        vcdp->chgBus(c+3265,(vlTOPp->ConvCombTest__DOT__encoder__DOT__r_enc_buf),7);
        vcdp->chgBus(c+3273,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_62),6);
        vcdp->chgQuad(c+3281,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path),64);
        vcdp->chgBit(c+3297,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pipe_halt));
        vcdp->chgBus(c+3305,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_0),8);
        vcdp->chgBus(c+3313,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_1),8);
        vcdp->chgBus(c+3321,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_2),8);
        vcdp->chgBus(c+3329,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_3),8);
        vcdp->chgBus(c+3337,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_4),8);
        vcdp->chgBus(c+3345,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_5),8);
        vcdp->chgBus(c+3353,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_6),8);
        vcdp->chgBus(c+3361,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_7),8);
        vcdp->chgBus(c+3369,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_8),8);
        vcdp->chgBus(c+3377,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_9),8);
        vcdp->chgBus(c+3385,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_10),8);
        vcdp->chgBus(c+3393,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_11),8);
        vcdp->chgBus(c+3401,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_12),8);
        vcdp->chgBus(c+3409,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_13),8);
        vcdp->chgBus(c+3417,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_14),8);
        vcdp->chgBus(c+3425,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_15),8);
        vcdp->chgBus(c+3433,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_16),8);
        vcdp->chgBus(c+3441,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_17),8);
        vcdp->chgBus(c+3449,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_18),8);
        vcdp->chgBus(c+3457,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_19),8);
        vcdp->chgBus(c+3465,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_20),8);
        vcdp->chgBus(c+3473,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_21),8);
        vcdp->chgBus(c+3481,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_22),8);
        vcdp->chgBus(c+3489,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_23),8);
        vcdp->chgBus(c+3497,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_24),8);
        vcdp->chgBus(c+3505,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_25),8);
        vcdp->chgBus(c+3513,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_26),8);
        vcdp->chgBus(c+3521,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_27),8);
        vcdp->chgBus(c+3529,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_28),8);
        vcdp->chgBus(c+3537,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_29),8);
        vcdp->chgBus(c+3545,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_30),8);
        vcdp->chgBus(c+3553,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_31),8);
        vcdp->chgBus(c+3561,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_32),8);
        vcdp->chgBus(c+3569,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_33),8);
        vcdp->chgBus(c+3577,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_34),8);
        vcdp->chgBus(c+3585,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_35),8);
        vcdp->chgBus(c+3593,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_36),8);
        vcdp->chgBus(c+3601,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_37),8);
        vcdp->chgBus(c+3609,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_38),8);
        vcdp->chgBus(c+3617,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_39),8);
        vcdp->chgBus(c+3625,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_40),8);
        vcdp->chgBus(c+3633,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_41),8);
        vcdp->chgBus(c+3641,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_42),8);
        vcdp->chgBus(c+3649,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_43),8);
        vcdp->chgBus(c+3657,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_44),8);
        vcdp->chgBus(c+3665,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_45),8);
        vcdp->chgBus(c+3673,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_46),8);
        vcdp->chgBus(c+3681,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_47),8);
        vcdp->chgBus(c+3689,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_48),8);
        vcdp->chgBus(c+3697,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_49),8);
        vcdp->chgBus(c+3705,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_50),8);
        vcdp->chgBus(c+3713,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_51),8);
        vcdp->chgBus(c+3721,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_52),8);
        vcdp->chgBus(c+3729,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_53),8);
        vcdp->chgBus(c+3737,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_54),8);
        vcdp->chgBus(c+3745,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_55),8);
        vcdp->chgBus(c+3753,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_56),8);
        vcdp->chgBus(c+3761,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_57),8);
        vcdp->chgBus(c+3769,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_58),8);
        vcdp->chgBus(c+3777,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_59),8);
        vcdp->chgBus(c+3785,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_60),8);
        vcdp->chgBus(c+3793,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_61),8);
        vcdp->chgBus(c+3801,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_62),8);
        vcdp->chgBus(c+3809,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_63),8);
        vcdp->chgBus(c+3817,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_64),8);
        vcdp->chgBus(c+3825,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_65),8);
        vcdp->chgBus(c+3833,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_66),8);
        vcdp->chgBus(c+3841,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_67),8);
        vcdp->chgBus(c+3849,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_68),8);
        vcdp->chgBus(c+3857,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_69),8);
        vcdp->chgBus(c+3865,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_70),8);
        vcdp->chgBus(c+3873,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_71),8);
        vcdp->chgBus(c+3881,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_72),8);
        vcdp->chgBus(c+3889,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_73),8);
        vcdp->chgBus(c+3897,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_74),8);
        vcdp->chgBus(c+3905,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_75),8);
        vcdp->chgBus(c+3913,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_76),8);
        vcdp->chgBus(c+3921,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_77),8);
        vcdp->chgBus(c+3929,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_78),8);
        vcdp->chgBus(c+3937,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_79),8);
        vcdp->chgBus(c+3945,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_80),8);
        vcdp->chgBus(c+3953,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_81),8);
        vcdp->chgBus(c+3961,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_82),8);
        vcdp->chgBus(c+3969,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_83),8);
        vcdp->chgBus(c+3977,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_84),8);
        vcdp->chgBus(c+3985,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_85),8);
        vcdp->chgBus(c+3993,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_86),8);
        vcdp->chgBus(c+4001,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_87),8);
        vcdp->chgBus(c+4009,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_88),8);
        vcdp->chgBus(c+4017,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_89),8);
        vcdp->chgBus(c+4025,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_90),8);
        vcdp->chgBus(c+4033,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_91),8);
        vcdp->chgBus(c+4041,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_92),8);
        vcdp->chgBus(c+4049,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_93),8);
        vcdp->chgBus(c+4057,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_94),8);
        vcdp->chgBus(c+4065,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_95),8);
        vcdp->chgBus(c+4073,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_96),8);
        vcdp->chgBus(c+4081,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_97),8);
        vcdp->chgBus(c+4089,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_98),8);
        vcdp->chgBus(c+4097,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_99),8);
        vcdp->chgBus(c+4105,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_100),8);
        vcdp->chgBus(c+4113,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_101),8);
        vcdp->chgBus(c+4121,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_102),8);
        vcdp->chgBus(c+4129,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_103),8);
        vcdp->chgBus(c+4137,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_104),8);
        vcdp->chgBus(c+4145,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_105),8);
        vcdp->chgBus(c+4153,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_106),8);
        vcdp->chgBus(c+4161,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_107),8);
        vcdp->chgBus(c+4169,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_108),8);
        vcdp->chgBus(c+4177,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_109),8);
        vcdp->chgBus(c+4185,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_110),8);
        vcdp->chgBus(c+4193,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_111),8);
        vcdp->chgBus(c+4201,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_112),8);
        vcdp->chgBus(c+4209,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_113),8);
        vcdp->chgBus(c+4217,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_114),8);
        vcdp->chgBus(c+4225,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_115),8);
        vcdp->chgBus(c+4233,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_116),8);
        vcdp->chgBus(c+4241,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_117),8);
        vcdp->chgBus(c+4249,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_118),8);
        vcdp->chgBus(c+4257,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_119),8);
        vcdp->chgBus(c+4265,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_120),8);
        vcdp->chgBus(c+4273,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_121),8);
        vcdp->chgBus(c+4281,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_122),8);
        vcdp->chgBus(c+4289,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_123),8);
        vcdp->chgBus(c+4297,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_124),8);
        vcdp->chgBus(c+4305,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_125),8);
        vcdp->chgBus(c+4313,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_126),8);
        vcdp->chgBus(c+4321,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_127),8);
        vcdp->chgBus(c+4329,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_62),8);
        vcdp->chgBus(c+4337,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0),8);
        vcdp->chgBus(c+4345,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1),8);
        vcdp->chgBus(c+4353,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2),8);
        vcdp->chgBus(c+4361,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3),8);
        vcdp->chgBus(c+4369,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_4),8);
        vcdp->chgBus(c+4377,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_5),8);
        vcdp->chgBus(c+4385,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_6),8);
        vcdp->chgBus(c+4393,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_7),8);
        vcdp->chgBus(c+4401,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_8),8);
        vcdp->chgBus(c+4409,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_9),8);
        vcdp->chgBus(c+4417,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_10),8);
        vcdp->chgBus(c+4425,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_11),8);
        vcdp->chgBus(c+4433,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_12),8);
        vcdp->chgBus(c+4441,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_13),8);
        vcdp->chgBus(c+4449,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_14),8);
        vcdp->chgBus(c+4457,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_15),8);
        vcdp->chgBus(c+4465,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_16),8);
        vcdp->chgBus(c+4473,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_17),8);
        vcdp->chgBus(c+4481,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_18),8);
        vcdp->chgBus(c+4489,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_19),8);
        vcdp->chgBus(c+4497,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_20),8);
        vcdp->chgBus(c+4505,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_21),8);
        vcdp->chgBus(c+4513,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_22),8);
        vcdp->chgBus(c+4521,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_23),8);
        vcdp->chgBus(c+4529,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_24),8);
        vcdp->chgBus(c+4537,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_25),8);
        vcdp->chgBus(c+4545,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_26),8);
        vcdp->chgBus(c+4553,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_27),8);
        vcdp->chgBus(c+4561,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_28),8);
        vcdp->chgBus(c+4569,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_29),8);
        vcdp->chgBus(c+4577,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_30),8);
        vcdp->chgBus(c+4585,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_31),8);
        vcdp->chgBus(c+4593,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_32),8);
        vcdp->chgBus(c+4601,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_33),8);
        vcdp->chgBus(c+4609,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_34),8);
        vcdp->chgBus(c+4617,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_35),8);
        vcdp->chgBus(c+4625,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_36),8);
        vcdp->chgBus(c+4633,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_37),8);
        vcdp->chgBus(c+4641,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_38),8);
        vcdp->chgBus(c+4649,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_39),8);
        vcdp->chgBus(c+4657,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_40),8);
        vcdp->chgBus(c+4665,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_41),8);
        vcdp->chgBus(c+4673,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_42),8);
        vcdp->chgBus(c+4681,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_43),8);
        vcdp->chgBus(c+4689,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_44),8);
        vcdp->chgBus(c+4697,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_45),8);
        vcdp->chgBus(c+4705,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_46),8);
    }
}

void VConvCombTest::traceChgThis__13(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+4713,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_47),8);
        vcdp->chgBus(c+4721,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_48),8);
        vcdp->chgBus(c+4729,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_49),8);
        vcdp->chgBus(c+4737,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_50),8);
        vcdp->chgBus(c+4745,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_51),8);
        vcdp->chgBus(c+4753,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_52),8);
        vcdp->chgBus(c+4761,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_53),8);
        vcdp->chgBus(c+4769,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_54),8);
        vcdp->chgBus(c+4777,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_55),8);
        vcdp->chgBus(c+4785,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_56),8);
        vcdp->chgBus(c+4793,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_57),8);
        vcdp->chgBus(c+4801,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_58),8);
        vcdp->chgBus(c+4809,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_59),8);
        vcdp->chgBus(c+4817,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_60),8);
        vcdp->chgBus(c+4825,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_61),8);
        vcdp->chgBus(c+4833,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_62),8);
        vcdp->chgBus(c+4841,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_63),8);
        vcdp->chgBus(c+4849,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_0),2);
        vcdp->chgBus(c+4857,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_1),2);
        vcdp->chgBus(c+4865,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_2),2);
        vcdp->chgBus(c+4873,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_3),2);
        vcdp->chgBus(c+4881,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_4),2);
        vcdp->chgBus(c+4889,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_5),2);
        vcdp->chgBus(c+4897,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_6),2);
        vcdp->chgBus(c+4905,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_7),2);
        vcdp->chgBus(c+4913,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_8),2);
        vcdp->chgBus(c+4921,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_9),2);
        vcdp->chgBus(c+4929,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_10),2);
        vcdp->chgBus(c+4937,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_11),2);
        vcdp->chgBus(c+4945,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_12),2);
        vcdp->chgBus(c+4953,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_13),2);
        vcdp->chgBus(c+4961,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_14),2);
        vcdp->chgBus(c+4969,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_15),2);
        vcdp->chgBus(c+4977,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_16),2);
        vcdp->chgBus(c+4985,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_17),2);
        vcdp->chgBus(c+4993,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_18),2);
        vcdp->chgBus(c+5001,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_19),2);
        vcdp->chgBus(c+5009,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_20),2);
        vcdp->chgBus(c+5017,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_21),2);
        vcdp->chgBus(c+5025,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_22),2);
        vcdp->chgBus(c+5033,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_23),2);
        vcdp->chgBus(c+5041,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_24),2);
        vcdp->chgBus(c+5049,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_25),2);
        vcdp->chgBus(c+5057,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_26),2);
        vcdp->chgBus(c+5065,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_27),2);
        vcdp->chgBus(c+5073,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_28),2);
        vcdp->chgBus(c+5081,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_29),2);
        vcdp->chgBus(c+5089,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_30),2);
        vcdp->chgBus(c+5097,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_31),2);
        vcdp->chgBus(c+5105,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_32),2);
        vcdp->chgBus(c+5113,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_33),2);
        vcdp->chgBus(c+5121,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_34),2);
        vcdp->chgBus(c+5129,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_35),2);
        vcdp->chgBus(c+5137,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_36),2);
        vcdp->chgBus(c+5145,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_37),2);
        vcdp->chgBus(c+5153,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_38),2);
        vcdp->chgBus(c+5161,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_39),2);
        vcdp->chgBus(c+5169,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_40),2);
        vcdp->chgBus(c+5177,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_41),2);
        vcdp->chgBus(c+5185,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_42),2);
        vcdp->chgBus(c+5193,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_43),2);
        vcdp->chgBus(c+5201,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_44),2);
        vcdp->chgBus(c+5209,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_45),2);
        vcdp->chgBus(c+5217,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_46),2);
        vcdp->chgBus(c+5225,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_47),2);
        vcdp->chgBus(c+5233,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_48),2);
        vcdp->chgBus(c+5241,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_49),2);
        vcdp->chgBus(c+5249,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_50),2);
        vcdp->chgBus(c+5257,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_51),2);
        vcdp->chgBus(c+5265,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_52),2);
        vcdp->chgBus(c+5273,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_53),2);
        vcdp->chgBus(c+5281,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_54),2);
        vcdp->chgBus(c+5289,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_55),2);
        vcdp->chgBus(c+5297,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_56),2);
        vcdp->chgBus(c+5305,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_57),2);
        vcdp->chgBus(c+5313,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_58),2);
        vcdp->chgBus(c+5321,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_59),2);
        vcdp->chgBus(c+5329,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_60),2);
        vcdp->chgBus(c+5337,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_61),2);
        vcdp->chgBus(c+5345,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_62),2);
        vcdp->chgBus(c+5353,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_63),2);
        vcdp->chgBus(c+5361,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_64),2);
        vcdp->chgBus(c+5369,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_65),2);
        vcdp->chgBus(c+5377,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_66),2);
        vcdp->chgBus(c+5385,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_67),2);
        vcdp->chgBus(c+5393,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_68),2);
        vcdp->chgBus(c+5401,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_69),2);
        vcdp->chgBus(c+5409,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_70),2);
        vcdp->chgBus(c+5417,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_71),2);
        vcdp->chgBus(c+5425,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_72),2);
        vcdp->chgBus(c+5433,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_73),2);
        vcdp->chgBus(c+5441,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_74),2);
        vcdp->chgBus(c+5449,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_75),2);
        vcdp->chgBus(c+5457,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_76),2);
        vcdp->chgBus(c+5465,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_77),2);
        vcdp->chgBus(c+5473,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_78),2);
        vcdp->chgBus(c+5481,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_79),2);
        vcdp->chgBus(c+5489,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_80),2);
        vcdp->chgBus(c+5497,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_81),2);
        vcdp->chgBus(c+5505,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_82),2);
        vcdp->chgBus(c+5513,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_83),2);
        vcdp->chgBus(c+5521,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_84),2);
        vcdp->chgBus(c+5529,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_85),2);
        vcdp->chgBus(c+5537,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_86),2);
        vcdp->chgBus(c+5545,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_87),2);
        vcdp->chgBus(c+5553,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_88),2);
        vcdp->chgBus(c+5561,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_89),2);
        vcdp->chgBus(c+5569,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_90),2);
        vcdp->chgBus(c+5577,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_91),2);
        vcdp->chgBus(c+5585,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_92),2);
        vcdp->chgBus(c+5593,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_93),2);
        vcdp->chgBus(c+5601,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_94),2);
        vcdp->chgBus(c+5609,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_95),2);
        vcdp->chgBus(c+5617,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_96),2);
        vcdp->chgBus(c+5625,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_97),2);
        vcdp->chgBus(c+5633,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_98),2);
        vcdp->chgBus(c+5641,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_99),2);
        vcdp->chgBus(c+5649,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_100),2);
        vcdp->chgBus(c+5657,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_101),2);
        vcdp->chgBus(c+5665,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_102),2);
        vcdp->chgBus(c+5673,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_103),2);
        vcdp->chgBus(c+5681,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_104),2);
        vcdp->chgBus(c+5689,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_105),2);
        vcdp->chgBus(c+5697,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_106),2);
        vcdp->chgBus(c+5705,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_107),2);
        vcdp->chgBus(c+5713,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_108),2);
        vcdp->chgBus(c+5721,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_109),2);
        vcdp->chgBus(c+5729,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_110),2);
        vcdp->chgBus(c+5737,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_111),2);
        vcdp->chgBus(c+5745,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_112),2);
        vcdp->chgBus(c+5753,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_113),2);
        vcdp->chgBus(c+5761,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_114),2);
        vcdp->chgBus(c+5769,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_115),2);
        vcdp->chgBus(c+5777,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_116),2);
        vcdp->chgBus(c+5785,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_117),2);
        vcdp->chgBus(c+5793,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_118),2);
        vcdp->chgBus(c+5801,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_119),2);
        vcdp->chgBus(c+5809,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_120),2);
        vcdp->chgBus(c+5817,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_121),2);
        vcdp->chgBus(c+5825,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_122),2);
        vcdp->chgBus(c+5833,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_123),2);
        vcdp->chgBus(c+5841,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_124),2);
        vcdp->chgBus(c+5849,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_125),2);
        vcdp->chgBus(c+5857,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_126),2);
        vcdp->chgBus(c+5865,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_127),2);
        vcdp->chgQuad(c+5873,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_0_port1),64);
        vcdp->chgQuad(c+5889,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port1),64);
        vcdp->chgQuad(c+5905,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port2),64);
        vcdp->chgBus(c+5921,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor),6);
        vcdp->chgBit(c+5929,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_data));
        vcdp->chgBit(c+5937,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_0));
        vcdp->chgBit(c+5945,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_1));
        vcdp->chgBit(c+5953,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_2));
        vcdp->chgBit(c+5961,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_3));
        vcdp->chgBit(c+5969,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_4));
        vcdp->chgBit(c+5977,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_5));
        vcdp->chgBit(c+5985,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_6));
        vcdp->chgBit(c+5993,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_7));
        vcdp->chgBit(c+6001,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_8));
        vcdp->chgBit(c+6009,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_9));
        vcdp->chgBit(c+6017,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_10));
        vcdp->chgBit(c+6025,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_11));
        vcdp->chgBit(c+6033,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_12));
        vcdp->chgBit(c+6041,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_13));
        vcdp->chgBit(c+6049,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_14));
        vcdp->chgBit(c+6057,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_15));
        vcdp->chgBit(c+6065,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_16));
        vcdp->chgBit(c+6073,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_17));
        vcdp->chgBit(c+6081,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_18));
        vcdp->chgBit(c+6089,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_19));
        vcdp->chgBit(c+6097,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_20));
        vcdp->chgBit(c+6105,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_21));
        vcdp->chgBit(c+6113,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_22));
        vcdp->chgBit(c+6121,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_23));
        vcdp->chgBit(c+6129,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_24));
        vcdp->chgBit(c+6137,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_25));
        vcdp->chgBit(c+6145,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_26));
        vcdp->chgBit(c+6153,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_27));
        vcdp->chgBit(c+6161,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_28));
        vcdp->chgBit(c+6169,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_29));
        vcdp->chgBit(c+6177,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_30));
        vcdp->chgBit(c+6185,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_31));
        vcdp->chgBit(c+6193,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_32));
        vcdp->chgBit(c+6201,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_33));
        vcdp->chgBit(c+6209,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_34));
        vcdp->chgBit(c+6217,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_35));
        vcdp->chgBit(c+6225,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_36));
        vcdp->chgBit(c+6233,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_37));
        vcdp->chgBit(c+6241,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_38));
        vcdp->chgBit(c+6249,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_39));
        vcdp->chgBit(c+6257,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_40));
        vcdp->chgBit(c+6265,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_41));
        vcdp->chgBit(c+6273,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_42));
        vcdp->chgBit(c+6281,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_43));
        vcdp->chgBit(c+6289,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_44));
        vcdp->chgBit(c+6297,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_45));
        vcdp->chgBit(c+6305,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_46));
        vcdp->chgBit(c+6313,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_47));
        vcdp->chgBit(c+6321,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_48));
        vcdp->chgBit(c+6329,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_49));
        vcdp->chgBit(c+6337,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_50));
        vcdp->chgBit(c+6345,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_51));
        vcdp->chgBit(c+6353,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_52));
        vcdp->chgBit(c+6361,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_53));
        vcdp->chgBit(c+6369,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_54));
        vcdp->chgBit(c+6377,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_55));
        vcdp->chgBit(c+6385,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_56));
        vcdp->chgBit(c+6393,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_57));
        vcdp->chgBit(c+6401,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_58));
        vcdp->chgBit(c+6409,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_59));
        vcdp->chgBit(c+6417,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_60));
        vcdp->chgBit(c+6425,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_61));
        vcdp->chgBit(c+6433,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_62));
        vcdp->chgBit(c+6441,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_63));
        vcdp->chgBit(c+6449,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_64));
        vcdp->chgBit(c+6457,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_65));
        vcdp->chgBit(c+6465,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_66));
        vcdp->chgBit(c+6473,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_67));
        vcdp->chgBit(c+6481,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_68));
        vcdp->chgBit(c+6489,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_69));
        vcdp->chgBit(c+6497,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_70));
        vcdp->chgBit(c+6505,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_71));
        vcdp->chgBit(c+6513,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_72));
        vcdp->chgBit(c+6521,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_73));
        vcdp->chgBit(c+6529,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_74));
        vcdp->chgBit(c+6537,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_75));
        vcdp->chgBit(c+6545,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_76));
        vcdp->chgBit(c+6553,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_77));
        vcdp->chgBit(c+6561,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_78));
        vcdp->chgBit(c+6569,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_79));
        vcdp->chgBit(c+6577,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_80));
        vcdp->chgBit(c+6585,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_81));
        vcdp->chgBit(c+6593,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_82));
        vcdp->chgBit(c+6601,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_83));
        vcdp->chgBit(c+6609,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_84));
        vcdp->chgBit(c+6617,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_85));
        vcdp->chgBit(c+6625,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_86));
        vcdp->chgBit(c+6633,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_87));
        vcdp->chgBit(c+6641,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_88));
        vcdp->chgBit(c+6649,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_89));
        vcdp->chgBit(c+6657,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_90));
        vcdp->chgBit(c+6665,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_91));
        vcdp->chgBit(c+6673,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_92));
        vcdp->chgBit(c+6681,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_93));
        vcdp->chgBit(c+6689,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_94));
        vcdp->chgBit(c+6697,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_95));
        vcdp->chgBit(c+6705,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_96));
        vcdp->chgBit(c+6713,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_97));
        vcdp->chgBit(c+6721,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_98));
        vcdp->chgBit(c+6729,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_99));
        vcdp->chgBit(c+6737,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_100));
    }
}

void VConvCombTest::traceChgThis__15(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+6745,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_101));
        vcdp->chgBit(c+6753,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_102));
        vcdp->chgBit(c+6761,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_103));
        vcdp->chgBit(c+6769,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_104));
        vcdp->chgBit(c+6777,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_105));
        vcdp->chgBit(c+6785,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_106));
        vcdp->chgBit(c+6793,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_107));
        vcdp->chgBit(c+6801,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_108));
        vcdp->chgBit(c+6809,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_109));
        vcdp->chgBit(c+6817,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_110));
        vcdp->chgBit(c+6825,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_111));
        vcdp->chgBit(c+6833,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_112));
        vcdp->chgBit(c+6841,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_113));
        vcdp->chgBit(c+6849,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_114));
        vcdp->chgBit(c+6857,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_115));
        vcdp->chgBit(c+6865,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_116));
        vcdp->chgBit(c+6873,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_117));
        vcdp->chgBit(c+6881,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_118));
        vcdp->chgBit(c+6889,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_119));
        vcdp->chgBit(c+6897,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_120));
        vcdp->chgBit(c+6905,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_121));
        vcdp->chgBit(c+6913,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_122));
        vcdp->chgBit(c+6921,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_123));
        vcdp->chgBit(c+6929,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_124));
        vcdp->chgBit(c+6937,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_125));
        vcdp->chgBit(c+6945,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_126));
        vcdp->chgBit(c+6953,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_127));
        vcdp->chgBit(c+6961,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_128));
        vcdp->chgBit(c+6969,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_129));
        vcdp->chgBit(c+6977,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_130));
        vcdp->chgBit(c+6985,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_131));
        vcdp->chgBit(c+6993,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_132));
        vcdp->chgBit(c+7001,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_133));
        vcdp->chgBit(c+7009,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_134));
        vcdp->chgBit(c+7017,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_135));
        vcdp->chgBit(c+7025,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_136));
        vcdp->chgBit(c+7033,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_137));
        vcdp->chgBit(c+7041,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_138));
        vcdp->chgBit(c+7049,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_139));
        vcdp->chgBit(c+7057,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_140));
        vcdp->chgBit(c+7065,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_141));
        vcdp->chgBit(c+7073,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_142));
        vcdp->chgBit(c+7081,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_143));
        vcdp->chgBit(c+7089,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_144));
        vcdp->chgBit(c+7097,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_145));
        vcdp->chgBit(c+7105,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_146));
        vcdp->chgBit(c+7113,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_147));
        vcdp->chgBit(c+7121,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_148));
        vcdp->chgBit(c+7129,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_149));
        vcdp->chgBit(c+7137,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_150));
        vcdp->chgBit(c+7145,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_151));
        vcdp->chgBit(c+7153,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_152));
        vcdp->chgBit(c+7161,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_153));
        vcdp->chgBit(c+7169,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_154));
        vcdp->chgBit(c+7177,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_155));
        vcdp->chgBit(c+7185,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_156));
        vcdp->chgBit(c+7193,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_157));
        vcdp->chgBit(c+7201,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_158));
        vcdp->chgBit(c+7209,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_159));
        vcdp->chgBit(c+7217,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_160));
        vcdp->chgBit(c+7225,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_161));
        vcdp->chgBit(c+7233,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_162));
        vcdp->chgBit(c+7241,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_163));
        vcdp->chgBit(c+7249,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_164));
        vcdp->chgBit(c+7257,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_165));
        vcdp->chgBit(c+7265,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_166));
        vcdp->chgBit(c+7273,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_167));
        vcdp->chgBit(c+7281,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_168));
        vcdp->chgBit(c+7289,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_169));
        vcdp->chgBit(c+7297,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_170));
        vcdp->chgBit(c+7305,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_171));
        vcdp->chgBit(c+7313,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_172));
        vcdp->chgBit(c+7321,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_173));
        vcdp->chgBit(c+7329,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_174));
        vcdp->chgBit(c+7337,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_175));
        vcdp->chgBit(c+7345,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_176));
        vcdp->chgBit(c+7353,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_177));
        vcdp->chgBit(c+7361,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_178));
        vcdp->chgBit(c+7369,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_179));
        vcdp->chgBit(c+7377,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_180));
        vcdp->chgBit(c+7385,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_181));
        vcdp->chgBit(c+7393,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_182));
        vcdp->chgBit(c+7401,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_183));
        vcdp->chgBit(c+7409,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_184));
        vcdp->chgBit(c+7417,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_185));
        vcdp->chgBit(c+7425,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_186));
        vcdp->chgBit(c+7433,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_187));
        vcdp->chgBit(c+7441,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_188));
        vcdp->chgBit(c+7449,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_189));
        vcdp->chgBit(c+7457,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_190));
        vcdp->chgBit(c+7465,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_191));
        vcdp->chgBit(c+7473,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_192));
        vcdp->chgBit(c+7481,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_193));
        vcdp->chgBit(c+7489,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_194));
        vcdp->chgBit(c+7497,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_195));
        vcdp->chgBit(c+7505,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_196));
        vcdp->chgBit(c+7513,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_197));
        vcdp->chgBit(c+7521,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_198));
        vcdp->chgBit(c+7529,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_199));
        vcdp->chgBit(c+7537,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_200));
        vcdp->chgBit(c+7545,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_201));
        vcdp->chgBit(c+7553,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_202));
        vcdp->chgBit(c+7561,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_203));
        vcdp->chgBit(c+7569,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_204));
        vcdp->chgBit(c+7577,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_205));
        vcdp->chgBit(c+7585,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_206));
        vcdp->chgBit(c+7593,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_207));
        vcdp->chgBit(c+7601,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_208));
        vcdp->chgBit(c+7609,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_209));
        vcdp->chgBit(c+7617,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_210));
        vcdp->chgBit(c+7625,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_211));
        vcdp->chgBit(c+7633,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_212));
        vcdp->chgBit(c+7641,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_213));
        vcdp->chgBit(c+7649,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_214));
        vcdp->chgBit(c+7657,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_215));
        vcdp->chgBit(c+7665,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_216));
        vcdp->chgBit(c+7673,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_217));
        vcdp->chgBit(c+7681,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_218));
        vcdp->chgBit(c+7689,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_219));
        vcdp->chgBit(c+7697,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_220));
        vcdp->chgBit(c+7705,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_221));
        vcdp->chgBit(c+7713,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_222));
        vcdp->chgBit(c+7721,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_223));
        vcdp->chgBit(c+7729,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_224));
        vcdp->chgBit(c+7737,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_225));
        vcdp->chgBit(c+7745,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_226));
        vcdp->chgBit(c+7753,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_227));
        vcdp->chgBit(c+7761,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_228));
        vcdp->chgBit(c+7769,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_229));
        vcdp->chgBit(c+7777,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_230));
        vcdp->chgBit(c+7785,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_231));
        vcdp->chgBit(c+7793,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_232));
        vcdp->chgBit(c+7801,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_233));
        vcdp->chgBit(c+7809,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_234));
        vcdp->chgBit(c+7817,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_235));
        vcdp->chgBit(c+7825,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_236));
        vcdp->chgBit(c+7833,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_237));
        vcdp->chgBit(c+7841,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_238));
        vcdp->chgBit(c+7849,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_239));
        vcdp->chgBit(c+7857,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_240));
        vcdp->chgBit(c+7865,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_241));
        vcdp->chgBit(c+7873,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_242));
        vcdp->chgBit(c+7881,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_243));
        vcdp->chgBit(c+7889,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_244));
        vcdp->chgBit(c+7897,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_245));
        vcdp->chgBit(c+7905,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_246));
        vcdp->chgBit(c+7913,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_247));
        vcdp->chgBit(c+7921,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_248));
        vcdp->chgBit(c+7929,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_249));
        vcdp->chgBit(c+7937,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_250));
        vcdp->chgBit(c+7945,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_251));
        vcdp->chgBit(c+7953,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_252));
        vcdp->chgBit(c+7961,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_253));
        vcdp->chgBit(c+7969,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_254));
        vcdp->chgBit(c+7977,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_255));
        vcdp->chgBit(c+7985,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_256));
        vcdp->chgBit(c+7993,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_257));
        vcdp->chgBit(c+8001,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_258));
        vcdp->chgBit(c+8009,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_259));
        vcdp->chgBit(c+8017,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_260));
        vcdp->chgBit(c+8025,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_261));
        vcdp->chgBit(c+8033,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_262));
        vcdp->chgBit(c+8041,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_263));
        vcdp->chgBit(c+8049,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_264));
        vcdp->chgBit(c+8057,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_265));
        vcdp->chgBit(c+8065,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_266));
        vcdp->chgBit(c+8073,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_267));
        vcdp->chgBit(c+8081,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_0));
        vcdp->chgBit(c+8089,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_1));
        vcdp->chgBit(c+8097,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_2));
        vcdp->chgBit(c+8105,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_3));
        vcdp->chgBit(c+8113,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_4));
        vcdp->chgBit(c+8121,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_5));
        vcdp->chgBit(c+8129,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_6));
        vcdp->chgBit(c+8137,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_7));
        vcdp->chgBit(c+8145,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_8));
        vcdp->chgBit(c+8153,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_9));
        vcdp->chgBit(c+8161,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_10));
        vcdp->chgBit(c+8169,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_11));
        vcdp->chgBit(c+8177,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_12));
        vcdp->chgBit(c+8185,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_13));
        vcdp->chgBit(c+8193,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_14));
        vcdp->chgBit(c+8201,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_15));
        vcdp->chgBit(c+8209,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_16));
        vcdp->chgBit(c+8217,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_17));
        vcdp->chgBit(c+8225,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_18));
        vcdp->chgBit(c+8233,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_19));
        vcdp->chgBit(c+8241,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_20));
        vcdp->chgBit(c+8249,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_21));
        vcdp->chgBit(c+8257,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_22));
        vcdp->chgBit(c+8265,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_23));
        vcdp->chgBit(c+8273,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_24));
        vcdp->chgBit(c+8281,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_25));
        vcdp->chgBit(c+8289,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_26));
        vcdp->chgBit(c+8297,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_27));
        vcdp->chgBit(c+8305,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_28));
        vcdp->chgBit(c+8313,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_29));
        vcdp->chgBit(c+8321,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_30));
        vcdp->chgBit(c+8329,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_31));
        vcdp->chgBit(c+8337,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_32));
        vcdp->chgBit(c+8345,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_33));
        vcdp->chgBit(c+8353,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_34));
        vcdp->chgBit(c+8361,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_35));
        vcdp->chgBit(c+8369,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_36));
        vcdp->chgBit(c+8377,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_37));
        vcdp->chgBit(c+8385,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_38));
        vcdp->chgBit(c+8393,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_39));
        vcdp->chgBit(c+8401,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_40));
        vcdp->chgBit(c+8409,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_41));
        vcdp->chgBit(c+8417,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_42));
        vcdp->chgBit(c+8425,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_43));
        vcdp->chgBit(c+8433,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_44));
        vcdp->chgBit(c+8441,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_45));
        vcdp->chgBit(c+8449,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_46));
        vcdp->chgBit(c+8457,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_47));
        vcdp->chgBit(c+8465,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_48));
        vcdp->chgBit(c+8473,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_49));
        vcdp->chgBit(c+8481,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_50));
        vcdp->chgBit(c+8489,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_51));
        vcdp->chgBit(c+8497,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_52));
        vcdp->chgBit(c+8505,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_53));
        vcdp->chgBit(c+8513,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_54));
        vcdp->chgBit(c+8521,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_55));
        vcdp->chgBit(c+8529,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_56));
        vcdp->chgBit(c+8537,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_57));
        vcdp->chgBit(c+8545,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_58));
        vcdp->chgBit(c+8553,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_59));
        vcdp->chgBit(c+8561,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_60));
        vcdp->chgBit(c+8569,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_61));
        vcdp->chgBit(c+8577,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_62));
        vcdp->chgBit(c+8585,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_63));
        vcdp->chgBit(c+8593,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_64));
        vcdp->chgBit(c+8601,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_65));
        vcdp->chgBit(c+8609,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_66));
        vcdp->chgBit(c+8617,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_67));
        vcdp->chgBit(c+8625,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_68));
        vcdp->chgBit(c+8633,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_69));
        vcdp->chgBit(c+8641,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_70));
        vcdp->chgBit(c+8649,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_71));
        vcdp->chgBit(c+8657,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_72));
        vcdp->chgBit(c+8665,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_73));
        vcdp->chgBit(c+8673,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_74));
        vcdp->chgBit(c+8681,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_75));
        vcdp->chgBit(c+8689,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_76));
        vcdp->chgBit(c+8697,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_77));
        vcdp->chgBit(c+8705,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_78));
        vcdp->chgBit(c+8713,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_79));
        vcdp->chgBit(c+8721,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_80));
        vcdp->chgBit(c+8729,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_81));
        vcdp->chgBit(c+8737,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_82));
        vcdp->chgBit(c+8745,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_83));
    }
}

void VConvCombTest::traceChgThis__17(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+8753,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_84));
        vcdp->chgBit(c+8761,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_85));
        vcdp->chgBit(c+8769,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_86));
        vcdp->chgBit(c+8777,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_87));
        vcdp->chgBit(c+8785,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_88));
        vcdp->chgBit(c+8793,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_89));
        vcdp->chgBit(c+8801,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_90));
        vcdp->chgBit(c+8809,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_91));
        vcdp->chgBit(c+8817,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_92));
        vcdp->chgBit(c+8825,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_93));
        vcdp->chgBit(c+8833,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_94));
        vcdp->chgBit(c+8841,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_95));
        vcdp->chgBit(c+8849,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_96));
        vcdp->chgBit(c+8857,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_97));
        vcdp->chgBit(c+8865,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_98));
        vcdp->chgBit(c+8873,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_99));
        vcdp->chgBit(c+8881,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_100));
        vcdp->chgBit(c+8889,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_101));
        vcdp->chgBit(c+8897,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_102));
        vcdp->chgBit(c+8905,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_103));
        vcdp->chgBit(c+8913,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_104));
        vcdp->chgBit(c+8921,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_105));
        vcdp->chgBit(c+8929,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_106));
        vcdp->chgBit(c+8937,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_107));
        vcdp->chgBit(c+8945,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_108));
        vcdp->chgBit(c+8953,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_109));
        vcdp->chgBit(c+8961,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_110));
        vcdp->chgBit(c+8969,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_111));
        vcdp->chgBit(c+8977,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_112));
        vcdp->chgBit(c+8985,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_113));
        vcdp->chgBit(c+8993,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_114));
        vcdp->chgBit(c+9001,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_115));
        vcdp->chgBit(c+9009,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_116));
        vcdp->chgBit(c+9017,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_117));
        vcdp->chgBit(c+9025,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_118));
        vcdp->chgBit(c+9033,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_119));
        vcdp->chgBit(c+9041,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_120));
        vcdp->chgBit(c+9049,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_121));
        vcdp->chgBit(c+9057,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_122));
        vcdp->chgBit(c+9065,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_123));
        vcdp->chgBit(c+9073,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_124));
        vcdp->chgBit(c+9081,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_125));
        vcdp->chgBit(c+9089,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_126));
        vcdp->chgBit(c+9097,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_127));
        vcdp->chgBit(c+9105,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_128));
        vcdp->chgBit(c+9113,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_129));
        vcdp->chgBit(c+9121,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_130));
        vcdp->chgBit(c+9129,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_131));
        vcdp->chgBit(c+9137,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_132));
        vcdp->chgBit(c+9145,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_133));
        vcdp->chgBit(c+9153,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_134));
        vcdp->chgBit(c+9161,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_135));
        vcdp->chgBit(c+9169,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_136));
        vcdp->chgBit(c+9177,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_137));
        vcdp->chgBit(c+9185,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_138));
        vcdp->chgBit(c+9193,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_139));
        vcdp->chgBit(c+9201,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_140));
        vcdp->chgBit(c+9209,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_141));
        vcdp->chgBit(c+9217,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_142));
        vcdp->chgBit(c+9225,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_143));
        vcdp->chgBit(c+9233,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_144));
        vcdp->chgBit(c+9241,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_145));
        vcdp->chgBit(c+9249,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_146));
        vcdp->chgBit(c+9257,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_147));
        vcdp->chgBit(c+9265,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_148));
        vcdp->chgBit(c+9273,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_149));
        vcdp->chgBit(c+9281,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_150));
        vcdp->chgBit(c+9289,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_151));
        vcdp->chgBit(c+9297,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_152));
        vcdp->chgBit(c+9305,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_153));
        vcdp->chgBit(c+9313,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_154));
        vcdp->chgBit(c+9321,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_155));
        vcdp->chgBit(c+9329,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_156));
        vcdp->chgBit(c+9337,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_157));
        vcdp->chgBit(c+9345,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_158));
        vcdp->chgBit(c+9353,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_159));
        vcdp->chgBit(c+9361,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_160));
        vcdp->chgBit(c+9369,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_161));
        vcdp->chgBit(c+9377,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_162));
        vcdp->chgBit(c+9385,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_163));
        vcdp->chgBit(c+9393,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_164));
        vcdp->chgBit(c+9401,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_165));
        vcdp->chgBit(c+9409,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_166));
        vcdp->chgBit(c+9417,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_167));
        vcdp->chgBit(c+9425,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_168));
        vcdp->chgBit(c+9433,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_169));
        vcdp->chgBit(c+9441,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_170));
        vcdp->chgBit(c+9449,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_171));
        vcdp->chgBit(c+9457,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_172));
        vcdp->chgBit(c+9465,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_173));
        vcdp->chgBit(c+9473,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_174));
        vcdp->chgBit(c+9481,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_175));
        vcdp->chgBit(c+9489,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_176));
        vcdp->chgBit(c+9497,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_177));
        vcdp->chgBit(c+9505,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_178));
        vcdp->chgBit(c+9513,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_179));
        vcdp->chgBit(c+9521,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_180));
        vcdp->chgBit(c+9529,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_181));
        vcdp->chgBit(c+9537,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_182));
        vcdp->chgBit(c+9545,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_183));
        vcdp->chgBit(c+9553,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_184));
        vcdp->chgBit(c+9561,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_185));
        vcdp->chgBit(c+9569,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_186));
        vcdp->chgBit(c+9577,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_187));
        vcdp->chgBit(c+9585,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_188));
        vcdp->chgBit(c+9593,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_189));
        vcdp->chgBit(c+9601,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_190));
        vcdp->chgBit(c+9609,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_191));
        vcdp->chgBit(c+9617,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_192));
        vcdp->chgBit(c+9625,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_193));
        vcdp->chgBit(c+9633,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_194));
        vcdp->chgBit(c+9641,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_195));
        vcdp->chgBit(c+9649,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_196));
        vcdp->chgBit(c+9657,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_197));
        vcdp->chgBit(c+9665,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_198));
        vcdp->chgBit(c+9673,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_199));
        vcdp->chgBit(c+9681,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_200));
        vcdp->chgBit(c+9689,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_201));
        vcdp->chgBit(c+9697,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_202));
        vcdp->chgBit(c+9705,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_203));
        vcdp->chgBit(c+9713,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_204));
        vcdp->chgBit(c+9721,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_205));
        vcdp->chgBit(c+9729,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_206));
        vcdp->chgBit(c+9737,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_207));
        vcdp->chgBit(c+9745,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_208));
        vcdp->chgBit(c+9753,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_209));
        vcdp->chgBit(c+9761,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_210));
        vcdp->chgBit(c+9769,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_211));
        vcdp->chgBit(c+9777,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_212));
        vcdp->chgBit(c+9785,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_213));
        vcdp->chgBit(c+9793,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_214));
        vcdp->chgBit(c+9801,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_215));
        vcdp->chgBit(c+9809,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_216));
        vcdp->chgBit(c+9817,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_217));
        vcdp->chgBit(c+9825,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_218));
        vcdp->chgBit(c+9833,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_219));
        vcdp->chgBit(c+9841,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_220));
        vcdp->chgBit(c+9849,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_221));
        vcdp->chgBit(c+9857,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_222));
        vcdp->chgBit(c+9865,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_223));
        vcdp->chgBit(c+9873,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_224));
        vcdp->chgBit(c+9881,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_225));
        vcdp->chgBit(c+9889,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_226));
        vcdp->chgBit(c+9897,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_227));
        vcdp->chgBit(c+9905,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_228));
        vcdp->chgBit(c+9913,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_229));
        vcdp->chgBit(c+9921,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_230));
        vcdp->chgBit(c+9929,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_231));
        vcdp->chgBit(c+9937,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_232));
        vcdp->chgBit(c+9945,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_233));
        vcdp->chgBit(c+9953,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_234));
        vcdp->chgBit(c+9961,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_235));
        vcdp->chgBit(c+9969,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_236));
        vcdp->chgBit(c+9977,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_237));
        vcdp->chgBit(c+9985,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_238));
        vcdp->chgBit(c+9993,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_239));
        vcdp->chgBit(c+10001,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_240));
        vcdp->chgBit(c+10009,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_241));
        vcdp->chgBit(c+10017,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_242));
        vcdp->chgBit(c+10025,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_243));
        vcdp->chgBit(c+10033,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_244));
        vcdp->chgBit(c+10041,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_245));
        vcdp->chgBit(c+10049,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_246));
        vcdp->chgBit(c+10057,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_247));
        vcdp->chgBit(c+10065,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_248));
        vcdp->chgBit(c+10073,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_249));
        vcdp->chgBit(c+10081,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_250));
        vcdp->chgBit(c+10089,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_251));
        vcdp->chgBit(c+10097,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_252));
        vcdp->chgBit(c+10105,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_253));
        vcdp->chgBit(c+10113,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_254));
        vcdp->chgBit(c+10121,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_255));
        vcdp->chgBit(c+10129,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_256));
        vcdp->chgBit(c+10137,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_257));
        vcdp->chgBit(c+10145,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_258));
        vcdp->chgBit(c+10153,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_259));
        vcdp->chgBit(c+10161,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_260));
        vcdp->chgBit(c+10169,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_261));
        vcdp->chgBit(c+10177,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_262));
        vcdp->chgBit(c+10185,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_263));
        vcdp->chgBit(c+10193,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_264));
        vcdp->chgBit(c+10201,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_265));
        vcdp->chgBit(c+10209,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_266));
        vcdp->chgBit(c+10217,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_267));
        vcdp->chgBit(c+10225,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_0));
        vcdp->chgBit(c+10233,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_1));
        vcdp->chgBit(c+10241,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_2));
        vcdp->chgBit(c+10249,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_3));
        vcdp->chgBit(c+10257,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_4));
        vcdp->chgBit(c+10265,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_5));
        vcdp->chgBit(c+10273,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_6));
        vcdp->chgBit(c+10281,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_7));
        vcdp->chgBit(c+10289,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_8));
        vcdp->chgBit(c+10297,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_9));
        vcdp->chgBit(c+10305,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_10));
        vcdp->chgBit(c+10313,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_11));
        vcdp->chgBit(c+10321,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_12));
        vcdp->chgBit(c+10329,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_13));
        vcdp->chgBit(c+10337,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_14));
        vcdp->chgBit(c+10345,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_15));
        vcdp->chgBit(c+10353,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_16));
        vcdp->chgBit(c+10361,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_17));
        vcdp->chgBit(c+10369,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_18));
        vcdp->chgBit(c+10377,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_19));
        vcdp->chgBit(c+10385,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_20));
        vcdp->chgBit(c+10393,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_21));
        vcdp->chgBit(c+10401,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_22));
        vcdp->chgBit(c+10409,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_23));
        vcdp->chgBit(c+10417,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_24));
        vcdp->chgBit(c+10425,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_25));
        vcdp->chgBit(c+10433,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_26));
        vcdp->chgBit(c+10441,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_27));
        vcdp->chgBit(c+10449,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_28));
        vcdp->chgBit(c+10457,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_29));
        vcdp->chgBit(c+10465,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_30));
        vcdp->chgBit(c+10473,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_31));
        vcdp->chgBit(c+10481,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_32));
        vcdp->chgBit(c+10489,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_33));
        vcdp->chgBit(c+10497,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_34));
        vcdp->chgBit(c+10505,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_35));
        vcdp->chgBit(c+10513,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_36));
        vcdp->chgBit(c+10521,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_37));
        vcdp->chgBit(c+10529,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_38));
        vcdp->chgBit(c+10537,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_39));
        vcdp->chgBit(c+10545,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_40));
        vcdp->chgBit(c+10553,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_41));
        vcdp->chgBit(c+10561,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_42));
        vcdp->chgBit(c+10569,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_43));
        vcdp->chgBit(c+10577,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_44));
        vcdp->chgBit(c+10585,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_45));
        vcdp->chgBit(c+10593,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_46));
        vcdp->chgBit(c+10601,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_47));
        vcdp->chgBit(c+10609,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_48));
        vcdp->chgBit(c+10617,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_49));
        vcdp->chgBit(c+10625,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_50));
        vcdp->chgBit(c+10633,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_51));
        vcdp->chgBit(c+10641,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_52));
        vcdp->chgBit(c+10649,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_53));
        vcdp->chgBit(c+10657,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_54));
        vcdp->chgBit(c+10665,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_55));
        vcdp->chgBit(c+10673,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_56));
        vcdp->chgBit(c+10681,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_57));
        vcdp->chgBit(c+10689,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_58));
        vcdp->chgBit(c+10697,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_59));
        vcdp->chgBit(c+10705,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_60));
        vcdp->chgBit(c+10713,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_61));
        vcdp->chgBit(c+10721,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_62));
        vcdp->chgBit(c+10729,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_63));
        vcdp->chgBit(c+10737,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_64));
        vcdp->chgBit(c+10745,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_65));
        vcdp->chgBit(c+10753,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_66));
    }
}

void VConvCombTest::traceChgThis__19(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+10761,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_67));
        vcdp->chgBit(c+10769,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_68));
        vcdp->chgBit(c+10777,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_69));
        vcdp->chgBit(c+10785,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_70));
        vcdp->chgBit(c+10793,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_71));
        vcdp->chgBit(c+10801,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_72));
        vcdp->chgBit(c+10809,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_73));
        vcdp->chgBit(c+10817,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_74));
        vcdp->chgBit(c+10825,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_75));
        vcdp->chgBit(c+10833,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_76));
        vcdp->chgBit(c+10841,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_77));
        vcdp->chgBit(c+10849,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_78));
        vcdp->chgBit(c+10857,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_79));
        vcdp->chgBit(c+10865,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_80));
        vcdp->chgBit(c+10873,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_81));
        vcdp->chgBit(c+10881,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_82));
        vcdp->chgBit(c+10889,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_83));
        vcdp->chgBit(c+10897,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_84));
        vcdp->chgBit(c+10905,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_85));
        vcdp->chgBit(c+10913,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_86));
        vcdp->chgBit(c+10921,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_87));
        vcdp->chgBit(c+10929,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_88));
        vcdp->chgBit(c+10937,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_89));
        vcdp->chgBit(c+10945,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_90));
        vcdp->chgBit(c+10953,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_91));
        vcdp->chgBit(c+10961,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_92));
        vcdp->chgBit(c+10969,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_93));
        vcdp->chgBit(c+10977,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_94));
        vcdp->chgBit(c+10985,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_95));
        vcdp->chgBit(c+10993,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_96));
        vcdp->chgBit(c+11001,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_97));
        vcdp->chgBit(c+11009,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_98));
        vcdp->chgBit(c+11017,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_99));
        vcdp->chgBit(c+11025,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_100));
        vcdp->chgBit(c+11033,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_101));
        vcdp->chgBit(c+11041,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_102));
        vcdp->chgBit(c+11049,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_103));
        vcdp->chgBit(c+11057,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_104));
        vcdp->chgBit(c+11065,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_105));
        vcdp->chgBit(c+11073,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_106));
        vcdp->chgBit(c+11081,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_107));
        vcdp->chgBit(c+11089,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_108));
        vcdp->chgBit(c+11097,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_109));
        vcdp->chgBit(c+11105,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_110));
        vcdp->chgBit(c+11113,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_111));
        vcdp->chgBit(c+11121,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_112));
        vcdp->chgBit(c+11129,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_113));
        vcdp->chgBit(c+11137,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_114));
        vcdp->chgBit(c+11145,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_115));
        vcdp->chgBit(c+11153,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_116));
        vcdp->chgBit(c+11161,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_117));
        vcdp->chgBit(c+11169,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_118));
        vcdp->chgBit(c+11177,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_119));
        vcdp->chgBit(c+11185,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_120));
        vcdp->chgBit(c+11193,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_121));
        vcdp->chgBit(c+11201,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_122));
        vcdp->chgBit(c+11209,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_123));
        vcdp->chgBit(c+11217,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_124));
        vcdp->chgBit(c+11225,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_125));
        vcdp->chgBit(c+11233,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_126));
        vcdp->chgBit(c+11241,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_127));
        vcdp->chgBit(c+11249,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_128));
        vcdp->chgBit(c+11257,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_129));
        vcdp->chgBit(c+11265,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_130));
        vcdp->chgBit(c+11273,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_131));
        vcdp->chgBit(c+11281,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_132));
        vcdp->chgBit(c+11289,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_133));
        vcdp->chgBit(c+11297,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_134));
        vcdp->chgBit(c+11305,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_135));
        vcdp->chgBit(c+11313,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_136));
        vcdp->chgBit(c+11321,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_137));
        vcdp->chgBit(c+11329,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_138));
        vcdp->chgBit(c+11337,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_139));
        vcdp->chgBit(c+11345,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_140));
        vcdp->chgBit(c+11353,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_141));
        vcdp->chgBit(c+11361,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_142));
        vcdp->chgBit(c+11369,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_143));
        vcdp->chgBit(c+11377,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_144));
        vcdp->chgBit(c+11385,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_145));
        vcdp->chgBit(c+11393,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_146));
        vcdp->chgBit(c+11401,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_147));
        vcdp->chgBit(c+11409,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_148));
        vcdp->chgBit(c+11417,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_149));
        vcdp->chgBit(c+11425,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_150));
        vcdp->chgBit(c+11433,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_151));
        vcdp->chgBit(c+11441,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_152));
        vcdp->chgBit(c+11449,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_153));
        vcdp->chgBit(c+11457,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_154));
        vcdp->chgBit(c+11465,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_155));
        vcdp->chgBit(c+11473,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_156));
        vcdp->chgBit(c+11481,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_157));
        vcdp->chgBit(c+11489,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_158));
        vcdp->chgBit(c+11497,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_159));
        vcdp->chgBit(c+11505,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_160));
        vcdp->chgBit(c+11513,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_161));
        vcdp->chgBit(c+11521,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_162));
        vcdp->chgBit(c+11529,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_163));
        vcdp->chgBit(c+11537,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_164));
        vcdp->chgBit(c+11545,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_165));
        vcdp->chgBit(c+11553,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_166));
        vcdp->chgBit(c+11561,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_167));
        vcdp->chgBit(c+11569,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_168));
        vcdp->chgBit(c+11577,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_169));
        vcdp->chgBit(c+11585,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_170));
        vcdp->chgBit(c+11593,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_171));
        vcdp->chgBit(c+11601,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_172));
        vcdp->chgBit(c+11609,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_173));
        vcdp->chgBit(c+11617,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_174));
        vcdp->chgBit(c+11625,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_175));
        vcdp->chgBit(c+11633,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_176));
        vcdp->chgBit(c+11641,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_177));
        vcdp->chgBit(c+11649,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_178));
        vcdp->chgBit(c+11657,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_179));
        vcdp->chgBit(c+11665,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_180));
        vcdp->chgBit(c+11673,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_181));
        vcdp->chgBit(c+11681,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_182));
        vcdp->chgBit(c+11689,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_183));
        vcdp->chgBit(c+11697,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_184));
        vcdp->chgBit(c+11705,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_185));
        vcdp->chgBit(c+11713,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_186));
        vcdp->chgBit(c+11721,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_187));
        vcdp->chgBit(c+11729,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_188));
        vcdp->chgBit(c+11737,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_189));
        vcdp->chgBit(c+11745,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_190));
        vcdp->chgBit(c+11753,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_191));
        vcdp->chgBit(c+11761,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_192));
        vcdp->chgBit(c+11769,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_193));
        vcdp->chgBit(c+11777,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_194));
        vcdp->chgBit(c+11785,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_195));
        vcdp->chgBit(c+11793,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_196));
        vcdp->chgBit(c+11801,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_197));
        vcdp->chgBit(c+11809,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_198));
        vcdp->chgBit(c+11817,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_199));
        vcdp->chgBit(c+11825,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_200));
        vcdp->chgBit(c+11833,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_201));
        vcdp->chgBit(c+11841,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_202));
        vcdp->chgBit(c+11849,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_203));
        vcdp->chgBit(c+11857,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_204));
        vcdp->chgBit(c+11865,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_205));
        vcdp->chgBit(c+11873,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_206));
        vcdp->chgBit(c+11881,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_207));
        vcdp->chgBit(c+11889,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_208));
        vcdp->chgBit(c+11897,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_209));
        vcdp->chgBit(c+11905,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_210));
        vcdp->chgBit(c+11913,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_211));
        vcdp->chgBit(c+11921,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_212));
        vcdp->chgBit(c+11929,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_213));
        vcdp->chgBit(c+11937,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_214));
        vcdp->chgBit(c+11945,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_215));
        vcdp->chgBit(c+11953,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_216));
        vcdp->chgBit(c+11961,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_217));
        vcdp->chgBit(c+11969,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_218));
        vcdp->chgBit(c+11977,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_219));
        vcdp->chgBit(c+11985,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_220));
        vcdp->chgBit(c+11993,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_221));
        vcdp->chgBit(c+12001,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_222));
        vcdp->chgBit(c+12009,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_223));
        vcdp->chgBit(c+12017,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_224));
        vcdp->chgBit(c+12025,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_225));
        vcdp->chgBit(c+12033,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_226));
        vcdp->chgBit(c+12041,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_227));
        vcdp->chgBit(c+12049,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_228));
        vcdp->chgBit(c+12057,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_229));
        vcdp->chgBit(c+12065,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_230));
        vcdp->chgBit(c+12073,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_231));
        vcdp->chgBit(c+12081,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_232));
        vcdp->chgBit(c+12089,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_233));
        vcdp->chgBit(c+12097,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_234));
        vcdp->chgBit(c+12105,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_235));
        vcdp->chgBit(c+12113,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_236));
        vcdp->chgBit(c+12121,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_237));
        vcdp->chgBit(c+12129,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_238));
        vcdp->chgBit(c+12137,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_239));
        vcdp->chgBit(c+12145,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_240));
        vcdp->chgBit(c+12153,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_241));
        vcdp->chgBit(c+12161,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_242));
        vcdp->chgBit(c+12169,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_243));
        vcdp->chgBit(c+12177,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_244));
        vcdp->chgBit(c+12185,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_245));
        vcdp->chgBit(c+12193,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_246));
        vcdp->chgBit(c+12201,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_247));
        vcdp->chgBit(c+12209,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_248));
        vcdp->chgBit(c+12217,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_249));
        vcdp->chgBit(c+12225,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_250));
        vcdp->chgBit(c+12233,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_251));
        vcdp->chgBit(c+12241,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_252));
        vcdp->chgBit(c+12249,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_253));
        vcdp->chgBit(c+12257,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_254));
        vcdp->chgBit(c+12265,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_255));
        vcdp->chgBit(c+12273,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_256));
        vcdp->chgBit(c+12281,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_257));
        vcdp->chgBit(c+12289,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_258));
        vcdp->chgBit(c+12297,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_259));
        vcdp->chgBit(c+12305,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_260));
        vcdp->chgBit(c+12313,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_261));
        vcdp->chgBit(c+12321,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_262));
        vcdp->chgBit(c+12329,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_263));
        vcdp->chgBit(c+12337,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_264));
        vcdp->chgBit(c+12345,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_265));
        vcdp->chgBit(c+12353,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_266));
        vcdp->chgBit(c+12361,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_267));
        vcdp->chgBit(c+12369,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_0));
        vcdp->chgBit(c+12377,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_1));
        vcdp->chgBit(c+12385,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_2));
        vcdp->chgBit(c+12393,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_3));
        vcdp->chgBit(c+12401,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_4));
        vcdp->chgBit(c+12409,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_5));
        vcdp->chgBit(c+12417,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_6));
        vcdp->chgBit(c+12425,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_7));
        vcdp->chgBit(c+12433,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_8));
        vcdp->chgBit(c+12441,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_9));
        vcdp->chgBit(c+12449,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_10));
        vcdp->chgBit(c+12457,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_11));
        vcdp->chgBit(c+12465,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_12));
        vcdp->chgBit(c+12473,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_13));
        vcdp->chgBit(c+12481,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_14));
        vcdp->chgBit(c+12489,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_15));
        vcdp->chgBit(c+12497,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_16));
        vcdp->chgBit(c+12505,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_17));
        vcdp->chgBit(c+12513,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_18));
        vcdp->chgBit(c+12521,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_19));
        vcdp->chgBit(c+12529,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_20));
        vcdp->chgBit(c+12537,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_21));
        vcdp->chgBit(c+12545,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_22));
        vcdp->chgBit(c+12553,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_23));
        vcdp->chgBit(c+12561,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_24));
        vcdp->chgBit(c+12569,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_25));
        vcdp->chgBit(c+12577,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_26));
        vcdp->chgBit(c+12585,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_27));
        vcdp->chgBit(c+12593,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_28));
        vcdp->chgBit(c+12601,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_29));
        vcdp->chgBit(c+12609,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_30));
        vcdp->chgBit(c+12617,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_31));
        vcdp->chgBit(c+12625,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_32));
        vcdp->chgBit(c+12633,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_33));
        vcdp->chgBit(c+12641,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_34));
        vcdp->chgBit(c+12649,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_35));
        vcdp->chgBit(c+12657,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_36));
        vcdp->chgBit(c+12665,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_37));
        vcdp->chgBit(c+12673,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_38));
        vcdp->chgBit(c+12681,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_39));
        vcdp->chgBit(c+12689,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_40));
        vcdp->chgBit(c+12697,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_41));
        vcdp->chgBit(c+12705,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_42));
        vcdp->chgBit(c+12713,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_43));
        vcdp->chgBit(c+12721,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_44));
        vcdp->chgBit(c+12729,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_45));
        vcdp->chgBit(c+12737,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_46));
        vcdp->chgBit(c+12745,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_47));
        vcdp->chgBit(c+12753,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_48));
        vcdp->chgBit(c+12761,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_49));
    }
}

void VConvCombTest::traceChgThis__21(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+12769,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_50));
        vcdp->chgBit(c+12777,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_51));
        vcdp->chgBit(c+12785,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_52));
        vcdp->chgBit(c+12793,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_53));
        vcdp->chgBit(c+12801,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_54));
        vcdp->chgBit(c+12809,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_55));
        vcdp->chgBit(c+12817,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_56));
        vcdp->chgBit(c+12825,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_57));
        vcdp->chgBit(c+12833,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_58));
        vcdp->chgBit(c+12841,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_59));
        vcdp->chgBit(c+12849,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_60));
        vcdp->chgBit(c+12857,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_61));
        vcdp->chgBit(c+12865,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_62));
        vcdp->chgBit(c+12873,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_63));
        vcdp->chgBit(c+12881,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_64));
        vcdp->chgBit(c+12889,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_65));
        vcdp->chgBit(c+12897,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_66));
        vcdp->chgBit(c+12905,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_67));
        vcdp->chgBit(c+12913,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_68));
        vcdp->chgBit(c+12921,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_69));
        vcdp->chgBit(c+12929,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_70));
        vcdp->chgBit(c+12937,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_71));
        vcdp->chgBit(c+12945,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_72));
        vcdp->chgBit(c+12953,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_73));
        vcdp->chgBit(c+12961,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_74));
        vcdp->chgBit(c+12969,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_75));
        vcdp->chgBit(c+12977,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_76));
        vcdp->chgBit(c+12985,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_77));
        vcdp->chgBit(c+12993,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_78));
        vcdp->chgBit(c+13001,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_79));
        vcdp->chgBit(c+13009,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_80));
        vcdp->chgBit(c+13017,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_81));
        vcdp->chgBit(c+13025,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_82));
        vcdp->chgBit(c+13033,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_83));
        vcdp->chgBit(c+13041,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_84));
        vcdp->chgBit(c+13049,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_85));
        vcdp->chgBit(c+13057,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_86));
        vcdp->chgBit(c+13065,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_87));
        vcdp->chgBit(c+13073,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_88));
        vcdp->chgBit(c+13081,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_89));
        vcdp->chgBit(c+13089,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_90));
        vcdp->chgBit(c+13097,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_91));
        vcdp->chgBit(c+13105,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_92));
        vcdp->chgBit(c+13113,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_93));
        vcdp->chgBit(c+13121,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_94));
        vcdp->chgBit(c+13129,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_95));
        vcdp->chgBit(c+13137,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_96));
        vcdp->chgBit(c+13145,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_97));
        vcdp->chgBit(c+13153,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_98));
        vcdp->chgBit(c+13161,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_99));
        vcdp->chgBit(c+13169,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_100));
        vcdp->chgBit(c+13177,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_101));
        vcdp->chgBit(c+13185,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_102));
        vcdp->chgBit(c+13193,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_103));
        vcdp->chgBit(c+13201,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_104));
        vcdp->chgBit(c+13209,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_105));
        vcdp->chgBit(c+13217,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_106));
        vcdp->chgBit(c+13225,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_107));
        vcdp->chgBit(c+13233,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_108));
        vcdp->chgBit(c+13241,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_109));
        vcdp->chgBit(c+13249,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_110));
        vcdp->chgBit(c+13257,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_111));
        vcdp->chgBit(c+13265,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_112));
        vcdp->chgBit(c+13273,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_113));
        vcdp->chgBit(c+13281,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_114));
        vcdp->chgBit(c+13289,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_115));
        vcdp->chgBit(c+13297,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_116));
        vcdp->chgBit(c+13305,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_117));
        vcdp->chgBit(c+13313,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_118));
        vcdp->chgBit(c+13321,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_119));
        vcdp->chgBit(c+13329,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_120));
        vcdp->chgBit(c+13337,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_121));
        vcdp->chgBit(c+13345,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_122));
        vcdp->chgBit(c+13353,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_123));
        vcdp->chgBit(c+13361,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_124));
        vcdp->chgBit(c+13369,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_125));
        vcdp->chgBit(c+13377,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_126));
        vcdp->chgBit(c+13385,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_127));
        vcdp->chgBit(c+13393,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_128));
        vcdp->chgBit(c+13401,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_129));
        vcdp->chgBit(c+13409,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_130));
        vcdp->chgBit(c+13417,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_131));
        vcdp->chgBit(c+13425,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_132));
        vcdp->chgBit(c+13433,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_133));
        vcdp->chgBit(c+13441,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_134));
        vcdp->chgBit(c+13449,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_135));
        vcdp->chgBit(c+13457,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_136));
        vcdp->chgBit(c+13465,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_137));
        vcdp->chgBit(c+13473,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_138));
        vcdp->chgBit(c+13481,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_139));
        vcdp->chgBit(c+13489,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_140));
        vcdp->chgBit(c+13497,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_141));
        vcdp->chgBit(c+13505,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_142));
        vcdp->chgBit(c+13513,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_143));
        vcdp->chgBit(c+13521,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_144));
        vcdp->chgBit(c+13529,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_145));
        vcdp->chgBit(c+13537,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_146));
        vcdp->chgBit(c+13545,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_147));
        vcdp->chgBit(c+13553,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_148));
        vcdp->chgBit(c+13561,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_149));
        vcdp->chgBit(c+13569,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_150));
        vcdp->chgBit(c+13577,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_151));
        vcdp->chgBit(c+13585,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_152));
        vcdp->chgBit(c+13593,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_153));
        vcdp->chgBit(c+13601,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_154));
        vcdp->chgBit(c+13609,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_155));
        vcdp->chgBit(c+13617,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_156));
        vcdp->chgBit(c+13625,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_157));
        vcdp->chgBit(c+13633,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_158));
        vcdp->chgBit(c+13641,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_159));
        vcdp->chgBit(c+13649,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_160));
        vcdp->chgBit(c+13657,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_161));
        vcdp->chgBit(c+13665,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_162));
        vcdp->chgBit(c+13673,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_163));
        vcdp->chgBit(c+13681,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_164));
        vcdp->chgBit(c+13689,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_165));
        vcdp->chgBit(c+13697,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_166));
        vcdp->chgBit(c+13705,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_167));
        vcdp->chgBit(c+13713,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_168));
        vcdp->chgBit(c+13721,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_169));
        vcdp->chgBit(c+13729,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_170));
        vcdp->chgBit(c+13737,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_171));
        vcdp->chgBit(c+13745,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_172));
        vcdp->chgBit(c+13753,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_173));
        vcdp->chgBit(c+13761,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_174));
        vcdp->chgBit(c+13769,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_175));
        vcdp->chgBit(c+13777,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_176));
        vcdp->chgBit(c+13785,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_177));
        vcdp->chgBit(c+13793,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_178));
        vcdp->chgBit(c+13801,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_179));
        vcdp->chgBit(c+13809,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_180));
        vcdp->chgBit(c+13817,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_181));
        vcdp->chgBit(c+13825,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_182));
        vcdp->chgBit(c+13833,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_183));
        vcdp->chgBit(c+13841,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_184));
        vcdp->chgBit(c+13849,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_185));
        vcdp->chgBit(c+13857,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_186));
        vcdp->chgBit(c+13865,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_187));
        vcdp->chgBit(c+13873,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_188));
        vcdp->chgBit(c+13881,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_189));
        vcdp->chgBit(c+13889,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_190));
        vcdp->chgBit(c+13897,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_191));
        vcdp->chgBit(c+13905,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_192));
        vcdp->chgBit(c+13913,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_193));
        vcdp->chgBit(c+13921,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_194));
        vcdp->chgBit(c+13929,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_195));
        vcdp->chgBit(c+13937,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_196));
        vcdp->chgBit(c+13945,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_197));
        vcdp->chgBit(c+13953,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_198));
        vcdp->chgBit(c+13961,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_199));
        vcdp->chgBit(c+13969,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_200));
        vcdp->chgBit(c+13977,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_201));
        vcdp->chgBit(c+13985,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_202));
        vcdp->chgBit(c+13993,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_203));
        vcdp->chgBit(c+14001,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_204));
        vcdp->chgBit(c+14009,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_205));
        vcdp->chgBit(c+14017,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_206));
        vcdp->chgBit(c+14025,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_207));
        vcdp->chgBit(c+14033,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_208));
        vcdp->chgBit(c+14041,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_209));
        vcdp->chgBit(c+14049,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_210));
        vcdp->chgBit(c+14057,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_211));
        vcdp->chgBit(c+14065,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_212));
        vcdp->chgBit(c+14073,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_213));
        vcdp->chgBit(c+14081,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_214));
        vcdp->chgBit(c+14089,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_215));
        vcdp->chgBit(c+14097,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_216));
        vcdp->chgBit(c+14105,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_217));
        vcdp->chgBit(c+14113,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_218));
        vcdp->chgBit(c+14121,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_219));
        vcdp->chgBit(c+14129,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_220));
        vcdp->chgBit(c+14137,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_221));
        vcdp->chgBit(c+14145,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_222));
        vcdp->chgBit(c+14153,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_223));
        vcdp->chgBit(c+14161,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_224));
        vcdp->chgBit(c+14169,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_225));
        vcdp->chgBit(c+14177,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_226));
        vcdp->chgBit(c+14185,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_227));
        vcdp->chgBit(c+14193,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_228));
        vcdp->chgBit(c+14201,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_229));
        vcdp->chgBit(c+14209,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_230));
        vcdp->chgBit(c+14217,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_231));
        vcdp->chgBit(c+14225,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_232));
        vcdp->chgBit(c+14233,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_233));
        vcdp->chgBit(c+14241,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_234));
        vcdp->chgBit(c+14249,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_235));
        vcdp->chgBit(c+14257,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_236));
        vcdp->chgBit(c+14265,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_237));
        vcdp->chgBit(c+14273,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_238));
        vcdp->chgBit(c+14281,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_239));
        vcdp->chgBit(c+14289,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_240));
        vcdp->chgBit(c+14297,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_241));
        vcdp->chgBit(c+14305,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_242));
        vcdp->chgBit(c+14313,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_243));
        vcdp->chgBit(c+14321,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_244));
        vcdp->chgBit(c+14329,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_245));
        vcdp->chgBit(c+14337,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_246));
        vcdp->chgBit(c+14345,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_247));
        vcdp->chgBit(c+14353,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_248));
        vcdp->chgBit(c+14361,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_249));
        vcdp->chgBit(c+14369,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_250));
        vcdp->chgBit(c+14377,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_251));
        vcdp->chgBit(c+14385,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_252));
        vcdp->chgBit(c+14393,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_253));
        vcdp->chgBit(c+14401,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_254));
        vcdp->chgBit(c+14409,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_255));
        vcdp->chgBit(c+14417,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_256));
        vcdp->chgBit(c+14425,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_257));
        vcdp->chgBit(c+14433,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_258));
        vcdp->chgBit(c+14441,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_259));
        vcdp->chgBit(c+14449,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_260));
        vcdp->chgBit(c+14457,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_261));
        vcdp->chgBit(c+14465,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_262));
        vcdp->chgBit(c+14473,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_263));
        vcdp->chgBit(c+14481,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_264));
        vcdp->chgBit(c+14489,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_265));
        vcdp->chgBit(c+14497,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_266));
        vcdp->chgBit(c+14505,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_267));
    }
}

void VConvCombTest::traceChgThis__23(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+14513,((((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) 
                                << 1U) | (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_data))),2);
    }
}

void VConvCombTest::traceChgThis__24(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp2158[3];
    // Body
    {
        vcdp->chgBit(c+14521,(vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data_valid_1));
        vcdp->chgBit(c+14529,(vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_payload_last_regNext));
        vcdp->chgBit(c+14537,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_mux_io_output_valid_regNext));
        vcdp->chgBit(c+14545,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_mux_io_output_payload_last_regNext));
        vcdp->chgBus(c+14553,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value),11);
        vcdp->chgBit(c+14561,((0x7ffU == (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+14569,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value),11);
        vcdp->chgBit(c+14577,((0x7ffU == (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+14585,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+14593,((0x7ffU & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value) 
                                         - (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value)))),11);
        vcdp->chgBit(c+14601,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_ready_1));
        vcdp->chgBit(c+14609,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_valid));
        vcdp->chgBit(c+14617,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_last));
        vcdp->chgBit(c+14625,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_valid_1));
        vcdp->chgBit(c+14633,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_last));
        vcdp->chgBit(c+14641,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next));
        vcdp->chgBit(c+14649,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_last_next));
        vcdp->chgBus(c+14657,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select),2);
        vcdp->chgBus(c+14665,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write),8);
        vcdp->chgBit(c+14673,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pkg_tail));
        vcdp->chgBit(c+14681,((0xa7U <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write))));
        vcdp->chgBit(c+14689,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail));
        vcdp->chgBit(c+14697,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))));
        vcdp->chgBit(c+14705,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state));
        vcdp->chgBit(c+14713,((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor))));
        vcdp->chgBit(c+14721,((0x10bU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor))));
        vcdp->chgBit(c+14729,((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor))));
        vcdp->chgBit(c+14737,((0x10bU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor))));
        vcdp->chgBit(c+14745,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__fifo_pop_valve));
        vcdp->chgBit(c+14753,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__fifo_pop_valve)))));
        __Vtemp2158[0U] = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                            ? ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                                ? 0x55534831U : 0x3f3f3f3fU)
                            : 0x504f5031U);
        __Vtemp2158[1U] = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                            ? ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                                ? 0x4f503050U : 0x3f3f3f3fU)
                            : 0x55534830U);
        __Vtemp2158[2U] = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                            ? ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                                ? 0x50U : 0x3fU) : 0x50U);
        vcdp->chgArray(c+14761,(__Vtemp2158),72);
        vcdp->chgBus(c+14785,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+14793,((0xfU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+14801,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+14809,((0xfU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+14817,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+14825,((0xfU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value)))),4);
        vcdp->chgBus(c+14833,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor),9);
        vcdp->chgBus(c+14841,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor),9);
        vcdp->chgBus(c+14849,(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushPtr_value),11);
        vcdp->chgBit(c+14857,((0x7ffU == (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+14865,(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_popPtr_value),11);
        vcdp->chgBit(c+14873,((0x7ffU == (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+14881,(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+14889,((0x7ffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushPtr_value) 
                                         - (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_popPtr_value)))),11);
    }
}

void VConvCombTest::traceChgThis__25(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+14897,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last) 
                               & (1U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)))));
        vcdp->chgBit(c+14905,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last) 
                               & (1U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)))));
        vcdp->chgBit(c+14913,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                                ? ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last) 
                                   & (1U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)))
                                : ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last) 
                                   & (1U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor))))));
    }
}

void VConvCombTest::traceChgThis__26(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+14921,((1U & (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0))));
        vcdp->chgBus(c+14929,((7U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                     >> 1U))),3);
        vcdp->chgBit(c+14937,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish));
        vcdp->chgBus(c+14945,((3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 3U)) 
                                     + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)) 
                                        + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 1U)))))),2);
        vcdp->chgBus(c+14953,((3U & ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 3U))) 
                                     + ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                        + (1U & (~ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U))))))),2);
        vcdp->chgBus(c+14961,((3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 3U))) 
                                     + ((1U & (2U ^ 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                        + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 1U)))))),2);
        vcdp->chgBus(c+14969,((3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 3U)) 
                                     + ((1U & (1U ^ 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                        + (1U & (~ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U))))))),2);
        vcdp->chgBus(c+14977,((3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 3U)) 
                                     + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)) 
                                        + (1U & (~ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U))))))),2);
        vcdp->chgBus(c+14985,((3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 3U))) 
                                     + ((1U & (3U ^ 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                        + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 1U)))))),2);
        vcdp->chgBus(c+14993,((3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 3U))) 
                                     + ((1U & (2U ^ 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                        + (1U & (~ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U))))))),2);
        vcdp->chgBus(c+15001,((3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 3U)) 
                                     + ((1U & (1U ^ 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                        + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 1U)))))),2);
        vcdp->chgBus(c+15009,((7U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 3U)) 
                                     + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)) 
                                        + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 1U)))))),3);
        vcdp->chgBus(c+15017,((7U & ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 3U))) 
                                     + ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                        + (1U & (~ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U))))))),3);
        vcdp->chgBus(c+15025,((7U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                        >> 1U)))),3);
        vcdp->chgBus(c+15033,((7U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 3U))) 
                                     + ((1U & (2U ^ 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                        + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 1U)))))),3);
        vcdp->chgBus(c+15041,((7U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 3U)) 
                                     + ((1U & (1U ^ 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                        + (1U & (~ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U))))))),3);
        vcdp->chgBus(c+15049,((7U & (4U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                           >> 1U)))),3);
        vcdp->chgBus(c+15057,((7U & (3U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                           >> 1U)))),3);
        vcdp->chgBus(c+15065,((7U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 3U)) 
                                     + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)) 
                                        + (1U & (~ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U))))))),3);
        vcdp->chgBus(c+15073,((7U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 3U))) 
                                     + ((1U & (3U ^ 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                        + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 1U)))))),3);
        vcdp->chgBus(c+15081,((7U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                           >> 1U)))),3);
        vcdp->chgBus(c+15089,((7U & (6U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                           >> 1U)))),3);
        vcdp->chgBus(c+15097,((7U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 3U))) 
                                     + ((1U & (2U ^ 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                        + (1U & (~ 
                                                 ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U))))))),3);
    }
}
