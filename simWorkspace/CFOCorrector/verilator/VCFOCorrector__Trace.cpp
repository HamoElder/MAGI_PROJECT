// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCFOCorrector__Syms.h"


//======================

void VCFOCorrector::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCFOCorrector* t = (VCFOCorrector*)userthis;
    VCFOCorrector__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VCFOCorrector::traceChgThis(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
                                              >> 3U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 2U) | (vlTOPp->__Vm_traceActivity 
                                          >> 3U))))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCFOCorrector::traceChgThis__2(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp43[3];
    WData/*95:0*/ __Vtemp44[3];
    // Body
    {
        vcdp->chgBus(c+1,((0xffffU & ((1U & (IData)(
                                                    (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                     >> 0x29U)))
                                       ? ((0x7ffffffU 
                                           != (0x7ffffffU 
                                               & (IData)(
                                                         (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                          >> 0xfU))))
                                           ? 0x8000U
                                           : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))
                                       : ((0U != (0x3ffffffU 
                                                  & (IData)(
                                                            (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                             >> 0xfU))))
                                           ? 0x7fffU
                                           : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))))),16);
        __Vtemp43[0U] = 0xffe00000U;
        __Vtemp43[1U] = 0xffffffffU;
        __Vtemp43[2U] = 1U;
        VL_ADD_W(3, __Vtemp44, __Vtemp43, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_delta_phi_payload_4);
        vcdp->chgBit(c+9,((1U & __Vtemp44[2U])));
        vcdp->chgBit(c+17,((0U != (0x3fffffU & ((IData)(0x200000U) 
                                                + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_delta_phi_payload_4[0U])))));
        vcdp->chgBit(c+25,((1U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload 
                                          >> 0x2aU)))));
        vcdp->chgBit(c+33,((3U != (3U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload 
                                                 >> 0x29U))))));
        vcdp->chgBit(c+41,((1U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload 
                                          >> 0x29U)))));
        vcdp->chgBit(c+49,((1U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                          >> 0x29U)))));
        vcdp->chgBit(c+57,((0x7ffffffU != (0x7ffffffU 
                                           & (IData)(
                                                     (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                      >> 0xfU))))));
        vcdp->chgBit(c+65,((0U != (0x3ffffffU & (IData)(
                                                        (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                         >> 0xfU))))));
    }
}

