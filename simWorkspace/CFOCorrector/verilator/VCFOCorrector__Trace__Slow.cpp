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
        vlTOPp->traceFullThis__11(vlSymsp, vcdp, code);
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
        vcdp->declBit(c+2849,"ref_data_valid", false,-1);
        vcdp->declBus(c+2857,"ref_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+2865,"ref_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+2873,"raw_data_valid", false,-1);
        vcdp->declBus(c+2881,"raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+2889,"raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+2897,"rotated_data_valid", false,-1);
        vcdp->declBus(c+2905,"rotated_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+2913,"rotated_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+2921,"enable", false,-1);
        vcdp->declBit(c+2929,"clk", false,-1);
        vcdp->declBit(c+2937,"reset", false,-1);
        vcdp->declBit(c+2849,"CFOCorrector ref_data_valid", false,-1);
        vcdp->declBus(c+2857,"CFOCorrector ref_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+2865,"CFOCorrector ref_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+2873,"CFOCorrector raw_data_valid", false,-1);
        vcdp->declBus(c+2881,"CFOCorrector raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+2889,"CFOCorrector raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+2897,"CFOCorrector rotated_data_valid", false,-1);
        vcdp->declBus(c+2905,"CFOCorrector rotated_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+2913,"CFOCorrector rotated_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+2921,"CFOCorrector enable", false,-1);
        vcdp->declBit(c+2929,"CFOCorrector clk", false,-1);
        vcdp->declBit(c+2937,"CFOCorrector reset", false,-1);
        vcdp->declBit(c+161,"CFOCorrector phase_rotator_rotated_data_valid", false,-1);
        vcdp->declBus(c+2825,"CFOCorrector phase_rotator_rotated_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+2833,"CFOCorrector phase_rotator_rotated_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+169,"CFOCorrector cfo_estimator_delta_phi_valid", false,-1);
        vcdp->declBus(c+1,"CFOCorrector cfo_estimator_delta_phi_payload", false,-1, 15,0);
        vcdp->declBit(c+97,"CFOCorrector phase_rotator_rotated_data_takeWhen_valid", false,-1);
        vcdp->declBus(c+2825,"CFOCorrector phase_rotator_rotated_data_takeWhen_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+2833,"CFOCorrector phase_rotator_rotated_data_takeWhen_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+2873,"CFOCorrector phase_rotator raw_data_valid", false,-1);
        vcdp->declBus(c+2881,"CFOCorrector phase_rotator raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+2889,"CFOCorrector phase_rotator raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+169,"CFOCorrector phase_rotator phiCorrect_valid", false,-1);
        vcdp->declBus(c+1,"CFOCorrector phase_rotator phiCorrect_payload", false,-1, 15,0);
        vcdp->declBit(c+161,"CFOCorrector phase_rotator rotated_data_valid", false,-1);
        vcdp->declBus(c+2825,"CFOCorrector phase_rotator rotated_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+2833,"CFOCorrector phase_rotator rotated_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+2929,"CFOCorrector phase_rotator clk", false,-1);
        vcdp->declBit(c+2937,"CFOCorrector phase_rotator reset", false,-1);
        vcdp->declBit(c+2945,"CFOCorrector phase_rotator cordic_pipeline_core_raw_data_ready", false,-1);
        vcdp->declBit(c+161,"CFOCorrector phase_rotator cordic_pipeline_core_result_valid", false,-1);
        vcdp->declBus(c+2825,"CFOCorrector phase_rotator cordic_pipeline_core_result_payload_x", false,-1, 15,0);
        vcdp->declBus(c+2833,"CFOCorrector phase_rotator cordic_pipeline_core_result_payload_y", false,-1, 15,0);
        vcdp->declBus(c+113,"CFOCorrector phase_rotator cordic_pipeline_core_result_payload_z", false,-1, 15,0);
        vcdp->declBus(c+2841,"CFOCorrector phase_rotator phi", false,-1, 15,0);
        vcdp->declBus(c+73,"CFOCorrector phase_rotator phiNext", false,-1, 15,0);
        vcdp->declBus(c+2953,"CFOCorrector phase_rotator math_pi", false,-1, 15,0);
        vcdp->declBus(c+2961,"CFOCorrector phase_rotator math_2_pi", false,-1, 15,0);
        vcdp->declBit(c+81,"CFOCorrector phase_rotator when_PhaseRotator_l39", false,-1);
        vcdp->declBit(c+89,"CFOCorrector phase_rotator when_PhaseRotator_l41", false,-1);
        vcdp->declBit(c+2945,"CFOCorrector phase_rotator cordic_pipeline_core rotate_mode", false,-1);
        vcdp->declBus(c+2969,"CFOCorrector phase_rotator cordic_pipeline_core x_u", false,-1, 1,0);
        vcdp->declBit(c+2873,"CFOCorrector phase_rotator cordic_pipeline_core raw_data_valid", false,-1);
        vcdp->declBit(c+2945,"CFOCorrector phase_rotator cordic_pipeline_core raw_data_ready", false,-1);
        vcdp->declBus(c+2881,"CFOCorrector phase_rotator cordic_pipeline_core raw_data_payload_x", false,-1, 15,0);
        vcdp->declBus(c+2889,"CFOCorrector phase_rotator cordic_pipeline_core raw_data_payload_y", false,-1, 15,0);
        vcdp->declBus(c+2841,"CFOCorrector phase_rotator cordic_pipeline_core raw_data_payload_z", false,-1, 15,0);
        vcdp->declBit(c+161,"CFOCorrector phase_rotator cordic_pipeline_core result_valid", false,-1);
        vcdp->declBus(c+2825,"CFOCorrector phase_rotator cordic_pipeline_core result_payload_x", false,-1, 15,0);
        vcdp->declBus(c+2833,"CFOCorrector phase_rotator cordic_pipeline_core result_payload_y", false,-1, 15,0);
        vcdp->declBus(c+113,"CFOCorrector phase_rotator cordic_pipeline_core result_payload_z", false,-1, 15,0);
        vcdp->declBit(c+2929,"CFOCorrector phase_rotator cordic_pipeline_core clk", false,-1);
        vcdp->declBit(c+2937,"CFOCorrector phase_rotator cordic_pipeline_core reset", false,-1);
        vcdp->declBit(c+2873,"CFOCorrector phase_rotator cordic_pipeline_core raw_data_fire", false,-1);
        vcdp->declBit(c+97,"CFOCorrector cfo_estimator rotated_data_valid", false,-1);
        vcdp->declBus(c+2825,"CFOCorrector cfo_estimator rotated_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+2833,"CFOCorrector cfo_estimator rotated_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+169,"CFOCorrector cfo_estimator delta_phi_valid", false,-1);
        vcdp->declBus(c+1,"CFOCorrector cfo_estimator delta_phi_payload", false,-1, 15,0);
        vcdp->declBit(c+2929,"CFOCorrector cfo_estimator clk", false,-1);
        vcdp->declBit(c+2937,"CFOCorrector cfo_estimator reset", false,-1);
        vcdp->declBus(c+177,"CFOCorrector cfo_estimator cordic_core_raw_data_payload_y", false,-1, 31,0);
        vcdp->declBit(c+185,"CFOCorrector cfo_estimator auto_corr_core_corr_result_valid", false,-1);
        vcdp->declBus(c+193,"CFOCorrector cfo_estimator auto_corr_core_corr_result_payload_cha_i", false,-1, 31,0);
        vcdp->declBus(c+201,"CFOCorrector cfo_estimator auto_corr_core_corr_result_payload_cha_q", false,-1, 31,0);
        vcdp->declBit(c+2945,"CFOCorrector cfo_estimator cordic_core_raw_data_ready", false,-1);
        vcdp->declBit(c+209,"CFOCorrector cfo_estimator cordic_core_result_valid", false,-1);
        vcdp->declBus(c+121,"CFOCorrector cfo_estimator cordic_core_result_payload_x", false,-1, 31,0);
        vcdp->declBus(c+129,"CFOCorrector cfo_estimator cordic_core_result_payload_y", false,-1, 31,0);
        vcdp->declBus(c+137,"CFOCorrector cfo_estimator cordic_core_result_payload_z", false,-1, 31,0);
        vcdp->declBus(c+2977,"CFOCorrector cfo_estimator scale", false,-1, 31,0);
        vcdp->declBus(c+217,"CFOCorrector cfo_estimator impluse_cnt", false,-1, 6,0);
        vcdp->declQuad(c+145,"CFOCorrector cfo_estimator probe_val", false,-1, 63,0);
        vcdp->declBit(c+9,"CFOCorrector cfo_estimator when_SInt_l332", false,-1);
        vcdp->declBit(c+17,"CFOCorrector cfo_estimator when_SInt_l186", false,-1);
        vcdp->declBit(c+25,"CFOCorrector cfo_estimator when_SInt_l125", false,-1);
        vcdp->declBit(c+33,"CFOCorrector cfo_estimator when_SInt_l126", false,-1);
        vcdp->declBit(c+41,"CFOCorrector cfo_estimator when_SInt_l132", false,-1);
        vcdp->declBit(c+49,"CFOCorrector cfo_estimator when_SInt_l125_1", false,-1);
        vcdp->declBit(c+57,"CFOCorrector cfo_estimator when_SInt_l126_1", false,-1);
        vcdp->declBit(c+65,"CFOCorrector cfo_estimator when_SInt_l132_1", false,-1);
        vcdp->declBit(c+97,"CFOCorrector cfo_estimator auto_corr_core raw_data_valid", false,-1);
        vcdp->declBus(c+2825,"CFOCorrector cfo_estimator auto_corr_core raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+2833,"CFOCorrector cfo_estimator auto_corr_core raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+185,"CFOCorrector cfo_estimator auto_corr_core corr_result_valid", false,-1);
        vcdp->declBus(c+193,"CFOCorrector cfo_estimator auto_corr_core corr_result_payload_cha_i", false,-1, 31,0);
        vcdp->declBus(c+201,"CFOCorrector cfo_estimator auto_corr_core corr_result_payload_cha_q", false,-1, 31,0);
        vcdp->declBit(c+2929,"CFOCorrector cfo_estimator auto_corr_core clk", false,-1);
        vcdp->declBit(c+2937,"CFOCorrector cfo_estimator auto_corr_core reset", false,-1);
        vcdp->declBit(c+225,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3_output_valid", false,-1);
        vcdp->declBus(c+233,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3_output_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+241,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3_output_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+185,"CFOCorrector cfo_estimator auto_corr_core corr_core_corr_result_valid", false,-1);
        vcdp->declBus(c+193,"CFOCorrector cfo_estimator auto_corr_core corr_core_corr_result_payload_cha_i", false,-1, 31,0);
        vcdp->declBus(c+201,"CFOCorrector cfo_estimator auto_corr_core corr_core_corr_result_payload_cha_q", false,-1, 31,0);
        vcdp->declBit(c+97,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 input_valid", false,-1);
        vcdp->declBus(c+2825,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 input_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+2833,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 input_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+225,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 output_valid", false,-1);
        vcdp->declBus(c+233,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 output_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+241,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 output_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+97,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 enable", false,-1);
        vcdp->declBit(c+2929,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 clk", false,-1);
        vcdp->declBit(c+2937,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 reset", false,-1);
        vcdp->declBit(c+249,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_0_valid", false,-1);
        vcdp->declBus(c+257,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_0_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+265,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_0_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+273,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_1_valid", false,-1);
        vcdp->declBus(c+281,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_1_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+289,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_1_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+297,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_2_valid", false,-1);
        vcdp->declBus(c+305,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_2_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+313,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_2_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+321,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_3_valid", false,-1);
        vcdp->declBus(c+329,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_3_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+337,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_3_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+345,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_4_valid", false,-1);
        vcdp->declBus(c+353,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_4_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+361,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_4_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+369,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_5_valid", false,-1);
        vcdp->declBus(c+377,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_5_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+385,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_5_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+393,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_6_valid", false,-1);
        vcdp->declBus(c+401,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_6_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+409,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_6_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+417,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_7_valid", false,-1);
        vcdp->declBus(c+425,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_7_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+433,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_7_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+441,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_8_valid", false,-1);
        vcdp->declBus(c+449,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_8_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+457,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_8_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+465,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_9_valid", false,-1);
        vcdp->declBus(c+473,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_9_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+481,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_9_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+489,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_10_valid", false,-1);
        vcdp->declBus(c+497,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_10_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+505,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_10_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+513,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_11_valid", false,-1);
        vcdp->declBus(c+521,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_11_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+529,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_11_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+537,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_12_valid", false,-1);
        vcdp->declBus(c+545,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_12_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+553,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_12_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+561,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_13_valid", false,-1);
        vcdp->declBus(c+569,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_13_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+577,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_13_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+585,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_14_valid", false,-1);
        vcdp->declBus(c+593,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_14_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+601,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_14_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+609,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_15_valid", false,-1);
        vcdp->declBus(c+617,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_15_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+625,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_15_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+633,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_16_valid", false,-1);
        vcdp->declBus(c+641,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_16_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+649,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_16_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+657,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_17_valid", false,-1);
        vcdp->declBus(c+665,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_17_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+673,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_17_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+681,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_18_valid", false,-1);
        vcdp->declBus(c+689,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_18_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+697,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_18_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+705,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_19_valid", false,-1);
        vcdp->declBus(c+713,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_19_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+721,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_19_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+729,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_20_valid", false,-1);
        vcdp->declBus(c+737,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_20_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+745,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_20_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+753,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_21_valid", false,-1);
        vcdp->declBus(c+761,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_21_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+769,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_21_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+777,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_22_valid", false,-1);
        vcdp->declBus(c+785,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_22_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+793,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_22_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+801,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_23_valid", false,-1);
        vcdp->declBus(c+809,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_23_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+817,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_23_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+825,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_24_valid", false,-1);
        vcdp->declBus(c+833,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_24_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+841,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_24_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+849,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_25_valid", false,-1);
        vcdp->declBus(c+857,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_25_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+865,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_25_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+873,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_26_valid", false,-1);
        vcdp->declBus(c+881,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_26_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+889,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_26_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+897,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_27_valid", false,-1);
        vcdp->declBus(c+905,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_27_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+913,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_27_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+921,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_28_valid", false,-1);
        vcdp->declBus(c+929,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_28_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+937,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_28_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+945,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_29_valid", false,-1);
        vcdp->declBus(c+953,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_29_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+961,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_29_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+969,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_30_valid", false,-1);
        vcdp->declBus(c+977,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_30_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+985,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_30_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+993,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_31_valid", false,-1);
        vcdp->declBus(c+1001,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_31_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1009,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_31_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1017,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_32_valid", false,-1);
        vcdp->declBus(c+1025,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_32_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1033,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_32_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1041,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_33_valid", false,-1);
        vcdp->declBus(c+1049,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_33_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1057,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_33_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1065,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_34_valid", false,-1);
        vcdp->declBus(c+1073,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_34_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1081,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_34_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1089,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_35_valid", false,-1);
        vcdp->declBus(c+1097,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_35_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1105,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_35_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1113,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_36_valid", false,-1);
        vcdp->declBus(c+1121,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_36_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1129,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_36_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1137,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_37_valid", false,-1);
        vcdp->declBus(c+1145,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_37_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1153,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_37_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1161,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_38_valid", false,-1);
        vcdp->declBus(c+1169,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_38_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1177,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_38_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1185,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_39_valid", false,-1);
        vcdp->declBus(c+1193,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_39_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1201,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_39_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1209,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_40_valid", false,-1);
        vcdp->declBus(c+1217,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_40_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1225,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_40_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1233,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_41_valid", false,-1);
        vcdp->declBus(c+1241,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_41_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1249,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_41_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1257,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_42_valid", false,-1);
        vcdp->declBus(c+1265,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_42_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1273,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_42_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1281,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_43_valid", false,-1);
        vcdp->declBus(c+1289,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_43_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1297,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_43_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1305,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_44_valid", false,-1);
        vcdp->declBus(c+1313,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_44_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1321,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_44_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1329,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_45_valid", false,-1);
        vcdp->declBus(c+1337,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_45_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1345,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_45_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1353,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_46_valid", false,-1);
        vcdp->declBus(c+1361,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_46_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1369,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_46_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1377,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_47_valid", false,-1);
        vcdp->declBus(c+1385,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_47_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1393,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_47_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1401,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_48_valid", false,-1);
        vcdp->declBus(c+1409,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_48_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1417,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_48_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1425,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_49_valid", false,-1);
        vcdp->declBus(c+1433,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_49_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1441,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_49_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1449,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_50_valid", false,-1);
        vcdp->declBus(c+1457,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_50_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1465,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_50_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1473,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_51_valid", false,-1);
        vcdp->declBus(c+1481,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_51_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1489,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_51_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1497,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_52_valid", false,-1);
        vcdp->declBus(c+1505,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_52_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1513,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_52_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1521,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_53_valid", false,-1);
        vcdp->declBus(c+1529,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_53_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1537,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_53_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1545,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_54_valid", false,-1);
        vcdp->declBus(c+1553,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_54_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1561,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_54_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1569,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_55_valid", false,-1);
        vcdp->declBus(c+1577,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_55_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1585,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_55_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1593,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_56_valid", false,-1);
        vcdp->declBus(c+1601,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_56_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1609,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_56_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1617,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_57_valid", false,-1);
        vcdp->declBus(c+1625,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_57_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1633,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_57_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1641,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_58_valid", false,-1);
        vcdp->declBus(c+1649,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_58_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1657,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_58_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1665,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_59_valid", false,-1);
        vcdp->declBus(c+1673,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_59_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1681,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_59_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1689,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_60_valid", false,-1);
        vcdp->declBus(c+1697,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_60_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1705,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_60_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1713,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_61_valid", false,-1);
        vcdp->declBus(c+1721,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_61_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1729,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_61_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1737,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_62_valid", false,-1);
        vcdp->declBus(c+1745,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_62_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1753,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_62_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+225,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_63_valid", false,-1);
        vcdp->declBus(c+233,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_63_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+241,"CFOCorrector cfo_estimator auto_corr_core shiftRegisterE_3 shift_reg_63_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+97,"CFOCorrector cfo_estimator auto_corr_core corr_core raw_data_0_valid", false,-1);
        vcdp->declBus(c+2825,"CFOCorrector cfo_estimator auto_corr_core corr_core raw_data_0_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+2833,"CFOCorrector cfo_estimator auto_corr_core corr_core raw_data_0_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+225,"CFOCorrector cfo_estimator auto_corr_core corr_core raw_data_1_valid", false,-1);
        vcdp->declBus(c+233,"CFOCorrector cfo_estimator auto_corr_core corr_core raw_data_1_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+241,"CFOCorrector cfo_estimator auto_corr_core corr_core raw_data_1_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+185,"CFOCorrector cfo_estimator auto_corr_core corr_core corr_result_valid", false,-1);
        vcdp->declBus(c+193,"CFOCorrector cfo_estimator auto_corr_core corr_core corr_result_payload_cha_i", false,-1, 31,0);
        vcdp->declBus(c+201,"CFOCorrector cfo_estimator auto_corr_core corr_core corr_result_payload_cha_q", false,-1, 31,0);
        vcdp->declBit(c+2929,"CFOCorrector cfo_estimator auto_corr_core corr_core clk", false,-1);
        vcdp->declBit(c+2937,"CFOCorrector cfo_estimator auto_corr_core corr_core reset", false,-1);
        vcdp->declBus(c+1761,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3_output_1", false,-1, 31,0);
        vcdp->declBus(c+1769,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4_output_1", false,-1, 31,0);
        vcdp->declBus(c+193,"CFOCorrector cfo_estimator auto_corr_core corr_core corr_val_i", false,-1, 31,0);
        vcdp->declBus(c+201,"CFOCorrector cfo_estimator auto_corr_core corr_core corr_val_q", false,-1, 31,0);
        vcdp->declBus(c+105,"CFOCorrector cfo_estimator auto_corr_core corr_core k1", false,-1, 31,0);
        vcdp->declBus(c+2809,"CFOCorrector cfo_estimator auto_corr_core corr_core k2", false,-1, 31,0);
        vcdp->declBus(c+2817,"CFOCorrector cfo_estimator auto_corr_core corr_core k3", false,-1, 31,0);
        vcdp->declBus(c+1777,"CFOCorrector cfo_estimator auto_corr_core corr_core mul_i", false,-1, 31,0);
        vcdp->declBus(c+1785,"CFOCorrector cfo_estimator auto_corr_core corr_core mul_q", false,-1, 31,0);
        vcdp->declBit(c+1793,"CFOCorrector cfo_estimator auto_corr_core corr_core mul_data_valid", false,-1);
        vcdp->declBit(c+185,"CFOCorrector cfo_estimator auto_corr_core corr_core corr_result_valid_1", false,-1);
        vcdp->declBus(c+1777,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 input_1", false,-1, 31,0);
        vcdp->declBus(c+1761,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 output_1", false,-1, 31,0);
        vcdp->declBit(c+1793,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 enable", false,-1);
        vcdp->declBit(c+2929,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 clk", false,-1);
        vcdp->declBit(c+2937,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 reset", false,-1);
        vcdp->declBus(c+1801,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_0", false,-1, 31,0);
        vcdp->declBus(c+1809,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_1", false,-1, 31,0);
        vcdp->declBus(c+1817,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_2", false,-1, 31,0);
        vcdp->declBus(c+1825,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_3", false,-1, 31,0);
        vcdp->declBus(c+1833,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_4", false,-1, 31,0);
        vcdp->declBus(c+1841,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_5", false,-1, 31,0);
        vcdp->declBus(c+1849,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_6", false,-1, 31,0);
        vcdp->declBus(c+1857,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_7", false,-1, 31,0);
        vcdp->declBus(c+1865,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_8", false,-1, 31,0);
        vcdp->declBus(c+1873,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_9", false,-1, 31,0);
        vcdp->declBus(c+1881,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_10", false,-1, 31,0);
        vcdp->declBus(c+1889,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_11", false,-1, 31,0);
        vcdp->declBus(c+1897,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_12", false,-1, 31,0);
        vcdp->declBus(c+1905,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_13", false,-1, 31,0);
        vcdp->declBus(c+1913,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_14", false,-1, 31,0);
        vcdp->declBus(c+1921,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_15", false,-1, 31,0);
        vcdp->declBus(c+1929,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_16", false,-1, 31,0);
        vcdp->declBus(c+1937,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_17", false,-1, 31,0);
        vcdp->declBus(c+1945,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_18", false,-1, 31,0);
        vcdp->declBus(c+1953,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_19", false,-1, 31,0);
        vcdp->declBus(c+1961,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_20", false,-1, 31,0);
        vcdp->declBus(c+1969,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_21", false,-1, 31,0);
        vcdp->declBus(c+1977,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_22", false,-1, 31,0);
        vcdp->declBus(c+1985,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_23", false,-1, 31,0);
        vcdp->declBus(c+1993,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_24", false,-1, 31,0);
        vcdp->declBus(c+2001,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_25", false,-1, 31,0);
        vcdp->declBus(c+2009,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_26", false,-1, 31,0);
        vcdp->declBus(c+2017,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_27", false,-1, 31,0);
        vcdp->declBus(c+2025,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_28", false,-1, 31,0);
        vcdp->declBus(c+2033,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_29", false,-1, 31,0);
        vcdp->declBus(c+2041,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_30", false,-1, 31,0);
        vcdp->declBus(c+2049,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_31", false,-1, 31,0);
        vcdp->declBus(c+2057,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_32", false,-1, 31,0);
        vcdp->declBus(c+2065,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_33", false,-1, 31,0);
        vcdp->declBus(c+2073,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_34", false,-1, 31,0);
        vcdp->declBus(c+2081,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_35", false,-1, 31,0);
        vcdp->declBus(c+2089,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_36", false,-1, 31,0);
        vcdp->declBus(c+2097,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_37", false,-1, 31,0);
        vcdp->declBus(c+2105,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_38", false,-1, 31,0);
        vcdp->declBus(c+2113,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_39", false,-1, 31,0);
        vcdp->declBus(c+2121,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_40", false,-1, 31,0);
        vcdp->declBus(c+2129,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_41", false,-1, 31,0);
        vcdp->declBus(c+2137,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_42", false,-1, 31,0);
        vcdp->declBus(c+2145,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_43", false,-1, 31,0);
        vcdp->declBus(c+2153,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_44", false,-1, 31,0);
        vcdp->declBus(c+2161,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_45", false,-1, 31,0);
        vcdp->declBus(c+2169,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_46", false,-1, 31,0);
        vcdp->declBus(c+2177,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_47", false,-1, 31,0);
        vcdp->declBus(c+2185,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_48", false,-1, 31,0);
        vcdp->declBus(c+2193,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_49", false,-1, 31,0);
        vcdp->declBus(c+2201,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_50", false,-1, 31,0);
        vcdp->declBus(c+2209,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_51", false,-1, 31,0);
        vcdp->declBus(c+2217,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_52", false,-1, 31,0);
        vcdp->declBus(c+2225,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_53", false,-1, 31,0);
        vcdp->declBus(c+2233,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_54", false,-1, 31,0);
        vcdp->declBus(c+2241,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_55", false,-1, 31,0);
        vcdp->declBus(c+2249,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_56", false,-1, 31,0);
        vcdp->declBus(c+2257,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_57", false,-1, 31,0);
        vcdp->declBus(c+2265,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_58", false,-1, 31,0);
        vcdp->declBus(c+2273,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_59", false,-1, 31,0);
        vcdp->declBus(c+2281,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_60", false,-1, 31,0);
        vcdp->declBus(c+2289,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_61", false,-1, 31,0);
        vcdp->declBus(c+2297,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_62", false,-1, 31,0);
        vcdp->declBus(c+1761,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_3 shift_reg_63", false,-1, 31,0);
        vcdp->declBus(c+1785,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 input_1", false,-1, 31,0);
        vcdp->declBus(c+1769,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 output_1", false,-1, 31,0);
        vcdp->declBit(c+1793,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 enable", false,-1);
        vcdp->declBit(c+2929,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 clk", false,-1);
        vcdp->declBit(c+2937,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 reset", false,-1);
        vcdp->declBus(c+2305,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_0", false,-1, 31,0);
        vcdp->declBus(c+2313,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_1", false,-1, 31,0);
        vcdp->declBus(c+2321,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_2", false,-1, 31,0);
        vcdp->declBus(c+2329,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_3", false,-1, 31,0);
        vcdp->declBus(c+2337,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_4", false,-1, 31,0);
        vcdp->declBus(c+2345,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_5", false,-1, 31,0);
        vcdp->declBus(c+2353,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_6", false,-1, 31,0);
        vcdp->declBus(c+2361,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_7", false,-1, 31,0);
        vcdp->declBus(c+2369,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_8", false,-1, 31,0);
        vcdp->declBus(c+2377,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_9", false,-1, 31,0);
        vcdp->declBus(c+2385,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_10", false,-1, 31,0);
        vcdp->declBus(c+2393,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_11", false,-1, 31,0);
        vcdp->declBus(c+2401,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_12", false,-1, 31,0);
        vcdp->declBus(c+2409,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_13", false,-1, 31,0);
        vcdp->declBus(c+2417,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_14", false,-1, 31,0);
        vcdp->declBus(c+2425,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_15", false,-1, 31,0);
        vcdp->declBus(c+2433,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_16", false,-1, 31,0);
        vcdp->declBus(c+2441,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_17", false,-1, 31,0);
        vcdp->declBus(c+2449,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_18", false,-1, 31,0);
        vcdp->declBus(c+2457,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_19", false,-1, 31,0);
        vcdp->declBus(c+2465,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_20", false,-1, 31,0);
        vcdp->declBus(c+2473,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_21", false,-1, 31,0);
        vcdp->declBus(c+2481,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_22", false,-1, 31,0);
        vcdp->declBus(c+2489,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_23", false,-1, 31,0);
        vcdp->declBus(c+2497,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_24", false,-1, 31,0);
        vcdp->declBus(c+2505,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_25", false,-1, 31,0);
        vcdp->declBus(c+2513,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_26", false,-1, 31,0);
        vcdp->declBus(c+2521,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_27", false,-1, 31,0);
        vcdp->declBus(c+2529,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_28", false,-1, 31,0);
        vcdp->declBus(c+2537,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_29", false,-1, 31,0);
        vcdp->declBus(c+2545,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_30", false,-1, 31,0);
        vcdp->declBus(c+2553,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_31", false,-1, 31,0);
        vcdp->declBus(c+2561,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_32", false,-1, 31,0);
        vcdp->declBus(c+2569,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_33", false,-1, 31,0);
        vcdp->declBus(c+2577,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_34", false,-1, 31,0);
        vcdp->declBus(c+2585,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_35", false,-1, 31,0);
        vcdp->declBus(c+2593,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_36", false,-1, 31,0);
        vcdp->declBus(c+2601,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_37", false,-1, 31,0);
        vcdp->declBus(c+2609,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_38", false,-1, 31,0);
        vcdp->declBus(c+2617,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_39", false,-1, 31,0);
        vcdp->declBus(c+2625,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_40", false,-1, 31,0);
        vcdp->declBus(c+2633,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_41", false,-1, 31,0);
        vcdp->declBus(c+2641,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_42", false,-1, 31,0);
        vcdp->declBus(c+2649,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_43", false,-1, 31,0);
        vcdp->declBus(c+2657,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_44", false,-1, 31,0);
        vcdp->declBus(c+2665,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_45", false,-1, 31,0);
        vcdp->declBus(c+2673,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_46", false,-1, 31,0);
        vcdp->declBus(c+2681,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_47", false,-1, 31,0);
        vcdp->declBus(c+2689,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_48", false,-1, 31,0);
        vcdp->declBus(c+2697,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_49", false,-1, 31,0);
        vcdp->declBus(c+2705,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_50", false,-1, 31,0);
        vcdp->declBus(c+2713,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_51", false,-1, 31,0);
        vcdp->declBus(c+2721,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_52", false,-1, 31,0);
        vcdp->declBus(c+2729,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_53", false,-1, 31,0);
        vcdp->declBus(c+2737,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_54", false,-1, 31,0);
        vcdp->declBus(c+2745,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_55", false,-1, 31,0);
        vcdp->declBus(c+2753,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_56", false,-1, 31,0);
        vcdp->declBus(c+2761,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_57", false,-1, 31,0);
        vcdp->declBus(c+2769,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_58", false,-1, 31,0);
        vcdp->declBus(c+2777,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_59", false,-1, 31,0);
        vcdp->declBus(c+2785,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_60", false,-1, 31,0);
        vcdp->declBus(c+2793,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_61", false,-1, 31,0);
        vcdp->declBus(c+2801,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_62", false,-1, 31,0);
        vcdp->declBus(c+1769,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegisterE_4 shift_reg_63", false,-1, 31,0);
        vcdp->declBit(c+2985,"CFOCorrector cfo_estimator cordic_core rotate_mode", false,-1);
        vcdp->declBus(c+2969,"CFOCorrector cfo_estimator cordic_core x_u", false,-1, 1,0);
        vcdp->declBit(c+185,"CFOCorrector cfo_estimator cordic_core raw_data_valid", false,-1);
        vcdp->declBit(c+2945,"CFOCorrector cfo_estimator cordic_core raw_data_ready", false,-1);
        vcdp->declBus(c+193,"CFOCorrector cfo_estimator cordic_core raw_data_payload_x", false,-1, 31,0);
        vcdp->declBus(c+177,"CFOCorrector cfo_estimator cordic_core raw_data_payload_y", false,-1, 31,0);
        vcdp->declBus(c+2993,"CFOCorrector cfo_estimator cordic_core raw_data_payload_z", false,-1, 31,0);
        vcdp->declBit(c+209,"CFOCorrector cfo_estimator cordic_core result_valid", false,-1);
        vcdp->declBus(c+121,"CFOCorrector cfo_estimator cordic_core result_payload_x", false,-1, 31,0);
        vcdp->declBus(c+129,"CFOCorrector cfo_estimator cordic_core result_payload_y", false,-1, 31,0);
        vcdp->declBus(c+137,"CFOCorrector cfo_estimator cordic_core result_payload_z", false,-1, 31,0);
        vcdp->declBit(c+2929,"CFOCorrector cfo_estimator cordic_core clk", false,-1);
        vcdp->declBit(c+2937,"CFOCorrector cfo_estimator cordic_core reset", false,-1);
        vcdp->declBit(c+185,"CFOCorrector cfo_estimator cordic_core raw_data_fire", false,-1);
    }
}

void VCFOCorrector::traceFullThis__1(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp39[3];
    WData/*95:0*/ __Vtemp40[3];
    // Body
    {
        vcdp->fullBus(c+1,((0xffffU & ((1U & (IData)(
                                                     (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                      >> 0x29U)))
                                        ? ((0x7ffffffU 
                                            != (0x7ffffffU 
                                                & (IData)(
                                                          (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                           >> 0xfU))))
                                            ? 0x8000U
                                            : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))
                                        : ((0U != (0x3ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                              >> 0xfU))))
                                            ? 0x7fffU
                                            : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))))),16);
        __Vtemp39[0U] = 0xffe00000U;
        __Vtemp39[1U] = 0xffffffffU;
        __Vtemp39[2U] = 1U;
        VL_ADD_W(3, __Vtemp40, __Vtemp39, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_delta_phi_payload_4);
        vcdp->fullBit(c+9,((1U & __Vtemp40[2U])));
        vcdp->fullBit(c+17,((0U != (0x3fffffU & ((IData)(0x200000U) 
                                                 + 
                                                 vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_delta_phi_payload_4[0U])))));
        vcdp->fullBit(c+25,((1U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload 
                                           >> 0x2aU)))));
        vcdp->fullBit(c+33,((3U != (3U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload 
                                                  >> 0x29U))))));
        vcdp->fullBit(c+41,((1U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload 
                                           >> 0x29U)))));
        vcdp->fullBit(c+49,((1U & (IData)((vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                           >> 0x29U)))));
        vcdp->fullBit(c+57,((0x7ffffffU != (0x7ffffffU 
                                            & (IData)(
                                                      (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                       >> 0xfU))))));
        vcdp->fullBit(c+65,((0U != (0x3ffffffU & (IData)(
                                                         (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                          >> 0xfU))))));
        vcdp->fullBus(c+73,((0xffffU & (VL_LTS_III(1,16,16, 0x64U, 
                                                   (0xffffU 
                                                    & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi) 
                                                       + 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                    >> 0x29U)))
                                                         ? 
                                                        ((0x7ffffffU 
                                                          != 
                                                          (0x7ffffffU 
                                                           & (IData)(
                                                                     (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                      >> 0xfU))))
                                                          ? 0x8000U
                                                          : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))
                                                         : 
                                                        ((0U 
                                                          != 
                                                          (0x3ffffffU 
                                                           & (IData)(
                                                                     (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                      >> 0xfU))))
                                                          ? 0x7fffU
                                                          : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))))))
                                         ? (((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi) 
                                             - (IData)(0xc9U)) 
                                            + ((1U 
                                                & (IData)(
                                                          (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                           >> 0x29U)))
                                                ? (
                                                   (0x7ffffffU 
                                                    != 
                                                    (0x7ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                >> 0xfU))))
                                                    ? 0x8000U
                                                    : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))
                                                : (
                                                   (0U 
                                                    != 
                                                    (0x3ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                >> 0xfU))))
                                                    ? 0x7fffU
                                                    : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))))
                                         : (VL_GTS_III(1,16,16, 0xff9cU, 
                                                       (0xffffU 
                                                        & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi) 
                                                           + 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                        >> 0x29U)))
                                                             ? 
                                                            ((0x7ffffffU 
                                                              != 
                                                              (0x7ffffffU 
                                                               & (IData)(
                                                                         (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                          >> 0xfU))))
                                                              ? 0x8000U
                                                              : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))
                                                             : 
                                                            ((0U 
                                                              != 
                                                              (0x3ffffffU 
                                                               & (IData)(
                                                                         (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                          >> 0xfU))))
                                                              ? 0x7fffU
                                                              : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))))))
                                             ? ((IData)(0xc9U) 
                                                + ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                >> 0x29U)))
                                                     ? 
                                                    ((0x7ffffffU 
                                                      != 
                                                      (0x7ffffffU 
                                                       & (IData)(
                                                                 (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                  >> 0xfU))))
                                                      ? 0x8000U
                                                      : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))
                                                     : 
                                                    ((0U 
                                                      != 
                                                      (0x3ffffffU 
                                                       & (IData)(
                                                                 (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                  >> 0xfU))))
                                                      ? 0x7fffU
                                                      : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7)))))
                                             : ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi) 
                                                + (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                               >> 0x29U)))
                                                    ? 
                                                   ((0x7ffffffU 
                                                     != 
                                                     (0x7ffffffU 
                                                      & (IData)(
                                                                (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                 >> 0xfU))))
                                                     ? 0x8000U
                                                     : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))
                                                    : 
                                                   ((0U 
                                                     != 
                                                     (0x3ffffffU 
                                                      & (IData)(
                                                                (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                 >> 0xfU))))
                                                     ? 0x7fffU
                                                     : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7)))))))),16);
        vcdp->fullBit(c+81,(VL_LTS_III(1,16,16, 0x64U, 
                                       (0xffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                >> 0x29U)))
                                                     ? 
                                                    ((0x7ffffffU 
                                                      != 
                                                      (0x7ffffffU 
                                                       & (IData)(
                                                                 (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                  >> 0xfU))))
                                                      ? 0x8000U
                                                      : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))
                                                     : 
                                                    ((0U 
                                                      != 
                                                      (0x3ffffffU 
                                                       & (IData)(
                                                                 (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                  >> 0xfU))))
                                                      ? 0x7fffU
                                                      : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))))))));
        vcdp->fullBit(c+89,(VL_GTS_III(1,16,16, 0xff9cU, 
                                       (0xffffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi) 
                                                   + 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                >> 0x29U)))
                                                     ? 
                                                    ((0x7ffffffU 
                                                      != 
                                                      (0x7ffffffU 
                                                       & (IData)(
                                                                 (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                  >> 0xfU))))
                                                      ? 0x8000U
                                                      : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))
                                                     : 
                                                    ((0U 
                                                      != 
                                                      (0x3ffffffU 
                                                       & (IData)(
                                                                 (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7 
                                                                  >> 0xfU))))
                                                      ? 0x7fffU
                                                      : (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_delta_phi_payload_7))))))));
        vcdp->fullBit(c+97,(vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid));
        vcdp->fullBus(c+105,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1),32);
        vcdp->fullBus(c+113,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z),16);
        vcdp->fullBus(c+121,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_15),32);
        vcdp->fullBus(c+129,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_y),32);
        vcdp->fullBus(c+137,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z),32);
        vcdp->fullQuad(c+145,(VL_MULS_QQQ(64,64,64, VL_ULL(0x1000), 
                                          VL_EXTENDS_QI(64,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z))),64);
        vcdp->fullBit(c+161,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_15));
        vcdp->fullBit(c+169,(((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_15) 
                              & (0x50U == (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__impluse_cnt)))));
        vcdp->fullBus(c+177,(VL_NEGATE_I(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q)),32);
        vcdp->fullBit(c+185,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1));
        vcdp->fullBus(c+193,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i),32);
        vcdp->fullBus(c+201,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q),32);
        vcdp->fullBit(c+209,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_15));
        vcdp->fullBus(c+217,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__impluse_cnt),7);
        vcdp->fullBit(c+225,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_63_valid));
        vcdp->fullBus(c+233,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_63_payload_cha_i),16);
        vcdp->fullBus(c+241,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_63_payload_cha_q),16);
        vcdp->fullBit(c+249,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_valid));
        vcdp->fullBus(c+257,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_i),16);
        vcdp->fullBus(c+265,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_q),16);
        vcdp->fullBit(c+273,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_valid));
        vcdp->fullBus(c+281,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_i),16);
        vcdp->fullBus(c+289,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_q),16);
        vcdp->fullBit(c+297,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_valid));
        vcdp->fullBus(c+305,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_i),16);
        vcdp->fullBus(c+313,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_q),16);
        vcdp->fullBit(c+321,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_valid));
        vcdp->fullBus(c+329,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_i),16);
        vcdp->fullBus(c+337,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_q),16);
        vcdp->fullBit(c+345,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_valid));
        vcdp->fullBus(c+353,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_i),16);
        vcdp->fullBus(c+361,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_q),16);
        vcdp->fullBit(c+369,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_valid));
        vcdp->fullBus(c+377,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_i),16);
        vcdp->fullBus(c+385,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_q),16);
        vcdp->fullBit(c+393,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_valid));
        vcdp->fullBus(c+401,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_i),16);
        vcdp->fullBus(c+409,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_q),16);
        vcdp->fullBit(c+417,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_valid));
        vcdp->fullBus(c+425,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_i),16);
        vcdp->fullBus(c+433,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_q),16);
        vcdp->fullBit(c+441,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_valid));
        vcdp->fullBus(c+449,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_i),16);
        vcdp->fullBus(c+457,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_q),16);
        vcdp->fullBit(c+465,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_valid));
        vcdp->fullBus(c+473,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_i),16);
        vcdp->fullBus(c+481,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_q),16);
        vcdp->fullBit(c+489,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_valid));
        vcdp->fullBus(c+497,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_i),16);
        vcdp->fullBus(c+505,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_q),16);
        vcdp->fullBit(c+513,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_valid));
        vcdp->fullBus(c+521,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_i),16);
        vcdp->fullBus(c+529,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_q),16);
        vcdp->fullBit(c+537,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_valid));
        vcdp->fullBus(c+545,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_i),16);
        vcdp->fullBus(c+553,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_q),16);
        vcdp->fullBit(c+561,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_valid));
        vcdp->fullBus(c+569,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_i),16);
        vcdp->fullBus(c+577,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_q),16);
        vcdp->fullBit(c+585,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_valid));
        vcdp->fullBus(c+593,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_i),16);
        vcdp->fullBus(c+601,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_q),16);
        vcdp->fullBit(c+609,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_valid));
        vcdp->fullBus(c+617,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i),16);
        vcdp->fullBus(c+625,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_q),16);
        vcdp->fullBit(c+633,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_16_valid));
        vcdp->fullBus(c+641,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_16_payload_cha_i),16);
        vcdp->fullBus(c+649,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_16_payload_cha_q),16);
        vcdp->fullBit(c+657,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_17_valid));
        vcdp->fullBus(c+665,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_17_payload_cha_i),16);
        vcdp->fullBus(c+673,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_17_payload_cha_q),16);
        vcdp->fullBit(c+681,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_18_valid));
        vcdp->fullBus(c+689,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_18_payload_cha_i),16);
        vcdp->fullBus(c+697,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_18_payload_cha_q),16);
        vcdp->fullBit(c+705,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_19_valid));
        vcdp->fullBus(c+713,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_19_payload_cha_i),16);
        vcdp->fullBus(c+721,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_19_payload_cha_q),16);
        vcdp->fullBit(c+729,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_20_valid));
        vcdp->fullBus(c+737,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_20_payload_cha_i),16);
        vcdp->fullBus(c+745,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_20_payload_cha_q),16);
        vcdp->fullBit(c+753,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_21_valid));
        vcdp->fullBus(c+761,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_21_payload_cha_i),16);
        vcdp->fullBus(c+769,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_21_payload_cha_q),16);
        vcdp->fullBit(c+777,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_22_valid));
        vcdp->fullBus(c+785,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_22_payload_cha_i),16);
        vcdp->fullBus(c+793,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_22_payload_cha_q),16);
        vcdp->fullBit(c+801,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_23_valid));
        vcdp->fullBus(c+809,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_23_payload_cha_i),16);
    }
}

void VCFOCorrector::traceFullThis__8(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+817,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_23_payload_cha_q),16);
        vcdp->fullBit(c+825,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_24_valid));
        vcdp->fullBus(c+833,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_24_payload_cha_i),16);
        vcdp->fullBus(c+841,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_24_payload_cha_q),16);
        vcdp->fullBit(c+849,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_25_valid));
        vcdp->fullBus(c+857,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_25_payload_cha_i),16);
        vcdp->fullBus(c+865,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_25_payload_cha_q),16);
        vcdp->fullBit(c+873,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_26_valid));
        vcdp->fullBus(c+881,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_26_payload_cha_i),16);
        vcdp->fullBus(c+889,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_26_payload_cha_q),16);
        vcdp->fullBit(c+897,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_27_valid));
        vcdp->fullBus(c+905,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_27_payload_cha_i),16);
        vcdp->fullBus(c+913,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_27_payload_cha_q),16);
        vcdp->fullBit(c+921,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_28_valid));
        vcdp->fullBus(c+929,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_28_payload_cha_i),16);
        vcdp->fullBus(c+937,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_28_payload_cha_q),16);
        vcdp->fullBit(c+945,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_29_valid));
        vcdp->fullBus(c+953,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_29_payload_cha_i),16);
        vcdp->fullBus(c+961,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_29_payload_cha_q),16);
        vcdp->fullBit(c+969,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_30_valid));
        vcdp->fullBus(c+977,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_30_payload_cha_i),16);
        vcdp->fullBus(c+985,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_30_payload_cha_q),16);
        vcdp->fullBit(c+993,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_31_valid));
        vcdp->fullBus(c+1001,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_31_payload_cha_i),16);
        vcdp->fullBus(c+1009,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_31_payload_cha_q),16);
        vcdp->fullBit(c+1017,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_32_valid));
        vcdp->fullBus(c+1025,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_32_payload_cha_i),16);
        vcdp->fullBus(c+1033,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_32_payload_cha_q),16);
        vcdp->fullBit(c+1041,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_33_valid));
        vcdp->fullBus(c+1049,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_33_payload_cha_i),16);
        vcdp->fullBus(c+1057,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_33_payload_cha_q),16);
        vcdp->fullBit(c+1065,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_34_valid));
        vcdp->fullBus(c+1073,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_34_payload_cha_i),16);
        vcdp->fullBus(c+1081,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_34_payload_cha_q),16);
        vcdp->fullBit(c+1089,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_35_valid));
        vcdp->fullBus(c+1097,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_35_payload_cha_i),16);
        vcdp->fullBus(c+1105,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_35_payload_cha_q),16);
        vcdp->fullBit(c+1113,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_36_valid));
        vcdp->fullBus(c+1121,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_36_payload_cha_i),16);
        vcdp->fullBus(c+1129,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_36_payload_cha_q),16);
        vcdp->fullBit(c+1137,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_37_valid));
        vcdp->fullBus(c+1145,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_37_payload_cha_i),16);
        vcdp->fullBus(c+1153,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_37_payload_cha_q),16);
        vcdp->fullBit(c+1161,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_38_valid));
        vcdp->fullBus(c+1169,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_38_payload_cha_i),16);
        vcdp->fullBus(c+1177,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_38_payload_cha_q),16);
        vcdp->fullBit(c+1185,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_39_valid));
        vcdp->fullBus(c+1193,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_39_payload_cha_i),16);
        vcdp->fullBus(c+1201,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_39_payload_cha_q),16);
        vcdp->fullBit(c+1209,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_40_valid));
        vcdp->fullBus(c+1217,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_40_payload_cha_i),16);
        vcdp->fullBus(c+1225,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_40_payload_cha_q),16);
        vcdp->fullBit(c+1233,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_41_valid));
        vcdp->fullBus(c+1241,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_41_payload_cha_i),16);
        vcdp->fullBus(c+1249,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_41_payload_cha_q),16);
        vcdp->fullBit(c+1257,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_42_valid));
        vcdp->fullBus(c+1265,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_42_payload_cha_i),16);
        vcdp->fullBus(c+1273,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_42_payload_cha_q),16);
        vcdp->fullBit(c+1281,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_43_valid));
        vcdp->fullBus(c+1289,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_43_payload_cha_i),16);
        vcdp->fullBus(c+1297,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_43_payload_cha_q),16);
        vcdp->fullBit(c+1305,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_44_valid));
        vcdp->fullBus(c+1313,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_44_payload_cha_i),16);
        vcdp->fullBus(c+1321,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_44_payload_cha_q),16);
        vcdp->fullBit(c+1329,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_45_valid));
        vcdp->fullBus(c+1337,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_45_payload_cha_i),16);
        vcdp->fullBus(c+1345,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_45_payload_cha_q),16);
        vcdp->fullBit(c+1353,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_46_valid));
        vcdp->fullBus(c+1361,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_46_payload_cha_i),16);
        vcdp->fullBus(c+1369,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_46_payload_cha_q),16);
        vcdp->fullBit(c+1377,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_47_valid));
        vcdp->fullBus(c+1385,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_47_payload_cha_i),16);
        vcdp->fullBus(c+1393,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_47_payload_cha_q),16);
        vcdp->fullBit(c+1401,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_48_valid));
        vcdp->fullBus(c+1409,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_48_payload_cha_i),16);
        vcdp->fullBus(c+1417,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_48_payload_cha_q),16);
        vcdp->fullBit(c+1425,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_49_valid));
        vcdp->fullBus(c+1433,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_49_payload_cha_i),16);
        vcdp->fullBus(c+1441,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_49_payload_cha_q),16);
        vcdp->fullBit(c+1449,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_50_valid));
        vcdp->fullBus(c+1457,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_50_payload_cha_i),16);
        vcdp->fullBus(c+1465,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_50_payload_cha_q),16);
        vcdp->fullBit(c+1473,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_51_valid));
        vcdp->fullBus(c+1481,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_51_payload_cha_i),16);
        vcdp->fullBus(c+1489,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_51_payload_cha_q),16);
        vcdp->fullBit(c+1497,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_52_valid));
        vcdp->fullBus(c+1505,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_52_payload_cha_i),16);
        vcdp->fullBus(c+1513,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_52_payload_cha_q),16);
        vcdp->fullBit(c+1521,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_53_valid));
        vcdp->fullBus(c+1529,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_53_payload_cha_i),16);
        vcdp->fullBus(c+1537,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_53_payload_cha_q),16);
        vcdp->fullBit(c+1545,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_54_valid));
        vcdp->fullBus(c+1553,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_54_payload_cha_i),16);
        vcdp->fullBus(c+1561,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_54_payload_cha_q),16);
        vcdp->fullBit(c+1569,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_55_valid));
        vcdp->fullBus(c+1577,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_55_payload_cha_i),16);
        vcdp->fullBus(c+1585,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_55_payload_cha_q),16);
        vcdp->fullBit(c+1593,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_56_valid));
        vcdp->fullBus(c+1601,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_56_payload_cha_i),16);
        vcdp->fullBus(c+1609,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_56_payload_cha_q),16);
        vcdp->fullBit(c+1617,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_57_valid));
        vcdp->fullBus(c+1625,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_57_payload_cha_i),16);
        vcdp->fullBus(c+1633,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_57_payload_cha_q),16);
        vcdp->fullBit(c+1641,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_58_valid));
        vcdp->fullBus(c+1649,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_58_payload_cha_i),16);
        vcdp->fullBus(c+1657,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_58_payload_cha_q),16);
        vcdp->fullBit(c+1665,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_59_valid));
        vcdp->fullBus(c+1673,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_59_payload_cha_i),16);
        vcdp->fullBus(c+1681,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_59_payload_cha_q),16);
        vcdp->fullBit(c+1689,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_60_valid));
        vcdp->fullBus(c+1697,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_60_payload_cha_i),16);
        vcdp->fullBus(c+1705,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_60_payload_cha_q),16);
        vcdp->fullBit(c+1713,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_61_valid));
        vcdp->fullBus(c+1721,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_61_payload_cha_i),16);
        vcdp->fullBus(c+1729,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_61_payload_cha_q),16);
        vcdp->fullBit(c+1737,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_62_valid));
        vcdp->fullBus(c+1745,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_62_payload_cha_i),16);
        vcdp->fullBus(c+1753,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_62_payload_cha_q),16);
        vcdp->fullBus(c+1761,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_63),32);
        vcdp->fullBus(c+1769,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_63),32);
        vcdp->fullBus(c+1777,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_i),32);
        vcdp->fullBus(c+1785,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_q),32);
        vcdp->fullBit(c+1793,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid));
        vcdp->fullBus(c+1801,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0),32);
        vcdp->fullBus(c+1809,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1),32);
        vcdp->fullBus(c+1817,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2),32);
        vcdp->fullBus(c+1825,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3),32);
        vcdp->fullBus(c+1833,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4),32);
        vcdp->fullBus(c+1841,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5),32);
        vcdp->fullBus(c+1849,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6),32);
        vcdp->fullBus(c+1857,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7),32);
        vcdp->fullBus(c+1865,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8),32);
        vcdp->fullBus(c+1873,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9),32);
        vcdp->fullBus(c+1881,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10),32);
        vcdp->fullBus(c+1889,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11),32);
        vcdp->fullBus(c+1897,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12),32);
        vcdp->fullBus(c+1905,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13),32);
        vcdp->fullBus(c+1913,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14),32);
        vcdp->fullBus(c+1921,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15),32);
        vcdp->fullBus(c+1929,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_16),32);
        vcdp->fullBus(c+1937,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_17),32);
        vcdp->fullBus(c+1945,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_18),32);
        vcdp->fullBus(c+1953,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_19),32);
        vcdp->fullBus(c+1961,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_20),32);
        vcdp->fullBus(c+1969,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_21),32);
        vcdp->fullBus(c+1977,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_22),32);
        vcdp->fullBus(c+1985,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_23),32);
        vcdp->fullBus(c+1993,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_24),32);
        vcdp->fullBus(c+2001,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_25),32);
        vcdp->fullBus(c+2009,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_26),32);
        vcdp->fullBus(c+2017,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_27),32);
        vcdp->fullBus(c+2025,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_28),32);
        vcdp->fullBus(c+2033,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_29),32);
        vcdp->fullBus(c+2041,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_30),32);
        vcdp->fullBus(c+2049,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_31),32);
        vcdp->fullBus(c+2057,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_32),32);
        vcdp->fullBus(c+2065,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_33),32);
        vcdp->fullBus(c+2073,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_34),32);
        vcdp->fullBus(c+2081,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_35),32);
        vcdp->fullBus(c+2089,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_36),32);
        vcdp->fullBus(c+2097,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_37),32);
        vcdp->fullBus(c+2105,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_38),32);
        vcdp->fullBus(c+2113,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_39),32);
        vcdp->fullBus(c+2121,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_40),32);
        vcdp->fullBus(c+2129,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_41),32);
        vcdp->fullBus(c+2137,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_42),32);
        vcdp->fullBus(c+2145,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_43),32);
        vcdp->fullBus(c+2153,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_44),32);
        vcdp->fullBus(c+2161,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_45),32);
        vcdp->fullBus(c+2169,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_46),32);
        vcdp->fullBus(c+2177,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_47),32);
        vcdp->fullBus(c+2185,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_48),32);
        vcdp->fullBus(c+2193,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_49),32);
        vcdp->fullBus(c+2201,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_50),32);
        vcdp->fullBus(c+2209,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_51),32);
        vcdp->fullBus(c+2217,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_52),32);
        vcdp->fullBus(c+2225,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_53),32);
        vcdp->fullBus(c+2233,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_54),32);
        vcdp->fullBus(c+2241,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_55),32);
        vcdp->fullBus(c+2249,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_56),32);
        vcdp->fullBus(c+2257,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_57),32);
        vcdp->fullBus(c+2265,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_58),32);
        vcdp->fullBus(c+2273,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_59),32);
        vcdp->fullBus(c+2281,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_60),32);
        vcdp->fullBus(c+2289,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_61),32);
        vcdp->fullBus(c+2297,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_62),32);
        vcdp->fullBus(c+2305,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_0),32);
        vcdp->fullBus(c+2313,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_1),32);
        vcdp->fullBus(c+2321,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_2),32);
        vcdp->fullBus(c+2329,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_3),32);
        vcdp->fullBus(c+2337,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_4),32);
        vcdp->fullBus(c+2345,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_5),32);
        vcdp->fullBus(c+2353,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_6),32);
        vcdp->fullBus(c+2361,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_7),32);
        vcdp->fullBus(c+2369,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_8),32);
        vcdp->fullBus(c+2377,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_9),32);
        vcdp->fullBus(c+2385,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_10),32);
        vcdp->fullBus(c+2393,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_11),32);
        vcdp->fullBus(c+2401,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_12),32);
        vcdp->fullBus(c+2409,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_13),32);
        vcdp->fullBus(c+2417,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_14),32);
        vcdp->fullBus(c+2425,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_15),32);
        vcdp->fullBus(c+2433,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_16),32);
        vcdp->fullBus(c+2441,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_17),32);
        vcdp->fullBus(c+2449,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_18),32);
        vcdp->fullBus(c+2457,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_19),32);
        vcdp->fullBus(c+2465,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_20),32);
        vcdp->fullBus(c+2473,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_21),32);
        vcdp->fullBus(c+2481,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_22),32);
        vcdp->fullBus(c+2489,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_23),32);
        vcdp->fullBus(c+2497,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_24),32);
        vcdp->fullBus(c+2505,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_25),32);
        vcdp->fullBus(c+2513,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_26),32);
        vcdp->fullBus(c+2521,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_27),32);
        vcdp->fullBus(c+2529,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_28),32);
        vcdp->fullBus(c+2537,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_29),32);
        vcdp->fullBus(c+2545,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_30),32);
        vcdp->fullBus(c+2553,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_31),32);
        vcdp->fullBus(c+2561,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_32),32);
        vcdp->fullBus(c+2569,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_33),32);
        vcdp->fullBus(c+2577,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_34),32);
        vcdp->fullBus(c+2585,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_35),32);
        vcdp->fullBus(c+2593,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_36),32);
        vcdp->fullBus(c+2601,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_37),32);
        vcdp->fullBus(c+2609,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_38),32);
        vcdp->fullBus(c+2617,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_39),32);
        vcdp->fullBus(c+2625,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_40),32);
        vcdp->fullBus(c+2633,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_41),32);
        vcdp->fullBus(c+2641,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_42),32);
        vcdp->fullBus(c+2649,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_43),32);
        vcdp->fullBus(c+2657,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_44),32);
        vcdp->fullBus(c+2665,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_45),32);
        vcdp->fullBus(c+2673,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_46),32);
        vcdp->fullBus(c+2681,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_47),32);
        vcdp->fullBus(c+2689,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_48),32);
        vcdp->fullBus(c+2697,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_49),32);
        vcdp->fullBus(c+2705,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_50),32);
        vcdp->fullBus(c+2713,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_51),32);
        vcdp->fullBus(c+2721,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_52),32);
        vcdp->fullBus(c+2729,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_53),32);
        vcdp->fullBus(c+2737,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_54),32);
        vcdp->fullBus(c+2745,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_55),32);
        vcdp->fullBus(c+2753,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_56),32);
        vcdp->fullBus(c+2761,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_57),32);
        vcdp->fullBus(c+2769,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_58),32);
        vcdp->fullBus(c+2777,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_59),32);
        vcdp->fullBus(c+2785,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_60),32);
        vcdp->fullBus(c+2793,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_61),32);
        vcdp->fullBus(c+2801,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_62),32);
        vcdp->fullBus(c+2809,(VL_MULS_III(32,32,32, 
                                          VL_EXTENDS_II(32,16, (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15)), 
                                          VL_EXTENDS_II(32,16, 
                                                        (0xffffU 
                                                         & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_63_payload_cha_q) 
                                                            + (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_63_payload_cha_i)))))),32);
    }
}

