// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCorrelator__Syms.h"


//======================

void VCorrelator::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VCorrelator::traceInit, &VCorrelator::traceFull, &VCorrelator::traceChg, this);
}
void VCorrelator::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VCorrelator* t = (VCorrelator*)userthis;
    VCorrelator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VCorrelator::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCorrelator* t = (VCorrelator*)userthis;
    VCorrelator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VCorrelator::traceInitThis(VCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VCorrelator::traceFullThis(VCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCorrelator::traceInitThis__1(VCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+121,"raw_data_0_valid", false,-1);
        vcdp->declBus(c+129,"raw_data_0_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+137,"raw_data_0_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+145,"raw_data_1_valid", false,-1);
        vcdp->declBus(c+153,"raw_data_1_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+161,"raw_data_1_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+169,"corr_result_valid", false,-1);
        vcdp->declBus(c+177,"corr_result_payload_cha_i", false,-1, 31,0);
        vcdp->declBus(c+185,"corr_result_payload_cha_q", false,-1, 31,0);
        vcdp->declBit(c+193,"clk", false,-1);
        vcdp->declBit(c+201,"reset", false,-1);
        vcdp->declBit(c+121,"Correlator raw_data_0_valid", false,-1);
        vcdp->declBus(c+129,"Correlator raw_data_0_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+137,"Correlator raw_data_0_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+145,"Correlator raw_data_1_valid", false,-1);
        vcdp->declBus(c+153,"Correlator raw_data_1_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+161,"Correlator raw_data_1_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+169,"Correlator corr_result_valid", false,-1);
        vcdp->declBus(c+177,"Correlator corr_result_payload_cha_i", false,-1, 31,0);
        vcdp->declBus(c+185,"Correlator corr_result_payload_cha_q", false,-1, 31,0);
        vcdp->declBit(c+193,"Correlator clk", false,-1);
        vcdp->declBit(c+201,"Correlator reset", false,-1);
        vcdp->declBus(c+9,"Correlator shiftRegisterE_2_output_1", false,-1, 31,0);
        vcdp->declBus(c+17,"Correlator shiftRegisterE_3_output_1", false,-1, 31,0);
        vcdp->declBus(c+25,"Correlator corr_val_i", false,-1, 31,0);
        vcdp->declBus(c+33,"Correlator corr_val_q", false,-1, 31,0);
        vcdp->declBus(c+1,"Correlator k1", false,-1, 31,0);
        vcdp->declBus(c+209,"Correlator k2", false,-1, 31,0);
        vcdp->declBus(c+217,"Correlator k3", false,-1, 31,0);
        vcdp->declBus(c+41,"Correlator mul_i", false,-1, 31,0);
        vcdp->declBus(c+49,"Correlator mul_q", false,-1, 31,0);
        vcdp->declBit(c+57,"Correlator mul_data_valid", false,-1);
        vcdp->declBit(c+65,"Correlator corr_result_valid_1", false,-1);
        vcdp->declBus(c+41,"Correlator shiftRegisterE_2 input_1", false,-1, 31,0);
        vcdp->declBus(c+9,"Correlator shiftRegisterE_2 output_1", false,-1, 31,0);
        vcdp->declBit(c+57,"Correlator shiftRegisterE_2 enable", false,-1);
        vcdp->declBit(c+193,"Correlator shiftRegisterE_2 clk", false,-1);
        vcdp->declBit(c+201,"Correlator shiftRegisterE_2 reset", false,-1);
        vcdp->declBus(c+73,"Correlator shiftRegisterE_2 shift_reg_0", false,-1, 31,0);
        vcdp->declBus(c+81,"Correlator shiftRegisterE_2 shift_reg_1", false,-1, 31,0);
        vcdp->declBus(c+89,"Correlator shiftRegisterE_2 shift_reg_2", false,-1, 31,0);
        vcdp->declBus(c+9,"Correlator shiftRegisterE_2 shift_reg_3", false,-1, 31,0);
        vcdp->declBus(c+49,"Correlator shiftRegisterE_3 input_1", false,-1, 31,0);
        vcdp->declBus(c+17,"Correlator shiftRegisterE_3 output_1", false,-1, 31,0);
        vcdp->declBit(c+57,"Correlator shiftRegisterE_3 enable", false,-1);
        vcdp->declBit(c+193,"Correlator shiftRegisterE_3 clk", false,-1);
        vcdp->declBit(c+201,"Correlator shiftRegisterE_3 reset", false,-1);
        vcdp->declBus(c+97,"Correlator shiftRegisterE_3 shift_reg_0", false,-1, 31,0);
        vcdp->declBus(c+105,"Correlator shiftRegisterE_3 shift_reg_1", false,-1, 31,0);
        vcdp->declBus(c+113,"Correlator shiftRegisterE_3 shift_reg_2", false,-1, 31,0);
        vcdp->declBus(c+17,"Correlator shiftRegisterE_3 shift_reg_3", false,-1, 31,0);
    }
}