void VCFOCorrector::traceChgThis__3(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+73,((0xffffU & (VL_LTS_III(1,16,16, 0x64U, 
                                                  (0xffffU 
                                                   & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi) 
                                                      + 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                   >> 0x29U)))
                                                        ? 
                                                       ((0x7ffffffU 
                                                         != 
                                                         (0x7ffffffU 
                                                          & (IData)(
                                                                    (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                     >> 0xfU))))
                                                         ? 0x8000U
                                                         : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))
                                                        : 
                                                       ((0U 
                                                         != 
                                                         (0x3ffffffU 
                                                          & (IData)(
                                                                    (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                     >> 0xfU))))
                                                         ? 0x7fffU
                                                         : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))))))
                                        ? (((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi) 
                                            - (IData)(0xc9U)) 
                                           + ((1U & (IData)(
                                                            (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                             >> 0x29U)))
                                               ? ((0x7ffffffU 
                                                   != 
                                                   (0x7ffffffU 
                                                    & (IData)(
                                                              (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                               >> 0xfU))))
                                                   ? 0x8000U
                                                   : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))
                                               : ((0U 
                                                   != 
                                                   (0x3ffffffU 
                                                    & (IData)(
                                                              (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                               >> 0xfU))))
                                                   ? 0x7fffU
                                                   : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))))
                                        : (VL_GTS_III(1,16,16, 0xff9cU, 
                                                      (0xffffU 
                                                       & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi) 
                                                          + 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                       >> 0x29U)))
                                                            ? 
                                                           ((0x7ffffffU 
                                                             != 
                                                             (0x7ffffffU 
                                                              & (IData)(
                                                                        (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                         >> 0xfU))))
                                                             ? 0x8000U
                                                             : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))
                                                            : 
                                                           ((0U 
                                                             != 
                                                             (0x3ffffffU 
                                                              & (IData)(
                                                                        (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                         >> 0xfU))))
                                                             ? 0x7fffU
                                                             : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))))))
                                            ? ((IData)(0xc9U) 
                                               + ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                               >> 0x29U)))
                                                    ? 
                                                   ((0x7ffffffU 
                                                     != 
                                                     (0x7ffffffU 
                                                      & (IData)(
                                                                (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                 >> 0xfU))))
                                                     ? 0x8000U
                                                     : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))
                                                    : 
                                                   ((0U 
                                                     != 
                                                     (0x3ffffffU 
                                                      & (IData)(
                                                                (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                 >> 0xfU))))
                                                     ? 0x7fffU
                                                     : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7)))))
                                            : ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                              >> 0x29U)))
                                                   ? 
                                                  ((0x7ffffffU 
                                                    != 
                                                    (0x7ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                >> 0xfU))))
                                                    ? 0x8000U
                                                    : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))
                                                   : 
                                                  ((0U 
                                                    != 
                                                    (0x3ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                >> 0xfU))))
                                                    ? 0x7fffU
                                                    : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7)))))))),16);
        vcdp->chgBit(c+81,(VL_LTS_III(1,16,16, 0x64U, 
                                      (0xffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                               >> 0x29U)))
                                                    ? 
                                                   ((0x7ffffffU 
                                                     != 
                                                     (0x7ffffffU 
                                                      & (IData)(
                                                                (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                 >> 0xfU))))
                                                     ? 0x8000U
                                                     : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))
                                                    : 
                                                   ((0U 
                                                     != 
                                                     (0x3ffffffU 
                                                      & (IData)(
                                                                (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                 >> 0xfU))))
                                                     ? 0x7fffU
                                                     : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))))))));
        vcdp->chgBit(c+89,(VL_GTS_III(1,16,16, 0xff9cU, 
                                      (0xffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                               >> 0x29U)))
                                                    ? 
                                                   ((0x7ffffffU 
                                                     != 
                                                     (0x7ffffffU 
                                                      & (IData)(
                                                                (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                 >> 0xfU))))
                                                     ? 0x8000U
                                                     : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))
                                                    : 
                                                   ((0U 
                                                     != 
                                                     (0x3ffffffU 
                                                      & (IData)(
                                                                (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                 >> 0xfU))))
                                                     ? 0x7fffU
                                                     : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))))))));
    }
}

void VCFOCorrector::traceChgThis__4(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+97,(vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid));
    }
}

void VCFOCorrector::traceChgThis__5(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+105,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1),32);
    }
}

void VCFOCorrector::traceChgThis__6(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+113,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z),16);
        vcdp->chgBus(c+121,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15),32);
        vcdp->chgBus(c+129,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_y),32);
        vcdp->chgBus(c+137,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z),32);
        vcdp->chgQuad(c+145,(VL_MULS_QQQ(64,64,64, VL_ULL(0x1000), 
                                         VL_EXTENDS_QI(64,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z))),64);
    }
}

