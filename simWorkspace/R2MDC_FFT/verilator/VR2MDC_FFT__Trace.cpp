// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VR2MDC_FFT__Syms.h"


//======================

void VR2MDC_FFT::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VR2MDC_FFT* t = (VR2MDC_FFT*)userthis;
    VR2MDC_FFT__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VR2MDC_FFT::traceChgThis(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC_FFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 2U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity 
                                 | (vlTOPp->__Vm_traceActivity 
                                    >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                               >> 2U)) 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 3U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 3U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 1U) | (vlTOPp->__Vm_traceActivity 
                                          >> 2U))))) {
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VR2MDC_FFT::traceChgThis__2(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC_FFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__add_result_re),24);
        vcdp->chgBus(c+9,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__add_result_im),24);
        vcdp->chgBus(c+17,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__sub_result_re),24);
        vcdp->chgBus(c+25,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__sub_result_im),24);
    }
}

void VR2MDC_FFT::traceChgThis__3(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC_FFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+33,(((0x10U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
                             ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_15_re
                             : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__add_result_re)),24);
        vcdp->chgBus(c+41,(((0x10U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
                             ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_15_im
                             : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__add_result_im)),24);
        vcdp->chgBus(c+49,(((8U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
                             ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_7_re
                             : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__add_result_re)),24);
        vcdp->chgBus(c+57,(((8U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
                             ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_7_im
                             : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__add_result_im)),24);
        vcdp->chgBus(c+65,(((4U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
                             ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_3_re
                             : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__add_result_re)),24);
        vcdp->chgBus(c+73,(((4U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
                             ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_3_im
                             : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__add_result_im)),24);
        vcdp->chgBus(c+81,(((2U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
                             ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_17__DOT__shift_reg_1_re
                             : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__add_result_re)),24);
        vcdp->chgBus(c+89,(((2U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
                             ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_17__DOT__shift_reg_1_im
                             : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__add_result_im)),24);
        vcdp->chgBus(c+97,(((1U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
                             ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_19__DOT__shift_reg_0_re
                             : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__add_result_re)),24);
        vcdp->chgBus(c+105,(((1U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
                              ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_19__DOT__shift_reg_0_im
                              : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__add_result_im)),24);
    }
}

void VR2MDC_FFT::traceChgThis__4(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC_FFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+113,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                  & ((VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__sub_result_re)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_2_port0))))) 
                                                      - 
                                                      VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__sub_result_im)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6_wn_im)))) 
                                                     >> 0xbU))))),24);
        vcdp->chgBus(c+121,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                  & ((VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__sub_result_re)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6_wn_im))) 
                                                      + 
                                                      VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__sub_result_im)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_2_port0)))))) 
                                                     >> 0xbU))))),24);
        vcdp->chgBus(c+129,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                  & ((VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__sub_result_re)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_3_port0))))) 
                                                      - 
                                                      VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__sub_result_im)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7_wn_im)))) 
                                                     >> 0xbU))))),24);
        vcdp->chgBus(c+137,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                  & ((VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__sub_result_re)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7_wn_im))) 
                                                      + 
                                                      VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__sub_result_im)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_3_port0)))))) 
                                                     >> 0xbU))))),24);
        vcdp->chgBus(c+145,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                  & ((VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__sub_result_re)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_4_port0))))) 
                                                      - 
                                                      VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__sub_result_im)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8_wn_im)))) 
                                                     >> 0xbU))))),24);
        vcdp->chgBus(c+153,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                  & ((VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__sub_result_re)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8_wn_im))) 
                                                      + 
                                                      VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__sub_result_im)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_4_port0)))))) 
                                                     >> 0xbU))))),24);
        vcdp->chgBus(c+161,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                  & ((VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__sub_result_re)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_5_port0))))) 
                                                      - 
                                                      VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__sub_result_im)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9_wn_im)))) 
                                                     >> 0xbU))))),24);
        vcdp->chgBus(c+169,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                  & ((VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__sub_result_re)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9_wn_im))) 
                                                      + 
                                                      VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__sub_result_im)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_5_port0)))))) 
                                                     >> 0xbU))))),24);
    }
}

