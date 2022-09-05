// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCFOCorrector__Syms.h"


//======================

void VCFOCorrector::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VCFOCorrector::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCFOCorrector__Syms* __restrict vlSymsp = static_cast<VCFOCorrector__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VCFOCorrector::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VCFOCorrector::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VCFOCorrector__Syms* __restrict vlSymsp = static_cast<VCFOCorrector__Syms*>(userp);
    VCFOCorrector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
        vlTOPp->traceInitSub1(userp, tracep);
    }
}

void VCFOCorrector::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VCFOCorrector__Syms* __restrict vlSymsp = static_cast<VCFOCorrector__Syms*>(userp);
    VCFOCorrector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+145,"raw_data_valid", false,-1);
        tracep->declBus(c+146,"raw_data_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+147,"raw_data_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+148,"rotated_data_valid", false,-1);
        tracep->declBus(c+149,"rotated_data_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+150,"rotated_data_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+151,"enable", false,-1);
        tracep->declBit(c+152,"phi_correct_valid", false,-1);
        tracep->declBit(c+153,"clk", false,-1);
        tracep->declBit(c+154,"reset", false,-1);
        tracep->declBit(c+145,"CFOCorrector raw_data_valid", false,-1);
        tracep->declBus(c+146,"CFOCorrector raw_data_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+147,"CFOCorrector raw_data_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+148,"CFOCorrector rotated_data_valid", false,-1);
        tracep->declBus(c+149,"CFOCorrector rotated_data_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+150,"CFOCorrector rotated_data_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+151,"CFOCorrector enable", false,-1);
        tracep->declBit(c+152,"CFOCorrector phi_correct_valid", false,-1);
        tracep->declBit(c+153,"CFOCorrector clk", false,-1);
        tracep->declBit(c+154,"CFOCorrector reset", false,-1);
        tracep->declBus(c+18,"CFOCorrector phase_rotator_delta_phi_payload", false,-1, 23,0);
        tracep->declBit(c+19,"CFOCorrector cfo_estimator_delta_phi_valid", false,-1);
        tracep->declBus(c+155,"CFOCorrector cfo_estimator_delta_phi_payload", false,-1, 23,0);
        tracep->declBit(c+20,"CFOCorrector phase_rotator_rotated_data_valid", false,-1);
        tracep->declBus(c+156,"CFOCorrector phase_rotator_rotated_data_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+157,"CFOCorrector phase_rotator_rotated_data_payload_cha_q", false,-1, 11,0);
        tracep->declBus(c+21,"CFOCorrector mean_cnt", false,-1, 1,0);
        tracep->declBus(c+22,"CFOCorrector delta_phi_mean", false,-1, 23,0);
        tracep->declBit(c+23,"CFOCorrector delta_phi_valid", false,-1);
        tracep->declBit(c+158,"CFOCorrector when_CFOCorrector_l45", false,-1);
        tracep->declBit(c+24,"CFOCorrector delta_phi_valid_regNext", false,-1);
        tracep->declBit(c+145,"CFOCorrector cfo_estimator rotated_data_valid", false,-1);
        tracep->declBus(c+146,"CFOCorrector cfo_estimator rotated_data_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+147,"CFOCorrector cfo_estimator rotated_data_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+19,"CFOCorrector cfo_estimator delta_phi_valid", false,-1);
        tracep->declBus(c+155,"CFOCorrector cfo_estimator delta_phi_payload", false,-1, 23,0);
        tracep->declBit(c+153,"CFOCorrector cfo_estimator clk", false,-1);
        tracep->declBit(c+154,"CFOCorrector cfo_estimator reset", false,-1);
        tracep->declBit(c+78,"CFOCorrector cfo_estimator auto_corr_core_corr_result_valid", false,-1);
        tracep->declBus(c+79,"CFOCorrector cfo_estimator auto_corr_core_corr_result_payload_cha_i", false,-1, 27,0);
        tracep->declBus(c+80,"CFOCorrector cfo_estimator auto_corr_core_corr_result_payload_cha_q", false,-1, 27,0);
        tracep->declBit(c+163,"CFOCorrector cfo_estimator cordic_core_raw_data_ready", false,-1);
        tracep->declBit(c+25,"CFOCorrector cfo_estimator cordic_core_result_valid", false,-1);
        tracep->declBus(c+1,"CFOCorrector cfo_estimator cordic_core_result_payload_x", false,-1, 23,0);
        tracep->declBus(c+2,"CFOCorrector cfo_estimator cordic_core_result_payload_y", false,-1, 23,0);
        tracep->declBus(c+159,"CFOCorrector cfo_estimator cordic_core_result_payload_z", false,-1, 23,0);
        tracep->declBus(c+26,"CFOCorrector cfo_estimator impulse_cnt", false,-1, 4,0);
        tracep->declBit(c+81,"CFOCorrector cfo_estimator when_SInt_l337", false,-1);
        tracep->declBit(c+82,"CFOCorrector cfo_estimator when_SInt_l191", false,-1);
        tracep->declBit(c+83,"CFOCorrector cfo_estimator when_SInt_l130", false,-1);
        tracep->declBit(c+84,"CFOCorrector cfo_estimator when_SInt_l131", false,-1);
        tracep->declBit(c+85,"CFOCorrector cfo_estimator when_SInt_l137", false,-1);
        tracep->declBit(c+86,"CFOCorrector cfo_estimator when_SInt_l337_1", false,-1);
        tracep->declBit(c+87,"CFOCorrector cfo_estimator when_SInt_l191_1", false,-1);
        tracep->declBit(c+88,"CFOCorrector cfo_estimator when_SInt_l130_1", false,-1);
        tracep->declBit(c+89,"CFOCorrector cfo_estimator when_SInt_l131_1", false,-1);
        tracep->declBit(c+90,"CFOCorrector cfo_estimator when_SInt_l137_1", false,-1);
        tracep->declBit(c+145,"CFOCorrector cfo_estimator auto_corr_core raw_data_valid", false,-1);
        tracep->declBus(c+146,"CFOCorrector cfo_estimator auto_corr_core raw_data_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+147,"CFOCorrector cfo_estimator auto_corr_core raw_data_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+78,"CFOCorrector cfo_estimator auto_corr_core corr_result_valid", false,-1);
        tracep->declBus(c+79,"CFOCorrector cfo_estimator auto_corr_core corr_result_payload_cha_i", false,-1, 27,0);
        tracep->declBus(c+80,"CFOCorrector cfo_estimator auto_corr_core corr_result_payload_cha_q", false,-1, 27,0);
        tracep->declBit(c+153,"CFOCorrector cfo_estimator auto_corr_core clk", false,-1);
        tracep->declBit(c+154,"CFOCorrector cfo_estimator auto_corr_core reset", false,-1);
        tracep->declBit(c+160,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4_clc", false,-1);
        tracep->declBit(c+91,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4_output_valid", false,-1);
        tracep->declBus(c+92,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4_output_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+93,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4_output_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+78,"CFOCorrector cfo_estimator auto_corr_core corr_core_corr_result_valid", false,-1);
        tracep->declBus(c+79,"CFOCorrector cfo_estimator auto_corr_core corr_core_corr_result_payload_cha_i", false,-1, 27,0);
        tracep->declBus(c+80,"CFOCorrector cfo_estimator auto_corr_core corr_core_corr_result_payload_cha_q", false,-1, 27,0);
        tracep->declBit(c+145,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 input_valid", false,-1);
        tracep->declBus(c+146,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 input_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+147,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 input_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+91,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 output_valid", false,-1);
        tracep->declBus(c+92,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 output_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+93,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 output_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+145,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 enable", false,-1);
        tracep->declBit(c+160,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 clc", false,-1);
        tracep->declBit(c+153,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 clk", false,-1);
        tracep->declBit(c+154,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 reset", false,-1);
        tracep->declBit(c+94,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_0_valid", false,-1);
        tracep->declBus(c+95,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_0_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+96,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_0_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+97,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_1_valid", false,-1);
        tracep->declBus(c+98,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_1_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+99,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_1_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+100,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_2_valid", false,-1);
        tracep->declBus(c+101,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_2_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+102,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_2_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+103,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_3_valid", false,-1);
        tracep->declBus(c+104,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_3_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+105,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_3_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+106,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_4_valid", false,-1);
        tracep->declBus(c+107,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_4_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+108,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_4_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+109,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_5_valid", false,-1);
        tracep->declBus(c+110,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_5_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+111,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_5_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+112,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_6_valid", false,-1);
        tracep->declBus(c+113,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_6_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+114,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_6_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+115,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_7_valid", false,-1);
        tracep->declBus(c+116,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_7_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+117,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_7_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+118,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_8_valid", false,-1);
        tracep->declBus(c+119,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_8_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+120,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_8_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+121,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_9_valid", false,-1);
        tracep->declBus(c+122,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_9_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+123,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_9_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+124,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_10_valid", false,-1);
        tracep->declBus(c+125,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_10_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+126,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_10_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+127,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_11_valid", false,-1);
        tracep->declBus(c+128,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_11_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+129,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_11_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+130,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_12_valid", false,-1);
        tracep->declBus(c+131,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_12_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+132,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_12_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+133,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_13_valid", false,-1);
        tracep->declBus(c+134,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_13_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+135,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_13_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+136,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_14_valid", false,-1);
        tracep->declBus(c+137,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_14_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+138,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_14_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+91,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_15_valid", false,-1);
        tracep->declBus(c+92,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_15_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+93,"CFOCorrector cfo_estimator auto_corr_core shiftRegister_4 shift_reg_15_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+145,"CFOCorrector cfo_estimator auto_corr_core corr_core raw_data_0_valid", false,-1);
        tracep->declBus(c+146,"CFOCorrector cfo_estimator auto_corr_core corr_core raw_data_0_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+147,"CFOCorrector cfo_estimator auto_corr_core corr_core raw_data_0_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+91,"CFOCorrector cfo_estimator auto_corr_core corr_core raw_data_1_valid", false,-1);
        tracep->declBus(c+92,"CFOCorrector cfo_estimator auto_corr_core corr_core raw_data_1_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+93,"CFOCorrector cfo_estimator auto_corr_core corr_core raw_data_1_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+78,"CFOCorrector cfo_estimator auto_corr_core corr_core corr_result_valid", false,-1);
        tracep->declBus(c+79,"CFOCorrector cfo_estimator auto_corr_core corr_core corr_result_payload_cha_i", false,-1, 27,0);
        tracep->declBus(c+80,"CFOCorrector cfo_estimator auto_corr_core corr_core corr_result_payload_cha_q", false,-1, 27,0);
        tracep->declBit(c+153,"CFOCorrector cfo_estimator auto_corr_core corr_core clk", false,-1);
        tracep->declBit(c+154,"CFOCorrector cfo_estimator auto_corr_core corr_core reset", false,-1);
        tracep->declBit(c+139,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4_clc", false,-1);
        tracep->declBit(c+139,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5_clc", false,-1);
        tracep->declBus(c+27,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4_output_1", false,-1, 23,0);
        tracep->declBus(c+28,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5_output_1", false,-1, 23,0);
        tracep->declBus(c+79,"CFOCorrector cfo_estimator auto_corr_core corr_core corr_val_i", false,-1, 27,0);
        tracep->declBus(c+80,"CFOCorrector cfo_estimator auto_corr_core corr_core corr_val_q", false,-1, 27,0);
        tracep->declBus(c+140,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 input_1", false,-1, 23,0);
        tracep->declBus(c+27,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 output_1", false,-1, 23,0);
        tracep->declBit(c+141,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 enable", false,-1);
        tracep->declBit(c+139,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 clc", false,-1);
        tracep->declBit(c+153,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 clk", false,-1);
        tracep->declBit(c+154,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 reset", false,-1);
        tracep->declBus(c+29,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_0", false,-1, 23,0);
        tracep->declBus(c+30,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_1", false,-1, 23,0);
        tracep->declBus(c+31,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_2", false,-1, 23,0);
        tracep->declBus(c+32,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_3", false,-1, 23,0);
        tracep->declBus(c+33,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_4", false,-1, 23,0);
        tracep->declBus(c+34,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_5", false,-1, 23,0);
        tracep->declBus(c+35,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_6", false,-1, 23,0);
        tracep->declBus(c+36,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_7", false,-1, 23,0);
        tracep->declBus(c+37,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_8", false,-1, 23,0);
        tracep->declBus(c+38,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_9", false,-1, 23,0);
        tracep->declBus(c+39,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_10", false,-1, 23,0);
        tracep->declBus(c+40,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_11", false,-1, 23,0);
        tracep->declBus(c+41,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_12", false,-1, 23,0);
        tracep->declBus(c+42,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_13", false,-1, 23,0);
        tracep->declBus(c+43,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_14", false,-1, 23,0);
        tracep->declBus(c+27,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_4 shift_reg_15", false,-1, 23,0);
        tracep->declBus(c+142,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 input_1", false,-1, 23,0);
        tracep->declBus(c+28,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 output_1", false,-1, 23,0);
        tracep->declBit(c+141,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 enable", false,-1);
        tracep->declBit(c+139,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 clc", false,-1);
        tracep->declBit(c+153,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 clk", false,-1);
        tracep->declBit(c+154,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 reset", false,-1);
        tracep->declBus(c+44,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_0", false,-1, 23,0);
        tracep->declBus(c+45,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_1", false,-1, 23,0);
        tracep->declBus(c+46,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_2", false,-1, 23,0);
        tracep->declBus(c+47,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_3", false,-1, 23,0);
        tracep->declBus(c+48,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_4", false,-1, 23,0);
        tracep->declBus(c+49,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_5", false,-1, 23,0);
        tracep->declBus(c+50,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_6", false,-1, 23,0);
        tracep->declBus(c+51,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_7", false,-1, 23,0);
        tracep->declBus(c+52,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_8", false,-1, 23,0);
        tracep->declBus(c+53,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_9", false,-1, 23,0);
        tracep->declBus(c+54,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_10", false,-1, 23,0);
        tracep->declBus(c+55,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_11", false,-1, 23,0);
        tracep->declBus(c+56,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_12", false,-1, 23,0);
        tracep->declBus(c+57,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_13", false,-1, 23,0);
        tracep->declBus(c+58,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_14", false,-1, 23,0);
        tracep->declBus(c+28,"CFOCorrector cfo_estimator auto_corr_core corr_core shiftRegister_5 shift_reg_15", false,-1, 23,0);
        tracep->declBit(c+164,"CFOCorrector cfo_estimator cordic_core rotate_mode", false,-1);
        tracep->declBus(c+165,"CFOCorrector cfo_estimator cordic_core x_u", false,-1, 1,0);
        tracep->declBit(c+78,"CFOCorrector cfo_estimator cordic_core raw_data_valid", false,-1);
        tracep->declBit(c+163,"CFOCorrector cfo_estimator cordic_core raw_data_ready", false,-1);
        tracep->declBus(c+143,"CFOCorrector cfo_estimator cordic_core raw_data_payload_x", false,-1, 23,0);
        tracep->declBus(c+144,"CFOCorrector cfo_estimator cordic_core raw_data_payload_y", false,-1, 23,0);
        tracep->declBus(c+166,"CFOCorrector cfo_estimator cordic_core raw_data_payload_z", false,-1, 23,0);
        tracep->declBit(c+25,"CFOCorrector cfo_estimator cordic_core result_valid", false,-1);
        tracep->declBus(c+1,"CFOCorrector cfo_estimator cordic_core result_payload_x", false,-1, 23,0);
        tracep->declBus(c+2,"CFOCorrector cfo_estimator cordic_core result_payload_y", false,-1, 23,0);
        tracep->declBus(c+159,"CFOCorrector cfo_estimator cordic_core result_payload_z", false,-1, 23,0);
        tracep->declBit(c+153,"CFOCorrector cfo_estimator cordic_core clk", false,-1);
        tracep->declBit(c+154,"CFOCorrector cfo_estimator cordic_core reset", false,-1);
        tracep->declBit(c+78,"CFOCorrector cfo_estimator cordic_core raw_data_fire", false,-1);
        tracep->declBit(c+145,"CFOCorrector phase_rotator raw_data_valid", false,-1);
        tracep->declBus(c+146,"CFOCorrector phase_rotator raw_data_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+147,"CFOCorrector phase_rotator raw_data_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+23,"CFOCorrector phase_rotator delta_phi_valid", false,-1);
        tracep->declBus(c+18,"CFOCorrector phase_rotator delta_phi_payload", false,-1, 23,0);
        tracep->declBit(c+20,"CFOCorrector phase_rotator rotated_data_valid", false,-1);
        tracep->declBus(c+156,"CFOCorrector phase_rotator rotated_data_payload_cha_i", false,-1, 11,0);
        tracep->declBus(c+157,"CFOCorrector phase_rotator rotated_data_payload_cha_q", false,-1, 11,0);
        tracep->declBit(c+153,"CFOCorrector phase_rotator clk", false,-1);
        tracep->declBit(c+154,"CFOCorrector phase_rotator reset", false,-1);
        tracep->declBus(c+161,"CFOCorrector phase_rotator cordic_pipeline_core_raw_data_payload_x", false,-1, 24,0);
        tracep->declBus(c+162,"CFOCorrector phase_rotator cordic_pipeline_core_raw_data_payload_y", false,-1, 24,0);
        tracep->declBus(c+59,"CFOCorrector phase_rotator cordic_pipeline_core_raw_data_payload_z", false,-1, 24,0);
        tracep->declBit(c+160,"CFOCorrector phase_rotator shiftRegister_4_clc", false,-1);
        tracep->declBit(c+163,"CFOCorrector phase_rotator cordic_pipeline_core_raw_data_ready", false,-1);
        tracep->declBit(c+20,"CFOCorrector phase_rotator cordic_pipeline_core_result_valid", false,-1);
        tracep->declBus(c+3,"CFOCorrector phase_rotator cordic_pipeline_core_result_payload_x", false,-1, 24,0);
        tracep->declBus(c+4,"CFOCorrector phase_rotator cordic_pipeline_core_result_payload_y", false,-1, 24,0);
        tracep->declBus(c+5,"CFOCorrector phase_rotator cordic_pipeline_core_result_payload_z", false,-1, 24,0);
        tracep->declBit(c+60,"CFOCorrector phase_rotator shiftRegister_4_output_1", false,-1);
        tracep->declBit(c+61,"CFOCorrector phase_rotator xy_symbol", false,-1);
        tracep->declBus(c+62,"CFOCorrector phase_rotator phi", false,-1, 23,0);
        tracep->declBus(c+63,"CFOCorrector phase_rotator phiNext", false,-1, 23,0);
        tracep->declBus(c+64,"CFOCorrector phase_rotator phiCorrect", false,-1, 23,0);
        tracep->declBus(c+167,"CFOCorrector phase_rotator math_pi", false,-1, 23,0);
        tracep->declBus(c+168,"CFOCorrector phase_rotator math_pi_2", false,-1, 23,0);
        tracep->declBus(c+169,"CFOCorrector phase_rotator neg_math_pi_2", false,-1, 23,0);
        tracep->declBit(c+65,"CFOCorrector phase_rotator when_PhaseRotator_l47", false,-1);
        tracep->declBit(c+66,"CFOCorrector phase_rotator when_PhaseRotator_l50", false,-1);
        tracep->declBit(c+6,"CFOCorrector phase_rotator when_SInt_l337", false,-1);
        tracep->declBit(c+7,"CFOCorrector phase_rotator when_SInt_l191", false,-1);
        tracep->declBus(c+8,"CFOCorrector phase_rotator rotated_x_raw", false,-1, 11,0);
        tracep->declBit(c+9,"CFOCorrector phase_rotator when_SInt_l130", false,-1);
        tracep->declBit(c+10,"CFOCorrector phase_rotator when_SInt_l131", false,-1);
        tracep->declBit(c+11,"CFOCorrector phase_rotator when_SInt_l137", false,-1);
        tracep->declBit(c+12,"CFOCorrector phase_rotator when_SInt_l337_1", false,-1);
        tracep->declBit(c+13,"CFOCorrector phase_rotator when_SInt_l191_1", false,-1);
        tracep->declBus(c+14,"CFOCorrector phase_rotator rotated_y_raw", false,-1, 11,0);
        tracep->declBit(c+15,"CFOCorrector phase_rotator when_SInt_l130_1", false,-1);
        tracep->declBit(c+16,"CFOCorrector phase_rotator when_SInt_l131_1", false,-1);
        tracep->declBit(c+17,"CFOCorrector phase_rotator when_SInt_l137_1", false,-1);
        tracep->declBit(c+163,"CFOCorrector phase_rotator cordic_pipeline_core rotate_mode", false,-1);
        tracep->declBus(c+165,"CFOCorrector phase_rotator cordic_pipeline_core x_u", false,-1, 1,0);
        tracep->declBit(c+145,"CFOCorrector phase_rotator cordic_pipeline_core raw_data_valid", false,-1);
        tracep->declBit(c+163,"CFOCorrector phase_rotator cordic_pipeline_core raw_data_ready", false,-1);
        tracep->declBus(c+161,"CFOCorrector phase_rotator cordic_pipeline_core raw_data_payload_x", false,-1, 24,0);
    }
}

void VCFOCorrector::traceInitSub1(void* userp, VerilatedVcd* tracep) {
    VCFOCorrector__Syms* __restrict vlSymsp = static_cast<VCFOCorrector__Syms*>(userp);
    VCFOCorrector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+162,"CFOCorrector phase_rotator cordic_pipeline_core raw_data_payload_y", false,-1, 24,0);
        tracep->declBus(c+59,"CFOCorrector phase_rotator cordic_pipeline_core raw_data_payload_z", false,-1, 24,0);
        tracep->declBit(c+20,"CFOCorrector phase_rotator cordic_pipeline_core result_valid", false,-1);
        tracep->declBus(c+3,"CFOCorrector phase_rotator cordic_pipeline_core result_payload_x", false,-1, 24,0);
        tracep->declBus(c+4,"CFOCorrector phase_rotator cordic_pipeline_core result_payload_y", false,-1, 24,0);
        tracep->declBus(c+5,"CFOCorrector phase_rotator cordic_pipeline_core result_payload_z", false,-1, 24,0);
        tracep->declBit(c+153,"CFOCorrector phase_rotator cordic_pipeline_core clk", false,-1);
        tracep->declBit(c+154,"CFOCorrector phase_rotator cordic_pipeline_core reset", false,-1);
        tracep->declBit(c+145,"CFOCorrector phase_rotator cordic_pipeline_core raw_data_fire", false,-1);
        tracep->declBit(c+61,"CFOCorrector phase_rotator shiftRegister_4 input_1", false,-1);
        tracep->declBit(c+60,"CFOCorrector phase_rotator shiftRegister_4 output_1", false,-1);
        tracep->declBit(c+145,"CFOCorrector phase_rotator shiftRegister_4 enable", false,-1);
        tracep->declBit(c+160,"CFOCorrector phase_rotator shiftRegister_4 clc", false,-1);
        tracep->declBit(c+153,"CFOCorrector phase_rotator shiftRegister_4 clk", false,-1);
        tracep->declBit(c+154,"CFOCorrector phase_rotator shiftRegister_4 reset", false,-1);
        tracep->declBit(c+67,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_0", false,-1);
        tracep->declBit(c+68,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_1", false,-1);
        tracep->declBit(c+69,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_2", false,-1);
        tracep->declBit(c+70,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_3", false,-1);
        tracep->declBit(c+71,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_4", false,-1);
        tracep->declBit(c+72,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_5", false,-1);
        tracep->declBit(c+73,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_6", false,-1);
        tracep->declBit(c+74,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_7", false,-1);
        tracep->declBit(c+75,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_8", false,-1);
        tracep->declBit(c+76,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_9", false,-1);
        tracep->declBit(c+77,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_10", false,-1);
        tracep->declBit(c+60,"CFOCorrector phase_rotator shiftRegister_4 shift_reg_11", false,-1);
    }
}

void VCFOCorrector::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VCFOCorrector::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VCFOCorrector__Syms* __restrict vlSymsp = static_cast<VCFOCorrector__Syms*>(userp);
    VCFOCorrector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
        vlTOPp->traceFullSub1(userp, tracep);
    }
}

void VCFOCorrector::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VCFOCorrector__Syms* __restrict vlSymsp = static_cast<VCFOCorrector__Syms*>(userp);
    VCFOCorrector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_11),24);
        tracep->fullIData(oldp+2,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_y),24);
        tracep->fullIData(oldp+3,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11),25);
        tracep->fullIData(oldp+4,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y),25);
        tracep->fullIData(oldp+5,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z),25);
        tracep->fullBit(oldp+6,((1U & (((IData)(0x3fff000U) 
                                        + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_2) 
                                       >> 0x19U))));
        tracep->fullBit(oldp+7,((0U != (0x1fffU & ((IData)(0x1000U) 
                                                   + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_2)))));
        tracep->fullSData(oldp+8,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_x_raw),12);
        tracep->fullBit(oldp+9,((1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw) 
                                       >> 0xcU))));
        tracep->fullBit(oldp+10,((1U & (~ (IData)((3U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw) 
                                                       >> 0xbU))))))));
        tracep->fullBit(oldp+11,((1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw) 
                                        >> 0xbU))));
        tracep->fullBit(oldp+12,((1U & (((IData)(0x3fff000U) 
                                         + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_5) 
                                        >> 0x19U))));
        tracep->fullBit(oldp+13,((0U != (0x1fffU & 
                                         ((IData)(0x1000U) 
                                          + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_5)))));
        tracep->fullSData(oldp+14,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_y_raw),12);
        tracep->fullBit(oldp+15,((1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw) 
                                        >> 0xcU))));
        tracep->fullBit(oldp+16,((1U & (~ (IData)((3U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw) 
                                                       >> 0xbU))))))));
        tracep->fullBit(oldp+17,((1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw) 
                                        >> 0xbU))));
        tracep->fullIData(oldp+18,((0xffffffU & (- vlTOPp->CFOCorrector__DOT__delta_phi_mean))),24);
        tracep->fullBit(oldp+19,(vlTOPp->CFOCorrector__DOT__cfo_estimator_delta_phi_valid));
        tracep->fullBit(oldp+20,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11));
        tracep->fullCData(oldp+21,(vlTOPp->CFOCorrector__DOT__mean_cnt),2);
        tracep->fullIData(oldp+22,(vlTOPp->CFOCorrector__DOT__delta_phi_mean),24);
        tracep->fullBit(oldp+23,(vlTOPp->CFOCorrector__DOT__delta_phi_valid));
        tracep->fullBit(oldp+24,(vlTOPp->CFOCorrector__DOT__delta_phi_valid_regNext));
        tracep->fullBit(oldp+25,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_11));
        tracep->fullCData(oldp+26,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__impulse_cnt),5);
        tracep->fullIData(oldp+27,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15),24);
        tracep->fullIData(oldp+28,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_15),24);
        tracep->fullIData(oldp+29,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0),24);
        tracep->fullIData(oldp+30,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1),24);
        tracep->fullIData(oldp+31,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2),24);
        tracep->fullIData(oldp+32,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3),24);
        tracep->fullIData(oldp+33,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4),24);
        tracep->fullIData(oldp+34,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5),24);
        tracep->fullIData(oldp+35,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6),24);
        tracep->fullIData(oldp+36,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7),24);
        tracep->fullIData(oldp+37,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8),24);
        tracep->fullIData(oldp+38,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9),24);
        tracep->fullIData(oldp+39,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10),24);
        tracep->fullIData(oldp+40,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11),24);
        tracep->fullIData(oldp+41,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12),24);
        tracep->fullIData(oldp+42,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13),24);
        tracep->fullIData(oldp+43,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14),24);
        tracep->fullIData(oldp+44,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_0),24);
        tracep->fullIData(oldp+45,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_1),24);
        tracep->fullIData(oldp+46,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_2),24);
        tracep->fullIData(oldp+47,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_3),24);
        tracep->fullIData(oldp+48,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_4),24);
        tracep->fullIData(oldp+49,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_5),24);
        tracep->fullIData(oldp+50,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_6),24);
        tracep->fullIData(oldp+51,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_7),24);
        tracep->fullIData(oldp+52,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_8),24);
        tracep->fullIData(oldp+53,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_9),24);
        tracep->fullIData(oldp+54,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_10),24);
        tracep->fullIData(oldp+55,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_11),24);
        tracep->fullIData(oldp+56,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_12),24);
        tracep->fullIData(oldp+57,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_13),24);
        tracep->fullIData(oldp+58,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_14),24);
        tracep->fullIData(oldp+59,(((0x1000000U & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                                                   << 1U)) 
                                    | vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi)),25);
        tracep->fullBit(oldp+60,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_11));
        tracep->fullBit(oldp+61,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__xy_symbol));
        tracep->fullIData(oldp+62,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi),24);
        tracep->fullIData(oldp+63,((0xffffffU & (VL_LTES_III(1,24,24, 0x1921U, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50)
                                                  ? 
                                                 ((vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                                                   - (IData)(0x3243U)) 
                                                  + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect)
                                                  : 
                                                 (VL_GTES_III(1,24,24, 0xffe6dfU, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50)
                                                   ? 
                                                  ((IData)(0x3243U) 
                                                   + 
                                                   (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                                                    + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect))
                                                   : 
                                                  (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                                                   + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect))))),24);
        tracep->fullIData(oldp+64,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect),24);
        tracep->fullBit(oldp+65,(VL_LTES_III(1,24,24, 0x1921U, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50)));
        tracep->fullBit(oldp+66,(VL_GTES_III(1,24,24, 0xffe6dfU, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50)));
        tracep->fullBit(oldp+67,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_0));
        tracep->fullBit(oldp+68,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_1));
        tracep->fullBit(oldp+69,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_2));
        tracep->fullBit(oldp+70,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_3));
        tracep->fullBit(oldp+71,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_4));
        tracep->fullBit(oldp+72,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_5));
        tracep->fullBit(oldp+73,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_6));
        tracep->fullBit(oldp+74,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_7));
        tracep->fullBit(oldp+75,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_8));
        tracep->fullBit(oldp+76,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_9));
        tracep->fullBit(oldp+77,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_10));
        tracep->fullBit(oldp+78,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid));
        tracep->fullIData(oldp+79,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i),28);
        tracep->fullIData(oldp+80,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q),28);
        tracep->fullBit(oldp+81,((1U & (((IData)(0x1ffffff8U) 
                                         + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_2) 
                                        >> 0x1cU))));
        tracep->fullBit(oldp+82,((0U != (0xfU & ((IData)(8U) 
                                                 + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_2)))));
        tracep->fullBit(oldp+83,((1U & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130 
                                        >> 0x18U))));
        tracep->fullBit(oldp+84,((1U & (~ (IData)((3U 
                                                   == 
                                                   (3U 
                                                    & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130 
                                                       >> 0x17U))))))));
        tracep->fullBit(oldp+85,((1U & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130 
                                        >> 0x17U))));
        tracep->fullBit(oldp+86,((1U & (((IData)(0x1ffffff8U) 
                                         + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_5) 
                                        >> 0x1cU))));
        tracep->fullBit(oldp+87,((0U != (0xfU & ((IData)(8U) 
                                                 + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_5)))));
        tracep->fullBit(oldp+88,((1U & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4 
                                        >> 0x18U))));
        tracep->fullBit(oldp+89,((1U & (~ (IData)((3U 
                                                   == 
                                                   (3U 
                                                    & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4 
                                                       >> 0x17U))))))));
        tracep->fullBit(oldp+90,((1U & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4 
                                        >> 0x17U))));
        tracep->fullBit(oldp+91,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_valid));
        tracep->fullSData(oldp+92,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_payload_cha_i),12);
        tracep->fullSData(oldp+93,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_payload_cha_q),12);
        tracep->fullBit(oldp+94,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_valid));
        tracep->fullSData(oldp+95,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_payload_cha_i),12);
        tracep->fullSData(oldp+96,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_payload_cha_q),12);
        tracep->fullBit(oldp+97,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_valid));
        tracep->fullSData(oldp+98,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_payload_cha_i),12);
        tracep->fullSData(oldp+99,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_payload_cha_q),12);
        tracep->fullBit(oldp+100,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_valid));
        tracep->fullSData(oldp+101,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_payload_cha_i),12);
        tracep->fullSData(oldp+102,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_payload_cha_q),12);
        tracep->fullBit(oldp+103,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_valid));
        tracep->fullSData(oldp+104,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_payload_cha_i),12);
        tracep->fullSData(oldp+105,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_payload_cha_q),12);
        tracep->fullBit(oldp+106,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_valid));
        tracep->fullSData(oldp+107,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_payload_cha_i),12);
        tracep->fullSData(oldp+108,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_payload_cha_q),12);
        tracep->fullBit(oldp+109,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_valid));
        tracep->fullSData(oldp+110,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_payload_cha_i),12);
        tracep->fullSData(oldp+111,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_payload_cha_q),12);
        tracep->fullBit(oldp+112,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_valid));
        tracep->fullSData(oldp+113,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_payload_cha_i),12);
        tracep->fullSData(oldp+114,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_payload_cha_q),12);
        tracep->fullBit(oldp+115,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_valid));
        tracep->fullSData(oldp+116,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_payload_cha_i),12);
        tracep->fullSData(oldp+117,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_payload_cha_q),12);
        tracep->fullBit(oldp+118,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_valid));
        tracep->fullSData(oldp+119,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_payload_cha_i),12);
        tracep->fullSData(oldp+120,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_payload_cha_q),12);
        tracep->fullBit(oldp+121,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_valid));
        tracep->fullSData(oldp+122,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_payload_cha_i),12);
        tracep->fullSData(oldp+123,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_payload_cha_q),12);
        tracep->fullBit(oldp+124,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_valid));
        tracep->fullSData(oldp+125,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_payload_cha_i),12);
        tracep->fullSData(oldp+126,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_payload_cha_q),12);
        tracep->fullBit(oldp+127,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_valid));
        tracep->fullSData(oldp+128,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_payload_cha_i),12);
        tracep->fullSData(oldp+129,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_payload_cha_q),12);
        tracep->fullBit(oldp+130,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_valid));
        tracep->fullSData(oldp+131,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_payload_cha_i),12);
        tracep->fullSData(oldp+132,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_payload_cha_q),12);
        tracep->fullBit(oldp+133,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_valid));
        tracep->fullSData(oldp+134,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_payload_cha_i),12);
        tracep->fullSData(oldp+135,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_payload_cha_q),12);
        tracep->fullBit(oldp+136,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_valid));
        tracep->fullSData(oldp+137,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_payload_cha_i),12);
        tracep->fullSData(oldp+138,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_payload_cha_q),12);
        tracep->fullBit(oldp+139,((1U & (~ (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable)))));
        tracep->fullIData(oldp+140,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i),24);
        tracep->fullBit(oldp+141,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable));
        tracep->fullIData(oldp+142,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q),24);
        tracep->fullIData(oldp+143,((0xffffffU & ((0x1000000U 
                                                   & vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130)
                                                   ? 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130 
                                                        >> 0x17U)))
                                                    ? vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130
                                                    : 0x800000U)
                                                   : 
                                                  ((0x800000U 
                                                    & vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130)
                                                    ? 0x7fffffU
                                                    : vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130)))),24);
        tracep->fullIData(oldp+144,((0xffffffU & ((0x1000000U 
                                                   & vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4)
                                                   ? 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4 
                                                        >> 0x17U)))
                                                    ? vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4
                                                    : 0x800000U)
                                                   : 
                                                  ((0x800000U 
                                                    & vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4)
                                                    ? 0x7fffffU
                                                    : vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4)))),24);
        tracep->fullBit(oldp+145,(vlTOPp->raw_data_valid));
        tracep->fullSData(oldp+146,(vlTOPp->raw_data_payload_cha_i),12);
        tracep->fullSData(oldp+147,(vlTOPp->raw_data_payload_cha_q),12);
        tracep->fullBit(oldp+148,(vlTOPp->rotated_data_valid));
        tracep->fullSData(oldp+149,(vlTOPp->rotated_data_payload_cha_i),12);
        tracep->fullSData(oldp+150,(vlTOPp->rotated_data_payload_cha_q),12);
        tracep->fullBit(oldp+151,(vlTOPp->enable));
        tracep->fullBit(oldp+152,(vlTOPp->phi_correct_valid));
        tracep->fullBit(oldp+153,(vlTOPp->clk));
        tracep->fullBit(oldp+154,(vlTOPp->reset));
        tracep->fullIData(oldp+155,((0xffffffU & VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z, 4U))),24);
        tracep->fullSData(oldp+156,((0xfffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_11)
                                                ? (- (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_x_raw))
                                                : (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_x_raw)))),12);
        tracep->fullSData(oldp+157,((0xfffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_11)
                                                ? (- (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_y_raw))
                                                : (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_y_raw)))),12);
        tracep->fullBit(oldp+158,(vlTOPp->CFOCorrector__DOT__when_CFOCorrector_l45));
        tracep->fullIData(oldp+159,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z),24);
        tracep->fullBit(oldp+160,((1U & (~ (IData)(vlTOPp->raw_data_valid)))));
        tracep->fullIData(oldp+161,(((0x1000000U & 
                                      ((IData)(vlTOPp->raw_data_payload_cha_i) 
                                       << 0xdU)) | 
                                     ((IData)(vlTOPp->raw_data_payload_cha_i) 
                                      << 0xcU))),25);
    }
}

void VCFOCorrector::traceFullSub1(void* userp, VerilatedVcd* tracep) {
    VCFOCorrector__Syms* __restrict vlSymsp = static_cast<VCFOCorrector__Syms*>(userp);
    VCFOCorrector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+162,(((0x1000000U & 
                                      ((IData)(vlTOPp->raw_data_payload_cha_q) 
                                       << 0xdU)) | 
                                     ((IData)(vlTOPp->raw_data_payload_cha_q) 
                                      << 0xcU))),25);
        tracep->fullBit(oldp+163,(1U));
        tracep->fullBit(oldp+164,(0U));
        tracep->fullCData(oldp+165,(0U),2);
        tracep->fullIData(oldp+166,(0U),24);
        tracep->fullIData(oldp+167,(0x3243U),24);
        tracep->fullIData(oldp+168,(0x1921U),24);
        tracep->fullIData(oldp+169,(0xffe6dfU),24);
    }
}
