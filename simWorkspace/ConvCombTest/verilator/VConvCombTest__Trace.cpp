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
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 3U))))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 4U))))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
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
            vlTOPp->traceChgThis__20(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__21(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__22(vlSymsp, vcdp, code);
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
        vcdp->chgBit(c+9,((1U & ((((((((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                       >> 1U) ^ (0x2dU 
                                                 & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                    >> 2U))) 
                                     ^ (0x16U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                 >> 3U))) 
                                    ^ (0xbU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                               >> 4U))) 
                                   ^ (5U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                            >> 5U))) 
                                  ^ (2U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                           >> 6U))) 
                                 ^ (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                          >> 7U))))));
        vcdp->chgBit(c+17,((1U & ((((((((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                        >> 1U) ^ (0x3cU 
                                                  & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                     >> 2U))) 
                                      ^ (0x1eU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                  >> 3U))) 
                                     ^ (0xfU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                >> 4U))) 
                                    ^ (7U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                             >> 5U))) 
                                   ^ (3U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                            >> 6U))) 
                                  ^ (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                           >> 7U))))));
        vcdp->chgBit(c+25,((1U & ((((((((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                        >> 1U) ^ (0x3aU 
                                                  & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                     >> 2U))) 
                                      ^ (0x1dU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                  >> 3U))) 
                                     ^ (0xeU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                >> 4U))) 
                                    ^ (7U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                             >> 5U))) 
                                   ^ (3U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                            >> 6U))) 
                                  ^ (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                           >> 7U))))));
        vcdp->chgBus(c+33,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__when_AddCompareSelect_l17)
                             ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_0)
                             : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+41,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+49,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__when_AddCompareSelect_l17)
                             ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_0)
                             : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+57,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+65,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__when_AddCompareSelect_l17)
                             ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_0)
                             : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+73,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+81,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__when_AddCompareSelect_l17)
                             ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_0)
                             : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+89,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+97,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__when_AddCompareSelect_l17)
                             ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_0)
                             : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+105,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+113,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+121,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+129,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+137,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+145,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+153,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+161,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+169,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+177,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+185,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+193,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+201,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+209,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+217,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+225,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+233,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+241,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+249,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+257,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+265,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+273,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+281,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+289,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+297,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+305,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+313,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+321,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+329,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+337,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+345,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+353,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+361,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+369,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+377,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+385,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+393,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+401,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+409,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+417,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+425,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+433,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+441,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+449,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+457,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+465,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+473,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+481,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+489,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+497,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+505,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+513,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+521,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+529,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+537,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+545,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+553,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+561,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+569,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+577,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+585,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+593,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+601,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+609,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+617,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+625,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_1))),8);
    }
}

void VConvCombTest::traceChgThis__4(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+633,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+641,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+649,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+657,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+665,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+673,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+681,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+689,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+697,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+705,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+713,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+721,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+729,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+737,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+745,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+753,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+761,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+769,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+777,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+785,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+793,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+801,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+809,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+817,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+825,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+833,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+841,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+849,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+857,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+865,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+873,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+881,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+889,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+897,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+905,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+913,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+921,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+929,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+937,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+945,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+953,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+961,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+969,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+977,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+985,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+993,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+1001,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+1009,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__when_AddCompareSelect_l17)
                               ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_0)
                               : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+1017,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+1025,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__when_AddCompareSelect_l17)
                               ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_0)
                               : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+1033,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+1041,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__when_AddCompareSelect_l17)
                               ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_0)
                               : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+1049,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+1057,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1065,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1073,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1081,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1089,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1097,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1105,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1113,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1121,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1129,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1137,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1145,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1153,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1161,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1169,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1177,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1185,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1193,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1201,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1209,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1217,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1225,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1233,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1241,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1249,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1257,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1265,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1273,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1281,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1289,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1297,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1305,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1313,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1321,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1329,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1337,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1345,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1353,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1361,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1369,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1377,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1385,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1393,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1401,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1409,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1417,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1425,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1433,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1441,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1449,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1457,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1465,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1473,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1481,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1489,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1497,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1505,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1513,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1521,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1529,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1537,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1545,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1553,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1561,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1569,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1577,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1585,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1593,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1601,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1609,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1617,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1625,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1633,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1641,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1649,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1657,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1665,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1673,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1681,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1689,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1697,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1705,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1713,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1721,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1729,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1737,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1745,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1753,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1761,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1769,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1777,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1785,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1793,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1801,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1809,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1817,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1825,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1833,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1841,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1849,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1857,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1865,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1873,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1881,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1889,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1897,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1905,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1913,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1921,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1929,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1937,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1945,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1953,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1961,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1969,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_0),8);
        vcdp->chgBus(c+1977,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_1),8);
        vcdp->chgBit(c+1985,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+1993,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2001,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2009,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2017,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2025,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2033,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2041,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2049,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2057,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2065,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2073,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2081,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2089,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2097,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2105,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2113,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2121,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2129,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2137,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2145,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2153,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2161,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2169,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2177,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2185,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2193,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2201,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2209,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_0),8);
    }
}

