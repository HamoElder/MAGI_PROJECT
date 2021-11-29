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
        vcdp->declBit(c+305,"raw_data_valid", false,-1);
        vcdp->declBus(c+313,"raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+321,"raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+329,"phiCorrect_valid", false,-1);
        vcdp->declBus(c+337,"phiCorrect_payload", false,-1, 31,0);
        vcdp->declBit(c+345,"rotated_data_valid", false,-1);
        vcdp->declBus(c+353,"rotated_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+361,"rotated_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+369,"clk", false,-1);
        vcdp->declBit(c+377,"reset", false,-1);
        vcdp->declBit(c+305,"PhaseRotator raw_data_valid", false,-1);
        vcdp->declBus(c+313,"PhaseRotator raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+321,"PhaseRotator raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+329,"PhaseRotator phiCorrect_valid", false,-1);
        vcdp->declBus(c+337,"PhaseRotator phiCorrect_payload", false,-1, 31,0);
        vcdp->declBit(c+345,"PhaseRotator rotated_data_valid", false,-1);
        vcdp->declBus(c+353,"PhaseRotator rotated_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+361,"PhaseRotator rotated_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+369,"PhaseRotator clk", false,-1);
        vcdp->declBit(c+377,"PhaseRotator reset", false,-1);
        vcdp->declBus(c+385,"PhaseRotator cordic_pipeline_core_raw_data_payload_x", false,-1, 31,0);
        vcdp->declBus(c+393,"PhaseRotator cordic_pipeline_core_raw_data_payload_y", false,-1, 31,0);
        vcdp->declBit(c+401,"PhaseRotator shiftRegister_1_clc", false,-1);
        vcdp->declBit(c+409,"PhaseRotator cordic_pipeline_core_raw_data_ready", false,-1);
        vcdp->declBit(c+281,"PhaseRotator cordic_pipeline_core_result_valid", false,-1);
        vcdp->declBus(c+121,"PhaseRotator cordic_pipeline_core_result_payload_x", false,-1, 31,0);
        vcdp->declBus(c+129,"PhaseRotator cordic_pipeline_core_result_payload_y", false,-1, 31,0);
        vcdp->declBus(c+137,"PhaseRotator cordic_pipeline_core_result_payload_z", false,-1, 31,0);
        vcdp->declBit(c+145,"PhaseRotator shiftRegister_1_output_1", false,-1);
        vcdp->declBit(c+289,"PhaseRotator xy_symbol", false,-1);
        vcdp->declBus(c+153,"PhaseRotator phi", false,-1, 31,0);
        vcdp->declBus(c+97,"PhaseRotator phiNext", false,-1, 31,0);
        vcdp->declBus(c+297,"PhaseRotator phiCorrect", false,-1, 31,0);
        vcdp->declBus(c+417,"PhaseRotator math_pi", false,-1, 31,0);
        vcdp->declBus(c+425,"PhaseRotator math_pi_2", false,-1, 31,0);
        vcdp->declBus(c+433,"PhaseRotator neg_math_pi_2", false,-1, 31,0);
        vcdp->declBit(c+105,"PhaseRotator when_PhaseRotator_l47", false,-1);
        vcdp->declBit(c+113,"PhaseRotator when_PhaseRotator_l50", false,-1);
        vcdp->declBit(c+1,"PhaseRotator when_SInt_l332", false,-1);
        vcdp->declBit(c+9,"PhaseRotator when_SInt_l186", false,-1);
        vcdp->declBus(c+17,"PhaseRotator rotated_x_raw", false,-1, 15,0);
        vcdp->declBit(c+25,"PhaseRotator when_SInt_l125", false,-1);
        vcdp->declBit(c+33,"PhaseRotator when_SInt_l126", false,-1);
        vcdp->declBit(c+41,"PhaseRotator when_SInt_l132", false,-1);
        vcdp->declBit(c+49,"PhaseRotator when_SInt_l332_1", false,-1);
        vcdp->declBit(c+57,"PhaseRotator when_SInt_l186_1", false,-1);
        vcdp->declBus(c+65,"PhaseRotator rotated_y_raw", false,-1, 15,0);
        vcdp->declBit(c+73,"PhaseRotator when_SInt_l125_1", false,-1);
        vcdp->declBit(c+81,"PhaseRotator when_SInt_l126_1", false,-1);
        vcdp->declBit(c+89,"PhaseRotator when_SInt_l132_1", false,-1);
        vcdp->declBit(c+409,"PhaseRotator cordic_pipeline_core rotate_mode", false,-1);
        vcdp->declBus(c+441,"PhaseRotator cordic_pipeline_core x_u", false,-1, 1,0);
        vcdp->declBit(c+305,"PhaseRotator cordic_pipeline_core raw_data_valid", false,-1);
        vcdp->declBit(c+409,"PhaseRotator cordic_pipeline_core raw_data_ready", false,-1);
        vcdp->declBus(c+385,"PhaseRotator cordic_pipeline_core raw_data_payload_x", false,-1, 31,0);
        vcdp->declBus(c+393,"PhaseRotator cordic_pipeline_core raw_data_payload_y", false,-1, 31,0);
        vcdp->declBus(c+153,"PhaseRotator cordic_pipeline_core raw_data_payload_z", false,-1, 31,0);
        vcdp->declBit(c+281,"PhaseRotator cordic_pipeline_core result_valid", false,-1);
        vcdp->declBus(c+121,"PhaseRotator cordic_pipeline_core result_payload_x", false,-1, 31,0);
        vcdp->declBus(c+129,"PhaseRotator cordic_pipeline_core result_payload_y", false,-1, 31,0);
        vcdp->declBus(c+137,"PhaseRotator cordic_pipeline_core result_payload_z", false,-1, 31,0);
        vcdp->declBit(c+369,"PhaseRotator cordic_pipeline_core clk", false,-1);
        vcdp->declBit(c+377,"PhaseRotator cordic_pipeline_core reset", false,-1);
        vcdp->declBit(c+305,"PhaseRotator cordic_pipeline_core raw_data_fire", false,-1);
        vcdp->declBit(c+289,"PhaseRotator shiftRegister_1 input_1", false,-1);
        vcdp->declBit(c+145,"PhaseRotator shiftRegister_1 output_1", false,-1);
        vcdp->declBit(c+305,"PhaseRotator shiftRegister_1 enable", false,-1);
        vcdp->declBit(c+401,"PhaseRotator shiftRegister_1 clc", false,-1);
        vcdp->declBit(c+369,"PhaseRotator shiftRegister_1 clk", false,-1);
        vcdp->declBit(c+377,"PhaseRotator shiftRegister_1 reset", false,-1);
        vcdp->declBit(c+161,"PhaseRotator shiftRegister_1 shift_reg_0", false,-1);
        vcdp->declBit(c+169,"PhaseRotator shiftRegister_1 shift_reg_1", false,-1);
        vcdp->declBit(c+177,"PhaseRotator shiftRegister_1 shift_reg_2", false,-1);
        vcdp->declBit(c+185,"PhaseRotator shiftRegister_1 shift_reg_3", false,-1);
        vcdp->declBit(c+193,"PhaseRotator shiftRegister_1 shift_reg_4", false,-1);
        vcdp->declBit(c+201,"PhaseRotator shiftRegister_1 shift_reg_5", false,-1);
        vcdp->declBit(c+209,"PhaseRotator shiftRegister_1 shift_reg_6", false,-1);
        vcdp->declBit(c+217,"PhaseRotator shiftRegister_1 shift_reg_7", false,-1);
        vcdp->declBit(c+225,"PhaseRotator shiftRegister_1 shift_reg_8", false,-1);
        vcdp->declBit(c+233,"PhaseRotator shiftRegister_1 shift_reg_9", false,-1);
        vcdp->declBit(c+241,"PhaseRotator shiftRegister_1 shift_reg_10", false,-1);
        vcdp->declBit(c+249,"PhaseRotator shiftRegister_1 shift_reg_11", false,-1);
        vcdp->declBit(c+257,"PhaseRotator shiftRegister_1 shift_reg_12", false,-1);
        vcdp->declBit(c+265,"PhaseRotator shiftRegister_1 shift_reg_13", false,-1);
        vcdp->declBit(c+273,"PhaseRotator shiftRegister_1 shift_reg_14", false,-1);
        vcdp->declBit(c+145,"PhaseRotator shiftRegister_1 shift_reg_15", false,-1);
    }
}

