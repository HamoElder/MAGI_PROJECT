// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VR2MDC__Syms.h"


//======================

void VR2MDC::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VR2MDC::traceInit, &VR2MDC::traceFull, &VR2MDC::traceChg, this);
}
void VR2MDC::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VR2MDC* t = (VR2MDC*)userthis;
    VR2MDC__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VR2MDC::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VR2MDC* t = (VR2MDC*)userthis;
    VR2MDC__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VR2MDC::traceInitThis(VR2MDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
        vlTOPp->traceInitThis__2(vlSymsp, vcdp, code);
    }
}

void VR2MDC::traceFullThis(VR2MDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
        vlTOPp->traceFullThis__7(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VR2MDC::traceInitThis__1(VR2MDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+3201,"mode", false,-1);
        vcdp->declBit(c+3209,"raw_data_valid", false,-1);
        vcdp->declBit(c+3217,"raw_data_ready", false,-1);
        vcdp->declBus(c+3225,"raw_data_payload_re", false,-1, 23,0);
        vcdp->declBus(c+3233,"raw_data_payload_im", false,-1, 23,0);
        vcdp->declBit(c+3241,"result_valid", false,-1);
        vcdp->declBit(c+3249,"result_payload_last", false,-1);
        vcdp->declBus(c+3257,"result_payload_fragment_re", false,-1, 23,0);
        vcdp->declBus(c+3265,"result_payload_fragment_im", false,-1, 23,0);
        vcdp->declBit(c+3273,"clk", false,-1);
        vcdp->declBit(c+3281,"reset", false,-1);
        vcdp->declBit(c+3201,"R2MDC mode", false,-1);
        vcdp->declBit(c+3209,"R2MDC raw_data_valid", false,-1);
        vcdp->declBit(c+3217,"R2MDC raw_data_ready", false,-1);
        vcdp->declBus(c+3225,"R2MDC raw_data_payload_re", false,-1, 23,0);
        vcdp->declBus(c+3233,"R2MDC raw_data_payload_im", false,-1, 23,0);
        vcdp->declBit(c+3241,"R2MDC result_valid", false,-1);
        vcdp->declBit(c+3249,"R2MDC result_payload_last", false,-1);
        vcdp->declBus(c+3257,"R2MDC result_payload_fragment_re", false,-1, 23,0);
        vcdp->declBus(c+3265,"R2MDC result_payload_fragment_im", false,-1, 23,0);
        vcdp->declBit(c+3273,"R2MDC clk", false,-1);
        vcdp->declBit(c+3281,"R2MDC reset", false,-1);
        vcdp->declBus(c+489,"R2MDC r2Butterfly_5_wn_re", false,-1, 23,0);
        vcdp->declBus(c+177,"R2MDC r2Butterfly_5_wn_im", false,-1, 23,0);
        vcdp->declBit(c+3121,"R2MDC r2Switch_5_sel", false,-1);
        vcdp->declBus(c+497,"R2MDC r2Butterfly_6_wn_re", false,-1, 23,0);
        vcdp->declBus(c+185,"R2MDC r2Butterfly_6_wn_im", false,-1, 23,0);
        vcdp->declBit(c+3129,"R2MDC r2Switch_6_sel", false,-1);
        vcdp->declBus(c+505,"R2MDC r2Butterfly_7_wn_re", false,-1, 23,0);
        vcdp->declBus(c+193,"R2MDC r2Butterfly_7_wn_im", false,-1, 23,0);
        vcdp->declBit(c+3137,"R2MDC r2Switch_7_sel", false,-1);
        vcdp->declBus(c+513,"R2MDC r2Butterfly_8_wn_re", false,-1, 23,0);
        vcdp->declBus(c+201,"R2MDC r2Butterfly_8_wn_im", false,-1, 23,0);
        vcdp->declBit(c+3145,"R2MDC r2Switch_8_sel", false,-1);
        vcdp->declBus(c+521,"R2MDC r2Butterfly_9_wn_re", false,-1, 23,0);
        vcdp->declBus(c+209,"R2MDC r2Butterfly_9_wn_im", false,-1, 23,0);
        vcdp->declBit(c+3153,"R2MDC r2Switch_9_sel", false,-1);
        vcdp->declBit(c+3161,"R2MDC reorder_1_unsorted_valid", false,-1);
        vcdp->declBus(c+529,"R2MDC shiftRegister_10_output_re", false,-1, 23,0);
        vcdp->declBus(c+537,"R2MDC shiftRegister_10_output_im", false,-1, 23,0);
        vcdp->declBus(c+217,"R2MDC r2Butterfly_5_out1_re", false,-1, 23,0);
        vcdp->declBus(c+225,"R2MDC r2Butterfly_5_out1_im", false,-1, 23,0);
        vcdp->declBus(c+81,"R2MDC r2Butterfly_5_out2_re", false,-1, 23,0);
        vcdp->declBus(c+89,"R2MDC r2Butterfly_5_out2_im", false,-1, 23,0);
        vcdp->declBus(c+545,"R2MDC shiftRegister_11_output_re", false,-1, 23,0);
        vcdp->declBus(c+553,"R2MDC shiftRegister_11_output_im", false,-1, 23,0);
        vcdp->declBus(c+1,"R2MDC r2Switch_5_out1_re", false,-1, 23,0);
        vcdp->declBus(c+9,"R2MDC r2Switch_5_out1_im", false,-1, 23,0);
        vcdp->declBus(c+233,"R2MDC r2Switch_5_out2_re", false,-1, 23,0);
        vcdp->declBus(c+241,"R2MDC r2Switch_5_out2_im", false,-1, 23,0);
        vcdp->declBus(c+561,"R2MDC shiftRegister_12_output_re", false,-1, 23,0);
        vcdp->declBus(c+569,"R2MDC shiftRegister_12_output_im", false,-1, 23,0);
        vcdp->declBus(c+249,"R2MDC r2Butterfly_6_out1_re", false,-1, 23,0);
        vcdp->declBus(c+257,"R2MDC r2Butterfly_6_out1_im", false,-1, 23,0);
        vcdp->declBus(c+97,"R2MDC r2Butterfly_6_out2_re", false,-1, 23,0);
        vcdp->declBus(c+105,"R2MDC r2Butterfly_6_out2_im", false,-1, 23,0);
        vcdp->declBus(c+577,"R2MDC shiftRegister_13_output_re", false,-1, 23,0);
        vcdp->declBus(c+585,"R2MDC shiftRegister_13_output_im", false,-1, 23,0);
        vcdp->declBus(c+17,"R2MDC r2Switch_6_out1_re", false,-1, 23,0);
        vcdp->declBus(c+25,"R2MDC r2Switch_6_out1_im", false,-1, 23,0);
        vcdp->declBus(c+265,"R2MDC r2Switch_6_out2_re", false,-1, 23,0);
        vcdp->declBus(c+273,"R2MDC r2Switch_6_out2_im", false,-1, 23,0);
        vcdp->declBus(c+593,"R2MDC shiftRegister_14_output_re", false,-1, 23,0);
        vcdp->declBus(c+601,"R2MDC shiftRegister_14_output_im", false,-1, 23,0);
        vcdp->declBus(c+281,"R2MDC r2Butterfly_7_out1_re", false,-1, 23,0);
        vcdp->declBus(c+289,"R2MDC r2Butterfly_7_out1_im", false,-1, 23,0);
        vcdp->declBus(c+113,"R2MDC r2Butterfly_7_out2_re", false,-1, 23,0);
        vcdp->declBus(c+121,"R2MDC r2Butterfly_7_out2_im", false,-1, 23,0);
        vcdp->declBus(c+609,"R2MDC shiftRegister_15_output_re", false,-1, 23,0);
        vcdp->declBus(c+617,"R2MDC shiftRegister_15_output_im", false,-1, 23,0);
        vcdp->declBus(c+33,"R2MDC r2Switch_7_out1_re", false,-1, 23,0);
        vcdp->declBus(c+41,"R2MDC r2Switch_7_out1_im", false,-1, 23,0);
        vcdp->declBus(c+297,"R2MDC r2Switch_7_out2_re", false,-1, 23,0);
        vcdp->declBus(c+305,"R2MDC r2Switch_7_out2_im", false,-1, 23,0);
        vcdp->declBus(c+625,"R2MDC shiftRegister_16_output_re", false,-1, 23,0);
        vcdp->declBus(c+633,"R2MDC shiftRegister_16_output_im", false,-1, 23,0);
        vcdp->declBus(c+313,"R2MDC r2Butterfly_8_out1_re", false,-1, 23,0);
        vcdp->declBus(c+321,"R2MDC r2Butterfly_8_out1_im", false,-1, 23,0);
        vcdp->declBus(c+129,"R2MDC r2Butterfly_8_out2_re", false,-1, 23,0);
        vcdp->declBus(c+137,"R2MDC r2Butterfly_8_out2_im", false,-1, 23,0);
        vcdp->declBus(c+641,"R2MDC shiftRegister_17_output_re", false,-1, 23,0);
        vcdp->declBus(c+649,"R2MDC shiftRegister_17_output_im", false,-1, 23,0);
        vcdp->declBus(c+49,"R2MDC r2Switch_8_out1_re", false,-1, 23,0);
        vcdp->declBus(c+57,"R2MDC r2Switch_8_out1_im", false,-1, 23,0);
        vcdp->declBus(c+329,"R2MDC r2Switch_8_out2_re", false,-1, 23,0);
        vcdp->declBus(c+337,"R2MDC r2Switch_8_out2_im", false,-1, 23,0);
        vcdp->declBus(c+657,"R2MDC shiftRegister_18_output_re", false,-1, 23,0);
        vcdp->declBus(c+665,"R2MDC shiftRegister_18_output_im", false,-1, 23,0);
        vcdp->declBus(c+345,"R2MDC r2Butterfly_9_out1_re", false,-1, 23,0);
        vcdp->declBus(c+353,"R2MDC r2Butterfly_9_out1_im", false,-1, 23,0);
        vcdp->declBus(c+145,"R2MDC r2Butterfly_9_out2_re", false,-1, 23,0);
        vcdp->declBus(c+153,"R2MDC r2Butterfly_9_out2_im", false,-1, 23,0);
        vcdp->declBus(c+673,"R2MDC shiftRegister_19_output_re", false,-1, 23,0);
        vcdp->declBus(c+681,"R2MDC shiftRegister_19_output_im", false,-1, 23,0);
        vcdp->declBus(c+65,"R2MDC r2Switch_9_out1_re", false,-1, 23,0);
        vcdp->declBus(c+73,"R2MDC r2Switch_9_out1_im", false,-1, 23,0);
        vcdp->declBus(c+361,"R2MDC r2Switch_9_out2_re", false,-1, 23,0);
        vcdp->declBus(c+369,"R2MDC r2Switch_9_out2_im", false,-1, 23,0);
        vcdp->declBit(c+689,"R2MDC reorder_1_sorted_valid", false,-1);
        vcdp->declBit(c+3113,"R2MDC reorder_1_sorted_payload_last", false,-1);
        vcdp->declBus(c+697,"R2MDC reorder_1_sorted_payload_fragment_re", false,-1, 23,0);
        vcdp->declBus(c+705,"R2MDC reorder_1_sorted_payload_fragment_im", false,-1, 23,0);
        vcdp->declBus(c+3169,"R2MDC cnt", false,-1, 6,0);
        vcdp->declBit(c+3289,"R2MDC raw_data_fire", false,-1);
        vcdp->declBit(c+3297,"R2MDC when_R2MDC_l20", false,-1);
        vcdp->declBus(c+3225,"R2MDC out0_buf_0_re", false,-1, 23,0);
        vcdp->declBus(c+3233,"R2MDC out0_buf_0_im", false,-1, 23,0);
        vcdp->declBus(c+1,"R2MDC out0_buf_1_re", false,-1, 23,0);
        vcdp->declBus(c+9,"R2MDC out0_buf_1_im", false,-1, 23,0);
        vcdp->declBus(c+17,"R2MDC out0_buf_2_re", false,-1, 23,0);
        vcdp->declBus(c+25,"R2MDC out0_buf_2_im", false,-1, 23,0);
        vcdp->declBus(c+33,"R2MDC out0_buf_3_re", false,-1, 23,0);
        vcdp->declBus(c+41,"R2MDC out0_buf_3_im", false,-1, 23,0);
        vcdp->declBus(c+49,"R2MDC out0_buf_4_re", false,-1, 23,0);
        vcdp->declBus(c+57,"R2MDC out0_buf_4_im", false,-1, 23,0);
        vcdp->declBus(c+65,"R2MDC out0_buf_5_re", false,-1, 23,0);
        vcdp->declBus(c+73,"R2MDC out0_buf_5_im", false,-1, 23,0);
        vcdp->declBus(c+377,"R2MDC out0_buf_6_re", false,-1, 23,0);
        vcdp->declBus(c+385,"R2MDC out0_buf_6_im", false,-1, 23,0);
        vcdp->declBus(c+3225,"R2MDC out1_buf_0_re", false,-1, 23,0);
        vcdp->declBus(c+3233,"R2MDC out1_buf_0_im", false,-1, 23,0);
        vcdp->declBus(c+233,"R2MDC out1_buf_1_re", false,-1, 23,0);
        vcdp->declBus(c+241,"R2MDC out1_buf_1_im", false,-1, 23,0);
        vcdp->declBus(c+265,"R2MDC out1_buf_2_re", false,-1, 23,0);
        vcdp->declBus(c+273,"R2MDC out1_buf_2_im", false,-1, 23,0);
        vcdp->declBus(c+297,"R2MDC out1_buf_3_re", false,-1, 23,0);
        vcdp->declBus(c+305,"R2MDC out1_buf_3_im", false,-1, 23,0);
        vcdp->declBus(c+329,"R2MDC out1_buf_4_re", false,-1, 23,0);
        vcdp->declBus(c+337,"R2MDC out1_buf_4_im", false,-1, 23,0);
        vcdp->declBus(c+361,"R2MDC out1_buf_5_re", false,-1, 23,0);
        vcdp->declBus(c+369,"R2MDC out1_buf_5_im", false,-1, 23,0);
        vcdp->declBus(c+393,"R2MDC out1_buf_6_re", false,-1, 23,0);
        vcdp->declBus(c+401,"R2MDC out1_buf_6_im", false,-1, 23,0);
        vcdp->declBus(c+3177,"R2MDC cnt_p1", false,-1, 6,0);
        vcdp->declBus(c+713,"R2MDC out1D1_re", false,-1, 23,0);
        vcdp->declBus(c+721,"R2MDC out1D1_im", false,-1, 23,0);
        vcdp->declBus(c+3305,"R2MDC result_out1_re", false,-1, 23,0);
        vcdp->declBus(c+3313,"R2MDC result_out1_im", false,-1, 23,0);
        vcdp->declBus(c+3321,"R2MDC result_out2_re", false,-1, 23,0);
        vcdp->declBus(c+3329,"R2MDC result_out2_im", false,-1, 23,0);
        vcdp->declBus(c+729,"R2MDC result_out1_regNext_re", false,-1, 23,0);
        vcdp->declBus(c+737,"R2MDC result_out1_regNext_im", false,-1, 23,0);
        vcdp->declBus(c+745,"R2MDC result_out2_regNext_re", false,-1, 23,0);
        vcdp->declBus(c+753,"R2MDC result_out2_regNext_im", false,-1, 23,0);
        vcdp->declBus(c+3225,"R2MDC shiftRegister_10 input_re", false,-1, 23,0);
        vcdp->declBus(c+3233,"R2MDC shiftRegister_10 input_im", false,-1, 23,0);
        vcdp->declBus(c+529,"R2MDC shiftRegister_10 output_re", false,-1, 23,0);
        vcdp->declBus(c+537,"R2MDC shiftRegister_10 output_im", false,-1, 23,0);
        vcdp->declBit(c+3337,"R2MDC shiftRegister_10 enable", false,-1);
        vcdp->declBit(c+3273,"R2MDC shiftRegister_10 clk", false,-1);
        vcdp->declBit(c+3281,"R2MDC shiftRegister_10 reset", false,-1);
        vcdp->declBus(c+761,"R2MDC shiftRegister_10 shift_reg_0_re", false,-1, 23,0);
        vcdp->declBus(c+769,"R2MDC shiftRegister_10 shift_reg_0_im", false,-1, 23,0);
        vcdp->declBus(c+777,"R2MDC shiftRegister_10 shift_reg_1_re", false,-1, 23,0);
        vcdp->declBus(c+785,"R2MDC shiftRegister_10 shift_reg_1_im", false,-1, 23,0);
        vcdp->declBus(c+793,"R2MDC shiftRegister_10 shift_reg_2_re", false,-1, 23,0);
        vcdp->declBus(c+801,"R2MDC shiftRegister_10 shift_reg_2_im", false,-1, 23,0);
        vcdp->declBus(c+809,"R2MDC shiftRegister_10 shift_reg_3_re", false,-1, 23,0);
        vcdp->declBus(c+817,"R2MDC shiftRegister_10 shift_reg_3_im", false,-1, 23,0);
        vcdp->declBus(c+825,"R2MDC shiftRegister_10 shift_reg_4_re", false,-1, 23,0);
        vcdp->declBus(c+833,"R2MDC shiftRegister_10 shift_reg_4_im", false,-1, 23,0);
        vcdp->declBus(c+841,"R2MDC shiftRegister_10 shift_reg_5_re", false,-1, 23,0);
        vcdp->declBus(c+849,"R2MDC shiftRegister_10 shift_reg_5_im", false,-1, 23,0);
        vcdp->declBus(c+857,"R2MDC shiftRegister_10 shift_reg_6_re", false,-1, 23,0);
        vcdp->declBus(c+865,"R2MDC shiftRegister_10 shift_reg_6_im", false,-1, 23,0);
        vcdp->declBus(c+873,"R2MDC shiftRegister_10 shift_reg_7_re", false,-1, 23,0);
        vcdp->declBus(c+881,"R2MDC shiftRegister_10 shift_reg_7_im", false,-1, 23,0);
        vcdp->declBus(c+889,"R2MDC shiftRegister_10 shift_reg_8_re", false,-1, 23,0);
        vcdp->declBus(c+897,"R2MDC shiftRegister_10 shift_reg_8_im", false,-1, 23,0);
        vcdp->declBus(c+905,"R2MDC shiftRegister_10 shift_reg_9_re", false,-1, 23,0);
        vcdp->declBus(c+913,"R2MDC shiftRegister_10 shift_reg_9_im", false,-1, 23,0);
        vcdp->declBus(c+921,"R2MDC shiftRegister_10 shift_reg_10_re", false,-1, 23,0);
        vcdp->declBus(c+929,"R2MDC shiftRegister_10 shift_reg_10_im", false,-1, 23,0);
        vcdp->declBus(c+937,"R2MDC shiftRegister_10 shift_reg_11_re", false,-1, 23,0);
        vcdp->declBus(c+945,"R2MDC shiftRegister_10 shift_reg_11_im", false,-1, 23,0);
        vcdp->declBus(c+953,"R2MDC shiftRegister_10 shift_reg_12_re", false,-1, 23,0);
        vcdp->declBus(c+961,"R2MDC shiftRegister_10 shift_reg_12_im", false,-1, 23,0);
        vcdp->declBus(c+969,"R2MDC shiftRegister_10 shift_reg_13_re", false,-1, 23,0);
        vcdp->declBus(c+977,"R2MDC shiftRegister_10 shift_reg_13_im", false,-1, 23,0);
        vcdp->declBus(c+985,"R2MDC shiftRegister_10 shift_reg_14_re", false,-1, 23,0);
        vcdp->declBus(c+993,"R2MDC shiftRegister_10 shift_reg_14_im", false,-1, 23,0);
        vcdp->declBus(c+1001,"R2MDC shiftRegister_10 shift_reg_15_re", false,-1, 23,0);
        vcdp->declBus(c+1009,"R2MDC shiftRegister_10 shift_reg_15_im", false,-1, 23,0);
        vcdp->declBus(c+1017,"R2MDC shiftRegister_10 shift_reg_16_re", false,-1, 23,0);
        vcdp->declBus(c+1025,"R2MDC shiftRegister_10 shift_reg_16_im", false,-1, 23,0);
        vcdp->declBus(c+1033,"R2MDC shiftRegister_10 shift_reg_17_re", false,-1, 23,0);
        vcdp->declBus(c+1041,"R2MDC shiftRegister_10 shift_reg_17_im", false,-1, 23,0);
        vcdp->declBus(c+1049,"R2MDC shiftRegister_10 shift_reg_18_re", false,-1, 23,0);
        vcdp->declBus(c+1057,"R2MDC shiftRegister_10 shift_reg_18_im", false,-1, 23,0);
        vcdp->declBus(c+1065,"R2MDC shiftRegister_10 shift_reg_19_re", false,-1, 23,0);
        vcdp->declBus(c+1073,"R2MDC shiftRegister_10 shift_reg_19_im", false,-1, 23,0);
        vcdp->declBus(c+1081,"R2MDC shiftRegister_10 shift_reg_20_re", false,-1, 23,0);
        vcdp->declBus(c+1089,"R2MDC shiftRegister_10 shift_reg_20_im", false,-1, 23,0);
        vcdp->declBus(c+1097,"R2MDC shiftRegister_10 shift_reg_21_re", false,-1, 23,0);
        vcdp->declBus(c+1105,"R2MDC shiftRegister_10 shift_reg_21_im", false,-1, 23,0);
        vcdp->declBus(c+1113,"R2MDC shiftRegister_10 shift_reg_22_re", false,-1, 23,0);
        vcdp->declBus(c+1121,"R2MDC shiftRegister_10 shift_reg_22_im", false,-1, 23,0);
        vcdp->declBus(c+1129,"R2MDC shiftRegister_10 shift_reg_23_re", false,-1, 23,0);
        vcdp->declBus(c+1137,"R2MDC shiftRegister_10 shift_reg_23_im", false,-1, 23,0);
        vcdp->declBus(c+1145,"R2MDC shiftRegister_10 shift_reg_24_re", false,-1, 23,0);
        vcdp->declBus(c+1153,"R2MDC shiftRegister_10 shift_reg_24_im", false,-1, 23,0);
        vcdp->declBus(c+1161,"R2MDC shiftRegister_10 shift_reg_25_re", false,-1, 23,0);
        vcdp->declBus(c+1169,"R2MDC shiftRegister_10 shift_reg_25_im", false,-1, 23,0);
        vcdp->declBus(c+1177,"R2MDC shiftRegister_10 shift_reg_26_re", false,-1, 23,0);
        vcdp->declBus(c+1185,"R2MDC shiftRegister_10 shift_reg_26_im", false,-1, 23,0);
        vcdp->declBus(c+1193,"R2MDC shiftRegister_10 shift_reg_27_re", false,-1, 23,0);
        vcdp->declBus(c+1201,"R2MDC shiftRegister_10 shift_reg_27_im", false,-1, 23,0);
        vcdp->declBus(c+1209,"R2MDC shiftRegister_10 shift_reg_28_re", false,-1, 23,0);
        vcdp->declBus(c+1217,"R2MDC shiftRegister_10 shift_reg_28_im", false,-1, 23,0);
        vcdp->declBus(c+1225,"R2MDC shiftRegister_10 shift_reg_29_re", false,-1, 23,0);
        vcdp->declBus(c+1233,"R2MDC shiftRegister_10 shift_reg_29_im", false,-1, 23,0);
        vcdp->declBus(c+1241,"R2MDC shiftRegister_10 shift_reg_30_re", false,-1, 23,0);
        vcdp->declBus(c+1249,"R2MDC shiftRegister_10 shift_reg_30_im", false,-1, 23,0);
        vcdp->declBus(c+529,"R2MDC shiftRegister_10 shift_reg_31_re", false,-1, 23,0);
        vcdp->declBus(c+537,"R2MDC shiftRegister_10 shift_reg_31_im", false,-1, 23,0);
        vcdp->declBus(c+529,"R2MDC r2Butterfly_5 in1_re", false,-1, 23,0);
        vcdp->declBus(c+537,"R2MDC r2Butterfly_5 in1_im", false,-1, 23,0);
        vcdp->declBus(c+3225,"R2MDC r2Butterfly_5 in2_re", false,-1, 23,0);
        vcdp->declBus(c+3233,"R2MDC r2Butterfly_5 in2_im", false,-1, 23,0);
        vcdp->declBus(c+489,"R2MDC r2Butterfly_5 wn_re", false,-1, 23,0);
        vcdp->declBus(c+177,"R2MDC r2Butterfly_5 wn_im", false,-1, 23,0);
        vcdp->declBus(c+217,"R2MDC r2Butterfly_5 out1_re", false,-1, 23,0);
        vcdp->declBus(c+225,"R2MDC r2Butterfly_5 out1_im", false,-1, 23,0);
        vcdp->declBus(c+81,"R2MDC r2Butterfly_5 out2_re", false,-1, 23,0);
        vcdp->declBus(c+89,"R2MDC r2Butterfly_5 out2_im", false,-1, 23,0);
        vcdp->declBus(c+217,"R2MDC r2Butterfly_5 add_result_re", false,-1, 23,0);
        vcdp->declBus(c+225,"R2MDC r2Butterfly_5 add_result_im", false,-1, 23,0);
        vcdp->declBus(c+409,"R2MDC r2Butterfly_5 sub_result_re", false,-1, 23,0);
        vcdp->declBus(c+417,"R2MDC r2Butterfly_5 sub_result_im", false,-1, 23,0);
        vcdp->declBus(c+81,"R2MDC r2Butterfly_5 mul_result_re", false,-1, 23,0);
        vcdp->declBus(c+89,"R2MDC r2Butterfly_5 mul_result_im", false,-1, 23,0);
        vcdp->declBus(c+81,"R2MDC shiftRegister_11 input_re", false,-1, 23,0);
        vcdp->declBus(c+89,"R2MDC shiftRegister_11 input_im", false,-1, 23,0);
        vcdp->declBus(c+545,"R2MDC shiftRegister_11 output_re", false,-1, 23,0);
        vcdp->declBus(c+553,"R2MDC shiftRegister_11 output_im", false,-1, 23,0);
        vcdp->declBit(c+3337,"R2MDC shiftRegister_11 enable", false,-1);
        vcdp->declBit(c+3273,"R2MDC shiftRegister_11 clk", false,-1);
        vcdp->declBit(c+3281,"R2MDC shiftRegister_11 reset", false,-1);
        vcdp->declBus(c+1257,"R2MDC shiftRegister_11 shift_reg_0_re", false,-1, 23,0);
        vcdp->declBus(c+1265,"R2MDC shiftRegister_11 shift_reg_0_im", false,-1, 23,0);
        vcdp->declBus(c+1273,"R2MDC shiftRegister_11 shift_reg_1_re", false,-1, 23,0);
        vcdp->declBus(c+1281,"R2MDC shiftRegister_11 shift_reg_1_im", false,-1, 23,0);
        vcdp->declBus(c+1289,"R2MDC shiftRegister_11 shift_reg_2_re", false,-1, 23,0);
        vcdp->declBus(c+1297,"R2MDC shiftRegister_11 shift_reg_2_im", false,-1, 23,0);
        vcdp->declBus(c+1305,"R2MDC shiftRegister_11 shift_reg_3_re", false,-1, 23,0);
        vcdp->declBus(c+1313,"R2MDC shiftRegister_11 shift_reg_3_im", false,-1, 23,0);
        vcdp->declBus(c+1321,"R2MDC shiftRegister_11 shift_reg_4_re", false,-1, 23,0);
        vcdp->declBus(c+1329,"R2MDC shiftRegister_11 shift_reg_4_im", false,-1, 23,0);
        vcdp->declBus(c+1337,"R2MDC shiftRegister_11 shift_reg_5_re", false,-1, 23,0);
        vcdp->declBus(c+1345,"R2MDC shiftRegister_11 shift_reg_5_im", false,-1, 23,0);
        vcdp->declBus(c+1353,"R2MDC shiftRegister_11 shift_reg_6_re", false,-1, 23,0);
        vcdp->declBus(c+1361,"R2MDC shiftRegister_11 shift_reg_6_im", false,-1, 23,0);
        vcdp->declBus(c+1369,"R2MDC shiftRegister_11 shift_reg_7_re", false,-1, 23,0);
        vcdp->declBus(c+1377,"R2MDC shiftRegister_11 shift_reg_7_im", false,-1, 23,0);
        vcdp->declBus(c+1385,"R2MDC shiftRegister_11 shift_reg_8_re", false,-1, 23,0);
        vcdp->declBus(c+1393,"R2MDC shiftRegister_11 shift_reg_8_im", false,-1, 23,0);
        vcdp->declBus(c+1401,"R2MDC shiftRegister_11 shift_reg_9_re", false,-1, 23,0);
        vcdp->declBus(c+1409,"R2MDC shiftRegister_11 shift_reg_9_im", false,-1, 23,0);
        vcdp->declBus(c+1417,"R2MDC shiftRegister_11 shift_reg_10_re", false,-1, 23,0);
        vcdp->declBus(c+1425,"R2MDC shiftRegister_11 shift_reg_10_im", false,-1, 23,0);
        vcdp->declBus(c+1433,"R2MDC shiftRegister_11 shift_reg_11_re", false,-1, 23,0);
        vcdp->declBus(c+1441,"R2MDC shiftRegister_11 shift_reg_11_im", false,-1, 23,0);
        vcdp->declBus(c+1449,"R2MDC shiftRegister_11 shift_reg_12_re", false,-1, 23,0);
        vcdp->declBus(c+1457,"R2MDC shiftRegister_11 shift_reg_12_im", false,-1, 23,0);
        vcdp->declBus(c+1465,"R2MDC shiftRegister_11 shift_reg_13_re", false,-1, 23,0);
        vcdp->declBus(c+1473,"R2MDC shiftRegister_11 shift_reg_13_im", false,-1, 23,0);
        vcdp->declBus(c+1481,"R2MDC shiftRegister_11 shift_reg_14_re", false,-1, 23,0);
        vcdp->declBus(c+1489,"R2MDC shiftRegister_11 shift_reg_14_im", false,-1, 23,0);
        vcdp->declBus(c+545,"R2MDC shiftRegister_11 shift_reg_15_re", false,-1, 23,0);
        vcdp->declBus(c+553,"R2MDC shiftRegister_11 shift_reg_15_im", false,-1, 23,0);
        vcdp->declBus(c+217,"R2MDC r2Switch_5 in1_re", false,-1, 23,0);
        vcdp->declBus(c+225,"R2MDC r2Switch_5 in1_im", false,-1, 23,0);
        vcdp->declBus(c+545,"R2MDC r2Switch_5 in2_re", false,-1, 23,0);
        vcdp->declBus(c+553,"R2MDC r2Switch_5 in2_im", false,-1, 23,0);
        vcdp->declBit(c+3121,"R2MDC r2Switch_5 sel", false,-1);
        vcdp->declBus(c+1,"R2MDC r2Switch_5 out1_re", false,-1, 23,0);
        vcdp->declBus(c+9,"R2MDC r2Switch_5 out1_im", false,-1, 23,0);
        vcdp->declBus(c+233,"R2MDC r2Switch_5 out2_re", false,-1, 23,0);
        vcdp->declBus(c+241,"R2MDC r2Switch_5 out2_im", false,-1, 23,0);
        vcdp->declBus(c+1,"R2MDC shiftRegister_12 input_re", false,-1, 23,0);
        vcdp->declBus(c+9,"R2MDC shiftRegister_12 input_im", false,-1, 23,0);
        vcdp->declBus(c+561,"R2MDC shiftRegister_12 output_re", false,-1, 23,0);
        vcdp->declBus(c+569,"R2MDC shiftRegister_12 output_im", false,-1, 23,0);
        vcdp->declBit(c+3337,"R2MDC shiftRegister_12 enable", false,-1);
        vcdp->declBit(c+3273,"R2MDC shiftRegister_12 clk", false,-1);
        vcdp->declBit(c+3281,"R2MDC shiftRegister_12 reset", false,-1);
        vcdp->declBus(c+1497,"R2MDC shiftRegister_12 shift_reg_0_re", false,-1, 23,0);
        vcdp->declBus(c+1505,"R2MDC shiftRegister_12 shift_reg_0_im", false,-1, 23,0);
        vcdp->declBus(c+1513,"R2MDC shiftRegister_12 shift_reg_1_re", false,-1, 23,0);
        vcdp->declBus(c+1521,"R2MDC shiftRegister_12 shift_reg_1_im", false,-1, 23,0);
        vcdp->declBus(c+1529,"R2MDC shiftRegister_12 shift_reg_2_re", false,-1, 23,0);
        vcdp->declBus(c+1537,"R2MDC shiftRegister_12 shift_reg_2_im", false,-1, 23,0);
        vcdp->declBus(c+1545,"R2MDC shiftRegister_12 shift_reg_3_re", false,-1, 23,0);
        vcdp->declBus(c+1553,"R2MDC shiftRegister_12 shift_reg_3_im", false,-1, 23,0);
        vcdp->declBus(c+1561,"R2MDC shiftRegister_12 shift_reg_4_re", false,-1, 23,0);
        vcdp->declBus(c+1569,"R2MDC shiftRegister_12 shift_reg_4_im", false,-1, 23,0);
        vcdp->declBus(c+1577,"R2MDC shiftRegister_12 shift_reg_5_re", false,-1, 23,0);
        vcdp->declBus(c+1585,"R2MDC shiftRegister_12 shift_reg_5_im", false,-1, 23,0);
        vcdp->declBus(c+1593,"R2MDC shiftRegister_12 shift_reg_6_re", false,-1, 23,0);
        vcdp->declBus(c+1601,"R2MDC shiftRegister_12 shift_reg_6_im", false,-1, 23,0);
        vcdp->declBus(c+1609,"R2MDC shiftRegister_12 shift_reg_7_re", false,-1, 23,0);
        vcdp->declBus(c+1617,"R2MDC shiftRegister_12 shift_reg_7_im", false,-1, 23,0);
        vcdp->declBus(c+1625,"R2MDC shiftRegister_12 shift_reg_8_re", false,-1, 23,0);
        vcdp->declBus(c+1633,"R2MDC shiftRegister_12 shift_reg_8_im", false,-1, 23,0);
        vcdp->declBus(c+1641,"R2MDC shiftRegister_12 shift_reg_9_re", false,-1, 23,0);
        vcdp->declBus(c+1649,"R2MDC shiftRegister_12 shift_reg_9_im", false,-1, 23,0);
        vcdp->declBus(c+1657,"R2MDC shiftRegister_12 shift_reg_10_re", false,-1, 23,0);
        vcdp->declBus(c+1665,"R2MDC shiftRegister_12 shift_reg_10_im", false,-1, 23,0);
        vcdp->declBus(c+1673,"R2MDC shiftRegister_12 shift_reg_11_re", false,-1, 23,0);
        vcdp->declBus(c+1681,"R2MDC shiftRegister_12 shift_reg_11_im", false,-1, 23,0);
        vcdp->declBus(c+1689,"R2MDC shiftRegister_12 shift_reg_12_re", false,-1, 23,0);
        vcdp->declBus(c+1697,"R2MDC shiftRegister_12 shift_reg_12_im", false,-1, 23,0);
        vcdp->declBus(c+1705,"R2MDC shiftRegister_12 shift_reg_13_re", false,-1, 23,0);
        vcdp->declBus(c+1713,"R2MDC shiftRegister_12 shift_reg_13_im", false,-1, 23,0);
        vcdp->declBus(c+1721,"R2MDC shiftRegister_12 shift_reg_14_re", false,-1, 23,0);
        vcdp->declBus(c+1729,"R2MDC shiftRegister_12 shift_reg_14_im", false,-1, 23,0);
        vcdp->declBus(c+561,"R2MDC shiftRegister_12 shift_reg_15_re", false,-1, 23,0);
        vcdp->declBus(c+569,"R2MDC shiftRegister_12 shift_reg_15_im", false,-1, 23,0);
        vcdp->declBus(c+561,"R2MDC r2Butterfly_6 in1_re", false,-1, 23,0);
        vcdp->declBus(c+569,"R2MDC r2Butterfly_6 in1_im", false,-1, 23,0);
        vcdp->declBus(c+233,"R2MDC r2Butterfly_6 in2_re", false,-1, 23,0);
        vcdp->declBus(c+241,"R2MDC r2Butterfly_6 in2_im", false,-1, 23,0);
        vcdp->declBus(c+497,"R2MDC r2Butterfly_6 wn_re", false,-1, 23,0);
        vcdp->declBus(c+185,"R2MDC r2Butterfly_6 wn_im", false,-1, 23,0);
        vcdp->declBus(c+249,"R2MDC r2Butterfly_6 out1_re", false,-1, 23,0);
        vcdp->declBus(c+257,"R2MDC r2Butterfly_6 out1_im", false,-1, 23,0);
        vcdp->declBus(c+97,"R2MDC r2Butterfly_6 out2_re", false,-1, 23,0);
        vcdp->declBus(c+105,"R2MDC r2Butterfly_6 out2_im", false,-1, 23,0);
        vcdp->declBus(c+249,"R2MDC r2Butterfly_6 add_result_re", false,-1, 23,0);
        vcdp->declBus(c+257,"R2MDC r2Butterfly_6 add_result_im", false,-1, 23,0);
        vcdp->declBus(c+425,"R2MDC r2Butterfly_6 sub_result_re", false,-1, 23,0);
        vcdp->declBus(c+433,"R2MDC r2Butterfly_6 sub_result_im", false,-1, 23,0);
        vcdp->declBus(c+97,"R2MDC r2Butterfly_6 mul_result_re", false,-1, 23,0);
        vcdp->declBus(c+105,"R2MDC r2Butterfly_6 mul_result_im", false,-1, 23,0);
        vcdp->declBus(c+97,"R2MDC shiftRegister_13 input_re", false,-1, 23,0);
        vcdp->declBus(c+105,"R2MDC shiftRegister_13 input_im", false,-1, 23,0);
        vcdp->declBus(c+577,"R2MDC shiftRegister_13 output_re", false,-1, 23,0);
        vcdp->declBus(c+585,"R2MDC shiftRegister_13 output_im", false,-1, 23,0);
        vcdp->declBit(c+3337,"R2MDC shiftRegister_13 enable", false,-1);
        vcdp->declBit(c+3273,"R2MDC shiftRegister_13 clk", false,-1);
        vcdp->declBit(c+3281,"R2MDC shiftRegister_13 reset", false,-1);
        vcdp->declBus(c+1737,"R2MDC shiftRegister_13 shift_reg_0_re", false,-1, 23,0);
        vcdp->declBus(c+1745,"R2MDC shiftRegister_13 shift_reg_0_im", false,-1, 23,0);
        vcdp->declBus(c+1753,"R2MDC shiftRegister_13 shift_reg_1_re", false,-1, 23,0);
        vcdp->declBus(c+1761,"R2MDC shiftRegister_13 shift_reg_1_im", false,-1, 23,0);
        vcdp->declBus(c+1769,"R2MDC shiftRegister_13 shift_reg_2_re", false,-1, 23,0);
        vcdp->declBus(c+1777,"R2MDC shiftRegister_13 shift_reg_2_im", false,-1, 23,0);
        vcdp->declBus(c+1785,"R2MDC shiftRegister_13 shift_reg_3_re", false,-1, 23,0);
        vcdp->declBus(c+1793,"R2MDC shiftRegister_13 shift_reg_3_im", false,-1, 23,0);
        vcdp->declBus(c+1801,"R2MDC shiftRegister_13 shift_reg_4_re", false,-1, 23,0);
        vcdp->declBus(c+1809,"R2MDC shiftRegister_13 shift_reg_4_im", false,-1, 23,0);
        vcdp->declBus(c+1817,"R2MDC shiftRegister_13 shift_reg_5_re", false,-1, 23,0);
        vcdp->declBus(c+1825,"R2MDC shiftRegister_13 shift_reg_5_im", false,-1, 23,0);
        vcdp->declBus(c+1833,"R2MDC shiftRegister_13 shift_reg_6_re", false,-1, 23,0);
        vcdp->declBus(c+1841,"R2MDC shiftRegister_13 shift_reg_6_im", false,-1, 23,0);
        vcdp->declBus(c+577,"R2MDC shiftRegister_13 shift_reg_7_re", false,-1, 23,0);
        vcdp->declBus(c+585,"R2MDC shiftRegister_13 shift_reg_7_im", false,-1, 23,0);
        vcdp->declBus(c+249,"R2MDC r2Switch_6 in1_re", false,-1, 23,0);
        vcdp->declBus(c+257,"R2MDC r2Switch_6 in1_im", false,-1, 23,0);
        vcdp->declBus(c+577,"R2MDC r2Switch_6 in2_re", false,-1, 23,0);
        vcdp->declBus(c+585,"R2MDC r2Switch_6 in2_im", false,-1, 23,0);
        vcdp->declBit(c+3129,"R2MDC r2Switch_6 sel", false,-1);
        vcdp->declBus(c+17,"R2MDC r2Switch_6 out1_re", false,-1, 23,0);
        vcdp->declBus(c+25,"R2MDC r2Switch_6 out1_im", false,-1, 23,0);
        vcdp->declBus(c+265,"R2MDC r2Switch_6 out2_re", false,-1, 23,0);
        vcdp->declBus(c+273,"R2MDC r2Switch_6 out2_im", false,-1, 23,0);
        vcdp->declBus(c+17,"R2MDC shiftRegister_14 input_re", false,-1, 23,0);
        vcdp->declBus(c+25,"R2MDC shiftRegister_14 input_im", false,-1, 23,0);
        vcdp->declBus(c+593,"R2MDC shiftRegister_14 output_re", false,-1, 23,0);
        vcdp->declBus(c+601,"R2MDC shiftRegister_14 output_im", false,-1, 23,0);
        vcdp->declBit(c+3337,"R2MDC shiftRegister_14 enable", false,-1);
        vcdp->declBit(c+3273,"R2MDC shiftRegister_14 clk", false,-1);
        vcdp->declBit(c+3281,"R2MDC shiftRegister_14 reset", false,-1);
        vcdp->declBus(c+1849,"R2MDC shiftRegister_14 shift_reg_0_re", false,-1, 23,0);
        vcdp->declBus(c+1857,"R2MDC shiftRegister_14 shift_reg_0_im", false,-1, 23,0);
        vcdp->declBus(c+1865,"R2MDC shiftRegister_14 shift_reg_1_re", false,-1, 23,0);
        vcdp->declBus(c+1873,"R2MDC shiftRegister_14 shift_reg_1_im", false,-1, 23,0);
        vcdp->declBus(c+1881,"R2MDC shiftRegister_14 shift_reg_2_re", false,-1, 23,0);
        vcdp->declBus(c+1889,"R2MDC shiftRegister_14 shift_reg_2_im", false,-1, 23,0);
        vcdp->declBus(c+1897,"R2MDC shiftRegister_14 shift_reg_3_re", false,-1, 23,0);
        vcdp->declBus(c+1905,"R2MDC shiftRegister_14 shift_reg_3_im", false,-1, 23,0);
        vcdp->declBus(c+1913,"R2MDC shiftRegister_14 shift_reg_4_re", false,-1, 23,0);
        vcdp->declBus(c+1921,"R2MDC shiftRegister_14 shift_reg_4_im", false,-1, 23,0);
        vcdp->declBus(c+1929,"R2MDC shiftRegister_14 shift_reg_5_re", false,-1, 23,0);
        vcdp->declBus(c+1937,"R2MDC shiftRegister_14 shift_reg_5_im", false,-1, 23,0);
        vcdp->declBus(c+1945,"R2MDC shiftRegister_14 shift_reg_6_re", false,-1, 23,0);
        vcdp->declBus(c+1953,"R2MDC shiftRegister_14 shift_reg_6_im", false,-1, 23,0);
        vcdp->declBus(c+593,"R2MDC shiftRegister_14 shift_reg_7_re", false,-1, 23,0);
        vcdp->declBus(c+601,"R2MDC shiftRegister_14 shift_reg_7_im", false,-1, 23,0);
        vcdp->declBus(c+593,"R2MDC r2Butterfly_7 in1_re", false,-1, 23,0);
        vcdp->declBus(c+601,"R2MDC r2Butterfly_7 in1_im", false,-1, 23,0);
        vcdp->declBus(c+265,"R2MDC r2Butterfly_7 in2_re", false,-1, 23,0);
        vcdp->declBus(c+273,"R2MDC r2Butterfly_7 in2_im", false,-1, 23,0);
        vcdp->declBus(c+505,"R2MDC r2Butterfly_7 wn_re", false,-1, 23,0);
        vcdp->declBus(c+193,"R2MDC r2Butterfly_7 wn_im", false,-1, 23,0);
        vcdp->declBus(c+281,"R2MDC r2Butterfly_7 out1_re", false,-1, 23,0);
        vcdp->declBus(c+289,"R2MDC r2Butterfly_7 out1_im", false,-1, 23,0);
        vcdp->declBus(c+113,"R2MDC r2Butterfly_7 out2_re", false,-1, 23,0);
        vcdp->declBus(c+121,"R2MDC r2Butterfly_7 out2_im", false,-1, 23,0);
        vcdp->declBus(c+281,"R2MDC r2Butterfly_7 add_result_re", false,-1, 23,0);
        vcdp->declBus(c+289,"R2MDC r2Butterfly_7 add_result_im", false,-1, 23,0);
        vcdp->declBus(c+441,"R2MDC r2Butterfly_7 sub_result_re", false,-1, 23,0);
        vcdp->declBus(c+449,"R2MDC r2Butterfly_7 sub_result_im", false,-1, 23,0);
        vcdp->declBus(c+113,"R2MDC r2Butterfly_7 mul_result_re", false,-1, 23,0);
        vcdp->declBus(c+121,"R2MDC r2Butterfly_7 mul_result_im", false,-1, 23,0);
        vcdp->declBus(c+113,"R2MDC shiftRegister_15 input_re", false,-1, 23,0);
        vcdp->declBus(c+121,"R2MDC shiftRegister_15 input_im", false,-1, 23,0);
        vcdp->declBus(c+609,"R2MDC shiftRegister_15 output_re", false,-1, 23,0);
        vcdp->declBus(c+617,"R2MDC shiftRegister_15 output_im", false,-1, 23,0);
        vcdp->declBit(c+3337,"R2MDC shiftRegister_15 enable", false,-1);
        vcdp->declBit(c+3273,"R2MDC shiftRegister_15 clk", false,-1);
        vcdp->declBit(c+3281,"R2MDC shiftRegister_15 reset", false,-1);
        vcdp->declBus(c+1961,"R2MDC shiftRegister_15 shift_reg_0_re", false,-1, 23,0);
        vcdp->declBus(c+1969,"R2MDC shiftRegister_15 shift_reg_0_im", false,-1, 23,0);
        vcdp->declBus(c+1977,"R2MDC shiftRegister_15 shift_reg_1_re", false,-1, 23,0);
        vcdp->declBus(c+1985,"R2MDC shiftRegister_15 shift_reg_1_im", false,-1, 23,0);
        vcdp->declBus(c+1993,"R2MDC shiftRegister_15 shift_reg_2_re", false,-1, 23,0);
        vcdp->declBus(c+2001,"R2MDC shiftRegister_15 shift_reg_2_im", false,-1, 23,0);
        vcdp->declBus(c+609,"R2MDC shiftRegister_15 shift_reg_3_re", false,-1, 23,0);
        vcdp->declBus(c+617,"R2MDC shiftRegister_15 shift_reg_3_im", false,-1, 23,0);
        vcdp->declBus(c+281,"R2MDC r2Switch_7 in1_re", false,-1, 23,0);
        vcdp->declBus(c+289,"R2MDC r2Switch_7 in1_im", false,-1, 23,0);
        vcdp->declBus(c+609,"R2MDC r2Switch_7 in2_re", false,-1, 23,0);
        vcdp->declBus(c+617,"R2MDC r2Switch_7 in2_im", false,-1, 23,0);
        vcdp->declBit(c+3137,"R2MDC r2Switch_7 sel", false,-1);
        vcdp->declBus(c+33,"R2MDC r2Switch_7 out1_re", false,-1, 23,0);
        vcdp->declBus(c+41,"R2MDC r2Switch_7 out1_im", false,-1, 23,0);
        vcdp->declBus(c+297,"R2MDC r2Switch_7 out2_re", false,-1, 23,0);
        vcdp->declBus(c+305,"R2MDC r2Switch_7 out2_im", false,-1, 23,0);
        vcdp->declBus(c+33,"R2MDC shiftRegister_16 input_re", false,-1, 23,0);
        vcdp->declBus(c+41,"R2MDC shiftRegister_16 input_im", false,-1, 23,0);
        vcdp->declBus(c+625,"R2MDC shiftRegister_16 output_re", false,-1, 23,0);
        vcdp->declBus(c+633,"R2MDC shiftRegister_16 output_im", false,-1, 23,0);
        vcdp->declBit(c+3337,"R2MDC shiftRegister_16 enable", false,-1);
        vcdp->declBit(c+3273,"R2MDC shiftRegister_16 clk", false,-1);
        vcdp->declBit(c+3281,"R2MDC shiftRegister_16 reset", false,-1);
        vcdp->declBus(c+2009,"R2MDC shiftRegister_16 shift_reg_0_re", false,-1, 23,0);
        vcdp->declBus(c+2017,"R2MDC shiftRegister_16 shift_reg_0_im", false,-1, 23,0);
        vcdp->declBus(c+2025,"R2MDC shiftRegister_16 shift_reg_1_re", false,-1, 23,0);
        vcdp->declBus(c+2033,"R2MDC shiftRegister_16 shift_reg_1_im", false,-1, 23,0);
        vcdp->declBus(c+2041,"R2MDC shiftRegister_16 shift_reg_2_re", false,-1, 23,0);
        vcdp->declBus(c+2049,"R2MDC shiftRegister_16 shift_reg_2_im", false,-1, 23,0);
        vcdp->declBus(c+625,"R2MDC shiftRegister_16 shift_reg_3_re", false,-1, 23,0);
        vcdp->declBus(c+633,"R2MDC shiftRegister_16 shift_reg_3_im", false,-1, 23,0);
        vcdp->declBus(c+625,"R2MDC r2Butterfly_8 in1_re", false,-1, 23,0);
        vcdp->declBus(c+633,"R2MDC r2Butterfly_8 in1_im", false,-1, 23,0);
        vcdp->declBus(c+297,"R2MDC r2Butterfly_8 in2_re", false,-1, 23,0);
        vcdp->declBus(c+305,"R2MDC r2Butterfly_8 in2_im", false,-1, 23,0);
        vcdp->declBus(c+513,"R2MDC r2Butterfly_8 wn_re", false,-1, 23,0);
        vcdp->declBus(c+201,"R2MDC r2Butterfly_8 wn_im", false,-1, 23,0);
        vcdp->declBus(c+313,"R2MDC r2Butterfly_8 out1_re", false,-1, 23,0);
        vcdp->declBus(c+321,"R2MDC r2Butterfly_8 out1_im", false,-1, 23,0);
        vcdp->declBus(c+129,"R2MDC r2Butterfly_8 out2_re", false,-1, 23,0);
        vcdp->declBus(c+137,"R2MDC r2Butterfly_8 out2_im", false,-1, 23,0);
        vcdp->declBus(c+313,"R2MDC r2Butterfly_8 add_result_re", false,-1, 23,0);
        vcdp->declBus(c+321,"R2MDC r2Butterfly_8 add_result_im", false,-1, 23,0);
        vcdp->declBus(c+457,"R2MDC r2Butterfly_8 sub_result_re", false,-1, 23,0);
        vcdp->declBus(c+465,"R2MDC r2Butterfly_8 sub_result_im", false,-1, 23,0);
        vcdp->declBus(c+129,"R2MDC r2Butterfly_8 mul_result_re", false,-1, 23,0);
        vcdp->declBus(c+137,"R2MDC r2Butterfly_8 mul_result_im", false,-1, 23,0);
        vcdp->declBus(c+129,"R2MDC shiftRegister_17 input_re", false,-1, 23,0);
        vcdp->declBus(c+137,"R2MDC shiftRegister_17 input_im", false,-1, 23,0);
        vcdp->declBus(c+641,"R2MDC shiftRegister_17 output_re", false,-1, 23,0);
        vcdp->declBus(c+649,"R2MDC shiftRegister_17 output_im", false,-1, 23,0);
        vcdp->declBit(c+3337,"R2MDC shiftRegister_17 enable", false,-1);
        vcdp->declBit(c+3273,"R2MDC shiftRegister_17 clk", false,-1);
        vcdp->declBit(c+3281,"R2MDC shiftRegister_17 reset", false,-1);
        vcdp->declBus(c+2057,"R2MDC shiftRegister_17 shift_reg_0_re", false,-1, 23,0);
        vcdp->declBus(c+2065,"R2MDC shiftRegister_17 shift_reg_0_im", false,-1, 23,0);
        vcdp->declBus(c+641,"R2MDC shiftRegister_17 shift_reg_1_re", false,-1, 23,0);
        vcdp->declBus(c+649,"R2MDC shiftRegister_17 shift_reg_1_im", false,-1, 23,0);
        vcdp->declBus(c+313,"R2MDC r2Switch_8 in1_re", false,-1, 23,0);
        vcdp->declBus(c+321,"R2MDC r2Switch_8 in1_im", false,-1, 23,0);
        vcdp->declBus(c+641,"R2MDC r2Switch_8 in2_re", false,-1, 23,0);
        vcdp->declBus(c+649,"R2MDC r2Switch_8 in2_im", false,-1, 23,0);
        vcdp->declBit(c+3145,"R2MDC r2Switch_8 sel", false,-1);
        vcdp->declBus(c+49,"R2MDC r2Switch_8 out1_re", false,-1, 23,0);
        vcdp->declBus(c+57,"R2MDC r2Switch_8 out1_im", false,-1, 23,0);
        vcdp->declBus(c+329,"R2MDC r2Switch_8 out2_re", false,-1, 23,0);
        vcdp->declBus(c+337,"R2MDC r2Switch_8 out2_im", false,-1, 23,0);
        vcdp->declBus(c+49,"R2MDC shiftRegister_18 input_re", false,-1, 23,0);
        vcdp->declBus(c+57,"R2MDC shiftRegister_18 input_im", false,-1, 23,0);
        vcdp->declBus(c+657,"R2MDC shiftRegister_18 output_re", false,-1, 23,0);
        vcdp->declBus(c+665,"R2MDC shiftRegister_18 output_im", false,-1, 23,0);
        vcdp->declBit(c+3337,"R2MDC shiftRegister_18 enable", false,-1);
        vcdp->declBit(c+3273,"R2MDC shiftRegister_18 clk", false,-1);
        vcdp->declBit(c+3281,"R2MDC shiftRegister_18 reset", false,-1);
        vcdp->declBus(c+2073,"R2MDC shiftRegister_18 shift_reg_0_re", false,-1, 23,0);
        vcdp->declBus(c+2081,"R2MDC shiftRegister_18 shift_reg_0_im", false,-1, 23,0);
        vcdp->declBus(c+657,"R2MDC shiftRegister_18 shift_reg_1_re", false,-1, 23,0);
        vcdp->declBus(c+665,"R2MDC shiftRegister_18 shift_reg_1_im", false,-1, 23,0);
        vcdp->declBus(c+657,"R2MDC r2Butterfly_9 in1_re", false,-1, 23,0);
        vcdp->declBus(c+665,"R2MDC r2Butterfly_9 in1_im", false,-1, 23,0);
        vcdp->declBus(c+329,"R2MDC r2Butterfly_9 in2_re", false,-1, 23,0);
        vcdp->declBus(c+337,"R2MDC r2Butterfly_9 in2_im", false,-1, 23,0);
        vcdp->declBus(c+521,"R2MDC r2Butterfly_9 wn_re", false,-1, 23,0);
        vcdp->declBus(c+209,"R2MDC r2Butterfly_9 wn_im", false,-1, 23,0);
        vcdp->declBus(c+345,"R2MDC r2Butterfly_9 out1_re", false,-1, 23,0);
        vcdp->declBus(c+353,"R2MDC r2Butterfly_9 out1_im", false,-1, 23,0);
        vcdp->declBus(c+145,"R2MDC r2Butterfly_9 out2_re", false,-1, 23,0);
        vcdp->declBus(c+153,"R2MDC r2Butterfly_9 out2_im", false,-1, 23,0);
    }
}