void VCorrelator::traceFullThis__1(VCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->Correlator__DOT__k1),32);
        vcdp->fullBus(c+9,(vlTOPp->Correlator__DOT__shiftRegisterE_2__DOT__shift_reg_3),32);
        vcdp->fullBus(c+17,(vlTOPp->Correlator__DOT__shiftRegisterE_3__DOT__shift_reg_3),32);
        vcdp->fullBus(c+25,(vlTOPp->Correlator__DOT__corr_val_i),32);
        vcdp->fullBus(c+33,(vlTOPp->Correlator__DOT__corr_val_q),32);
        vcdp->fullBus(c+41,(vlTOPp->Correlator__DOT__mul_i),32);
        vcdp->fullBus(c+49,(vlTOPp->Correlator__DOT__mul_q),32);
        vcdp->fullBit(c+57,(vlTOPp->Correlator__DOT__mul_data_valid));
        vcdp->fullBit(c+65,(vlTOPp->Correlator__DOT__corr_result_valid_1));
        vcdp->fullBus(c+73,(vlTOPp->Correlator__DOT__shiftRegisterE_2__DOT__shift_reg_0),32);
        vcdp->fullBus(c+81,(vlTOPp->Correlator__DOT__shiftRegisterE_2__DOT__shift_reg_1),32);
        vcdp->fullBus(c+89,(vlTOPp->Correlator__DOT__shiftRegisterE_2__DOT__shift_reg_2),32);
        vcdp->fullBus(c+97,(vlTOPp->Correlator__DOT__shiftRegisterE_3__DOT__shift_reg_0),32);
        vcdp->fullBus(c+105,(vlTOPp->Correlator__DOT__shiftRegisterE_3__DOT__shift_reg_1),32);
        vcdp->fullBus(c+113,(vlTOPp->Correlator__DOT__shiftRegisterE_3__DOT__shift_reg_2),32);
        vcdp->fullBit(c+121,(vlTOPp->raw_data_0_valid));
        vcdp->fullBus(c+129,(vlTOPp->raw_data_0_payload_cha_i),16);
        vcdp->fullBus(c+137,(vlTOPp->raw_data_0_payload_cha_q),16);
        vcdp->fullBit(c+145,(vlTOPp->raw_data_1_valid));
        vcdp->fullBus(c+153,(vlTOPp->raw_data_1_payload_cha_i),16);
        vcdp->fullBus(c+161,(vlTOPp->raw_data_1_payload_cha_q),16);
        vcdp->fullBit(c+169,(vlTOPp->corr_result_valid));
        vcdp->fullBus(c+177,(vlTOPp->corr_result_payload_cha_i),32);
        vcdp->fullBus(c+185,(vlTOPp->corr_result_payload_cha_q),32);
        vcdp->fullBit(c+193,(vlTOPp->clk));
        vcdp->fullBit(c+201,(vlTOPp->reset));
        vcdp->fullBus(c+209,(VL_MULS_III(32,32,32, 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_0_payload_cha_i)), 
                                         VL_EXTENDS_II(32,16, 
                                                       (0xffffU 
                                                        & ((IData)(vlTOPp->raw_data_1_payload_cha_q) 
                                                           + (IData)(vlTOPp->raw_data_1_payload_cha_i)))))),32);
        vcdp->fullBus(c+217,(VL_MULS_III(32,32,32, 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_0_payload_cha_q)), 
                                         VL_EXTENDS_II(32,16, 
                                                       (0xffffU 
                                                        & ((IData)(vlTOPp->raw_data_1_payload_cha_i) 
                                                           - (IData)(vlTOPp->raw_data_1_payload_cha_q)))))),32);
    }
}
