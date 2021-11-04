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
                                  >> 3U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
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
        vcdp->chgBit(c+1,(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT__raw_data_fire));
    }
}

void VPhaseRotator::traceChgThis__3(VPhaseRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+9,(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15),16);
        vcdp->chgBus(c+17,(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y),16);
        vcdp->chgBus(c+25,(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z),16);
        vcdp->chgBus(c+33,(vlTOPp->PhaseRotator__DOT__phi),16);
    }
}

void VPhaseRotator::traceChgThis__4(VPhaseRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+41,(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_15));
    }
}

void VPhaseRotator::traceChgThis__5(VPhaseRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+49,(vlTOPp->raw_data_valid));
        vcdp->chgBus(c+57,(vlTOPp->raw_data_payload_cha_i),16);
        vcdp->chgBus(c+65,(vlTOPp->raw_data_payload_cha_q),16);
        vcdp->chgBit(c+73,(vlTOPp->rotated_data_valid));
        vcdp->chgBit(c+81,(vlTOPp->rotated_data_ready));
        vcdp->chgBus(c+89,(vlTOPp->rotated_data_payload_cha_i),16);
        vcdp->chgBus(c+97,(vlTOPp->rotated_data_payload_cha_q),16);
        vcdp->chgBus(c+105,(vlTOPp->phiCorrect),16);
        vcdp->chgBit(c+113,(vlTOPp->clk));
        vcdp->chgBit(c+121,(vlTOPp->reset));
        vcdp->chgBus(c+129,((0xffffU & (VL_LTS_III(1,16,16, 0x64U, 
                                                   (0xffffU 
                                                    & ((IData)(vlTOPp->PhaseRotator__DOT__phi) 
                                                       + (IData)(vlTOPp->phiCorrect))))
                                         ? (((IData)(vlTOPp->PhaseRotator__DOT__phi) 
                                             - (IData)(0xc9U)) 
                                            + (IData)(vlTOPp->phiCorrect))
                                         : (VL_GTS_III(1,16,16, 0xff9cU, 
                                                       (0xffffU 
                                                        & ((IData)(vlTOPp->PhaseRotator__DOT__phi) 
                                                           + (IData)(vlTOPp->phiCorrect))))
                                             ? ((IData)(0xc9U) 
                                                + ((IData)(vlTOPp->PhaseRotator__DOT__phi) 
                                                   + (IData)(vlTOPp->phiCorrect)))
                                             : ((IData)(vlTOPp->PhaseRotator__DOT__phi) 
                                                + (IData)(vlTOPp->phiCorrect)))))),16);
        vcdp->chgBit(c+137,(VL_LTS_III(1,16,16, 0x64U, 
                                       (0xffffU & ((IData)(vlTOPp->PhaseRotator__DOT__phi) 
                                                   + (IData)(vlTOPp->phiCorrect))))));
        vcdp->chgBit(c+145,(VL_GTS_III(1,16,16, 0xff9cU, 
                                       (0xffffU & ((IData)(vlTOPp->PhaseRotator__DOT__phi) 
                                                   + (IData)(vlTOPp->phiCorrect))))));
    }
}
