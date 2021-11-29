// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCFOEstimator__Syms.h"


//======================

void VCFOEstimator::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCFOEstimator* t = (VCFOEstimator*)userthis;
    VCFOEstimator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VCFOEstimator::traceChgThis(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
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
        vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCFOEstimator::traceChgThis__2(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp43[3];
    WData/*95:0*/ __Vtemp44[3];
    // Body
    {
        __Vtemp43[0U] = 0xffff8000U;
        __Vtemp43[1U] = 0xffffffffU;
        __Vtemp43[2U] = 1U;
        VL_ADD_W(3, __Vtemp44, __Vtemp43, vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_4);
        vcdp->chgBit(c+1,((1U & __Vtemp44[2U])));
        vcdp->chgBit(c+9,((0U != (0xffffU & ((IData)(0x8000U) 
                                             + vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_4[0U])))));
        vcdp->chgBit(c+17,((1U & (IData)((vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload 
                                          >> 0x30U)))));
        vcdp->chgBit(c+25,((3U != (3U & (IData)((vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload 
                                                 >> 0x2fU))))));
        vcdp->chgBit(c+33,((1U & (IData)((vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload 
                                          >> 0x2fU)))));
        vcdp->chgBit(c+41,((1U & (IData)((vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_7 
                                          >> 0x2fU)))));
        vcdp->chgBit(c+49,((0x1ffffU != (0x1ffffU & (IData)(
                                                            (vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_7 
                                                             >> 0x1fU))))));
        vcdp->chgBit(c+57,((0U != (0xffffU & (IData)(
                                                     (vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_7 
                                                      >> 0x1fU))))));
    }
}

void VCFOEstimator::traceChgThis__3(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+65,(VL_NEGATE_I(((1U & (IData)(
                                                      (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125_4 
                                                       >> 0x20U)))
                                         ? ((3U != 
                                             (3U & (IData)(
                                                           (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125_4 
                                                            >> 0x1fU))))
                                             ? 0x80000000U
                                             : (IData)(vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125_4))
                                         : ((1U & (IData)(
                                                          (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125_4 
                                                           >> 0x1fU)))
                                             ? 0x7fffffffU
                                             : (IData)(vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125_4))))),32);
        vcdp->chgBit(c+73,((1U & (IData)((VL_ULL(1) 
                                          & ((VL_ULL(0x1ffffffff8000) 
                                              + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                             >> 0x30U))))));
        vcdp->chgBit(c+81,((0U != (0xffffU & ((IData)(0x8000U) 
                                              + (IData)(vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_2))))));
        vcdp->chgBit(c+89,((1U & (IData)((vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125 
                                          >> 0x20U)))));
        vcdp->chgBit(c+97,((3U != (3U & (IData)((vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125 
                                                 >> 0x1fU))))));
        vcdp->chgBit(c+105,((1U & (IData)((vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125 
                                           >> 0x1fU)))));
        vcdp->chgBit(c+113,((1U & (IData)((VL_ULL(1) 
                                           & ((VL_ULL(0x1ffffffff8000) 
                                               + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                              >> 0x30U))))));
        vcdp->chgBit(c+121,((0U != (0xffffU & ((IData)(0x8000U) 
                                               + (IData)(vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_5))))));
        vcdp->chgBit(c+129,((1U & (IData)((vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125_4 
                                           >> 0x20U)))));
        vcdp->chgBit(c+137,((3U != (3U & (IData)((vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125_4 
                                                  >> 0x1fU))))));
        vcdp->chgBit(c+145,((1U & (IData)((vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125_4 
                                           >> 0x1fU)))));
        vcdp->chgBus(c+153,(((1U & (IData)((vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125 
                                            >> 0x20U)))
                              ? ((3U != (3U & (IData)(
                                                      (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125 
                                                       >> 0x1fU))))
                                  ? 0x80000000U : (IData)(vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125))
                              : ((1U & (IData)((vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125 
                                                >> 0x1fU)))
                                  ? 0x7fffffffU : (IData)(vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125)))),32);
    }
}

void VCFOEstimator::traceChgThis__4(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+161,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1),32);
    }
}

