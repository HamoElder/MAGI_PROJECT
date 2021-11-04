// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCrossCorrelator__Syms.h"


//======================

void VCrossCorrelator::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VCrossCorrelator::traceInit, &VCrossCorrelator::traceFull, &VCrossCorrelator::traceChg, this);
}
void VCrossCorrelator::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VCrossCorrelator* t = (VCrossCorrelator*)userthis;
    VCrossCorrelator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VCrossCorrelator::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCrossCorrelator* t = (VCrossCorrelator*)userthis;
    VCrossCorrelator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VCrossCorrelator::traceInitThis(VCrossCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VCrossCorrelator::traceFullThis(VCrossCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCrossCorrelator::traceInitThis__1(VCrossCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+1121,"raw_data_valid", false,-1);
        vcdp->declBus(c+1129,"raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1137,"raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1145,"corr_result_valid", false,-1);
        vcdp->declBus(c+1153,"corr_result_payload_cha_i", false,-1, 31,0);
        vcdp->declBus(c+1161,"corr_result_payload_cha_q", false,-1, 31,0);
        vcdp->declBit(c+1169,"clk", false,-1);
        vcdp->declBit(c+1177,"reset", false,-1);
        vcdp->declBit(c+1121,"CrossCorrelator raw_data_valid", false,-1);
        vcdp->declBus(c+1129,"CrossCorrelator raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1137,"CrossCorrelator raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1145,"CrossCorrelator corr_result_valid", false,-1);
        vcdp->declBus(c+1153,"CrossCorrelator corr_result_payload_cha_i", false,-1, 31,0);
        vcdp->declBus(c+1161,"CrossCorrelator corr_result_payload_cha_q", false,-1, 31,0);
        vcdp->declBit(c+1169,"CrossCorrelator clk", false,-1);
        vcdp->declBit(c+1177,"CrossCorrelator reset", false,-1);
        vcdp->declBit(c+9,"CrossCorrelator corr_core_corr_result_valid", false,-1);
        vcdp->declBus(c+17,"CrossCorrelator corr_core_corr_result_payload_cha_i", false,-1, 31,0);
        vcdp->declBus(c+25,"CrossCorrelator corr_core_corr_result_payload_cha_q", false,-1, 31,0);
        vcdp->declBus(c+1113,"CrossCorrelator cnt", false,-1, 6,0);
        vcdp->declBus(c+1097,"CrossCorrelator iq_cursor_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1105,"CrossCorrelator iq_cursor_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1121,"CrossCorrelator corr_core raw_data_0_valid", false,-1);
        vcdp->declBus(c+1129,"CrossCorrelator corr_core raw_data_0_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1137,"CrossCorrelator corr_core raw_data_0_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1121,"CrossCorrelator corr_core raw_data_1_valid", false,-1);
        vcdp->declBus(c+1097,"CrossCorrelator corr_core raw_data_1_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1105,"CrossCorrelator corr_core raw_data_1_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+9,"CrossCorrelator corr_core corr_result_valid", false,-1);
        vcdp->declBus(c+17,"CrossCorrelator corr_core corr_result_payload_cha_i", false,-1, 31,0);
        vcdp->declBus(c+25,"CrossCorrelator corr_core corr_result_payload_cha_q", false,-1, 31,0);
        vcdp->declBit(c+1169,"CrossCorrelator corr_core clk", false,-1);
        vcdp->declBit(c+1177,"CrossCorrelator corr_core reset", false,-1);
        vcdp->declBus(c+33,"CrossCorrelator corr_core shiftRegisterE_2_output_1", false,-1, 31,0);
        vcdp->declBus(c+41,"CrossCorrelator corr_core shiftRegisterE_3_output_1", false,-1, 31,0);
        vcdp->declBus(c+17,"CrossCorrelator corr_core corr_val_i", false,-1, 31,0);
        vcdp->declBus(c+25,"CrossCorrelator corr_core corr_val_q", false,-1, 31,0);
        vcdp->declBus(c+1,"CrossCorrelator corr_core k1", false,-1, 31,0);
        vcdp->declBus(c+1185,"CrossCorrelator corr_core k2", false,-1, 31,0);
        vcdp->declBus(c+1193,"CrossCorrelator corr_core k3", false,-1, 31,0);
        vcdp->declBus(c+49,"CrossCorrelator corr_core mul_i", false,-1, 31,0);
        vcdp->declBus(c+57,"CrossCorrelator corr_core mul_q", false,-1, 31,0);
        vcdp->declBit(c+65,"CrossCorrelator corr_core mul_data_valid", false,-1);
        vcdp->declBit(c+9,"CrossCorrelator corr_core corr_result_valid_1", false,-1);
        vcdp->declBus(c+49,"CrossCorrelator corr_core shiftRegisterE_2 input_1", false,-1, 31,0);
        vcdp->declBus(c+33,"CrossCorrelator corr_core shiftRegisterE_2 output_1", false,-1, 31,0);
        vcdp->declBit(c+65,"CrossCorrelator corr_core shiftRegisterE_2 enable", false,-1);
        vcdp->declBit(c+1169,"CrossCorrelator corr_core shiftRegisterE_2 clk", false,-1);
        vcdp->declBit(c+1177,"CrossCorrelator corr_core shiftRegisterE_2 reset", false,-1);
        vcdp->declBus(c+73,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_0", false,-1, 31,0);
        vcdp->declBus(c+81,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_1", false,-1, 31,0);
        vcdp->declBus(c+89,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_2", false,-1, 31,0);
        vcdp->declBus(c+97,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_3", false,-1, 31,0);
        vcdp->declBus(c+105,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_4", false,-1, 31,0);
        vcdp->declBus(c+113,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_5", false,-1, 31,0);
        vcdp->declBus(c+121,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_6", false,-1, 31,0);
        vcdp->declBus(c+129,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_7", false,-1, 31,0);
        vcdp->declBus(c+137,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_8", false,-1, 31,0);
        vcdp->declBus(c+145,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_9", false,-1, 31,0);
        vcdp->declBus(c+153,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_10", false,-1, 31,0);
        vcdp->declBus(c+161,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_11", false,-1, 31,0);
        vcdp->declBus(c+169,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_12", false,-1, 31,0);
        vcdp->declBus(c+177,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_13", false,-1, 31,0);
        vcdp->declBus(c+185,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_14", false,-1, 31,0);
        vcdp->declBus(c+193,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_15", false,-1, 31,0);
        vcdp->declBus(c+201,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_16", false,-1, 31,0);
        vcdp->declBus(c+209,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_17", false,-1, 31,0);
        vcdp->declBus(c+217,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_18", false,-1, 31,0);
        vcdp->declBus(c+225,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_19", false,-1, 31,0);
        vcdp->declBus(c+233,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_20", false,-1, 31,0);
        vcdp->declBus(c+241,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_21", false,-1, 31,0);
        vcdp->declBus(c+249,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_22", false,-1, 31,0);
        vcdp->declBus(c+257,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_23", false,-1, 31,0);
        vcdp->declBus(c+265,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_24", false,-1, 31,0);
        vcdp->declBus(c+273,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_25", false,-1, 31,0);
        vcdp->declBus(c+281,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_26", false,-1, 31,0);
        vcdp->declBus(c+289,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_27", false,-1, 31,0);
        vcdp->declBus(c+297,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_28", false,-1, 31,0);
        vcdp->declBus(c+305,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_29", false,-1, 31,0);
        vcdp->declBus(c+313,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_30", false,-1, 31,0);
        vcdp->declBus(c+321,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_31", false,-1, 31,0);
        vcdp->declBus(c+329,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_32", false,-1, 31,0);
        vcdp->declBus(c+337,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_33", false,-1, 31,0);
        vcdp->declBus(c+345,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_34", false,-1, 31,0);
        vcdp->declBus(c+353,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_35", false,-1, 31,0);
        vcdp->declBus(c+361,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_36", false,-1, 31,0);
        vcdp->declBus(c+369,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_37", false,-1, 31,0);
        vcdp->declBus(c+377,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_38", false,-1, 31,0);
        vcdp->declBus(c+385,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_39", false,-1, 31,0);
        vcdp->declBus(c+393,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_40", false,-1, 31,0);
        vcdp->declBus(c+401,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_41", false,-1, 31,0);
        vcdp->declBus(c+409,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_42", false,-1, 31,0);
        vcdp->declBus(c+417,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_43", false,-1, 31,0);
        vcdp->declBus(c+425,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_44", false,-1, 31,0);
        vcdp->declBus(c+433,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_45", false,-1, 31,0);
        vcdp->declBus(c+441,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_46", false,-1, 31,0);
        vcdp->declBus(c+449,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_47", false,-1, 31,0);
        vcdp->declBus(c+457,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_48", false,-1, 31,0);
        vcdp->declBus(c+465,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_49", false,-1, 31,0);
        vcdp->declBus(c+473,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_50", false,-1, 31,0);
        vcdp->declBus(c+481,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_51", false,-1, 31,0);
        vcdp->declBus(c+489,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_52", false,-1, 31,0);
        vcdp->declBus(c+497,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_53", false,-1, 31,0);
        vcdp->declBus(c+505,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_54", false,-1, 31,0);
        vcdp->declBus(c+513,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_55", false,-1, 31,0);
        vcdp->declBus(c+521,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_56", false,-1, 31,0);
        vcdp->declBus(c+529,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_57", false,-1, 31,0);
        vcdp->declBus(c+537,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_58", false,-1, 31,0);
        vcdp->declBus(c+545,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_59", false,-1, 31,0);
        vcdp->declBus(c+553,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_60", false,-1, 31,0);
        vcdp->declBus(c+561,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_61", false,-1, 31,0);
        vcdp->declBus(c+569,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_62", false,-1, 31,0);
        vcdp->declBus(c+577,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_63", false,-1, 31,0);
        vcdp->declBus(c+33,"CrossCorrelator corr_core shiftRegisterE_2 shift_reg_64", false,-1, 31,0);
        vcdp->declBus(c+57,"CrossCorrelator corr_core shiftRegisterE_3 input_1", false,-1, 31,0);
        vcdp->declBus(c+41,"CrossCorrelator corr_core shiftRegisterE_3 output_1", false,-1, 31,0);
        vcdp->declBit(c+65,"CrossCorrelator corr_core shiftRegisterE_3 enable", false,-1);
        vcdp->declBit(c+1169,"CrossCorrelator corr_core shiftRegisterE_3 clk", false,-1);
        vcdp->declBit(c+1177,"CrossCorrelator corr_core shiftRegisterE_3 reset", false,-1);
        vcdp->declBus(c+585,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_0", false,-1, 31,0);
        vcdp->declBus(c+593,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_1", false,-1, 31,0);
        vcdp->declBus(c+601,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_2", false,-1, 31,0);
        vcdp->declBus(c+609,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_3", false,-1, 31,0);
        vcdp->declBus(c+617,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_4", false,-1, 31,0);
        vcdp->declBus(c+625,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_5", false,-1, 31,0);
        vcdp->declBus(c+633,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_6", false,-1, 31,0);
        vcdp->declBus(c+641,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_7", false,-1, 31,0);
        vcdp->declBus(c+649,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_8", false,-1, 31,0);
        vcdp->declBus(c+657,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_9", false,-1, 31,0);
        vcdp->declBus(c+665,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_10", false,-1, 31,0);
        vcdp->declBus(c+673,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_11", false,-1, 31,0);
        vcdp->declBus(c+681,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_12", false,-1, 31,0);
        vcdp->declBus(c+689,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_13", false,-1, 31,0);
        vcdp->declBus(c+697,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_14", false,-1, 31,0);
        vcdp->declBus(c+705,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_15", false,-1, 31,0);
        vcdp->declBus(c+713,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_16", false,-1, 31,0);
        vcdp->declBus(c+721,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_17", false,-1, 31,0);
        vcdp->declBus(c+729,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_18", false,-1, 31,0);
        vcdp->declBus(c+737,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_19", false,-1, 31,0);
        vcdp->declBus(c+745,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_20", false,-1, 31,0);
        vcdp->declBus(c+753,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_21", false,-1, 31,0);
        vcdp->declBus(c+761,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_22", false,-1, 31,0);
        vcdp->declBus(c+769,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_23", false,-1, 31,0);
        vcdp->declBus(c+777,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_24", false,-1, 31,0);
        vcdp->declBus(c+785,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_25", false,-1, 31,0);
        vcdp->declBus(c+793,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_26", false,-1, 31,0);
        vcdp->declBus(c+801,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_27", false,-1, 31,0);
        vcdp->declBus(c+809,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_28", false,-1, 31,0);
        vcdp->declBus(c+817,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_29", false,-1, 31,0);
        vcdp->declBus(c+825,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_30", false,-1, 31,0);
        vcdp->declBus(c+833,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_31", false,-1, 31,0);
        vcdp->declBus(c+841,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_32", false,-1, 31,0);
        vcdp->declBus(c+849,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_33", false,-1, 31,0);
        vcdp->declBus(c+857,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_34", false,-1, 31,0);
        vcdp->declBus(c+865,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_35", false,-1, 31,0);
        vcdp->declBus(c+873,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_36", false,-1, 31,0);
        vcdp->declBus(c+881,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_37", false,-1, 31,0);
        vcdp->declBus(c+889,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_38", false,-1, 31,0);
        vcdp->declBus(c+897,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_39", false,-1, 31,0);
        vcdp->declBus(c+905,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_40", false,-1, 31,0);
        vcdp->declBus(c+913,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_41", false,-1, 31,0);
        vcdp->declBus(c+921,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_42", false,-1, 31,0);
        vcdp->declBus(c+929,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_43", false,-1, 31,0);
        vcdp->declBus(c+937,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_44", false,-1, 31,0);
        vcdp->declBus(c+945,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_45", false,-1, 31,0);
        vcdp->declBus(c+953,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_46", false,-1, 31,0);
        vcdp->declBus(c+961,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_47", false,-1, 31,0);
        vcdp->declBus(c+969,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_48", false,-1, 31,0);
        vcdp->declBus(c+977,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_49", false,-1, 31,0);
        vcdp->declBus(c+985,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_50", false,-1, 31,0);
        vcdp->declBus(c+993,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_51", false,-1, 31,0);
        vcdp->declBus(c+1001,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_52", false,-1, 31,0);
        vcdp->declBus(c+1009,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_53", false,-1, 31,0);
        vcdp->declBus(c+1017,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_54", false,-1, 31,0);
        vcdp->declBus(c+1025,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_55", false,-1, 31,0);
        vcdp->declBus(c+1033,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_56", false,-1, 31,0);
        vcdp->declBus(c+1041,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_57", false,-1, 31,0);
        vcdp->declBus(c+1049,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_58", false,-1, 31,0);
        vcdp->declBus(c+1057,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_59", false,-1, 31,0);
        vcdp->declBus(c+1065,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_60", false,-1, 31,0);
        vcdp->declBus(c+1073,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_61", false,-1, 31,0);
        vcdp->declBus(c+1081,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_62", false,-1, 31,0);
        vcdp->declBus(c+1089,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_63", false,-1, 31,0);
        vcdp->declBus(c+41,"CrossCorrelator corr_core shiftRegisterE_3 shift_reg_64", false,-1, 31,0);
    }
}

void VCrossCorrelator::traceFullThis__1(VCrossCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__k1),32);
        vcdp->fullBit(c+9,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__corr_result_valid_1));
        vcdp->fullBus(c+17,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__corr_val_i),32);
        vcdp->fullBus(c+25,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__corr_val_q),32);
        vcdp->fullBus(c+33,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_64),32);
        vcdp->fullBus(c+41,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_64),32);
        vcdp->fullBus(c+49,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_i),32);
        vcdp->fullBus(c+57,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_q),32);
        vcdp->fullBit(c+65,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid));
        vcdp->fullBus(c+73,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_0),32);
        vcdp->fullBus(c+81,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_1),32);
        vcdp->fullBus(c+89,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_2),32);
        vcdp->fullBus(c+97,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_3),32);
        vcdp->fullBus(c+105,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_4),32);
        vcdp->fullBus(c+113,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_5),32);
        vcdp->fullBus(c+121,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_6),32);
        vcdp->fullBus(c+129,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_7),32);
        vcdp->fullBus(c+137,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_8),32);
        vcdp->fullBus(c+145,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_9),32);
        vcdp->fullBus(c+153,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_10),32);
        vcdp->fullBus(c+161,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_11),32);
        vcdp->fullBus(c+169,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_12),32);
        vcdp->fullBus(c+177,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_13),32);
        vcdp->fullBus(c+185,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_14),32);
        vcdp->fullBus(c+193,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_15),32);
        vcdp->fullBus(c+201,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_16),32);
        vcdp->fullBus(c+209,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_17),32);
        vcdp->fullBus(c+217,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_18),32);
        vcdp->fullBus(c+225,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_19),32);
        vcdp->fullBus(c+233,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_20),32);
        vcdp->fullBus(c+241,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_21),32);
        vcdp->fullBus(c+249,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_22),32);
        vcdp->fullBus(c+257,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_23),32);
        vcdp->fullBus(c+265,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_24),32);
        vcdp->fullBus(c+273,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_25),32);
        vcdp->fullBus(c+281,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_26),32);
        vcdp->fullBus(c+289,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_27),32);
        vcdp->fullBus(c+297,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_28),32);
        vcdp->fullBus(c+305,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_29),32);
        vcdp->fullBus(c+313,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_30),32);
        vcdp->fullBus(c+321,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_31),32);
        vcdp->fullBus(c+329,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_32),32);
        vcdp->fullBus(c+337,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_33),32);
        vcdp->fullBus(c+345,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_34),32);
        vcdp->fullBus(c+353,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_35),32);
        vcdp->fullBus(c+361,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_36),32);
        vcdp->fullBus(c+369,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_37),32);
        vcdp->fullBus(c+377,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_38),32);
        vcdp->fullBus(c+385,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_39),32);
        vcdp->fullBus(c+393,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_40),32);
        vcdp->fullBus(c+401,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_41),32);
        vcdp->fullBus(c+409,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_42),32);
        vcdp->fullBus(c+417,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_43),32);
        vcdp->fullBus(c+425,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_44),32);
        vcdp->fullBus(c+433,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_45),32);
        vcdp->fullBus(c+441,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_46),32);
        vcdp->fullBus(c+449,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_47),32);
        vcdp->fullBus(c+457,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_48),32);
        vcdp->fullBus(c+465,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_49),32);
        vcdp->fullBus(c+473,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_50),32);
        vcdp->fullBus(c+481,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_51),32);
        vcdp->fullBus(c+489,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_52),32);
        vcdp->fullBus(c+497,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_53),32);
        vcdp->fullBus(c+505,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_54),32);
        vcdp->fullBus(c+513,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_55),32);
        vcdp->fullBus(c+521,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_56),32);
        vcdp->fullBus(c+529,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_57),32);
        vcdp->fullBus(c+537,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_58),32);
        vcdp->fullBus(c+545,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_59),32);
        vcdp->fullBus(c+553,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_60),32);
        vcdp->fullBus(c+561,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_61),32);
        vcdp->fullBus(c+569,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_62),32);
        vcdp->fullBus(c+577,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_63),32);
        vcdp->fullBus(c+585,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0),32);
        vcdp->fullBus(c+593,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1),32);
        vcdp->fullBus(c+601,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2),32);
        vcdp->fullBus(c+609,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3),32);
        vcdp->fullBus(c+617,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4),32);
        vcdp->fullBus(c+625,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5),32);
        vcdp->fullBus(c+633,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6),32);
        vcdp->fullBus(c+641,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7),32);
        vcdp->fullBus(c+649,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8),32);
        vcdp->fullBus(c+657,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9),32);
        vcdp->fullBus(c+665,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10),32);
        vcdp->fullBus(c+673,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11),32);
        vcdp->fullBus(c+681,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12),32);
        vcdp->fullBus(c+689,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13),32);
        vcdp->fullBus(c+697,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14),32);
        vcdp->fullBus(c+705,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15),32);
        vcdp->fullBus(c+713,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_16),32);
        vcdp->fullBus(c+721,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_17),32);
        vcdp->fullBus(c+729,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_18),32);
        vcdp->fullBus(c+737,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_19),32);
        vcdp->fullBus(c+745,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_20),32);
        vcdp->fullBus(c+753,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_21),32);
        vcdp->fullBus(c+761,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_22),32);
        vcdp->fullBus(c+769,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_23),32);
        vcdp->fullBus(c+777,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_24),32);
        vcdp->fullBus(c+785,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_25),32);
        vcdp->fullBus(c+793,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_26),32);
        vcdp->fullBus(c+801,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_27),32);
        vcdp->fullBus(c+809,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_28),32);
        vcdp->fullBus(c+817,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_29),32);
        vcdp->fullBus(c+825,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_30),32);
        vcdp->fullBus(c+833,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_31),32);
        vcdp->fullBus(c+841,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_32),32);
        vcdp->fullBus(c+849,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_33),32);
        vcdp->fullBus(c+857,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_34),32);
        vcdp->fullBus(c+865,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_35),32);
        vcdp->fullBus(c+873,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_36),32);
        vcdp->fullBus(c+881,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_37),32);
        vcdp->fullBus(c+889,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_38),32);
        vcdp->fullBus(c+897,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_39),32);
        vcdp->fullBus(c+905,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_40),32);
        vcdp->fullBus(c+913,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_41),32);
        vcdp->fullBus(c+921,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_42),32);
        vcdp->fullBus(c+929,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_43),32);
        vcdp->fullBus(c+937,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_44),32);
        vcdp->fullBus(c+945,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_45),32);
        vcdp->fullBus(c+953,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_46),32);
        vcdp->fullBus(c+961,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_47),32);
        vcdp->fullBus(c+969,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_48),32);
        vcdp->fullBus(c+977,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_49),32);
        vcdp->fullBus(c+985,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_50),32);
        vcdp->fullBus(c+993,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_51),32);
        vcdp->fullBus(c+1001,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_52),32);
        vcdp->fullBus(c+1009,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_53),32);
        vcdp->fullBus(c+1017,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_54),32);
        vcdp->fullBus(c+1025,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_55),32);
        vcdp->fullBus(c+1033,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_56),32);
        vcdp->fullBus(c+1041,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_57),32);
        vcdp->fullBus(c+1049,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_58),32);
        vcdp->fullBus(c+1057,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_59),32);
        vcdp->fullBus(c+1065,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_60),32);
        vcdp->fullBus(c+1073,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_61),32);
        vcdp->fullBus(c+1081,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_62),32);
        vcdp->fullBus(c+1089,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_63),32);
        vcdp->fullBus(c+1097,(vlTOPp->CrossCorrelator__DOT___zz_I_mem_port0),16);
        vcdp->fullBus(c+1105,(vlTOPp->CrossCorrelator__DOT___zz_Q_mem_port0),16);
        vcdp->fullBus(c+1113,(vlTOPp->CrossCorrelator__DOT__cnt),7);
        vcdp->fullBit(c+1121,(vlTOPp->raw_data_valid));
        vcdp->fullBus(c+1129,(vlTOPp->raw_data_payload_cha_i),16);
        vcdp->fullBus(c+1137,(vlTOPp->raw_data_payload_cha_q),16);
        vcdp->fullBit(c+1145,(vlTOPp->corr_result_valid));
        vcdp->fullBus(c+1153,(vlTOPp->corr_result_payload_cha_i),32);
        vcdp->fullBus(c+1161,(vlTOPp->corr_result_payload_cha_q),32);
        vcdp->fullBit(c+1169,(vlTOPp->clk));
        vcdp->fullBit(c+1177,(vlTOPp->reset));
        vcdp->fullBus(c+1185,(VL_MULS_III(32,32,32, 
                                          VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_i)), 
                                          VL_EXTENDS_II(32,16, 
                                                        (0xffffU 
                                                         & ((IData)(vlTOPp->CrossCorrelator__DOT___zz_Q_mem_port0) 
                                                            + (IData)(vlTOPp->CrossCorrelator__DOT___zz_I_mem_port0)))))),32);
        vcdp->fullBus(c+1193,(VL_MULS_III(32,32,32, 
                                          VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_q)), 
                                          VL_EXTENDS_II(32,16, 
                                                        (0xffffU 
                                                         & ((IData)(vlTOPp->CrossCorrelator__DOT___zz_I_mem_port0) 
                                                            - (IData)(vlTOPp->CrossCorrelator__DOT___zz_Q_mem_port0)))))),32);
    }
}