void VR2MDC::traceInitThis__2(VR2MDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+345,"R2MDC r2Butterfly_9 add_result_re", false,-1, 23,0);
        vcdp->declBus(c+353,"R2MDC r2Butterfly_9 add_result_im", false,-1, 23,0);
        vcdp->declBus(c+473,"R2MDC r2Butterfly_9 sub_result_re", false,-1, 23,0);
        vcdp->declBus(c+481,"R2MDC r2Butterfly_9 sub_result_im", false,-1, 23,0);
        vcdp->declBus(c+145,"R2MDC r2Butterfly_9 mul_result_re", false,-1, 23,0);
        vcdp->declBus(c+153,"R2MDC r2Butterfly_9 mul_result_im", false,-1, 23,0);
        vcdp->declBus(c+145,"R2MDC shiftRegister_19 input_re", false,-1, 23,0);
        vcdp->declBus(c+153,"R2MDC shiftRegister_19 input_im", false,-1, 23,0);
        vcdp->declBus(c+673,"R2MDC shiftRegister_19 output_re", false,-1, 23,0);
        vcdp->declBus(c+681,"R2MDC shiftRegister_19 output_im", false,-1, 23,0);
        vcdp->declBit(c+3337,"R2MDC shiftRegister_19 enable", false,-1);
        vcdp->declBit(c+3273,"R2MDC shiftRegister_19 clk", false,-1);
        vcdp->declBit(c+3281,"R2MDC shiftRegister_19 reset", false,-1);
        vcdp->declBus(c+673,"R2MDC shiftRegister_19 shift_reg_0_re", false,-1, 23,0);
        vcdp->declBus(c+681,"R2MDC shiftRegister_19 shift_reg_0_im", false,-1, 23,0);
        vcdp->declBus(c+345,"R2MDC r2Switch_9 in1_re", false,-1, 23,0);
        vcdp->declBus(c+353,"R2MDC r2Switch_9 in1_im", false,-1, 23,0);
        vcdp->declBus(c+673,"R2MDC r2Switch_9 in2_re", false,-1, 23,0);
        vcdp->declBus(c+681,"R2MDC r2Switch_9 in2_im", false,-1, 23,0);
        vcdp->declBit(c+3153,"R2MDC r2Switch_9 sel", false,-1);
        vcdp->declBus(c+65,"R2MDC r2Switch_9 out1_re", false,-1, 23,0);
        vcdp->declBus(c+73,"R2MDC r2Switch_9 out1_im", false,-1, 23,0);
        vcdp->declBus(c+361,"R2MDC r2Switch_9 out2_re", false,-1, 23,0);
        vcdp->declBus(c+369,"R2MDC r2Switch_9 out2_im", false,-1, 23,0);
        vcdp->declBit(c+3161,"R2MDC reorder_1 unsorted_valid", false,-1);
        vcdp->declBus(c+729,"R2MDC reorder_1 unsorted_payload_in0_re", false,-1, 23,0);
        vcdp->declBus(c+737,"R2MDC reorder_1 unsorted_payload_in0_im", false,-1, 23,0);
        vcdp->declBus(c+745,"R2MDC reorder_1 unsorted_payload_in1_re", false,-1, 23,0);
        vcdp->declBus(c+753,"R2MDC reorder_1 unsorted_payload_in1_im", false,-1, 23,0);
        vcdp->declBit(c+689,"R2MDC reorder_1 sorted_valid", false,-1);
        vcdp->declBit(c+3113,"R2MDC reorder_1 sorted_payload_last", false,-1);
        vcdp->declBus(c+697,"R2MDC reorder_1 sorted_payload_fragment_re", false,-1, 23,0);
        vcdp->declBus(c+705,"R2MDC reorder_1 sorted_payload_fragment_im", false,-1, 23,0);
        vcdp->declBit(c+3273,"R2MDC reorder_1 clk", false,-1);
        vcdp->declBit(c+3281,"R2MDC reorder_1 reset", false,-1);
        vcdp->declBus(c+3185,"R2MDC reorder_1 in_cnt", false,-1, 4,0);
        vcdp->declBus(c+3193,"R2MDC reorder_1 out_cnt", false,-1, 5,0);
        vcdp->declBus(c+161,"R2MDC reorder_1 in_cnt_index", false,-1, 4,0);
        vcdp->declBit(c+169,"R2MDC reorder_1 sorted_valid_1", false,-1);
        vcdp->declBit(c+689,"R2MDC reorder_1 sorted_valid_1_regNext", false,-1);
        {int i; for (i=0; i<32; i++) {
                vcdp->declQuad(c+2089+i*2,"R2MDC reorder_1 ram_low", true,(i+0), 47,0);}}
        {int i; for (i=0; i<32; i++) {
                vcdp->declQuad(c+2601+i*2,"R2MDC reorder_1 ram_high", true,(i+0), 47,0);}}
    }
}