void VConvCombTest::traceChgThis__6(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2217,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2225,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2233,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2241,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2249,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2257,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2265,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2273,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2281,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2289,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2297,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2305,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2313,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2321,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2329,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2337,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2345,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2353,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2361,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2369,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2377,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2385,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2393,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2401,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2409,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2417,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2425,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2433,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2441,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2449,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2457,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2465,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2473,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2481,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2489,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2497,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2505,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2513,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2521,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2529,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2537,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2545,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2553,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2561,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+2569,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_0),8);
        vcdp->chgBus(c+2577,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_1),8);
        vcdp->chgBit(c+2585,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__when_AddCompareSelect_l17));
    }
}

void VConvCombTest::traceChgThis__7(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2593,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+2601,(vlTOPp->ConvCombTest__DOT__encoded_fifo_io_pop_valid));
        vcdp->chgBus(c+2609,(((((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy) 
                                & (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch)) 
                               << 0xaU) | (0x3ffU & 
                                           ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value) 
                                            - (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value))))),11);
        vcdp->chgBus(c+2617,(((((~ (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy)) 
                                & (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch)) 
                               << 0xaU) | (0x3ffU & 
                                           ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value) 
                                            - (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value))))),11);
        vcdp->chgBit(c+2625,(vlTOPp->ConvCombTest__DOT__decoder_raw_data_ready));
        vcdp->chgBit(c+2633,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+2641,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_valueNext),10);
        vcdp->chgBit(c+2649,(((0x3ffU == (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+2657,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBit(c+2665,(((0x3ffU == (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+2673,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+2681,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+2689,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popping));
        vcdp->chgBit(c+2697,(((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+2705,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_full));
        vcdp->chgBit(c+2713,(((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+2721,(vlTOPp->ConvCombTest__DOT__decoder__DOT__raw_data_fire));
        vcdp->chgBit(c+2729,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+2737,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid));
        vcdp->chgBus(c+2745,(((((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy) 
                                & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch)) 
                               << 9U) | (0x1ffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
                                                   - (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value))))),10);
        vcdp->chgBus(c+2753,(((((~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy)) 
                                & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch)) 
                               << 9U) | (0x1ffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value) 
                                                   - (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value))))),10);
        vcdp->chgBit(c+2761,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+2769,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_valueNext),9);
        vcdp->chgBit(c+2777,(((0x1ffU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+2785,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+2793,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+2801,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+2809,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full));
    }
}

void VConvCombTest::traceChgThis__8(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2817,(((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                              & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__raw_data_fire))));
    }
}

void VConvCombTest::traceChgThis__9(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2825,(((0x1ffU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+2833,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping))));
    }
}

void VConvCombTest::traceChgThis__10(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2841,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor),7);
        vcdp->chgBus(c+2849,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom
                             [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor]),6);
        vcdp->chgBit(c+2857,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom
                             [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor]));
    }
}

void VConvCombTest::traceChgThis__11(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2865,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_valueNext),10);
        vcdp->chgBit(c+2873,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l104));
        vcdp->chgArray(c+2881,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string),88);
        vcdp->chgBit(c+2905,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping));
        vcdp->chgBit(c+2913,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+2921,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_valueNext),9);
    }
}

