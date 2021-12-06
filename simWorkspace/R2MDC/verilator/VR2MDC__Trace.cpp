// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VR2MDC__Syms.h"


//======================

void VR2MDC::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VR2MDC* t = (VR2MDC*)userthis;
    VR2MDC__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VR2MDC::traceChgThis(VR2MDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity 
                                 | (vlTOPp->__Vm_traceActivity 
                                    >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                               >> 2U)) 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 3U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
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
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 1U) | (vlTOPp->__Vm_traceActivity 
                                          >> 2U))))) {
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

void VR2MDC::traceChgThis__2(VR2MDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(((0x10U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                            ? vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_15_re
                            : vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__add_result_re)),24);
        vcdp->chgBus(c+9,(((0x10U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                            ? vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_15_im
                            : vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__add_result_im)),24);
        vcdp->chgBus(c+17,(((8U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                             ? vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_7_re
                             : vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__add_result_re)),24);
        vcdp->chgBus(c+25,(((8U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                             ? vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_7_im
                             : vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__add_result_im)),24);
        vcdp->chgBus(c+33,(((4U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                             ? vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_3_re
                             : vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__add_result_re)),24);
        vcdp->chgBus(c+41,(((4U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                             ? vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_3_im
                             : vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__add_result_im)),24);
        vcdp->chgBus(c+49,(((2U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                             ? vlTOPp->R2MDC__DOT__shiftRegister_17__DOT__shift_reg_1_re
                             : vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__add_result_re)),24);
        vcdp->chgBus(c+57,(((2U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                             ? vlTOPp->R2MDC__DOT__shiftRegister_17__DOT__shift_reg_1_im
                             : vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__add_result_im)),24);
        vcdp->chgBus(c+65,(((1U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                             ? vlTOPp->R2MDC__DOT__shiftRegister_19__DOT__shift_reg_0_re
                             : vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__add_result_re)),24);
        vcdp->chgBus(c+73,(((1U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                             ? vlTOPp->R2MDC__DOT__shiftRegister_19__DOT__shift_reg_0_im
                             : vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__add_result_im)),24);
    }
}

void VR2MDC::traceChgThis__3(VR2MDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+81,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                 & ((VL_MULS_QQQ(48,48,48, 
                                                                 (VL_ULL(0xffffffffffff) 
                                                                  & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__sub_result_re)), 
                                                                 (VL_ULL(0xffffffffffff) 
                                                                  & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_1_port0))))) 
                                                     - 
                                                     VL_MULS_QQQ(48,48,48, 
                                                                 (VL_ULL(0xffffffffffff) 
                                                                  & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__sub_result_im)), 
                                                                 (VL_ULL(0xffffffffffff) 
                                                                  & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_5_wn_im)))) 
                                                    >> 0xbU))))),24);
        vcdp->chgBus(c+89,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                 & ((VL_MULS_QQQ(48,48,48, 
                                                                 (VL_ULL(0xffffffffffff) 
                                                                  & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__sub_result_re)), 
                                                                 (VL_ULL(0xffffffffffff) 
                                                                  & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_5_wn_im))) 
                                                     + 
                                                     VL_MULS_QQQ(48,48,48, 
                                                                 (VL_ULL(0xffffffffffff) 
                                                                  & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__sub_result_im)), 
                                                                 (VL_ULL(0xffffffffffff) 
                                                                  & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_1_port0)))))) 
                                                    >> 0xbU))))),24);
        vcdp->chgBus(c+97,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                 & ((VL_MULS_QQQ(48,48,48, 
                                                                 (VL_ULL(0xffffffffffff) 
                                                                  & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__sub_result_re)), 
                                                                 (VL_ULL(0xffffffffffff) 
                                                                  & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_2_port0))))) 
                                                     - 
                                                     VL_MULS_QQQ(48,48,48, 
                                                                 (VL_ULL(0xffffffffffff) 
                                                                  & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__sub_result_im)), 
                                                                 (VL_ULL(0xffffffffffff) 
                                                                  & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_6_wn_im)))) 
                                                    >> 0xbU))))),24);
        vcdp->chgBus(c+105,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                  & ((VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__sub_result_re)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_6_wn_im))) 
                                                      + 
                                                      VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__sub_result_im)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_2_port0)))))) 
                                                     >> 0xbU))))),24);
        vcdp->chgBus(c+113,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                  & ((VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__sub_result_re)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_3_port0))))) 
                                                      - 
                                                      VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__sub_result_im)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_7_wn_im)))) 
                                                     >> 0xbU))))),24);
        vcdp->chgBus(c+121,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                  & ((VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__sub_result_re)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_7_wn_im))) 
                                                      + 
                                                      VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__sub_result_im)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_3_port0)))))) 
                                                     >> 0xbU))))),24);
        vcdp->chgBus(c+129,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                  & ((VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__sub_result_re)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_4_port0))))) 
                                                      - 
                                                      VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__sub_result_im)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_8_wn_im)))) 
                                                     >> 0xbU))))),24);
        vcdp->chgBus(c+137,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                  & ((VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__sub_result_re)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_8_wn_im))) 
                                                      + 
                                                      VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__sub_result_im)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_4_port0)))))) 
                                                     >> 0xbU))))),24);
        vcdp->chgBus(c+145,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                  & ((VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__sub_result_re)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_5_port0))))) 
                                                      - 
                                                      VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__sub_result_im)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_9_wn_im)))) 
                                                     >> 0xbU))))),24);
        vcdp->chgBus(c+153,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                  & ((VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__sub_result_re)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_9_wn_im))) 
                                                      + 
                                                      VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__sub_result_im)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_5_port0)))))) 
                                                     >> 0xbU))))),24);
    }
}

