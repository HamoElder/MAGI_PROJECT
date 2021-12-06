// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBitonicSort__Syms.h"


//======================

void VBitonicSort::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VBitonicSort::traceInit, &VBitonicSort::traceFull, &VBitonicSort::traceChg, this);
}
void VBitonicSort::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VBitonicSort* t = (VBitonicSort*)userthis;
    VBitonicSort__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VBitonicSort::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VBitonicSort* t = (VBitonicSort*)userthis;
    VBitonicSort__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VBitonicSort::traceInitThis(VBitonicSort__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitonicSort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VBitonicSort::traceFullThis(VBitonicSort__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitonicSort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VBitonicSort::traceInitThis__1(VBitonicSort__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitonicSort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+673,"raw_data_valid", false,-1);
        vcdp->declBit(c+681,"raw_data_ready", false,-1);
        vcdp->declBus(c+689,"raw_data_payload_data", false,-1, 15,0);
        vcdp->declBus(c+697,"raw_data_payload_idx", false,-1, 3,0);
        vcdp->declBit(c+705,"sorted_data_0_valid", false,-1);
        vcdp->declBus(c+713,"sorted_data_0_payload_data", false,-1, 15,0);
        vcdp->declBus(c+721,"sorted_data_0_payload_idx", false,-1, 3,0);
        vcdp->declBit(c+729,"sorted_data_1_valid", false,-1);
        vcdp->declBus(c+737,"sorted_data_1_payload_data", false,-1, 15,0);
        vcdp->declBus(c+745,"sorted_data_1_payload_idx", false,-1, 3,0);
        vcdp->declBit(c+753,"clk", false,-1);
        vcdp->declBit(c+761,"reset", false,-1);
        vcdp->declBit(c+673,"BitonicSort raw_data_valid", false,-1);
        vcdp->declBit(c+681,"BitonicSort raw_data_ready", false,-1);
        vcdp->declBus(c+689,"BitonicSort raw_data_payload_data", false,-1, 15,0);
        vcdp->declBus(c+697,"BitonicSort raw_data_payload_idx", false,-1, 3,0);
        vcdp->declBit(c+705,"BitonicSort sorted_data_0_valid", false,-1);
        vcdp->declBus(c+713,"BitonicSort sorted_data_0_payload_data", false,-1, 15,0);
        vcdp->declBus(c+721,"BitonicSort sorted_data_0_payload_idx", false,-1, 3,0);
        vcdp->declBit(c+729,"BitonicSort sorted_data_1_valid", false,-1);
        vcdp->declBus(c+737,"BitonicSort sorted_data_1_payload_data", false,-1, 15,0);
        vcdp->declBus(c+745,"BitonicSort sorted_data_1_payload_idx", false,-1, 3,0);
        vcdp->declBit(c+753,"BitonicSort clk", false,-1);
        vcdp->declBit(c+761,"BitonicSort reset", false,-1);
        vcdp->declBit(c+641,"BitonicSort cmpSwitch_3_sel", false,-1);
        vcdp->declBit(c+649,"BitonicSort cmpSwitch_4_sel", false,-1);
        vcdp->declBit(c+657,"BitonicSort cmpSwitch_5_sel", false,-1);
        vcdp->declBus(c+257,"BitonicSort shiftRegister_7_output_data", false,-1, 15,0);
        vcdp->declBus(c+265,"BitonicSort shiftRegister_7_output_idx", false,-1, 3,0);
        vcdp->declBus(c+113,"BitonicSort cmpUnit_4_out1_data", false,-1, 15,0);
        vcdp->declBus(c+121,"BitonicSort cmpUnit_4_out1_idx", false,-1, 3,0);
        vcdp->declBus(c+769,"BitonicSort cmpUnit_4_out2_data", false,-1, 15,0);
        vcdp->declBus(c+777,"BitonicSort cmpUnit_4_out2_idx", false,-1, 3,0);
        vcdp->declBus(c+273,"BitonicSort shiftRegister_8_output_data", false,-1, 15,0);
        vcdp->declBus(c+281,"BitonicSort shiftRegister_8_output_idx", false,-1, 3,0);
        vcdp->declBus(c+1,"BitonicSort cmpSwitch_3_out1_data", false,-1, 15,0);
        vcdp->declBus(c+9,"BitonicSort cmpSwitch_3_out1_idx", false,-1, 3,0);
        vcdp->declBus(c+129,"BitonicSort cmpSwitch_3_out2_data", false,-1, 15,0);
        vcdp->declBus(c+137,"BitonicSort cmpSwitch_3_out2_idx", false,-1, 3,0);
        vcdp->declBus(c+289,"BitonicSort shiftRegister_9_output_data", false,-1, 15,0);
        vcdp->declBus(c+297,"BitonicSort shiftRegister_9_output_idx", false,-1, 3,0);
        vcdp->declBus(c+145,"BitonicSort cmpUnit_5_out1_data", false,-1, 15,0);
        vcdp->declBus(c+153,"BitonicSort cmpUnit_5_out1_idx", false,-1, 3,0);
        vcdp->declBus(c+49,"BitonicSort cmpUnit_5_out2_data", false,-1, 15,0);
        vcdp->declBus(c+57,"BitonicSort cmpUnit_5_out2_idx", false,-1, 3,0);
        vcdp->declBus(c+305,"BitonicSort shiftRegister_10_output_data", false,-1, 15,0);
        vcdp->declBus(c+313,"BitonicSort shiftRegister_10_output_idx", false,-1, 3,0);
        vcdp->declBus(c+17,"BitonicSort cmpSwitch_4_out1_data", false,-1, 15,0);
        vcdp->declBus(c+25,"BitonicSort cmpSwitch_4_out1_idx", false,-1, 3,0);
        vcdp->declBus(c+161,"BitonicSort cmpSwitch_4_out2_data", false,-1, 15,0);
        vcdp->declBus(c+169,"BitonicSort cmpSwitch_4_out2_idx", false,-1, 3,0);
        vcdp->declBus(c+321,"BitonicSort shiftRegister_11_output_data", false,-1, 15,0);
        vcdp->declBus(c+329,"BitonicSort shiftRegister_11_output_idx", false,-1, 3,0);
        vcdp->declBus(c+177,"BitonicSort cmpUnit_6_out1_data", false,-1, 15,0);
        vcdp->declBus(c+185,"BitonicSort cmpUnit_6_out1_idx", false,-1, 3,0);
        vcdp->declBus(c+65,"BitonicSort cmpUnit_6_out2_data", false,-1, 15,0);
        vcdp->declBus(c+73,"BitonicSort cmpUnit_6_out2_idx", false,-1, 3,0);
        vcdp->declBus(c+337,"BitonicSort shiftRegister_12_output_data", false,-1, 15,0);
        vcdp->declBus(c+345,"BitonicSort shiftRegister_12_output_idx", false,-1, 3,0);
        vcdp->declBus(c+33,"BitonicSort cmpSwitch_5_out1_data", false,-1, 15,0);
        vcdp->declBus(c+41,"BitonicSort cmpSwitch_5_out1_idx", false,-1, 3,0);
        vcdp->declBus(c+193,"BitonicSort cmpSwitch_5_out2_data", false,-1, 15,0);
        vcdp->declBus(c+201,"BitonicSort cmpSwitch_5_out2_idx", false,-1, 3,0);
        vcdp->declBus(c+353,"BitonicSort shiftRegister_13_output_data", false,-1, 15,0);
        vcdp->declBus(c+361,"BitonicSort shiftRegister_13_output_idx", false,-1, 3,0);
        vcdp->declBus(c+81,"BitonicSort cmpUnit_7_out1_data", false,-1, 15,0);
        vcdp->declBus(c+89,"BitonicSort cmpUnit_7_out1_idx", false,-1, 3,0);
        vcdp->declBus(c+97,"BitonicSort cmpUnit_7_out2_data", false,-1, 15,0);
        vcdp->declBus(c+105,"BitonicSort cmpUnit_7_out2_idx", false,-1, 3,0);
        vcdp->declBus(c+665,"BitonicSort cnt", false,-1, 4,0);
        vcdp->declBit(c+785,"BitonicSort raw_data_fire", false,-1);
        vcdp->declBit(c+793,"BitonicSort when_BitonicSort_l23", false,-1);
        vcdp->declBit(c+785,"BitonicSort raw_data_fire_1", false,-1);
        vcdp->declBit(c+209,"BitonicSort raw_data_free_run", false,-1);
        vcdp->declBus(c+689,"BitonicSort out0_buf_0_data", false,-1, 15,0);
        vcdp->declBus(c+697,"BitonicSort out0_buf_0_idx", false,-1, 3,0);
        vcdp->declBus(c+1,"BitonicSort out0_buf_1_data", false,-1, 15,0);
        vcdp->declBus(c+9,"BitonicSort out0_buf_1_idx", false,-1, 3,0);
        vcdp->declBus(c+17,"BitonicSort out0_buf_2_data", false,-1, 15,0);
        vcdp->declBus(c+25,"BitonicSort out0_buf_2_idx", false,-1, 3,0);
        vcdp->declBus(c+33,"BitonicSort out0_buf_3_data", false,-1, 15,0);
        vcdp->declBus(c+41,"BitonicSort out0_buf_3_idx", false,-1, 3,0);
        vcdp->declBus(c+689,"BitonicSort out1_buf_0_data", false,-1, 15,0);
        vcdp->declBus(c+697,"BitonicSort out1_buf_0_idx", false,-1, 3,0);
        vcdp->declBus(c+129,"BitonicSort out1_buf_1_data", false,-1, 15,0);
        vcdp->declBus(c+137,"BitonicSort out1_buf_1_idx", false,-1, 3,0);
        vcdp->declBus(c+161,"BitonicSort out1_buf_2_data", false,-1, 15,0);
        vcdp->declBus(c+169,"BitonicSort out1_buf_2_idx", false,-1, 3,0);
        vcdp->declBus(c+193,"BitonicSort out1_buf_3_data", false,-1, 15,0);
        vcdp->declBus(c+201,"BitonicSort out1_buf_3_idx", false,-1, 3,0);
        vcdp->declBus(c+369,"BitonicSort cmpUnit_7_out1_regNext_data", false,-1, 15,0);
        vcdp->declBus(c+377,"BitonicSort cmpUnit_7_out1_regNext_idx", false,-1, 3,0);
        vcdp->declBus(c+385,"BitonicSort cmpUnit_7_out2_regNext_data", false,-1, 15,0);
        vcdp->declBus(c+393,"BitonicSort cmpUnit_7_out2_regNext_idx", false,-1, 3,0);
        vcdp->declBus(c+689,"BitonicSort shiftRegister_7 input_data", false,-1, 15,0);
        vcdp->declBus(c+697,"BitonicSort shiftRegister_7 input_idx", false,-1, 3,0);
        vcdp->declBus(c+257,"BitonicSort shiftRegister_7 output_data", false,-1, 15,0);
        vcdp->declBus(c+265,"BitonicSort shiftRegister_7 output_idx", false,-1, 3,0);
        vcdp->declBit(c+209,"BitonicSort shiftRegister_7 enable", false,-1);
        vcdp->declBit(c+753,"BitonicSort shiftRegister_7 clk", false,-1);
        vcdp->declBit(c+761,"BitonicSort shiftRegister_7 reset", false,-1);
        vcdp->declBus(c+401,"BitonicSort shiftRegister_7 shift_reg_0_data", false,-1, 15,0);
        vcdp->declBus(c+409,"BitonicSort shiftRegister_7 shift_reg_0_idx", false,-1, 3,0);
        vcdp->declBus(c+417,"BitonicSort shiftRegister_7 shift_reg_1_data", false,-1, 15,0);
        vcdp->declBus(c+425,"BitonicSort shiftRegister_7 shift_reg_1_idx", false,-1, 3,0);
        vcdp->declBus(c+433,"BitonicSort shiftRegister_7 shift_reg_2_data", false,-1, 15,0);
        vcdp->declBus(c+441,"BitonicSort shiftRegister_7 shift_reg_2_idx", false,-1, 3,0);
        vcdp->declBus(c+449,"BitonicSort shiftRegister_7 shift_reg_3_data", false,-1, 15,0);
        vcdp->declBus(c+457,"BitonicSort shiftRegister_7 shift_reg_3_idx", false,-1, 3,0);
        vcdp->declBus(c+465,"BitonicSort shiftRegister_7 shift_reg_4_data", false,-1, 15,0);
        vcdp->declBus(c+473,"BitonicSort shiftRegister_7 shift_reg_4_idx", false,-1, 3,0);
        vcdp->declBus(c+481,"BitonicSort shiftRegister_7 shift_reg_5_data", false,-1, 15,0);
        vcdp->declBus(c+489,"BitonicSort shiftRegister_7 shift_reg_5_idx", false,-1, 3,0);
        vcdp->declBus(c+497,"BitonicSort shiftRegister_7 shift_reg_6_data", false,-1, 15,0);
        vcdp->declBus(c+505,"BitonicSort shiftRegister_7 shift_reg_6_idx", false,-1, 3,0);
        vcdp->declBus(c+257,"BitonicSort shiftRegister_7 shift_reg_7_data", false,-1, 15,0);
        vcdp->declBus(c+265,"BitonicSort shiftRegister_7 shift_reg_7_idx", false,-1, 3,0);
        vcdp->declBus(c+257,"BitonicSort cmpUnit_4 in1_data", false,-1, 15,0);
        vcdp->declBus(c+265,"BitonicSort cmpUnit_4 in1_idx", false,-1, 3,0);
        vcdp->declBus(c+689,"BitonicSort cmpUnit_4 in2_data", false,-1, 15,0);
        vcdp->declBus(c+697,"BitonicSort cmpUnit_4 in2_idx", false,-1, 3,0);
        vcdp->declBit(c+801,"BitonicSort cmpUnit_4 less", false,-1);
        vcdp->declBus(c+113,"BitonicSort cmpUnit_4 out1_data", false,-1, 15,0);
        vcdp->declBus(c+121,"BitonicSort cmpUnit_4 out1_idx", false,-1, 3,0);
        vcdp->declBus(c+769,"BitonicSort cmpUnit_4 out2_data", false,-1, 15,0);
        vcdp->declBus(c+777,"BitonicSort cmpUnit_4 out2_idx", false,-1, 3,0);
        vcdp->declBit(c+217,"BitonicSort cmpUnit_4 cmp_less_result", false,-1);
        vcdp->declBit(c+217,"BitonicSort cmpUnit_4 cmp_sel", false,-1);
        vcdp->declBus(c+769,"BitonicSort shiftRegister_8 input_data", false,-1, 15,0);
        vcdp->declBus(c+777,"BitonicSort shiftRegister_8 input_idx", false,-1, 3,0);
        vcdp->declBus(c+273,"BitonicSort shiftRegister_8 output_data", false,-1, 15,0);
        vcdp->declBus(c+281,"BitonicSort shiftRegister_8 output_idx", false,-1, 3,0);
        vcdp->declBit(c+209,"BitonicSort shiftRegister_8 enable", false,-1);
        vcdp->declBit(c+753,"BitonicSort shiftRegister_8 clk", false,-1);
        vcdp->declBit(c+761,"BitonicSort shiftRegister_8 reset", false,-1);
        vcdp->declBus(c+513,"BitonicSort shiftRegister_8 shift_reg_0_data", false,-1, 15,0);
        vcdp->declBus(c+521,"BitonicSort shiftRegister_8 shift_reg_0_idx", false,-1, 3,0);
        vcdp->declBus(c+529,"BitonicSort shiftRegister_8 shift_reg_1_data", false,-1, 15,0);
        vcdp->declBus(c+537,"BitonicSort shiftRegister_8 shift_reg_1_idx", false,-1, 3,0);
        vcdp->declBus(c+545,"BitonicSort shiftRegister_8 shift_reg_2_data", false,-1, 15,0);
        vcdp->declBus(c+553,"BitonicSort shiftRegister_8 shift_reg_2_idx", false,-1, 3,0);
        vcdp->declBus(c+273,"BitonicSort shiftRegister_8 shift_reg_3_data", false,-1, 15,0);
        vcdp->declBus(c+281,"BitonicSort shiftRegister_8 shift_reg_3_idx", false,-1, 3,0);
        vcdp->declBus(c+113,"BitonicSort cmpSwitch_3 in1_data", false,-1, 15,0);
        vcdp->declBus(c+121,"BitonicSort cmpSwitch_3 in1_idx", false,-1, 3,0);
        vcdp->declBus(c+273,"BitonicSort cmpSwitch_3 in2_data", false,-1, 15,0);
        vcdp->declBus(c+281,"BitonicSort cmpSwitch_3 in2_idx", false,-1, 3,0);
        vcdp->declBit(c+641,"BitonicSort cmpSwitch_3 sel", false,-1);
        vcdp->declBus(c+1,"BitonicSort cmpSwitch_3 out1_data", false,-1, 15,0);
        vcdp->declBus(c+9,"BitonicSort cmpSwitch_3 out1_idx", false,-1, 3,0);
        vcdp->declBus(c+129,"BitonicSort cmpSwitch_3 out2_data", false,-1, 15,0);
        vcdp->declBus(c+137,"BitonicSort cmpSwitch_3 out2_idx", false,-1, 3,0);
        vcdp->declBus(c+1,"BitonicSort shiftRegister_9 input_data", false,-1, 15,0);
        vcdp->declBus(c+9,"BitonicSort shiftRegister_9 input_idx", false,-1, 3,0);
        vcdp->declBus(c+289,"BitonicSort shiftRegister_9 output_data", false,-1, 15,0);
        vcdp->declBus(c+297,"BitonicSort shiftRegister_9 output_idx", false,-1, 3,0);
        vcdp->declBit(c+209,"BitonicSort shiftRegister_9 enable", false,-1);
        vcdp->declBit(c+753,"BitonicSort shiftRegister_9 clk", false,-1);
        vcdp->declBit(c+761,"BitonicSort shiftRegister_9 reset", false,-1);
        vcdp->declBus(c+561,"BitonicSort shiftRegister_9 shift_reg_0_data", false,-1, 15,0);
        vcdp->declBus(c+569,"BitonicSort shiftRegister_9 shift_reg_0_idx", false,-1, 3,0);
        vcdp->declBus(c+577,"BitonicSort shiftRegister_9 shift_reg_1_data", false,-1, 15,0);
        vcdp->declBus(c+585,"BitonicSort shiftRegister_9 shift_reg_1_idx", false,-1, 3,0);
        vcdp->declBus(c+593,"BitonicSort shiftRegister_9 shift_reg_2_data", false,-1, 15,0);
        vcdp->declBus(c+601,"BitonicSort shiftRegister_9 shift_reg_2_idx", false,-1, 3,0);
        vcdp->declBus(c+289,"BitonicSort shiftRegister_9 shift_reg_3_data", false,-1, 15,0);
        vcdp->declBus(c+297,"BitonicSort shiftRegister_9 shift_reg_3_idx", false,-1, 3,0);
        vcdp->declBus(c+289,"BitonicSort cmpUnit_5 in1_data", false,-1, 15,0);
        vcdp->declBus(c+297,"BitonicSort cmpUnit_5 in1_idx", false,-1, 3,0);
        vcdp->declBus(c+129,"BitonicSort cmpUnit_5 in2_data", false,-1, 15,0);
        vcdp->declBus(c+137,"BitonicSort cmpUnit_5 in2_idx", false,-1, 3,0);
        vcdp->declBit(c+801,"BitonicSort cmpUnit_5 less", false,-1);
        vcdp->declBus(c+145,"BitonicSort cmpUnit_5 out1_data", false,-1, 15,0);
        vcdp->declBus(c+153,"BitonicSort cmpUnit_5 out1_idx", false,-1, 3,0);
        vcdp->declBus(c+49,"BitonicSort cmpUnit_5 out2_data", false,-1, 15,0);
        vcdp->declBus(c+57,"BitonicSort cmpUnit_5 out2_idx", false,-1, 3,0);
        vcdp->declBit(c+225,"BitonicSort cmpUnit_5 cmp_less_result", false,-1);
        vcdp->declBit(c+225,"BitonicSort cmpUnit_5 cmp_sel", false,-1);
        vcdp->declBus(c+49,"BitonicSort shiftRegister_10 input_data", false,-1, 15,0);
        vcdp->declBus(c+57,"BitonicSort shiftRegister_10 input_idx", false,-1, 3,0);
        vcdp->declBus(c+305,"BitonicSort shiftRegister_10 output_data", false,-1, 15,0);
        vcdp->declBus(c+313,"BitonicSort shiftRegister_10 output_idx", false,-1, 3,0);
        vcdp->declBit(c+209,"BitonicSort shiftRegister_10 enable", false,-1);
        vcdp->declBit(c+753,"BitonicSort shiftRegister_10 clk", false,-1);
        vcdp->declBit(c+761,"BitonicSort shiftRegister_10 reset", false,-1);
        vcdp->declBus(c+609,"BitonicSort shiftRegister_10 shift_reg_0_data", false,-1, 15,0);
        vcdp->declBus(c+617,"BitonicSort shiftRegister_10 shift_reg_0_idx", false,-1, 3,0);
        vcdp->declBus(c+305,"BitonicSort shiftRegister_10 shift_reg_1_data", false,-1, 15,0);
        vcdp->declBus(c+313,"BitonicSort shiftRegister_10 shift_reg_1_idx", false,-1, 3,0);
        vcdp->declBus(c+145,"BitonicSort cmpSwitch_4 in1_data", false,-1, 15,0);
        vcdp->declBus(c+153,"BitonicSort cmpSwitch_4 in1_idx", false,-1, 3,0);
        vcdp->declBus(c+305,"BitonicSort cmpSwitch_4 in2_data", false,-1, 15,0);
        vcdp->declBus(c+313,"BitonicSort cmpSwitch_4 in2_idx", false,-1, 3,0);
        vcdp->declBit(c+649,"BitonicSort cmpSwitch_4 sel", false,-1);
        vcdp->declBus(c+17,"BitonicSort cmpSwitch_4 out1_data", false,-1, 15,0);
        vcdp->declBus(c+25,"BitonicSort cmpSwitch_4 out1_idx", false,-1, 3,0);
        vcdp->declBus(c+161,"BitonicSort cmpSwitch_4 out2_data", false,-1, 15,0);
        vcdp->declBus(c+169,"BitonicSort cmpSwitch_4 out2_idx", false,-1, 3,0);
        vcdp->declBus(c+17,"BitonicSort shiftRegister_11 input_data", false,-1, 15,0);
        vcdp->declBus(c+25,"BitonicSort shiftRegister_11 input_idx", false,-1, 3,0);
        vcdp->declBus(c+321,"BitonicSort shiftRegister_11 output_data", false,-1, 15,0);
        vcdp->declBus(c+329,"BitonicSort shiftRegister_11 output_idx", false,-1, 3,0);
        vcdp->declBit(c+209,"BitonicSort shiftRegister_11 enable", false,-1);
        vcdp->declBit(c+753,"BitonicSort shiftRegister_11 clk", false,-1);
        vcdp->declBit(c+761,"BitonicSort shiftRegister_11 reset", false,-1);
        vcdp->declBus(c+625,"BitonicSort shiftRegister_11 shift_reg_0_data", false,-1, 15,0);
        vcdp->declBus(c+633,"BitonicSort shiftRegister_11 shift_reg_0_idx", false,-1, 3,0);
        vcdp->declBus(c+321,"BitonicSort shiftRegister_11 shift_reg_1_data", false,-1, 15,0);
        vcdp->declBus(c+329,"BitonicSort shiftRegister_11 shift_reg_1_idx", false,-1, 3,0);
        vcdp->declBus(c+321,"BitonicSort cmpUnit_6 in1_data", false,-1, 15,0);
        vcdp->declBus(c+329,"BitonicSort cmpUnit_6 in1_idx", false,-1, 3,0);
        vcdp->declBus(c+161,"BitonicSort cmpUnit_6 in2_data", false,-1, 15,0);
        vcdp->declBus(c+169,"BitonicSort cmpUnit_6 in2_idx", false,-1, 3,0);
        vcdp->declBit(c+801,"BitonicSort cmpUnit_6 less", false,-1);
        vcdp->declBus(c+177,"BitonicSort cmpUnit_6 out1_data", false,-1, 15,0);
        vcdp->declBus(c+185,"BitonicSort cmpUnit_6 out1_idx", false,-1, 3,0);
        vcdp->declBus(c+65,"BitonicSort cmpUnit_6 out2_data", false,-1, 15,0);
        vcdp->declBus(c+73,"BitonicSort cmpUnit_6 out2_idx", false,-1, 3,0);
        vcdp->declBit(c+233,"BitonicSort cmpUnit_6 cmp_less_result", false,-1);
        vcdp->declBit(c+233,"BitonicSort cmpUnit_6 cmp_sel", false,-1);
        vcdp->declBus(c+65,"BitonicSort shiftRegister_12 input_data", false,-1, 15,0);
        vcdp->declBus(c+73,"BitonicSort shiftRegister_12 input_idx", false,-1, 3,0);
        vcdp->declBus(c+337,"BitonicSort shiftRegister_12 output_data", false,-1, 15,0);
        vcdp->declBus(c+345,"BitonicSort shiftRegister_12 output_idx", false,-1, 3,0);
        vcdp->declBit(c+209,"BitonicSort shiftRegister_12 enable", false,-1);
        vcdp->declBit(c+753,"BitonicSort shiftRegister_12 clk", false,-1);
        vcdp->declBit(c+761,"BitonicSort shiftRegister_12 reset", false,-1);
        vcdp->declBus(c+337,"BitonicSort shiftRegister_12 shift_reg_0_data", false,-1, 15,0);
        vcdp->declBus(c+345,"BitonicSort shiftRegister_12 shift_reg_0_idx", false,-1, 3,0);
        vcdp->declBus(c+177,"BitonicSort cmpSwitch_5 in1_data", false,-1, 15,0);
        vcdp->declBus(c+185,"BitonicSort cmpSwitch_5 in1_idx", false,-1, 3,0);
        vcdp->declBus(c+337,"BitonicSort cmpSwitch_5 in2_data", false,-1, 15,0);
        vcdp->declBus(c+345,"BitonicSort cmpSwitch_5 in2_idx", false,-1, 3,0);
        vcdp->declBit(c+657,"BitonicSort cmpSwitch_5 sel", false,-1);
        vcdp->declBus(c+33,"BitonicSort cmpSwitch_5 out1_data", false,-1, 15,0);
        vcdp->declBus(c+41,"BitonicSort cmpSwitch_5 out1_idx", false,-1, 3,0);
        vcdp->declBus(c+193,"BitonicSort cmpSwitch_5 out2_data", false,-1, 15,0);
        vcdp->declBus(c+201,"BitonicSort cmpSwitch_5 out2_idx", false,-1, 3,0);
        vcdp->declBus(c+33,"BitonicSort shiftRegister_13 input_data", false,-1, 15,0);
        vcdp->declBus(c+41,"BitonicSort shiftRegister_13 input_idx", false,-1, 3,0);
        vcdp->declBus(c+353,"BitonicSort shiftRegister_13 output_data", false,-1, 15,0);
        vcdp->declBus(c+361,"BitonicSort shiftRegister_13 output_idx", false,-1, 3,0);
        vcdp->declBit(c+801,"BitonicSort shiftRegister_13 enable", false,-1);
        vcdp->declBit(c+753,"BitonicSort shiftRegister_13 clk", false,-1);
        vcdp->declBit(c+761,"BitonicSort shiftRegister_13 reset", false,-1);
        vcdp->declBus(c+353,"BitonicSort shiftRegister_13 shift_reg_0_data", false,-1, 15,0);
        vcdp->declBus(c+361,"BitonicSort shiftRegister_13 shift_reg_0_idx", false,-1, 3,0);
        vcdp->declBus(c+353,"BitonicSort cmpUnit_7 in1_data", false,-1, 15,0);
        vcdp->declBus(c+361,"BitonicSort cmpUnit_7 in1_idx", false,-1, 3,0);
        vcdp->declBus(c+193,"BitonicSort cmpUnit_7 in2_data", false,-1, 15,0);
        vcdp->declBus(c+201,"BitonicSort cmpUnit_7 in2_idx", false,-1, 3,0);
        vcdp->declBit(c+209,"BitonicSort cmpUnit_7 less", false,-1);
        vcdp->declBus(c+81,"BitonicSort cmpUnit_7 out1_data", false,-1, 15,0);
        vcdp->declBus(c+89,"BitonicSort cmpUnit_7 out1_idx", false,-1, 3,0);
        vcdp->declBus(c+97,"BitonicSort cmpUnit_7 out2_data", false,-1, 15,0);
        vcdp->declBus(c+105,"BitonicSort cmpUnit_7 out2_idx", false,-1, 3,0);
        vcdp->declBit(c+241,"BitonicSort cmpUnit_7 cmp_less_result", false,-1);
        vcdp->declBit(c+249,"BitonicSort cmpUnit_7 cmp_sel", false,-1);
    }
}