void VR2MDC::traceFullThis__1(VR2MDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(((0x10U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                             ? vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_15_re
                             : vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__add_result_re)),24);
        vcdp->fullBus(c+9,(((0x10U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                             ? vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_15_im
                             : vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__add_result_im)),24);
        vcdp->fullBus(c+17,(((8U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                              ? vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_7_re
                              : vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__add_result_re)),24);
        vcdp->fullBus(c+25,(((8U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                              ? vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_7_im
                              : vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__add_result_im)),24);
        vcdp->fullBus(c+33,(((4U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                              ? vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_3_re
                              : vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__add_result_re)),24);
        vcdp->fullBus(c+41,(((4U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                              ? vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_3_im
                              : vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__add_result_im)),24);
        vcdp->fullBus(c+49,(((2U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                              ? vlTOPp->R2MDC__DOT__shiftRegister_17__DOT__shift_reg_1_re
                              : vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__add_result_re)),24);
        vcdp->fullBus(c+57,(((2U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                              ? vlTOPp->R2MDC__DOT__shiftRegister_17__DOT__shift_reg_1_im
                              : vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__add_result_im)),24);
        vcdp->fullBus(c+65,(((1U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                              ? vlTOPp->R2MDC__DOT__shiftRegister_19__DOT__shift_reg_0_re
                              : vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__add_result_re)),24);
        vcdp->fullBus(c+73,(((1U & (IData)(vlTOPp->R2MDC__DOT__cnt))
                              ? vlTOPp->R2MDC__DOT__shiftRegister_19__DOT__shift_reg_0_im
                              : vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__add_result_im)),24);
        vcdp->fullBus(c+81,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                  & ((VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__sub_result_re)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_1_port0))))) 
                                                      - 
                                                      VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__sub_result_im)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_5_wn_im)))) 
                                                     >> 0xbU))))),24);
        vcdp->fullBus(c+89,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                  & ((VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__sub_result_re)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_5_wn_im))) 
                                                      + 
                                                      VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__sub_result_im)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_1_port0)))))) 
                                                     >> 0xbU))))),24);
        vcdp->fullBus(c+97,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                  & ((VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__sub_result_re)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_2_port0))))) 
                                                      - 
                                                      VL_MULS_QQQ(48,48,48, 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__sub_result_im)), 
                                                                  (VL_ULL(0xffffffffffff) 
                                                                   & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_6_wn_im)))) 
                                                     >> 0xbU))))),24);
        vcdp->fullBus(c+105,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                   & ((VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__sub_result_re)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_6_wn_im))) 
                                                       + 
                                                       VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__sub_result_im)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_2_port0)))))) 
                                                      >> 0xbU))))),24);
        vcdp->fullBus(c+113,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                   & ((VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__sub_result_re)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_3_port0))))) 
                                                       - 
                                                       VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__sub_result_im)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_7_wn_im)))) 
                                                      >> 0xbU))))),24);
        vcdp->fullBus(c+121,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                   & ((VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__sub_result_re)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_7_wn_im))) 
                                                       + 
                                                       VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__sub_result_im)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_3_port0)))))) 
                                                      >> 0xbU))))),24);
        vcdp->fullBus(c+129,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                   & ((VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__sub_result_re)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_4_port0))))) 
                                                       - 
                                                       VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__sub_result_im)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_8_wn_im)))) 
                                                      >> 0xbU))))),24);
        vcdp->fullBus(c+137,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                   & ((VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__sub_result_re)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_8_wn_im))) 
                                                       + 
                                                       VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__sub_result_im)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_4_port0)))))) 
                                                      >> 0xbU))))),24);
        vcdp->fullBus(c+145,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                   & ((VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__sub_result_re)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_5_port0))))) 
                                                       - 
                                                       VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__sub_result_im)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_9_wn_im)))) 
                                                      >> 0xbU))))),24);
        vcdp->fullBus(c+153,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                   & ((VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__sub_result_re)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_9_wn_im))) 
                                                       + 
                                                       VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__sub_result_im)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_5_port0)))))) 
                                                      >> 0xbU))))),24);
        vcdp->fullBus(c+161,(vlTOPp->R2MDC__DOT__reorder_1__DOT__in_cnt_index),5);
        vcdp->fullBit(c+169,(vlTOPp->R2MDC__DOT__reorder_1__DOT__sorted_valid_1));
        vcdp->fullBus(c+177,(vlTOPp->R2MDC__DOT__r2Butterfly_5_wn_im),24);
        vcdp->fullBus(c+185,(vlTOPp->R2MDC__DOT__r2Butterfly_6_wn_im),24);
        vcdp->fullBus(c+193,(vlTOPp->R2MDC__DOT__r2Butterfly_7_wn_im),24);
        vcdp->fullBus(c+201,(vlTOPp->R2MDC__DOT__r2Butterfly_8_wn_im),24);
        vcdp->fullBus(c+209,(vlTOPp->R2MDC__DOT__r2Butterfly_9_wn_im),24);
        vcdp->fullBus(c+217,(vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__add_result_re),24);
        vcdp->fullBus(c+225,(vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__add_result_im),24);
        vcdp->fullBus(c+233,(vlTOPp->R2MDC__DOT__r2Switch_5_out2_re),24);
        vcdp->fullBus(c+241,(vlTOPp->R2MDC__DOT__r2Switch_5_out2_im),24);
        vcdp->fullBus(c+249,(vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__add_result_re),24);
        vcdp->fullBus(c+257,(vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__add_result_im),24);
        vcdp->fullBus(c+265,(vlTOPp->R2MDC__DOT__r2Switch_6_out2_re),24);
        vcdp->fullBus(c+273,(vlTOPp->R2MDC__DOT__r2Switch_6_out2_im),24);
        vcdp->fullBus(c+281,(vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__add_result_re),24);
        vcdp->fullBus(c+289,(vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__add_result_im),24);
        vcdp->fullBus(c+297,(vlTOPp->R2MDC__DOT__r2Switch_7_out2_re),24);
        vcdp->fullBus(c+305,(vlTOPp->R2MDC__DOT__r2Switch_7_out2_im),24);
        vcdp->fullBus(c+313,(vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__add_result_re),24);
        vcdp->fullBus(c+321,(vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__add_result_im),24);
        vcdp->fullBus(c+329,(vlTOPp->R2MDC__DOT__r2Switch_8_out2_re),24);
        vcdp->fullBus(c+337,(vlTOPp->R2MDC__DOT__r2Switch_8_out2_im),24);
        vcdp->fullBus(c+345,(vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__add_result_re),24);
        vcdp->fullBus(c+353,(vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__add_result_im),24);
        vcdp->fullBus(c+361,(vlTOPp->R2MDC__DOT__r2Switch_9_out2_re),24);
        vcdp->fullBus(c+369,(vlTOPp->R2MDC__DOT__r2Switch_9_out2_im),24);
        vcdp->fullBus(c+377,(vlTOPp->R2MDC__DOT__out0_buf_6_re),24);
        vcdp->fullBus(c+385,(vlTOPp->R2MDC__DOT__out0_buf_6_im),24);
        vcdp->fullBus(c+393,(vlTOPp->R2MDC__DOT__out1_buf_6_re),24);
        vcdp->fullBus(c+401,(vlTOPp->R2MDC__DOT__out1_buf_6_im),24);
        vcdp->fullBus(c+409,(vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__sub_result_re),24);
        vcdp->fullBus(c+417,(vlTOPp->R2MDC__DOT__r2Butterfly_5__DOT__sub_result_im),24);
        vcdp->fullBus(c+425,(vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__sub_result_re),24);
        vcdp->fullBus(c+433,(vlTOPp->R2MDC__DOT__r2Butterfly_6__DOT__sub_result_im),24);
        vcdp->fullBus(c+441,(vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__sub_result_re),24);
        vcdp->fullBus(c+449,(vlTOPp->R2MDC__DOT__r2Butterfly_7__DOT__sub_result_im),24);
        vcdp->fullBus(c+457,(vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__sub_result_re),24);
        vcdp->fullBus(c+465,(vlTOPp->R2MDC__DOT__r2Butterfly_8__DOT__sub_result_im),24);
        vcdp->fullBus(c+473,(vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__sub_result_re),24);
        vcdp->fullBus(c+481,(vlTOPp->R2MDC__DOT__r2Butterfly_9__DOT__sub_result_im),24);
        vcdp->fullBus(c+489,((0xffffffU & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_1_port0))),24);
        vcdp->fullBus(c+497,((0xffffffU & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_2_port0))),24);
        vcdp->fullBus(c+505,((0xffffffU & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_3_port0))),24);
        vcdp->fullBus(c+513,((0xffffffU & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_4_port0))),24);
        vcdp->fullBus(c+521,((0xffffffU & (IData)(vlTOPp->R2MDC__DOT___zz___05Fzz_5_port0))),24);
        vcdp->fullBus(c+529,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_31_re),24);
        vcdp->fullBus(c+537,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_31_im),24);
        vcdp->fullBus(c+545,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_15_re),24);
        vcdp->fullBus(c+553,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_15_im),24);
        vcdp->fullBus(c+561,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_15_re),24);
        vcdp->fullBus(c+569,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_15_im),24);
        vcdp->fullBus(c+577,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_7_re),24);
        vcdp->fullBus(c+585,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_7_im),24);
        vcdp->fullBus(c+593,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_7_re),24);
        vcdp->fullBus(c+601,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_7_im),24);
        vcdp->fullBus(c+609,(vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_3_re),24);
        vcdp->fullBus(c+617,(vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_3_im),24);
        vcdp->fullBus(c+625,(vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_3_re),24);
        vcdp->fullBus(c+633,(vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_3_im),24);
        vcdp->fullBus(c+641,(vlTOPp->R2MDC__DOT__shiftRegister_17__DOT__shift_reg_1_re),24);
        vcdp->fullBus(c+649,(vlTOPp->R2MDC__DOT__shiftRegister_17__DOT__shift_reg_1_im),24);
        vcdp->fullBus(c+657,(vlTOPp->R2MDC__DOT__shiftRegister_18__DOT__shift_reg_1_re),24);
        vcdp->fullBus(c+665,(vlTOPp->R2MDC__DOT__shiftRegister_18__DOT__shift_reg_1_im),24);
        vcdp->fullBus(c+673,(vlTOPp->R2MDC__DOT__shiftRegister_19__DOT__shift_reg_0_re),24);
        vcdp->fullBus(c+681,(vlTOPp->R2MDC__DOT__shiftRegister_19__DOT__shift_reg_0_im),24);
        vcdp->fullBit(c+689,(vlTOPp->R2MDC__DOT__reorder_1__DOT__sorted_valid_1_regNext));
        vcdp->fullBus(c+697,((0xffffffU & ((IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_3)
                                            ? (IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_ram_low_port1)
                                            : (IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_ram_high_port1)))),24);
        vcdp->fullBus(c+705,((0xffffffU & ((IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_3)
                                            ? (IData)(
                                                      (vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_ram_low_port1 
                                                       >> 0x18U))
                                            : (IData)(
                                                      (vlTOPp->R2MDC__DOT__reorder_1__DOT___zz_ram_high_port1 
                                                       >> 0x18U))))),24);
        vcdp->fullBus(c+713,(vlTOPp->R2MDC__DOT__out1D1_re),24);
        vcdp->fullBus(c+721,(vlTOPp->R2MDC__DOT__out1D1_im),24);
        vcdp->fullBus(c+729,(vlTOPp->R2MDC__DOT__result_out1_regNext_re),24);
        vcdp->fullBus(c+737,(vlTOPp->R2MDC__DOT__result_out1_regNext_im),24);
        vcdp->fullBus(c+745,(vlTOPp->R2MDC__DOT__result_out2_regNext_re),24);
        vcdp->fullBus(c+753,(vlTOPp->R2MDC__DOT__result_out2_regNext_im),24);
        vcdp->fullBus(c+761,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_0_re),24);
        vcdp->fullBus(c+769,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_0_im),24);
        vcdp->fullBus(c+777,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_1_re),24);
        vcdp->fullBus(c+785,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_1_im),24);
        vcdp->fullBus(c+793,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_2_re),24);
        vcdp->fullBus(c+801,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_2_im),24);
        vcdp->fullBus(c+809,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_3_re),24);
        vcdp->fullBus(c+817,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_3_im),24);
        vcdp->fullBus(c+825,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_4_re),24);
        vcdp->fullBus(c+833,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_4_im),24);
        vcdp->fullBus(c+841,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_5_re),24);
        vcdp->fullBus(c+849,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_5_im),24);
        vcdp->fullBus(c+857,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_6_re),24);
        vcdp->fullBus(c+865,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_6_im),24);
        vcdp->fullBus(c+873,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_7_re),24);
        vcdp->fullBus(c+881,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_7_im),24);
        vcdp->fullBus(c+889,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_8_re),24);
        vcdp->fullBus(c+897,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_8_im),24);
        vcdp->fullBus(c+905,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_9_re),24);
        vcdp->fullBus(c+913,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_9_im),24);
        vcdp->fullBus(c+921,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_10_re),24);
        vcdp->fullBus(c+929,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_10_im),24);
        vcdp->fullBus(c+937,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_11_re),24);
        vcdp->fullBus(c+945,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_11_im),24);
        vcdp->fullBus(c+953,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_12_re),24);
        vcdp->fullBus(c+961,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_12_im),24);
        vcdp->fullBus(c+969,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_13_re),24);
        vcdp->fullBus(c+977,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_13_im),24);
        vcdp->fullBus(c+985,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_14_re),24);
    }
}