void VR2MDC::traceChgThis__4(VR2MDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+161,(vlTOPp->R2MDC__DOT__reorder_1__DOT__in_cnt_index),5);
        vcdp->chgBit(c+169,(vlTOPp->R2MDC__DOT__reorder_1__DOT__sorted_valid_1));
    }
}

void VR2MDC::traceChgThis__5(VR2MDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+177,(vlTOPp->R2MDC__DOT__r2Butterfly_5_wn_im),24);
        vcdp->chgBus(c+185,(vlTOPp->R2MDC__DOT__r2Butterfly_6_wn_im),24);
        vcdp->chgBus(c+193,(vlTOPp->R2MDC__DOT__r2Butterfly_7_wn_im),24);
        vcdp->chgBus(c+201,(vlTOPp->R2MDC__DOT__r2Butterfly_8_wn_im),24);
        vcdp->chgBus(c+209,(vlTOPp->R2MDC__DOT__r2Butterfly_9_wn_im),24);
        vcdp->chgBus(c+217,(vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__add_result_re),24);
        vcdp->chgBus(c+225,(vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__add_result_im),24);
        vcdp->chgBus(c+233,(vlTOPp->R2MDC__DOT__r2Switch_5_out2_re),24);
        vcdp->chgBus(c+241,(vlTOPp->R2MDC__DOT__r2Switch_5_out2_im),24);
        vcdp->chgBus(c+249,(vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__add_result_re),24);
        vcdp->chgBus(c+257,(vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__add_result_im),24);
        vcdp->chgBus(c+265,(vlTOPp->R2MDC__DOT__r2Switch_6_out2_re),24);
        vcdp->chgBus(c+273,(vlTOPp->R2MDC__DOT__r2Switch_6_out2_im),24);
        vcdp->chgBus(c+281,(vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__add_result_re),24);
        vcdp->chgBus(c+289,(vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__add_result_im),24);
        vcdp->chgBus(c+297,(vlTOPp->R2MDC__DOT__r2Switch_7_out2_re),24);
        vcdp->chgBus(c+305,(vlTOPp->R2MDC__DOT__r2Switch_7_out2_im),24);
        vcdp->chgBus(c+313,(vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__add_result_re),24);
        vcdp->chgBus(c+321,(vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__add_result_im),24);
        vcdp->chgBus(c+329,(vlTOPp->R2MDC__DOT__r2Switch_8_out2_re),24);
        vcdp->chgBus(c+337,(vlTOPp->R2MDC__DOT__r2Switch_8_out2_im),24);
        vcdp->chgBus(c+345,(vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__add_result_re),24);
        vcdp->chgBus(c+353,(vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__add_result_im),24);
        vcdp->chgBus(c+361,(vlTOPp->R2MDC__DOT__r2Switch_9_out2_re),24);
        vcdp->chgBus(c+369,(vlTOPp->R2MDC__DOT__r2Switch_9_out2_im),24);
        vcdp->chgBus(c+377,(vlTOPp->R2MDC__DOT__out0_buf_6_re),24);
        vcdp->chgBus(c+385,(vlTOPp->R2MDC__DOT__out0_buf_6_im),24);
        vcdp->chgBus(c+393,(vlTOPp->R2MDC__DOT__out1_buf_6_re),24);
        vcdp->chgBus(c+401,(vlTOPp->R2MDC__DOT__out1_buf_6_im),24);
        vcdp->chgBus(c+409,(vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__sub_result_re),24);
        vcdp->chgBus(c+417,(vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__sub_result_im),24);
        vcdp->chgBus(c+425,(vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__sub_result_re),24);
        vcdp->chgBus(c+433,(vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__sub_result_im),24);
        vcdp->chgBus(c+441,(vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__sub_result_re),24);
        vcdp->chgBus(c+449,(vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__sub_result_im),24);
        vcdp->chgBus(c+457,(vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__sub_result_re),24);
        vcdp->chgBus(c+465,(vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__sub_result_im),24);
        vcdp->chgBus(c+473,(vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__sub_result_re),24);
        vcdp->chgBus(c+481,(vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__sub_result_im),24);
    }
}

