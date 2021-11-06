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
        vcdp->declBit(c+865,"rotated_data_valid", false,-1);
        vcdp->declBus(c+873,"rotated_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+881,"rotated_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+889,"delta_phi_valid", false,-1);
        vcdp->declBus(c+897,"delta_phi_payload", false,-1, 15,0);
        vcdp->declBit(c+905,"clk", false,-1);
        vcdp->declBit(c+913,"reset", false,-1);
        vcdp->declBit(c+865,"CFOEstimator rotated_data_valid", false,-1);
        vcdp->declBus(c+873,"CFOEstimator rotated_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+881,"CFOEstimator rotated_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+889,"CFOEstimator delta_phi_valid", false,-1);
        vcdp->declBus(c+897,"CFOEstimator delta_phi_payload", false,-1, 15,0);
        vcdp->declBit(c+905,"CFOEstimator clk", false,-1);
        vcdp->declBit(c+913,"CFOEstimator reset", false,-1);
        vcdp->declBus(c+41,"CFOEstimator cordic_core_raw_data_payload_y", false,-1, 15,0);
        vcdp->declBit(c+169,"CFOEstimator auto_corr_core_corr_result_valid", false,-1);
        vcdp->declBus(c+177,"CFOEstimator auto_corr_core_corr_result_payload_cha_i", false,-1, 31,0);
        vcdp->declBus(c+185,"CFOEstimator auto_corr_core_corr_result_payload_cha_q", false,-1, 31,0);
        vcdp->declBit(c+937,"CFOEstimator cordic_core_raw_data_ready", false,-1);
        vcdp->declBit(c+193,"CFOEstimator cordic_core_result_valid", false,-1);
        vcdp->declBus(c+145,"CFOEstimator cordic_core_result_payload_x", false,-1, 15,0);
        vcdp->declBus(c+153,"CFOEstimator cordic_core_result_payload_y", false,-1, 15,0);
        vcdp->declBus(c+161,"CFOEstimator cordic_core_result_payload_z", false,-1, 15,0);
        vcdp->declBus(c+945,"CFOEstimator scale", false,-1, 15,0);
        vcdp->declBit(c+49,"CFOEstimator when_SInt_l332", false,-1);
        vcdp->declBit(c+57,"CFOEstimator when_SInt_l186", false,-1);
        vcdp->declBit(c+65,"CFOEstimator when_SInt_l125", false,-1);
        vcdp->declBit(c+73,"CFOEstimator when_SInt_l126", false,-1);
        vcdp->declBit(c+81,"CFOEstimator when_SInt_l132", false,-1);
        vcdp->declBit(c+89,"CFOEstimator when_SInt_l332_1", false,-1);
        vcdp->declBit(c+97,"CFOEstimator when_SInt_l186_1", false,-1);
        vcdp->declBit(c+105,"CFOEstimator when_SInt_l125_1", false,-1);
        vcdp->declBit(c+113,"CFOEstimator when_SInt_l126_1", false,-1);
        vcdp->declBit(c+121,"CFOEstimator when_SInt_l132_1", false,-1);
        vcdp->declBit(c+1,"CFOEstimator when_SInt_l332_2", false,-1);
        vcdp->declBit(c+9,"CFOEstimator when_SInt_l186_2", false,-1);
        vcdp->declBit(c+17,"CFOEstimator when_SInt_l125_2", false,-1);
        vcdp->declBit(c+25,"CFOEstimator when_SInt_l126_2", false,-1);
        vcdp->declBit(c+33,"CFOEstimator when_SInt_l132_2", false,-1);
        vcdp->declBit(c+865,"CFOEstimator auto_corr_core raw_data_valid", false,-1);
        vcdp->declBus(c+873,"CFOEstimator auto_corr_core raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+881,"CFOEstimator auto_corr_core raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+169,"CFOEstimator auto_corr_core corr_result_valid", false,-1);
        vcdp->declBus(c+177,"CFOEstimator auto_corr_core corr_result_payload_cha_i", false,-1, 31,0);
        vcdp->declBus(c+185,"CFOEstimator auto_corr_core corr_result_payload_cha_q", false,-1, 31,0);
        vcdp->declBit(c+905,"CFOEstimator auto_corr_core clk", false,-1);
        vcdp->declBit(c+913,"CFOEstimator auto_corr_core reset", false,-1);
        vcdp->declBit(c+201,"CFOEstimator auto_corr_core shiftRegisterE_3_output_valid", false,-1);
        vcdp->declBus(c+209,"CFOEstimator auto_corr_core shiftRegisterE_3_output_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+217,"CFOEstimator auto_corr_core shiftRegisterE_3_output_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+169,"CFOEstimator auto_corr_core corr_core_corr_result_valid", false,-1);
        vcdp->declBus(c+177,"CFOEstimator auto_corr_core corr_core_corr_result_payload_cha_i", false,-1, 31,0);
        vcdp->declBus(c+185,"CFOEstimator auto_corr_core corr_core_corr_result_payload_cha_q", false,-1, 31,0);
        vcdp->declBit(c+865,"CFOEstimator auto_corr_core shiftRegisterE_3 input_valid", false,-1);
        vcdp->declBus(c+873,"CFOEstimator auto_corr_core shiftRegisterE_3 input_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+881,"CFOEstimator auto_corr_core shiftRegisterE_3 input_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+201,"CFOEstimator auto_corr_core shiftRegisterE_3 output_valid", false,-1);
        vcdp->declBus(c+209,"CFOEstimator auto_corr_core shiftRegisterE_3 output_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+217,"CFOEstimator auto_corr_core shiftRegisterE_3 output_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+865,"CFOEstimator auto_corr_core shiftRegisterE_3 enable", false,-1);
        vcdp->declBit(c+905,"CFOEstimator auto_corr_core shiftRegisterE_3 clk", false,-1);
        vcdp->declBit(c+913,"CFOEstimator auto_corr_core shiftRegisterE_3 reset", false,-1);
        vcdp->declBit(c+225,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_0_valid", false,-1);
        vcdp->declBus(c+233,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_0_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+241,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_0_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+249,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_1_valid", false,-1);
        vcdp->declBus(c+257,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_1_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+265,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_1_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+273,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_2_valid", false,-1);
        vcdp->declBus(c+281,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_2_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+289,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_2_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+297,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_3_valid", false,-1);
        vcdp->declBus(c+305,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_3_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+313,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_3_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+321,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_4_valid", false,-1);
        vcdp->declBus(c+329,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_4_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+337,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_4_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+345,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_5_valid", false,-1);
        vcdp->declBus(c+353,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_5_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+361,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_5_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+369,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_6_valid", false,-1);
        vcdp->declBus(c+377,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_6_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+385,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_6_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+393,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_7_valid", false,-1);
        vcdp->declBus(c+401,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_7_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+409,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_7_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+417,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_8_valid", false,-1);
        vcdp->declBus(c+425,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_8_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+433,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_8_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+441,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_9_valid", false,-1);
        vcdp->declBus(c+449,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_9_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+457,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_9_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+465,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_10_valid", false,-1);
        vcdp->declBus(c+473,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_10_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+481,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_10_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+489,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_11_valid", false,-1);
        vcdp->declBus(c+497,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_11_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+505,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_11_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+513,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_12_valid", false,-1);
        vcdp->declBus(c+521,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_12_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+529,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_12_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+537,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_13_valid", false,-1);
        vcdp->declBus(c+545,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_13_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+553,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_13_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+561,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_14_valid", false,-1);
        vcdp->declBus(c+569,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_14_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+577,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_14_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+201,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_15_valid", false,-1);
        vcdp->declBus(c+209,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_15_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+217,"CFOEstimator auto_corr_core shiftRegisterE_3 shift_reg_15_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+865,"CFOEstimator auto_corr_core corr_core raw_data_0_valid", false,-1);
        vcdp->declBus(c+873,"CFOEstimator auto_corr_core corr_core raw_data_0_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+881,"CFOEstimator auto_corr_core corr_core raw_data_0_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+201,"CFOEstimator auto_corr_core corr_core raw_data_1_valid", false,-1);
        vcdp->declBus(c+209,"CFOEstimator auto_corr_core corr_core raw_data_1_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+217,"CFOEstimator auto_corr_core corr_core raw_data_1_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+169,"CFOEstimator auto_corr_core corr_core corr_result_valid", false,-1);
        vcdp->declBus(c+177,"CFOEstimator auto_corr_core corr_core corr_result_payload_cha_i", false,-1, 31,0);
        vcdp->declBus(c+185,"CFOEstimator auto_corr_core corr_core corr_result_payload_cha_q", false,-1, 31,0);
        vcdp->declBit(c+905,"CFOEstimator auto_corr_core corr_core clk", false,-1);
        vcdp->declBit(c+913,"CFOEstimator auto_corr_core corr_core reset", false,-1);
        vcdp->declBus(c+585,"CFOEstimator auto_corr_core corr_core shiftRegisterE_3_output_1", false,-1, 31,0);
        vcdp->declBus(c+593,"CFOEstimator auto_corr_core corr_core shiftRegisterE_4_output_1", false,-1, 31,0);
        vcdp->declBus(c+177,"CFOEstimator auto_corr_core corr_core corr_val_i", false,-1, 31,0);
        vcdp->declBus(c+185,"CFOEstimator auto_corr_core corr_core corr_val_q", false,-1, 31,0);
        vcdp->declBus(c+137,"CFOEstimator auto_corr_core corr_core k1", false,-1, 31,0);
        vcdp->declBus(c+921,"CFOEstimator auto_corr_core corr_core k2", false,-1, 31,0);
        vcdp->declBus(c+929,"CFOEstimator auto_corr_core corr_core k3", false,-1, 31,0);
        vcdp->declBus(c+601,"CFOEstimator auto_corr_core corr_core mul_i", false,-1, 31,0);
        vcdp->declBus(c+609,"CFOEstimator auto_corr_core corr_core mul_q", false,-1, 31,0);
        vcdp->declBit(c+617,"CFOEstimator auto_corr_core corr_core mul_data_valid", false,-1);
        vcdp->declBit(c+169,"CFOEstimator auto_corr_core corr_core corr_result_valid_1", false,-1);
        vcdp->declBus(c+601,"CFOEstimator auto_corr_core corr_core shiftRegisterE_3 input_1", false,-1, 31,0);
        vcdp->declBus(c+585,"CFOEstimator auto_corr_core corr_core shiftRegisterE_3 output_1", false,-1, 31,0);
        vcdp->declBit(c+617,"CFOEstimator auto_corr_core corr_core shiftRegisterE_3 enable", false,-1);
        vcdp->declBit(c+905,"CFOEstimator auto_corr_core corr_core shiftRegisterE_3 clk", false,-1);
        vcdp->declBit(c+913,"CFOEstimator auto_corr_core corr_core shiftRegisterE_3 reset", false,-1);
        vcdp->declBus(c+625,"CFOEstimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_0", false,-1, 31,0);
        vcdp->declBus(c+633,"CFOEstimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_1", false,-1, 31,0);
        vcdp->declBus(c+641,"CFOEstimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_2", false,-1, 31,0);
        vcdp->declBus(c+649,"CFOEstimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_3", false,-1, 31,0);
        vcdp->declBus(c+657,"CFOEstimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_4", false,-1, 31,0);
        vcdp->declBus(c+665,"CFOEstimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_5", false,-1, 31,0);
        vcdp->declBus(c+673,"CFOEstimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_6", false,-1, 31,0);
        vcdp->declBus(c+681,"CFOEstimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_7", false,-1, 31,0);
        vcdp->declBus(c+689,"CFOEstimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_8", false,-1, 31,0);
        vcdp->declBus(c+697,"CFOEstimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_9", false,-1, 31,0);
        vcdp->declBus(c+705,"CFOEstimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_10", false,-1, 31,0);
        vcdp->declBus(c+713,"CFOEstimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_11", false,-1, 31,0);
        vcdp->declBus(c+721,"CFOEstimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_12", false,-1, 31,0);
        vcdp->declBus(c+729,"CFOEstimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_13", false,-1, 31,0);
        vcdp->declBus(c+737,"CFOEstimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_14", false,-1, 31,0);
        vcdp->declBus(c+585,"CFOEstimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_15", false,-1, 31,0);
        vcdp->declBus(c+609,"CFOEstimator auto_corr_core corr_core shiftRegisterE_4 input_1", false,-1, 31,0);
        vcdp->declBus(c+593,"CFOEstimator auto_corr_core corr_core shiftRegisterE_4 output_1", false,-1, 31,0);
        vcdp->declBit(c+617,"CFOEstimator auto_corr_core corr_core shiftRegisterE_4 enable", false,-1);
        vcdp->declBit(c+905,"CFOEstimator auto_corr_core corr_core shiftRegisterE_4 clk", false,-1);
        vcdp->declBit(c+913,"CFOEstimator auto_corr_core corr_core shiftRegisterE_4 reset", false,-1);
        vcdp->declBus(c+745,"CFOEstimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_0", false,-1, 31,0);
        vcdp->declBus(c+753,"CFOEstimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_1", false,-1, 31,0);
        vcdp->declBus(c+761,"CFOEstimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_2", false,-1, 31,0);
        vcdp->declBus(c+769,"CFOEstimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_3", false,-1, 31,0);
        vcdp->declBus(c+777,"CFOEstimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_4", false,-1, 31,0);
        vcdp->declBus(c+785,"CFOEstimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_5", false,-1, 31,0);
        vcdp->declBus(c+793,"CFOEstimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_6", false,-1, 31,0);
        vcdp->declBus(c+801,"CFOEstimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_7", false,-1, 31,0);
        vcdp->declBus(c+809,"CFOEstimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_8", false,-1, 31,0);
        vcdp->declBus(c+817,"CFOEstimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_9", false,-1, 31,0);
        vcdp->declBus(c+825,"CFOEstimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_10", false,-1, 31,0);
        vcdp->declBus(c+833,"CFOEstimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_11", false,-1, 31,0);
        vcdp->declBus(c+841,"CFOEstimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_12", false,-1, 31,0);
        vcdp->declBus(c+849,"CFOEstimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_13", false,-1, 31,0);
        vcdp->declBus(c+857,"CFOEstimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_14", false,-1, 31,0);
        vcdp->declBus(c+593,"CFOEstimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_15", false,-1, 31,0);
        vcdp->declBit(c+953,"CFOEstimator cordic_core rotate_mode", false,-1);
        vcdp->declBus(c+961,"CFOEstimator cordic_core x_u", false,-1, 1,0);
        vcdp->declBit(c+169,"CFOEstimator cordic_core raw_data_valid", false,-1);
        vcdp->declBit(c+937,"CFOEstimator cordic_core raw_data_ready", false,-1);
        vcdp->declBus(c+129,"CFOEstimator cordic_core raw_data_payload_x", false,-1, 15,0);
        vcdp->declBus(c+41,"CFOEstimator cordic_core raw_data_payload_y", false,-1, 15,0);
        vcdp->declBus(c+969,"CFOEstimator cordic_core raw_data_payload_z", false,-1, 15,0);
        vcdp->declBit(c+193,"CFOEstimator cordic_core result_valid", false,-1);
        vcdp->declBit(c+937,"CFOEstimator cordic_core result_ready", false,-1);
        vcdp->declBus(c+145,"CFOEstimator cordic_core result_payload_x", false,-1, 15,0);
        vcdp->declBus(c+153,"CFOEstimator cordic_core result_payload_y", false,-1, 15,0);
        vcdp->declBus(c+161,"CFOEstimator cordic_core result_payload_z", false,-1, 15,0);
        vcdp->declBit(c+905,"CFOEstimator cordic_core clk", false,-1);
        vcdp->declBit(c+913,"CFOEstimator cordic_core reset", false,-1);
        vcdp->declBit(c+169,"CFOEstimator cordic_core raw_data_fire", false,-1);
    }
}

void VCFOEstimator::traceFullThis__1(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,((1U & (IData)((VL_ULL(1) 
                                          & ((VL_ULL(0x1ffff8000) 
                                              + vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_5) 
                                             >> 0x20U))))));
        vcdp->fullBit(c+9,((0U != (0xffffU & ((IData)(0x8000U) 
                                              + (IData)(vlTOPp->CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_5))))));
        vcdp->fullBit(c+17,((1U & (vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_1 
                                   >> 0x10U))));
        vcdp->fullBit(c+25,((3U != (3U & (vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_1 
                                          >> 0xfU)))));
        vcdp->fullBit(c+33,((1U & (vlTOPp->CFOEstimator__DOT___zz_delta_phi_payload_1 
                                   >> 0xfU))));
        vcdp->fullBus(c+41,((0xffffU & VL_NEGATE_I(
                                                   ((0x10000U 
                                                     & vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125_4)
                                                     ? 
                                                    ((3U 
                                                      != 
                                                      (3U 
                                                       & (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125_4 
                                                          >> 0xfU)))
                                                      ? 0x8000U
                                                      : vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125_4)
                                                     : 
                                                    ((0x8000U 
                                                      & vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125_4)
                                                      ? 0x7fffU
                                                      : vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125_4))))),16);
        vcdp->fullBit(c+49,((1U & (IData)((VL_ULL(1) 
                                           & ((VL_ULL(0x1ffff8000) 
                                               + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                              >> 0x20U))))));
        vcdp->fullBit(c+57,((0U != (0xffffU & ((IData)(0x8000U) 
                                               + (IData)(vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_2))))));
        vcdp->fullBit(c+65,((1U & (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125 
                                   >> 0x10U))));
        vcdp->fullBit(c+73,((3U != (3U & (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125 
                                          >> 0xfU)))));
        vcdp->fullBit(c+81,((1U & (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125 
                                   >> 0xfU))));
        vcdp->fullBit(c+89,((1U & (IData)((VL_ULL(1) 
                                           & ((VL_ULL(0x1ffff8000) 
                                               + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                              >> 0x20U))))));
        vcdp->fullBit(c+97,((0U != (0xffffU & ((IData)(0x8000U) 
                                               + (IData)(vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_5))))));
        vcdp->fullBit(c+105,((1U & (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125_4 
                                    >> 0x10U))));
        vcdp->fullBit(c+113,((3U != (3U & (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125_4 
                                           >> 0xfU)))));
        vcdp->fullBit(c+121,((1U & (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125_4 
                                    >> 0xfU))));
        vcdp->fullBus(c+129,((0xffffU & ((0x10000U 
                                          & vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125)
                                          ? ((3U != 
                                              (3U & 
                                               (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125 
                                                >> 0xfU)))
                                              ? 0x8000U
                                              : vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125)
                                          : ((0x8000U 
                                              & vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125)
                                              ? 0x7fffU
                                              : vlTOPp->CFOEstimator__DOT___zz_when_SInt_l125)))),16);
        vcdp->fullBus(c+137,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1),32);
        vcdp->fullBus(c+145,(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_15),16);
        vcdp->fullBus(c+153,(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_y),16);
        vcdp->fullBus(c+161,(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z),16);
        vcdp->fullBit(c+169,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1));
        vcdp->fullBus(c+177,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i),32);
        vcdp->fullBus(c+185,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q),32);
        vcdp->fullBit(c+193,(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_15));
        vcdp->fullBit(c+201,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_valid));
        vcdp->fullBus(c+209,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i),16);
        vcdp->fullBus(c+217,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_q),16);
        vcdp->fullBit(c+225,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_valid));
        vcdp->fullBus(c+233,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_i),16);
        vcdp->fullBus(c+241,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_q),16);
        vcdp->fullBit(c+249,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_valid));
        vcdp->fullBus(c+257,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_i),16);
        vcdp->fullBus(c+265,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_q),16);
        vcdp->fullBit(c+273,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_valid));
        vcdp->fullBus(c+281,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_i),16);
        vcdp->fullBus(c+289,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_q),16);
        vcdp->fullBit(c+297,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_valid));
        vcdp->fullBus(c+305,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_i),16);
        vcdp->fullBus(c+313,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_q),16);
        vcdp->fullBit(c+321,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_valid));
        vcdp->fullBus(c+329,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_i),16);
        vcdp->fullBus(c+337,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_q),16);
        vcdp->fullBit(c+345,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_valid));
        vcdp->fullBus(c+353,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_i),16);
        vcdp->fullBus(c+361,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_q),16);
        vcdp->fullBit(c+369,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_valid));
        vcdp->fullBus(c+377,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_i),16);
        vcdp->fullBus(c+385,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_q),16);
        vcdp->fullBit(c+393,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_valid));
        vcdp->fullBus(c+401,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_i),16);
        vcdp->fullBus(c+409,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_q),16);
        vcdp->fullBit(c+417,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_valid));
        vcdp->fullBus(c+425,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_i),16);
        vcdp->fullBus(c+433,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_q),16);
        vcdp->fullBit(c+441,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_valid));
        vcdp->fullBus(c+449,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_i),16);
        vcdp->fullBus(c+457,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_q),16);
        vcdp->fullBit(c+465,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_valid));
        vcdp->fullBus(c+473,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_i),16);
        vcdp->fullBus(c+481,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_q),16);
        vcdp->fullBit(c+489,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_valid));
        vcdp->fullBus(c+497,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_i),16);
        vcdp->fullBus(c+505,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_q),16);
        vcdp->fullBit(c+513,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_valid));
        vcdp->fullBus(c+521,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_i),16);
        vcdp->fullBus(c+529,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_q),16);
        vcdp->fullBit(c+537,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_valid));
        vcdp->fullBus(c+545,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_i),16);
        vcdp->fullBus(c+553,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_q),16);
        vcdp->fullBit(c+561,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_valid));
        vcdp->fullBus(c+569,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_i),16);
        vcdp->fullBus(c+577,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_q),16);
        vcdp->fullBus(c+585,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15),32);
        vcdp->fullBus(c+593,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_15),32);
        vcdp->fullBus(c+601,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_i),32);
        vcdp->fullBus(c+609,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_q),32);
        vcdp->fullBit(c+617,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid));
        vcdp->fullBus(c+625,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0),32);
        vcdp->fullBus(c+633,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1),32);
        vcdp->fullBus(c+641,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2),32);
        vcdp->fullBus(c+649,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3),32);
        vcdp->fullBus(c+657,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4),32);
        vcdp->fullBus(c+665,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5),32);
        vcdp->fullBus(c+673,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6),32);
        vcdp->fullBus(c+681,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7),32);
        vcdp->fullBus(c+689,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8),32);
        vcdp->fullBus(c+697,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9),32);
        vcdp->fullBus(c+705,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10),32);
        vcdp->fullBus(c+713,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11),32);
        vcdp->fullBus(c+721,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12),32);
        vcdp->fullBus(c+729,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13),32);
        vcdp->fullBus(c+737,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14),32);
        vcdp->fullBus(c+745,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_0),32);
        vcdp->fullBus(c+753,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_1),32);
        vcdp->fullBus(c+761,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_2),32);
        vcdp->fullBus(c+769,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_3),32);
        vcdp->fullBus(c+777,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_4),32);
        vcdp->fullBus(c+785,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_5),32);
        vcdp->fullBus(c+793,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_6),32);
        vcdp->fullBus(c+801,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_7),32);
        vcdp->fullBus(c+809,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_8),32);
        vcdp->fullBus(c+817,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_9),32);
        vcdp->fullBus(c+825,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_10),32);
        vcdp->fullBus(c+833,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_11),32);
        vcdp->fullBus(c+841,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_12),32);
        vcdp->fullBus(c+849,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_13),32);
        vcdp->fullBus(c+857,(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_14),32);
        vcdp->fullBit(c+865,(vlTOPp->rotated_data_valid));
        vcdp->fullBus(c+873,(vlTOPp->rotated_data_payload_cha_i),16);
        vcdp->fullBus(c+881,(vlTOPp->rotated_data_payload_cha_q),16);
        vcdp->fullBit(c+889,(vlTOPp->delta_phi_valid));
        vcdp->fullBus(c+897,(vlTOPp->delta_phi_payload),16);
        vcdp->fullBit(c+905,(vlTOPp->clk));
        vcdp->fullBit(c+913,(vlTOPp->reset));
        vcdp->fullBus(c+921,(VL_MULS_III(32,32,32, 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->rotated_data_payload_cha_i)), 
                                         VL_EXTENDS_II(32,16, 
                                                       (0xffffU 
                                                        & ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_q) 
                                                           + (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i)))))),32);
        vcdp->fullBus(c+929,(VL_MULS_III(32,32,32, 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->rotated_data_payload_cha_q)), 
                                         VL_EXTENDS_II(32,16, 
                                                       (0xffffU 
                                                        & ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i) 
                                                           - (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_q)))))),32);
        vcdp->fullBit(c+937,(1U));
        vcdp->fullBus(c+945,(2U),16);
        vcdp->fullBit(c+953,(0U));
        vcdp->fullBus(c+961,(0U),2);
        vcdp->fullBus(c+969,(0U),16);
    }
}
