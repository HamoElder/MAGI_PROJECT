// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCorrelator__Syms.h"


//======================

void VCorrelator::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCorrelator* t = (VCorrelator*)userthis;
    VCorrelator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VCorrelator::traceChgThis(VCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCorrelator::traceChgThis__2(VCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->Correlator__DOT__k1),32);
    }
}

void VCorrelator::traceChgThis__3(VCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+9,(vlTOPp->Correlator__DOT__shiftRegisterE_2__DOT__shift_reg_3),32);
        vcdp->chgBus(c+17,(vlTOPp->Correlator__DOT__shiftRegisterE_3__DOT__shift_reg_3),32);
        vcdp->chgBus(c+25,(vlTOPp->Correlator__DOT__corr_val_i),32);
        vcdp->chgBus(c+33,(vlTOPp->Correlator__DOT__corr_val_q),32);
        vcdp->chgBus(c+41,(vlTOPp->Correlator__DOT__mul_i),32);
        vcdp->chgBus(c+49,(vlTOPp->Correlator__DOT__mul_q),32);
        vcdp->chgBit(c+57,(vlTOPp->Correlator__DOT__mul_data_valid));
        vcdp->chgBit(c+65,(vlTOPp->Correlator__DOT__corr_result_valid_1));
        vcdp->chgBus(c+73,(vlTOPp->Correlator__DOT__shiftRegisterE_2__DOT__shift_reg_0),32);
        vcdp->chgBus(c+81,(vlTOPp->Correlator__DOT__shiftRegisterE_2__DOT__shift_reg_1),32);
        vcdp->chgBus(c+89,(vlTOPp->Correlator__DOT__shiftRegisterE_2__DOT__shift_reg_2),32);
        vcdp->chgBus(c+97,(vlTOPp->Correlator__DOT__shiftRegisterE_3__DOT__shift_reg_0),32);
        vcdp->chgBus(c+105,(vlTOPp->Correlator__DOT__shiftRegisterE_3__DOT__shift_reg_1),32);
        vcdp->chgBus(c+113,(vlTOPp->Correlator__DOT__shiftRegisterE_3__DOT__shift_reg_2),32);
    }
}

void VCorrelator::traceChgThis__4(VCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+121,(vlTOPp->raw_data_0_valid));
        vcdp->chgBus(c+129,(vlTOPp->raw_data_0_payload_cha_i),16);
        vcdp->chgBus(c+137,(vlTOPp->raw_data_0_payload_cha_q),16);
        vcdp->chgBit(c+145,(vlTOPp->raw_data_1_valid));
        vcdp->chgBus(c+153,(vlTOPp->raw_data_1_payload_cha_i),16);
        vcdp->chgBus(c+161,(vlTOPp->raw_data_1_payload_cha_q),16);
        vcdp->chgBit(c+169,(vlTOPp->corr_result_valid));
        vcdp->chgBus(c+177,(vlTOPp->corr_result_payload_cha_i),32);
        vcdp->chgBus(c+185,(vlTOPp->corr_result_payload_cha_q),32);
        vcdp->chgBit(c+193,(vlTOPp->clk));
        vcdp->chgBit(c+201,(vlTOPp->reset));
        vcdp->chgBus(c+209,(VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_0_payload_cha_i)), 
                                        VL_EXTENDS_II(32,16, 
                                                      (0xffffU 
                                                       & ((IData)(vlTOPp->raw_data_1_payload_cha_q) 
                                                          + (IData)(vlTOPp->raw_data_1_payload_cha_i)))))),32);
        vcdp->chgBus(c+217,(VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_0_payload_cha_q)), 
                                        VL_EXTENDS_II(32,16, 
                                                      (0xffffU 
                                                       & ((IData)(vlTOPp->raw_data_1_payload_cha_i) 
                                                          - (IData)(vlTOPp->raw_data_1_payload_cha_q)))))),32);
    }
}