void VR2MDC::traceChgThis__6(VR2MDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+489,((0xffffffU & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_1_port0))),24);
        vcdp->chgBus(c+497,((0xffffffU & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_2_port0))),24);
        vcdp->chgBus(c+505,((0xffffffU & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_3_port0))),24);
        vcdp->chgBus(c+513,((0xffffffU & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_4_port0))),24);
        vcdp->chgBus(c+521,((0xffffffU & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_5_port0))),24);
        vcdp->chgBus(c+529,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_31_re),24);
        vcdp->chgBus(c+537,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_31_im),24);
        vcdp->chgBus(c+545,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_15_re),24);
        vcdp->chgBus(c+553,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_15_im),24);
        vcdp->chgBus(c+561,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_15_re),24);
        vcdp->chgBus(c+569,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_15_im),24);
        vcdp->chgBus(c+577,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_7_re),24);
        vcdp->chgBus(c+585,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_7_im),24);
        vcdp->chgBus(c+593,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_7_re),24);
        vcdp->chgBus(c+601,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_7_im),24);
        vcdp->chgBus(c+609,(vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_3_re),24);
        vcdp->chgBus(c+617,(vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_3_im),24);
        vcdp->chgBus(c+625,(vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_3_re),24);
        vcdp->chgBus(c+633,(vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_3_im),24);
        vcdp->chgBus(c+641,(vlTOPp->R2MDC__DOT__shiftRegister_17__DOT__shift_reg_1_re),24);
        vcdp->chgBus(c+649,(vlTOPp->R2MDC__DOT__shiftRegister_17__DOT__shift_reg_1_im),24);
        vcdp->chgBus(c+657,(vlTOPp->R2MDC__DOT__shiftRegister_18__DOT__shift_reg_1_re),24);
        vcdp->chgBus(c+665,(vlTOPp->R2MDC__DOT__shiftRegister_18__DOT__shift_reg_1_im),24);
        vcdp->chgBus(c+673,(vlTOPp->R2MDC__DOT__shiftRegister_19__DOT__shift_reg_0_re),24);
        vcdp->chgBus(c+681,(vlTOPp->R2MDC__DOT__shiftRegister_19__DOT__shift_reg_0_im),24);
        vcdp->chgBit(c+689,(vlTOPp->R2MDC__DOT__reorder_1__DOT__sorted_valid_1_regNext));
        vcdp->chgBus(c+697,((0xffffffU & ((IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_3)
                                           ? (IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_ram_low_port1)
                                           : (IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_ram_high_port1)))),24);
        vcdp->chgBus(c+705,((0xffffffU & ((IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_3)
                                           ? (IData)(
                                                     (vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_ram_low_port1 
                                                      >> 0x18U))
                                           : (IData)(
                                                     (vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_ram_high_port1 
                                                      >> 0x18U))))),24);
        vcdp->chgBus(c+713,(vlTOPp->R2MDC__DOT__out1D1_re),24);
        vcdp->chgBus(c+721,(vlTOPp->R2MDC__DOT__out1D1_im),24);
        vcdp->chgBus(c+729,(vlTOPp->R2MDC__DOT__result_out1_regNext_re),24);
        vcdp->chgBus(c+737,(vlTOPp->R2MDC__DOT__result_out1_regNext_im),24);
        vcdp->chgBus(c+745,(vlTOPp->R2MDC__DOT__result_out2_regNext_re),24);
        vcdp->chgBus(c+753,(vlTOPp->R2MDC__DOT__result_out2_regNext_im),24);
        vcdp->chgBus(c+761,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_0_re),24);
        vcdp->chgBus(c+769,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_0_im),24);
        vcdp->chgBus(c+777,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_1_re),24);
        vcdp->chgBus(c+785,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_1_im),24);
        vcdp->chgBus(c+793,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_2_re),24);
        vcdp->chgBus(c+801,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_2_im),24);
        vcdp->chgBus(c+809,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_3_re),24);
        vcdp->chgBus(c+817,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_3_im),24);
        vcdp->chgBus(c+825,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_4_re),24);
        vcdp->chgBus(c+833,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_4_im),24);
        vcdp->chgBus(c+841,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_5_re),24);
        vcdp->chgBus(c+849,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_5_im),24);
        vcdp->chgBus(c+857,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_6_re),24);
        vcdp->chgBus(c+865,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_6_im),24);
        vcdp->chgBus(c+873,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_7_re),24);
        vcdp->chgBus(c+881,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_7_im),24);
        vcdp->chgBus(c+889,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_8_re),24);
        vcdp->chgBus(c+897,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_8_im),24);
        vcdp->chgBus(c+905,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_9_re),24);
        vcdp->chgBus(c+913,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_9_im),24);
        vcdp->chgBus(c+921,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_10_re),24);
        vcdp->chgBus(c+929,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_10_im),24);
        vcdp->chgBus(c+937,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_11_re),24);
        vcdp->chgBus(c+945,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_11_im),24);
        vcdp->chgBus(c+953,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_12_re),24);
        vcdp->chgBus(c+961,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_12_im),24);
        vcdp->chgBus(c+969,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_13_re),24);
        vcdp->chgBus(c+977,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_13_im),24);
        vcdp->chgBus(c+985,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_14_re),24);
        vcdp->chgBus(c+993,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_14_im),24);
        vcdp->chgBus(c+1001,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_15_re),24);
        vcdp->chgBus(c+1009,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_15_im),24);
        vcdp->chgBus(c+1017,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_16_re),24);
        vcdp->chgBus(c+1025,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_16_im),24);
        vcdp->chgBus(c+1033,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_17_re),24);
        vcdp->chgBus(c+1041,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_17_im),24);
        vcdp->chgBus(c+1049,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_18_re),24);
        vcdp->chgBus(c+1057,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_18_im),24);
        vcdp->chgBus(c+1065,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_19_re),24);
        vcdp->chgBus(c+1073,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_19_im),24);
        vcdp->chgBus(c+1081,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_20_re),24);
        vcdp->chgBus(c+1089,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_20_im),24);
        vcdp->chgBus(c+1097,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_21_re),24);
        vcdp->chgBus(c+1105,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_21_im),24);
        vcdp->chgBus(c+1113,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_22_re),24);
        vcdp->chgBus(c+1121,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_22_im),24);
        vcdp->chgBus(c+1129,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_23_re),24);
        vcdp->chgBus(c+1137,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_23_im),24);
        vcdp->chgBus(c+1145,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_24_re),24);
        vcdp->chgBus(c+1153,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_24_im),24);
        vcdp->chgBus(c+1161,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_25_re),24);
        vcdp->chgBus(c+1169,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_25_im),24);
        vcdp->chgBus(c+1177,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_26_re),24);
        vcdp->chgBus(c+1185,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_26_im),24);
        vcdp->chgBus(c+1193,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_27_re),24);
        vcdp->chgBus(c+1201,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_27_im),24);
        vcdp->chgBus(c+1209,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_28_re),24);
        vcdp->chgBus(c+1217,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_28_im),24);
        vcdp->chgBus(c+1225,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_29_re),24);
        vcdp->chgBus(c+1233,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_29_im),24);
        vcdp->chgBus(c+1241,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_30_re),24);
        vcdp->chgBus(c+1249,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_30_im),24);
        vcdp->chgBus(c+1257,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_0_re),24);
        vcdp->chgBus(c+1265,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_0_im),24);
        vcdp->chgBus(c+1273,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_1_re),24);
        vcdp->chgBus(c+1281,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_1_im),24);
        vcdp->chgBus(c+1289,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_2_re),24);
        vcdp->chgBus(c+1297,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_2_im),24);
        vcdp->chgBus(c+1305,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_3_re),24);
        vcdp->chgBus(c+1313,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_3_im),24);
        vcdp->chgBus(c+1321,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_4_re),24);
        vcdp->chgBus(c+1329,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_4_im),24);
        vcdp->chgBus(c+1337,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_5_re),24);
        vcdp->chgBus(c+1345,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_5_im),24);
        vcdp->chgBus(c+1353,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_6_re),24);
        vcdp->chgBus(c+1361,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_6_im),24);
        vcdp->chgBus(c+1369,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_7_re),24);
        vcdp->chgBus(c+1377,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_7_im),24);
        vcdp->chgBus(c+1385,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_8_re),24);
        vcdp->chgBus(c+1393,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_8_im),24);
        vcdp->chgBus(c+1401,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_9_re),24);
        vcdp->chgBus(c+1409,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_9_im),24);
        vcdp->chgBus(c+1417,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_10_re),24);
        vcdp->chgBus(c+1425,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_10_im),24);
        vcdp->chgBus(c+1433,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_11_re),24);
        vcdp->chgBus(c+1441,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_11_im),24);
        vcdp->chgBus(c+1449,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_12_re),24);
        vcdp->chgBus(c+1457,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_12_im),24);
        vcdp->chgBus(c+1465,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_13_re),24);
        vcdp->chgBus(c+1473,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_13_im),24);
        vcdp->chgBus(c+1481,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_14_re),24);
        vcdp->chgBus(c+1489,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_14_im),24);
        vcdp->chgBus(c+1497,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_0_re),24);
        vcdp->chgBus(c+1505,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_0_im),24);
        vcdp->chgBus(c+1513,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_1_re),24);
        vcdp->chgBus(c+1521,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_1_im),24);
        vcdp->chgBus(c+1529,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_2_re),24);
        vcdp->chgBus(c+1537,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_2_im),24);
        vcdp->chgBus(c+1545,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_3_re),24);
        vcdp->chgBus(c+1553,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_3_im),24);
        vcdp->chgBus(c+1561,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_4_re),24);
        vcdp->chgBus(c+1569,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_4_im),24);
        vcdp->chgBus(c+1577,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_5_re),24);
        vcdp->chgBus(c+1585,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_5_im),24);
        vcdp->chgBus(c+1593,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_6_re),24);
        vcdp->chgBus(c+1601,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_6_im),24);
        vcdp->chgBus(c+1609,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_7_re),24);
        vcdp->chgBus(c+1617,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_7_im),24);
        vcdp->chgBus(c+1625,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_8_re),24);
        vcdp->chgBus(c+1633,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_8_im),24);
        vcdp->chgBus(c+1641,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_9_re),24);
        vcdp->chgBus(c+1649,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_9_im),24);
        vcdp->chgBus(c+1657,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_10_re),24);
        vcdp->chgBus(c+1665,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_10_im),24);
        vcdp->chgBus(c+1673,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_11_re),24);
        vcdp->chgBus(c+1681,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_11_im),24);
        vcdp->chgBus(c+1689,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_12_re),24);
        vcdp->chgBus(c+1697,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_12_im),24);
        vcdp->chgBus(c+1705,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_13_re),24);
        vcdp->chgBus(c+1713,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_13_im),24);
        vcdp->chgBus(c+1721,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_14_re),24);
        vcdp->chgBus(c+1729,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_14_im),24);
        vcdp->chgBus(c+1737,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_0_re),24);
        vcdp->chgBus(c+1745,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_0_im),24);
        vcdp->chgBus(c+1753,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_1_re),24);
        vcdp->chgBus(c+1761,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_1_im),24);
        vcdp->chgBus(c+1769,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_2_re),24);
        vcdp->chgBus(c+1777,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_2_im),24);
        vcdp->chgBus(c+1785,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_3_re),24);
        vcdp->chgBus(c+1793,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_3_im),24);
        vcdp->chgBus(c+1801,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_4_re),24);
        vcdp->chgBus(c+1809,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_4_im),24);
        vcdp->chgBus(c+1817,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_5_re),24);
        vcdp->chgBus(c+1825,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_5_im),24);
        vcdp->chgBus(c+1833,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_6_re),24);
        vcdp->chgBus(c+1841,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_6_im),24);
        vcdp->chgBus(c+1849,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_0_re),24);
        vcdp->chgBus(c+1857,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_0_im),24);
        vcdp->chgBus(c+1865,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_1_re),24);
        vcdp->chgBus(c+1873,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_1_im),24);
        vcdp->chgBus(c+1881,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_2_re),24);
        vcdp->chgBus(c+1889,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_2_im),24);
        vcdp->chgBus(c+1897,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_3_re),24);
        vcdp->chgBus(c+1905,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_3_im),24);
        vcdp->chgBus(c+1913,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_4_re),24);
        vcdp->chgBus(c+1921,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_4_im),24);
        vcdp->chgBus(c+1929,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_5_re),24);
        vcdp->chgBus(c+1937,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_5_im),24);
        vcdp->chgBus(c+1945,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_6_re),24);
        vcdp->chgBus(c+1953,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_6_im),24);
        vcdp->chgBus(c+1961,(vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_0_re),24);
        vcdp->chgBus(c+1969,(vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_0_im),24);
        vcdp->chgBus(c+1977,(vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_1_re),24);
        vcdp->chgBus(c+1985,(vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_1_im),24);
        vcdp->chgBus(c+1993,(vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_2_re),24);
        vcdp->chgBus(c+2001,(vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_2_im),24);
        vcdp->chgBus(c+2009,(vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_0_re),24);
        vcdp->chgBus(c+2017,(vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_0_im),24);
        vcdp->chgBus(c+2025,(vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_1_re),24);
        vcdp->chgBus(c+2033,(vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_1_im),24);
        vcdp->chgBus(c+2041,(vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_2_re),24);
        vcdp->chgBus(c+2049,(vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_2_im),24);
        vcdp->chgBus(c+2057,(vlTOPp->R2MDC__DOT__shiftRegister_17__DOT__shift_reg_0_re),24);
        vcdp->chgBus(c+2065,(vlTOPp->R2MDC__DOT__shiftRegister_17__DOT__shift_reg_0_im),24);
        vcdp->chgBus(c+2073,(vlTOPp->R2MDC__DOT__shiftRegister_18__DOT__shift_reg_0_re),24);
        vcdp->chgBus(c+2081,(vlTOPp->R2MDC__DOT__shiftRegister_18__DOT__shift_reg_0_im),24);
        vcdp->chgQuad(c+2089,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[0]),48);
        vcdp->chgQuad(c+2091,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[1]),48);
        vcdp->chgQuad(c+2093,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[2]),48);
        vcdp->chgQuad(c+2095,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[3]),48);
        vcdp->chgQuad(c+2097,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[4]),48);
        vcdp->chgQuad(c+2099,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[5]),48);
        vcdp->chgQuad(c+2101,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[6]),48);
        vcdp->chgQuad(c+2103,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[7]),48);
        vcdp->chgQuad(c+2105,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[8]),48);
        vcdp->chgQuad(c+2107,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[9]),48);
        vcdp->chgQuad(c+2109,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[10]),48);
        vcdp->chgQuad(c+2111,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[11]),48);
        vcdp->chgQuad(c+2113,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[12]),48);
        vcdp->chgQuad(c+2115,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[13]),48);
        vcdp->chgQuad(c+2117,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[14]),48);
        vcdp->chgQuad(c+2119,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[15]),48);
        vcdp->chgQuad(c+2121,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[16]),48);
        vcdp->chgQuad(c+2123,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[17]),48);
        vcdp->chgQuad(c+2125,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[18]),48);
        vcdp->chgQuad(c+2127,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[19]),48);
        vcdp->chgQuad(c+2129,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[20]),48);
        vcdp->chgQuad(c+2131,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[21]),48);
        vcdp->chgQuad(c+2133,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[22]),48);
        vcdp->chgQuad(c+2135,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[23]),48);
        vcdp->chgQuad(c+2137,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[24]),48);
        vcdp->chgQuad(c+2139,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[25]),48);
        vcdp->chgQuad(c+2141,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[26]),48);
        vcdp->chgQuad(c+2143,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[27]),48);
        vcdp->chgQuad(c+2145,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[28]),48);
        vcdp->chgQuad(c+2147,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[29]),48);
        vcdp->chgQuad(c+2149,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[30]),48);
        vcdp->chgQuad(c+2151,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[31]),48);
        vcdp->chgQuad(c+2601,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[0]),48);
        vcdp->chgQuad(c+2603,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[1]),48);
        vcdp->chgQuad(c+2605,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[2]),48);
        vcdp->chgQuad(c+2607,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[3]),48);
        vcdp->chgQuad(c+2609,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[4]),48);
        vcdp->chgQuad(c+2611,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[5]),48);
        vcdp->chgQuad(c+2613,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[6]),48);
        vcdp->chgQuad(c+2615,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[7]),48);
        vcdp->chgQuad(c+2617,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[8]),48);
        vcdp->chgQuad(c+2619,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[9]),48);
        vcdp->chgQuad(c+2621,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[10]),48);
        vcdp->chgQuad(c+2623,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[11]),48);
        vcdp->chgQuad(c+2625,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[12]),48);
        vcdp->chgQuad(c+2627,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[13]),48);
        vcdp->chgQuad(c+2629,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[14]),48);
        vcdp->chgQuad(c+2631,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[15]),48);
        vcdp->chgQuad(c+2633,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[16]),48);
        vcdp->chgQuad(c+2635,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[17]),48);
        vcdp->chgQuad(c+2637,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[18]),48);
        vcdp->chgQuad(c+2639,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[19]),48);
        vcdp->chgQuad(c+2641,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[20]),48);
        vcdp->chgQuad(c+2643,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[21]),48);
        vcdp->chgQuad(c+2645,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[22]),48);
        vcdp->chgQuad(c+2647,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[23]),48);
        vcdp->chgQuad(c+2649,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[24]),48);
        vcdp->chgQuad(c+2651,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[25]),48);
        vcdp->chgQuad(c+2653,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[26]),48);
        vcdp->chgQuad(c+2655,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[27]),48);
        vcdp->chgQuad(c+2657,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[28]),48);
        vcdp->chgQuad(c+2659,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[29]),48);
        vcdp->chgQuad(c+2661,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[30]),48);
        vcdp->chgQuad(c+2663,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[31]),48);
    }
}