void VCFOCorrector::traceChgThis__7(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+161,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_15));
        vcdp->chgBit(c+169,(((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_15) 
                             & (0x50U == (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__impluse_cnt)))));
        vcdp->chgBus(c+177,(VL_NEGATE_I(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q)),32);
        vcdp->chgBit(c+185,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1));
        vcdp->chgBus(c+193,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i),32);
        vcdp->chgBus(c+201,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q),32);
        vcdp->chgBit(c+209,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_15));
        vcdp->chgBus(c+217,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__impluse_cnt),7);
        vcdp->chgBit(c+225,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_63_valid));
        vcdp->chgBus(c+233,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_63_payload_cha_i),16);
        vcdp->chgBus(c+241,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_63_payload_cha_q),16);
        vcdp->chgBit(c+249,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_valid));
        vcdp->chgBus(c+257,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_i),16);
        vcdp->chgBus(c+265,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_q),16);
        vcdp->chgBit(c+273,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_valid));
        vcdp->chgBus(c+281,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_i),16);
        vcdp->chgBus(c+289,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_q),16);
        vcdp->chgBit(c+297,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_valid));
        vcdp->chgBus(c+305,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_i),16);
        vcdp->chgBus(c+313,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_q),16);
        vcdp->chgBit(c+321,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_valid));
        vcdp->chgBus(c+329,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_i),16);
        vcdp->chgBus(c+337,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_q),16);
        vcdp->chgBit(c+345,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_valid));
        vcdp->chgBus(c+353,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_i),16);
        vcdp->chgBus(c+361,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_q),16);
        vcdp->chgBit(c+369,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_valid));
        vcdp->chgBus(c+377,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_i),16);
        vcdp->chgBus(c+385,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_q),16);
        vcdp->chgBit(c+393,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_valid));
        vcdp->chgBus(c+401,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_i),16);
        vcdp->chgBus(c+409,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_q),16);
        vcdp->chgBit(c+417,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_valid));
        vcdp->chgBus(c+425,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_i),16);
        vcdp->chgBus(c+433,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_q),16);
        vcdp->chgBit(c+441,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_valid));
        vcdp->chgBus(c+449,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_i),16);
        vcdp->chgBus(c+457,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_q),16);
        vcdp->chgBit(c+465,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_valid));
        vcdp->chgBus(c+473,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_i),16);
        vcdp->chgBus(c+481,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_q),16);
        vcdp->chgBit(c+489,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_valid));
        vcdp->chgBus(c+497,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_i),16);
        vcdp->chgBus(c+505,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_q),16);
        vcdp->chgBit(c+513,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_valid));
        vcdp->chgBus(c+521,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_i),16);
        vcdp->chgBus(c+529,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_q),16);
        vcdp->chgBit(c+537,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_valid));
        vcdp->chgBus(c+545,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_i),16);
        vcdp->chgBus(c+553,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_q),16);
        vcdp->chgBit(c+561,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_valid));
        vcdp->chgBus(c+569,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_i),16);
        vcdp->chgBus(c+577,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_q),16);
        vcdp->chgBit(c+585,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_valid));
        vcdp->chgBus(c+593,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_i),16);
        vcdp->chgBus(c+601,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_q),16);
        vcdp->chgBit(c+609,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_valid));
        vcdp->chgBus(c+617,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i),16);
        vcdp->chgBus(c+625,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_q),16);
        vcdp->chgBit(c+633,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_16_valid));
        vcdp->chgBus(c+641,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_16_payload_cha_i),16);
        vcdp->chgBus(c+649,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_16_payload_cha_q),16);
        vcdp->chgBit(c+657,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_17_valid));
        vcdp->chgBus(c+665,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_17_payload_cha_i),16);
        vcdp->chgBus(c+673,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_17_payload_cha_q),16);
        vcdp->chgBit(c+681,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_18_valid));
        vcdp->chgBus(c+689,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_18_payload_cha_i),16);
        vcdp->chgBus(c+697,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_18_payload_cha_q),16);
        vcdp->chgBit(c+705,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_19_valid));
        vcdp->chgBus(c+713,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_19_payload_cha_i),16);
        vcdp->chgBus(c+721,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_19_payload_cha_q),16);
        vcdp->chgBit(c+729,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_20_valid));
        vcdp->chgBus(c+737,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_20_payload_cha_i),16);
        vcdp->chgBus(c+745,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_20_payload_cha_q),16);
        vcdp->chgBit(c+753,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_21_valid));
        vcdp->chgBus(c+761,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_21_payload_cha_i),16);
        vcdp->chgBus(c+769,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_21_payload_cha_q),16);
        vcdp->chgBit(c+777,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_22_valid));
        vcdp->chgBus(c+785,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_22_payload_cha_i),16);
        vcdp->chgBus(c+793,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_22_payload_cha_q),16);
        vcdp->chgBit(c+801,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_23_valid));
        vcdp->chgBus(c+809,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_23_payload_cha_i),16);
        vcdp->chgBus(c+817,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_23_payload_cha_q),16);
        vcdp->chgBit(c+825,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_24_valid));
        vcdp->chgBus(c+833,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_24_payload_cha_i),16);
        vcdp->chgBus(c+841,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_24_payload_cha_q),16);
        vcdp->chgBit(c+849,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_25_valid));
        vcdp->chgBus(c+857,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_25_payload_cha_i),16);
        vcdp->chgBus(c+865,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_25_payload_cha_q),16);
        vcdp->chgBit(c+873,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_26_valid));
        vcdp->chgBus(c+881,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_26_payload_cha_i),16);
        vcdp->chgBus(c+889,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_26_payload_cha_q),16);
        vcdp->chgBit(c+897,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_27_valid));
        vcdp->chgBus(c+905,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_27_payload_cha_i),16);
        vcdp->chgBus(c+913,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_27_payload_cha_q),16);
        vcdp->chgBit(c+921,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_28_valid));
        vcdp->chgBus(c+929,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_28_payload_cha_i),16);
        vcdp->chgBus(c+937,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_28_payload_cha_q),16);
        vcdp->chgBit(c+945,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_29_valid));
        vcdp->chgBus(c+953,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_29_payload_cha_i),16);
        vcdp->chgBus(c+961,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_29_payload_cha_q),16);
        vcdp->chgBit(c+969,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_30_valid));
        vcdp->chgBus(c+977,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_30_payload_cha_i),16);
        vcdp->chgBus(c+985,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_30_payload_cha_q),16);
        vcdp->chgBit(c+993,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_31_valid));
        vcdp->chgBus(c+1001,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_31_payload_cha_i),16);
        vcdp->chgBus(c+1009,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_31_payload_cha_q),16);
        vcdp->chgBit(c+1017,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_32_valid));
        vcdp->chgBus(c+1025,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_32_payload_cha_i),16);
        vcdp->chgBus(c+1033,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_32_payload_cha_q),16);
        vcdp->chgBit(c+1041,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_33_valid));
        vcdp->chgBus(c+1049,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_33_payload_cha_i),16);
        vcdp->chgBus(c+1057,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_33_payload_cha_q),16);
        vcdp->chgBit(c+1065,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_34_valid));
        vcdp->chgBus(c+1073,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_34_payload_cha_i),16);
        vcdp->chgBus(c+1081,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_34_payload_cha_q),16);
        vcdp->chgBit(c+1089,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_35_valid));
        vcdp->chgBus(c+1097,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_35_payload_cha_i),16);
        vcdp->chgBus(c+1105,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_35_payload_cha_q),16);
        vcdp->chgBit(c+1113,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_36_valid));
        vcdp->chgBus(c+1121,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_36_payload_cha_i),16);
        vcdp->chgBus(c+1129,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_36_payload_cha_q),16);
        vcdp->chgBit(c+1137,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_37_valid));
        vcdp->chgBus(c+1145,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_37_payload_cha_i),16);
        vcdp->chgBus(c+1153,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_37_payload_cha_q),16);
        vcdp->chgBit(c+1161,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_38_valid));
        vcdp->chgBus(c+1169,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_38_payload_cha_i),16);
        vcdp->chgBus(c+1177,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_38_payload_cha_q),16);
        vcdp->chgBit(c+1185,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_39_valid));
        vcdp->chgBus(c+1193,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_39_payload_cha_i),16);
        vcdp->chgBus(c+1201,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_39_payload_cha_q),16);
        vcdp->chgBit(c+1209,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_40_valid));
        vcdp->chgBus(c+1217,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_40_payload_cha_i),16);
        vcdp->chgBus(c+1225,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_40_payload_cha_q),16);
        vcdp->chgBit(c+1233,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_41_valid));
        vcdp->chgBus(c+1241,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_41_payload_cha_i),16);
        vcdp->chgBus(c+1249,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_41_payload_cha_q),16);
        vcdp->chgBit(c+1257,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_42_valid));
        vcdp->chgBus(c+1265,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_42_payload_cha_i),16);
        vcdp->chgBus(c+1273,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_42_payload_cha_q),16);
        vcdp->chgBit(c+1281,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_43_valid));
        vcdp->chgBus(c+1289,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_43_payload_cha_i),16);
        vcdp->chgBus(c+1297,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_43_payload_cha_q),16);
        vcdp->chgBit(c+1305,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_44_valid));
        vcdp->chgBus(c+1313,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_44_payload_cha_i),16);
        vcdp->chgBus(c+1321,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_44_payload_cha_q),16);
        vcdp->chgBit(c+1329,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_45_valid));
        vcdp->chgBus(c+1337,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_45_payload_cha_i),16);
        vcdp->chgBus(c+1345,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_45_payload_cha_q),16);
        vcdp->chgBit(c+1353,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_46_valid));
        vcdp->chgBus(c+1361,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_46_payload_cha_i),16);
        vcdp->chgBus(c+1369,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_46_payload_cha_q),16);
        vcdp->chgBit(c+1377,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_47_valid));
        vcdp->chgBus(c+1385,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_47_payload_cha_i),16);
        vcdp->chgBus(c+1393,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_47_payload_cha_q),16);
        vcdp->chgBit(c+1401,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_48_valid));
        vcdp->chgBus(c+1409,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_48_payload_cha_i),16);
        vcdp->chgBus(c+1417,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_48_payload_cha_q),16);
        vcdp->chgBit(c+1425,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_49_valid));
        vcdp->chgBus(c+1433,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_49_payload_cha_i),16);
        vcdp->chgBus(c+1441,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_49_payload_cha_q),16);
        vcdp->chgBit(c+1449,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_50_valid));
        vcdp->chgBus(c+1457,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_50_payload_cha_i),16);
        vcdp->chgBus(c+1465,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_50_payload_cha_q),16);
        vcdp->chgBit(c+1473,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_51_valid));
        vcdp->chgBus(c+1481,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_51_payload_cha_i),16);
        vcdp->chgBus(c+1489,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_51_payload_cha_q),16);
        vcdp->chgBit(c+1497,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_52_valid));
        vcdp->chgBus(c+1505,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_52_payload_cha_i),16);
        vcdp->chgBus(c+1513,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_52_payload_cha_q),16);
        vcdp->chgBit(c+1521,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_53_valid));
        vcdp->chgBus(c+1529,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_53_payload_cha_i),16);
        vcdp->chgBus(c+1537,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_53_payload_cha_q),16);
        vcdp->chgBit(c+1545,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_54_valid));
        vcdp->chgBus(c+1553,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_54_payload_cha_i),16);
        vcdp->chgBus(c+1561,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_54_payload_cha_q),16);
        vcdp->chgBit(c+1569,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_55_valid));
        vcdp->chgBus(c+1577,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_55_payload_cha_i),16);
        vcdp->chgBus(c+1585,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_55_payload_cha_q),16);
        vcdp->chgBit(c+1593,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_56_valid));
        vcdp->chgBus(c+1601,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_56_payload_cha_i),16);
        vcdp->chgBus(c+1609,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_56_payload_cha_q),16);
        vcdp->chgBit(c+1617,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_57_valid));
        vcdp->chgBus(c+1625,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_57_payload_cha_i),16);
        vcdp->chgBus(c+1633,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_57_payload_cha_q),16);
        vcdp->chgBit(c+1641,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_58_valid));
        vcdp->chgBus(c+1649,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_58_payload_cha_i),16);
        vcdp->chgBus(c+1657,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_58_payload_cha_q),16);
        vcdp->chgBit(c+1665,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_59_valid));
        vcdp->chgBus(c+1673,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_59_payload_cha_i),16);
        vcdp->chgBus(c+1681,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_59_payload_cha_q),16);
        vcdp->chgBit(c+1689,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_60_valid));
        vcdp->chgBus(c+1697,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_60_payload_cha_i),16);
        vcdp->chgBus(c+1705,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_60_payload_cha_q),16);
        vcdp->chgBit(c+1713,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_61_valid));
        vcdp->chgBus(c+1721,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_61_payload_cha_i),16);
        vcdp->chgBus(c+1729,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_61_payload_cha_q),16);
        vcdp->chgBit(c+1737,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_62_valid));
        vcdp->chgBus(c+1745,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_62_payload_cha_i),16);
        vcdp->chgBus(c+1753,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_62_payload_cha_q),16);
        vcdp->chgBus(c+1761,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_63),32);
        vcdp->chgBus(c+1769,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_63),32);
        vcdp->chgBus(c+1777,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_i),32);
        vcdp->chgBus(c+1785,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_q),32);
        vcdp->chgBit(c+1793,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid));
        vcdp->chgBus(c+1801,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0),32);
        vcdp->chgBus(c+1809,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1),32);
        vcdp->chgBus(c+1817,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2),32);
        vcdp->chgBus(c+1825,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3),32);
        vcdp->chgBus(c+1833,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4),32);
        vcdp->chgBus(c+1841,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5),32);
        vcdp->chgBus(c+1849,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6),32);
        vcdp->chgBus(c+1857,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7),32);
        vcdp->chgBus(c+1865,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8),32);
        vcdp->chgBus(c+1873,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9),32);
        vcdp->chgBus(c+1881,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10),32);
        vcdp->chgBus(c+1889,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11),32);
        vcdp->chgBus(c+1897,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12),32);
        vcdp->chgBus(c+1905,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13),32);
        vcdp->chgBus(c+1913,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14),32);
        vcdp->chgBus(c+1921,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15),32);
        vcdp->chgBus(c+1929,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_16),32);
        vcdp->chgBus(c+1937,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_17),32);
        vcdp->chgBus(c+1945,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_18),32);
        vcdp->chgBus(c+1953,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_19),32);
        vcdp->chgBus(c+1961,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_20),32);
        vcdp->chgBus(c+1969,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_21),32);
        vcdp->chgBus(c+1977,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_22),32);
        vcdp->chgBus(c+1985,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_23),32);
        vcdp->chgBus(c+1993,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_24),32);
        vcdp->chgBus(c+2001,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_25),32);
        vcdp->chgBus(c+2009,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_26),32);
        vcdp->chgBus(c+2017,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_27),32);
        vcdp->chgBus(c+2025,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_28),32);
        vcdp->chgBus(c+2033,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_29),32);
        vcdp->chgBus(c+2041,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_30),32);
        vcdp->chgBus(c+2049,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_31),32);
        vcdp->chgBus(c+2057,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_32),32);
        vcdp->chgBus(c+2065,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_33),32);
        vcdp->chgBus(c+2073,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_34),32);
        vcdp->chgBus(c+2081,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_35),32);
        vcdp->chgBus(c+2089,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_36),32);
        vcdp->chgBus(c+2097,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_37),32);
        vcdp->chgBus(c+2105,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_38),32);
        vcdp->chgBus(c+2113,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_39),32);
        vcdp->chgBus(c+2121,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_40),32);
        vcdp->chgBus(c+2129,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_41),32);
        vcdp->chgBus(c+2137,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_42),32);
    }
}

