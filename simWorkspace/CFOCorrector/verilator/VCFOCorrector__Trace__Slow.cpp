// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCFOCorrector__Syms.h"


//======================

void VCFOCorrector::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VCFOCorrector::traceInit, &VCFOCorrector::traceFull, &VCFOCorrector::traceChg, this);
}
void VCFOCorrector::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VCFOCorrector* t = (VCFOCorrector*)userthis;
    VCFOCorrector__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VCFOCorrector::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCFOCorrector* t = (VCFOCorrector*)userthis;
    VCFOCorrector__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VCFOCorrector::traceInitThis(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VCFOCorrector::traceFullThis(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
        vlTOPp->traceFullThis__8(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCFOCorrector::traceInitThis__1(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+1945,"raw_data_valid", false,-1);
        vcdp->declBus(c+1953,"raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1961,"raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1969,"rotated_data_valid", false,-1);
        vcdp->declBus(c+1977,"rotated_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1985,"rotated_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1993,"enable", false,-1);
        vcdp->declBit(c+2001,"clk", false,-1);
        vcdp->declBit(c+2009,"reset", false,-1);
        vcdp->declBit(c+1945,"CFOCorrector raw_data_valid", false,-1);
        vcdp->declBus(c+1953,"CFOCorrector raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1961,"CFOCorrector raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1969,"CFOCorrector rotated_data_valid", false,-1);
        vcdp->declBus(c+1977,"CFOCorrector rotated_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1985,"CFOCorrector rotated_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1993,"CFOCorrector enable", false,-1);
        vcdp->declBit(c+2001,"CFOCorrector clk", false,-1);
        vcdp->declBit(c+2009,"CFOCorrector reset", false,-1);
        vcdp->declBit(c+1057,"CFOCorrector phase_rotator_rotated_data_valid", false,-1);
        vcdp->declBus(c+257,"CFOCorrector phase_rotator_rotated_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+265,"CFOCorrector phase_rotator_rotated_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1065,"CFOCorrector cfo_estimator_delta_phi_valid", false,-1);
        vcdp->declBus(c+273,"CFOCorrector cfo_estimator_delta_phi_payload", false,-1, 31,0);
        vcdp->declBit(c+329,"CFOCorrector phase_rotator_rotated_data_takeWhen_valid", false,-1);
        vcdp->declBus(c+257,"CFOCorrector phase_rotator_rotated_data_takeWhen_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+265,"CFOCorrector phase_rotator_rotated_data_takeWhen_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1945,"CFOCorrector phase_rotator raw_data_valid", false,-1);
        vcdp->declBus(c+1953,"CFOCorrector phase_rotator raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1961,"CFOCorrector phase_rotator raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1065,"CFOCorrector phase_rotator delta_phi_valid", false,-1);
        vcdp->declBus(c+273,"CFOCorrector phase_rotator delta_phi_payload", false,-1, 31,0);
        vcdp->declBit(c+1057,"CFOCorrector phase_rotator rotated_data_valid", false,-1);
        vcdp->declBus(c+257,"CFOCorrector phase_rotator rotated_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+265,"CFOCorrector phase_rotator rotated_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+2001,"CFOCorrector phase_rotator clk", false,-1);
        vcdp->declBit(c+2009,"CFOCorrector phase_rotator reset", false,-1);
        vcdp->declBus(c+2017,"CFOCorrector phase_rotator cordic_pipeline_core_raw_data_payload_x", false,-1, 31,0);
        vcdp->declBus(c+2025,"CFOCorrector phase_rotator cordic_pipeline_core_raw_data_payload_y", false,-1, 31,0);
        vcdp->declBit(c+2033,"CFOCorrector phase_rotator shiftRegister_4_clc", false,-1);
        vcdp->declBit(c+2041,"CFOCorrector phase_rotator cordic_pipeline_core_raw_data_ready", false,-1);
        vcdp->declBit(c+1057,"CFOCorrector phase_rotator cordic_pipeline_core_result_valid", false,-1);
        vcdp->declBus(c+345,"CFOCorrector phase_rotator cordic_pipeline_core_result_payload_x", false,-1, 31,0);
        vcdp->declBus(c+353,"CFOCorrector phase_rotator cordic_pipeline_core_result_payload_y", false,-1, 31,0);
        vcdp->declBus(c+361,"CFOCorrector phase_rotator cordic_pipeline_core_result_payload_z", false,-1, 31,0);
        vcdp->declBit(c+369,"CFOCorrector phase_rotator shiftRegister_4_output_1", false,-1);
        vcdp->declBit(c+1073,"CFOCorrector phase_rotator xy_symbol", false,-1);
        vcdp->declBus(c+377,"CFOCorrector phase_rotator phi", false,-1, 31,0);
        vcdp->declBus(c+137,"CFOCorrector phase_rotator phiNext", false,-1, 31,0);
        vcdp->declBus(c+1081,"CFOCorrector phase_rotator phiCorrect", false,-1, 31,0);
        vcdp->declBus(c+2049,"CFOCorrector phase_rotator math_pi", false,-1, 31,0);
        vcdp->declBus(c+2057,"CFOCorrector phase_rotator math_pi_2", false,-1, 31,0);
        vcdp->declBus(c+2065,"CFOCorrector phase_rotator neg_math_pi_2", false,-1, 31,0);
        vcdp->declBit(c+145,"CFOCorrector phase_rotator when_PhaseRotator_l47", false,-1);
        vcdp->declBit(c+153,"CFOCorrector phase_rotator when_PhaseRotator_l50", false,-1);
        vcdp->declBit(c+1,"CFOCorrector phase_rotator when_SInt_l332", false,-1);
        vcdp->declBit(c+9,"CFOCorrector phase_rotator when_SInt_l186", false,-1);
        vcdp->declBus(c+17,"CFOCorrector phase_rotator rotated_x_raw", false,-1, 15,0);
        vcdp->declBit(c+25,"CFOCorrector phase_rotator when_SInt_l125", false,-1);
        vcdp->declBit(c+33,"CFOCorrector phase_rotator when_SInt_l126", false,-1);
        vcdp->declBit(c+41,"CFOCorrector phase_rotator when_SInt_l132", false,-1);
        vcdp->declBit(c+49,"CFOCorrector phase_rotator when_SInt_l332_1", false,-1);
        vcdp->declBit(c+57,"CFOCorrector phase_rotator when_SInt_l186_1", false,-1);
        vcdp->declBus(c+65,"CFOCorrector phase_rotator rotated_y_raw", false,-1, 15,0);
        vcdp->declBit(c+73,"CFOCorrector phase_rotator when_SInt_l125_1", false,-1);
        vcdp->declBit(c+81,"CFOCorrector phase_rotator when_SInt_l126_1", false,-1);
        vcdp->declBit(c+89,"CFOCorrector phase_rotator when_SInt_l132_1", false,-1);
        vcdp->declBit(c+2041,"CFOCorrector phase_rotator cordic_pipeline_core rotate_mode", false,-1);
        vcdp->declBus(c+2073,"CFOCorrector phase_rotator cordic_pipeline_core x_u", false,-1, 1,0);
        vcdp->declBit(c+1945,"CFOCorrector phase_rotator cordic_pipeline_core raw_data_valid", false,-1);
        vcdp->declBit(c+2041,"CFOCorrector phase_rotator cordic_pipeline_core raw_data_ready", false,-1);
        vcdp->declBus(c+2017,"CFOCorrector phase_rotator cordic_pipeline_core raw_data_payload_x", false,-1, 31,0);
        vcdp->declBus(c+2025,"CFOCorrector phase_rotator cordic_pipeline_core raw_data_payload_y", false,-1, 31,0);
        vcdp->declBus(c+377,"CFOCorrector phase_rotator cordic_pipeline_core raw_data_payload_z", false,-1, 31,0);
        vcdp->declBit(c+1057,"CFOCorrector phase_rotator cordic_pipeline_core result_valid", false,-1);
        vcdp->declBus(c+345,"CFOCorrector phase_rotator cordic_pipeline_core result_payload_x", false,-1, 31,0);
        vcdp->declBus(c+353,"CFOCorrector phase_rotator cordic_pipeline_core result_payload_y", false,-1, 31,0);
        vcdp->declBus(c+361,"CFOCorrector phase_rotator cordic_pipeline_core result_payload_z", false,-1, 31,0);
        vcdp->declBit(c+2001,"CFOCorrector phase_rotator cordic_pipeline_core clk", false,-1);
        vcdp->declBit(c+2009,"CFOCorrector phase_rotator cordic_pipeline_core reset", false,-1);
        vcdp->declBit(c+1945,"CFOCorrector phase_rotator cordic_pipeline_core raw_data_fire", false,-1);
        vcdp->declBit(c+1073,"CFOCorrector phase_rotator shiftRegister_4 input_1", false,-1);
        vcdp->declBit(c+369,"CFOCorrector phase_rotator shiftRegister_4 output_1", false,-1);
        vcdp->declBit(c+1945,"CFOCorrector phase_rotator shiftRegister_4 enable", false,-1);
        vcdp->declBit(c+2033,"CFOCorrector phase_rotator shiftRegister_4 clc", false,-1);
        vcdp->declBit(c+2001,"CFOCorrector phase_rotator shiftRegister_4 clk", false,-1);
        vcdp->declBit(c+2009,"CFOCorrector phase_rotator shiftRegister_4 reset", false,-1);
        vcdp->declBit(c+385,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_0", false,-1);
        vcdp->declBit(c+393,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_1", false,-1);
        vcdp->declBit(c+401,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_2", false,-1);
        vcdp->declBit(c+409,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_3", false,-1);
        vcdp->declBit(c+417,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_4", false,-1);
        vcdp->declBit(c+425,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_5", false,-1);
        vcdp->declBit(c+433,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_6", false,-1);
        vcdp->declBit(c+441,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_7", false,-1);
        vcdp->declBit(c+449,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_8", false,-1);
        vcdp->declBit(c+457,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_9", false,-1);
        vcdp->declBit(c+465,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_10", false,-1);
        vcdp->declBit(c+473,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_11", false,-1);
        vcdp->declBit(c+481,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_12", false,-1);
        vcdp->declBit(c+489,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_13", false,-1);
        vcdp->declBit(c+497,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_14", false,-1);
        vcdp->declBit(c+369,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_15", false,-1);
        vcdp->declBit(c+329,"CFOCorrector cfo_estimator rotated_data_valid", false,-1);
        vcdp->declBus(c+257,"CFOCorrector cfo_estimator rotated_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+265,"CFOCorrector cfo_estimator rotated_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1065,"CFOCorrector cfo_estimator delta_phi_valid", false,-1);
        vcdp->declBus(c+273,"CFOCorrector cfo_estimator delta_phi_payload", false,-1, 31,0);
        vcdp->declBit(c+2001,"CFOCorrector cfo_estimator clk", false,-1);
        vcdp->declBit(c+2009,"CFOCorrector cfo_estimator reset", false,-1);
        vcdp->declBus(c+161,"CFOCorrector cfo_estimator cordic_core_raw_data_payload_y", false,-1, 31,0);
        vcdp->declBit(c+1089,"CFOCorrector cfo_estimator auto_corr_core_corr_result_valid", false,-1);
        vcdp->declQuad(c+1097,"CFOCorrector cfo_estimator auto_corr_core_corr_result_payload_cha_i", false,-1, 47,0);
        vcdp->declQuad(c+1113,"CFOCorrector cfo_estimator auto_corr_core_corr_result_payload_cha_q", false,-1, 47,0);
        vcdp->declBit(c+2041,"CFOCorrector cfo_estimator cordic_core_raw_data_ready", false,-1);
        vcdp->declBit(c+1129,"CFOCorrector cfo_estimator cordic_core_result_valid", false,-1);
        vcdp->declBus(c+505,"CFOCorrector cfo_estimator cordic_core_result_payload_x", false,-1, 31,0);
        vcdp->declBus(c+513,"CFOCorrector cfo_estimator cordic_core_result_payload_y", false,-1, 31,0);
        vcdp->declBus(c+521,"CFOCorrector cfo_estimator cordic_core_result_payload_z", false,-1, 31,0);
        vcdp->declBus(c+2081,"CFOCorrector cfo_estimator phi_scale", false,-1, 31,0);
        vcdp->declBus(c+1137,"CFOCorrector cfo_estimator impulse_cnt", false,-1, 6,0);
        vcdp->declBit(c+169,"CFOCorrector cfo_estimator when_SInt_l332", false,-1);
        vcdp->declBit(c+177,"CFOCorrector cfo_estimator when_SInt_l186", false,-1);
        vcdp->declBit(c+185,"CFOCorrector cfo_estimator when_SInt_l125", false,-1);
        vcdp->declBit(c+193,"CFOCorrector cfo_estimator when_SInt_l126", false,-1);
        vcdp->declBit(c+201,"CFOCorrector cfo_estimator when_SInt_l132", false,-1);
        vcdp->declBit(c+209,"CFOCorrector cfo_estimator when_SInt_l332_1", false,-1);
        vcdp->declBit(c+217,"CFOCorrector cfo_estimator when_SInt_l186_1", false,-1);
        vcdp->declBit(c+225,"CFOCorrector cfo_estimator when_SInt_l125_1", false,-1);
        vcdp->declBit(c+233,"CFOCorrector cfo_estimator when_SInt_l126_1", false,-1);
        vcdp->declBit(c+241,"CFOCorrector cfo_estimator when_SInt_l132_1", false,-1);
        vcdp->declQuad(c+529,"CFOCorrector cfo_estimator scale_val", false,-1, 63,0);
        vcdp->declBit(c+97,"CFOCorrector cfo_estimator when_SInt_l332_2", false,-1);
        vcdp->declBit(c+105,"CFOCorrector cfo_estimator when_SInt_l186_2", false,-1);
        vcdp->declBit(c+113,"CFOCorrector cfo_estimator when_SInt_l125_2", false,-1);
        vcdp->declBit(c+121,"CFOCorrector cfo_estimator when_SInt_l126_2", false,-1);
        vcdp->declBit(c+129,"CFOCorrector cfo_estimator when_SInt_l132_2", false,-1);
        vcdp->declBit(c+281,"CFOCorrector cfo_estimator when_SInt_l125_3", false,-1);
        vcdp->declBit(c+289,"CFOCorrector cfo_estimator when_SInt_l126_3", false,-1);
        vcdp->declBit(c+297,"CFOCorrector cfo_estimator when_SInt_l132_3", false,-1);
        vcdp->declBit(c+329,"CFOCorrector cfo_estimator auto_corr_core raw_data_valid", false,-1);
        vcdp->declBus(c+257,"CFOCorrector cfo_estimator auto_corr_core raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+265,"CFOCorrector cfo_estimator auto_corr_core raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1089,"CFOCorrector cfo_estimator auto_corr_core corr_result_valid", false,-1);
        vcdp->declQuad(c+1097,"CFOCorrector cfo_estimator auto_corr_core corr_result_payload_cha_i", false,-1, 47,0);
        vcdp->declQuad(c+1113,"CFOCorrector cfo_estimator auto_corr_core corr_result_payload_cha_q", false,-1, 47,0);
        vcdp->declBit(c+2001,"CFOCorrector cfo_estimator auto_corr_core clk", false,-1);
        vcdp->declBit(c+2009,"CFOCorrector cfo_estimator auto_corr_core reset", false,-1);
        vcdp->declBit(c+337,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4_clc", false,-1);
        vcdp->declBit(c+1177,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4_output_valid", false,-1);
        vcdp->declBus(c+1185,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4_output_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1193,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4_output_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1089,"CFOCorrector cfo_estimator auto_corr_core corr_core_corr_result_valid", false,-1);
        vcdp->declQuad(c+1097,"CFOCorrector cfo_estimator auto_corr_core corr_core_corr_result_payload_cha_i", false,-1, 47,0);
        vcdp->declQuad(c+1113,"CFOCorrector cfo_estimator auto_corr_core corr_core_corr_result_payload_cha_q", false,-1, 47,0);
        vcdp->declBit(c+329,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 input_valid", false,-1);
        vcdp->declBus(c+257,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 input_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+265,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 input_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1177,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 output_valid", false,-1);
        vcdp->declBus(c+1185,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 output_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1193,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 output_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+329,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 enable", false,-1);
        vcdp->declBit(c+337,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 clc", false,-1);
        vcdp->declBit(c+2001,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 clk", false,-1);
        vcdp->declBit(c+2009,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 reset", false,-1);
        vcdp->declBit(c+1201,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_0_valid", false,-1);
        vcdp->declBus(c+1209,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_0_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1217,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_0_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1225,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_1_valid", false,-1);
        vcdp->declBus(c+1233,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_1_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1241,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_1_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1249,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_2_valid", false,-1);
        vcdp->declBus(c+1257,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_2_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1265,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_2_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1273,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_3_valid", false,-1);
        vcdp->declBus(c+1281,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_3_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1289,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_3_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1297,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_4_valid", false,-1);
        vcdp->declBus(c+1305,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_4_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1313,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_4_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1321,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_5_valid", false,-1);
        vcdp->declBus(c+1329,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_5_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1337,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_5_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1345,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_6_valid", false,-1);
        vcdp->declBus(c+1353,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_6_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1361,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_6_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1369,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_7_valid", false,-1);
        vcdp->declBus(c+1377,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_7_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1385,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_7_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1393,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_8_valid", false,-1);
        vcdp->declBus(c+1401,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_8_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1409,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_8_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1417,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_9_valid", false,-1);
        vcdp->declBus(c+1425,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_9_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1433,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_9_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1441,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_10_valid", false,-1);
        vcdp->declBus(c+1449,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_10_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1457,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_10_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1465,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_11_valid", false,-1);
        vcdp->declBus(c+1473,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_11_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1481,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_11_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1489,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_12_valid", false,-1);
        vcdp->declBus(c+1497,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_12_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1505,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_12_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1513,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_13_valid", false,-1);
        vcdp->declBus(c+1521,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_13_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1529,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_13_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1537,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_14_valid", false,-1);
        vcdp->declBus(c+1545,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_14_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1553,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_14_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1561,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_15_valid", false,-1);
        vcdp->declBus(c+1569,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_15_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1577,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_15_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1585,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_16_valid", false,-1);
        vcdp->declBus(c+1593,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_16_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1601,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_16_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1609,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_17_valid", false,-1);
        vcdp->declBus(c+1617,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_17_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1625,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_17_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1633,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_18_valid", false,-1);
        vcdp->declBus(c+1641,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_18_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1649,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_18_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1657,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_19_valid", false,-1);
        vcdp->declBus(c+1665,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_19_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1673,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_19_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1681,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_20_valid", false,-1);
        vcdp->declBus(c+1689,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_20_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1697,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_20_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1705,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_21_valid", false,-1);
        vcdp->declBus(c+1713,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_21_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1721,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_21_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1729,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_22_valid", false,-1);
        vcdp->declBus(c+1737,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_22_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1745,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_22_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1753,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_23_valid", false,-1);
        vcdp->declBus(c+1761,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_23_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1769,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_23_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1777,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_24_valid", false,-1);
        vcdp->declBus(c+1785,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_24_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1793,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_24_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1801,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_25_valid", false,-1);
        vcdp->declBus(c+1809,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_25_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1817,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_25_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1825,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_26_valid", false,-1);
        vcdp->declBus(c+1833,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_26_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1841,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_26_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1849,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_27_valid", false,-1);
        vcdp->declBus(c+1857,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_27_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1865,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_27_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1873,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_28_valid", false,-1);
        vcdp->declBus(c+1881,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_28_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1889,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_28_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1897,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_29_valid", false,-1);
        vcdp->declBus(c+1905,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_29_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1913,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_29_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1921,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_30_valid", false,-1);
        vcdp->declBus(c+1929,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_30_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1937,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_30_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1177,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_31_valid", false,-1);
        vcdp->declBus(c+1185,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_31_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1193,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_31_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+329,"CFOCorrector cfo_estimator auto_corr_core corr_core raw_data_0_valid", false,-1);
        vcdp->declBus(c+257,"CFOCorrector cfo_estimator auto_corr_core corr_core raw_data_0_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+265,"CFOCorrector cfo_estimator auto_corr_core corr_core raw_data_0_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1177,"CFOCorrector cfo_estimator auto_corr_core corr_core raw_data_1_valid", false,-1);
        vcdp->declBus(c+1185,"CFOCorrector cfo_estimator auto_corr_core corr_core raw_data_1_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1193,"CFOCorrector cfo_estimator auto_corr_core corr_core raw_data_1_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1089,"CFOCorrector cfo_estimator auto_corr_core corr_core corr_result_valid", false,-1);
        vcdp->declQuad(c+1097,"CFOCorrector cfo_estimator auto_corr_core corr_core corr_result_payload_cha_i", false,-1, 47,0);
        vcdp->declQuad(c+1113,"CFOCorrector cfo_estimator auto_corr_core corr_core corr_result_payload_cha_q", false,-1, 47,0);
        vcdp->declBit(c+2001,"CFOCorrector cfo_estimator auto_corr_core corr_core clk", false,-1);
        vcdp->declBit(c+2009,"CFOCorrector cfo_estimator auto_corr_core corr_core reset", false,-1);
        vcdp->declBit(c+1145,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4_clc", false,-1);
        vcdp->declBit(c+1145,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5_clc", false,-1);
        vcdp->declBus(c+545,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4_output_1", false,-1, 31,0);
        vcdp->declBus(c+553,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5_output_1", false,-1, 31,0);
        vcdp->declQuad(c+1097,"CFOCorrector cfo_estimator auto_corr_core corr_core corr_val_i", false,-1, 47,0);
        vcdp->declQuad(c+1113,"CFOCorrector cfo_estimator auto_corr_core corr_core corr_val_q", false,-1, 47,0);
        vcdp->declBus(c+305,"CFOCorrector cfo_estimator auto_corr_core corr_core k1", false,-1, 31,0);
        vcdp->declBus(c+313,"CFOCorrector cfo_estimator auto_corr_core corr_core k2", false,-1, 31,0);
        vcdp->declBus(c+321,"CFOCorrector cfo_estimator auto_corr_core corr_core k3", false,-1, 31,0);
        vcdp->declBus(c+1153,"CFOCorrector cfo_estimator auto_corr_core corr_core mul_i", false,-1, 31,0);
        vcdp->declBus(c+1161,"CFOCorrector cfo_estimator auto_corr_core corr_core mul_q", false,-1, 31,0);
        vcdp->declBit(c+1169,"CFOCorrector cfo_estimator auto_corr_core corr_core mul_data_valid", false,-1);
        vcdp->declBit(c+1089,"CFOCorrector cfo_estimator auto_corr_core corr_core corr_result_valid_1", false,-1);
        vcdp->declBus(c+1153,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 input_1", false,-1, 31,0);
        vcdp->declBus(c+545,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 output_1", false,-1, 31,0);
        vcdp->declBit(c+1169,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 enable", false,-1);
        vcdp->declBit(c+1145,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 clc", false,-1);
        vcdp->declBit(c+2001,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 clk", false,-1);
        vcdp->declBit(c+2009,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 reset", false,-1);
        vcdp->declBus(c+561,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_0", false,-1, 31,0);
        vcdp->declBus(c+569,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_1", false,-1, 31,0);
        vcdp->declBus(c+577,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_2", false,-1, 31,0);
        vcdp->declBus(c+585,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_3", false,-1, 31,0);
        vcdp->declBus(c+593,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_4", false,-1, 31,0);
        vcdp->declBus(c+601,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_5", false,-1, 31,0);
        vcdp->declBus(c+609,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_6", false,-1, 31,0);
        vcdp->declBus(c+617,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_7", false,-1, 31,0);
        vcdp->declBus(c+625,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_8", false,-1, 31,0);
        vcdp->declBus(c+633,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_9", false,-1, 31,0);
        vcdp->declBus(c+641,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_10", false,-1, 31,0);
        vcdp->declBus(c+649,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_11", false,-1, 31,0);
        vcdp->declBus(c+657,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_12", false,-1, 31,0);
        vcdp->declBus(c+665,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_13", false,-1, 31,0);
        vcdp->declBus(c+673,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_14", false,-1, 31,0);
        vcdp->declBus(c+681,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_15", false,-1, 31,0);
        vcdp->declBus(c+689,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_16", false,-1, 31,0);
        vcdp->declBus(c+697,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_17", false,-1, 31,0);
        vcdp->declBus(c+705,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_18", false,-1, 31,0);
        vcdp->declBus(c+713,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_19", false,-1, 31,0);
        vcdp->declBus(c+721,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_20", false,-1, 31,0);
        vcdp->declBus(c+729,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_21", false,-1, 31,0);
        vcdp->declBus(c+737,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_22", false,-1, 31,0);
        vcdp->declBus(c+745,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_23", false,-1, 31,0);
        vcdp->declBus(c+753,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_24", false,-1, 31,0);
        vcdp->declBus(c+761,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_25", false,-1, 31,0);
        vcdp->declBus(c+769,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_26", false,-1, 31,0);
        vcdp->declBus(c+777,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_27", false,-1, 31,0);
        vcdp->declBus(c+785,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_28", false,-1, 31,0);
        vcdp->declBus(c+793,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_29", false,-1, 31,0);
        vcdp->declBus(c+801,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_30", false,-1, 31,0);
        vcdp->declBus(c+545,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_31", false,-1, 31,0);
        vcdp->declBus(c+1161,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 input_1", false,-1, 31,0);
        vcdp->declBus(c+553,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 output_1", false,-1, 31,0);
        vcdp->declBit(c+1169,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 enable", false,-1);
        vcdp->declBit(c+1145,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 clc", false,-1);
        vcdp->declBit(c+2001,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 clk", false,-1);
        vcdp->declBit(c+2009,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 reset", false,-1);
        vcdp->declBus(c+809,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_0", false,-1, 31,0);
        vcdp->declBus(c+817,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_1", false,-1, 31,0);
        vcdp->declBus(c+825,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_2", false,-1, 31,0);
        vcdp->declBus(c+833,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_3", false,-1, 31,0);
        vcdp->declBus(c+841,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_4", false,-1, 31,0);
        vcdp->declBus(c+849,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_5", false,-1, 31,0);
        vcdp->declBus(c+857,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_6", false,-1, 31,0);
        vcdp->declBus(c+865,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_7", false,-1, 31,0);
        vcdp->declBus(c+873,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_8", false,-1, 31,0);
        vcdp->declBus(c+881,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_9", false,-1, 31,0);
        vcdp->declBus(c+889,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_10", false,-1, 31,0);
        vcdp->declBus(c+897,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_11", false,-1, 31,0);
        vcdp->declBus(c+905,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_12", false,-1, 31,0);
        vcdp->declBus(c+913,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_13", false,-1, 31,0);
        vcdp->declBus(c+921,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_14", false,-1, 31,0);
        vcdp->declBus(c+929,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_15", false,-1, 31,0);
        vcdp->declBus(c+937,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_16", false,-1, 31,0);
        vcdp->declBus(c+945,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_17", false,-1, 31,0);
        vcdp->declBus(c+953,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_18", false,-1, 31,0);
        vcdp->declBus(c+961,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_19", false,-1, 31,0);
        vcdp->declBus(c+969,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_20", false,-1, 31,0);
        vcdp->declBus(c+977,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_21", false,-1, 31,0);
        vcdp->declBus(c+985,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_22", false,-1, 31,0);
        vcdp->declBus(c+993,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_23", false,-1, 31,0);
        vcdp->declBus(c+1001,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_24", false,-1, 31,0);
        vcdp->declBus(c+1009,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_25", false,-1, 31,0);
        vcdp->declBus(c+1017,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_26", false,-1, 31,0);
        vcdp->declBus(c+1025,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_27", false,-1, 31,0);
        vcdp->declBus(c+1033,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_28", false,-1, 31,0);
        vcdp->declBus(c+1041,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_29", false,-1, 31,0);
        vcdp->declBus(c+1049,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_30", false,-1, 31,0);
        vcdp->declBus(c+553,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_31", false,-1, 31,0);
        vcdp->declBit(c+2089,"CFOCorrector cfo_estimator cordic_core rotate_mode", false,-1);
        vcdp->declBus(c+2073,"CFOCorrector cfo_estimator cordic_core x_u", false,-1, 1,0);
        vcdp->declBit(c+1089,"CFOCorrector cfo_estimator cordic_core raw_data_valid", false,-1);
        vcdp->declBit(c+2041,"CFOCorrector cfo_estimator cordic_core raw_data_ready", false,-1);
        vcdp->declBus(c+249,"CFOCorrector cfo_estimator cordic_core raw_data_payload_x", false,-1, 31,0);
        vcdp->declBus(c+161,"CFOCorrector cfo_estimator cordic_core raw_data_payload_y", false,-1, 31,0);
        vcdp->declBus(c+2097,"CFOCorrector cfo_estimator cordic_core raw_data_payload_z", false,-1, 31,0);
        vcdp->declBit(c+1129,"CFOCorrector cfo_estimator cordic_core result_valid", false,-1);
        vcdp->declBus(c+505,"CFOCorrector cfo_estimator cordic_core result_payload_x", false,-1, 31,0);
        vcdp->declBus(c+513,"CFOCorrector cfo_estimator cordic_core result_payload_y", false,-1, 31,0);
        vcdp->declBus(c+521,"CFOCorrector cfo_estimator cordic_core result_payload_z", false,-1, 31,0);
        vcdp->declBit(c+2001,"CFOCorrector cfo_estimator cordic_core clk", false,-1);
        vcdp->declBit(c+2009,"CFOCorrector cfo_estimator cordic_core reset", false,-1);
        vcdp->declBit(c+1089,"CFOCorrector cfo_estimator cordic_core raw_data_fire", false,-1);
    }
}

void VCFOCorrector::traceFullThis__1(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp38[3];
    WData/*95:0*/ __Vtemp39[3];
    // Body
    {
        vcdp->fullBit(c+1,((1U & (IData)((VL_ULL(1) 
                                          & ((VL_ULL(0x1ffff8000) 
                                              + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                             >> 0x20U))))));
        vcdp->fullBit(c+9,((0U != (0xffffU & ((IData)(0x8000U) 
                                              + (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_2))))));
        vcdp->fullBus(c+17,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_x_raw),16);
        vcdp->fullBit(c+25,((1U & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw 
                                   >> 0x10U))));
        vcdp->fullBit(c+33,((3U != (3U & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw 
                                          >> 0xfU)))));
        vcdp->fullBit(c+41,((1U & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw 
                                   >> 0xfU))));
        vcdp->fullBit(c+49,((1U & (IData)((VL_ULL(1) 
                                           & ((VL_ULL(0x1ffff8000) 
                                               + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                              >> 0x20U))))));
        vcdp->fullBit(c+57,((0U != (0xffffU & ((IData)(0x8000U) 
                                               + (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l332_5))))));
        vcdp->fullBus(c+65,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_y_raw),16);
        vcdp->fullBit(c+73,((1U & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw 
                                   >> 0x10U))));
        vcdp->fullBit(c+81,((3U != (3U & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw 
                                          >> 0xfU)))));
        vcdp->fullBit(c+89,((1U & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw 
                                   >> 0xfU))));
        __Vtemp38[0U] = 0xffff8000U;
        __Vtemp38[1U] = 0xffffffffU;
        __Vtemp38[2U] = 1U;
        VL_ADD_W(3, __Vtemp39, __Vtemp38, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_delta_phi_payload_4);
        vcdp->fullBit(c+97,((1U & __Vtemp39[2U])));
        vcdp->fullBit(c+105,((0U != (0xffffU & ((IData)(0x8000U) 
                                                + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_delta_phi_payload_4[0U])))));
        vcdp->fullBit(c+113,((1U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload 
                                            >> 0x30U)))));
        vcdp->fullBit(c+121,((3U != (3U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload 
                                                   >> 0x2fU))))));
        vcdp->fullBit(c+129,((1U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload 
                                            >> 0x2fU)))));
        vcdp->fullBus(c+137,((VL_LTS_III(1,32,32, 0x1921fU, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l47)
                               ? ((vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                                   - (IData)(0x3243fU)) 
                                  + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect)
                               : (VL_GTS_III(1,32,32, 0xfffe6de1U, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l47)
                                   ? ((IData)(0x3243fU) 
                                      + (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                                         + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect))
                                   : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                                      + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect)))),32);
        vcdp->fullBit(c+145,(VL_LTS_III(1,32,32, 0x1921fU, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l47)));
        vcdp->fullBit(c+153,(VL_GTS_III(1,32,32, 0xfffe6de1U, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l47)));
        vcdp->fullBus(c+161,(VL_NEGATE_I(((1U & (IData)(
                                                        (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125_4 
                                                         >> 0x20U)))
                                           ? ((3U != 
                                               (3U 
                                                & (IData)(
                                                          (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125_4 
                                                           >> 0x1fU))))
                                               ? 0x80000000U
                                               : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125_4))
                                           : ((1U & (IData)(
                                                            (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125_4 
                                                             >> 0x1fU)))
                                               ? 0x7fffffffU
                                               : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125_4))))),32);
        vcdp->fullBit(c+169,((1U & (IData)((VL_ULL(1) 
                                            & ((VL_ULL(0x1ffffffff8000) 
                                                + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_2) 
                                               >> 0x30U))))));
        vcdp->fullBit(c+177,((0U != (0xffffU & ((IData)(0x8000U) 
                                                + (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_2))))));
        vcdp->fullBit(c+185,((1U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125 
                                            >> 0x20U)))));
        vcdp->fullBit(c+193,((3U != (3U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125 
                                                   >> 0x1fU))))));
        vcdp->fullBit(c+201,((1U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125 
                                            >> 0x1fU)))));
        vcdp->fullBit(c+209,((1U & (IData)((VL_ULL(1) 
                                            & ((VL_ULL(0x1ffffffff8000) 
                                                + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_5) 
                                               >> 0x30U))))));
        vcdp->fullBit(c+217,((0U != (0xffffU & ((IData)(0x8000U) 
                                                + (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l332_5))))));
        vcdp->fullBit(c+225,((1U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125_4 
                                            >> 0x20U)))));
        vcdp->fullBit(c+233,((3U != (3U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125_4 
                                                   >> 0x1fU))))));
        vcdp->fullBit(c+241,((1U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125_4 
                                            >> 0x1fU)))));
        vcdp->fullBus(c+249,(((1U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125 
                                             >> 0x20U)))
                               ? ((3U != (3U & (IData)(
                                                       (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125 
                                                        >> 0x1fU))))
                                   ? 0x80000000U : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125))
                               : ((1U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125 
                                                 >> 0x1fU)))
                                   ? 0x7fffffffU : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l125)))),32);
        vcdp->fullBus(c+257,(vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_i),16);
        vcdp->fullBus(c+265,(vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_q),16);
        vcdp->fullBus(c+273,(((1U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                             >> 0x2fU)))
                               ? ((0x1ffffU != (0x1ffffU 
                                                & (IData)(
                                                          (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                           >> 0x1fU))))
                                   ? 0x80000000U : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))
                               : ((0U != (0xffffU & (IData)(
                                                            (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                             >> 0x1fU))))
                                   ? 0x7fffffffU : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7)))),32);
        vcdp->fullBit(c+281,((1U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                            >> 0x2fU)))));
        vcdp->fullBit(c+289,((0x1ffffU != (0x1ffffU 
                                           & (IData)(
                                                     (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                      >> 0x1fU))))));
        vcdp->fullBit(c+297,((0U != (0xffffU & (IData)(
                                                       (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                        >> 0x1fU))))));
        vcdp->fullBus(c+305,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1),32);
        vcdp->fullBus(c+313,(VL_MULS_III(32,32,32, 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_i)), 
                                         VL_EXTENDS_II(32,16, 
                                                       (0xffffU 
                                                        & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_q) 
                                                           + (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_i)))))),32);
        vcdp->fullBus(c+321,(VL_MULS_III(32,32,32, 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_q)), 
                                         VL_EXTENDS_II(32,16, 
                                                       (0xffffU 
                                                        & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_i) 
                                                           - (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_q)))))),32);
        vcdp->fullBit(c+329,(vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid));
        vcdp->fullBit(c+337,((1U & (~ (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid)))));
        vcdp->fullBus(c+345,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15),32);
        vcdp->fullBus(c+353,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y),32);
        vcdp->fullBus(c+361,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z),32);
        vcdp->fullBit(c+369,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_15));
        vcdp->fullBus(c+377,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi),32);
        vcdp->fullBit(c+385,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_0));
        vcdp->fullBit(c+393,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_1));
        vcdp->fullBit(c+401,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_2));
        vcdp->fullBit(c+409,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_3));
        vcdp->fullBit(c+417,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_4));
        vcdp->fullBit(c+425,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_5));
        vcdp->fullBit(c+433,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_6));
        vcdp->fullBit(c+441,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_7));
        vcdp->fullBit(c+449,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_8));
        vcdp->fullBit(c+457,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_9));
        vcdp->fullBit(c+465,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_10));
        vcdp->fullBit(c+473,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_11));
        vcdp->fullBit(c+481,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_12));
        vcdp->fullBit(c+489,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_13));
        vcdp->fullBit(c+497,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_14));
        vcdp->fullBus(c+505,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15),32);
        vcdp->fullBus(c+513,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_y),32);
        vcdp->fullBus(c+521,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z),32);
        vcdp->fullQuad(c+529,(VL_MULS_QQQ(64,64,64, VL_ULL(0x800), 
                                          VL_EXTENDS_QI(64,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z))),64);
        vcdp->fullBus(c+545,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31),32);
        vcdp->fullBus(c+553,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_31),32);
        vcdp->fullBus(c+561,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0),32);
        vcdp->fullBus(c+569,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1),32);
        vcdp->fullBus(c+577,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2),32);
        vcdp->fullBus(c+585,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3),32);
        vcdp->fullBus(c+593,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4),32);
        vcdp->fullBus(c+601,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5),32);
        vcdp->fullBus(c+609,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6),32);
        vcdp->fullBus(c+617,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7),32);
        vcdp->fullBus(c+625,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8),32);
        vcdp->fullBus(c+633,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9),32);
        vcdp->fullBus(c+641,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10),32);
        vcdp->fullBus(c+649,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11),32);
        vcdp->fullBus(c+657,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12),32);
        vcdp->fullBus(c+665,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13),32);
        vcdp->fullBus(c+673,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14),32);
        vcdp->fullBus(c+681,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15),32);
        vcdp->fullBus(c+689,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16),32);
        vcdp->fullBus(c+697,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_17),32);
        vcdp->fullBus(c+705,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_18),32);
        vcdp->fullBus(c+713,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_19),32);
        vcdp->fullBus(c+721,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_20),32);
        vcdp->fullBus(c+729,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_21),32);
        vcdp->fullBus(c+737,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_22),32);
        vcdp->fullBus(c+745,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_23),32);
        vcdp->fullBus(c+753,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_24),32);
        vcdp->fullBus(c+761,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_25),32);
        vcdp->fullBus(c+769,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_26),32);
        vcdp->fullBus(c+777,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_27),32);
        vcdp->fullBus(c+785,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_28),32);
        vcdp->fullBus(c+793,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_29),32);
        vcdp->fullBus(c+801,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_30),32);
        vcdp->fullBus(c+809,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_0),32);
        vcdp->fullBus(c+817,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_1),32);
        vcdp->fullBus(c+825,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_2),32);
        vcdp->fullBus(c+833,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_3),32);
        vcdp->fullBus(c+841,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_4),32);
        vcdp->fullBus(c+849,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_5),32);
        vcdp->fullBus(c+857,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_6),32);
        vcdp->fullBus(c+865,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_7),32);
        vcdp->fullBus(c+873,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_8),32);
        vcdp->fullBus(c+881,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_9),32);
        vcdp->fullBus(c+889,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_10),32);
        vcdp->fullBus(c+897,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_11),32);
        vcdp->fullBus(c+905,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_12),32);
        vcdp->fullBus(c+913,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_13),32);
        vcdp->fullBus(c+921,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_14),32);
        vcdp->fullBus(c+929,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_15),32);
        vcdp->fullBus(c+937,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_16),32);
        vcdp->fullBus(c+945,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_17),32);
        vcdp->fullBus(c+953,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_18),32);
        vcdp->fullBus(c+961,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_19),32);
        vcdp->fullBus(c+969,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_20),32);
        vcdp->fullBus(c+977,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_21),32);
        vcdp->fullBus(c+985,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_22),32);
        vcdp->fullBus(c+993,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_23),32);
        vcdp->fullBus(c+1001,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_24),32);
        vcdp->fullBus(c+1009,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_25),32);
    }
}

void VCFOCorrector::traceFullThis__8(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1017,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_26),32);
        vcdp->fullBus(c+1025,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_27),32);
        vcdp->fullBus(c+1033,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_28),32);
        vcdp->fullBus(c+1041,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_29),32);
        vcdp->fullBus(c+1049,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_30),32);
        vcdp->fullBit(c+1057,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_15));
        vcdp->fullBit(c+1065,(((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_15) 
                               & (0x41U == (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__impulse_cnt)))));
        vcdp->fullBit(c+1073,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__xy_symbol));
        vcdp->fullBus(c+1081,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect),32);
        vcdp->fullBit(c+1089,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1));
        vcdp->fullQuad(c+1097,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i),48);
        vcdp->fullQuad(c+1113,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q),48);
        vcdp->fullBit(c+1129,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_15));
        vcdp->fullBus(c+1137,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__impulse_cnt),7);
        vcdp->fullBit(c+1145,((1U & (~ (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid)))));
        vcdp->fullBus(c+1153,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_i),32);
        vcdp->fullBus(c+1161,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_q),32);
        vcdp->fullBit(c+1169,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid));
        vcdp->fullBit(c+1177,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_valid));
        vcdp->fullBus(c+1185,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_i),16);
        vcdp->fullBus(c+1193,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_q),16);
        vcdp->fullBit(c+1201,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_valid));
        vcdp->fullBus(c+1209,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_payload_cha_i),16);
        vcdp->fullBus(c+1217,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_payload_cha_q),16);
        vcdp->fullBit(c+1225,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_valid));
        vcdp->fullBus(c+1233,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_payload_cha_i),16);
        vcdp->fullBus(c+1241,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_payload_cha_q),16);
        vcdp->fullBit(c+1249,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_valid));
        vcdp->fullBus(c+1257,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_payload_cha_i),16);
        vcdp->fullBus(c+1265,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_payload_cha_q),16);
        vcdp->fullBit(c+1273,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_valid));
        vcdp->fullBus(c+1281,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_payload_cha_i),16);
        vcdp->fullBus(c+1289,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_payload_cha_q),16);
        vcdp->fullBit(c+1297,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_valid));
        vcdp->fullBus(c+1305,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_payload_cha_i),16);
        vcdp->fullBus(c+1313,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_payload_cha_q),16);
        vcdp->fullBit(c+1321,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_valid));
        vcdp->fullBus(c+1329,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_payload_cha_i),16);
        vcdp->fullBus(c+1337,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_payload_cha_q),16);
        vcdp->fullBit(c+1345,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_valid));
        vcdp->fullBus(c+1353,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_payload_cha_i),16);
        vcdp->fullBus(c+1361,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_payload_cha_q),16);
        vcdp->fullBit(c+1369,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_valid));
        vcdp->fullBus(c+1377,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_payload_cha_i),16);
        vcdp->fullBus(c+1385,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_payload_cha_q),16);
        vcdp->fullBit(c+1393,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_valid));
        vcdp->fullBus(c+1401,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_payload_cha_i),16);
        vcdp->fullBus(c+1409,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_payload_cha_q),16);
        vcdp->fullBit(c+1417,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_valid));
        vcdp->fullBus(c+1425,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_payload_cha_i),16);
        vcdp->fullBus(c+1433,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_payload_cha_q),16);
        vcdp->fullBit(c+1441,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_valid));
        vcdp->fullBus(c+1449,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_payload_cha_i),16);
        vcdp->fullBus(c+1457,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_payload_cha_q),16);
        vcdp->fullBit(c+1465,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_valid));
        vcdp->fullBus(c+1473,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_payload_cha_i),16);
        vcdp->fullBus(c+1481,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_payload_cha_q),16);
        vcdp->fullBit(c+1489,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_valid));
        vcdp->fullBus(c+1497,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_payload_cha_i),16);
        vcdp->fullBus(c+1505,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_payload_cha_q),16);
        vcdp->fullBit(c+1513,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_valid));
        vcdp->fullBus(c+1521,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_payload_cha_i),16);
        vcdp->fullBus(c+1529,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_payload_cha_q),16);
        vcdp->fullBit(c+1537,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_valid));
        vcdp->fullBus(c+1545,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_payload_cha_i),16);
        vcdp->fullBus(c+1553,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_payload_cha_q),16);
        vcdp->fullBit(c+1561,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_valid));
        vcdp->fullBus(c+1569,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_payload_cha_i),16);
        vcdp->fullBus(c+1577,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_payload_cha_q),16);
        vcdp->fullBit(c+1585,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_valid));
        vcdp->fullBus(c+1593,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_payload_cha_i),16);
        vcdp->fullBus(c+1601,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_16_payload_cha_q),16);
        vcdp->fullBit(c+1609,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_valid));
        vcdp->fullBus(c+1617,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_payload_cha_i),16);
        vcdp->fullBus(c+1625,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_17_payload_cha_q),16);
        vcdp->fullBit(c+1633,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_valid));
        vcdp->fullBus(c+1641,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_payload_cha_i),16);
        vcdp->fullBus(c+1649,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_18_payload_cha_q),16);
        vcdp->fullBit(c+1657,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_valid));
        vcdp->fullBus(c+1665,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_payload_cha_i),16);
        vcdp->fullBus(c+1673,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_19_payload_cha_q),16);
        vcdp->fullBit(c+1681,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_valid));
        vcdp->fullBus(c+1689,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_payload_cha_i),16);
        vcdp->fullBus(c+1697,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_20_payload_cha_q),16);
        vcdp->fullBit(c+1705,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_valid));
        vcdp->fullBus(c+1713,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_payload_cha_i),16);
        vcdp->fullBus(c+1721,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_21_payload_cha_q),16);
        vcdp->fullBit(c+1729,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_valid));
        vcdp->fullBus(c+1737,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_payload_cha_i),16);
        vcdp->fullBus(c+1745,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_22_payload_cha_q),16);
        vcdp->fullBit(c+1753,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_valid));
        vcdp->fullBus(c+1761,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_payload_cha_i),16);
        vcdp->fullBus(c+1769,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_23_payload_cha_q),16);
        vcdp->fullBit(c+1777,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_valid));
        vcdp->fullBus(c+1785,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_payload_cha_i),16);
        vcdp->fullBus(c+1793,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_24_payload_cha_q),16);
        vcdp->fullBit(c+1801,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_valid));
        vcdp->fullBus(c+1809,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_payload_cha_i),16);
        vcdp->fullBus(c+1817,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_25_payload_cha_q),16);
        vcdp->fullBit(c+1825,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_valid));
        vcdp->fullBus(c+1833,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_payload_cha_i),16);
        vcdp->fullBus(c+1841,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_26_payload_cha_q),16);
        vcdp->fullBit(c+1849,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_valid));
        vcdp->fullBus(c+1857,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_payload_cha_i),16);
        vcdp->fullBus(c+1865,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_27_payload_cha_q),16);
        vcdp->fullBit(c+1873,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_valid));
        vcdp->fullBus(c+1881,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_payload_cha_i),16);
        vcdp->fullBus(c+1889,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_28_payload_cha_q),16);
        vcdp->fullBit(c+1897,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_valid));
        vcdp->fullBus(c+1905,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_payload_cha_i),16);
        vcdp->fullBus(c+1913,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_29_payload_cha_q),16);
        vcdp->fullBit(c+1921,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_valid));
        vcdp->fullBus(c+1929,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_payload_cha_i),16);
        vcdp->fullBus(c+1937,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_30_payload_cha_q),16);
        vcdp->fullBit(c+1945,(vlTOPp->raw_data_valid));
        vcdp->fullBus(c+1953,(vlTOPp->raw_data_payload_cha_i),16);
        vcdp->fullBus(c+1961,(vlTOPp->raw_data_payload_cha_q),16);
        vcdp->fullBit(c+1969,(vlTOPp->rotated_data_valid));
        vcdp->fullBus(c+1977,(vlTOPp->rotated_data_payload_cha_i),16);
        vcdp->fullBus(c+1985,(vlTOPp->rotated_data_payload_cha_q),16);
        vcdp->fullBit(c+1993,(vlTOPp->enable));
        vcdp->fullBit(c+2001,(vlTOPp->clk));
        vcdp->fullBit(c+2009,(vlTOPp->reset));
        vcdp->fullBus(c+2017,(((IData)(vlTOPp->raw_data_payload_cha_i) 
                               << 0x10U)),32);
        vcdp->fullBus(c+2025,(((IData)(vlTOPp->raw_data_payload_cha_q) 
                               << 0x10U)),32);
        vcdp->fullBit(c+2033,((1U & (~ (IData)(vlTOPp->raw_data_valid)))));
        vcdp->fullBit(c+2041,(1U));
        vcdp->fullBus(c+2049,(0x3243fU),32);
        vcdp->fullBus(c+2057,(0x1921fU),32);
        vcdp->fullBus(c+2065,(0xfffe6de1U),32);
        vcdp->fullBus(c+2073,(0U),2);
        vcdp->fullBus(c+2081,(0x800U),32);
        vcdp->fullBit(c+2089,(0U));
        vcdp->fullBus(c+2097,(0U),32);
    }
}