void VR2MDC::traceChgThis__8(VR2MDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3113,(((0U == (IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT__out_cnt)) 
                              & (IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT__sorted_valid_1_regNext))));
    }
}

void VR2MDC::traceChgThis__9(VR2MDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3121,((1U & ((IData)(vlTOPp->R2MDC__DOT__cnt) 
                                    >> 4U))));
        vcdp->chgBit(c+3129,((1U & ((IData)(vlTOPp->R2MDC__DOT__cnt) 
                                    >> 3U))));
        vcdp->chgBit(c+3137,((1U & ((IData)(vlTOPp->R2MDC__DOT__cnt) 
                                    >> 2U))));
        vcdp->chgBit(c+3145,((1U & ((IData)(vlTOPp->R2MDC__DOT__cnt) 
                                    >> 1U))));
        vcdp->chgBit(c+3153,((1U & (IData)(vlTOPp->R2MDC__DOT__cnt))));
        vcdp->chgBit(c+3161,((0x3fU < (IData)(vlTOPp->R2MDC__DOT__cnt))));
        vcdp->chgBus(c+3169,(vlTOPp->R2MDC__DOT__cnt),7);
        vcdp->chgBus(c+3177,((0x7fU & ((IData)(1U) 
                                       + (IData)(vlTOPp->R2MDC__DOT__cnt)))),7);
        vcdp->chgBus(c+3185,(vlTOPp->R2MDC__DOT__reorder_1__DOT__in_cnt),5);
        vcdp->chgBus(c+3193,(vlTOPp->R2MDC__DOT__reorder_1__DOT__out_cnt),6);
    }
}