void VConvCombTest::traceChgThis__12(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2929,(vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data),3);
        vcdp->chgBit(c+2937,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data));
        vcdp->chgBit(c+2945,(vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_payload));
        vcdp->chgBus(c+2953,(vlTOPp->ConvCombTest__DOT__encoder__DOT__r_enc_buf),7);
        vcdp->chgBus(c+2961,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_62),6);
        vcdp->chgQuad(c+2969,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path),64);
        vcdp->chgBit(c+2985,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pipe_halt));
        vcdp->chgBus(c+2993,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_0),8);
        vcdp->chgBus(c+3001,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_1),8);
        vcdp->chgBus(c+3009,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_2),8);
        vcdp->chgBus(c+3017,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_3),8);
        vcdp->chgBus(c+3025,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_4),8);
        vcdp->chgBus(c+3033,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_5),8);
        vcdp->chgBus(c+3041,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_6),8);
        vcdp->chgBus(c+3049,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_7),8);
        vcdp->chgBus(c+3057,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_8),8);
        vcdp->chgBus(c+3065,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_9),8);
        vcdp->chgBus(c+3073,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_10),8);
        vcdp->chgBus(c+3081,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_11),8);
        vcdp->chgBus(c+3089,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_12),8);
        vcdp->chgBus(c+3097,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_13),8);
        vcdp->chgBus(c+3105,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_14),8);
        vcdp->chgBus(c+3113,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_15),8);
        vcdp->chgBus(c+3121,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_16),8);
        vcdp->chgBus(c+3129,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_17),8);
        vcdp->chgBus(c+3137,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_18),8);
        vcdp->chgBus(c+3145,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_19),8);
        vcdp->chgBus(c+3153,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_20),8);
        vcdp->chgBus(c+3161,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_21),8);
        vcdp->chgBus(c+3169,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_22),8);
        vcdp->chgBus(c+3177,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_23),8);
        vcdp->chgBus(c+3185,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_24),8);
        vcdp->chgBus(c+3193,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_25),8);
        vcdp->chgBus(c+3201,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_26),8);
        vcdp->chgBus(c+3209,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_27),8);
        vcdp->chgBus(c+3217,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_28),8);
        vcdp->chgBus(c+3225,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_29),8);
        vcdp->chgBus(c+3233,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_30),8);
        vcdp->chgBus(c+3241,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_31),8);
        vcdp->chgBus(c+3249,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_32),8);
        vcdp->chgBus(c+3257,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_33),8);
        vcdp->chgBus(c+3265,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_34),8);
        vcdp->chgBus(c+3273,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_35),8);
        vcdp->chgBus(c+3281,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_36),8);
        vcdp->chgBus(c+3289,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_37),8);
        vcdp->chgBus(c+3297,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_38),8);
        vcdp->chgBus(c+3305,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_39),8);
        vcdp->chgBus(c+3313,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_40),8);
        vcdp->chgBus(c+3321,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_41),8);
        vcdp->chgBus(c+3329,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_42),8);
        vcdp->chgBus(c+3337,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_43),8);
        vcdp->chgBus(c+3345,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_44),8);
        vcdp->chgBus(c+3353,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_45),8);
        vcdp->chgBus(c+3361,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_46),8);
        vcdp->chgBus(c+3369,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_47),8);
        vcdp->chgBus(c+3377,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_48),8);
        vcdp->chgBus(c+3385,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_49),8);
        vcdp->chgBus(c+3393,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_50),8);
        vcdp->chgBus(c+3401,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_51),8);
        vcdp->chgBus(c+3409,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_52),8);
        vcdp->chgBus(c+3417,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_53),8);
        vcdp->chgBus(c+3425,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_54),8);
        vcdp->chgBus(c+3433,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_55),8);
        vcdp->chgBus(c+3441,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_56),8);
        vcdp->chgBus(c+3449,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_57),8);
        vcdp->chgBus(c+3457,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_58),8);
        vcdp->chgBus(c+3465,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_59),8);
        vcdp->chgBus(c+3473,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_60),8);
        vcdp->chgBus(c+3481,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_61),8);
        vcdp->chgBus(c+3489,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_62),8);
        vcdp->chgBus(c+3497,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_63),8);
        vcdp->chgBus(c+3505,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_64),8);
        vcdp->chgBus(c+3513,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_65),8);
        vcdp->chgBus(c+3521,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_66),8);
        vcdp->chgBus(c+3529,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_67),8);
        vcdp->chgBus(c+3537,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_68),8);
        vcdp->chgBus(c+3545,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_69),8);
        vcdp->chgBus(c+3553,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_70),8);
        vcdp->chgBus(c+3561,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_71),8);
        vcdp->chgBus(c+3569,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_72),8);
        vcdp->chgBus(c+3577,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_73),8);
        vcdp->chgBus(c+3585,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_74),8);
        vcdp->chgBus(c+3593,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_75),8);
        vcdp->chgBus(c+3601,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_76),8);
        vcdp->chgBus(c+3609,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_77),8);
        vcdp->chgBus(c+3617,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_78),8);
        vcdp->chgBus(c+3625,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_79),8);
        vcdp->chgBus(c+3633,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_80),8);
        vcdp->chgBus(c+3641,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_81),8);
        vcdp->chgBus(c+3649,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_82),8);
        vcdp->chgBus(c+3657,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_83),8);
        vcdp->chgBus(c+3665,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_84),8);
        vcdp->chgBus(c+3673,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_85),8);
        vcdp->chgBus(c+3681,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_86),8);
        vcdp->chgBus(c+3689,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_87),8);
        vcdp->chgBus(c+3697,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_88),8);
        vcdp->chgBus(c+3705,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_89),8);
        vcdp->chgBus(c+3713,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_90),8);
        vcdp->chgBus(c+3721,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_91),8);
        vcdp->chgBus(c+3729,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_92),8);
        vcdp->chgBus(c+3737,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_93),8);
        vcdp->chgBus(c+3745,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_94),8);
        vcdp->chgBus(c+3753,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_95),8);
        vcdp->chgBus(c+3761,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_96),8);
        vcdp->chgBus(c+3769,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_97),8);
        vcdp->chgBus(c+3777,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_98),8);
        vcdp->chgBus(c+3785,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_99),8);
        vcdp->chgBus(c+3793,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_100),8);
        vcdp->chgBus(c+3801,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_101),8);
        vcdp->chgBus(c+3809,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_102),8);
        vcdp->chgBus(c+3817,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_103),8);
        vcdp->chgBus(c+3825,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_104),8);
        vcdp->chgBus(c+3833,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_105),8);
        vcdp->chgBus(c+3841,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_106),8);
        vcdp->chgBus(c+3849,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_107),8);
        vcdp->chgBus(c+3857,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_108),8);
        vcdp->chgBus(c+3865,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_109),8);
        vcdp->chgBus(c+3873,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_110),8);
        vcdp->chgBus(c+3881,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_111),8);
        vcdp->chgBus(c+3889,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_112),8);
        vcdp->chgBus(c+3897,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_113),8);
        vcdp->chgBus(c+3905,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_114),8);
        vcdp->chgBus(c+3913,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_115),8);
        vcdp->chgBus(c+3921,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_116),8);
        vcdp->chgBus(c+3929,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_117),8);
        vcdp->chgBus(c+3937,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_118),8);
        vcdp->chgBus(c+3945,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_119),8);
        vcdp->chgBus(c+3953,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_120),8);
        vcdp->chgBus(c+3961,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_121),8);
        vcdp->chgBus(c+3969,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_122),8);
        vcdp->chgBus(c+3977,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_123),8);
        vcdp->chgBus(c+3985,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_124),8);
        vcdp->chgBus(c+3993,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_125),8);
        vcdp->chgBus(c+4001,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_126),8);
        vcdp->chgBus(c+4009,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_127),8);
        vcdp->chgBus(c+4017,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_62),8);
        vcdp->chgBus(c+4025,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0),8);
        vcdp->chgBus(c+4033,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1),8);
        vcdp->chgBus(c+4041,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2),8);
        vcdp->chgBus(c+4049,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3),8);
        vcdp->chgBus(c+4057,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_4),8);
        vcdp->chgBus(c+4065,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_5),8);
        vcdp->chgBus(c+4073,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_6),8);
        vcdp->chgBus(c+4081,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_7),8);
        vcdp->chgBus(c+4089,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_8),8);
        vcdp->chgBus(c+4097,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_9),8);
        vcdp->chgBus(c+4105,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_10),8);
        vcdp->chgBus(c+4113,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_11),8);
        vcdp->chgBus(c+4121,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_12),8);
        vcdp->chgBus(c+4129,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_13),8);
        vcdp->chgBus(c+4137,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_14),8);
        vcdp->chgBus(c+4145,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_15),8);
        vcdp->chgBus(c+4153,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_16),8);
        vcdp->chgBus(c+4161,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_17),8);
        vcdp->chgBus(c+4169,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_18),8);
        vcdp->chgBus(c+4177,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_19),8);
        vcdp->chgBus(c+4185,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_20),8);
        vcdp->chgBus(c+4193,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_21),8);
        vcdp->chgBus(c+4201,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_22),8);
        vcdp->chgBus(c+4209,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_23),8);
        vcdp->chgBus(c+4217,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_24),8);
        vcdp->chgBus(c+4225,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_25),8);
        vcdp->chgBus(c+4233,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_26),8);
        vcdp->chgBus(c+4241,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_27),8);
        vcdp->chgBus(c+4249,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_28),8);
        vcdp->chgBus(c+4257,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_29),8);
        vcdp->chgBus(c+4265,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_30),8);
        vcdp->chgBus(c+4273,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_31),8);
        vcdp->chgBus(c+4281,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_32),8);
        vcdp->chgBus(c+4289,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_33),8);
        vcdp->chgBus(c+4297,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_34),8);
        vcdp->chgBus(c+4305,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_35),8);
        vcdp->chgBus(c+4313,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_36),8);
        vcdp->chgBus(c+4321,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_37),8);
        vcdp->chgBus(c+4329,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_38),8);
        vcdp->chgBus(c+4337,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_39),8);
        vcdp->chgBus(c+4345,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_40),8);
        vcdp->chgBus(c+4353,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_41),8);
        vcdp->chgBus(c+4361,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_42),8);
        vcdp->chgBus(c+4369,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_43),8);
        vcdp->chgBus(c+4377,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_44),8);
        vcdp->chgBus(c+4385,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_45),8);
        vcdp->chgBus(c+4393,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_46),8);
        vcdp->chgBus(c+4401,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_47),8);
        vcdp->chgBus(c+4409,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_48),8);
        vcdp->chgBus(c+4417,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_49),8);
        vcdp->chgBus(c+4425,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_50),8);
    }
}