void VCFOCorrector::traceFullThis__11(VCFOCorrector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+2817,(VL_MULS_III(32,32,32, 
                                          VL_EXTENDS_II(32,16, (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y)), 
                                          VL_EXTENDS_II(32,16, 
                                                        (0xffffU 
                                                         & ((IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_63_payload_cha_i) 
                                                            - (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_63_payload_cha_q)))))),32);
        vcdp->fullBus(c+2825,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15),16);
        vcdp->fullBus(c+2833,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y),16);
        vcdp->fullBus(c+2841,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi),16);
        vcdp->fullBit(c+2849,(vlTOPp->ref_data_valid));
        vcdp->fullBus(c+2857,(vlTOPp->ref_data_payload_cha_i),16);
        vcdp->fullBus(c+2865,(vlTOPp->ref_data_payload_cha_q),16);
        vcdp->fullBit(c+2873,(vlTOPp->raw_data_valid));
        vcdp->fullBus(c+2881,(vlTOPp->raw_data_payload_cha_i),16);
        vcdp->fullBus(c+2889,(vlTOPp->raw_data_payload_cha_q),16);
        vcdp->fullBit(c+2897,(vlTOPp->rotated_data_valid));
        vcdp->fullBus(c+2905,(vlTOPp->rotated_data_payload_cha_i),16);
        vcdp->fullBus(c+2913,(vlTOPp->rotated_data_payload_cha_q),16);
        vcdp->fullBit(c+2921,(vlTOPp->enable));
        vcdp->fullBit(c+2929,(vlTOPp->clk));
        vcdp->fullBit(c+2937,(vlTOPp->reset));
        vcdp->fullBit(c+2945,(1U));
        vcdp->fullBus(c+2953,(0x64U),16);
        vcdp->fullBus(c+2961,(0xc9U),16);
        vcdp->fullBus(c+2969,(0U),2);
        vcdp->fullBus(c+2977,(0x1000U),32);
        vcdp->fullBit(c+2985,(0U));
        vcdp->fullBus(c+2993,(0U),32);
    }
}
