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
        vcdp->declBit(c+1569,"raw_data_valid", false,-1);
        vcdp->declBus(c+1577,"raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1585,"raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1593,"raw_data_out_valid", false,-1);
        vcdp->declBus(c+1601,"raw_data_out_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1609,"raw_data_out_payload_cha_q", false,-1, 15,0);
        vcdp->declBus(c+1617,"gate_threshold", false,-1, 31,0);
        vcdp->declBit(c+1625,"pkg_detected", false,-1);
        vcdp->declBit(c+1633,"clk", false,-1);
        vcdp->declBit(c+1641,"reset", false,-1);
        vcdp->declBit(c+1569,"PreambleDetector raw_data_valid", false,-1);
        vcdp->declBus(c+1577,"PreambleDetector raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1585,"PreambleDetector raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1593,"PreambleDetector raw_data_out_valid", false,-1);
        vcdp->declBus(c+1601,"PreambleDetector raw_data_out_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1609,"PreambleDetector raw_data_out_payload_cha_q", false,-1, 15,0);
        vcdp->declBus(c+1617,"PreambleDetector gate_threshold", false,-1, 31,0);
        vcdp->declBit(c+1625,"PreambleDetector pkg_detected", false,-1);
        vcdp->declBit(c+1633,"PreambleDetector clk", false,-1);
        vcdp->declBit(c+1641,"PreambleDetector reset", false,-1);
        vcdp->declBit(c+25,"PreambleDetector powerMeter_1_power_result_valid", false,-1);
        vcdp->declBus(c+9,"PreambleDetector powerMeter_1_power_result_payload_cha_i", false,-1, 31,0);
        vcdp->declBus(c+17,"PreambleDetector powerMeter_1_power_result_payload_cha_q", false,-1, 31,0);
        vcdp->declBit(c+33,"PreambleDetector autoCorrelator_1_corr_result_valid", false,-1);
        vcdp->declBus(c+41,"PreambleDetector autoCorrelator_1_corr_result_payload_cha_i", false,-1, 31,0);
        vcdp->declBus(c+49,"PreambleDetector autoCorrelator_1_corr_result_payload_cha_q", false,-1, 31,0);
        vcdp->declBit(c+57,"PreambleDetector gate_pkg_det", false,-1);
        vcdp->declBus(c+65,"PreambleDetector prod_avg_mag", false,-1, 31,0);
        vcdp->declBit(c+73,"PreambleDetector power_pkg_det", false,-1);
        vcdp->declBit(c+1569,"PreambleDetector powerMeter_1 raw_data_valid", false,-1);
        vcdp->declBus(c+1577,"PreambleDetector powerMeter_1 raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1585,"PreambleDetector powerMeter_1 raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+25,"PreambleDetector powerMeter_1 power_result_valid", false,-1);
        vcdp->declBus(c+9,"PreambleDetector powerMeter_1 power_result_payload_cha_i", false,-1, 31,0);
        vcdp->declBus(c+17,"PreambleDetector powerMeter_1 power_result_payload_cha_q", false,-1, 31,0);
        vcdp->declBit(c+1633,"PreambleDetector powerMeter_1 clk", false,-1);
        vcdp->declBit(c+1641,"PreambleDetector powerMeter_1 reset", false,-1);
        vcdp->declBus(c+81,"PreambleDetector powerMeter_1 shiftRegisterE_5_output_1", false,-1, 26,0);
        vcdp->declBus(c+89,"PreambleDetector powerMeter_1 shiftRegisterE_6_output_1", false,-1, 26,0);
        vcdp->declBus(c+9,"PreambleDetector powerMeter_1 power_val_cha_i", false,-1, 31,0);
        vcdp->declBus(c+17,"PreambleDetector powerMeter_1 power_val_cha_q", false,-1, 31,0);
        vcdp->declBus(c+97,"PreambleDetector powerMeter_1 power_val_i", false,-1, 31,0);
        vcdp->declBus(c+105,"PreambleDetector powerMeter_1 power_val_q", false,-1, 31,0);
        vcdp->declBus(c+1649,"PreambleDetector powerMeter_1 sq_i", false,-1, 31,0);
        vcdp->declBus(c+1657,"PreambleDetector powerMeter_1 sq_q", false,-1, 31,0);
        vcdp->declBus(c+1537,"PreambleDetector powerMeter_1 sq_i_regNext", false,-1, 31,0);
        vcdp->declBus(c+1545,"PreambleDetector powerMeter_1 power_cal_i", false,-1, 26,0);
        vcdp->declBus(c+1553,"PreambleDetector powerMeter_1 sq_q_regNext", false,-1, 31,0);
        vcdp->declBus(c+1561,"PreambleDetector powerMeter_1 power_cal_q", false,-1, 26,0);
        vcdp->declBit(c+113,"PreambleDetector powerMeter_1 power_cal_valid", false,-1);
        vcdp->declBit(c+25,"PreambleDetector powerMeter_1 power_result_valid_1", false,-1);
        vcdp->declBus(c+1545,"PreambleDetector powerMeter_1 shiftRegisterE_5 input_1", false,-1, 26,0);
        vcdp->declBus(c+81,"PreambleDetector powerMeter_1 shiftRegisterE_5 output_1", false,-1, 26,0);
        vcdp->declBit(c+113,"PreambleDetector powerMeter_1 shiftRegisterE_5 enable", false,-1);
        vcdp->declBit(c+1633,"PreambleDetector powerMeter_1 shiftRegisterE_5 clk", false,-1);
        vcdp->declBit(c+1641,"PreambleDetector powerMeter_1 shiftRegisterE_5 reset", false,-1);
        vcdp->declBus(c+121,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_0", false,-1, 26,0);
        vcdp->declBus(c+129,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_1", false,-1, 26,0);
        vcdp->declBus(c+137,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_2", false,-1, 26,0);
        vcdp->declBus(c+145,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_3", false,-1, 26,0);
        vcdp->declBus(c+153,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_4", false,-1, 26,0);
        vcdp->declBus(c+161,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_5", false,-1, 26,0);
        vcdp->declBus(c+169,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_6", false,-1, 26,0);
        vcdp->declBus(c+177,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_7", false,-1, 26,0);
        vcdp->declBus(c+185,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_8", false,-1, 26,0);
        vcdp->declBus(c+193,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_9", false,-1, 26,0);
        vcdp->declBus(c+201,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_10", false,-1, 26,0);
        vcdp->declBus(c+209,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_11", false,-1, 26,0);
        vcdp->declBus(c+217,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_12", false,-1, 26,0);
        vcdp->declBus(c+225,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_13", false,-1, 26,0);
        vcdp->declBus(c+233,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_14", false,-1, 26,0);
        vcdp->declBus(c+241,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_15", false,-1, 26,0);
        vcdp->declBus(c+249,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_16", false,-1, 26,0);
        vcdp->declBus(c+257,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_17", false,-1, 26,0);
        vcdp->declBus(c+265,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_18", false,-1, 26,0);
        vcdp->declBus(c+273,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_19", false,-1, 26,0);
        vcdp->declBus(c+281,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_20", false,-1, 26,0);
        vcdp->declBus(c+289,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_21", false,-1, 26,0);
        vcdp->declBus(c+297,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_22", false,-1, 26,0);
        vcdp->declBus(c+305,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_23", false,-1, 26,0);
        vcdp->declBus(c+313,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_24", false,-1, 26,0);
        vcdp->declBus(c+321,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_25", false,-1, 26,0);
        vcdp->declBus(c+329,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_26", false,-1, 26,0);
        vcdp->declBus(c+337,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_27", false,-1, 26,0);
        vcdp->declBus(c+345,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_28", false,-1, 26,0);
        vcdp->declBus(c+353,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_29", false,-1, 26,0);
        vcdp->declBus(c+361,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_30", false,-1, 26,0);
        vcdp->declBus(c+81,"PreambleDetector powerMeter_1 shiftRegisterE_5 shift_reg_31", false,-1, 26,0);
        vcdp->declBus(c+1561,"PreambleDetector powerMeter_1 shiftRegisterE_6 input_1", false,-1, 26,0);
        vcdp->declBus(c+89,"PreambleDetector powerMeter_1 shiftRegisterE_6 output_1", false,-1, 26,0);
        vcdp->declBit(c+113,"PreambleDetector powerMeter_1 shiftRegisterE_6 enable", false,-1);
        vcdp->declBit(c+1633,"PreambleDetector powerMeter_1 shiftRegisterE_6 clk", false,-1);
        vcdp->declBit(c+1641,"PreambleDetector powerMeter_1 shiftRegisterE_6 reset", false,-1);
        vcdp->declBus(c+369,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_0", false,-1, 26,0);
        vcdp->declBus(c+377,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_1", false,-1, 26,0);
        vcdp->declBus(c+385,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_2", false,-1, 26,0);
        vcdp->declBus(c+393,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_3", false,-1, 26,0);
        vcdp->declBus(c+401,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_4", false,-1, 26,0);
        vcdp->declBus(c+409,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_5", false,-1, 26,0);
        vcdp->declBus(c+417,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_6", false,-1, 26,0);
        vcdp->declBus(c+425,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_7", false,-1, 26,0);
        vcdp->declBus(c+433,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_8", false,-1, 26,0);
        vcdp->declBus(c+441,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_9", false,-1, 26,0);
        vcdp->declBus(c+449,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_10", false,-1, 26,0);
        vcdp->declBus(c+457,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_11", false,-1, 26,0);
        vcdp->declBus(c+465,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_12", false,-1, 26,0);
        vcdp->declBus(c+473,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_13", false,-1, 26,0);
        vcdp->declBus(c+481,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_14", false,-1, 26,0);
        vcdp->declBus(c+489,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_15", false,-1, 26,0);
        vcdp->declBus(c+497,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_16", false,-1, 26,0);
        vcdp->declBus(c+505,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_17", false,-1, 26,0);
        vcdp->declBus(c+513,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_18", false,-1, 26,0);
        vcdp->declBus(c+521,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_19", false,-1, 26,0);
        vcdp->declBus(c+529,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_20", false,-1, 26,0);
        vcdp->declBus(c+537,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_21", false,-1, 26,0);
        vcdp->declBus(c+545,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_22", false,-1, 26,0);
        vcdp->declBus(c+553,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_23", false,-1, 26,0);
        vcdp->declBus(c+561,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_24", false,-1, 26,0);
        vcdp->declBus(c+569,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_25", false,-1, 26,0);
        vcdp->declBus(c+577,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_26", false,-1, 26,0);
        vcdp->declBus(c+585,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_27", false,-1, 26,0);
        vcdp->declBus(c+593,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_28", false,-1, 26,0);
        vcdp->declBus(c+601,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_29", false,-1, 26,0);
        vcdp->declBus(c+609,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_30", false,-1, 26,0);
        vcdp->declBus(c+89,"PreambleDetector powerMeter_1 shiftRegisterE_6 shift_reg_31", false,-1, 26,0);
        vcdp->declBit(c+1569,"PreambleDetector autoCorrelator_1 raw_data_valid", false,-1);
        vcdp->declBus(c+1577,"PreambleDetector autoCorrelator_1 raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1585,"PreambleDetector autoCorrelator_1 raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+33,"PreambleDetector autoCorrelator_1 corr_result_valid", false,-1);
        vcdp->declBus(c+41,"PreambleDetector autoCorrelator_1 corr_result_payload_cha_i", false,-1, 31,0);
        vcdp->declBus(c+49,"PreambleDetector autoCorrelator_1 corr_result_payload_cha_q", false,-1, 31,0);
        vcdp->declBit(c+1633,"PreambleDetector autoCorrelator_1 clk", false,-1);
        vcdp->declBit(c+1641,"PreambleDetector autoCorrelator_1 reset", false,-1);
        vcdp->declBit(c+617,"PreambleDetector autoCorrelator_1 shiftRegisterE_5_output_valid", false,-1);
        vcdp->declBus(c+625,"PreambleDetector autoCorrelator_1 shiftRegisterE_5_output_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+633,"PreambleDetector autoCorrelator_1 shiftRegisterE_5_output_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+33,"PreambleDetector autoCorrelator_1 corr_core_corr_result_valid", false,-1);
        vcdp->declBus(c+41,"PreambleDetector autoCorrelator_1 corr_core_corr_result_payload_cha_i", false,-1, 31,0);
        vcdp->declBus(c+49,"PreambleDetector autoCorrelator_1 corr_core_corr_result_payload_cha_q", false,-1, 31,0);
        vcdp->declBit(c+1569,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 input_valid", false,-1);
        vcdp->declBus(c+1577,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 input_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1585,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 input_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+617,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 output_valid", false,-1);
        vcdp->declBus(c+625,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 output_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+633,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 output_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1569,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 enable", false,-1);
        vcdp->declBit(c+1633,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 clk", false,-1);
        vcdp->declBit(c+1641,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 reset", false,-1);
        vcdp->declBit(c+641,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_0_valid", false,-1);
        vcdp->declBus(c+649,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_0_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+657,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_0_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+665,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_1_valid", false,-1);
        vcdp->declBus(c+673,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_1_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+681,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_1_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+689,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_2_valid", false,-1);
        vcdp->declBus(c+697,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_2_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+705,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_2_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+713,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_3_valid", false,-1);
        vcdp->declBus(c+721,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_3_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+729,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_3_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+737,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_4_valid", false,-1);
        vcdp->declBus(c+745,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_4_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+753,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_4_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+761,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_5_valid", false,-1);
        vcdp->declBus(c+769,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_5_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+777,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_5_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+785,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_6_valid", false,-1);
        vcdp->declBus(c+793,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_6_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+801,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_6_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+809,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_7_valid", false,-1);
        vcdp->declBus(c+817,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_7_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+825,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_7_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+833,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_8_valid", false,-1);
        vcdp->declBus(c+841,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_8_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+849,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_8_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+857,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_9_valid", false,-1);
        vcdp->declBus(c+865,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_9_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+873,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_9_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+881,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_10_valid", false,-1);
        vcdp->declBus(c+889,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_10_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+897,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_10_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+905,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_11_valid", false,-1);
        vcdp->declBus(c+913,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_11_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+921,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_11_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+929,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_12_valid", false,-1);
        vcdp->declBus(c+937,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_12_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+945,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_12_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+953,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_13_valid", false,-1);
        vcdp->declBus(c+961,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_13_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+969,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_13_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+977,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_14_valid", false,-1);
        vcdp->declBus(c+985,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_14_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+993,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_14_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+617,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_15_valid", false,-1);
        vcdp->declBus(c+625,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_15_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+633,"PreambleDetector autoCorrelator_1 shiftRegisterE_5 shift_reg_15_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1569,"PreambleDetector autoCorrelator_1 corr_core raw_data_0_valid", false,-1);
        vcdp->declBus(c+1577,"PreambleDetector autoCorrelator_1 corr_core raw_data_0_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1585,"PreambleDetector autoCorrelator_1 corr_core raw_data_0_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+617,"PreambleDetector autoCorrelator_1 corr_core raw_data_1_valid", false,-1);
        vcdp->declBus(c+625,"PreambleDetector autoCorrelator_1 corr_core raw_data_1_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+633,"PreambleDetector autoCorrelator_1 corr_core raw_data_1_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+33,"PreambleDetector autoCorrelator_1 corr_core corr_result_valid", false,-1);
        vcdp->declBus(c+41,"PreambleDetector autoCorrelator_1 corr_core corr_result_payload_cha_i", false,-1, 31,0);
        vcdp->declBus(c+49,"PreambleDetector autoCorrelator_1 corr_core corr_result_payload_cha_q", false,-1, 31,0);
        vcdp->declBit(c+1633,"PreambleDetector autoCorrelator_1 corr_core clk", false,-1);
        vcdp->declBit(c+1641,"PreambleDetector autoCorrelator_1 corr_core reset", false,-1);
        vcdp->declBus(c+1001,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5_output_1", false,-1, 31,0);
        vcdp->declBus(c+1009,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6_output_1", false,-1, 31,0);
        vcdp->declBus(c+41,"PreambleDetector autoCorrelator_1 corr_core corr_val_i", false,-1, 31,0);
        vcdp->declBus(c+49,"PreambleDetector autoCorrelator_1 corr_core corr_val_q", false,-1, 31,0);
        vcdp->declBus(c+1,"PreambleDetector autoCorrelator_1 corr_core k1", false,-1, 31,0);
        vcdp->declBus(c+1665,"PreambleDetector autoCorrelator_1 corr_core k2", false,-1, 31,0);
        vcdp->declBus(c+1673,"PreambleDetector autoCorrelator_1 corr_core k3", false,-1, 31,0);
        vcdp->declBus(c+1017,"PreambleDetector autoCorrelator_1 corr_core mul_i", false,-1, 31,0);
        vcdp->declBus(c+1025,"PreambleDetector autoCorrelator_1 corr_core mul_q", false,-1, 31,0);
        vcdp->declBit(c+1033,"PreambleDetector autoCorrelator_1 corr_core mul_data_valid", false,-1);
        vcdp->declBit(c+33,"PreambleDetector autoCorrelator_1 corr_core corr_result_valid_1", false,-1);
        vcdp->declBus(c+1017,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 input_1", false,-1, 31,0);
        vcdp->declBus(c+1001,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 output_1", false,-1, 31,0);
        vcdp->declBit(c+1033,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 enable", false,-1);
        vcdp->declBit(c+1633,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 clk", false,-1);
        vcdp->declBit(c+1641,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 reset", false,-1);
        vcdp->declBus(c+1041,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_0", false,-1, 31,0);
        vcdp->declBus(c+1049,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_1", false,-1, 31,0);
        vcdp->declBus(c+1057,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_2", false,-1, 31,0);
        vcdp->declBus(c+1065,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_3", false,-1, 31,0);
        vcdp->declBus(c+1073,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_4", false,-1, 31,0);
        vcdp->declBus(c+1081,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_5", false,-1, 31,0);
        vcdp->declBus(c+1089,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_6", false,-1, 31,0);
        vcdp->declBus(c+1097,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_7", false,-1, 31,0);
        vcdp->declBus(c+1105,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_8", false,-1, 31,0);
        vcdp->declBus(c+1113,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_9", false,-1, 31,0);
        vcdp->declBus(c+1121,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_10", false,-1, 31,0);
        vcdp->declBus(c+1129,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_11", false,-1, 31,0);
        vcdp->declBus(c+1137,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_12", false,-1, 31,0);
        vcdp->declBus(c+1145,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_13", false,-1, 31,0);
        vcdp->declBus(c+1153,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_14", false,-1, 31,0);
        vcdp->declBus(c+1161,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_15", false,-1, 31,0);
        vcdp->declBus(c+1169,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_16", false,-1, 31,0);
        vcdp->declBus(c+1177,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_17", false,-1, 31,0);
        vcdp->declBus(c+1185,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_18", false,-1, 31,0);
        vcdp->declBus(c+1193,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_19", false,-1, 31,0);
        vcdp->declBus(c+1201,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_20", false,-1, 31,0);
        vcdp->declBus(c+1209,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_21", false,-1, 31,0);
        vcdp->declBus(c+1217,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_22", false,-1, 31,0);
        vcdp->declBus(c+1225,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_23", false,-1, 31,0);
        vcdp->declBus(c+1233,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_24", false,-1, 31,0);
        vcdp->declBus(c+1241,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_25", false,-1, 31,0);
        vcdp->declBus(c+1249,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_26", false,-1, 31,0);
        vcdp->declBus(c+1257,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_27", false,-1, 31,0);
        vcdp->declBus(c+1265,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_28", false,-1, 31,0);
        vcdp->declBus(c+1273,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_29", false,-1, 31,0);
        vcdp->declBus(c+1281,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_30", false,-1, 31,0);
        vcdp->declBus(c+1001,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_5 shift_reg_31", false,-1, 31,0);
        vcdp->declBus(c+1025,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 input_1", false,-1, 31,0);
        vcdp->declBus(c+1009,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 output_1", false,-1, 31,0);
        vcdp->declBit(c+1033,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 enable", false,-1);
        vcdp->declBit(c+1633,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 clk", false,-1);
        vcdp->declBit(c+1641,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 reset", false,-1);
        vcdp->declBus(c+1289,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_0", false,-1, 31,0);
        vcdp->declBus(c+1297,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_1", false,-1, 31,0);
        vcdp->declBus(c+1305,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_2", false,-1, 31,0);
        vcdp->declBus(c+1313,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_3", false,-1, 31,0);
        vcdp->declBus(c+1321,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_4", false,-1, 31,0);
        vcdp->declBus(c+1329,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_5", false,-1, 31,0);
        vcdp->declBus(c+1337,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_6", false,-1, 31,0);
        vcdp->declBus(c+1345,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_7", false,-1, 31,0);
        vcdp->declBus(c+1353,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_8", false,-1, 31,0);
        vcdp->declBus(c+1361,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_9", false,-1, 31,0);
        vcdp->declBus(c+1369,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_10", false,-1, 31,0);
        vcdp->declBus(c+1377,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_11", false,-1, 31,0);
        vcdp->declBus(c+1385,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_12", false,-1, 31,0);
        vcdp->declBus(c+1393,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_13", false,-1, 31,0);
        vcdp->declBus(c+1401,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_14", false,-1, 31,0);
        vcdp->declBus(c+1409,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_15", false,-1, 31,0);
        vcdp->declBus(c+1417,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_16", false,-1, 31,0);
        vcdp->declBus(c+1425,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_17", false,-1, 31,0);
        vcdp->declBus(c+1433,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_18", false,-1, 31,0);
        vcdp->declBus(c+1441,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_19", false,-1, 31,0);
        vcdp->declBus(c+1449,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_20", false,-1, 31,0);
        vcdp->declBus(c+1457,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_21", false,-1, 31,0);
        vcdp->declBus(c+1465,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_22", false,-1, 31,0);
        vcdp->declBus(c+1473,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_23", false,-1, 31,0);
        vcdp->declBus(c+1481,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_24", false,-1, 31,0);
        vcdp->declBus(c+1489,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_25", false,-1, 31,0);
        vcdp->declBus(c+1497,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_26", false,-1, 31,0);
        vcdp->declBus(c+1505,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_27", false,-1, 31,0);
        vcdp->declBus(c+1513,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_28", false,-1, 31,0);
        vcdp->declBus(c+1521,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_29", false,-1, 31,0);
        vcdp->declBus(c+1529,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_30", false,-1, 31,0);
        vcdp->declBus(c+1009,"PreambleDetector autoCorrelator_1 corr_core shiftRegisterE_6 shift_reg_31", false,-1, 31,0);
    }
}

void VPreambleDetector::traceFullThis__1(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__k1),32);
        vcdp->fullBus(c+9,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_i),32);
        vcdp->fullBus(c+17,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_q),32);
        vcdp->fullBit(c+25,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_result_valid_1));
        vcdp->fullBit(c+33,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_result_valid_1));
        vcdp->fullBus(c+41,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_i),32);
        vcdp->fullBus(c+49,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_q),32);
        vcdp->fullBit(c+57,(vlTOPp->PreambleDetector__DOT__gate_pkg_det));
        vcdp->fullBus(c+65,(vlTOPp->PreambleDetector__DOT__prod_avg_mag),32);
        vcdp->fullBit(c+73,(vlTOPp->PreambleDetector__DOT__power_pkg_det));
        vcdp->fullBus(c+81,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_31),27);
        vcdp->fullBus(c+89,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_31),27);
        vcdp->fullBus(c+97,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_i),32);
        vcdp->fullBus(c+105,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_q),32);
        vcdp->fullBit(c+113,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid));
        vcdp->fullBus(c+121,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_0),27);
        vcdp->fullBus(c+129,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_1),27);
        vcdp->fullBus(c+137,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_2),27);
        vcdp->fullBus(c+145,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_3),27);
        vcdp->fullBus(c+153,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_4),27);
        vcdp->fullBus(c+161,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_5),27);
        vcdp->fullBus(c+169,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_6),27);
        vcdp->fullBus(c+177,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_7),27);
        vcdp->fullBus(c+185,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_8),27);
        vcdp->fullBus(c+193,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_9),27);
        vcdp->fullBus(c+201,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_10),27);
        vcdp->fullBus(c+209,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_11),27);
        vcdp->fullBus(c+217,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_12),27);
        vcdp->fullBus(c+225,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_13),27);
        vcdp->fullBus(c+233,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_14),27);
        vcdp->fullBus(c+241,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_15),27);
        vcdp->fullBus(c+249,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_16),27);
        vcdp->fullBus(c+257,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_17),27);
        vcdp->fullBus(c+265,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_18),27);
        vcdp->fullBus(c+273,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_19),27);
        vcdp->fullBus(c+281,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_20),27);
        vcdp->fullBus(c+289,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_21),27);
        vcdp->fullBus(c+297,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_22),27);
        vcdp->fullBus(c+305,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_23),27);
        vcdp->fullBus(c+313,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_24),27);
        vcdp->fullBus(c+321,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_25),27);
        vcdp->fullBus(c+329,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_26),27);
        vcdp->fullBus(c+337,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_27),27);
        vcdp->fullBus(c+345,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_28),27);
        vcdp->fullBus(c+353,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_29),27);
        vcdp->fullBus(c+361,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_5__DOT__shift_reg_30),27);
        vcdp->fullBus(c+369,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_0),27);
        vcdp->fullBus(c+377,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_1),27);
        vcdp->fullBus(c+385,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_2),27);
        vcdp->fullBus(c+393,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_3),27);
        vcdp->fullBus(c+401,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_4),27);
        vcdp->fullBus(c+409,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_5),27);
        vcdp->fullBus(c+417,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_6),27);
        vcdp->fullBus(c+425,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_7),27);
        vcdp->fullBus(c+433,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_8),27);
        vcdp->fullBus(c+441,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_9),27);
        vcdp->fullBus(c+449,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_10),27);
        vcdp->fullBus(c+457,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_11),27);
        vcdp->fullBus(c+465,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_12),27);
        vcdp->fullBus(c+473,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_13),27);
        vcdp->fullBus(c+481,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_14),27);
        vcdp->fullBus(c+489,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_15),27);
        vcdp->fullBus(c+497,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_16),27);
        vcdp->fullBus(c+505,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_17),27);
        vcdp->fullBus(c+513,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_18),27);
        vcdp->fullBus(c+521,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_19),27);
        vcdp->fullBus(c+529,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_20),27);
        vcdp->fullBus(c+537,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_21),27);
        vcdp->fullBus(c+545,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_22),27);
        vcdp->fullBus(c+553,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_23),27);
        vcdp->fullBus(c+561,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_24),27);
        vcdp->fullBus(c+569,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_25),27);
        vcdp->fullBus(c+577,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_26),27);
        vcdp->fullBus(c+585,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_27),27);
        vcdp->fullBus(c+593,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_28),27);
        vcdp->fullBus(c+601,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_29),27);
        vcdp->fullBus(c+609,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegisterE_6__DOT__shift_reg_30),27);
        vcdp->fullBit(c+617,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_15_valid));
        vcdp->fullBus(c+625,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_15_payload_cha_i),16);
        vcdp->fullBus(c+633,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_15_payload_cha_q),16);
        vcdp->fullBit(c+641,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_0_valid));
        vcdp->fullBus(c+649,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_0_payload_cha_i),16);
        vcdp->fullBus(c+657,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_0_payload_cha_q),16);
        vcdp->fullBit(c+665,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_1_valid));
        vcdp->fullBus(c+673,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_1_payload_cha_i),16);
        vcdp->fullBus(c+681,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_1_payload_cha_q),16);
        vcdp->fullBit(c+689,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_2_valid));
        vcdp->fullBus(c+697,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_2_payload_cha_i),16);
        vcdp->fullBus(c+705,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_2_payload_cha_q),16);
        vcdp->fullBit(c+713,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_3_valid));
        vcdp->fullBus(c+721,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_3_payload_cha_i),16);
        vcdp->fullBus(c+729,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_3_payload_cha_q),16);
        vcdp->fullBit(c+737,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_4_valid));
        vcdp->fullBus(c+745,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_4_payload_cha_i),16);
        vcdp->fullBus(c+753,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_4_payload_cha_q),16);
        vcdp->fullBit(c+761,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_5_valid));
        vcdp->fullBus(c+769,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_5_payload_cha_i),16);
        vcdp->fullBus(c+777,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_5_payload_cha_q),16);
        vcdp->fullBit(c+785,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_6_valid));
        vcdp->fullBus(c+793,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_6_payload_cha_i),16);
        vcdp->fullBus(c+801,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_6_payload_cha_q),16);
        vcdp->fullBit(c+809,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_7_valid));
        vcdp->fullBus(c+817,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_7_payload_cha_i),16);
        vcdp->fullBus(c+825,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_7_payload_cha_q),16);
        vcdp->fullBit(c+833,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_8_valid));
        vcdp->fullBus(c+841,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_8_payload_cha_i),16);
        vcdp->fullBus(c+849,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_8_payload_cha_q),16);
        vcdp->fullBit(c+857,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_9_valid));
        vcdp->fullBus(c+865,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_9_payload_cha_i),16);
        vcdp->fullBus(c+873,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_9_payload_cha_q),16);
        vcdp->fullBit(c+881,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_10_valid));
        vcdp->fullBus(c+889,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_10_payload_cha_i),16);
        vcdp->fullBus(c+897,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_10_payload_cha_q),16);
        vcdp->fullBit(c+905,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_11_valid));
        vcdp->fullBus(c+913,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_11_payload_cha_i),16);
        vcdp->fullBus(c+921,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_11_payload_cha_q),16);
        vcdp->fullBit(c+929,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_12_valid));
        vcdp->fullBus(c+937,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_12_payload_cha_i),16);
        vcdp->fullBus(c+945,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_12_payload_cha_q),16);
        vcdp->fullBit(c+953,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_13_valid));
        vcdp->fullBus(c+961,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_13_payload_cha_i),16);
        vcdp->fullBus(c+969,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_13_payload_cha_q),16);
        vcdp->fullBit(c+977,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_14_valid));
        vcdp->fullBus(c+985,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_14_payload_cha_i),16);
        vcdp->fullBus(c+993,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_14_payload_cha_q),16);
        vcdp->fullBus(c+1001,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_31),32);
        vcdp->fullBus(c+1009,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_31),32);
        vcdp->fullBus(c+1017,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_i),32);
        vcdp->fullBus(c+1025,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_q),32);
        vcdp->fullBit(c+1033,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__mul_data_valid));
        vcdp->fullBus(c+1041,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_0),32);
        vcdp->fullBus(c+1049,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_1),32);
        vcdp->fullBus(c+1057,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_2),32);
        vcdp->fullBus(c+1065,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_3),32);
        vcdp->fullBus(c+1073,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_4),32);
        vcdp->fullBus(c+1081,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_5),32);
        vcdp->fullBus(c+1089,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_6),32);
        vcdp->fullBus(c+1097,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_7),32);
        vcdp->fullBus(c+1105,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_8),32);
        vcdp->fullBus(c+1113,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_9),32);
        vcdp->fullBus(c+1121,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_10),32);
        vcdp->fullBus(c+1129,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_11),32);
        vcdp->fullBus(c+1137,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_12),32);
        vcdp->fullBus(c+1145,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_13),32);
        vcdp->fullBus(c+1153,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_14),32);
        vcdp->fullBus(c+1161,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_15),32);
        vcdp->fullBus(c+1169,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_16),32);
        vcdp->fullBus(c+1177,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_17),32);
        vcdp->fullBus(c+1185,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_18),32);
        vcdp->fullBus(c+1193,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_19),32);
        vcdp->fullBus(c+1201,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_20),32);
        vcdp->fullBus(c+1209,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_21),32);
        vcdp->fullBus(c+1217,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_22),32);
        vcdp->fullBus(c+1225,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_23),32);
        vcdp->fullBus(c+1233,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_24),32);
        vcdp->fullBus(c+1241,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_25),32);
        vcdp->fullBus(c+1249,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_26),32);
        vcdp->fullBus(c+1257,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_27),32);
        vcdp->fullBus(c+1265,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_28),32);
        vcdp->fullBus(c+1273,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_29),32);
        vcdp->fullBus(c+1281,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_5__DOT__shift_reg_30),32);
        vcdp->fullBus(c+1289,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_0),32);
        vcdp->fullBus(c+1297,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_1),32);
        vcdp->fullBus(c+1305,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_2),32);
        vcdp->fullBus(c+1313,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_3),32);
        vcdp->fullBus(c+1321,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_4),32);
        vcdp->fullBus(c+1329,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_5),32);
        vcdp->fullBus(c+1337,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_6),32);
        vcdp->fullBus(c+1345,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_7),32);
        vcdp->fullBus(c+1353,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_8),32);
        vcdp->fullBus(c+1361,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_9),32);
        vcdp->fullBus(c+1369,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_10),32);
        vcdp->fullBus(c+1377,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_11),32);
        vcdp->fullBus(c+1385,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_12),32);
        vcdp->fullBus(c+1393,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_13),32);
        vcdp->fullBus(c+1401,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_14),32);
        vcdp->fullBus(c+1409,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_15),32);
        vcdp->fullBus(c+1417,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_16),32);
        vcdp->fullBus(c+1425,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_17),32);
        vcdp->fullBus(c+1433,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_18),32);
        vcdp->fullBus(c+1441,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_19),32);
        vcdp->fullBus(c+1449,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_20),32);
        vcdp->fullBus(c+1457,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_21),32);
        vcdp->fullBus(c+1465,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_22),32);
        vcdp->fullBus(c+1473,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_23),32);
        vcdp->fullBus(c+1481,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_24),32);
        vcdp->fullBus(c+1489,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_25),32);
        vcdp->fullBus(c+1497,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_26),32);
        vcdp->fullBus(c+1505,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_27),32);
        vcdp->fullBus(c+1513,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_28),32);
        vcdp->fullBus(c+1521,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_29),32);
        vcdp->fullBus(c+1529,(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegisterE_6__DOT__shift_reg_30),32);
        vcdp->fullBus(c+1537,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_i_regNext),32);
        vcdp->fullBus(c+1545,((0x7ffffffU & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_i_regNext 
                                             >> 5U))),27);
        vcdp->fullBus(c+1553,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_q_regNext),32);
        vcdp->fullBus(c+1561,((0x7ffffffU & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_q_regNext 
                                             >> 5U))),27);
        vcdp->fullBit(c+1569,(vlTOPp->raw_data_valid));
        vcdp->fullBus(c+1577,(vlTOPp->raw_data_payload_cha_i),16);
        vcdp->fullBus(c+1585,(vlTOPp->raw_data_payload_cha_q),16);
        vcdp->fullBit(c+1593,(vlTOPp->raw_data_out_valid));
        vcdp->fullBus(c+1601,(vlTOPp->raw_data_out_payload_cha_i),16);
        vcdp->fullBus(c+1609,(vlTOPp->raw_data_out_payload_cha_q),16);
        vcdp->fullBus(c+1617,(vlTOPp->gate_threshold),32);
        vcdp->fullBit(c+1625,(vlTOPp->pkg_detected));
        vcdp->fullBit(c+1633,(vlTOPp->clk));
        vcdp->fullBit(c+1641,(vlTOPp->reset));
        vcdp->fullBus(c+1649,(VL_MULS_III(32,32,32, 
                                          VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_i)), 
                                          VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_i)))),32);
        vcdp->fullBus(c+1657,(VL_MULS_III(32,32,32, 
                                          VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_q)), 
                                          VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_q)))),32);
        vcdp->fullBus(c+1665,(VL_MULS_III(32,32,32, 
                                          VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_i)), 
                                          VL_EXTENDS_II(32,16, 
                                                        (0xffffU 
                                                         & ((IData)(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_15_payload_cha_q) 
                                                            + (IData)(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_15_payload_cha_i)))))),32);
        vcdp->fullBus(c+1673,(VL_MULS_III(32,32,32, 
                                          VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_q)), 
                                          VL_EXTENDS_II(32,16, 
                                                        (0xffffU 
                                                         & ((IData)(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_15_payload_cha_i) 
                                                            - (IData)(vlTOPp->PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegisterE_5__DOT__shift_reg_15_payload_cha_q)))))),32);
    }
}
