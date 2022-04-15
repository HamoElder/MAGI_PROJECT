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
        vcdp->declBus(c+993,"min_plateau", false,-1, 7,0);
        vcdp->declBit(c+1001,"pkg_detected", false,-1);
        vcdp->declBit(c+1009,"raw_data_valid", false,-1);
        vcdp->declBus(c+1017,"raw_data_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+1025,"raw_data_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+1033,"raw_data_out_valid", false,-1);
        vcdp->declBus(c+1041,"raw_data_out_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+1049,"raw_data_out_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+1057,"clk", false,-1);
        vcdp->declBit(c+1065,"reset", false,-1);
        vcdp->declBus(c+993,"PreambleDetector min_plateau", false,-1, 7,0);
        vcdp->declBit(c+1001,"PreambleDetector pkg_detected", false,-1);
        vcdp->declBit(c+1009,"PreambleDetector raw_data_valid", false,-1);
        vcdp->declBus(c+1017,"PreambleDetector raw_data_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+1025,"PreambleDetector raw_data_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+1033,"PreambleDetector raw_data_out_valid", false,-1);
        vcdp->declBus(c+1041,"PreambleDetector raw_data_out_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+1049,"PreambleDetector raw_data_out_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+1057,"PreambleDetector clk", false,-1);
        vcdp->declBit(c+1065,"PreambleDetector reset", false,-1);
        vcdp->declBit(c+529,"PreambleDetector powerMeter_1_power_result_valid", false,-1);
        vcdp->declBus(c+257,"PreambleDetector powerMeter_1_power_result_payload_cha_i", false,-1, 23,0);
        vcdp->declBus(c+265,"PreambleDetector powerMeter_1_power_result_payload_cha_q", false,-1, 23,0);
        vcdp->declBit(c+537,"PreambleDetector crossCorrelator_1_corr_result_valid", false,-1);
        vcdp->declQuad(c+545,"PreambleDetector crossCorrelator_1_corr_result_payload_cha_i", false,-1, 35,0);
        vcdp->declQuad(c+561,"PreambleDetector crossCorrelator_1_corr_result_payload_cha_q", false,-1, 35,0);
        vcdp->declBit(c+577,"PreambleDetector gate_pkg_det", false,-1);
        vcdp->declQuad(c+585,"PreambleDetector prod_avg_mag", false,-1, 35,0);
        vcdp->declBus(c+601,"PreambleDetector plateau_cnt", false,-1, 7,0);
        vcdp->declBit(c+609,"PreambleDetector when_PreambleDetector_l64", false,-1);
        vcdp->declBit(c+1009,"PreambleDetector powerMeter_1 raw_data_valid", false,-1);
        vcdp->declBus(c+1017,"PreambleDetector powerMeter_1 raw_data_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+1025,"PreambleDetector powerMeter_1 raw_data_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+529,"PreambleDetector powerMeter_1 power_result_valid", false,-1);
        vcdp->declBus(c+257,"PreambleDetector powerMeter_1 power_result_payload_cha_i", false,-1, 23,0);
        vcdp->declBus(c+265,"PreambleDetector powerMeter_1 power_result_payload_cha_q", false,-1, 23,0);
        vcdp->declBit(c+1057,"PreambleDetector powerMeter_1 clk", false,-1);
        vcdp->declBit(c+1065,"PreambleDetector powerMeter_1 reset", false,-1);
        vcdp->declBus(c+273,"PreambleDetector powerMeter_1 shiftRegister_4_output_1", false,-1, 19,0);
        vcdp->declBus(c+281,"PreambleDetector powerMeter_1 shiftRegister_5_output_1", false,-1, 19,0);
        vcdp->declBus(c+257,"PreambleDetector powerMeter_1 power_val_cha_i", false,-1, 23,0);
        vcdp->declBus(c+265,"PreambleDetector powerMeter_1 power_val_cha_q", false,-1, 23,0);
        vcdp->declBus(c+617,"PreambleDetector powerMeter_1 power_val_i", false,-1, 23,0);
        vcdp->declBus(c+625,"PreambleDetector powerMeter_1 power_val_q", false,-1, 23,0);
        vcdp->declBus(c+1073,"PreambleDetector powerMeter_1 sq_i", false,-1, 23,0);
        vcdp->declBus(c+1081,"PreambleDetector powerMeter_1 sq_q", false,-1, 23,0);
        vcdp->declBus(c+937,"PreambleDetector powerMeter_1 sq_i_regNext", false,-1, 23,0);
        vcdp->declBus(c+945,"PreambleDetector powerMeter_1 power_cal_i", false,-1, 19,0);
        vcdp->declBus(c+953,"PreambleDetector powerMeter_1 sq_q_regNext", false,-1, 23,0);
        vcdp->declBus(c+961,"PreambleDetector powerMeter_1 power_cal_q", false,-1, 19,0);
        vcdp->declBit(c+633,"PreambleDetector powerMeter_1 power_cal_valid", false,-1);
        vcdp->declBit(c+529,"PreambleDetector powerMeter_1 power_result_valid_1", false,-1);
        vcdp->declBus(c+945,"PreambleDetector powerMeter_1 shiftRegister_4 input_1", false,-1, 19,0);
        vcdp->declBus(c+273,"PreambleDetector powerMeter_1 shiftRegister_4 output_1", false,-1, 19,0);
        vcdp->declBit(c+633,"PreambleDetector powerMeter_1 shiftRegister_4 enable", false,-1);
        vcdp->declBit(c+1057,"PreambleDetector powerMeter_1 shiftRegister_4 clk", false,-1);
        vcdp->declBit(c+1065,"PreambleDetector powerMeter_1 shiftRegister_4 reset", false,-1);
        vcdp->declBus(c+289,"PreambleDetector powerMeter_1 shiftRegister_4 shift_reg_0", false,-1, 19,0);
        vcdp->declBus(c+297,"PreambleDetector powerMeter_1 shiftRegister_4 shift_reg_1", false,-1, 19,0);
        vcdp->declBus(c+305,"PreambleDetector powerMeter_1 shiftRegister_4 shift_reg_2", false,-1, 19,0);
        vcdp->declBus(c+313,"PreambleDetector powerMeter_1 shiftRegister_4 shift_reg_3", false,-1, 19,0);
        vcdp->declBus(c+321,"PreambleDetector powerMeter_1 shiftRegister_4 shift_reg_4", false,-1, 19,0);
        vcdp->declBus(c+329,"PreambleDetector powerMeter_1 shiftRegister_4 shift_reg_5", false,-1, 19,0);
        vcdp->declBus(c+337,"PreambleDetector powerMeter_1 shiftRegister_4 shift_reg_6", false,-1, 19,0);
        vcdp->declBus(c+345,"PreambleDetector powerMeter_1 shiftRegister_4 shift_reg_7", false,-1, 19,0);
        vcdp->declBus(c+353,"PreambleDetector powerMeter_1 shiftRegister_4 shift_reg_8", false,-1, 19,0);
        vcdp->declBus(c+361,"PreambleDetector powerMeter_1 shiftRegister_4 shift_reg_9", false,-1, 19,0);
        vcdp->declBus(c+369,"PreambleDetector powerMeter_1 shiftRegister_4 shift_reg_10", false,-1, 19,0);
        vcdp->declBus(c+377,"PreambleDetector powerMeter_1 shiftRegister_4 shift_reg_11", false,-1, 19,0);
        vcdp->declBus(c+385,"PreambleDetector powerMeter_1 shiftRegister_4 shift_reg_12", false,-1, 19,0);
        vcdp->declBus(c+393,"PreambleDetector powerMeter_1 shiftRegister_4 shift_reg_13", false,-1, 19,0);
        vcdp->declBus(c+401,"PreambleDetector powerMeter_1 shiftRegister_4 shift_reg_14", false,-1, 19,0);
        vcdp->declBus(c+273,"PreambleDetector powerMeter_1 shiftRegister_4 shift_reg_15", false,-1, 19,0);
        vcdp->declBus(c+961,"PreambleDetector powerMeter_1 shiftRegister_5 input_1", false,-1, 19,0);
        vcdp->declBus(c+281,"PreambleDetector powerMeter_1 shiftRegister_5 output_1", false,-1, 19,0);
        vcdp->declBit(c+633,"PreambleDetector powerMeter_1 shiftRegister_5 enable", false,-1);
        vcdp->declBit(c+1057,"PreambleDetector powerMeter_1 shiftRegister_5 clk", false,-1);
        vcdp->declBit(c+1065,"PreambleDetector powerMeter_1 shiftRegister_5 reset", false,-1);
        vcdp->declBus(c+409,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_0", false,-1, 19,0);
        vcdp->declBus(c+417,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_1", false,-1, 19,0);
        vcdp->declBus(c+425,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_2", false,-1, 19,0);
        vcdp->declBus(c+433,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_3", false,-1, 19,0);
        vcdp->declBus(c+441,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_4", false,-1, 19,0);
        vcdp->declBus(c+449,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_5", false,-1, 19,0);
        vcdp->declBus(c+457,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_6", false,-1, 19,0);
        vcdp->declBus(c+465,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_7", false,-1, 19,0);
        vcdp->declBus(c+473,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_8", false,-1, 19,0);
        vcdp->declBus(c+481,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_9", false,-1, 19,0);
        vcdp->declBus(c+489,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_10", false,-1, 19,0);
        vcdp->declBus(c+497,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_11", false,-1, 19,0);
        vcdp->declBus(c+505,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_12", false,-1, 19,0);
        vcdp->declBus(c+513,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_13", false,-1, 19,0);
        vcdp->declBus(c+521,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_14", false,-1, 19,0);
        vcdp->declBus(c+281,"PreambleDetector powerMeter_1 shiftRegister_5 shift_reg_15", false,-1, 19,0);
        vcdp->declBit(c+1009,"PreambleDetector crossCorrelator_1 raw_data_valid", false,-1);
        vcdp->declBus(c+1017,"PreambleDetector crossCorrelator_1 raw_data_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+1025,"PreambleDetector crossCorrelator_1 raw_data_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+537,"PreambleDetector crossCorrelator_1 corr_result_valid", false,-1);
        vcdp->declQuad(c+545,"PreambleDetector crossCorrelator_1 corr_result_payload_cha_i", false,-1, 35,0);
        vcdp->declQuad(c+561,"PreambleDetector crossCorrelator_1 corr_result_payload_cha_q", false,-1, 35,0);
        vcdp->declBit(c+1057,"PreambleDetector crossCorrelator_1 clk", false,-1);
        vcdp->declBit(c+1065,"PreambleDetector crossCorrelator_1 reset", false,-1);
        vcdp->declBit(c+537,"PreambleDetector crossCorrelator_1 corr_core_corr_result_valid", false,-1);
        vcdp->declQuad(c+545,"PreambleDetector crossCorrelator_1 corr_core_corr_result_payload_cha_i", false,-1, 35,0);
        vcdp->declQuad(c+561,"PreambleDetector crossCorrelator_1 corr_core_corr_result_payload_cha_q", false,-1, 35,0);
        vcdp->declBus(c+985,"PreambleDetector crossCorrelator_1 cnt", false,-1, 4,0);
        vcdp->declBus(c+969,"PreambleDetector crossCorrelator_1 iq_cursor_cha_i", false,-1, 11,0);
        vcdp->declBus(c+977,"PreambleDetector crossCorrelator_1 iq_cursor_cha_q", false,-1, 11,0);
        {int i; for (i=0; i<16; i++) {
                vcdp->declBus(c+1+i*1,"PreambleDetector crossCorrelator_1 I_mem", true,(i+0), 11,0);}}
        {int i; for (i=0; i<16; i++) {
                vcdp->declBus(c+129+i*1,"PreambleDetector crossCorrelator_1 Q_mem", true,(i+0), 11,0);}}
        vcdp->declBit(c+1009,"PreambleDetector crossCorrelator_1 corr_core raw_data_0_valid", false,-1);
        vcdp->declBus(c+1017,"PreambleDetector crossCorrelator_1 corr_core raw_data_0_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+1025,"PreambleDetector crossCorrelator_1 corr_core raw_data_0_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+1009,"PreambleDetector crossCorrelator_1 corr_core raw_data_1_valid", false,-1);
        vcdp->declBus(c+969,"PreambleDetector crossCorrelator_1 corr_core raw_data_1_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+977,"PreambleDetector crossCorrelator_1 corr_core raw_data_1_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+537,"PreambleDetector crossCorrelator_1 corr_core corr_result_valid", false,-1);
        vcdp->declQuad(c+545,"PreambleDetector crossCorrelator_1 corr_core corr_result_payload_cha_i", false,-1, 35,0);
        vcdp->declQuad(c+561,"PreambleDetector crossCorrelator_1 corr_core corr_result_payload_cha_q", false,-1, 35,0);
        vcdp->declBit(c+1057,"PreambleDetector crossCorrelator_1 corr_core clk", false,-1);
        vcdp->declBit(c+1065,"PreambleDetector crossCorrelator_1 corr_core reset", false,-1);
        vcdp->declBus(c+641,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_4_output_1", false,-1, 23,0);
        vcdp->declBus(c+649,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_5_output_1", false,-1, 23,0);
        vcdp->declQuad(c+545,"PreambleDetector crossCorrelator_1 corr_core corr_val_i", false,-1, 35,0);
        vcdp->declQuad(c+561,"PreambleDetector crossCorrelator_1 corr_core corr_val_q", false,-1, 35,0);
        vcdp->declBus(c+657,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_4 input_1", false,-1, 23,0);
        vcdp->declBus(c+641,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_4 output_1", false,-1, 23,0);
        vcdp->declBit(c+665,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_4 enable", false,-1);
        vcdp->declBit(c+1057,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_4 clk", false,-1);
        vcdp->declBit(c+1065,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_4 reset", false,-1);
        vcdp->declBus(c+673,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_4 shift_reg_0", false,-1, 23,0);
        vcdp->declBus(c+681,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_4 shift_reg_1", false,-1, 23,0);
        vcdp->declBus(c+689,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_4 shift_reg_2", false,-1, 23,0);
        vcdp->declBus(c+697,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_4 shift_reg_3", false,-1, 23,0);
        vcdp->declBus(c+705,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_4 shift_reg_4", false,-1, 23,0);
        vcdp->declBus(c+713,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_4 shift_reg_5", false,-1, 23,0);
        vcdp->declBus(c+721,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_4 shift_reg_6", false,-1, 23,0);
        vcdp->declBus(c+729,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_4 shift_reg_7", false,-1, 23,0);
        vcdp->declBus(c+737,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_4 shift_reg_8", false,-1, 23,0);
        vcdp->declBus(c+745,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_4 shift_reg_9", false,-1, 23,0);
        vcdp->declBus(c+753,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_4 shift_reg_10", false,-1, 23,0);
        vcdp->declBus(c+761,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_4 shift_reg_11", false,-1, 23,0);
        vcdp->declBus(c+769,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_4 shift_reg_12", false,-1, 23,0);
        vcdp->declBus(c+777,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_4 shift_reg_13", false,-1, 23,0);
        vcdp->declBus(c+785,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_4 shift_reg_14", false,-1, 23,0);
        vcdp->declBus(c+793,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_4 shift_reg_15", false,-1, 23,0);
        vcdp->declBus(c+641,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_4 shift_reg_16", false,-1, 23,0);
        vcdp->declBus(c+801,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_5 input_1", false,-1, 23,0);
        vcdp->declBus(c+649,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_5 output_1", false,-1, 23,0);
        vcdp->declBit(c+665,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_5 enable", false,-1);
        vcdp->declBit(c+1057,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_5 clk", false,-1);
        vcdp->declBit(c+1065,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_5 reset", false,-1);
        vcdp->declBus(c+809,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_5 shift_reg_0", false,-1, 23,0);
        vcdp->declBus(c+817,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_5 shift_reg_1", false,-1, 23,0);
        vcdp->declBus(c+825,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_5 shift_reg_2", false,-1, 23,0);
        vcdp->declBus(c+833,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_5 shift_reg_3", false,-1, 23,0);
        vcdp->declBus(c+841,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_5 shift_reg_4", false,-1, 23,0);
        vcdp->declBus(c+849,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_5 shift_reg_5", false,-1, 23,0);
        vcdp->declBus(c+857,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_5 shift_reg_6", false,-1, 23,0);
        vcdp->declBus(c+865,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_5 shift_reg_7", false,-1, 23,0);
        vcdp->declBus(c+873,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_5 shift_reg_8", false,-1, 23,0);
        vcdp->declBus(c+881,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_5 shift_reg_9", false,-1, 23,0);
        vcdp->declBus(c+889,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_5 shift_reg_10", false,-1, 23,0);
        vcdp->declBus(c+897,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_5 shift_reg_11", false,-1, 23,0);
        vcdp->declBus(c+905,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_5 shift_reg_12", false,-1, 23,0);
        vcdp->declBus(c+913,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_5 shift_reg_13", false,-1, 23,0);
        vcdp->declBus(c+921,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_5 shift_reg_14", false,-1, 23,0);
        vcdp->declBus(c+929,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_5 shift_reg_15", false,-1, 23,0);
        vcdp->declBus(c+649,"PreambleDetector crossCorrelator_1 corr_core shiftRegister_5 shift_reg_16", false,-1, 23,0);
    }
}

void VPreambleDetector::traceFullThis__1(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[0]),12);
        vcdp->fullBus(c+2,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[1]),12);
        vcdp->fullBus(c+3,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[2]),12);
        vcdp->fullBus(c+4,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[3]),12);
        vcdp->fullBus(c+5,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[4]),12);
        vcdp->fullBus(c+6,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[5]),12);
        vcdp->fullBus(c+7,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[6]),12);
        vcdp->fullBus(c+8,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[7]),12);
        vcdp->fullBus(c+9,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[8]),12);
        vcdp->fullBus(c+10,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[9]),12);
        vcdp->fullBus(c+11,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[10]),12);
        vcdp->fullBus(c+12,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[11]),12);
        vcdp->fullBus(c+13,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[12]),12);
        vcdp->fullBus(c+14,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[13]),12);
        vcdp->fullBus(c+15,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[14]),12);
        vcdp->fullBus(c+16,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[15]),12);
        vcdp->fullBus(c+129,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[0]),12);
        vcdp->fullBus(c+130,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[1]),12);
        vcdp->fullBus(c+131,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[2]),12);
        vcdp->fullBus(c+132,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[3]),12);
        vcdp->fullBus(c+133,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[4]),12);
        vcdp->fullBus(c+134,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[5]),12);
        vcdp->fullBus(c+135,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[6]),12);
        vcdp->fullBus(c+136,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[7]),12);
        vcdp->fullBus(c+137,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[8]),12);
        vcdp->fullBus(c+138,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[9]),12);
        vcdp->fullBus(c+139,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[10]),12);
        vcdp->fullBus(c+140,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[11]),12);
        vcdp->fullBus(c+141,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[12]),12);
        vcdp->fullBus(c+142,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[13]),12);
        vcdp->fullBus(c+143,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[14]),12);
        vcdp->fullBus(c+144,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[15]),12);
        vcdp->fullBus(c+257,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_i),24);
        vcdp->fullBus(c+265,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_q),24);
        vcdp->fullBus(c+273,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_15),20);
        vcdp->fullBus(c+281,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_15),20);
        vcdp->fullBus(c+289,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_0),20);
        vcdp->fullBus(c+297,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_1),20);
        vcdp->fullBus(c+305,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_2),20);
        vcdp->fullBus(c+313,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_3),20);
        vcdp->fullBus(c+321,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_4),20);
        vcdp->fullBus(c+329,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_5),20);
        vcdp->fullBus(c+337,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_6),20);
        vcdp->fullBus(c+345,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_7),20);
        vcdp->fullBus(c+353,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_8),20);
        vcdp->fullBus(c+361,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_9),20);
        vcdp->fullBus(c+369,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_10),20);
        vcdp->fullBus(c+377,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_11),20);
        vcdp->fullBus(c+385,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_12),20);
        vcdp->fullBus(c+393,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_13),20);
        vcdp->fullBus(c+401,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_14),20);
        vcdp->fullBus(c+409,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_0),20);
        vcdp->fullBus(c+417,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_1),20);
        vcdp->fullBus(c+425,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_2),20);
        vcdp->fullBus(c+433,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_3),20);
        vcdp->fullBus(c+441,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_4),20);
        vcdp->fullBus(c+449,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_5),20);
        vcdp->fullBus(c+457,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_6),20);
        vcdp->fullBus(c+465,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_7),20);
        vcdp->fullBus(c+473,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_8),20);
        vcdp->fullBus(c+481,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_9),20);
        vcdp->fullBus(c+489,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_10),20);
        vcdp->fullBus(c+497,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_11),20);
        vcdp->fullBus(c+505,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_12),20);
        vcdp->fullBus(c+513,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_13),20);
        vcdp->fullBus(c+521,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_14),20);
        vcdp->fullBit(c+529,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_result_valid_1));
        vcdp->fullBit(c+537,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_result_valid));
        vcdp->fullQuad(c+545,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__corr_val_i),36);
        vcdp->fullQuad(c+561,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__corr_val_q),36);
        vcdp->fullBit(c+577,(vlTOPp->PreambleDetector__DOT__gate_pkg_det));
        vcdp->fullQuad(c+585,(vlTOPp->PreambleDetector__DOT__prod_avg_mag),36);
        vcdp->fullBus(c+601,(vlTOPp->PreambleDetector__DOT__plateau_cnt),8);
        vcdp->fullBit(c+609,((0xffU > (IData)(vlTOPp->PreambleDetector__DOT__plateau_cnt))));
        vcdp->fullBus(c+617,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_i),24);
        vcdp->fullBus(c+625,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_q),24);
        vcdp->fullBit(c+633,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid));
        vcdp->fullBus(c+641,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16),24);
        vcdp->fullBus(c+649,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_16),24);
        vcdp->fullBus(c+657,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_val_i),24);
        vcdp->fullBit(c+665,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable));
        vcdp->fullBus(c+673,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0),24);
        vcdp->fullBus(c+681,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1),24);
        vcdp->fullBus(c+689,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2),24);
        vcdp->fullBus(c+697,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3),24);
        vcdp->fullBus(c+705,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4),24);
        vcdp->fullBus(c+713,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5),24);
        vcdp->fullBus(c+721,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6),24);
        vcdp->fullBus(c+729,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7),24);
        vcdp->fullBus(c+737,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8),24);
        vcdp->fullBus(c+745,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9),24);
        vcdp->fullBus(c+753,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10),24);
        vcdp->fullBus(c+761,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11),24);
        vcdp->fullBus(c+769,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12),24);
        vcdp->fullBus(c+777,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13),24);
        vcdp->fullBus(c+785,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14),24);
        vcdp->fullBus(c+793,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15),24);
        vcdp->fullBus(c+801,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_val_q),24);
        vcdp->fullBus(c+809,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_0),24);
        vcdp->fullBus(c+817,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_1),24);
        vcdp->fullBus(c+825,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_2),24);
        vcdp->fullBus(c+833,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_3),24);
        vcdp->fullBus(c+841,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_4),24);
        vcdp->fullBus(c+849,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_5),24);
        vcdp->fullBus(c+857,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_6),24);
        vcdp->fullBus(c+865,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_7),24);
        vcdp->fullBus(c+873,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_8),24);
        vcdp->fullBus(c+881,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_9),24);
        vcdp->fullBus(c+889,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_10),24);
        vcdp->fullBus(c+897,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_11),24);
        vcdp->fullBus(c+905,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_12),24);
        vcdp->fullBus(c+913,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_13),24);
        vcdp->fullBus(c+921,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_14),24);
        vcdp->fullBus(c+929,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_15),24);
        vcdp->fullBus(c+937,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_i_regNext),24);
        vcdp->fullBus(c+945,((0xfffffU & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_i_regNext 
                                          >> 4U))),20);
        vcdp->fullBus(c+953,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_q_regNext),24);
        vcdp->fullBus(c+961,((0xfffffU & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_q_regNext 
                                          >> 4U))),20);
        vcdp->fullBus(c+969,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT___zz_I_mem_port0),12);
        vcdp->fullBus(c+977,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT___zz_Q_mem_port0),12);
        vcdp->fullBus(c+985,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__cnt),5);
        vcdp->fullBus(c+993,(vlTOPp->min_plateau),8);
        vcdp->fullBit(c+1001,(vlTOPp->pkg_detected));
        vcdp->fullBit(c+1009,(vlTOPp->raw_data_valid));
        vcdp->fullBus(c+1017,(vlTOPp->raw_data_payload_cha_i),12);
        vcdp->fullBus(c+1025,(vlTOPp->raw_data_payload_cha_q),12);
        vcdp->fullBit(c+1033,(vlTOPp->raw_data_out_valid));
        vcdp->fullBus(c+1041,(vlTOPp->raw_data_out_payload_cha_i),12);
        vcdp->fullBus(c+1049,(vlTOPp->raw_data_out_payload_cha_q),12);
        vcdp->fullBit(c+1057,(vlTOPp->clk));
        vcdp->fullBit(c+1065,(vlTOPp->reset));
        vcdp->fullBus(c+1073,((0xffffffU & VL_MULS_III(24,24,24, 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,12, (IData)(vlTOPp->raw_data_payload_cha_i))), 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,12, (IData)(vlTOPp->raw_data_payload_cha_i)))))),24);
        vcdp->fullBus(c+1081,((0xffffffU & VL_MULS_III(24,24,24, 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,12, (IData)(vlTOPp->raw_data_payload_cha_q))), 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,12, (IData)(vlTOPp->raw_data_payload_cha_q)))))),24);
    }
}