void VBitonicSort::traceFullThis__1(VBitonicSort__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitonicSort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(((4U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
                             ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_3_data)
                             : (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_4_out1_data))),16);
        vcdp->fullBus(c+9,(((4U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
                             ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_3_idx)
                             : (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_4_out1_idx))),4);
        vcdp->fullBus(c+17,(((2U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
                              ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_1_data)
                              : (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_5_out1_data))),16);
        vcdp->fullBus(c+25,(((2U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
                              ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_1_idx)
                              : (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_5_out1_idx))),4);
        vcdp->fullBus(c+33,(((1U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
                              ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_12__DOT__shift_reg_0_data)
                              : (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_6_out1_data))),16);
        vcdp->fullBus(c+41,(((1U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
                              ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_12__DOT__shift_reg_0_idx)
                              : (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_6_out1_idx))),4);
        vcdp->fullBus(c+49,(((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_5__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_3_out2_data)
                              : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_3_data))),16);
        vcdp->fullBus(c+57,(((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_5__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_3_out2_idx)
                              : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_3_idx))),4);
        vcdp->fullBus(c+65,(((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_6__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_4_out2_data)
                              : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_1_data))),16);
        vcdp->fullBus(c+73,(((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_6__DOT__cmp_less_result)
                              ? (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_4_out2_idx)
                              : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_1_idx))),4);
        vcdp->fullBus(c+81,(((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_7__DOT__cmp_sel)
                              ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_13__DOT__shift_reg_0_data)
                              : (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_5_out2_data))),16);
        vcdp->fullBus(c+89,(((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_7__DOT__cmp_sel)
                              ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_13__DOT__shift_reg_0_idx)
                              : (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_5_out2_idx))),4);
        vcdp->fullBus(c+97,(((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_7__DOT__cmp_sel)
                              ? (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_5_out2_data)
                              : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_13__DOT__shift_reg_0_data))),16);
        vcdp->fullBus(c+105,(((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_7__DOT__cmp_sel)
                               ? (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_5_out2_idx)
                               : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_13__DOT__shift_reg_0_idx))),4);
        vcdp->fullBus(c+113,(vlTOPp->BitonicSort__DOT__cmpUnit_4_out1_data),16);
        vcdp->fullBus(c+121,(vlTOPp->BitonicSort__DOT__cmpUnit_4_out1_idx),4);
        vcdp->fullBus(c+129,(vlTOPp->BitonicSort__DOT__cmpSwitch_3_out2_data),16);
        vcdp->fullBus(c+137,(vlTOPp->BitonicSort__DOT__cmpSwitch_3_out2_idx),4);
        vcdp->fullBus(c+145,(vlTOPp->BitonicSort__DOT__cmpUnit_5_out1_data),16);
        vcdp->fullBus(c+153,(vlTOPp->BitonicSort__DOT__cmpUnit_5_out1_idx),4);
        vcdp->fullBus(c+161,(vlTOPp->BitonicSort__DOT__cmpSwitch_4_out2_data),16);
        vcdp->fullBus(c+169,(vlTOPp->BitonicSort__DOT__cmpSwitch_4_out2_idx),4);
        vcdp->fullBus(c+177,(vlTOPp->BitonicSort__DOT__cmpUnit_6_out1_data),16);
        vcdp->fullBus(c+185,(vlTOPp->BitonicSort__DOT__cmpUnit_6_out1_idx),4);
        vcdp->fullBus(c+193,(vlTOPp->BitonicSort__DOT__cmpSwitch_5_out2_data),16);
        vcdp->fullBus(c+201,(vlTOPp->BitonicSort__DOT__cmpSwitch_5_out2_idx),4);
        vcdp->fullBit(c+209,(vlTOPp->BitonicSort__DOT__when_BitonicSort_l23));
        vcdp->fullBit(c+217,(vlTOPp->BitonicSort__DOT__cmpUnit_4__DOT__cmp_less_result));
        vcdp->fullBit(c+225,(vlTOPp->BitonicSort__DOT__cmpUnit_5__DOT__cmp_less_result));
        vcdp->fullBit(c+233,(vlTOPp->BitonicSort__DOT__cmpUnit_6__DOT__cmp_less_result));
        vcdp->fullBit(c+241,(vlTOPp->BitonicSort__DOT__cmpUnit_7__DOT__cmp_less_result));
        vcdp->fullBit(c+249,(vlTOPp->BitonicSort__DOT__cmpUnit_7__DOT__cmp_sel));
        vcdp->fullBus(c+257,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_7_data),16);
        vcdp->fullBus(c+265,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_7_idx),4);
        vcdp->fullBus(c+273,(vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_3_data),16);
        vcdp->fullBus(c+281,(vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_3_idx),4);
        vcdp->fullBus(c+289,(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_3_data),16);
        vcdp->fullBus(c+297,(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_3_idx),4);
        vcdp->fullBus(c+305,(vlTOPp->BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_1_data),16);
        vcdp->fullBus(c+313,(vlTOPp->BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_1_idx),4);
        vcdp->fullBus(c+321,(vlTOPp->BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_1_data),16);
        vcdp->fullBus(c+329,(vlTOPp->BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_1_idx),4);
        vcdp->fullBus(c+337,(vlTOPp->BitonicSort__DOT__shiftRegister_12__DOT__shift_reg_0_data),16);
        vcdp->fullBus(c+345,(vlTOPp->BitonicSort__DOT__shiftRegister_12__DOT__shift_reg_0_idx),4);
        vcdp->fullBus(c+353,(vlTOPp->BitonicSort__DOT__shiftRegister_13__DOT__shift_reg_0_data),16);
        vcdp->fullBus(c+361,(vlTOPp->BitonicSort__DOT__shiftRegister_13__DOT__shift_reg_0_idx),4);
        vcdp->fullBus(c+369,(vlTOPp->BitonicSort__DOT__cmpUnit_7_out1_regNext_data),16);
        vcdp->fullBus(c+377,(vlTOPp->BitonicSort__DOT__cmpUnit_7_out1_regNext_idx),4);
        vcdp->fullBus(c+385,(vlTOPp->BitonicSort__DOT__cmpUnit_7_out2_regNext_data),16);
        vcdp->fullBus(c+393,(vlTOPp->BitonicSort__DOT__cmpUnit_7_out2_regNext_idx),4);
        vcdp->fullBus(c+401,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_0_data),16);
        vcdp->fullBus(c+409,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_0_idx),4);
        vcdp->fullBus(c+417,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_1_data),16);
        vcdp->fullBus(c+425,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_1_idx),4);
        vcdp->fullBus(c+433,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_2_data),16);
        vcdp->fullBus(c+441,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_2_idx),4);
        vcdp->fullBus(c+449,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_3_data),16);
        vcdp->fullBus(c+457,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_3_idx),4);
        vcdp->fullBus(c+465,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_4_data),16);
        vcdp->fullBus(c+473,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_4_idx),4);
        vcdp->fullBus(c+481,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_5_data),16);
        vcdp->fullBus(c+489,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_5_idx),4);
        vcdp->fullBus(c+497,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_6_data),16);
        vcdp->fullBus(c+505,(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_6_idx),4);
        vcdp->fullBus(c+513,(vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_0_data),16);
        vcdp->fullBus(c+521,(vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_0_idx),4);
        vcdp->fullBus(c+529,(vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_1_data),16);
        vcdp->fullBus(c+537,(vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_1_idx),4);
        vcdp->fullBus(c+545,(vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_2_data),16);
        vcdp->fullBus(c+553,(vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_2_idx),4);
        vcdp->fullBus(c+561,(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_0_data),16);
        vcdp->fullBus(c+569,(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_0_idx),4);
        vcdp->fullBus(c+577,(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_1_data),16);
        vcdp->fullBus(c+585,(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_1_idx),4);
        vcdp->fullBus(c+593,(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_2_data),16);
        vcdp->fullBus(c+601,(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_2_idx),4);
        vcdp->fullBus(c+609,(vlTOPp->BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_0_data),16);
        vcdp->fullBus(c+617,(vlTOPp->BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_0_idx),4);
        vcdp->fullBus(c+625,(vlTOPp->BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_0_data),16);
        vcdp->fullBus(c+633,(vlTOPp->BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_0_idx),4);
        vcdp->fullBit(c+641,((1U & ((IData)(vlTOPp->BitonicSort__DOT__cnt) 
                                    >> 2U))));
        vcdp->fullBit(c+649,((1U & ((IData)(vlTOPp->BitonicSort__DOT__cnt) 
                                    >> 1U))));
        vcdp->fullBit(c+657,((1U & (IData)(vlTOPp->BitonicSort__DOT__cnt))));
        vcdp->fullBus(c+665,(vlTOPp->BitonicSort__DOT__cnt),5);
        vcdp->fullBit(c+673,(vlTOPp->raw_data_valid));
        vcdp->fullBit(c+681,(vlTOPp->raw_data_ready));
        vcdp->fullBus(c+689,(vlTOPp->raw_data_payload_data),16);
        vcdp->fullBus(c+697,(vlTOPp->raw_data_payload_idx),4);
        vcdp->fullBit(c+705,(vlTOPp->sorted_data_0_valid));
        vcdp->fullBus(c+713,(vlTOPp->sorted_data_0_payload_data),16);
        vcdp->fullBus(c+721,(vlTOPp->sorted_data_0_payload_idx),4);
        vcdp->fullBit(c+729,(vlTOPp->sorted_data_1_valid));
        vcdp->fullBus(c+737,(vlTOPp->sorted_data_1_payload_data),16);
        vcdp->fullBus(c+745,(vlTOPp->sorted_data_1_payload_idx),4);
        vcdp->fullBit(c+753,(vlTOPp->clk));
        vcdp->fullBit(c+761,(vlTOPp->reset));
        vcdp->fullBus(c+769,(((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_4__DOT__cmp_less_result)
                               ? (IData)(vlTOPp->raw_data_payload_data)
                               : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_7_data))),16);
        vcdp->fullBus(c+777,(((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_4__DOT__cmp_less_result)
                               ? (IData)(vlTOPp->raw_data_payload_idx)
                               : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_7_idx))),4);
        vcdp->fullBit(c+785,(((IData)(vlTOPp->raw_data_valid) 
                              & (IData)(vlTOPp->raw_data_ready))));
        vcdp->fullBit(c+793,((((IData)(vlTOPp->raw_data_valid) 
                               & (IData)(vlTOPp->raw_data_ready)) 
                              | (0x10U <= (IData)(vlTOPp->BitonicSort__DOT__cnt)))));
        vcdp->fullBit(c+801,(1U));
    }
}