void VR2MDC_FFT::traceChgThis__5(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC_FFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+177,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                  & ((VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__sub_result_re)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_1_port0))))) 
                                                      - 
                                                      VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__sub_result_im)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5_wn_im)))) 
                                                     >> 0xbU))))),24);
        vcdp->chgBus(c+185,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                  & ((VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__sub_result_re)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5_wn_im))) 
                                                      + 
                                                      VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__sub_result_im)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_1_port0)))))) 
                                                     >> 0xbU))))),24);
    }
}

void VR2MDC_FFT::traceChgThis__6(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC_FFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+193,(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo_io_pop_ready));
        vcdp->chgBit(c+201,(((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo_io_pop_valid) 
                             & (IData)(vlTOPp->R2MDC_FFT__DOT__fifo_pop_en))));
        vcdp->chgBit(c+209,((1U & (~ (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+217,(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo_io_pop_valid));
        vcdp->chgBus(c+225,(((((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_ptrMatch)) 
                              << 7U) | (0x7fU & ((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_value))))),8);
        vcdp->chgBus(c+233,(((((~ (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_ptrMatch)) 
                              << 7U) | (0x7fU & ((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_value))))),8);
        vcdp->chgBit(c+241,(((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo_io_pop_valid) 
                             & (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo_io_pop_ready))));
        vcdp->chgBit(c+249,((0x40U <= ((((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_risingOccupancy) 
                                         & (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_ptrMatch)) 
                                        << 7U) | (0x7fU 
                                                  & ((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_value) 
                                                     - (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_value)))))));
        vcdp->chgBit(c+257,(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+265,(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_valueNext),7);
        vcdp->chgBit(c+273,(((0x7fU == (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+281,(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+289,(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popping));
        vcdp->chgBit(c+297,(((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+305,(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_full));
        vcdp->chgBus(c+313,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_5_out2_re),24);
        vcdp->chgBus(c+321,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_5_out2_im),24);
        vcdp->chgBus(c+329,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__add_result_re),24);
        vcdp->chgBus(c+337,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__add_result_im),24);
        vcdp->chgBus(c+345,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_6_out2_re),24);
        vcdp->chgBus(c+353,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_6_out2_im),24);
        vcdp->chgBus(c+361,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__add_result_re),24);
        vcdp->chgBus(c+369,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__add_result_im),24);
        vcdp->chgBus(c+377,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_7_out2_re),24);
        vcdp->chgBus(c+385,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_7_out2_im),24);
        vcdp->chgBus(c+393,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__add_result_re),24);
        vcdp->chgBus(c+401,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__add_result_im),24);
        vcdp->chgBus(c+409,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_8_out2_re),24);
        vcdp->chgBus(c+417,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_8_out2_im),24);
        vcdp->chgBus(c+425,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__add_result_re),24);
        vcdp->chgBus(c+433,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__add_result_im),24);
        vcdp->chgBus(c+441,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_9_out2_re),24);
        vcdp->chgBus(c+449,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_9_out2_im),24);
        vcdp->chgBit(c+457,((((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo_io_pop_valid) 
                              & (IData)(vlTOPp->R2MDC_FFT__DOT__fifo_pop_en)) 
                             & (0x40U > (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt)))));
        vcdp->chgBit(c+465,(((((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo_io_pop_valid) 
                               & (IData)(vlTOPp->R2MDC_FFT__DOT__fifo_pop_en)) 
                              & (0x40U > (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))) 
                             | (0x40U <= (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt)))));
        vcdp->chgBus(c+473,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out0_buf_6_re),24);
        vcdp->chgBus(c+481,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out0_buf_6_im),24);
        vcdp->chgBus(c+489,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out1_buf_6_re),24);
        vcdp->chgBus(c+497,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out1_buf_6_im),24);
        vcdp->chgBus(c+505,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__sub_result_re),24);
        vcdp->chgBus(c+513,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__sub_result_im),24);
        vcdp->chgBus(c+521,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__sub_result_re),24);
        vcdp->chgBus(c+529,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__sub_result_im),24);
        vcdp->chgBus(c+537,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__sub_result_re),24);
        vcdp->chgBus(c+545,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__sub_result_im),24);
        vcdp->chgBus(c+553,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__sub_result_re),24);
        vcdp->chgBus(c+561,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__sub_result_im),24);
        vcdp->chgBus(c+569,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__in_cnt_index),5);
        vcdp->chgBit(c+577,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__sorted_valid_1));
    }
}