void VConvCombTest::traceChgThis__14(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+4433,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_51),8);
        vcdp->chgBus(c+4441,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_52),8);
        vcdp->chgBus(c+4449,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_53),8);
        vcdp->chgBus(c+4457,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_54),8);
        vcdp->chgBus(c+4465,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_55),8);
        vcdp->chgBus(c+4473,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_56),8);
        vcdp->chgBus(c+4481,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_57),8);
        vcdp->chgBus(c+4489,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_58),8);
        vcdp->chgBus(c+4497,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_59),8);
        vcdp->chgBus(c+4505,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_60),8);
        vcdp->chgBus(c+4513,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_61),8);
        vcdp->chgBus(c+4521,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_62),8);
        vcdp->chgBus(c+4529,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_63),8);
        vcdp->chgBus(c+4537,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_0),2);
        vcdp->chgBus(c+4545,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_1),2);
        vcdp->chgBus(c+4553,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_2),2);
        vcdp->chgBus(c+4561,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_3),2);
        vcdp->chgBus(c+4569,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_4),2);
        vcdp->chgBus(c+4577,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_5),2);
        vcdp->chgBus(c+4585,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_6),2);
        vcdp->chgBus(c+4593,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_7),2);
        vcdp->chgBus(c+4601,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_8),2);
        vcdp->chgBus(c+4609,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_9),2);
        vcdp->chgBus(c+4617,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_10),2);
        vcdp->chgBus(c+4625,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_11),2);
        vcdp->chgBus(c+4633,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_12),2);
        vcdp->chgBus(c+4641,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_13),2);
        vcdp->chgBus(c+4649,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_14),2);
        vcdp->chgBus(c+4657,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_15),2);
        vcdp->chgBus(c+4665,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_16),2);
        vcdp->chgBus(c+4673,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_17),2);
        vcdp->chgBus(c+4681,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_18),2);
        vcdp->chgBus(c+4689,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_19),2);
        vcdp->chgBus(c+4697,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_20),2);
        vcdp->chgBus(c+4705,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_21),2);
        vcdp->chgBus(c+4713,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_22),2);
        vcdp->chgBus(c+4721,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_23),2);
        vcdp->chgBus(c+4729,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_24),2);
        vcdp->chgBus(c+4737,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_25),2);
        vcdp->chgBus(c+4745,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_26),2);
        vcdp->chgBus(c+4753,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_27),2);
        vcdp->chgBus(c+4761,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_28),2);
        vcdp->chgBus(c+4769,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_29),2);
        vcdp->chgBus(c+4777,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_30),2);
        vcdp->chgBus(c+4785,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_31),2);
        vcdp->chgBus(c+4793,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_32),2);
        vcdp->chgBus(c+4801,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_33),2);
        vcdp->chgBus(c+4809,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_34),2);
        vcdp->chgBus(c+4817,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_35),2);
        vcdp->chgBus(c+4825,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_36),2);
        vcdp->chgBus(c+4833,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_37),2);
        vcdp->chgBus(c+4841,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_38),2);
        vcdp->chgBus(c+4849,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_39),2);
        vcdp->chgBus(c+4857,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_40),2);
        vcdp->chgBus(c+4865,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_41),2);
        vcdp->chgBus(c+4873,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_42),2);
        vcdp->chgBus(c+4881,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_43),2);
        vcdp->chgBus(c+4889,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_44),2);
        vcdp->chgBus(c+4897,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_45),2);
        vcdp->chgBus(c+4905,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_46),2);
        vcdp->chgBus(c+4913,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_47),2);
        vcdp->chgBus(c+4921,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_48),2);
        vcdp->chgBus(c+4929,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_49),2);
        vcdp->chgBus(c+4937,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_50),2);
        vcdp->chgBus(c+4945,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_51),2);
        vcdp->chgBus(c+4953,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_52),2);
        vcdp->chgBus(c+4961,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_53),2);
        vcdp->chgBus(c+4969,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_54),2);
        vcdp->chgBus(c+4977,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_55),2);
        vcdp->chgBus(c+4985,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_56),2);
        vcdp->chgBus(c+4993,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_57),2);
        vcdp->chgBus(c+5001,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_58),2);
        vcdp->chgBus(c+5009,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_59),2);
        vcdp->chgBus(c+5017,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_60),2);
        vcdp->chgBus(c+5025,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_61),2);
        vcdp->chgBus(c+5033,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_62),2);
        vcdp->chgBus(c+5041,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_63),2);
        vcdp->chgBus(c+5049,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_64),2);
        vcdp->chgBus(c+5057,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_65),2);
        vcdp->chgBus(c+5065,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_66),2);
        vcdp->chgBus(c+5073,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_67),2);
        vcdp->chgBus(c+5081,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_68),2);
        vcdp->chgBus(c+5089,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_69),2);
        vcdp->chgBus(c+5097,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_70),2);
        vcdp->chgBus(c+5105,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_71),2);
        vcdp->chgBus(c+5113,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_72),2);
        vcdp->chgBus(c+5121,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_73),2);
        vcdp->chgBus(c+5129,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_74),2);
        vcdp->chgBus(c+5137,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_75),2);
        vcdp->chgBus(c+5145,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_76),2);
        vcdp->chgBus(c+5153,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_77),2);
        vcdp->chgBus(c+5161,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_78),2);
        vcdp->chgBus(c+5169,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_79),2);
        vcdp->chgBus(c+5177,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_80),2);
        vcdp->chgBus(c+5185,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_81),2);
        vcdp->chgBus(c+5193,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_82),2);
        vcdp->chgBus(c+5201,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_83),2);
        vcdp->chgBus(c+5209,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_84),2);
        vcdp->chgBus(c+5217,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_85),2);
        vcdp->chgBus(c+5225,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_86),2);
        vcdp->chgBus(c+5233,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_87),2);
        vcdp->chgBus(c+5241,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_88),2);
        vcdp->chgBus(c+5249,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_89),2);
        vcdp->chgBus(c+5257,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_90),2);
        vcdp->chgBus(c+5265,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_91),2);
        vcdp->chgBus(c+5273,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_92),2);
        vcdp->chgBus(c+5281,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_93),2);
        vcdp->chgBus(c+5289,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_94),2);
        vcdp->chgBus(c+5297,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_95),2);
        vcdp->chgBus(c+5305,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_96),2);
        vcdp->chgBus(c+5313,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_97),2);
        vcdp->chgBus(c+5321,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_98),2);
        vcdp->chgBus(c+5329,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_99),2);
        vcdp->chgBus(c+5337,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_100),2);
        vcdp->chgBus(c+5345,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_101),2);
        vcdp->chgBus(c+5353,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_102),2);
        vcdp->chgBus(c+5361,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_103),2);
        vcdp->chgBus(c+5369,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_104),2);
        vcdp->chgBus(c+5377,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_105),2);
        vcdp->chgBus(c+5385,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_106),2);
        vcdp->chgBus(c+5393,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_107),2);
        vcdp->chgBus(c+5401,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_108),2);
        vcdp->chgBus(c+5409,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_109),2);
        vcdp->chgBus(c+5417,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_110),2);
        vcdp->chgBus(c+5425,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_111),2);
        vcdp->chgBus(c+5433,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_112),2);
        vcdp->chgBus(c+5441,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_113),2);
        vcdp->chgBus(c+5449,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_114),2);
        vcdp->chgBus(c+5457,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_115),2);
        vcdp->chgBus(c+5465,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_116),2);
        vcdp->chgBus(c+5473,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_117),2);
        vcdp->chgBus(c+5481,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_118),2);
        vcdp->chgBus(c+5489,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_119),2);
        vcdp->chgBus(c+5497,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_120),2);
        vcdp->chgBus(c+5505,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_121),2);
        vcdp->chgBus(c+5513,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_122),2);
        vcdp->chgBus(c+5521,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_123),2);
        vcdp->chgBus(c+5529,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_124),2);
        vcdp->chgBus(c+5537,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_125),2);
        vcdp->chgBus(c+5545,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_126),2);
        vcdp->chgBus(c+5553,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_127),2);
        vcdp->chgQuad(c+5561,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_0_port1),64);
        vcdp->chgQuad(c+5577,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port1),64);
        vcdp->chgQuad(c+5593,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port2),64);
        vcdp->chgBus(c+5609,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor),6);
        vcdp->chgBit(c+5617,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_data));
        vcdp->chgArray(c+5625,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo),512);
    }
}