void VCFOCorrector::traceChgThis__9(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2145,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_43),32);
        vcdp->chgBus(c+2153,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_44),32);
        vcdp->chgBus(c+2161,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_45),32);
        vcdp->chgBus(c+2169,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_46),32);
        vcdp->chgBus(c+2177,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_47),32);
        vcdp->chgBus(c+2185,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_48),32);
        vcdp->chgBus(c+2193,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_49),32);
        vcdp->chgBus(c+2201,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_50),32);
        vcdp->chgBus(c+2209,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_51),32);
        vcdp->chgBus(c+2217,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_52),32);
        vcdp->chgBus(c+2225,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_53),32);
        vcdp->chgBus(c+2233,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_54),32);
        vcdp->chgBus(c+2241,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_55),32);
        vcdp->chgBus(c+2249,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_56),32);
        vcdp->chgBus(c+2257,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_57),32);
        vcdp->chgBus(c+2265,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_58),32);
        vcdp->chgBus(c+2273,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_59),32);
        vcdp->chgBus(c+2281,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_60),32);
        vcdp->chgBus(c+2289,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_61),32);
        vcdp->chgBus(c+2297,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_62),32);
        vcdp->chgBus(c+2305,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_0),32);
        vcdp->chgBus(c+2313,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_1),32);
        vcdp->chgBus(c+2321,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_2),32);
        vcdp->chgBus(c+2329,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_3),32);
        vcdp->chgBus(c+2337,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_4),32);
        vcdp->chgBus(c+2345,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_5),32);
        vcdp->chgBus(c+2353,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_6),32);
        vcdp->chgBus(c+2361,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_7),32);
        vcdp->chgBus(c+2369,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_8),32);
        vcdp->chgBus(c+2377,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_9),32);
        vcdp->chgBus(c+2385,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_10),32);
        vcdp->chgBus(c+2393,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_11),32);
        vcdp->chgBus(c+2401,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_12),32);
        vcdp->chgBus(c+2409,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_13),32);
        vcdp->chgBus(c+2417,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_14),32);
        vcdp->chgBus(c+2425,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_15),32);
        vcdp->chgBus(c+2433,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_16),32);
        vcdp->chgBus(c+2441,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_17),32);
        vcdp->chgBus(c+2449,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_18),32);
        vcdp->chgBus(c+2457,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_19),32);
        vcdp->chgBus(c+2465,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_20),32);
        vcdp->chgBus(c+2473,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_21),32);
        vcdp->chgBus(c+2481,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_22),32);
        vcdp->chgBus(c+2489,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_23),32);
        vcdp->chgBus(c+2497,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_24),32);
        vcdp->chgBus(c+2505,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_25),32);
        vcdp->chgBus(c+2513,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_26),32);
        vcdp->chgBus(c+2521,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_27),32);
        vcdp->chgBus(c+2529,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_28),32);
        vcdp->chgBus(c+2537,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_29),32);
        vcdp->chgBus(c+2545,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_30),32);
        vcdp->chgBus(c+2553,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_31),32);
        vcdp->chgBus(c+2561,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_32),32);
        vcdp->chgBus(c+2569,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_33),32);
        vcdp->chgBus(c+2577,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_34),32);
        vcdp->chgBus(c+2585,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_35),32);
        vcdp->chgBus(c+2593,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_36),32);
        vcdp->chgBus(c+2601,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_37),32);
        vcdp->chgBus(c+2609,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_38),32);
        vcdp->chgBus(c+2617,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_39),32);
        vcdp->chgBus(c+2625,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_40),32);
        vcdp->chgBus(c+2633,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_41),32);
        vcdp->chgBus(c+2641,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_42),32);
        vcdp->chgBus(c+2649,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_43),32);
        vcdp->chgBus(c+2657,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_44),32);
        vcdp->chgBus(c+2665,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_45),32);
        vcdp->chgBus(c+2673,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_46),32);
        vcdp->chgBus(c+2681,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_47),32);
        vcdp->chgBus(c+2689,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_48),32);
        vcdp->chgBus(c+2697,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_49),32);
        vcdp->chgBus(c+2705,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_50),32);
        vcdp->chgBus(c+2713,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_51),32);
        vcdp->chgBus(c+2721,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_52),32);
        vcdp->chgBus(c+2729,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_53),32);
        vcdp->chgBus(c+2737,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_54),32);
        vcdp->chgBus(c+2745,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_55),32);
        vcdp->chgBus(c+2753,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_56),32);
        vcdp->chgBus(c+2761,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_57),32);
        vcdp->chgBus(c+2769,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_58),32);
        vcdp->chgBus(c+2777,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_59),32);
        vcdp->chgBus(c+2785,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_60),32);
        vcdp->chgBus(c+2793,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_61),32);
        vcdp->chgBus(c+2801,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_62),32);
    }
}

