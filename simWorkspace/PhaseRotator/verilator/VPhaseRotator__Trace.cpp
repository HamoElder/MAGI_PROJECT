// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPhaseRotator__Syms.h"


//======================

void VPhaseRotator::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VPhaseRotator* t = (VPhaseRotator*)userthis;
    VPhaseRotator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VPhaseRotator::traceChgThis(VPhaseRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
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

void VPhaseRotator::traceChgThis__2(VPhaseRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,((1U & (IData)((VL_ULL(1) 
                                         & ((VL_ULL(0x1ffff8000) 
                                             + vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                            >> 0x20U))))));
        vcdp->chgBit(c+9,((0U != (0xffffU & ((IData)(0x8000U) 
                                             + (IData)(vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_2))))));
        vcdp->chgBus(c+17,(vlTOPp->PhaseRotator__DOT__rotated_x_raw),16);
        vcdp->chgBit(c+25,((1U & (vlTOPp->PhaseRotator__DOT___zz_rotated_x_raw 
                                  >> 0x10U))));
        vcdp->chgBit(c+33,((3U != (3U & (vlTOPp->PhaseRotator__DOT___zz_rotated_x_raw 
                                         >> 0xfU)))));
        vcdp->chgBit(c+41,((1U & (vlTOPp->PhaseRotator__DOT___zz_rotated_x_raw 
                                  >> 0xfU))));
        vcdp->chgBit(c+49,((1U & (IData)((VL_ULL(1) 
                                          & ((VL_ULL(0x1ffff8000) 
                                              + vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                             >> 0x20U))))));
        vcdp->chgBit(c+57,((0U != (0xffffU & ((IData)(0x8000U) 
                                              + (IData)(vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_5))))));
        vcdp->chgBus(c+65,(vlTOPp->PhaseRotator__DOT__rotated_y_raw),16);
        vcdp->chgBit(c+73,((1U & (vlTOPp->PhaseRotator__DOT___zz_rotated_y_raw 
                                  >> 0x10U))));
        vcdp->chgBit(c+81,((3U != (3U & (vlTOPp->PhaseRotator__DOT___zz_rotated_y_raw 
                                         >> 0xfU)))));
        vcdp->chgBit(c+89,((1U & (vlTOPp->PhaseRotator__DOT___zz_rotated_y_raw 
                                  >> 0xfU))));
    }
}

void VPhaseRotator::traceChgThis__3(VPhaseRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+97,((VL_LTS_III(1,32,32, 0x1921fU, vlTOPp->PhaseRotator__DOT___zz_when_PhaseRotator_l47)
                             ? ((vlTOPp->PhaseRotator__DOT__phi 
                                 - (IData)(0x3243fU)) 
                                + vlTOPp->PhaseRotator__DOT__phiCorrect)
                             : (VL_GTS_III(1,32,32, 0xfffe6de1U, vlTOPp->PhaseRotator__DOT___zz_when_PhaseRotator_l47)
                                 ? ((IData)(0x3243fU) 
                                    + (vlTOPp->PhaseRotator__DOT__phi 
                                       + vlTOPp->PhaseRotator__DOT__phiCorrect))
                                 : (vlTOPp->PhaseRotator__DOT__phi 
                                    + vlTOPp->PhaseRotator__DOT__phiCorrect)))),32);
    }
}

void VPhaseRotator::traceChgThis__4(VPhaseRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+105,(VL_LTS_III(1,32,32, 0x1921fU, vlTOPp->PhaseRotator__DOT___zz_when_PhaseRotator_l47)));
        vcdp->chgBit(c+113,(VL_GTS_III(1,32,32, 0xfffe6de1U, vlTOPp->PhaseRotator__DOT___zz_when_PhaseRotator_l47)));
    }
}

void VPhaseRotator::traceChgThis__5(VPhaseRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+121,(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15),32);
        vcdp->chgBus(c+129,(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y),32);
        vcdp->chgBus(c+137,(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z),32);
        vcdp->chgBit(c+145,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_15));
        vcdp->chgBus(c+153,(vlTOPp->PhaseRotator__DOT__phi),32);
        vcdp->chgBit(c+161,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_0));
        vcdp->chgBit(c+169,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_1));
        vcdp->chgBit(c+177,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_2));
        vcdp->chgBit(c+185,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_3));
        vcdp->chgBit(c+193,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_4));
        vcdp->chgBit(c+201,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_5));
        vcdp->chgBit(c+209,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_6));
        vcdp->chgBit(c+217,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_7));
        vcdp->chgBit(c+225,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_8));
        vcdp->chgBit(c+233,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_9));
        vcdp->chgBit(c+241,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_10));
        vcdp->chgBit(c+249,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_11));
        vcdp->chgBit(c+257,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_12));
        vcdp->chgBit(c+265,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_13));
        vcdp->chgBit(c+273,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_14));
    }
}

void VPhaseRotator::traceChgThis__6(VPhaseRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+281,(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_15));
        vcdp->chgBit(c+289,(vlTOPp->PhaseRotator__DOT__xy_symbol));
        vcdp->chgBus(c+297,(vlTOPp->PhaseRotator__DOT__phiCorrect),32);
    }
}

void VPhaseRotator::traceChgThis__7(VPhaseRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+305,(vlTOPp->raw_data_valid));
        vcdp->chgBus(c+313,(vlTOPp->raw_data_payload_cha_i),16);
        vcdp->chgBus(c+321,(vlTOPp->raw_data_payload_cha_q),16);
        vcdp->chgBit(c+329,(vlTOPp->phiCorrect_valid));
        vcdp->chgBus(c+337,(vlTOPp->phiCorrect_payload),32);
        vcdp->chgBit(c+345,(vlTOPp->rotated_data_valid));
        vcdp->chgBus(c+353,(vlTOPp->rotated_data_payload_cha_i),16);
        vcdp->chgBus(c+361,(vlTOPp->rotated_data_payload_cha_q),16);
        vcdp->chgBit(c+369,(vlTOPp->clk));
        vcdp->chgBit(c+377,(vlTOPp->reset));
        vcdp->chgBus(c+385,(((IData)(vlTOPp->raw_data_payload_cha_i) 
                             << 0x10U)),32);
        vcdp->chgBus(c+393,(((IData)(vlTOPp->raw_data_payload_cha_q) 
                             << 0x10U)),32);
        vcdp->chgBit(c+401,((1U & (~ (IData)(vlTOPp->raw_data_valid)))));
    }
}