void VCFOEstimator::traceChgThis__5(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+169,(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_15),32);
        vcdp->chgBus(c+177,(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_y),32);
        vcdp->chgBus(c+185,(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z),32);
        vcdp->chgQuad(c+193,(VL_MULS_QQQ(64,64,64, VL_ULL(0x1000), 
                                         VL_EXTENDS_QI(64,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z))),64);
        vcdp->chgBus(c+209,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_31),32);
        vcdp->chgBus(c+217,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31),32);
        vcdp->chgBus(c+225,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_0),32);
        vcdp->chgBus(c+233,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_1),32);
        vcdp->chgBus(c+241,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_2),32);
        vcdp->chgBus(c+249,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_3),32);
        vcdp->chgBus(c+257,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_4),32);
        vcdp->chgBus(c+265,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_5),32);
        vcdp->chgBus(c+273,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_6),32);
        vcdp->chgBus(c+281,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_7),32);
        vcdp->chgBus(c+289,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_8),32);
        vcdp->chgBus(c+297,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_9),32);
        vcdp->chgBus(c+305,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_10),32);
        vcdp->chgBus(c+313,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_11),32);
        vcdp->chgBus(c+321,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_12),32);
        vcdp->chgBus(c+329,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_13),32);
        vcdp->chgBus(c+337,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_14),32);
        vcdp->chgBus(c+345,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_15),32);
        vcdp->chgBus(c+353,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_16),32);
        vcdp->chgBus(c+361,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_17),32);
        vcdp->chgBus(c+369,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_18),32);
        vcdp->chgBus(c+377,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_19),32);
        vcdp->chgBus(c+385,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_20),32);
        vcdp->chgBus(c+393,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_21),32);
        vcdp->chgBus(c+401,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_22),32);
        vcdp->chgBus(c+409,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_23),32);
        vcdp->chgBus(c+417,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_24),32);
        vcdp->chgBus(c+425,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_25),32);
        vcdp->chgBus(c+433,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_26),32);
        vcdp->chgBus(c+441,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_27),32);
        vcdp->chgBus(c+449,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_28),32);
        vcdp->chgBus(c+457,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_29),32);
        vcdp->chgBus(c+465,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_30),32);
        vcdp->chgBus(c+473,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0),32);
        vcdp->chgBus(c+481,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1),32);
        vcdp->chgBus(c+489,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2),32);
        vcdp->chgBus(c+497,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3),32);
        vcdp->chgBus(c+505,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4),32);
        vcdp->chgBus(c+513,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5),32);
        vcdp->chgBus(c+521,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6),32);
        vcdp->chgBus(c+529,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7),32);
        vcdp->chgBus(c+537,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8),32);
        vcdp->chgBus(c+545,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9),32);
        vcdp->chgBus(c+553,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10),32);
        vcdp->chgBus(c+561,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11),32);
        vcdp->chgBus(c+569,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12),32);
        vcdp->chgBus(c+577,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13),32);
        vcdp->chgBus(c+585,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14),32);
        vcdp->chgBus(c+593,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15),32);
        vcdp->chgBus(c+601,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16),32);
        vcdp->chgBus(c+609,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_17),32);
        vcdp->chgBus(c+617,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_18),32);
        vcdp->chgBus(c+625,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_19),32);
        vcdp->chgBus(c+633,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_20),32);
        vcdp->chgBus(c+641,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_21),32);
        vcdp->chgBus(c+649,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_22),32);
        vcdp->chgBus(c+657,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_23),32);
        vcdp->chgBus(c+665,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_24),32);
        vcdp->chgBus(c+673,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_25),32);
        vcdp->chgBus(c+681,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_26),32);
        vcdp->chgBus(c+689,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_27),32);
        vcdp->chgBus(c+697,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_28),32);
        vcdp->chgBus(c+705,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_29),32);
        vcdp->chgBus(c+713,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_30),32);
    }
}

void VCFOEstimator::traceChgThis__6(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+721,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1));
        vcdp->chgQuad(c+729,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i),48);
        vcdp->chgQuad(c+745,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q),48);
        vcdp->chgBit(c+761,(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_15));
        vcdp->chgBus(c+769,(vlTOPp->CFOEstimator__DOT__impulse_cnt),6);
        vcdp->chgBit(c+777,((1U & (~ (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)))));
        vcdp->chgBus(c+785,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_i),32);
        vcdp->chgBus(c+793,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_q),32);
        vcdp->chgBit(c+801,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid));
    }
}

