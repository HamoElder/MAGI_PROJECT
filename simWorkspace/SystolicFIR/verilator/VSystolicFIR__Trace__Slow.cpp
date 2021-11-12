// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSystolicFIR__Syms.h"


//======================

void VSystolicFIR::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VSystolicFIR::traceInit, &VSystolicFIR::traceFull, &VSystolicFIR::traceChg, this);
}
void VSystolicFIR::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VSystolicFIR* t = (VSystolicFIR*)userthis;
    VSystolicFIR__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VSystolicFIR::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VSystolicFIR* t = (VSystolicFIR*)userthis;
    VSystolicFIR__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VSystolicFIR::traceInitThis(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VSystolicFIR::traceFullThis(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VSystolicFIR::traceInitThis__1(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+545,"raw_data_valid", false,-1);
        vcdp->declBus(c+553,"raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+561,"raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+569,"filtered_data_valid", false,-1);
        vcdp->declBus(c+577,"filtered_data_payload_cha_i", false,-1, 23,0);
        vcdp->declBus(c+585,"filtered_data_payload_cha_q", false,-1, 23,0);
        vcdp->declBit(c+593,"clk", false,-1);
        vcdp->declBit(c+601,"reset", false,-1);
        vcdp->declBit(c+545,"SystolicFIR raw_data_valid", false,-1);
        vcdp->declBus(c+553,"SystolicFIR raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+561,"SystolicFIR raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+569,"SystolicFIR filtered_data_valid", false,-1);
        vcdp->declBus(c+577,"SystolicFIR filtered_data_payload_cha_i", false,-1, 23,0);
        vcdp->declBus(c+585,"SystolicFIR filtered_data_payload_cha_q", false,-1, 23,0);
        vcdp->declBit(c+593,"SystolicFIR clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR reset", false,-1);
        vcdp->declBus(c+1,"SystolicFIR shiftRegister_34_output_1", false,-1, 15,0);
        vcdp->declBus(c+9,"SystolicFIR shiftRegister_35_output_1", false,-1, 15,0);
        vcdp->declBus(c+17,"SystolicFIR shiftRegister_36_output_1", false,-1, 15,0);
        vcdp->declBus(c+25,"SystolicFIR shiftRegister_37_output_1", false,-1, 15,0);
        vcdp->declBus(c+33,"SystolicFIR shiftRegister_38_output_1", false,-1, 15,0);
        vcdp->declBus(c+41,"SystolicFIR shiftRegister_39_output_1", false,-1, 15,0);
        vcdp->declBus(c+49,"SystolicFIR shiftRegister_40_output_1", false,-1, 15,0);
        vcdp->declBus(c+57,"SystolicFIR shiftRegister_41_output_1", false,-1, 15,0);
        vcdp->declBus(c+65,"SystolicFIR shiftRegister_42_output_1", false,-1, 15,0);
        vcdp->declBus(c+73,"SystolicFIR shiftRegister_43_output_1", false,-1, 15,0);
        vcdp->declBus(c+81,"SystolicFIR shiftRegister_44_output_1", false,-1, 15,0);
        vcdp->declBus(c+89,"SystolicFIR shiftRegister_45_output_1", false,-1, 15,0);
        vcdp->declBus(c+97,"SystolicFIR shiftRegister_46_output_1", false,-1, 15,0);
        vcdp->declBus(c+105,"SystolicFIR shiftRegister_47_output_1", false,-1, 15,0);
        vcdp->declBus(c+113,"SystolicFIR shiftRegister_48_output_1", false,-1, 15,0);
        vcdp->declBus(c+121,"SystolicFIR shiftRegister_49_output_1", false,-1, 15,0);
        vcdp->declBus(c+129,"SystolicFIR shiftRegister_50_output_1", false,-1, 15,0);
        vcdp->declBus(c+137,"SystolicFIR shiftRegister_51_output_1", false,-1, 15,0);
        vcdp->declBus(c+145,"SystolicFIR shiftRegister_52_output_1", false,-1, 15,0);
        vcdp->declBus(c+153,"SystolicFIR shiftRegister_53_output_1", false,-1, 15,0);
        vcdp->declBus(c+161,"SystolicFIR shiftRegister_54_output_1", false,-1, 15,0);
        vcdp->declBus(c+169,"SystolicFIR shiftRegister_55_output_1", false,-1, 15,0);
        vcdp->declBus(c+177,"SystolicFIR shiftRegister_56_output_1", false,-1, 15,0);
        vcdp->declBus(c+185,"SystolicFIR shiftRegister_57_output_1", false,-1, 15,0);
        vcdp->declBus(c+193,"SystolicFIR shiftRegister_58_output_1", false,-1, 15,0);
        vcdp->declBus(c+201,"SystolicFIR shiftRegister_59_output_1", false,-1, 15,0);
        vcdp->declBus(c+209,"SystolicFIR shiftRegister_60_output_1", false,-1, 15,0);
        vcdp->declBus(c+217,"SystolicFIR shiftRegister_61_output_1", false,-1, 15,0);
        vcdp->declBus(c+225,"SystolicFIR shiftRegister_62_output_1", false,-1, 15,0);
        vcdp->declBus(c+233,"SystolicFIR shiftRegister_63_output_1", false,-1, 15,0);
        vcdp->declBus(c+241,"SystolicFIR shiftRegister_64_output_1", false,-1, 15,0);
        vcdp->declBus(c+249,"SystolicFIR shiftRegister_65_output_1", false,-1, 15,0);
        vcdp->declBus(c+257,"SystolicFIR shiftRegister_66_output_1", false,-1, 15,0);
        vcdp->declBus(c+265,"SystolicFIR shiftRegister_67_output_1", false,-1, 15,0);
        vcdp->declBus(c+553,"SystolicFIR shiftRegister_34 input_1", false,-1, 15,0);
        vcdp->declBus(c+1,"SystolicFIR shiftRegister_34 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_34 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_34 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_34 reset", false,-1);
        vcdp->declBus(c+273,"SystolicFIR shiftRegister_34 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+1,"SystolicFIR shiftRegister_34 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+1,"SystolicFIR shiftRegister_35 input_1", false,-1, 15,0);
        vcdp->declBus(c+9,"SystolicFIR shiftRegister_35 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_35 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_35 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_35 reset", false,-1);
        vcdp->declBus(c+281,"SystolicFIR shiftRegister_35 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+9,"SystolicFIR shiftRegister_35 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+9,"SystolicFIR shiftRegister_36 input_1", false,-1, 15,0);
        vcdp->declBus(c+17,"SystolicFIR shiftRegister_36 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_36 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_36 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_36 reset", false,-1);
        vcdp->declBus(c+289,"SystolicFIR shiftRegister_36 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+17,"SystolicFIR shiftRegister_36 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+17,"SystolicFIR shiftRegister_37 input_1", false,-1, 15,0);
        vcdp->declBus(c+25,"SystolicFIR shiftRegister_37 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_37 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_37 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_37 reset", false,-1);
        vcdp->declBus(c+297,"SystolicFIR shiftRegister_37 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+25,"SystolicFIR shiftRegister_37 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+25,"SystolicFIR shiftRegister_38 input_1", false,-1, 15,0);
        vcdp->declBus(c+33,"SystolicFIR shiftRegister_38 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_38 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_38 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_38 reset", false,-1);
        vcdp->declBus(c+305,"SystolicFIR shiftRegister_38 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+33,"SystolicFIR shiftRegister_38 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+33,"SystolicFIR shiftRegister_39 input_1", false,-1, 15,0);
        vcdp->declBus(c+41,"SystolicFIR shiftRegister_39 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_39 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_39 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_39 reset", false,-1);
        vcdp->declBus(c+313,"SystolicFIR shiftRegister_39 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+41,"SystolicFIR shiftRegister_39 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+41,"SystolicFIR shiftRegister_40 input_1", false,-1, 15,0);
        vcdp->declBus(c+49,"SystolicFIR shiftRegister_40 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_40 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_40 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_40 reset", false,-1);
        vcdp->declBus(c+321,"SystolicFIR shiftRegister_40 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+49,"SystolicFIR shiftRegister_40 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+49,"SystolicFIR shiftRegister_41 input_1", false,-1, 15,0);
        vcdp->declBus(c+57,"SystolicFIR shiftRegister_41 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_41 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_41 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_41 reset", false,-1);
        vcdp->declBus(c+329,"SystolicFIR shiftRegister_41 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+57,"SystolicFIR shiftRegister_41 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+57,"SystolicFIR shiftRegister_42 input_1", false,-1, 15,0);
        vcdp->declBus(c+65,"SystolicFIR shiftRegister_42 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_42 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_42 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_42 reset", false,-1);
        vcdp->declBus(c+337,"SystolicFIR shiftRegister_42 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+65,"SystolicFIR shiftRegister_42 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+65,"SystolicFIR shiftRegister_43 input_1", false,-1, 15,0);
        vcdp->declBus(c+73,"SystolicFIR shiftRegister_43 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_43 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_43 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_43 reset", false,-1);
        vcdp->declBus(c+345,"SystolicFIR shiftRegister_43 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+73,"SystolicFIR shiftRegister_43 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+73,"SystolicFIR shiftRegister_44 input_1", false,-1, 15,0);
        vcdp->declBus(c+81,"SystolicFIR shiftRegister_44 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_44 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_44 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_44 reset", false,-1);
        vcdp->declBus(c+353,"SystolicFIR shiftRegister_44 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+81,"SystolicFIR shiftRegister_44 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+81,"SystolicFIR shiftRegister_45 input_1", false,-1, 15,0);
        vcdp->declBus(c+89,"SystolicFIR shiftRegister_45 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_45 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_45 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_45 reset", false,-1);
        vcdp->declBus(c+361,"SystolicFIR shiftRegister_45 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+89,"SystolicFIR shiftRegister_45 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+89,"SystolicFIR shiftRegister_46 input_1", false,-1, 15,0);
        vcdp->declBus(c+97,"SystolicFIR shiftRegister_46 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_46 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_46 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_46 reset", false,-1);
        vcdp->declBus(c+369,"SystolicFIR shiftRegister_46 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+97,"SystolicFIR shiftRegister_46 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+97,"SystolicFIR shiftRegister_47 input_1", false,-1, 15,0);
        vcdp->declBus(c+105,"SystolicFIR shiftRegister_47 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_47 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_47 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_47 reset", false,-1);
        vcdp->declBus(c+377,"SystolicFIR shiftRegister_47 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+105,"SystolicFIR shiftRegister_47 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+105,"SystolicFIR shiftRegister_48 input_1", false,-1, 15,0);
        vcdp->declBus(c+113,"SystolicFIR shiftRegister_48 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_48 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_48 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_48 reset", false,-1);
        vcdp->declBus(c+385,"SystolicFIR shiftRegister_48 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+113,"SystolicFIR shiftRegister_48 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+113,"SystolicFIR shiftRegister_49 input_1", false,-1, 15,0);
        vcdp->declBus(c+121,"SystolicFIR shiftRegister_49 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_49 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_49 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_49 reset", false,-1);
        vcdp->declBus(c+393,"SystolicFIR shiftRegister_49 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+121,"SystolicFIR shiftRegister_49 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+121,"SystolicFIR shiftRegister_50 input_1", false,-1, 15,0);
        vcdp->declBus(c+129,"SystolicFIR shiftRegister_50 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_50 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_50 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_50 reset", false,-1);
        vcdp->declBus(c+401,"SystolicFIR shiftRegister_50 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+129,"SystolicFIR shiftRegister_50 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+561,"SystolicFIR shiftRegister_51 input_1", false,-1, 15,0);
        vcdp->declBus(c+137,"SystolicFIR shiftRegister_51 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_51 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_51 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_51 reset", false,-1);
        vcdp->declBus(c+409,"SystolicFIR shiftRegister_51 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+137,"SystolicFIR shiftRegister_51 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+137,"SystolicFIR shiftRegister_52 input_1", false,-1, 15,0);
        vcdp->declBus(c+145,"SystolicFIR shiftRegister_52 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_52 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_52 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_52 reset", false,-1);
        vcdp->declBus(c+417,"SystolicFIR shiftRegister_52 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+145,"SystolicFIR shiftRegister_52 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+145,"SystolicFIR shiftRegister_53 input_1", false,-1, 15,0);
        vcdp->declBus(c+153,"SystolicFIR shiftRegister_53 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_53 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_53 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_53 reset", false,-1);
        vcdp->declBus(c+425,"SystolicFIR shiftRegister_53 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+153,"SystolicFIR shiftRegister_53 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+153,"SystolicFIR shiftRegister_54 input_1", false,-1, 15,0);
        vcdp->declBus(c+161,"SystolicFIR shiftRegister_54 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_54 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_54 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_54 reset", false,-1);
        vcdp->declBus(c+433,"SystolicFIR shiftRegister_54 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+161,"SystolicFIR shiftRegister_54 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+161,"SystolicFIR shiftRegister_55 input_1", false,-1, 15,0);
        vcdp->declBus(c+169,"SystolicFIR shiftRegister_55 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_55 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_55 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_55 reset", false,-1);
        vcdp->declBus(c+441,"SystolicFIR shiftRegister_55 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+169,"SystolicFIR shiftRegister_55 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+169,"SystolicFIR shiftRegister_56 input_1", false,-1, 15,0);
        vcdp->declBus(c+177,"SystolicFIR shiftRegister_56 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_56 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_56 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_56 reset", false,-1);
        vcdp->declBus(c+449,"SystolicFIR shiftRegister_56 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+177,"SystolicFIR shiftRegister_56 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+177,"SystolicFIR shiftRegister_57 input_1", false,-1, 15,0);
        vcdp->declBus(c+185,"SystolicFIR shiftRegister_57 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_57 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_57 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_57 reset", false,-1);
        vcdp->declBus(c+457,"SystolicFIR shiftRegister_57 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+185,"SystolicFIR shiftRegister_57 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+185,"SystolicFIR shiftRegister_58 input_1", false,-1, 15,0);
        vcdp->declBus(c+193,"SystolicFIR shiftRegister_58 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_58 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_58 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_58 reset", false,-1);
        vcdp->declBus(c+465,"SystolicFIR shiftRegister_58 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+193,"SystolicFIR shiftRegister_58 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+193,"SystolicFIR shiftRegister_59 input_1", false,-1, 15,0);
        vcdp->declBus(c+201,"SystolicFIR shiftRegister_59 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_59 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_59 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_59 reset", false,-1);
        vcdp->declBus(c+473,"SystolicFIR shiftRegister_59 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+201,"SystolicFIR shiftRegister_59 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+201,"SystolicFIR shiftRegister_60 input_1", false,-1, 15,0);
        vcdp->declBus(c+209,"SystolicFIR shiftRegister_60 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_60 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_60 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_60 reset", false,-1);
        vcdp->declBus(c+481,"SystolicFIR shiftRegister_60 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+209,"SystolicFIR shiftRegister_60 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+209,"SystolicFIR shiftRegister_61 input_1", false,-1, 15,0);
        vcdp->declBus(c+217,"SystolicFIR shiftRegister_61 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_61 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_61 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_61 reset", false,-1);
        vcdp->declBus(c+489,"SystolicFIR shiftRegister_61 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+217,"SystolicFIR shiftRegister_61 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+217,"SystolicFIR shiftRegister_62 input_1", false,-1, 15,0);
        vcdp->declBus(c+225,"SystolicFIR shiftRegister_62 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_62 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_62 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_62 reset", false,-1);
        vcdp->declBus(c+497,"SystolicFIR shiftRegister_62 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+225,"SystolicFIR shiftRegister_62 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+225,"SystolicFIR shiftRegister_63 input_1", false,-1, 15,0);
        vcdp->declBus(c+233,"SystolicFIR shiftRegister_63 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_63 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_63 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_63 reset", false,-1);
        vcdp->declBus(c+505,"SystolicFIR shiftRegister_63 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+233,"SystolicFIR shiftRegister_63 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+233,"SystolicFIR shiftRegister_64 input_1", false,-1, 15,0);
        vcdp->declBus(c+241,"SystolicFIR shiftRegister_64 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_64 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_64 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_64 reset", false,-1);
        vcdp->declBus(c+513,"SystolicFIR shiftRegister_64 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+241,"SystolicFIR shiftRegister_64 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+241,"SystolicFIR shiftRegister_65 input_1", false,-1, 15,0);
        vcdp->declBus(c+249,"SystolicFIR shiftRegister_65 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_65 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_65 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_65 reset", false,-1);
        vcdp->declBus(c+521,"SystolicFIR shiftRegister_65 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+249,"SystolicFIR shiftRegister_65 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+249,"SystolicFIR shiftRegister_66 input_1", false,-1, 15,0);
        vcdp->declBus(c+257,"SystolicFIR shiftRegister_66 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_66 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_66 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_66 reset", false,-1);
        vcdp->declBus(c+529,"SystolicFIR shiftRegister_66 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+257,"SystolicFIR shiftRegister_66 shift_reg_1", false,-1, 15,0);
        vcdp->declBus(c+257,"SystolicFIR shiftRegister_67 input_1", false,-1, 15,0);
        vcdp->declBus(c+265,"SystolicFIR shiftRegister_67 output_1", false,-1, 15,0);
        vcdp->declBit(c+609,"SystolicFIR shiftRegister_67 enable", false,-1);
        vcdp->declBit(c+593,"SystolicFIR shiftRegister_67 clk", false,-1);
        vcdp->declBit(c+601,"SystolicFIR shiftRegister_67 reset", false,-1);
        vcdp->declBus(c+537,"SystolicFIR shiftRegister_67 shift_reg_0", false,-1, 15,0);
        vcdp->declBus(c+265,"SystolicFIR shiftRegister_67 shift_reg_1", false,-1, 15,0);
    }
}

void VSystolicFIR::traceFullThis__1(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->SystolicFIR__DOT__shiftRegister_34__DOT__shift_reg_1),16);
        vcdp->fullBus(c+9,(vlTOPp->SystolicFIR__DOT__shiftRegister_35__DOT__shift_reg_1),16);
        vcdp->fullBus(c+17,(vlTOPp->SystolicFIR__DOT__shiftRegister_36__DOT__shift_reg_1),16);
        vcdp->fullBus(c+25,(vlTOPp->SystolicFIR__DOT__shiftRegister_37__DOT__shift_reg_1),16);
        vcdp->fullBus(c+33,(vlTOPp->SystolicFIR__DOT__shiftRegister_38__DOT__shift_reg_1),16);
        vcdp->fullBus(c+41,(vlTOPp->SystolicFIR__DOT__shiftRegister_39__DOT__shift_reg_1),16);
        vcdp->fullBus(c+49,(vlTOPp->SystolicFIR__DOT__shiftRegister_40__DOT__shift_reg_1),16);
        vcdp->fullBus(c+57,(vlTOPp->SystolicFIR__DOT__shiftRegister_41__DOT__shift_reg_1),16);
        vcdp->fullBus(c+65,(vlTOPp->SystolicFIR__DOT__shiftRegister_42__DOT__shift_reg_1),16);
        vcdp->fullBus(c+73,(vlTOPp->SystolicFIR__DOT__shiftRegister_43__DOT__shift_reg_1),16);
        vcdp->fullBus(c+81,(vlTOPp->SystolicFIR__DOT__shiftRegister_44__DOT__shift_reg_1),16);
        vcdp->fullBus(c+89,(vlTOPp->SystolicFIR__DOT__shiftRegister_45__DOT__shift_reg_1),16);
        vcdp->fullBus(c+97,(vlTOPp->SystolicFIR__DOT__shiftRegister_46__DOT__shift_reg_1),16);
        vcdp->fullBus(c+105,(vlTOPp->SystolicFIR__DOT__shiftRegister_47__DOT__shift_reg_1),16);
        vcdp->fullBus(c+113,(vlTOPp->SystolicFIR__DOT__shiftRegister_48__DOT__shift_reg_1),16);
        vcdp->fullBus(c+121,(vlTOPp->SystolicFIR__DOT__shiftRegister_49__DOT__shift_reg_1),16);
        vcdp->fullBus(c+129,(vlTOPp->SystolicFIR__DOT__shiftRegister_50__DOT__shift_reg_1),16);
        vcdp->fullBus(c+137,(vlTOPp->SystolicFIR__DOT__shiftRegister_51__DOT__shift_reg_1),16);
        vcdp->fullBus(c+145,(vlTOPp->SystolicFIR__DOT__shiftRegister_52__DOT__shift_reg_1),16);
        vcdp->fullBus(c+153,(vlTOPp->SystolicFIR__DOT__shiftRegister_53__DOT__shift_reg_1),16);
        vcdp->fullBus(c+161,(vlTOPp->SystolicFIR__DOT__shiftRegister_54__DOT__shift_reg_1),16);
        vcdp->fullBus(c+169,(vlTOPp->SystolicFIR__DOT__shiftRegister_55__DOT__shift_reg_1),16);
        vcdp->fullBus(c+177,(vlTOPp->SystolicFIR__DOT__shiftRegister_56__DOT__shift_reg_1),16);
        vcdp->fullBus(c+185,(vlTOPp->SystolicFIR__DOT__shiftRegister_57__DOT__shift_reg_1),16);
        vcdp->fullBus(c+193,(vlTOPp->SystolicFIR__DOT__shiftRegister_58__DOT__shift_reg_1),16);
        vcdp->fullBus(c+201,(vlTOPp->SystolicFIR__DOT__shiftRegister_59__DOT__shift_reg_1),16);
        vcdp->fullBus(c+209,(vlTOPp->SystolicFIR__DOT__shiftRegister_60__DOT__shift_reg_1),16);
        vcdp->fullBus(c+217,(vlTOPp->SystolicFIR__DOT__shiftRegister_61__DOT__shift_reg_1),16);
        vcdp->fullBus(c+225,(vlTOPp->SystolicFIR__DOT__shiftRegister_62__DOT__shift_reg_1),16);
        vcdp->fullBus(c+233,(vlTOPp->SystolicFIR__DOT__shiftRegister_63__DOT__shift_reg_1),16);
        vcdp->fullBus(c+241,(vlTOPp->SystolicFIR__DOT__shiftRegister_64__DOT__shift_reg_1),16);
        vcdp->fullBus(c+249,(vlTOPp->SystolicFIR__DOT__shiftRegister_65__DOT__shift_reg_1),16);
        vcdp->fullBus(c+257,(vlTOPp->SystolicFIR__DOT__shiftRegister_66__DOT__shift_reg_1),16);
        vcdp->fullBus(c+265,(vlTOPp->SystolicFIR__DOT__shiftRegister_67__DOT__shift_reg_1),16);
        vcdp->fullBus(c+273,(vlTOPp->SystolicFIR__DOT__shiftRegister_34__DOT__shift_reg_0),16);
        vcdp->fullBus(c+281,(vlTOPp->SystolicFIR__DOT__shiftRegister_35__DOT__shift_reg_0),16);
        vcdp->fullBus(c+289,(vlTOPp->SystolicFIR__DOT__shiftRegister_36__DOT__shift_reg_0),16);
        vcdp->fullBus(c+297,(vlTOPp->SystolicFIR__DOT__shiftRegister_37__DOT__shift_reg_0),16);
        vcdp->fullBus(c+305,(vlTOPp->SystolicFIR__DOT__shiftRegister_38__DOT__shift_reg_0),16);
        vcdp->fullBus(c+313,(vlTOPp->SystolicFIR__DOT__shiftRegister_39__DOT__shift_reg_0),16);
        vcdp->fullBus(c+321,(vlTOPp->SystolicFIR__DOT__shiftRegister_40__DOT__shift_reg_0),16);
        vcdp->fullBus(c+329,(vlTOPp->SystolicFIR__DOT__shiftRegister_41__DOT__shift_reg_0),16);
        vcdp->fullBus(c+337,(vlTOPp->SystolicFIR__DOT__shiftRegister_42__DOT__shift_reg_0),16);
        vcdp->fullBus(c+345,(vlTOPp->SystolicFIR__DOT__shiftRegister_43__DOT__shift_reg_0),16);
        vcdp->fullBus(c+353,(vlTOPp->SystolicFIR__DOT__shiftRegister_44__DOT__shift_reg_0),16);
        vcdp->fullBus(c+361,(vlTOPp->SystolicFIR__DOT__shiftRegister_45__DOT__shift_reg_0),16);
        vcdp->fullBus(c+369,(vlTOPp->SystolicFIR__DOT__shiftRegister_46__DOT__shift_reg_0),16);
        vcdp->fullBus(c+377,(vlTOPp->SystolicFIR__DOT__shiftRegister_47__DOT__shift_reg_0),16);
        vcdp->fullBus(c+385,(vlTOPp->SystolicFIR__DOT__shiftRegister_48__DOT__shift_reg_0),16);
        vcdp->fullBus(c+393,(vlTOPp->SystolicFIR__DOT__shiftRegister_49__DOT__shift_reg_0),16);
        vcdp->fullBus(c+401,(vlTOPp->SystolicFIR__DOT__shiftRegister_50__DOT__shift_reg_0),16);
        vcdp->fullBus(c+409,(vlTOPp->SystolicFIR__DOT__shiftRegister_51__DOT__shift_reg_0),16);
        vcdp->fullBus(c+417,(vlTOPp->SystolicFIR__DOT__shiftRegister_52__DOT__shift_reg_0),16);
        vcdp->fullBus(c+425,(vlTOPp->SystolicFIR__DOT__shiftRegister_53__DOT__shift_reg_0),16);
        vcdp->fullBus(c+433,(vlTOPp->SystolicFIR__DOT__shiftRegister_54__DOT__shift_reg_0),16);
        vcdp->fullBus(c+441,(vlTOPp->SystolicFIR__DOT__shiftRegister_55__DOT__shift_reg_0),16);
        vcdp->fullBus(c+449,(vlTOPp->SystolicFIR__DOT__shiftRegister_56__DOT__shift_reg_0),16);
        vcdp->fullBus(c+457,(vlTOPp->SystolicFIR__DOT__shiftRegister_57__DOT__shift_reg_0),16);
        vcdp->fullBus(c+465,(vlTOPp->SystolicFIR__DOT__shiftRegister_58__DOT__shift_reg_0),16);
        vcdp->fullBus(c+473,(vlTOPp->SystolicFIR__DOT__shiftRegister_59__DOT__shift_reg_0),16);
        vcdp->fullBus(c+481,(vlTOPp->SystolicFIR__DOT__shiftRegister_60__DOT__shift_reg_0),16);
        vcdp->fullBus(c+489,(vlTOPp->SystolicFIR__DOT__shiftRegister_61__DOT__shift_reg_0),16);
        vcdp->fullBus(c+497,(vlTOPp->SystolicFIR__DOT__shiftRegister_62__DOT__shift_reg_0),16);
        vcdp->fullBus(c+505,(vlTOPp->SystolicFIR__DOT__shiftRegister_63__DOT__shift_reg_0),16);
        vcdp->fullBus(c+513,(vlTOPp->SystolicFIR__DOT__shiftRegister_64__DOT__shift_reg_0),16);
        vcdp->fullBus(c+521,(vlTOPp->SystolicFIR__DOT__shiftRegister_65__DOT__shift_reg_0),16);
        vcdp->fullBus(c+529,(vlTOPp->SystolicFIR__DOT__shiftRegister_66__DOT__shift_reg_0),16);
        vcdp->fullBus(c+537,(vlTOPp->SystolicFIR__DOT__shiftRegister_67__DOT__shift_reg_0),16);
        vcdp->fullBit(c+545,(vlTOPp->raw_data_valid));
        vcdp->fullBus(c+553,(vlTOPp->raw_data_payload_cha_i),16);
        vcdp->fullBus(c+561,(vlTOPp->raw_data_payload_cha_q),16);
        vcdp->fullBit(c+569,(vlTOPp->filtered_data_valid));
        vcdp->fullBus(c+577,(vlTOPp->filtered_data_payload_cha_i),24);
        vcdp->fullBus(c+585,(vlTOPp->filtered_data_payload_cha_q),24);
        vcdp->fullBit(c+593,(vlTOPp->clk));
        vcdp->fullBit(c+601,(vlTOPp->reset));
        vcdp->fullBit(c+609,(1U));
    }
}