void VConvCombTest::traceChgThis__16(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+5753,((((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) 
                               << 1U) | (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_data))),2);
    }
}

void VConvCombTest::traceChgThis__17(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+5761,(vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data_valid_1));
        vcdp->chgBit(c+5769,(vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_last_regNext));
        vcdp->chgBit(c+5777,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data_valid_1));
        vcdp->chgBit(c+5785,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data_last));
        vcdp->chgBit(c+5793,(vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_valid_1));
        vcdp->chgBit(c+5801,(vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_last));
        vcdp->chgBus(c+5809,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value),10);
        vcdp->chgBit(c+5817,((0x3ffU == (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+5825,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value),10);
        vcdp->chgBit(c+5833,((0x3ffU == (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+5841,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+5849,((0x3ffU & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value) 
                                        - (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value)))),10);
        vcdp->chgBit(c+5857,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_ready_1));
        vcdp->chgBit(c+5865,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_valid));
        vcdp->chgBit(c+5873,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_last));
        vcdp->chgBit(c+5881,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_valid_1));
        vcdp->chgBit(c+5889,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_last));
        vcdp->chgBit(c+5897,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next));
        vcdp->chgBit(c+5905,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_last_next));
        vcdp->chgBus(c+5913,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select),2);
        vcdp->chgBus(c+5921,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write),8);
        vcdp->chgBit(c+5929,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pkg_tail));
        vcdp->chgBit(c+5937,((0xa7U <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write))));
        vcdp->chgBit(c+5945,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail));
        vcdp->chgBit(c+5953,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__fifo_pop_ready));
        vcdp->chgBit(c+5961,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__data_last));
        vcdp->chgBus(c+5969,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value),9);
        vcdp->chgBit(c+5977,((0x1ffU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+5985,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value),9);
        vcdp->chgBit(c+5993,((0x1ffU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+6001,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+6009,((0x1ffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
                                        - (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value)))),9);
    }
}