void VR2MDC_FFT::traceChgThis__7(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC_FFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+585,(((0x7fU == (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+593,(((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popping))));
    }
}

void VR2MDC_FFT::traceChgThis__8(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC_FFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+601,(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+609,(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_valueNext),7);
        vcdp->chgBit(c+617,(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushing));
        vcdp->chgBus(c+625,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5_wn_im),24);
        vcdp->chgBus(c+633,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6_wn_im),24);
        vcdp->chgBus(c+641,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7_wn_im),24);
        vcdp->chgBus(c+649,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8_wn_im),24);
        vcdp->chgBus(c+657,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9_wn_im),24);
    }
}

void VR2MDC_FFT::traceChgThis__9(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC_FFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+665,((0xffffffU & (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT___zz_logic_ram_port0))),24);
        vcdp->chgBus(c+673,((0xffffffU & (IData)((vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT___zz_logic_ram_port0 
                                                  >> 0x18U)))),24);
        vcdp->chgBit(c+681,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__sorted_valid_1_regNext));
        vcdp->chgBus(c+689,((0xffffffU & ((IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_3)
                                           ? (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_ram_low_port1)
                                           : (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_ram_high_port1)))),24);
        vcdp->chgBus(c+697,((0xffffffU & ((IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_3)
                                           ? (IData)(
                                                     (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_ram_low_port1 
                                                      >> 0x18U))
                                           : (IData)(
                                                     (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_ram_high_port1 
                                                      >> 0x18U))))),24);
        vcdp->chgBus(c+705,((0xffffffU & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_1_port0))),24);
        vcdp->chgBus(c+713,((0xffffffU & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_2_port0))),24);
        vcdp->chgBus(c+721,((0xffffffU & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_3_port0))),24);
        vcdp->chgBus(c+729,((0xffffffU & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_4_port0))),24);
        vcdp->chgBus(c+737,((0xffffffU & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_5_port0))),24);
        vcdp->chgBus(c+745,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_31_re),24);
        vcdp->chgBus(c+753,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_31_im),24);
        vcdp->chgBus(c+761,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_15_re),24);
        vcdp->chgBus(c+769,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_15_im),24);
        vcdp->chgBus(c+777,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_15_re),24);
        vcdp->chgBus(c+785,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_15_im),24);
        vcdp->chgBus(c+793,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_7_re),24);
        vcdp->chgBus(c+801,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_7_im),24);
        vcdp->chgBus(c+809,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_7_re),24);
        vcdp->chgBus(c+817,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_7_im),24);
        vcdp->chgBus(c+825,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_3_re),24);
        vcdp->chgBus(c+833,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_3_im),24);
        vcdp->chgBus(c+841,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_3_re),24);
        vcdp->chgBus(c+849,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_3_im),24);
        vcdp->chgBus(c+857,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_17__DOT__shift_reg_1_re),24);
        vcdp->chgBus(c+865,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_17__DOT__shift_reg_1_im),24);
        vcdp->chgBus(c+873,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_18__DOT__shift_reg_1_re),24);
        vcdp->chgBus(c+881,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_18__DOT__shift_reg_1_im),24);
        vcdp->chgBus(c+889,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_19__DOT__shift_reg_0_re),24);
        vcdp->chgBus(c+897,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_19__DOT__shift_reg_0_im),24);
        vcdp->chgBus(c+905,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out1D1_re),24);
        vcdp->chgBus(c+913,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out1D1_im),24);
        vcdp->chgBus(c+921,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__result_out1_regNext_re),24);
        vcdp->chgBus(c+929,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__result_out1_regNext_im),24);
        vcdp->chgBus(c+937,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__result_out2_regNext_re),24);
        vcdp->chgBus(c+945,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__result_out2_regNext_im),24);
        vcdp->chgBus(c+953,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_0_re),24);
        vcdp->chgBus(c+961,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_0_im),24);
        vcdp->chgBus(c+969,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_1_re),24);
        vcdp->chgBus(c+977,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_1_im),24);
        vcdp->chgBus(c+985,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_2_re),24);
        vcdp->chgBus(c+993,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_2_im),24);
        vcdp->chgBus(c+1001,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_3_re),24);
        vcdp->chgBus(c+1009,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_3_im),24);
        vcdp->chgBus(c+1017,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_4_re),24);
        vcdp->chgBus(c+1025,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_4_im),24);
        vcdp->chgBus(c+1033,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_5_re),24);
        vcdp->chgBus(c+1041,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_5_im),24);
        vcdp->chgBus(c+1049,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_6_re),24);
        vcdp->chgBus(c+1057,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_6_im),24);
        vcdp->chgBus(c+1065,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_7_re),24);
        vcdp->chgBus(c+1073,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_7_im),24);
        vcdp->chgBus(c+1081,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_8_re),24);
        vcdp->chgBus(c+1089,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_8_im),24);
        vcdp->chgBus(c+1097,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_9_re),24);
        vcdp->chgBus(c+1105,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_9_im),24);
        vcdp->chgBus(c+1113,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_10_re),24);
        vcdp->chgBus(c+1121,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_10_im),24);
        vcdp->chgBus(c+1129,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_11_re),24);
        vcdp->chgBus(c+1137,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_11_im),24);
        vcdp->chgBus(c+1145,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_12_re),24);
        vcdp->chgBus(c+1153,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_12_im),24);
        vcdp->chgBus(c+1161,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_13_re),24);
        vcdp->chgBus(c+1169,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_13_im),24);
        vcdp->chgBus(c+1177,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_14_re),24);
        vcdp->chgBus(c+1185,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_14_im),24);
        vcdp->chgBus(c+1193,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_15_re),24);
        vcdp->chgBus(c+1201,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_15_im),24);
        vcdp->chgBus(c+1209,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_16_re),24);
        vcdp->chgBus(c+1217,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_16_im),24);
        vcdp->chgBus(c+1225,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_17_re),24);
        vcdp->chgBus(c+1233,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_17_im),24);
        vcdp->chgBus(c+1241,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_18_re),24);
        vcdp->chgBus(c+1249,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_18_im),24);
        vcdp->chgBus(c+1257,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_19_re),24);
        vcdp->chgBus(c+1265,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_19_im),24);
        vcdp->chgBus(c+1273,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_20_re),24);
        vcdp->chgBus(c+1281,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_20_im),24);
        vcdp->chgBus(c+1289,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_21_re),24);
        vcdp->chgBus(c+1297,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_21_im),24);
        vcdp->chgBus(c+1305,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_22_re),24);
        vcdp->chgBus(c+1313,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_22_im),24);
        vcdp->chgBus(c+1321,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_23_re),24);
        vcdp->chgBus(c+1329,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_23_im),24);
        vcdp->chgBus(c+1337,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_24_re),24);
        vcdp->chgBus(c+1345,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_24_im),24);
        vcdp->chgBus(c+1353,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_25_re),24);
        vcdp->chgBus(c+1361,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_25_im),24);
        vcdp->chgBus(c+1369,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_26_re),24);
        vcdp->chgBus(c+1377,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_26_im),24);
        vcdp->chgBus(c+1385,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_27_re),24);
        vcdp->chgBus(c+1393,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_27_im),24);
        vcdp->chgBus(c+1401,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_28_re),24);
        vcdp->chgBus(c+1409,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_28_im),24);
        vcdp->chgBus(c+1417,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_29_re),24);
        vcdp->chgBus(c+1425,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_29_im),24);
        vcdp->chgBus(c+1433,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_30_re),24);
        vcdp->chgBus(c+1441,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_30_im),24);
        vcdp->chgBus(c+1449,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_0_re),24);
        vcdp->chgBus(c+1457,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_0_im),24);
        vcdp->chgBus(c+1465,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_1_re),24);
        vcdp->chgBus(c+1473,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_1_im),24);
        vcdp->chgBus(c+1481,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_2_re),24);
        vcdp->chgBus(c+1489,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_2_im),24);
        vcdp->chgBus(c+1497,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_3_re),24);
        vcdp->chgBus(c+1505,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_3_im),24);
        vcdp->chgBus(c+1513,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_4_re),24);
        vcdp->chgBus(c+1521,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_4_im),24);
        vcdp->chgBus(c+1529,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_5_re),24);
        vcdp->chgBus(c+1537,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_5_im),24);
        vcdp->chgBus(c+1545,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_6_re),24);
        vcdp->chgBus(c+1553,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_6_im),24);
        vcdp->chgBus(c+1561,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_7_re),24);
        vcdp->chgBus(c+1569,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_7_im),24);
        vcdp->chgBus(c+1577,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_8_re),24);
        vcdp->chgBus(c+1585,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_8_im),24);
        vcdp->chgBus(c+1593,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_9_re),24);
        vcdp->chgBus(c+1601,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_9_im),24);
        vcdp->chgBus(c+1609,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_10_re),24);
        vcdp->chgBus(c+1617,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_10_im),24);
        vcdp->chgBus(c+1625,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_11_re),24);
        vcdp->chgBus(c+1633,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_11_im),24);
        vcdp->chgBus(c+1641,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_12_re),24);
        vcdp->chgBus(c+1649,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_12_im),24);
        vcdp->chgBus(c+1657,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_13_re),24);
        vcdp->chgBus(c+1665,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_13_im),24);
        vcdp->chgBus(c+1673,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_14_re),24);
        vcdp->chgBus(c+1681,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_14_im),24);
        vcdp->chgBus(c+1689,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_0_re),24);
        vcdp->chgBus(c+1697,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_0_im),24);
        vcdp->chgBus(c+1705,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_1_re),24);
        vcdp->chgBus(c+1713,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_1_im),24);
        vcdp->chgBus(c+1721,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_2_re),24);
        vcdp->chgBus(c+1729,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_2_im),24);
        vcdp->chgBus(c+1737,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_3_re),24);
        vcdp->chgBus(c+1745,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_3_im),24);
        vcdp->chgBus(c+1753,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_4_re),24);
        vcdp->chgBus(c+1761,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_4_im),24);
        vcdp->chgBus(c+1769,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_5_re),24);
        vcdp->chgBus(c+1777,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_5_im),24);
        vcdp->chgBus(c+1785,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_6_re),24);
        vcdp->chgBus(c+1793,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_6_im),24);
        vcdp->chgBus(c+1801,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_7_re),24);
        vcdp->chgBus(c+1809,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_7_im),24);
        vcdp->chgBus(c+1817,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_8_re),24);
        vcdp->chgBus(c+1825,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_8_im),24);
        vcdp->chgBus(c+1833,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_9_re),24);
        vcdp->chgBus(c+1841,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_9_im),24);
        vcdp->chgBus(c+1849,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_10_re),24);
        vcdp->chgBus(c+1857,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_10_im),24);
        vcdp->chgBus(c+1865,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_11_re),24);
        vcdp->chgBus(c+1873,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_11_im),24);
        vcdp->chgBus(c+1881,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_12_re),24);
        vcdp->chgBus(c+1889,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_12_im),24);
        vcdp->chgBus(c+1897,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_13_re),24);
        vcdp->chgBus(c+1905,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_13_im),24);
        vcdp->chgBus(c+1913,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_14_re),24);
        vcdp->chgBus(c+1921,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_14_im),24);
        vcdp->chgBus(c+1929,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_0_re),24);
        vcdp->chgBus(c+1937,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_0_im),24);
        vcdp->chgBus(c+1945,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_1_re),24);
        vcdp->chgBus(c+1953,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_1_im),24);
        vcdp->chgBus(c+1961,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_2_re),24);
        vcdp->chgBus(c+1969,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_2_im),24);
        vcdp->chgBus(c+1977,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_3_re),24);
        vcdp->chgBus(c+1985,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_3_im),24);
        vcdp->chgBus(c+1993,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_4_re),24);
        vcdp->chgBus(c+2001,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_4_im),24);
        vcdp->chgBus(c+2009,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_5_re),24);
        vcdp->chgBus(c+2017,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_5_im),24);
        vcdp->chgBus(c+2025,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_6_re),24);
        vcdp->chgBus(c+2033,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_6_im),24);
        vcdp->chgBus(c+2041,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_0_re),24);
        vcdp->chgBus(c+2049,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_0_im),24);
        vcdp->chgBus(c+2057,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_1_re),24);
        vcdp->chgBus(c+2065,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_1_im),24);
        vcdp->chgBus(c+2073,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_2_re),24);
        vcdp->chgBus(c+2081,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_2_im),24);
        vcdp->chgBus(c+2089,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_3_re),24);
        vcdp->chgBus(c+2097,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_3_im),24);
        vcdp->chgBus(c+2105,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_4_re),24);
        vcdp->chgBus(c+2113,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_4_im),24);
        vcdp->chgBus(c+2121,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_5_re),24);
        vcdp->chgBus(c+2129,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_5_im),24);
        vcdp->chgBus(c+2137,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_6_re),24);
        vcdp->chgBus(c+2145,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_6_im),24);
        vcdp->chgBus(c+2153,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_0_re),24);
        vcdp->chgBus(c+2161,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_0_im),24);
        vcdp->chgBus(c+2169,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_1_re),24);
        vcdp->chgBus(c+2177,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_1_im),24);
        vcdp->chgBus(c+2185,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_2_re),24);
        vcdp->chgBus(c+2193,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_2_im),24);
        vcdp->chgBus(c+2201,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_0_re),24);
        vcdp->chgBus(c+2209,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_0_im),24);
        vcdp->chgBus(c+2217,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_1_re),24);
        vcdp->chgBus(c+2225,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_1_im),24);
        vcdp->chgBus(c+2233,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_2_re),24);
        vcdp->chgBus(c+2241,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_2_im),24);
        vcdp->chgBus(c+2249,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_17__DOT__shift_reg_0_re),24);
        vcdp->chgBus(c+2257,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_17__DOT__shift_reg_0_im),24);
        vcdp->chgBus(c+2265,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_18__DOT__shift_reg_0_re),24);
        vcdp->chgBus(c+2273,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_18__DOT__shift_reg_0_im),24);
        vcdp->chgQuad(c+2281,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[0]),48);
        vcdp->chgQuad(c+2283,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[1]),48);
        vcdp->chgQuad(c+2285,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[2]),48);
        vcdp->chgQuad(c+2287,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[3]),48);
        vcdp->chgQuad(c+2289,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[4]),48);
        vcdp->chgQuad(c+2291,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[5]),48);
        vcdp->chgQuad(c+2293,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[6]),48);
        vcdp->chgQuad(c+2295,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[7]),48);
        vcdp->chgQuad(c+2297,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[8]),48);
        vcdp->chgQuad(c+2299,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[9]),48);
        vcdp->chgQuad(c+2301,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[10]),48);
        vcdp->chgQuad(c+2303,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[11]),48);
        vcdp->chgQuad(c+2305,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[12]),48);
        vcdp->chgQuad(c+2307,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[13]),48);
        vcdp->chgQuad(c+2309,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[14]),48);
        vcdp->chgQuad(c+2311,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[15]),48);
        vcdp->chgQuad(c+2313,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[16]),48);
        vcdp->chgQuad(c+2315,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[17]),48);
        vcdp->chgQuad(c+2317,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[18]),48);
        vcdp->chgQuad(c+2319,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[19]),48);
        vcdp->chgQuad(c+2321,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[20]),48);
        vcdp->chgQuad(c+2323,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[21]),48);
        vcdp->chgQuad(c+2325,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[22]),48);
        vcdp->chgQuad(c+2327,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[23]),48);
        vcdp->chgQuad(c+2329,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[24]),48);
        vcdp->chgQuad(c+2331,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[25]),48);
        vcdp->chgQuad(c+2333,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[26]),48);
        vcdp->chgQuad(c+2335,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[27]),48);
        vcdp->chgQuad(c+2337,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[28]),48);
        vcdp->chgQuad(c+2339,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[29]),48);
        vcdp->chgQuad(c+2341,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[30]),48);
        vcdp->chgQuad(c+2343,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[31]),48);
        vcdp->chgQuad(c+2793,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[0]),48);
        vcdp->chgQuad(c+2795,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[1]),48);
        vcdp->chgQuad(c+2797,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[2]),48);
        vcdp->chgQuad(c+2799,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[3]),48);
        vcdp->chgQuad(c+2801,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[4]),48);
        vcdp->chgQuad(c+2803,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[5]),48);
        vcdp->chgQuad(c+2805,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[6]),48);
        vcdp->chgQuad(c+2807,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[7]),48);
        vcdp->chgQuad(c+2809,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[8]),48);
        vcdp->chgQuad(c+2811,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[9]),48);
        vcdp->chgQuad(c+2813,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[10]),48);
        vcdp->chgQuad(c+2815,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[11]),48);
        vcdp->chgQuad(c+2817,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[12]),48);
        vcdp->chgQuad(c+2819,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[13]),48);
        vcdp->chgQuad(c+2821,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[14]),48);
        vcdp->chgQuad(c+2823,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[15]),48);
        vcdp->chgQuad(c+2825,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[16]),48);
        vcdp->chgQuad(c+2827,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[17]),48);
        vcdp->chgQuad(c+2829,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[18]),48);
        vcdp->chgQuad(c+2831,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[19]),48);
        vcdp->chgQuad(c+2833,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[20]),48);
        vcdp->chgQuad(c+2835,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[21]),48);
        vcdp->chgQuad(c+2837,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[22]),48);
        vcdp->chgQuad(c+2839,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[23]),48);
        vcdp->chgQuad(c+2841,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[24]),48);
        vcdp->chgQuad(c+2843,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[25]),48);
        vcdp->chgQuad(c+2845,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[26]),48);
        vcdp->chgQuad(c+2847,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[27]),48);
        vcdp->chgQuad(c+2849,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[28]),48);
        vcdp->chgQuad(c+2851,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[29]),48);
        vcdp->chgQuad(c+2853,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[30]),48);
        vcdp->chgQuad(c+2855,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[31]),48);
    }
}