void VR2MDC::traceFullThis__7(VR2MDC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+993,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_14_im),24);
        vcdp->fullBus(c+1001,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_15_re),24);
        vcdp->fullBus(c+1009,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_15_im),24);
        vcdp->fullBus(c+1017,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_16_re),24);
        vcdp->fullBus(c+1025,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_16_im),24);
        vcdp->fullBus(c+1033,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_17_re),24);
        vcdp->fullBus(c+1041,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_17_im),24);
        vcdp->fullBus(c+1049,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_18_re),24);
        vcdp->fullBus(c+1057,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_18_im),24);
        vcdp->fullBus(c+1065,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_19_re),24);
        vcdp->fullBus(c+1073,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_19_im),24);
        vcdp->fullBus(c+1081,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_20_re),24);
        vcdp->fullBus(c+1089,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_20_im),24);
        vcdp->fullBus(c+1097,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_21_re),24);
        vcdp->fullBus(c+1105,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_21_im),24);
        vcdp->fullBus(c+1113,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_22_re),24);
        vcdp->fullBus(c+1121,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_22_im),24);
        vcdp->fullBus(c+1129,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_23_re),24);
        vcdp->fullBus(c+1137,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_23_im),24);
        vcdp->fullBus(c+1145,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_24_re),24);
        vcdp->fullBus(c+1153,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_24_im),24);
        vcdp->fullBus(c+1161,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_25_re),24);
        vcdp->fullBus(c+1169,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_25_im),24);
        vcdp->fullBus(c+1177,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_26_re),24);
        vcdp->fullBus(c+1185,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_26_im),24);
        vcdp->fullBus(c+1193,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_27_re),24);
        vcdp->fullBus(c+1201,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_27_im),24);
        vcdp->fullBus(c+1209,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_28_re),24);
        vcdp->fullBus(c+1217,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_28_im),24);
        vcdp->fullBus(c+1225,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_29_re),24);
        vcdp->fullBus(c+1233,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_29_im),24);
        vcdp->fullBus(c+1241,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_30_re),24);
        vcdp->fullBus(c+1249,(vlTOPp->R2MDC__DOT__shiftRegister_10__DOT__shift_reg_30_im),24);
        vcdp->fullBus(c+1257,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_0_re),24);
        vcdp->fullBus(c+1265,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_0_im),24);
        vcdp->fullBus(c+1273,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_1_re),24);
        vcdp->fullBus(c+1281,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_1_im),24);
        vcdp->fullBus(c+1289,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_2_re),24);
        vcdp->fullBus(c+1297,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_2_im),24);
        vcdp->fullBus(c+1305,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_3_re),24);
        vcdp->fullBus(c+1313,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_3_im),24);
        vcdp->fullBus(c+1321,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_4_re),24);
        vcdp->fullBus(c+1329,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_4_im),24);
        vcdp->fullBus(c+1337,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_5_re),24);
        vcdp->fullBus(c+1345,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_5_im),24);
        vcdp->fullBus(c+1353,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_6_re),24);
        vcdp->fullBus(c+1361,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_6_im),24);
        vcdp->fullBus(c+1369,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_7_re),24);
        vcdp->fullBus(c+1377,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_7_im),24);
        vcdp->fullBus(c+1385,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_8_re),24);
        vcdp->fullBus(c+1393,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_8_im),24);
        vcdp->fullBus(c+1401,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_9_re),24);
        vcdp->fullBus(c+1409,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_9_im),24);
        vcdp->fullBus(c+1417,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_10_re),24);
        vcdp->fullBus(c+1425,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_10_im),24);
        vcdp->fullBus(c+1433,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_11_re),24);
        vcdp->fullBus(c+1441,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_11_im),24);
        vcdp->fullBus(c+1449,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_12_re),24);
        vcdp->fullBus(c+1457,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_12_im),24);
        vcdp->fullBus(c+1465,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_13_re),24);
        vcdp->fullBus(c+1473,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_13_im),24);
        vcdp->fullBus(c+1481,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_14_re),24);
        vcdp->fullBus(c+1489,(vlTOPp->R2MDC__DOT__shiftRegister_11__DOT__shift_reg_14_im),24);
        vcdp->fullBus(c+1497,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_0_re),24);
        vcdp->fullBus(c+1505,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_0_im),24);
        vcdp->fullBus(c+1513,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_1_re),24);
        vcdp->fullBus(c+1521,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_1_im),24);
        vcdp->fullBus(c+1529,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_2_re),24);
        vcdp->fullBus(c+1537,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_2_im),24);
        vcdp->fullBus(c+1545,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_3_re),24);
        vcdp->fullBus(c+1553,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_3_im),24);
        vcdp->fullBus(c+1561,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_4_re),24);
        vcdp->fullBus(c+1569,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_4_im),24);
        vcdp->fullBus(c+1577,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_5_re),24);
        vcdp->fullBus(c+1585,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_5_im),24);
        vcdp->fullBus(c+1593,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_6_re),24);
        vcdp->fullBus(c+1601,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_6_im),24);
        vcdp->fullBus(c+1609,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_7_re),24);
        vcdp->fullBus(c+1617,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_7_im),24);
        vcdp->fullBus(c+1625,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_8_re),24);
        vcdp->fullBus(c+1633,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_8_im),24);
        vcdp->fullBus(c+1641,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_9_re),24);
        vcdp->fullBus(c+1649,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_9_im),24);
        vcdp->fullBus(c+1657,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_10_re),24);
        vcdp->fullBus(c+1665,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_10_im),24);
        vcdp->fullBus(c+1673,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_11_re),24);
        vcdp->fullBus(c+1681,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_11_im),24);
        vcdp->fullBus(c+1689,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_12_re),24);
        vcdp->fullBus(c+1697,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_12_im),24);
        vcdp->fullBus(c+1705,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_13_re),24);
        vcdp->fullBus(c+1713,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_13_im),24);
        vcdp->fullBus(c+1721,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_14_re),24);
        vcdp->fullBus(c+1729,(vlTOPp->R2MDC__DOT__shiftRegister_12__DOT__shift_reg_14_im),24);
        vcdp->fullBus(c+1737,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_0_re),24);
        vcdp->fullBus(c+1745,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_0_im),24);
        vcdp->fullBus(c+1753,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_1_re),24);
        vcdp->fullBus(c+1761,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_1_im),24);
        vcdp->fullBus(c+1769,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_2_re),24);
        vcdp->fullBus(c+1777,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_2_im),24);
        vcdp->fullBus(c+1785,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_3_re),24);
        vcdp->fullBus(c+1793,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_3_im),24);
        vcdp->fullBus(c+1801,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_4_re),24);
        vcdp->fullBus(c+1809,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_4_im),24);
        vcdp->fullBus(c+1817,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_5_re),24);
        vcdp->fullBus(c+1825,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_5_im),24);
        vcdp->fullBus(c+1833,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_6_re),24);
        vcdp->fullBus(c+1841,(vlTOPp->R2MDC__DOT__shiftRegister_13__DOT__shift_reg_6_im),24);
        vcdp->fullBus(c+1849,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_0_re),24);
        vcdp->fullBus(c+1857,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_0_im),24);
        vcdp->fullBus(c+1865,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_1_re),24);
        vcdp->fullBus(c+1873,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_1_im),24);
        vcdp->fullBus(c+1881,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_2_re),24);
        vcdp->fullBus(c+1889,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_2_im),24);
        vcdp->fullBus(c+1897,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_3_re),24);
        vcdp->fullBus(c+1905,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_3_im),24);
        vcdp->fullBus(c+1913,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_4_re),24);
        vcdp->fullBus(c+1921,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_4_im),24);
        vcdp->fullBus(c+1929,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_5_re),24);
        vcdp->fullBus(c+1937,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_5_im),24);
        vcdp->fullBus(c+1945,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_6_re),24);
        vcdp->fullBus(c+1953,(vlTOPp->R2MDC__DOT__shiftRegister_14__DOT__shift_reg_6_im),24);
        vcdp->fullBus(c+1961,(vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_0_re),24);
        vcdp->fullBus(c+1969,(vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_0_im),24);
        vcdp->fullBus(c+1977,(vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_1_re),24);
        vcdp->fullBus(c+1985,(vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_1_im),24);
        vcdp->fullBus(c+1993,(vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_2_re),24);
        vcdp->fullBus(c+2001,(vlTOPp->R2MDC__DOT__shiftRegister_15__DOT__shift_reg_2_im),24);
        vcdp->fullBus(c+2009,(vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_0_re),24);
        vcdp->fullBus(c+2017,(vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_0_im),24);
        vcdp->fullBus(c+2025,(vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_1_re),24);
        vcdp->fullBus(c+2033,(vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_1_im),24);
        vcdp->fullBus(c+2041,(vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_2_re),24);
        vcdp->fullBus(c+2049,(vlTOPp->R2MDC__DOT__shiftRegister_16__DOT__shift_reg_2_im),24);
        vcdp->fullBus(c+2057,(vlTOPp->R2MDC__DOT__shiftRegister_17__DOT__shift_reg_0_re),24);
        vcdp->fullBus(c+2065,(vlTOPp->R2MDC__DOT__shiftRegister_17__DOT__shift_reg_0_im),24);
        vcdp->fullBus(c+2073,(vlTOPp->R2MDC__DOT__shiftRegister_18__DOT__shift_reg_0_re),24);
        vcdp->fullBus(c+2081,(vlTOPp->R2MDC__DOT__shiftRegister_18__DOT__shift_reg_0_im),24);
        vcdp->fullQuad(c+2089,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[0]),48);
        vcdp->fullQuad(c+2091,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[1]),48);
        vcdp->fullQuad(c+2093,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[2]),48);
        vcdp->fullQuad(c+2095,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[3]),48);
        vcdp->fullQuad(c+2097,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[4]),48);
        vcdp->fullQuad(c+2099,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[5]),48);
        vcdp->fullQuad(c+2101,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[6]),48);
        vcdp->fullQuad(c+2103,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[7]),48);
        vcdp->fullQuad(c+2105,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[8]),48);
        vcdp->fullQuad(c+2107,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[9]),48);
        vcdp->fullQuad(c+2109,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[10]),48);
        vcdp->fullQuad(c+2111,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[11]),48);
        vcdp->fullQuad(c+2113,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[12]),48);
        vcdp->fullQuad(c+2115,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[13]),48);
        vcdp->fullQuad(c+2117,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[14]),48);
        vcdp->fullQuad(c+2119,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[15]),48);
        vcdp->fullQuad(c+2121,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[16]),48);
        vcdp->fullQuad(c+2123,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[17]),48);
        vcdp->fullQuad(c+2125,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[18]),48);
        vcdp->fullQuad(c+2127,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[19]),48);
        vcdp->fullQuad(c+2129,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[20]),48);
        vcdp->fullQuad(c+2131,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[21]),48);
        vcdp->fullQuad(c+2133,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[22]),48);
        vcdp->fullQuad(c+2135,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[23]),48);
        vcdp->fullQuad(c+2137,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[24]),48);
        vcdp->fullQuad(c+2139,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[25]),48);
        vcdp->fullQuad(c+2141,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[26]),48);
        vcdp->fullQuad(c+2143,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[27]),48);
        vcdp->fullQuad(c+2145,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[28]),48);
        vcdp->fullQuad(c+2147,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[29]),48);
        vcdp->fullQuad(c+2149,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[30]),48);
        vcdp->fullQuad(c+2151,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_low[31]),48);
        vcdp->fullQuad(c+2601,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[0]),48);
        vcdp->fullQuad(c+2603,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[1]),48);
        vcdp->fullQuad(c+2605,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[2]),48);
        vcdp->fullQuad(c+2607,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[3]),48);
        vcdp->fullQuad(c+2609,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[4]),48);
        vcdp->fullQuad(c+2611,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[5]),48);
        vcdp->fullQuad(c+2613,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[6]),48);
        vcdp->fullQuad(c+2615,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[7]),48);
        vcdp->fullQuad(c+2617,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[8]),48);
        vcdp->fullQuad(c+2619,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[9]),48);
        vcdp->fullQuad(c+2621,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[10]),48);
        vcdp->fullQuad(c+2623,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[11]),48);
        vcdp->fullQuad(c+2625,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[12]),48);
        vcdp->fullQuad(c+2627,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[13]),48);
        vcdp->fullQuad(c+2629,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[14]),48);
        vcdp->fullQuad(c+2631,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[15]),48);
        vcdp->fullQuad(c+2633,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[16]),48);
        vcdp->fullQuad(c+2635,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[17]),48);
        vcdp->fullQuad(c+2637,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[18]),48);
        vcdp->fullQuad(c+2639,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[19]),48);
        vcdp->fullQuad(c+2641,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[20]),48);
        vcdp->fullQuad(c+2643,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[21]),48);
        vcdp->fullQuad(c+2645,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[22]),48);
        vcdp->fullQuad(c+2647,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[23]),48);
        vcdp->fullQuad(c+2649,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[24]),48);
        vcdp->fullQuad(c+2651,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[25]),48);
        vcdp->fullQuad(c+2653,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[26]),48);
        vcdp->fullQuad(c+2655,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[27]),48);
        vcdp->fullQuad(c+2657,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[28]),48);
        vcdp->fullQuad(c+2659,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[29]),48);
        vcdp->fullQuad(c+2661,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[30]),48);
        vcdp->fullQuad(c+2663,(vlTOPp->R2MDC__DOT__reorder_1__DOT__ram_high[31]),48);
        vcdp->fullBit(c+3113,(((0U == (IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT__out_cnt)) 
                               & (IData)(vlTOPp->R2MDC__DOT__reorder_1__DOT__sorted_valid_1_regNext))));
        vcdp->fullBit(c+3121,((1U & ((IData)(vlTOPp->R2MDC__DOT__cnt) 
                                     >> 4U))));
        vcdp->fullBit(c+3129,((1U & ((IData)(vlTOPp->R2MDC__DOT__cnt) 
                                     >> 3U))));
        vcdp->fullBit(c+3137,((1U & ((IData)(vlTOPp->R2MDC__DOT__cnt) 
                                     >> 2U))));
        vcdp->fullBit(c+3145,((1U & ((IData)(vlTOPp->R2MDC__DOT__cnt) 
                                     >> 1U))));
        vcdp->fullBit(c+3153,((1U & (IData)(vlTOPp->R2MDC__DOT__cnt))));
        vcdp->fullBit(c+3161,((0x3fU < (IData)(vlTOPp->R2MDC__DOT__cnt))));
        vcdp->fullBus(c+3169,(vlTOPp->R2MDC__DOT__cnt),7);
        vcdp->fullBus(c+3177,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlTOPp->R2MDC__DOT__cnt)))),7);
        vcdp->fullBus(c+3185,(vlTOPp->R2MDC__DOT__reorder_1__DOT__in_cnt),5);
        vcdp->fullBus(c+3193,(vlTOPp->R2MDC__DOT__reorder_1__DOT__out_cnt),6);
        vcdp->fullBit(c+3201,(vlTOPp->mode));
        vcdp->fullBit(c+3209,(vlTOPp->raw_data_valid));
        vcdp->fullBit(c+3217,(vlTOPp->raw_data_ready));
        vcdp->fullBus(c+3225,(vlTOPp->raw_data_payload_re),24);
        vcdp->fullBus(c+3233,(vlTOPp->raw_data_payload_im),24);
        vcdp->fullBit(c+3241,(vlTOPp->result_valid));
        vcdp->fullBit(c+3249,(vlTOPp->result_payload_last));
        vcdp->fullBus(c+3257,(vlTOPp->result_payload_fragment_re),24);
        vcdp->fullBus(c+3265,(vlTOPp->result_payload_fragment_im),24);
        vcdp->fullBit(c+3273,(vlTOPp->clk));
        vcdp->fullBit(c+3281,(vlTOPp->reset));
        vcdp->fullBit(c+3289,(((IData)(vlTOPp->raw_data_valid) 
                               & (IData)(vlTOPp->raw_data_ready))));
        vcdp->fullBit(c+3297,((((IData)(vlTOPp->raw_data_valid) 
                                & (IData)(vlTOPp->raw_data_ready)) 
                               | (0x40U <= (IData)(vlTOPp->R2MDC__DOT__cnt)))));
        vcdp->fullBus(c+3305,(((IData)(vlTOPp->mode)
                                ? vlTOPp->R2MDC__DOT__out0_buf_6_re
                                : ((0xfc0000U & (VL_NEGATE_I((IData)(
                                                                     (1U 
                                                                      & (vlTOPp->R2MDC__DOT__out0_buf_6_re 
                                                                         >> 0x17U)))) 
                                                 << 0x12U)) 
                                   | (0x3ffffU & (vlTOPp->R2MDC__DOT__out0_buf_6_re 
                                                  >> 6U))))),24);
        vcdp->fullBus(c+3313,(((IData)(vlTOPp->mode)
                                ? vlTOPp->R2MDC__DOT__out0_buf_6_im
                                : ((0xfc0000U & (VL_NEGATE_I((IData)(
                                                                     (1U 
                                                                      & (vlTOPp->R2MDC__DOT__out0_buf_6_im 
                                                                         >> 0x17U)))) 
                                                 << 0x12U)) 
                                   | (0x3ffffU & (vlTOPp->R2MDC__DOT__out0_buf_6_im 
                                                  >> 6U))))),24);
        vcdp->fullBus(c+3321,(((IData)(vlTOPp->mode)
                                ? vlTOPp->R2MDC__DOT__out1_buf_6_re
                                : ((0xfc0000U & (VL_NEGATE_I((IData)(
                                                                     (1U 
                                                                      & (vlTOPp->R2MDC__DOT__out1_buf_6_re 
                                                                         >> 0x17U)))) 
                                                 << 0x12U)) 
                                   | (0x3ffffU & (vlTOPp->R2MDC__DOT__out1_buf_6_re 
                                                  >> 6U))))),24);
        vcdp->fullBus(c+3329,(((IData)(vlTOPp->mode)
                                ? vlTOPp->R2MDC__DOT__out1_buf_6_im
                                : ((0xfc0000U & (VL_NEGATE_I((IData)(
                                                                     (1U 
                                                                      & (vlTOPp->R2MDC__DOT__out1_buf_6_im 
                                                                         >> 0x17U)))) 
                                                 << 0x12U)) 
                                   | (0x3ffffU & (vlTOPp->R2MDC__DOT__out1_buf_6_im 
                                                  >> 6U))))),24);
        vcdp->fullBit(c+3337,(1U));
    }
}