void VPhaseRotator::traceFullThis__1(VPhaseRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,((1U & (IData)((VL_ULL(1) 
                                          & ((VL_ULL(0x1ffff8000) 
                                              + vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                             >> 0x20U))))));
        vcdp->fullBit(c+9,((0U != (0xffffU & ((IData)(0x8000U) 
                                              + (IData)(vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_2))))));
        vcdp->fullBus(c+17,(vlTOPp->PhaseRotator__DOT__rotated_x_raw),16);
        vcdp->fullBit(c+25,((1U & (vlTOPp->PhaseRotator__DOT___zz_rotated_x_raw 
                                   >> 0x10U))));
        vcdp->fullBit(c+33,((3U != (3U & (vlTOPp->PhaseRotator__DOT___zz_rotated_x_raw 
                                          >> 0xfU)))));
        vcdp->fullBit(c+41,((1U & (vlTOPp->PhaseRotator__DOT___zz_rotated_x_raw 
                                   >> 0xfU))));
        vcdp->fullBit(c+49,((1U & (IData)((VL_ULL(1) 
                                           & ((VL_ULL(0x1ffff8000) 
                                               + vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                              >> 0x20U))))));
        vcdp->fullBit(c+57,((0U != (0xffffU & ((IData)(0x8000U) 
                                               + (IData)(vlTOPp->PhaseRotator__DOT___zz___05Fzz_when_SInt_l332_5))))));
        vcdp->fullBus(c+65,(vlTOPp->PhaseRotator__DOT__rotated_y_raw),16);
        vcdp->fullBit(c+73,((1U & (vlTOPp->PhaseRotator__DOT___zz_rotated_y_raw 
                                   >> 0x10U))));
        vcdp->fullBit(c+81,((3U != (3U & (vlTOPp->PhaseRotator__DOT___zz_rotated_y_raw 
                                          >> 0xfU)))));
        vcdp->fullBit(c+89,((1U & (vlTOPp->PhaseRotator__DOT___zz_rotated_y_raw 
                                   >> 0xfU))));
        vcdp->fullBus(c+97,((VL_LTS_III(1,32,32, 0x1921fU, vlTOPp->PhaseRotator__DOT___zz_when_PhaseRotator_l47)
                              ? ((vlTOPp->PhaseRotator__DOT__phi 
                                  - (IData)(0x3243fU)) 
                                 + vlTOPp->PhaseRotator__DOT__phiCorrect)
                              : (VL_GTS_III(1,32,32, 0xfffe6de1U, vlTOPp->PhaseRotator__DOT___zz_when_PhaseRotator_l47)
                                  ? ((IData)(0x3243fU) 
                                     + (vlTOPp->PhaseRotator__DOT__phi 
                                        + vlTOPp->PhaseRotator__DOT__phiCorrect))
                                  : (vlTOPp->PhaseRotator__DOT__phi 
                                     + vlTOPp->PhaseRotator__DOT__phiCorrect)))),32);
        vcdp->fullBit(c+105,(VL_LTS_III(1,32,32, 0x1921fU, vlTOPp->PhaseRotator__DOT___zz_when_PhaseRotator_l47)));
        vcdp->fullBit(c+113,(VL_GTS_III(1,32,32, 0xfffe6de1U, vlTOPp->PhaseRotator__DOT___zz_when_PhaseRotator_l47)));
        vcdp->fullBus(c+121,(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15),32);
        vcdp->fullBus(c+129,(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y),32);
        vcdp->fullBus(c+137,(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z),32);
        vcdp->fullBit(c+145,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_15));
        vcdp->fullBus(c+153,(vlTOPp->PhaseRotator__DOT__phi),32);
        vcdp->fullBit(c+161,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_0));
        vcdp->fullBit(c+169,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_1));
        vcdp->fullBit(c+177,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_2));
        vcdp->fullBit(c+185,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_3));
        vcdp->fullBit(c+193,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_4));
        vcdp->fullBit(c+201,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_5));
        vcdp->fullBit(c+209,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_6));
        vcdp->fullBit(c+217,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_7));
        vcdp->fullBit(c+225,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_8));
        vcdp->fullBit(c+233,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_9));
        vcdp->fullBit(c+241,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_10));
        vcdp->fullBit(c+249,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_11));
        vcdp->fullBit(c+257,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_12));
        vcdp->fullBit(c+265,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_13));
        vcdp->fullBit(c+273,(vlTOPp->PhaseRotator__DOT__shiftRegister_1__DOT__shift_reg_14));
        vcdp->fullBit(c+281,(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_15));
        vcdp->fullBit(c+289,(vlTOPp->PhaseRotator__DOT__xy_symbol));
        vcdp->fullBus(c+297,(vlTOPp->PhaseRotator__DOT__phiCorrect),32);
        vcdp->fullBit(c+305,(vlTOPp->raw_data_valid));
        vcdp->fullBus(c+313,(vlTOPp->raw_data_payload_cha_i),16);
        vcdp->fullBus(c+321,(vlTOPp->raw_data_payload_cha_q),16);
        vcdp->fullBit(c+329,(vlTOPp->phiCorrect_valid));
        vcdp->fullBus(c+337,(vlTOPp->phiCorrect_payload),32);
        vcdp->fullBit(c+345,(vlTOPp->rotated_data_valid));
        vcdp->fullBus(c+353,(vlTOPp->rotated_data_payload_cha_i),16);
        vcdp->fullBus(c+361,(vlTOPp->rotated_data_payload_cha_q),16);
        vcdp->fullBit(c+369,(vlTOPp->clk));
        vcdp->fullBit(c+377,(vlTOPp->reset));
        vcdp->fullBus(c+385,(((IData)(vlTOPp->raw_data_payload_cha_i) 
                              << 0x10U)),32);
        vcdp->fullBus(c+393,(((IData)(vlTOPp->raw_data_payload_cha_q) 
                              << 0x10U)),32);
        vcdp->fullBit(c+401,((1U & (~ (IData)(vlTOPp->raw_data_valid)))));
        vcdp->fullBit(c+409,(1U));
        vcdp->fullBus(c+417,(0x3243fU),32);
        vcdp->fullBus(c+425,(0x1921fU),32);
        vcdp->fullBus(c+433,(0xfffe6de1U),32);
        vcdp->fullBus(c+441,(0U),2);
    }
}