void VConvCombTest::traceChgThis__18(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+6017,((1U & (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0))));
        vcdp->chgBus(c+6025,((7U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                    >> 1U))),3);
        vcdp->chgBit(c+6033,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish));
        vcdp->chgBus(c+6041,((3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                           >> 3U)) 
                                    + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                              >> 2U)) 
                                       + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))))),2);
        vcdp->chgBus(c+6049,((3U & ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                              >> 3U))) 
                                    + ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 2U))) 
                                       + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))))))),2);
        vcdp->chgBus(c+6057,((3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 3U))) 
                                    + ((1U & (2U ^ 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U))) 
                                       + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))))),2);
        vcdp->chgBus(c+6065,((3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                           >> 3U)) 
                                    + ((1U & (1U ^ 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U))) 
                                       + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))))))),2);
        vcdp->chgBus(c+6073,((3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                           >> 3U)) 
                                    + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                              >> 2U)) 
                                       + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))))))),2);
        vcdp->chgBus(c+6081,((3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 3U))) 
                                    + ((1U & (3U ^ 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U))) 
                                       + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))))),2);
        vcdp->chgBus(c+6089,((3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 3U))) 
                                    + ((1U & (2U ^ 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U))) 
                                       + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))))))),2);
        vcdp->chgBus(c+6097,((3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                           >> 3U)) 
                                    + ((1U & (1U ^ 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U))) 
                                       + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))))),2);
        vcdp->chgBus(c+6105,((7U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                           >> 3U)) 
                                    + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                              >> 2U)) 
                                       + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))))),3);
        vcdp->chgBus(c+6113,((7U & ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                              >> 3U))) 
                                    + ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 2U))) 
                                       + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))))))),3);
        vcdp->chgBus(c+6121,((7U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                       >> 1U)))),3);
        vcdp->chgBus(c+6129,((7U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 3U))) 
                                    + ((1U & (2U ^ 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U))) 
                                       + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))))),3);
        vcdp->chgBus(c+6137,((7U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                           >> 3U)) 
                                    + ((1U & (1U ^ 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U))) 
                                       + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))))))),3);
        vcdp->chgBus(c+6145,((7U & (4U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 1U)))),3);
        vcdp->chgBus(c+6153,((7U & (3U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 1U)))),3);
        vcdp->chgBus(c+6161,((7U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                           >> 3U)) 
                                    + ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                              >> 2U)) 
                                       + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))))))),3);
        vcdp->chgBus(c+6169,((7U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 3U))) 
                                    + ((1U & (3U ^ 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U))) 
                                       + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))))),3);
        vcdp->chgBus(c+6177,((7U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 1U)))),3);
        vcdp->chgBus(c+6185,((7U & (6U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 1U)))),3);
        vcdp->chgBus(c+6193,((7U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 3U))) 
                                    + ((1U & (2U ^ 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U))) 
                                       + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))))))),3);
    }
}

