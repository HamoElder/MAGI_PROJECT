// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPreambleDetector__Syms.h"


//======================

void VPreambleDetector::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VPreambleDetector::traceInit, &VPreambleDetector::traceFull, &VPreambleDetector::traceChg, this);
}
void VPreambleDetector::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VPreambleDetector* t = (VPreambleDetector*)userthis;
    VPreambleDetector__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VPreambleDetector::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VPreambleDetector* t = (VPreambleDetector*)userthis;
    VPreambleDetector__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VPreambleDetector::traceInitThis(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VPreambleDetector::traceFullThis(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VPreambleDetector::traceInitThis__1(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+1113,"min_plateau", false,-1, 7,0);
        vcdp->declBit(c+1121,"pkg_detected", false,-1);
        vcdp->declBit(c+1129,"raw_data_valid", false,-1);
        vcdp->declBus(c+1137,"raw_data_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+1145,"raw_data_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+1153,"raw_data_out_valid", false,-1);
        vcdp->declBus(c+1161,"raw_data_out_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+1169,"raw_data_out_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+1177,"corr_result_valid", false,-1);
        vcdp->declQuad(c+1185,"corr_result_payload_cha_i", false,-1, 35,0);
        vcdp->declQuad(c+1201,"corr_result_payload_cha_q", false,-1, 35,0);
        vcdp->declBit(c+1217,"clk", false,-1);
        vcdp->declBit(c+1225,"reset", false,-1);
        vcdp->declBus(c+1113,"PreambleDetector min_plateau", false,-1, 7,0);
        vcdp->declBit(c+1121,"PreambleDetector pkg_detected", false,-1);
        vcdp->declBit(c+1129,"PreambleDetector raw_data_valid", false,-1);
        vcdp->declBus(c+1137,"PreambleDetector raw_data_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+1145,"PreambleDetector raw_data_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+1153,"PreambleDetector raw_data_out_valid", false,-1);
        vcdp->declBus(c+1161,"PreambleDetector raw_data_out_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+1169,"PreambleDetector raw_data_out_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+1177,"PreambleDetector corr_result_valid", false,-1);
        vcdp->declQuad(c+1185,"PreambleDetector corr_result_payload_cha_i", false,-1, 35,0);
        vcdp->declQuad(c+1201,"PreambleDetector corr_result_payload_cha_q", false,-1, 35,0);
        vcdp->declBit(c+1217,"PreambleDetector clk", false,-1);
        vcdp->declBit(c+1225,"PreambleDetector reset", false,-1);
        vcdp->declBit(c+1049,"PreambleDetector powerMeter_1_power_result_valid", false,-1);
        vcdp->declBus(c+1033,"PreambleDetector powerMeter_1_power_result_payload_cha_i", false,-1, 23,0);
        vcdp->declBus(c+1041,"PreambleDetector powerMeter_1_power_result_payload_cha_q", false,-1, 23,0);
        vcdp->declBit(c+17,"PreambleDetector autoCorrelator_1_corr_result_valid", false,-1);
        vcdp->declQuad(c+25,"PreambleDetector autoCorrelator_1_corr_result_payload_cha_i", false,-1, 35,0);
        vcdp->declQuad(c+41,"PreambleDetector autoCorrelator_1_corr_result_payload_cha_q", false,-1, 35,0);
        vcdp->declBit(c+57,"PreambleDetector gate_pkg_det", false,-1);
        vcdp->declQuad(c+65,"PreambleDetector prod_avg_mag", false,-1, 35,0);
        vcdp->declBus(c+81,"PreambleDetector plateau_cnt", false,-1, 7,0);
        vcdp->declBit(c+89,"PreambleDetector powerMeter_1_power_result_valid_regNext", false,-1);
        vcdp->declBit(c+97,"PreambleDetector when_PreambleDetector_l67", false,-1);
        vcdp->declBit(c+105,"PreambleDetector raw_data_regNext_valid", false,-1);
        vcdp->declBus(c+1,"PreambleDetector raw_data_regNext_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+9,"PreambleDetector raw_data_regNext_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+1129,"PreambleDetector powerMeter_1 raw_data_valid", false,-1);
        vcdp->declBus(c+1137,"PreambleDetector powerMeter_1 raw_data_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+1145,"PreambleDetector powerMeter_1 raw_data_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+1049,"PreambleDetector powerMeter_1 power_result_valid", false,-1);
        vcdp->declBus(c+1033,"PreambleDetector powerMeter_1 power_result_payload_cha_i", false,-1, 23,0);
        vcdp->declBus(c+1041,"PreambleDetector powerMeter_1 power_result_payload_cha_q", false,-1, 23,0);
        vcdp->declBit(c+1217,"PreambleDetector powerMeter_1 clk", false,-1);
        vcdp->declBit(c+1225,"PreambleDetector powerMeter_1 reset", false,-1);
        vcdp->declBus(c+113,"PreambleDetector powerMeter_1 shiftRegister_5_output_1", false,-1, 19,0);
        vcdp->declBus(c+121,"PreambleDetector powerMeter_1 shiftRegister_6_output_1", false,-1, 19,0);
        vcdp->declBus(c+1033,"PreambleDetector powerMeter_1 power_val_cha_i", false,-1, 23,0);
        vcdp->declBus(c+1041,"PreambleDetector powerMeter_1 power_val_cha_q", false,-1, 23,0);
        vcdp->declBus(c+1057,"PreambleDetector powerMeter_1 power_val_i", false,-1, 23,0);
        vcdp->declBus(c+1065,"PreambleDetector powerMeter_1 power_val_q", false,-1, 23,0);
        vcdp->declBus(c+1233,"PreambleDetector powerMeter_1 sq_i", false,-1, 23,0);
        vcdp->declBus(c+1241,"PreambleDetector powerMeter_1 sq_q", false,-1, 23,0);
        vcdp->declBus(c+1081,"PreambleDetector powerMeter_1 sq_i_regNext", false,-1, 23,0);
        vcdp->declBus(c+1089,"PreambleDetector powerMeter_1 power_cal_i", false,-1, 19,0);
        vcdp->declBus(c+1097,"PreambleDetector powerMeter_1 sq_q_regNext", false,-1, 23,0);
        vcdp->declBus(c+1105,"PreambleDetector powerMeter_1 power_cal_q", false,-1, 19,0);
        vcdp->declBit(c+1073,"PreambleDetector powerMeter_1 power_cal_valid", false,-1);
        vcdp->declBit(c+1049,"PreambleDetector powerMeter_1 power_result_valid_1", false,-1);
        vcdp->declBus(c+1089,"PreambleDetector powerMeter_1 shiftRegister_5 input_1", false,-1, 19,0);
        vcdp->declBus(c+113,"PreambleDetector powerMeter_1 shiftRegister_5 output_1", false,-1, 19,0);
        vcdp->declBit(c+1073,"PreambleDetector powerMeter_1 shiftRegister_5 enable", false,-1);
        vcdp->declBit(c+1217,"PreambleDetector powerMeter_1 shiftRegister_5 clk", false,-1);
        vcdp->declBit(c+1225,"PreambleDetector powerMeter_1 shiftRegister_5 reset", false,-1);
        vcdp->declBus(c+129,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_0", false,-1, 19,0);
        vcdp->declBus(c+137,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_1", false,-1, 19,0);
        vcdp->declBus(c+145,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_2", false,-1, 19,0);
        vcdp->declBus(c+153,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_3", false,-1, 19,0);
        vcdp->declBus(c+161,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_4", false,-1, 19,0);
        vcdp->declBus(c+169,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_5", false,-1, 19,0);
        vcdp->declBus(c+177,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_6", false,-1, 19,0);
        vcdp->declBus(c+185,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_7", false,-1, 19,0);
        vcdp->declBus(c+193,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_8", false,-1, 19,0);
        vcdp->declBus(c+201,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_9", false,-1, 19,0);
        vcdp->declBus(c+209,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_10", false,-1, 19,0);
        vcdp->declBus(c+217,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_11", false,-1, 19,0);
        vcdp->declBus(c+225,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_12", false,-1, 19,0);
        vcdp->declBus(c+233,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_13", false,-1, 19,0);
        vcdp->declBus(c+241,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_14", false,-1, 19,0);
        vcdp->declBus(c+113,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_15", false,-1, 19,0);
        vcdp->declBus(c+1105,"PreambleDetector powerMeter_1 shiftRegister_6 input_1", false,-1, 19,0);
        vcdp->declBus(c+121,"PreambleDetector powerMeter_1 shiftRegister_6 output_1", false,-1, 19,0);
        vcdp->declBit(c+1073,"PreambleDetector powerMeter_1 shiftRegister_6 enable", false,-1);
        vcdp->declBit(c+1217,"PreambleDetector powerMeter_1 shiftRegister_6 clk", false,-1);
        vcdp->declBit(c+1225,"PreambleDetector powerMeter_1 shiftRegister_6 reset", false,-1);
        vcdp->declBus(c+249,"PreambleDetector powerMeter_1 shiftRegister_6 shift_reg_0", false,-1, 19,0);
        vcdp->declBus(c+257,"PreambleDetector powerMeter_1 shiftRegister_6 shift_reg_1", false,-1, 19,0);
        vcdp->declBus(c+265,"PreambleDetector powerMeter_1 shiftRegister_6 shift_reg_2", false,-1, 19,0);
        vcdp->declBus(c+273,"PreambleDetector powerMeter_1 shiftRegister_6 shift_reg_3", false,-1, 19,0);
        vcdp->declBus(c+281,"PreambleDetector powerMeter_1 shiftRegister_6 shift_reg_4", false,-1, 19,0);
        vcdp->declBus(c+289,"PreambleDetector powerMeter_1 shiftRegister_6 shift_reg_5", false,-1, 19,0);
        vcdp->declBus(c+297,"PreambleDetector powerMeter_1 shiftRegister_6 shift_reg_6", false,-1, 19,0);
        vcdp->declBus(c+305,"PreambleDetector powerMeter_1 shiftRegister_6 shift_reg_7", false,-1, 19,0);
        vcdp->declBus(c+313,"PreambleDetector powerMeter_1 shiftRegister_6 shift_reg_8", false,-1, 19,0);
        vcdp->declBus(c+321,"PreambleDetector powerMeter_1 shiftRegister_6 shift_reg_9", false,-1, 19,0);
        vcdp->declBus(c+329,"PreambleDetector powerMeter_1 shiftRegister_6 shift_reg_10", false,-1, 19,0);
        vcdp->declBus(c+337,"PreambleDetector powerMeter_1 shiftRegister_6 shift_reg_11", false,-1, 19,0);
        vcdp->declBus(c+345,"PreambleDetector powerMeter_1 shiftRegister_6 shift_reg_12", false,-1, 19,0);
        vcdp->declBus(c+353,"PreambleDetector powerMeter_1 shiftRegister_6 shift_reg_13", false,-1, 19,0);
        vcdp->declBus(c+361,"PreambleDetector powerMeter_1 shiftRegister_6 shift_reg_14", false,-1, 19,0);
        vcdp->declBus(c+121,"PreambleDetector powerMeter_1 shiftRegister_6 shift_reg_15", false,-1, 19,0);
        vcdp->declBit(c+1129,"PreambleDetector autoCorrelator_1 raw_data_valid", false,-1);
        vcdp->declBus(c+1137,"PreambleDetector autoCorrelator_1 raw_data_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+1145,"PreambleDetector autoCorrelator_1 raw_data_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+17,"PreambleDetector autoCorrelator_1 corr_result_valid", false,-1);
        vcdp->declQuad(c+25,"PreambleDetector autoCorrelator_1 corr_result_payload_cha_i", false,-1, 35,0);
        vcdp->declQuad(c+41,"PreambleDetector autoCorrelator_1 corr_result_payload_cha_q", false,-1, 35,0);
        vcdp->declBit(c+1217,"PreambleDetector autoCorrelator_1 clk", false,-1);
        vcdp->declBit(c+1225,"PreambleDetector autoCorrelator_1 reset", false,-1);
        vcdp->declBit(c+369,"PreambleDetector autoCorrelator_1 shiftRegister_5_output_valid", false,-1);
        vcdp->declBus(c+377,"PreambleDetector autoCorrelator_1 shiftRegister_5_output_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+385,"PreambleDetector autoCorrelator_1 shiftRegister_5_output_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+17,"PreambleDetector autoCorrelator_1 corr_core_corr_result_valid", false,-1);
        vcdp->declQuad(c+25,"PreambleDetector autoCorrelator_1 corr_core_corr_result_payload_cha_i", false,-1, 35,0);
        vcdp->declQuad(c+41,"PreambleDetector autoCorrelator_1 corr_core_corr_result_payload_cha_q", false,-1, 35,0);
        vcdp->declBit(c+1129,"PreambleDetector autoCorrelator_1 shiftRegister_5 input_valid", false,-1);
        vcdp->declBus(c+1137,"PreambleDetector autoCorrelator_1 shiftRegister_5 input_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+1145,"PreambleDetector autoCorrelator_1 shiftRegister_5 input_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+369,"PreambleDetector autoCorrelator_1 shiftRegister_5 output_valid", false,-1);
        vcdp->declBus(c+377,"PreambleDetector autoCorrelator_1 shiftRegister_5 output_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+385,"PreambleDetector autoCorrelator_1 shiftRegister_5 output_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+1129,"PreambleDetector autoCorrelator_1 shiftRegister_5 enable", false,-1);
        vcdp->declBit(c+1217,"PreambleDetector autoCorrelator_1 shiftRegister_5 clk", false,-1);
        vcdp->declBit(c+1225,"PreambleDetector autoCorrelator_1 shiftRegister_5 reset", false,-1);
        vcdp->declBit(c+393,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_0_valid", false,-1);
        vcdp->declBus(c+401,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_0_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+409,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_0_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+417,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_1_valid", false,-1);
        vcdp->declBus(c+425,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_1_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+433,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_1_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+441,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_2_valid", false,-1);
        vcdp->declBus(c+449,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_2_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+457,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_2_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+465,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_3_valid", false,-1);
        vcdp->declBus(c+473,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_3_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+481,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_3_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+489,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_4_valid", false,-1);
        vcdp->declBus(c+497,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_4_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+505,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_4_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+513,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_5_valid", false,-1);
        vcdp->declBus(c+521,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_5_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+529,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_5_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+537,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_6_valid", false,-1);
        vcdp->declBus(c+545,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_6_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+553,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_6_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+561,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_7_valid", false,-1);
        vcdp->declBus(c+569,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_7_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+577,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_7_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+585,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_8_valid", false,-1);
        vcdp->declBus(c+593,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_8_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+601,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_8_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+609,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_9_valid", false,-1);
        vcdp->declBus(c+617,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_9_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+625,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_9_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+633,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_10_valid", false,-1);
        vcdp->declBus(c+641,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_10_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+649,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_10_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+657,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_11_valid", false,-1);
        vcdp->declBus(c+665,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_11_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+673,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_11_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+681,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_12_valid", false,-1);
        vcdp->declBus(c+689,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_12_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+697,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_12_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+705,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_13_valid", false,-1);
        vcdp->declBus(c+713,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_13_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+721,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_13_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+729,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_14_valid", false,-1);
        vcdp->declBus(c+737,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_14_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+745,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_14_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+369,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_15_valid", false,-1);
        vcdp->declBus(c+377,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_15_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+385,"PreambleDetector autoCorrelator_1 shiftRegister_5 shift_reg_15_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+1129,"PreambleDetector autoCorrelator_1 corr_core raw_data_0_valid", false,-1);
        vcdp->declBus(c+1137,"PreambleDetector autoCorrelator_1 corr_core raw_data_0_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+1145,"PreambleDetector autoCorrelator_1 corr_core raw_data_0_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+369,"PreambleDetector autoCorrelator_1 corr_core raw_data_1_valid", false,-1);
        vcdp->declBus(c+377,"PreambleDetector autoCorrelator_1 corr_core raw_data_1_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+385,"PreambleDetector autoCorrelator_1 corr_core raw_data_1_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+17,"PreambleDetector autoCorrelator_1 corr_core corr_result_valid", false,-1);
        vcdp->declQuad(c+25,"PreambleDetector autoCorrelator_1 corr_core corr_result_payload_cha_i", false,-1, 35,0);
        vcdp->declQuad(c+41,"PreambleDetector autoCorrelator_1 corr_core corr_result_payload_cha_q", false,-1, 35,0);
        vcdp->declBit(c+1217,"PreambleDetector autoCorrelator_1 corr_core clk", false,-1);
        vcdp->declBit(c+1225,"PreambleDetector autoCorrelator_1 corr_core reset", false,-1);
        vcdp->declBus(c+753,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_5_output_1", false,-1, 23,0);
        vcdp->declBus(c+761,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_6_output_1", false,-1, 23,0);
        vcdp->declQuad(c+25,"PreambleDetector autoCorrelator_1 corr_core corr_val_i", false,-1, 35,0);
        vcdp->declQuad(c+41,"PreambleDetector autoCorrelator_1 corr_core corr_val_q", false,-1, 35,0);
        vcdp->declBus(c+769,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_5 input_1", false,-1, 23,0);
        vcdp->declBus(c+753,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_5 output_1", false,-1, 23,0);
        vcdp->declBit(c+777,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_5 enable", false,-1);
        vcdp->declBit(c+1217,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_5 clk", false,-1);
        vcdp->declBit(c+1225,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_5 reset", false,-1);
        vcdp->declBus(c+785,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_5 shift_reg_0", false,-1, 23,0);
        vcdp->declBus(c+793,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_5 shift_reg_1", false,-1, 23,0);
        vcdp->declBus(c+801,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_5 shift_reg_2", false,-1, 23,0);
        vcdp->declBus(c+809,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_5 shift_reg_3", false,-1, 23,0);
        vcdp->declBus(c+817,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_5 shift_reg_4", false,-1, 23,0);
        vcdp->declBus(c+825,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_5 shift_reg_5", false,-1, 23,0);
        vcdp->declBus(c+833,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_5 shift_reg_6", false,-1, 23,0);
        vcdp->declBus(c+841,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_5 shift_reg_7", false,-1, 23,0);
        vcdp->declBus(c+849,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_5 shift_reg_8", false,-1, 23,0);
        vcdp->declBus(c+857,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_5 shift_reg_9", false,-1, 23,0);
        vcdp->declBus(c+865,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_5 shift_reg_10", false,-1, 23,0);
        vcdp->declBus(c+873,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_5 shift_reg_11", false,-1, 23,0);
        vcdp->declBus(c+881,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_5 shift_reg_12", false,-1, 23,0);
        vcdp->declBus(c+889,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_5 shift_reg_13", false,-1, 23,0);
        vcdp->declBus(c+897,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_5 shift_reg_14", false,-1, 23,0);
        vcdp->declBus(c+753,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_5 shift_reg_15", false,-1, 23,0);
        vcdp->declBus(c+905,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_6 input_1", false,-1, 23,0);
        vcdp->declBus(c+761,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_6 output_1", false,-1, 23,0);
        vcdp->declBit(c+777,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_6 enable", false,-1);
        vcdp->declBit(c+1217,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_6 clk", false,-1);
        vcdp->declBit(c+1225,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_6 reset", false,-1);
        vcdp->declBus(c+913,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_6 shift_reg_0", false,-1, 23,0);
        vcdp->declBus(c+921,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_6 shift_reg_1", false,-1, 23,0);
        vcdp->declBus(c+929,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_6 shift_reg_2", false,-1, 23,0);
        vcdp->declBus(c+937,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_6 shift_reg_3", false,-1, 23,0);
        vcdp->declBus(c+945,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_6 shift_reg_4", false,-1, 23,0);
        vcdp->declBus(c+953,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_6 shift_reg_5", false,-1, 23,0);
        vcdp->declBus(c+961,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_6 shift_reg_6", false,-1, 23,0);
        vcdp->declBus(c+969,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_6 shift_reg_7", false,-1, 23,0);
        vcdp->declBus(c+977,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_6 shift_reg_8", false,-1, 23,0);
        vcdp->declBus(c+985,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_6 shift_reg_9", false,-1, 23,0);
        vcdp->declBus(c+993,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_6 shift_reg_10", false,-1, 23,0);
        vcdp->declBus(c+1001,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_6 shift_reg_11", false,-1, 23,0);
        vcdp->declBus(c+1009,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_6 shift_reg_12", false,-1, 23,0);
        vcdp->declBus(c+1017,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_6 shift_reg_13", false,-1, 23,0);
        vcdp->declBus(c+1025,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_6 shift_reg_14", false,-1, 23,0);
        vcdp->declBus(c+761,"PreambleDetector autoCorrelator_1 corr_core shiftRegister_6 shift_reg_15", false,-1, 23,0);
    }
}

void VPreambleDetector::traceFullThis__1(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->PreambleDetector__DOT__raw_data_regNext_payload_cha_i),12);
        vcdp->fullBus(c+9,(vlTOPp->PreambleDetector__DOT__raw_data_regNext_payload_cha_q),12);
        vcdp->fullBit(c+17,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_result_valid));
        vcdp->fullQuad(c+25,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_i),36);
        vcdp->fullQuad(c+41,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_q),36);
        vcdp->fullBit(c+57,(vlTOPp->PreambleDetector__DOT__gate_pkg_det));
        vcdp->fullQuad(c+65,(vlTOPp->PreambleDetector__DOT__prod_avg_mag),36);
        vcdp->fullBus(c+81,(vlTOPp->PreambleDetector__DOT__plateau_cnt),8);
        vcdp->fullBit(c+89,(vlTOPp->PreambleDetector__DOT__powerMeter_1_power_result_valid_regNext));
        vcdp->fullBit(c+97,((0xffU > (IData)(vlTOPp->PreambleDetector__DOT__plateau_cnt))));
        vcdp->fullBit(c+105,(vlTOPp->PreambleDetector__DOT__raw_data_regNext_valid));
        vcdp->fullBus(c+113,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_15),20);
        vcdp->fullBus(c+121,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_15),20);
        vcdp->fullBus(c+129,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_0),20);
        vcdp->fullBus(c+137,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_1),20);
        vcdp->fullBus(c+145,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_2),20);
        vcdp->fullBus(c+153,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_3),20);
        vcdp->fullBus(c+161,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_4),20);
        vcdp->fullBus(c+169,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_5),20);
        vcdp->fullBus(c+177,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_6),20);
        vcdp->fullBus(c+185,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_7),20);
        vcdp->fullBus(c+193,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_8),20);
        vcdp->fullBus(c+201,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_9),20);
        vcdp->fullBus(c+209,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_10),20);
        vcdp->fullBus(c+217,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_11),20);
        vcdp->fullBus(c+225,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_12),20);
        vcdp->fullBus(c+233,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_13),20);
        vcdp->fullBus(c+241,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_14),20);
        vcdp->fullBus(c+249,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_0),20);
        vcdp->fullBus(c+257,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_1),20);
        vcdp->fullBus(c+265,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_2),20);
        vcdp->fullBus(c+273,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_3),20);
        vcdp->fullBus(c+281,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_4),20);
        vcdp->fullBus(c+289,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_5),20);
        vcdp->fullBus(c+297,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_6),20);
        vcdp->fullBus(c+305,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_7),20);
        vcdp->fullBus(c+313,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_8),20);
        vcdp->fullBus(c+321,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_9),20);
        vcdp->fullBus(c+329,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_10),20);
        vcdp->fullBus(c+337,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_11),20);
        vcdp->fullBus(c+345,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_12),20);
        vcdp->fullBus(c+353,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_13),20);
        vcdp->fullBus(c+361,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_14),20);
        vcdp->fullBit(c+369,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_15_valid));
        vcdp->fullBus(c+377,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_15_payload_cha_i),12);
        vcdp->fullBus(c+385,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_15_payload_cha_q),12);
        vcdp->fullBit(c+393,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_0_valid));
        vcdp->fullBus(c+401,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_0_payload_cha_i),12);
        vcdp->fullBus(c+409,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_0_payload_cha_q),12);
        vcdp->fullBit(c+417,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_1_valid));
        vcdp->fullBus(c+425,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_1_payload_cha_i),12);
        vcdp->fullBus(c+433,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_1_payload_cha_q),12);
        vcdp->fullBit(c+441,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_2_valid));
        vcdp->fullBus(c+449,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_2_payload_cha_i),12);
        vcdp->fullBus(c+457,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_2_payload_cha_q),12);
        vcdp->fullBit(c+465,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_3_valid));
        vcdp->fullBus(c+473,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_3_payload_cha_i),12);
        vcdp->fullBus(c+481,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_3_payload_cha_q),12);
        vcdp->fullBit(c+489,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_4_valid));
        vcdp->fullBus(c+497,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_4_payload_cha_i),12);
        vcdp->fullBus(c+505,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_4_payload_cha_q),12);
        vcdp->fullBit(c+513,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_5_valid));
        vcdp->fullBus(c+521,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_5_payload_cha_i),12);
        vcdp->fullBus(c+529,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_5_payload_cha_q),12);
        vcdp->fullBit(c+537,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_6_valid));
        vcdp->fullBus(c+545,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_6_payload_cha_i),12);
        vcdp->fullBus(c+553,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_6_payload_cha_q),12);
        vcdp->fullBit(c+561,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_7_valid));
        vcdp->fullBus(c+569,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_7_payload_cha_i),12);
        vcdp->fullBus(c+577,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_7_payload_cha_q),12);
        vcdp->fullBit(c+585,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_8_valid));
        vcdp->fullBus(c+593,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_8_payload_cha_i),12);
        vcdp->fullBus(c+601,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_8_payload_cha_q),12);
        vcdp->fullBit(c+609,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_9_valid));
        vcdp->fullBus(c+617,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_9_payload_cha_i),12);
        vcdp->fullBus(c+625,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_9_payload_cha_q),12);
        vcdp->fullBit(c+633,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_10_valid));
        vcdp->fullBus(c+641,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_10_payload_cha_i),12);
        vcdp->fullBus(c+649,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_10_payload_cha_q),12);
        vcdp->fullBit(c+657,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_11_valid));
        vcdp->fullBus(c+665,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_11_payload_cha_i),12);
        vcdp->fullBus(c+673,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_11_payload_cha_q),12);
        vcdp->fullBit(c+681,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_12_valid));
        vcdp->fullBus(c+689,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_12_payload_cha_i),12);
        vcdp->fullBus(c+697,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_12_payload_cha_q),12);
        vcdp->fullBit(c+705,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_13_valid));
        vcdp->fullBus(c+713,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_13_payload_cha_i),12);
        vcdp->fullBus(c+721,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_13_payload_cha_q),12);
        vcdp->fullBit(c+729,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_14_valid));
        vcdp->fullBus(c+737,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_14_payload_cha_i),12);
        vcdp->fullBus(c+745,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_14_payload_cha_q),12);
        vcdp->fullBus(c+753,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_15),24);
        vcdp->fullBus(c+761,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_15),24);
        vcdp->fullBus(c+769,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_val_i),24);
        vcdp->fullBit(c+777,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_enable));
        vcdp->fullBus(c+785,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_0),24);
        vcdp->fullBus(c+793,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_1),24);
        vcdp->fullBus(c+801,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_2),24);
        vcdp->fullBus(c+809,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_3),24);
        vcdp->fullBus(c+817,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_4),24);
        vcdp->fullBus(c+825,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_5),24);
        vcdp->fullBus(c+833,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_6),24);
        vcdp->fullBus(c+841,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_7),24);
        vcdp->fullBus(c+849,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_8),24);
        vcdp->fullBus(c+857,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_9),24);
        vcdp->fullBus(c+865,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_10),24);
        vcdp->fullBus(c+873,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_11),24);
        vcdp->fullBus(c+881,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_12),24);
        vcdp->fullBus(c+889,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_13),24);
        vcdp->fullBus(c+897,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_14),24);
        vcdp->fullBus(c+905,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_val_q),24);
        vcdp->fullBus(c+913,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_0),24);
        vcdp->fullBus(c+921,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_1),24);
        vcdp->fullBus(c+929,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_2),24);
        vcdp->fullBus(c+937,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_3),24);
        vcdp->fullBus(c+945,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_4),24);
        vcdp->fullBus(c+953,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_5),24);
        vcdp->fullBus(c+961,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_6),24);
        vcdp->fullBus(c+969,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_7),24);
        vcdp->fullBus(c+977,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_8),24);
        vcdp->fullBus(c+985,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_9),24);
        vcdp->fullBus(c+993,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_10),24);
        vcdp->fullBus(c+1001,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_11),24);
        vcdp->fullBus(c+1009,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_12),24);
        vcdp->fullBus(c+1017,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_13),24);
        vcdp->fullBus(c+1025,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_14),24);
        vcdp->fullBus(c+1033,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_i),24);
        vcdp->fullBus(c+1041,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_q),24);
        vcdp->fullBit(c+1049,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_result_valid_1));
        vcdp->fullBus(c+1057,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_i),24);
        vcdp->fullBus(c+1065,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_q),24);
        vcdp->fullBit(c+1073,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid));
        vcdp->fullBus(c+1081,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_i_regNext),24);
        vcdp->fullBus(c+1089,((0xfffffU & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_i_regNext 
                                           >> 4U))),20);
        vcdp->fullBus(c+1097,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_q_regNext),24);
        vcdp->fullBus(c+1105,((0xfffffU & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_q_regNext 
                                           >> 4U))),20);
        vcdp->fullBus(c+1113,(vlTOPp->min_plateau),8);
        vcdp->fullBit(c+1121,(vlTOPp->pkg_detected));
        vcdp->fullBit(c+1129,(vlTOPp->raw_data_valid));
        vcdp->fullBus(c+1137,(vlTOPp->raw_data_payload_cha_i),12);
        vcdp->fullBus(c+1145,(vlTOPp->raw_data_payload_cha_q),12);
        vcdp->fullBit(c+1153,(vlTOPp->raw_data_out_valid));
        vcdp->fullBus(c+1161,(vlTOPp->raw_data_out_payload_cha_i),12);
        vcdp->fullBus(c+1169,(vlTOPp->raw_data_out_payload_cha_q),12);
        vcdp->fullBit(c+1177,(vlTOPp->corr_result_valid));
        vcdp->fullQuad(c+1185,(vlTOPp->corr_result_payload_cha_i),36);
        vcdp->fullQuad(c+1201,(vlTOPp->corr_result_payload_cha_q),36);
        vcdp->fullBit(c+1217,(vlTOPp->clk));
        vcdp->fullBit(c+1225,(vlTOPp->reset));
        vcdp->fullBus(c+1233,((0xffffffU & VL_MULS_III(24,24,24, 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,12, (IData)(vlTOPp->raw_data_payload_cha_i))), 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,12, (IData)(vlTOPp->raw_data_payload_cha_i)))))),24);
        vcdp->fullBus(c+1241,((0xffffffU & VL_MULS_III(24,24,24, 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,12, (IData)(vlTOPp->raw_data_payload_cha_q))), 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,12, (IData)(vlTOPp->raw_data_payload_cha_q)))))),24);
    }
}