void VR2MDC::traceChgThis__10(VR2MDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3201,(vlTOPp->mode));
        vcdp->chgBit(c+3209,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+3217,(vlTOPp->raw_data_ready));
        vcdp->chgBus(c+3225,(vlTOPp->raw_data_payload_re),24);
        vcdp->chgBus(c+3233,(vlTOPp->raw_data_payload_im),24);
        vcdp->chgBit(c+3241,(vlTOPp->result_valid));
        vcdp->chgBit(c+3249,(vlTOPp->result_payload_last));
        vcdp->chgBus(c+3257,(vlTOPp->result_payload_fragment_re),24);
        vcdp->chgBus(c+3265,(vlTOPp->result_payload_fragment_im),24);
        vcdp->chgBit(c+3273,(vlTOPp->clk));
        vcdp->chgBit(c+3281,(vlTOPp->reset));
        vcdp->chgBit(c+3289,(((IData)(vlTOPp->raw_data_valid) 
                              & (IData)(vlTOPp->raw_data_ready))));
        vcdp->chgBit(c+3297,((((IData)(vlTOPp->raw_data_valid) 
                               & (IData)(vlTOPp->raw_data_ready)) 
                              | (0x40U <= (IData)(vlTOPp->R2MDC__DOT__cnt)))));
        vcdp->chgBus(c+3305,(((IData)(vlTOPp->mode)
                               ? vlTOPp->R2MDC__DOT__out0_buf_6_re
                               : ((0xfc0000U & (VL_NEGATE_I((IData)(
                                                                    (1U 
                                                                     & (vlTOPp->R2MDC__DOT__out0_buf_6_re 
                                                                        >> 0x17U)))) 
                                                << 0x12U)) 
                                  | (0x3ffffU & (vlTOPp->R2MDC__DOT__out0_buf_6_re 
                                                 >> 6U))))),24);
        vcdp->chgBus(c+3313,(((IData)(vlTOPp->mode)
                               ? vlTOPp->R2MDC__DOT__out0_buf_6_im
                               : ((0xfc0000U & (VL_NEGATE_I((IData)(
                                                                    (1U 
                                                                     & (vlTOPp->R2MDC__DOT__out0_buf_6_im 
                                                                        >> 0x17U)))) 
                                                << 0x12U)) 
                                  | (0x3ffffU & (vlTOPp->R2MDC__DOT__out0_buf_6_im 
                                                 >> 6U))))),24);
        vcdp->chgBus(c+3321,(((IData)(vlTOPp->mode)
                               ? vlTOPp->R2MDC__DOT__out1_buf_6_re
                               : ((0xfc0000U & (VL_NEGATE_I((IData)(
                                                                    (1U 
                                                                     & (vlTOPp->R2MDC__DOT__out1_buf_6_re 
                                                                        >> 0x17U)))) 
                                                << 0x12U)) 
                                  | (0x3ffffU & (vlTOPp->R2MDC__DOT__out1_buf_6_re 
                                                 >> 6U))))),24);
        vcdp->chgBus(c+3329,(((IData)(vlTOPp->mode)
                               ? vlTOPp->R2MDC__DOT__out1_buf_6_im
                               : ((0xfc0000U & (VL_NEGATE_I((IData)(
                                                                    (1U 
                                                                     & (vlTOPp->R2MDC__DOT__out1_buf_6_im 
                                                                        >> 0x17U)))) 
                                                << 0x12U)) 
                                  | (0x3ffffU & (vlTOPp->R2MDC__DOT__out1_buf_6_im 
                                                 >> 6U))))),24);
    }
}