void VConvCombTest::traceChgThis__20(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+6201,((7U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                           >> 3U)) 
                                    + ((1U & (1U ^ 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U))) 
                                       + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))))),3);
        vcdp->chgBus(c+6209,((7U & (5U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 1U)))),3);
        vcdp->chgBus(c+6217,((7U & (2U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 1U)))),3);
        vcdp->chgBus(c+6225,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select),2);
        vcdp->chgBus(c+6233,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt),3);
        vcdp->chgBit(c+6241,((7U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt))));
        vcdp->chgBit(c+6249,((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0))));
        vcdp->chgBus(c+6257,((3U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                                    >> 1U))),2);
        vcdp->chgArray(c+6265,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_last_lifo),512);
    }
}

void VConvCombTest::traceChgThis__21(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+6393,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read),8);
        vcdp->chgBit(c+6401,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat));
        vcdp->chgBus(c+6409,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state),3);
        vcdp->chgBit(c+6417,((0xa7U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))));
        vcdp->chgBus(c+6425,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor),9);
        vcdp->chgBit(c+6433,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state));
        vcdp->chgBit(c+6441,((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor))));
        vcdp->chgBus(c+6449,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                               ? ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                                   ? 0x504f5020U : 0x3f3f3f3fU)
                               : 0x50555348U)),32);
    }
}

void VConvCombTest::traceChgThis__22(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+6457,(vlTOPp->tail_bits_valid));
        vcdp->chgBus(c+6465,(vlTOPp->tail_bits_payload),7);
        vcdp->chgBit(c+6473,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+6481,(vlTOPp->raw_data_payload_last));
        vcdp->chgBit(c+6489,(vlTOPp->raw_data_payload_fragment));
        vcdp->chgBit(c+6497,(vlTOPp->decoded_data_valid));
        vcdp->chgBit(c+6505,(vlTOPp->decoded_data_payload_last));
        vcdp->chgBit(c+6513,(vlTOPp->decoded_data_payload_fragment));
        vcdp->chgBit(c+6521,(vlTOPp->clk));
        vcdp->chgBit(c+6529,(vlTOPp->reset));
    }
}