void VCFOEstimator::traceChgThis__7(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+809,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_valid));
        vcdp->chgBus(c+817,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_i),16);
        vcdp->chgBus(c+825,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_q),16);
        vcdp->chgBit(c+833,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_valid));
        vcdp->chgBus(c+841,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_i),16);
        vcdp->chgBus(c+849,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_q),16);
        vcdp->chgBit(c+857,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_valid));
        vcdp->chgBus(c+865,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_i),16);
        vcdp->chgBus(c+873,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_q),16);
        vcdp->chgBit(c+881,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_valid));
        vcdp->chgBus(c+889,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_i),16);
        vcdp->chgBus(c+897,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_q),16);
        vcdp->chgBit(c+905,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_valid));
        vcdp->chgBus(c+913,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_i),16);
        vcdp->chgBus(c+921,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_q),16);
        vcdp->chgBit(c+929,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_valid));
        vcdp->chgBus(c+937,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_i),16);
        vcdp->chgBus(c+945,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_q),16);
        vcdp->chgBit(c+953,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_valid));
        vcdp->chgBus(c+961,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_i),16);
        vcdp->chgBus(c+969,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_q),16);
        vcdp->chgBit(c+977,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_valid));
        vcdp->chgBus(c+985,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_i),16);
        vcdp->chgBus(c+993,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_q),16);
        vcdp->chgBit(c+1001,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_valid));
        vcdp->chgBus(c+1009,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_i),16);
        vcdp->chgBus(c+1017,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_q),16);
        vcdp->chgBit(c+1025,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_valid));
        vcdp->chgBus(c+1033,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_i),16);
        vcdp->chgBus(c+1041,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_q),16);
        vcdp->chgBit(c+1049,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_valid));
        vcdp->chgBus(c+1057,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_i),16);
        vcdp->chgBus(c+1065,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_q),16);
        vcdp->chgBit(c+1073,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_valid));
        vcdp->chgBus(c+1081,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_i),16);
        vcdp->chgBus(c+1089,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_q),16);
        vcdp->chgBit(c+1097,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_valid));
        vcdp->chgBus(c+1105,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_i),16);
        vcdp->chgBus(c+1113,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_q),16);
        vcdp->chgBit(c+1121,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_valid));
        vcdp->chgBus(c+1129,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_i),16);
        vcdp->chgBus(c+1137,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_q),16);
        vcdp->chgBit(c+1145,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_valid));
        vcdp->chgBus(c+1153,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_i),16);
        vcdp->chgBus(c+1161,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_q),16);
        vcdp->chgBit(c+1169,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_valid));
        vcdp->chgBus(c+1177,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_i),16);
        vcdp->chgBus(c+1185,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_q),16);
    }
}

void VCFOEstimator::traceChgThis__8(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1193,(vlTOPp->rotated_data_valid));
        vcdp->chgBus(c+1201,(vlTOPp->rotated_data_payload_cha_i),16);
        vcdp->chgBus(c+1209,(vlTOPp->rotated_data_payload_cha_q),16);
        vcdp->chgBit(c+1217,(vlTOPp->delta_phi_valid));
        vcdp->chgBus(c+1225,(vlTOPp->delta_phi_payload),32);
        vcdp->chgBit(c+1233,(vlTOPp->clk));
        vcdp->chgBit(c+1241,(vlTOPp->reset));
        vcdp->chgBit(c+1249,((1U & (~ (IData)(vlTOPp->rotated_data_valid)))));
        vcdp->chgBus(c+1257,(VL_MULS_III(32,32,32, 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->rotated_data_payload_cha_i)), 
                                         VL_EXTENDS_II(32,16, 
                                                       (0xffffU 
                                                        & ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_q) 
                                                           + (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_i)))))),32);
        vcdp->chgBus(c+1265,(VL_MULS_III(32,32,32, 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->rotated_data_payload_cha_q)), 
                                         VL_EXTENDS_II(32,16, 
                                                       (0xffffU 
                                                        & ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_i) 
                                                           - (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_q)))))),32);
    }
}
