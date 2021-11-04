// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPhaseRotator__Syms.h"


//======================

void VPhaseRotator::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VPhaseRotator::traceInit, &VPhaseRotator::traceFull, &VPhaseRotator::traceChg, this);
}
void VPhaseRotator::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VPhaseRotator* t = (VPhaseRotator*)userthis;
    VPhaseRotator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VPhaseRotator::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VPhaseRotator* t = (VPhaseRotator*)userthis;
    VPhaseRotator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VPhaseRotator::traceInitThis(VPhaseRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VPhaseRotator::traceFullThis(VPhaseRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VPhaseRotator::traceInitThis__1(VPhaseRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+49,"raw_data_valid", false,-1);
        vcdp->declBus(c+57,"raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+65,"raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+73,"rotated_data_valid", false,-1);
        vcdp->declBit(c+81,"rotated_data_ready", false,-1);
        vcdp->declBus(c+89,"rotated_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+97,"rotated_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBus(c+105,"phiCorrect", false,-1, 15,0);
        vcdp->declBit(c+113,"clk", false,-1);
        vcdp->declBit(c+121,"reset", false,-1);
        vcdp->declBit(c+49,"PhaseRotator raw_data_valid", false,-1);
        vcdp->declBus(c+57,"PhaseRotator raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+65,"PhaseRotator raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+73,"PhaseRotator rotated_data_valid", false,-1);
        vcdp->declBit(c+81,"PhaseRotator rotated_data_ready", false,-1);
        vcdp->declBus(c+89,"PhaseRotator rotated_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+97,"PhaseRotator rotated_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBus(c+105,"PhaseRotator phiCorrect", false,-1, 15,0);
        vcdp->declBit(c+113,"PhaseRotator clk", false,-1);
        vcdp->declBit(c+121,"PhaseRotator reset", false,-1);
        vcdp->declBit(c+81,"PhaseRotator cordic_pipeline_core_raw_data_ready", false,-1);
        vcdp->declBit(c+41,"PhaseRotator cordic_pipeline_core_result_valid", false,-1);
        vcdp->declBus(c+9,"PhaseRotator cordic_pipeline_core_result_payload_x", false,-1, 15,0);
        vcdp->declBus(c+17,"PhaseRotator cordic_pipeline_core_result_payload_y", false,-1, 15,0);
        vcdp->declBus(c+25,"PhaseRotator cordic_pipeline_core_result_payload_z", false,-1, 15,0);
        vcdp->declBus(c+33,"PhaseRotator phi", false,-1, 15,0);
        vcdp->declBus(c+129,"PhaseRotator phiNext", false,-1, 15,0);
        vcdp->declBus(c+153,"PhaseRotator math_pi", false,-1, 15,0);
        vcdp->declBus(c+161,"PhaseRotator math_2_pi", false,-1, 15,0);
        vcdp->declBit(c+137,"PhaseRotator when_PhaseRotator_l37", false,-1);
        vcdp->declBit(c+145,"PhaseRotator when_PhaseRotator_l39", false,-1);
        vcdp->declBit(c+169,"PhaseRotator cordic_pipeline_core rotate_mode", false,-1);
        vcdp->declBus(c+177,"PhaseRotator cordic_pipeline_core x_u", false,-1, 1,0);
        vcdp->declBit(c+49,"PhaseRotator cordic_pipeline_core raw_data_valid", false,-1);
        vcdp->declBit(c+81,"PhaseRotator cordic_pipeline_core raw_data_ready", false,-1);
        vcdp->declBus(c+57,"PhaseRotator cordic_pipeline_core raw_data_payload_x", false,-1, 15,0);
        vcdp->declBus(c+65,"PhaseRotator cordic_pipeline_core raw_data_payload_y", false,-1, 15,0);
        vcdp->declBus(c+33,"PhaseRotator cordic_pipeline_core raw_data_payload_z", false,-1, 15,0);
        vcdp->declBit(c+41,"PhaseRotator cordic_pipeline_core result_valid", false,-1);
        vcdp->declBit(c+81,"PhaseRotator cordic_pipeline_core result_ready", false,-1);
        vcdp->declBus(c+9,"PhaseRotator cordic_pipeline_core result_payload_x", false,-1, 15,0);
        vcdp->declBus(c+17,"PhaseRotator cordic_pipeline_core result_payload_y", false,-1, 15,0);
        vcdp->declBus(c+25,"PhaseRotator cordic_pipeline_core result_payload_z", false,-1, 15,0);
        vcdp->declBit(c+113,"PhaseRotator cordic_pipeline_core clk", false,-1);
        vcdp->declBit(c+121,"PhaseRotator cordic_pipeline_core reset", false,-1);
        vcdp->declBit(c+1,"PhaseRotator cordic_pipeline_core raw_data_fire", false,-1);
    }
}

void VPhaseRotator::traceFullThis__1(VPhaseRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT__raw_data_fire));
        vcdp->fullBus(c+9,(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15),16);
        vcdp->fullBus(c+17,(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y),16);
        vcdp->fullBus(c+25,(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z),16);
        vcdp->fullBus(c+33,(vlTOPp->PhaseRotator__DOT__phi),16);
        vcdp->fullBit(c+41,(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_15));
        vcdp->fullBit(c+49,(vlTOPp->raw_data_valid));
        vcdp->fullBus(c+57,(vlTOPp->raw_data_payload_cha_i),16);
        vcdp->fullBus(c+65,(vlTOPp->raw_data_payload_cha_q),16);
        vcdp->fullBit(c+73,(vlTOPp->rotated_data_valid));
        vcdp->fullBit(c+81,(vlTOPp->rotated_data_ready));
        vcdp->fullBus(c+89,(vlTOPp->rotated_data_payload_cha_i),16);
        vcdp->fullBus(c+97,(vlTOPp->rotated_data_payload_cha_q),16);
        vcdp->fullBus(c+105,(vlTOPp->phiCorrect),16);
        vcdp->fullBit(c+113,(vlTOPp->clk));
        vcdp->fullBit(c+121,(vlTOPp->reset));
        vcdp->fullBus(c+129,((0xffffU & (VL_LTS_III(1,16,16, 0x64U, 
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
                                                 + 
                                                 ((IData)(vlTOPp->PhaseRotator__DOT__phi) 
                                                  + (IData)(vlTOPp->phiCorrect)))
                                              : ((IData)(vlTOPp->PhaseRotator__DOT__phi) 
                                                 + (IData)(vlTOPp->phiCorrect)))))),16);
        vcdp->fullBit(c+137,(VL_LTS_III(1,16,16, 0x64U, 
                                        (0xffffU & 
                                         ((IData)(vlTOPp->PhaseRotator__DOT__phi) 
                                          + (IData)(vlTOPp->phiCorrect))))));
        vcdp->fullBit(c+145,(VL_GTS_III(1,16,16, 0xff9cU, 
                                        (0xffffU & 
                                         ((IData)(vlTOPp->PhaseRotator__DOT__phi) 
                                          + (IData)(vlTOPp->phiCorrect))))));
        vcdp->fullBus(c+153,(0x64U),16);
        vcdp->fullBus(c+161,(0xc9U),16);
        vcdp->fullBit(c+169,(1U));
        vcdp->fullBus(c+177,(0U),2);
    }
}