void VCFOCorrector::traceChgThis__10(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2809,(VL_MULS_III(32,32,32, 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15)), 
                                         VL_EXTENDS_II(32,16, 
                                                       (0xffffU 
                                                        & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_63_payload_cha_q) 
                                                           + (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_63_payload_cha_i)))))),32);
        vcdp->chgBus(c+2817,(VL_MULS_III(32,32,32, 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y)), 
                                         VL_EXTENDS_II(32,16, 
                                                       (0xffffU 
                                                        & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_63_payload_cha_i) 
                                                           - (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_63_payload_cha_q)))))),32);
    }
}

void VCFOCorrector::traceChgThis__12(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2825,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15),16);
        vcdp->chgBus(c+2833,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y),16);
        vcdp->chgBus(c+2841,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi),16);
    }
}

void VCFOCorrector::traceChgThis__13(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2849,(vlTOPp->ref_data_valid));
        vcdp->chgBus(c+2857,(vlTOPp->ref_data_payload_cha_i),16);
        vcdp->chgBus(c+2865,(vlTOPp->ref_data_payload_cha_q),16);
        vcdp->chgBit(c+2873,(vlTOPp->raw_data_valid));
        vcdp->chgBus(c+2881,(vlTOPp->raw_data_payload_cha_i),16);
        vcdp->chgBus(c+2889,(vlTOPp->raw_data_payload_cha_q),16);
        vcdp->chgBit(c+2897,(vlTOPp->rotated_data_valid));
        vcdp->chgBus(c+2905,(vlTOPp->rotated_data_payload_cha_i),16);
        vcdp->chgBus(c+2913,(vlTOPp->rotated_data_payload_cha_q),16);
        vcdp->chgBit(c+2921,(vlTOPp->enable));
        vcdp->chgBit(c+2929,(vlTOPp->clk));
        vcdp->chgBit(c+2937,(vlTOPp->reset));
    }
}
