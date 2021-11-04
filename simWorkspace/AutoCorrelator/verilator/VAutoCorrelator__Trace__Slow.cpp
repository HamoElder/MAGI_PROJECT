// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAutoCorrelator__Syms.h"


//======================

void VAutoCorrelator::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VAutoCorrelator::traceInit, &VAutoCorrelator::traceFull, &VAutoCorrelator::traceChg, this);
}
void VAutoCorrelator::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VAutoCorrelator* t = (VAutoCorrelator*)userthis;
    VAutoCorrelator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VAutoCorrelator::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAutoCorrelator* t = (VAutoCorrelator*)userthis;
    VAutoCorrelator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VAutoCorrelator::traceInitThis(VAutoCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAutoCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VAutoCorrelator::traceFullThis(VAutoCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAutoCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAutoCorrelator::traceInitThis__1(VAutoCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAutoCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+953,"raw_data_valid", false,-1);
        vcdp->declBus(c+961,"raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+969,"raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+977,"corr_result_valid", false,-1);
        vcdp->declBus(c+985,"corr_result_payload_cha_i", false,-1, 31,0);
        vcdp->declBus(c+993,"corr_result_payload_cha_q", false,-1, 31,0);
        vcdp->declBit(c+1001,"clk", false,-1);
        vcdp->declBit(c+1009,"reset", false,-1);
        vcdp->declBit(c+953,"AutoCorrelator raw_data_valid", false,-1);
        vcdp->declBus(c+961,"AutoCorrelator raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+969,"AutoCorrelator raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+977,"AutoCorrelator corr_result_valid", false,-1);
        vcdp->declBus(c+985,"AutoCorrelator corr_result_payload_cha_i", false,-1, 31,0);
        vcdp->declBus(c+993,"AutoCorrelator corr_result_payload_cha_q", false,-1, 31,0);
        vcdp->declBit(c+1001,"AutoCorrelator clk", false,-1);
        vcdp->declBit(c+1009,"AutoCorrelator reset", false,-1);
        vcdp->declBit(c+9,"AutoCorrelator shiftRegisterE_3_output_valid", false,-1);
        vcdp->declBus(c+17,"AutoCorrelator shiftRegisterE_3_output_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+25,"AutoCorrelator shiftRegisterE_3_output_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+33,"AutoCorrelator corr_core_corr_result_valid", false,-1);
        vcdp->declBus(c+41,"AutoCorrelator corr_core_corr_result_payload_cha_i", false,-1, 31,0);
        vcdp->declBus(c+49,"AutoCorrelator corr_core_corr_result_payload_cha_q", false,-1, 31,0);
        vcdp->declBit(c+953,"AutoCorrelator shiftRegisterE_3 input_valid", false,-1);
        vcdp->declBus(c+961,"AutoCorrelator shiftRegisterE_3 input_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+969,"AutoCorrelator shiftRegisterE_3 input_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+9,"AutoCorrelator shiftRegisterE_3 output_valid", false,-1);
        vcdp->declBus(c+17,"AutoCorrelator shiftRegisterE_3 output_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+25,"AutoCorrelator shiftRegisterE_3 output_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+953,"AutoCorrelator shiftRegisterE_3 enable", false,-1);
        vcdp->declBit(c+1001,"AutoCorrelator shiftRegisterE_3 clk", false,-1);
        vcdp->declBit(c+1009,"AutoCorrelator shiftRegisterE_3 reset", false,-1);
        vcdp->declBit(c+57,"AutoCorrelator shiftRegisterE_3 shift_reg_0_valid", false,-1);
        vcdp->declBus(c+65,"AutoCorrelator shiftRegisterE_3 shift_reg_0_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+73,"AutoCorrelator shiftRegisterE_3 shift_reg_0_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+81,"AutoCorrelator shiftRegisterE_3 shift_reg_1_valid", false,-1);
        vcdp->declBus(c+89,"AutoCorrelator shiftRegisterE_3 shift_reg_1_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+97,"AutoCorrelator shiftRegisterE_3 shift_reg_1_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+105,"AutoCorrelator shiftRegisterE_3 shift_reg_2_valid", false,-1);
        vcdp->declBus(c+113,"AutoCorrelator shiftRegisterE_3 shift_reg_2_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+121,"AutoCorrelator shiftRegisterE_3 shift_reg_2_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+129,"AutoCorrelator shiftRegisterE_3 shift_reg_3_valid", false,-1);
        vcdp->declBus(c+137,"AutoCorrelator shiftRegisterE_3 shift_reg_3_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+145,"AutoCorrelator shiftRegisterE_3 shift_reg_3_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+153,"AutoCorrelator shiftRegisterE_3 shift_reg_4_valid", false,-1);
        vcdp->declBus(c+161,"AutoCorrelator shiftRegisterE_3 shift_reg_4_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+169,"AutoCorrelator shiftRegisterE_3 shift_reg_4_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+177,"AutoCorrelator shiftRegisterE_3 shift_reg_5_valid", false,-1);
        vcdp->declBus(c+185,"AutoCorrelator shiftRegisterE_3 shift_reg_5_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+193,"AutoCorrelator shiftRegisterE_3 shift_reg_5_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+201,"AutoCorrelator shiftRegisterE_3 shift_reg_6_valid", false,-1);
        vcdp->declBus(c+209,"AutoCorrelator shiftRegisterE_3 shift_reg_6_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+217,"AutoCorrelator shiftRegisterE_3 shift_reg_6_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+225,"AutoCorrelator shiftRegisterE_3 shift_reg_7_valid", false,-1);
        vcdp->declBus(c+233,"AutoCorrelator shiftRegisterE_3 shift_reg_7_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+241,"AutoCorrelator shiftRegisterE_3 shift_reg_7_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+249,"AutoCorrelator shiftRegisterE_3 shift_reg_8_valid", false,-1);
        vcdp->declBus(c+257,"AutoCorrelator shiftRegisterE_3 shift_reg_8_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+265,"AutoCorrelator shiftRegisterE_3 shift_reg_8_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+273,"AutoCorrelator shiftRegisterE_3 shift_reg_9_valid", false,-1);
        vcdp->declBus(c+281,"AutoCorrelator shiftRegisterE_3 shift_reg_9_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+289,"AutoCorrelator shiftRegisterE_3 shift_reg_9_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+297,"AutoCorrelator shiftRegisterE_3 shift_reg_10_valid", false,-1);
        vcdp->declBus(c+305,"AutoCorrelator shiftRegisterE_3 shift_reg_10_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+313,"AutoCorrelator shiftRegisterE_3 shift_reg_10_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+321,"AutoCorrelator shiftRegisterE_3 shift_reg_11_valid", false,-1);
        vcdp->declBus(c+329,"AutoCorrelator shiftRegisterE_3 shift_reg_11_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+337,"AutoCorrelator shiftRegisterE_3 shift_reg_11_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+345,"AutoCorrelator shiftRegisterE_3 shift_reg_12_valid", false,-1);
        vcdp->declBus(c+353,"AutoCorrelator shiftRegisterE_3 shift_reg_12_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+361,"AutoCorrelator shiftRegisterE_3 shift_reg_12_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+369,"AutoCorrelator shiftRegisterE_3 shift_reg_13_valid", false,-1);
        vcdp->declBus(c+377,"AutoCorrelator shiftRegisterE_3 shift_reg_13_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+385,"AutoCorrelator shiftRegisterE_3 shift_reg_13_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+393,"AutoCorrelator shiftRegisterE_3 shift_reg_14_valid", false,-1);
        vcdp->declBus(c+401,"AutoCorrelator shiftRegisterE_3 shift_reg_14_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+409,"AutoCorrelator shiftRegisterE_3 shift_reg_14_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+9,"AutoCorrelator shiftRegisterE_3 shift_reg_15_valid", false,-1);
        vcdp->declBus(c+17,"AutoCorrelator shiftRegisterE_3 shift_reg_15_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+25,"AutoCorrelator shiftRegisterE_3 shift_reg_15_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+953,"AutoCorrelator corr_core raw_data_0_valid", false,-1);
        vcdp->declBus(c+961,"AutoCorrelator corr_core raw_data_0_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+969,"AutoCorrelator corr_core raw_data_0_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+9,"AutoCorrelator corr_core raw_data_1_valid", false,-1);
        vcdp->declBus(c+17,"AutoCorrelator corr_core raw_data_1_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+25,"AutoCorrelator corr_core raw_data_1_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+33,"AutoCorrelator corr_core corr_result_valid", false,-1);
        vcdp->declBus(c+41,"AutoCorrelator corr_core corr_result_payload_cha_i", false,-1, 31,0);
        vcdp->declBus(c+49,"AutoCorrelator corr_core corr_result_payload_cha_q", false,-1, 31,0);
        vcdp->declBit(c+1001,"AutoCorrelator corr_core clk", false,-1);
        vcdp->declBit(c+1009,"AutoCorrelator corr_core reset", false,-1);
        vcdp->declBus(c+417,"AutoCorrelator corr_core shiftRegisterE_3_output_1", false,-1, 31,0);
        vcdp->declBus(c+425,"AutoCorrelator corr_core shiftRegisterE_4_output_1", false,-1, 31,0);
        vcdp->declBus(c+41,"AutoCorrelator corr_core corr_val_i", false,-1, 31,0);
        vcdp->declBus(c+49,"AutoCorrelator corr_core corr_val_q", false,-1, 31,0);
        vcdp->declBus(c+1,"AutoCorrelator corr_core k1", false,-1, 31,0);
        vcdp->declBus(c+1017,"AutoCorrelator corr_core k2", false,-1, 31,0);
        vcdp->declBus(c+1025,"AutoCorrelator corr_core k3", false,-1, 31,0);
        vcdp->declBus(c+433,"AutoCorrelator corr_core mul_i", false,-1, 31,0);
        vcdp->declBus(c+441,"AutoCorrelator corr_core mul_q", false,-1, 31,0);
        vcdp->declBit(c+449,"AutoCorrelator corr_core mul_data_valid", false,-1);
        vcdp->declBit(c+33,"AutoCorrelator corr_core corr_result_valid_1", false,-1);
        vcdp->declBus(c+433,"AutoCorrelator corr_core shiftRegisterE_3 input_1", false,-1, 31,0);
        vcdp->declBus(c+417,"AutoCorrelator corr_core shiftRegisterE_3 output_1", false,-1, 31,0);
        vcdp->declBit(c+449,"AutoCorrelator corr_core shiftRegisterE_3 enable", false,-1);
        vcdp->declBit(c+1001,"AutoCorrelator corr_core shiftRegisterE_3 clk", false,-1);
        vcdp->declBit(c+1009,"AutoCorrelator corr_core shiftRegisterE_3 reset", false,-1);
        vcdp->declBus(c+457,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_0", false,-1, 31,0);
        vcdp->declBus(c+465,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_1", false,-1, 31,0);
        vcdp->declBus(c+473,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_2", false,-1, 31,0);
        vcdp->declBus(c+481,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_3", false,-1, 31,0);
        vcdp->declBus(c+489,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_4", false,-1, 31,0);
        vcdp->declBus(c+497,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_5", false,-1, 31,0);
        vcdp->declBus(c+505,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_6", false,-1, 31,0);
        vcdp->declBus(c+513,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_7", false,-1, 31,0);
        vcdp->declBus(c+521,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_8", false,-1, 31,0);
        vcdp->declBus(c+529,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_9", false,-1, 31,0);
        vcdp->declBus(c+537,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_10", false,-1, 31,0);
        vcdp->declBus(c+545,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_11", false,-1, 31,0);
        vcdp->declBus(c+553,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_12", false,-1, 31,0);
        vcdp->declBus(c+561,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_13", false,-1, 31,0);
        vcdp->declBus(c+569,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_14", false,-1, 31,0);
        vcdp->declBus(c+577,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_15", false,-1, 31,0);
        vcdp->declBus(c+585,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_16", false,-1, 31,0);
        vcdp->declBus(c+593,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_17", false,-1, 31,0);
        vcdp->declBus(c+601,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_18", false,-1, 31,0);
        vcdp->declBus(c+609,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_19", false,-1, 31,0);
        vcdp->declBus(c+617,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_20", false,-1, 31,0);
        vcdp->declBus(c+625,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_21", false,-1, 31,0);
        vcdp->declBus(c+633,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_22", false,-1, 31,0);
        vcdp->declBus(c+641,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_23", false,-1, 31,0);
        vcdp->declBus(c+649,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_24", false,-1, 31,0);
        vcdp->declBus(c+657,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_25", false,-1, 31,0);
        vcdp->declBus(c+665,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_26", false,-1, 31,0);
        vcdp->declBus(c+673,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_27", false,-1, 31,0);
        vcdp->declBus(c+681,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_28", false,-1, 31,0);
        vcdp->declBus(c+689,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_29", false,-1, 31,0);
        vcdp->declBus(c+697,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_30", false,-1, 31,0);
        vcdp->declBus(c+417,"AutoCorrelator corr_core shiftRegisterE_3 shift_reg_31", false,-1, 31,0);
        vcdp->declBus(c+441,"AutoCorrelator corr_core shiftRegisterE_4 input_1", false,-1, 31,0);
        vcdp->declBus(c+425,"AutoCorrelator corr_core shiftRegisterE_4 output_1", false,-1, 31,0);
        vcdp->declBit(c+449,"AutoCorrelator corr_core shiftRegisterE_4 enable", false,-1);
        vcdp->declBit(c+1001,"AutoCorrelator corr_core shiftRegisterE_4 clk", false,-1);
        vcdp->declBit(c+1009,"AutoCorrelator corr_core shiftRegisterE_4 reset", false,-1);
        vcdp->declBus(c+705,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_0", false,-1, 31,0);
        vcdp->declBus(c+713,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_1", false,-1, 31,0);
        vcdp->declBus(c+721,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_2", false,-1, 31,0);
        vcdp->declBus(c+729,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_3", false,-1, 31,0);
        vcdp->declBus(c+737,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_4", false,-1, 31,0);
        vcdp->declBus(c+745,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_5", false,-1, 31,0);
        vcdp->declBus(c+753,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_6", false,-1, 31,0);
        vcdp->declBus(c+761,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_7", false,-1, 31,0);
        vcdp->declBus(c+769,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_8", false,-1, 31,0);
        vcdp->declBus(c+777,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_9", false,-1, 31,0);
        vcdp->declBus(c+785,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_10", false,-1, 31,0);
        vcdp->declBus(c+793,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_11", false,-1, 31,0);
        vcdp->declBus(c+801,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_12", false,-1, 31,0);
        vcdp->declBus(c+809,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_13", false,-1, 31,0);
        vcdp->declBus(c+817,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_14", false,-1, 31,0);
        vcdp->declBus(c+825,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_15", false,-1, 31,0);
        vcdp->declBus(c+833,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_16", false,-1, 31,0);
        vcdp->declBus(c+841,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_17", false,-1, 31,0);
        vcdp->declBus(c+849,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_18", false,-1, 31,0);
        vcdp->declBus(c+857,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_19", false,-1, 31,0);
        vcdp->declBus(c+865,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_20", false,-1, 31,0);
        vcdp->declBus(c+873,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_21", false,-1, 31,0);
        vcdp->declBus(c+881,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_22", false,-1, 31,0);
        vcdp->declBus(c+889,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_23", false,-1, 31,0);
        vcdp->declBus(c+897,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_24", false,-1, 31,0);
        vcdp->declBus(c+905,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_25", false,-1, 31,0);
        vcdp->declBus(c+913,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_26", false,-1, 31,0);
        vcdp->declBus(c+921,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_27", false,-1, 31,0);
        vcdp->declBus(c+929,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_28", false,-1, 31,0);
        vcdp->declBus(c+937,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_29", false,-1, 31,0);
        vcdp->declBus(c+945,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_30", false,-1, 31,0);
        vcdp->declBus(c+425,"AutoCorrelator corr_core shiftRegisterE_4 shift_reg_31", false,-1, 31,0);
    }
}

void VAutoCorrelator::traceFullThis__1(VAutoCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAutoCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__k1),32);
        vcdp->fullBit(c+9,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_valid));
        vcdp->fullBus(c+17,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i),16);
        vcdp->fullBus(c+25,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_q),16);
        vcdp->fullBit(c+33,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__corr_result_valid_1));
        vcdp->fullBus(c+41,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__corr_val_i),32);
        vcdp->fullBus(c+49,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__corr_val_q),32);
        vcdp->fullBit(c+57,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_0_valid));
        vcdp->fullBus(c+65,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_i),16);
        vcdp->fullBus(c+73,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_q),16);
        vcdp->fullBit(c+81,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_1_valid));
        vcdp->fullBus(c+89,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_i),16);
        vcdp->fullBus(c+97,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_q),16);
        vcdp->fullBit(c+105,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_2_valid));
        vcdp->fullBus(c+113,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_i),16);
        vcdp->fullBus(c+121,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_q),16);
        vcdp->fullBit(c+129,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_3_valid));
        vcdp->fullBus(c+137,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_i),16);
        vcdp->fullBus(c+145,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_q),16);
        vcdp->fullBit(c+153,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_4_valid));
        vcdp->fullBus(c+161,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_i),16);
        vcdp->fullBus(c+169,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_q),16);
        vcdp->fullBit(c+177,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_5_valid));
        vcdp->fullBus(c+185,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_i),16);
        vcdp->fullBus(c+193,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_q),16);
        vcdp->fullBit(c+201,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_6_valid));
        vcdp->fullBus(c+209,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_i),16);
        vcdp->fullBus(c+217,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_q),16);
        vcdp->fullBit(c+225,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_7_valid));
        vcdp->fullBus(c+233,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_i),16);
        vcdp->fullBus(c+241,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_q),16);
        vcdp->fullBit(c+249,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_8_valid));
        vcdp->fullBus(c+257,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_i),16);
        vcdp->fullBus(c+265,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_q),16);
        vcdp->fullBit(c+273,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_9_valid));
        vcdp->fullBus(c+281,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_i),16);
        vcdp->fullBus(c+289,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_q),16);
        vcdp->fullBit(c+297,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_10_valid));
        vcdp->fullBus(c+305,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_i),16);
        vcdp->fullBus(c+313,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_q),16);
        vcdp->fullBit(c+321,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_11_valid));
        vcdp->fullBus(c+329,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_i),16);
        vcdp->fullBus(c+337,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_q),16);
        vcdp->fullBit(c+345,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_12_valid));
        vcdp->fullBus(c+353,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_i),16);
        vcdp->fullBus(c+361,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_q),16);
        vcdp->fullBit(c+369,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_13_valid));
        vcdp->fullBus(c+377,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_i),16);
        vcdp->fullBus(c+385,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_q),16);
        vcdp->fullBit(c+393,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_14_valid));
        vcdp->fullBus(c+401,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_i),16);
        vcdp->fullBus(c+409,(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_q),16);
        vcdp->fullBus(c+417,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_31),32);
        vcdp->fullBus(c+425,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_31),32);
        vcdp->fullBus(c+433,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_i),32);
        vcdp->fullBus(c+441,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_q),32);
        vcdp->fullBit(c+449,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid));
        vcdp->fullBus(c+457,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0),32);
        vcdp->fullBus(c+465,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1),32);
        vcdp->fullBus(c+473,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2),32);
        vcdp->fullBus(c+481,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3),32);
        vcdp->fullBus(c+489,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4),32);
        vcdp->fullBus(c+497,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5),32);
        vcdp->fullBus(c+505,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6),32);
        vcdp->fullBus(c+513,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7),32);
        vcdp->fullBus(c+521,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8),32);
        vcdp->fullBus(c+529,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9),32);
        vcdp->fullBus(c+537,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10),32);
        vcdp->fullBus(c+545,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11),32);
        vcdp->fullBus(c+553,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12),32);
        vcdp->fullBus(c+561,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13),32);
        vcdp->fullBus(c+569,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14),32);
        vcdp->fullBus(c+577,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15),32);
        vcdp->fullBus(c+585,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_16),32);
        vcdp->fullBus(c+593,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_17),32);
        vcdp->fullBus(c+601,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_18),32);
        vcdp->fullBus(c+609,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_19),32);
        vcdp->fullBus(c+617,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_20),32);
        vcdp->fullBus(c+625,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_21),32);
        vcdp->fullBus(c+633,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_22),32);
        vcdp->fullBus(c+641,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_23),32);
        vcdp->fullBus(c+649,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_24),32);
        vcdp->fullBus(c+657,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_25),32);
        vcdp->fullBus(c+665,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_26),32);
        vcdp->fullBus(c+673,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_27),32);
        vcdp->fullBus(c+681,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_28),32);
        vcdp->fullBus(c+689,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_29),32);
        vcdp->fullBus(c+697,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_30),32);
        vcdp->fullBus(c+705,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_0),32);
        vcdp->fullBus(c+713,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_1),32);
        vcdp->fullBus(c+721,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_2),32);
        vcdp->fullBus(c+729,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_3),32);
        vcdp->fullBus(c+737,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_4),32);
        vcdp->fullBus(c+745,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_5),32);
        vcdp->fullBus(c+753,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_6),32);
        vcdp->fullBus(c+761,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_7),32);
        vcdp->fullBus(c+769,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_8),32);
        vcdp->fullBus(c+777,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_9),32);
        vcdp->fullBus(c+785,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_10),32);
        vcdp->fullBus(c+793,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_11),32);
        vcdp->fullBus(c+801,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_12),32);
        vcdp->fullBus(c+809,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_13),32);
        vcdp->fullBus(c+817,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_14),32);
        vcdp->fullBus(c+825,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_15),32);
        vcdp->fullBus(c+833,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_16),32);
        vcdp->fullBus(c+841,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_17),32);
        vcdp->fullBus(c+849,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_18),32);
        vcdp->fullBus(c+857,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_19),32);
        vcdp->fullBus(c+865,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_20),32);
        vcdp->fullBus(c+873,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_21),32);
        vcdp->fullBus(c+881,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_22),32);
        vcdp->fullBus(c+889,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_23),32);
        vcdp->fullBus(c+897,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_24),32);
        vcdp->fullBus(c+905,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_25),32);
        vcdp->fullBus(c+913,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_26),32);
        vcdp->fullBus(c+921,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_27),32);
        vcdp->fullBus(c+929,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_28),32);
        vcdp->fullBus(c+937,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_29),32);
        vcdp->fullBus(c+945,(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_30),32);
        vcdp->fullBit(c+953,(vlTOPp->raw_data_valid));
        vcdp->fullBus(c+961,(vlTOPp->raw_data_payload_cha_i),16);
        vcdp->fullBus(c+969,(vlTOPp->raw_data_payload_cha_q),16);
        vcdp->fullBit(c+977,(vlTOPp->corr_result_valid));
        vcdp->fullBus(c+985,(vlTOPp->corr_result_payload_cha_i),32);
        vcdp->fullBus(c+993,(vlTOPp->corr_result_payload_cha_q),32);
        vcdp->fullBit(c+1001,(vlTOPp->clk));
        vcdp->fullBit(c+1009,(vlTOPp->reset));
        vcdp->fullBus(c+1017,(VL_MULS_III(32,32,32, 
                                          VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_i)), 
                                          VL_EXTENDS_II(32,16, 
                                                        (0xffffU 
                                                         & ((IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_q) 
                                                            + (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i)))))),32);
        vcdp->fullBus(c+1025,(VL_MULS_III(32,32,32, 
                                          VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_q)), 
                                          VL_EXTENDS_II(32,16, 
                                                        (0xffffU 
                                                         & ((IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i) 
                                                            - (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_q)))))),32);
    }
}
