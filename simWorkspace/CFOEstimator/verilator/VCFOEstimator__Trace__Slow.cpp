// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCFOEstimator__Syms.h"


//======================

void VCFOEstimator::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VCFOEstimator::traceInit, &VCFOEstimator::traceFull, &VCFOEstimator::traceChg, this);
}
void VCFOEstimator::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VCFOEstimator* t = (VCFOEstimator*)userthis;
    VCFOEstimator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VCFOEstimator::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCFOEstimator* t = (VCFOEstimator*)userthis;
    VCFOEstimator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VCFOEstimator::traceInitThis(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VCFOEstimator::traceFullThis(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCFOEstimator::traceInitThis__1(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+1489,"rotated_data_valid", false,-1);
        vcdp->declBus(c+1497,"rotated_data_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+1505,"rotated_data_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+1513,"delta_phi_valid", false,-1);
        vcdp->declBus(c+1521,"delta_phi_payload", false,-1, 23,0);
        vcdp->declBit(c+1529,"clk", false,-1);
        vcdp->declBit(c+1537,"reset", false,-1);
        vcdp->declBit(c+1489,"CFOEstimator rotated_data_valid", false,-1);
        vcdp->declBus(c+1497,"CFOEstimator rotated_data_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+1505,"CFOEstimator rotated_data_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+1513,"CFOEstimator delta_phi_valid", false,-1);
        vcdp->declBus(c+1521,"CFOEstimator delta_phi_payload", false,-1, 23,0);
        vcdp->declBit(c+1529,"CFOEstimator clk", false,-1);
        vcdp->declBit(c+1537,"CFOEstimator reset", false,-1);
        vcdp->declBit(c+121,"CFOEstimator auto_corr_core_corr_result_valid", false,-1);
        vcdp->declQuad(c+129,"CFOEstimator auto_corr_core_corr_result_payload_cha_i", false,-1, 43,0);
        vcdp->declQuad(c+145,"CFOEstimator auto_corr_core_corr_result_payload_cha_q", false,-1, 43,0);
        vcdp->declBit(c+1553,"CFOEstimator cordic_core_raw_data_ready", false,-1);
        vcdp->declBit(c+161,"CFOEstimator cordic_core_result_valid", false,-1);
        vcdp->declBus(c+97,"CFOEstimator cordic_core_result_payload_x", false,-1, 23,0);
        vcdp->declBus(c+105,"CFOEstimator cordic_core_result_payload_y", false,-1, 23,0);
        vcdp->declBus(c+113,"CFOEstimator cordic_core_result_payload_z", false,-1, 23,0);
        vcdp->declBus(c+169,"CFOEstimator impulse_cnt", false,-1, 5,0);
        vcdp->declBit(c+1,"CFOEstimator when_SInt_l337", false,-1);
        vcdp->declBit(c+9,"CFOEstimator when_SInt_l191", false,-1);
        vcdp->declBit(c+17,"CFOEstimator when_SInt_l130", false,-1);
        vcdp->declBit(c+25,"CFOEstimator when_SInt_l131", false,-1);
        vcdp->declBit(c+33,"CFOEstimator when_SInt_l137", false,-1);
        vcdp->declBit(c+41,"CFOEstimator when_SInt_l337_1", false,-1);
        vcdp->declBit(c+49,"CFOEstimator when_SInt_l191_1", false,-1);
        vcdp->declBit(c+57,"CFOEstimator when_SInt_l130_1", false,-1);
        vcdp->declBit(c+65,"CFOEstimator when_SInt_l131_1", false,-1);
        vcdp->declBit(c+73,"CFOEstimator when_SInt_l137_1", false,-1);
        vcdp->declBit(c+1489,"CFOEstimator auto_corr_core raw_data_valid", false,-1);
        vcdp->declBus(c+1497,"CFOEstimator auto_corr_core raw_data_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+1505,"CFOEstimator auto_corr_core raw_data_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+121,"CFOEstimator auto_corr_core corr_result_valid", false,-1);
        vcdp->declQuad(c+129,"CFOEstimator auto_corr_core corr_result_payload_cha_i", false,-1, 43,0);
        vcdp->declQuad(c+145,"CFOEstimator auto_corr_core corr_result_payload_cha_q", false,-1, 43,0);
        vcdp->declBit(c+1529,"CFOEstimator auto_corr_core clk", false,-1);
        vcdp->declBit(c+1537,"CFOEstimator auto_corr_core reset", false,-1);
        vcdp->declBit(c+1545,"CFOEstimator auto_corr_core shiftRegister_3_clc", false,-1);
        vcdp->declBit(c+177,"CFOEstimator auto_corr_core shiftRegister_3_output_valid", false,-1);
        vcdp->declBus(c+185,"CFOEstimator auto_corr_core shiftRegister_3_output_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+193,"CFOEstimator auto_corr_core shiftRegister_3_output_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+121,"CFOEstimator auto_corr_core corr_core_corr_result_valid", false,-1);
        vcdp->declQuad(c+129,"CFOEstimator auto_corr_core corr_core_corr_result_payload_cha_i", false,-1, 43,0);
        vcdp->declQuad(c+145,"CFOEstimator auto_corr_core corr_core_corr_result_payload_cha_q", false,-1, 43,0);
        vcdp->declBit(c+1489,"CFOEstimator auto_corr_core shiftRegister_3 input_valid", false,-1);
        vcdp->declBus(c+1497,"CFOEstimator auto_corr_core shiftRegister_3 input_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+1505,"CFOEstimator auto_corr_core shiftRegister_3 input_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+177,"CFOEstimator auto_corr_core shiftRegister_3 output_valid", false,-1);
        vcdp->declBus(c+185,"CFOEstimator auto_corr_core shiftRegister_3 output_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+193,"CFOEstimator auto_corr_core shiftRegister_3 output_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+1489,"CFOEstimator auto_corr_core shiftRegister_3 enable", false,-1);
        vcdp->declBit(c+1545,"CFOEstimator auto_corr_core shiftRegister_3 clc", false,-1);
        vcdp->declBit(c+1529,"CFOEstimator auto_corr_core shiftRegister_3 clk", false,-1);
        vcdp->declBit(c+1537,"CFOEstimator auto_corr_core shiftRegister_3 reset", false,-1);
        vcdp->declBit(c+201,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_0_valid", false,-1);
        vcdp->declBus(c+209,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_0_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+217,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_0_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+225,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_1_valid", false,-1);
        vcdp->declBus(c+233,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_1_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+241,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_1_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+249,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_2_valid", false,-1);
        vcdp->declBus(c+257,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_2_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+265,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_2_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+273,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_3_valid", false,-1);
        vcdp->declBus(c+281,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_3_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+289,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_3_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+297,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_4_valid", false,-1);
        vcdp->declBus(c+305,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_4_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+313,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_4_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+321,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_5_valid", false,-1);
        vcdp->declBus(c+329,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_5_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+337,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_5_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+345,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_6_valid", false,-1);
        vcdp->declBus(c+353,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_6_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+361,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_6_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+369,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_7_valid", false,-1);
        vcdp->declBus(c+377,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_7_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+385,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_7_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+393,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_8_valid", false,-1);
        vcdp->declBus(c+401,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_8_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+409,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_8_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+417,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_9_valid", false,-1);
        vcdp->declBus(c+425,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_9_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+433,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_9_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+441,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_10_valid", false,-1);
        vcdp->declBus(c+449,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_10_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+457,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_10_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+465,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_11_valid", false,-1);
        vcdp->declBus(c+473,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_11_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+481,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_11_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+489,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_12_valid", false,-1);
        vcdp->declBus(c+497,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_12_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+505,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_12_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+513,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_13_valid", false,-1);
        vcdp->declBus(c+521,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_13_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+529,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_13_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+537,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_14_valid", false,-1);
        vcdp->declBus(c+545,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_14_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+553,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_14_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+561,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_15_valid", false,-1);
        vcdp->declBus(c+569,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_15_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+577,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_15_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+585,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_16_valid", false,-1);
        vcdp->declBus(c+593,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_16_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+601,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_16_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+609,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_17_valid", false,-1);
        vcdp->declBus(c+617,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_17_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+625,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_17_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+633,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_18_valid", false,-1);
        vcdp->declBus(c+641,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_18_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+649,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_18_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+657,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_19_valid", false,-1);
        vcdp->declBus(c+665,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_19_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+673,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_19_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+681,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_20_valid", false,-1);
        vcdp->declBus(c+689,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_20_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+697,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_20_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+705,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_21_valid", false,-1);
        vcdp->declBus(c+713,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_21_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+721,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_21_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+729,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_22_valid", false,-1);
        vcdp->declBus(c+737,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_22_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+745,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_22_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+753,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_23_valid", false,-1);
        vcdp->declBus(c+761,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_23_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+769,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_23_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+777,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_24_valid", false,-1);
        vcdp->declBus(c+785,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_24_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+793,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_24_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+801,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_25_valid", false,-1);
        vcdp->declBus(c+809,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_25_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+817,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_25_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+825,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_26_valid", false,-1);
        vcdp->declBus(c+833,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_26_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+841,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_26_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+849,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_27_valid", false,-1);
        vcdp->declBus(c+857,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_27_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+865,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_27_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+873,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_28_valid", false,-1);
        vcdp->declBus(c+881,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_28_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+889,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_28_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+897,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_29_valid", false,-1);
        vcdp->declBus(c+905,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_29_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+913,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_29_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+921,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_30_valid", false,-1);
        vcdp->declBus(c+929,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_30_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+937,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_30_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+177,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_31_valid", false,-1);
        vcdp->declBus(c+185,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_31_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+193,"CFOEstimator auto_corr_core shiftRegister_3 shift_reg_31_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+1489,"CFOEstimator auto_corr_core corr_core raw_data_0_valid", false,-1);
        vcdp->declBus(c+1497,"CFOEstimator auto_corr_core corr_core raw_data_0_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+1505,"CFOEstimator auto_corr_core corr_core raw_data_0_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+177,"CFOEstimator auto_corr_core corr_core raw_data_1_valid", false,-1);
        vcdp->declBus(c+185,"CFOEstimator auto_corr_core corr_core raw_data_1_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+193,"CFOEstimator auto_corr_core corr_core raw_data_1_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+121,"CFOEstimator auto_corr_core corr_core corr_result_valid", false,-1);
        vcdp->declQuad(c+129,"CFOEstimator auto_corr_core corr_core corr_result_payload_cha_i", false,-1, 43,0);
        vcdp->declQuad(c+145,"CFOEstimator auto_corr_core corr_core corr_result_payload_cha_q", false,-1, 43,0);
        vcdp->declBit(c+1529,"CFOEstimator auto_corr_core corr_core clk", false,-1);
        vcdp->declBit(c+1537,"CFOEstimator auto_corr_core corr_core reset", false,-1);
        vcdp->declBit(c+945,"CFOEstimator auto_corr_core corr_core shiftRegister_3_clc", false,-1);
        vcdp->declBit(c+945,"CFOEstimator auto_corr_core corr_core shiftRegister_4_clc", false,-1);
        vcdp->declBus(c+953,"CFOEstimator auto_corr_core corr_core shiftRegister_3_output_1", false,-1, 23,0);
        vcdp->declBus(c+961,"CFOEstimator auto_corr_core corr_core shiftRegister_4_output_1", false,-1, 23,0);
        vcdp->declQuad(c+129,"CFOEstimator auto_corr_core corr_core corr_val_i", false,-1, 43,0);
        vcdp->declQuad(c+145,"CFOEstimator auto_corr_core corr_core corr_val_q", false,-1, 43,0);
        vcdp->declBus(c+969,"CFOEstimator auto_corr_core corr_core shiftRegister_3 input_1", false,-1, 23,0);
        vcdp->declBus(c+953,"CFOEstimator auto_corr_core corr_core shiftRegister_3 output_1", false,-1, 23,0);
        vcdp->declBit(c+977,"CFOEstimator auto_corr_core corr_core shiftRegister_3 enable", false,-1);
        vcdp->declBit(c+945,"CFOEstimator auto_corr_core corr_core shiftRegister_3 clc", false,-1);
        vcdp->declBit(c+1529,"CFOEstimator auto_corr_core corr_core shiftRegister_3 clk", false,-1);
        vcdp->declBit(c+1537,"CFOEstimator auto_corr_core corr_core shiftRegister_3 reset", false,-1);
        vcdp->declBus(c+985,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_0", false,-1, 23,0);
        vcdp->declBus(c+993,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_1", false,-1, 23,0);
        vcdp->declBus(c+1001,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_2", false,-1, 23,0);
        vcdp->declBus(c+1009,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_3", false,-1, 23,0);
        vcdp->declBus(c+1017,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_4", false,-1, 23,0);
        vcdp->declBus(c+1025,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_5", false,-1, 23,0);
        vcdp->declBus(c+1033,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_6", false,-1, 23,0);
        vcdp->declBus(c+1041,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_7", false,-1, 23,0);
        vcdp->declBus(c+1049,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_8", false,-1, 23,0);
        vcdp->declBus(c+1057,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_9", false,-1, 23,0);
        vcdp->declBus(c+1065,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_10", false,-1, 23,0);
        vcdp->declBus(c+1073,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_11", false,-1, 23,0);
        vcdp->declBus(c+1081,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_12", false,-1, 23,0);
        vcdp->declBus(c+1089,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_13", false,-1, 23,0);
        vcdp->declBus(c+1097,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_14", false,-1, 23,0);
        vcdp->declBus(c+1105,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_15", false,-1, 23,0);
        vcdp->declBus(c+1113,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_16", false,-1, 23,0);
        vcdp->declBus(c+1121,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_17", false,-1, 23,0);
        vcdp->declBus(c+1129,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_18", false,-1, 23,0);
        vcdp->declBus(c+1137,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_19", false,-1, 23,0);
        vcdp->declBus(c+1145,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_20", false,-1, 23,0);
        vcdp->declBus(c+1153,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_21", false,-1, 23,0);
        vcdp->declBus(c+1161,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_22", false,-1, 23,0);
        vcdp->declBus(c+1169,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_23", false,-1, 23,0);
        vcdp->declBus(c+1177,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_24", false,-1, 23,0);
        vcdp->declBus(c+1185,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_25", false,-1, 23,0);
        vcdp->declBus(c+1193,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_26", false,-1, 23,0);
        vcdp->declBus(c+1201,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_27", false,-1, 23,0);
        vcdp->declBus(c+1209,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_28", false,-1, 23,0);
        vcdp->declBus(c+1217,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_29", false,-1, 23,0);
        vcdp->declBus(c+1225,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_30", false,-1, 23,0);
        vcdp->declBus(c+953,"CFOEstimator auto_corr_core corr_core shiftRegister_3 shift_reg_31", false,-1, 23,0);
        vcdp->declBus(c+1233,"CFOEstimator auto_corr_core corr_core shiftRegister_4 input_1", false,-1, 23,0);
        vcdp->declBus(c+961,"CFOEstimator auto_corr_core corr_core shiftRegister_4 output_1", false,-1, 23,0);
        vcdp->declBit(c+977,"CFOEstimator auto_corr_core corr_core shiftRegister_4 enable", false,-1);
        vcdp->declBit(c+945,"CFOEstimator auto_corr_core corr_core shiftRegister_4 clc", false,-1);
        vcdp->declBit(c+1529,"CFOEstimator auto_corr_core corr_core shiftRegister_4 clk", false,-1);
        vcdp->declBit(c+1537,"CFOEstimator auto_corr_core corr_core shiftRegister_4 reset", false,-1);
        vcdp->declBus(c+1241,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_0", false,-1, 23,0);
        vcdp->declBus(c+1249,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_1", false,-1, 23,0);
        vcdp->declBus(c+1257,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_2", false,-1, 23,0);
        vcdp->declBus(c+1265,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_3", false,-1, 23,0);
        vcdp->declBus(c+1273,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_4", false,-1, 23,0);
        vcdp->declBus(c+1281,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_5", false,-1, 23,0);
        vcdp->declBus(c+1289,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_6", false,-1, 23,0);
        vcdp->declBus(c+1297,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_7", false,-1, 23,0);
        vcdp->declBus(c+1305,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_8", false,-1, 23,0);
        vcdp->declBus(c+1313,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_9", false,-1, 23,0);
        vcdp->declBus(c+1321,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_10", false,-1, 23,0);
        vcdp->declBus(c+1329,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_11", false,-1, 23,0);
        vcdp->declBus(c+1337,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_12", false,-1, 23,0);
        vcdp->declBus(c+1345,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_13", false,-1, 23,0);
        vcdp->declBus(c+1353,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_14", false,-1, 23,0);
        vcdp->declBus(c+1361,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_15", false,-1, 23,0);
        vcdp->declBus(c+1369,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_16", false,-1, 23,0);
        vcdp->declBus(c+1377,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_17", false,-1, 23,0);
        vcdp->declBus(c+1385,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_18", false,-1, 23,0);
        vcdp->declBus(c+1393,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_19", false,-1, 23,0);
        vcdp->declBus(c+1401,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_20", false,-1, 23,0);
        vcdp->declBus(c+1409,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_21", false,-1, 23,0);
        vcdp->declBus(c+1417,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_22", false,-1, 23,0);
        vcdp->declBus(c+1425,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_23", false,-1, 23,0);
        vcdp->declBus(c+1433,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_24", false,-1, 23,0);
        vcdp->declBus(c+1441,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_25", false,-1, 23,0);
        vcdp->declBus(c+1449,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_26", false,-1, 23,0);
        vcdp->declBus(c+1457,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_27", false,-1, 23,0);
        vcdp->declBus(c+1465,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_28", false,-1, 23,0);
        vcdp->declBus(c+1473,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_29", false,-1, 23,0);
        vcdp->declBus(c+1481,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_30", false,-1, 23,0);
        vcdp->declBus(c+961,"CFOEstimator auto_corr_core corr_core shiftRegister_4 shift_reg_31", false,-1, 23,0);
        vcdp->declBit(c+1561,"CFOEstimator cordic_core rotate_mode", false,-1);
        vcdp->declBus(c+1569,"CFOEstimator cordic_core x_u", false,-1, 1,0);
        vcdp->declBit(c+121,"CFOEstimator cordic_core raw_data_valid", false,-1);
        vcdp->declBit(c+1553,"CFOEstimator cordic_core raw_data_ready", false,-1);
        vcdp->declBus(c+81,"CFOEstimator cordic_core raw_data_payload_x", false,-1, 23,0);
        vcdp->declBus(c+89,"CFOEstimator cordic_core raw_data_payload_y", false,-1, 23,0);
        vcdp->declBus(c+1577,"CFOEstimator cordic_core raw_data_payload_z", false,-1, 23,0);
        vcdp->declBit(c+161,"CFOEstimator cordic_core result_valid", false,-1);
        vcdp->declBus(c+97,"CFOEstimator cordic_core result_payload_x", false,-1, 23,0);
        vcdp->declBus(c+105,"CFOEstimator cordic_core result_payload_y", false,-1, 23,0);
        vcdp->declBus(c+113,"CFOEstimator cordic_core result_payload_z", false,-1, 23,0);
        vcdp->declBit(c+1529,"CFOEstimator cordic_core clk", false,-1);
        vcdp->declBit(c+1537,"CFOEstimator cordic_core reset", false,-1);
        vcdp->declBit(c+121,"CFOEstimator cordic_core raw_data_fire", false,-1);
    }
}

void VCFOEstimator::traceFullThis__1(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,((1U & (IData)((VL_ULL(1) 
                                          & ((VL_ULL(0x1ffffff80000) 
                                              + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_2) 
                                             >> 0x2cU))))));
        vcdp->fullBit(c+9,((0U != (0xfffffU & ((IData)(0x80000U) 
                                               + (IData)(vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_2))))));
        vcdp->fullBit(c+17,((1U & (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130 
                                   >> 0x18U))));
        vcdp->fullBit(c+25,((1U & (~ (IData)((3U == 
                                              (3U & 
                                               (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130 
                                                >> 0x17U))))))));
        vcdp->fullBit(c+33,((1U & (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130 
                                   >> 0x17U))));
        vcdp->fullBit(c+41,((1U & (IData)((VL_ULL(1) 
                                           & ((VL_ULL(0x1ffffff80000) 
                                               + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_5) 
                                              >> 0x2cU))))));
        vcdp->fullBit(c+49,((0U != (0xfffffU & ((IData)(0x80000U) 
                                                + (IData)(vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_5))))));
        vcdp->fullBit(c+57,((1U & (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130_4 
                                   >> 0x18U))));
        vcdp->fullBit(c+65,((1U & (~ (IData)((3U == 
                                              (3U & 
                                               (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130_4 
                                                >> 0x17U))))))));
        vcdp->fullBit(c+73,((1U & (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130_4 
                                   >> 0x17U))));
        vcdp->fullBus(c+81,((0xffffffU & ((0x1000000U 
                                           & vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130)
                                           ? ((3U == 
                                               (3U 
                                                & (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130 
                                                   >> 0x17U)))
                                               ? vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130
                                               : 0x800000U)
                                           : ((0x800000U 
                                               & vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130)
                                               ? 0x7fffffU
                                               : vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130)))),24);
        vcdp->fullBus(c+89,((0xffffffU & ((0x1000000U 
                                           & vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130_4)
                                           ? ((3U == 
                                               (3U 
                                                & (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130_4 
                                                   >> 0x17U)))
                                               ? vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130_4
                                               : 0x800000U)
                                           : ((0x800000U 
                                               & vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130_4)
                                               ? 0x7fffffU
                                               : vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130_4)))),24);
        vcdp->fullBus(c+97,(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_11),24);
        vcdp->fullBus(c+105,(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_y),24);
        vcdp->fullBus(c+113,(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z),24);
        vcdp->fullBit(c+121,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid));
        vcdp->fullQuad(c+129,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i),44);
        vcdp->fullQuad(c+145,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q),44);
        vcdp->fullBit(c+161,(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_11));
        vcdp->fullBus(c+169,(vlTOPp->CFOEstimator__DOT__impulse_cnt),6);
        vcdp->fullBit(c+177,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_31_valid));
        vcdp->fullBus(c+185,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_i),12);
        vcdp->fullBus(c+193,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_q),12);
        vcdp->fullBit(c+201,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_valid));
        vcdp->fullBus(c+209,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_i),12);
        vcdp->fullBus(c+217,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_q),12);
        vcdp->fullBit(c+225,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_valid));
        vcdp->fullBus(c+233,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_i),12);
        vcdp->fullBus(c+241,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_q),12);
        vcdp->fullBit(c+249,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_valid));
        vcdp->fullBus(c+257,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_i),12);
        vcdp->fullBus(c+265,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_q),12);
        vcdp->fullBit(c+273,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_valid));
        vcdp->fullBus(c+281,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_i),12);
        vcdp->fullBus(c+289,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_q),12);
        vcdp->fullBit(c+297,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_valid));
        vcdp->fullBus(c+305,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_i),12);
        vcdp->fullBus(c+313,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_q),12);
        vcdp->fullBit(c+321,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_valid));
        vcdp->fullBus(c+329,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_i),12);
        vcdp->fullBus(c+337,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_q),12);
        vcdp->fullBit(c+345,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_valid));
        vcdp->fullBus(c+353,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_i),12);
        vcdp->fullBus(c+361,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_q),12);
        vcdp->fullBit(c+369,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_valid));
        vcdp->fullBus(c+377,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_i),12);
        vcdp->fullBus(c+385,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_q),12);
        vcdp->fullBit(c+393,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_valid));
        vcdp->fullBus(c+401,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_i),12);
        vcdp->fullBus(c+409,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_q),12);
        vcdp->fullBit(c+417,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_valid));
        vcdp->fullBus(c+425,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_i),12);
        vcdp->fullBus(c+433,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_q),12);
        vcdp->fullBit(c+441,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_valid));
        vcdp->fullBus(c+449,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_i),12);
        vcdp->fullBus(c+457,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_q),12);
        vcdp->fullBit(c+465,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_valid));
        vcdp->fullBus(c+473,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_i),12);
        vcdp->fullBus(c+481,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_q),12);
        vcdp->fullBit(c+489,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_valid));
        vcdp->fullBus(c+497,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_i),12);
        vcdp->fullBus(c+505,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_q),12);
        vcdp->fullBit(c+513,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_valid));
        vcdp->fullBus(c+521,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_i),12);
        vcdp->fullBus(c+529,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_q),12);
        vcdp->fullBit(c+537,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_valid));
        vcdp->fullBus(c+545,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_i),12);
        vcdp->fullBus(c+553,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_q),12);
        vcdp->fullBit(c+561,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_valid));
        vcdp->fullBus(c+569,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_i),12);
        vcdp->fullBus(c+577,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_q),12);
        vcdp->fullBit(c+585,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_16_valid));
        vcdp->fullBus(c+593,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_16_payload_cha_i),12);
        vcdp->fullBus(c+601,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_16_payload_cha_q),12);
        vcdp->fullBit(c+609,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_17_valid));
        vcdp->fullBus(c+617,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_17_payload_cha_i),12);
        vcdp->fullBus(c+625,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_17_payload_cha_q),12);
        vcdp->fullBit(c+633,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_18_valid));
        vcdp->fullBus(c+641,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_18_payload_cha_i),12);
        vcdp->fullBus(c+649,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_18_payload_cha_q),12);
        vcdp->fullBit(c+657,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_19_valid));
        vcdp->fullBus(c+665,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_19_payload_cha_i),12);
        vcdp->fullBus(c+673,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_19_payload_cha_q),12);
        vcdp->fullBit(c+681,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_20_valid));
        vcdp->fullBus(c+689,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_20_payload_cha_i),12);
        vcdp->fullBus(c+697,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_20_payload_cha_q),12);
        vcdp->fullBit(c+705,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_21_valid));
        vcdp->fullBus(c+713,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_21_payload_cha_i),12);
        vcdp->fullBus(c+721,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_21_payload_cha_q),12);
        vcdp->fullBit(c+729,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_22_valid));
        vcdp->fullBus(c+737,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_22_payload_cha_i),12);
        vcdp->fullBus(c+745,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_22_payload_cha_q),12);
        vcdp->fullBit(c+753,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_23_valid));
        vcdp->fullBus(c+761,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_23_payload_cha_i),12);
        vcdp->fullBus(c+769,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_23_payload_cha_q),12);
        vcdp->fullBit(c+777,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_24_valid));
        vcdp->fullBus(c+785,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_24_payload_cha_i),12);
        vcdp->fullBus(c+793,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_24_payload_cha_q),12);
        vcdp->fullBit(c+801,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_25_valid));
        vcdp->fullBus(c+809,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_25_payload_cha_i),12);
        vcdp->fullBus(c+817,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_25_payload_cha_q),12);
        vcdp->fullBit(c+825,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_26_valid));
        vcdp->fullBus(c+833,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_26_payload_cha_i),12);
        vcdp->fullBus(c+841,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_26_payload_cha_q),12);
        vcdp->fullBit(c+849,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_27_valid));
        vcdp->fullBus(c+857,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_27_payload_cha_i),12);
        vcdp->fullBus(c+865,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_27_payload_cha_q),12);
        vcdp->fullBit(c+873,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_28_valid));
        vcdp->fullBus(c+881,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_28_payload_cha_i),12);
        vcdp->fullBus(c+889,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_28_payload_cha_q),12);
        vcdp->fullBit(c+897,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_29_valid));
        vcdp->fullBus(c+905,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_29_payload_cha_i),12);
        vcdp->fullBus(c+913,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_29_payload_cha_q),12);
        vcdp->fullBit(c+921,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_30_valid));
        vcdp->fullBus(c+929,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_30_payload_cha_i),12);
        vcdp->fullBus(c+937,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_30_payload_cha_q),12);
        vcdp->fullBit(c+945,((1U & (~ (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable)))));
        vcdp->fullBus(c+953,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_31),24);
        vcdp->fullBus(c+961,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31),24);
        vcdp->fullBus(c+969,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i),24);
        vcdp->fullBit(c+977,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable));
        vcdp->fullBus(c+985,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_0),24);
        vcdp->fullBus(c+993,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_1),24);
        vcdp->fullBus(c+1001,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_2),24);
        vcdp->fullBus(c+1009,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_3),24);
        vcdp->fullBus(c+1017,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_4),24);
        vcdp->fullBus(c+1025,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_5),24);
        vcdp->fullBus(c+1033,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_6),24);
        vcdp->fullBus(c+1041,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_7),24);
        vcdp->fullBus(c+1049,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_8),24);
        vcdp->fullBus(c+1057,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_9),24);
        vcdp->fullBus(c+1065,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_10),24);
        vcdp->fullBus(c+1073,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_11),24);
        vcdp->fullBus(c+1081,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_12),24);
        vcdp->fullBus(c+1089,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_13),24);
        vcdp->fullBus(c+1097,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_14),24);
        vcdp->fullBus(c+1105,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_15),24);
        vcdp->fullBus(c+1113,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_16),24);
        vcdp->fullBus(c+1121,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_17),24);
        vcdp->fullBus(c+1129,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_18),24);
        vcdp->fullBus(c+1137,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_19),24);
        vcdp->fullBus(c+1145,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_20),24);
        vcdp->fullBus(c+1153,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_21),24);
        vcdp->fullBus(c+1161,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_22),24);
        vcdp->fullBus(c+1169,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_23),24);
        vcdp->fullBus(c+1177,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_24),24);
        vcdp->fullBus(c+1185,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_25),24);
        vcdp->fullBus(c+1193,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_26),24);
        vcdp->fullBus(c+1201,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_27),24);
        vcdp->fullBus(c+1209,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_28),24);
        vcdp->fullBus(c+1217,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_29),24);
        vcdp->fullBus(c+1225,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_30),24);
        vcdp->fullBus(c+1233,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q),24);
        vcdp->fullBus(c+1241,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0),24);
        vcdp->fullBus(c+1249,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1),24);
        vcdp->fullBus(c+1257,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2),24);
        vcdp->fullBus(c+1265,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3),24);
        vcdp->fullBus(c+1273,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4),24);
        vcdp->fullBus(c+1281,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5),24);
        vcdp->fullBus(c+1289,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6),24);
        vcdp->fullBus(c+1297,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7),24);
        vcdp->fullBus(c+1305,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8),24);
        vcdp->fullBus(c+1313,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9),24);
        vcdp->fullBus(c+1321,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10),24);
        vcdp->fullBus(c+1329,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11),24);
        vcdp->fullBus(c+1337,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12),24);
        vcdp->fullBus(c+1345,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13),24);
        vcdp->fullBus(c+1353,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14),24);
        vcdp->fullBus(c+1361,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15),24);
        vcdp->fullBus(c+1369,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16),24);
        vcdp->fullBus(c+1377,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_17),24);
        vcdp->fullBus(c+1385,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_18),24);
        vcdp->fullBus(c+1393,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_19),24);
        vcdp->fullBus(c+1401,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_20),24);
        vcdp->fullBus(c+1409,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_21),24);
        vcdp->fullBus(c+1417,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_22),24);
        vcdp->fullBus(c+1425,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_23),24);
        vcdp->fullBus(c+1433,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_24),24);
        vcdp->fullBus(c+1441,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_25),24);
        vcdp->fullBus(c+1449,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_26),24);
        vcdp->fullBus(c+1457,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_27),24);
        vcdp->fullBus(c+1465,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_28),24);
        vcdp->fullBus(c+1473,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_29),24);
        vcdp->fullBus(c+1481,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_30),24);
        vcdp->fullBit(c+1489,(vlTOPp->rotated_data_valid));
        vcdp->fullBus(c+1497,(vlTOPp->rotated_data_payload_cha_i),12);
        vcdp->fullBus(c+1505,(vlTOPp->rotated_data_payload_cha_q),12);
        vcdp->fullBit(c+1513,(vlTOPp->delta_phi_valid));
        vcdp->fullBus(c+1521,(vlTOPp->delta_phi_payload),24);
        vcdp->fullBit(c+1529,(vlTOPp->clk));
        vcdp->fullBit(c+1537,(vlTOPp->reset));
        vcdp->fullBit(c+1545,((1U & (~ (IData)(vlTOPp->rotated_data_valid)))));
        vcdp->fullBit(c+1553,(1U));
        vcdp->fullBit(c+1561,(0U));
        vcdp->fullBus(c+1569,(0U),2);
        vcdp->fullBus(c+1577,(0U),24);
    }
}