void VR2MDC_FFT::traceChgThis__11(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC_FFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3305,(((0U == (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__out_cnt)) 
                              & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__sorted_valid_1_regNext))));
    }
}

void VR2MDC_FFT::traceChgThis__12(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC_FFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3313,((0x40U > (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))));
        vcdp->chgBit(c+3321,(vlTOPp->R2MDC_FFT__DOT__fifo_pop_en));
        vcdp->chgBus(c+3329,(vlTOPp->R2MDC_FFT__DOT__pop_cnt),6);
        vcdp->chgBit(c+3337,((0x3fU == (IData)(vlTOPp->R2MDC_FFT__DOT__pop_cnt))));
        vcdp->chgBus(c+3345,(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_value),7);
        vcdp->chgBit(c+3353,((0x7fU == (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+3361,(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_value),7);
        vcdp->chgBit(c+3369,((0x7fU == (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+3377,(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+3385,((0x7fU & ((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_value)))),7);
        vcdp->chgBit(c+3393,((1U & ((IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt) 
                                    >> 4U))));
        vcdp->chgBit(c+3401,((1U & ((IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt) 
                                    >> 3U))));
        vcdp->chgBit(c+3409,((1U & ((IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt) 
                                    >> 2U))));
        vcdp->chgBit(c+3417,((1U & ((IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt) 
                                    >> 1U))));
        vcdp->chgBit(c+3425,((1U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))));
        vcdp->chgBit(c+3433,((0x3fU < (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))));
        vcdp->chgBus(c+3441,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt),7);
        vcdp->chgBus(c+3449,((0x7fU & ((IData)(1U) 
                                       + (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt)))),7);
        vcdp->chgBus(c+3457,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__in_cnt),5);
        vcdp->chgBus(c+3465,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__out_cnt),6);
    }
}

void VR2MDC_FFT::traceChgThis__13(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC_FFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3473,(vlTOPp->mode));
        vcdp->chgBit(c+3481,(vlTOPp->raw_data_iq_valid));
        vcdp->chgBit(c+3489,(vlTOPp->raw_data_iq_ready));
        vcdp->chgBus(c+3497,(vlTOPp->raw_data_iq_payload_cha_i),24);
        vcdp->chgBus(c+3505,(vlTOPp->raw_data_iq_payload_cha_q),24);
        vcdp->chgBit(c+3513,(vlTOPp->result_iq_valid));
        vcdp->chgBit(c+3521,(vlTOPp->result_iq_payload_last));
        vcdp->chgBus(c+3529,(vlTOPp->result_iq_payload_fragment_cha_i),24);
        vcdp->chgBus(c+3537,(vlTOPp->result_iq_payload_fragment_cha_q),24);
        vcdp->chgBit(c+3545,(vlTOPp->clk));
        vcdp->chgBit(c+3553,(vlTOPp->reset));
        vcdp->chgBus(c+3561,(((IData)(vlTOPp->mode)
                               ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out0_buf_6_re
                               : ((0xfc0000U & (VL_NEGATE_I((IData)(
                                                                    (1U 
                                                                     & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out0_buf_6_re 
                                                                        >> 0x17U)))) 
                                                << 0x12U)) 
                                  | (0x3ffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out0_buf_6_re 
                                                 >> 6U))))),24);
        vcdp->chgBus(c+3569,(((IData)(vlTOPp->mode)
                               ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out0_buf_6_im
                               : ((0xfc0000U & (VL_NEGATE_I((IData)(
                                                                    (1U 
                                                                     & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out0_buf_6_im 
                                                                        >> 0x17U)))) 
                                                << 0x12U)) 
                                  | (0x3ffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out0_buf_6_im 
                                                 >> 6U))))),24);
        vcdp->chgBus(c+3577,(((IData)(vlTOPp->mode)
                               ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out1_buf_6_re
                               : ((0xfc0000U & (VL_NEGATE_I((IData)(
                                                                    (1U 
                                                                     & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out1_buf_6_re 
                                                                        >> 0x17U)))) 
                                                << 0x12U)) 
                                  | (0x3ffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out1_buf_6_re 
                                                 >> 6U))))),24);
        vcdp->chgBus(c+3585,(((IData)(vlTOPp->mode)
                               ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out1_buf_6_im
                               : ((0xfc0000U & (VL_NEGATE_I((IData)(
                                                                    (1U 
                                                                     & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out1_buf_6_im 
                                                                        >> 0x17U)))) 
                                                << 0x12U)) 
                                  | (0x3ffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out1_buf_6_im 
                                                 >> 6U))))),24);
    }
}
